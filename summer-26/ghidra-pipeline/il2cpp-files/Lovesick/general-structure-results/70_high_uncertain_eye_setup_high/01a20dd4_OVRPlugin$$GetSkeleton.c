/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton
ENTRY_POINT: 01a20dd4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSkeleton(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  
  thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
  thunk_FUN_00d48444(StringLiteral_2598);
  thunk_FUN_00d48444(Method_MedleyStairAmpController_FourthAmpBlasted__);
  *(undefined1 *)(unaff_x19 + 0xa0b) = 1;
  if (*(char *)(unaff_x21 + 0x31) == '\0') {
    return;
  }
  plVar6 = *(long **)(unaff_x21 + 0x28);
  lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
  if ((lVar1 == 0) || (FUN_016f27fc(), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_2598) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 10) * 0x10 + 0x138);
        goto LAB_01a20ea4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_2598,10);
LAB_01a20ea4:
                    /* WARNING: Could not recover jumptable at 0x01a20eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,lVar1,puVar2[1]);
  return;
}


