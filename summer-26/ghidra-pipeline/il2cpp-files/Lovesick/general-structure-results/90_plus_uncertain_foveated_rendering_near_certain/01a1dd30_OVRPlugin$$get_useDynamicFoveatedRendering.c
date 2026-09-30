/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 01a1dd30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFoveatedRendering(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x21;
  
  if (*(char *)(unaff_x21 + 0x54) == '\0') {
    return;
  }
                    /* try { // try from 01a1dd40 to 01b1dd67 has its CatchHandler @ 01a1dfbc */
  plVar6 = *(long **)(unaff_x21 + 0x48);
  lVar1 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
                    /* try { // try from 01a1dd68 to 01b1de07 has its CatchHandler @ 01a1d188 */
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
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
        goto LAB_01a1ddd4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_00d59724(plVar6,*(long *)StringLiteral_2598,0xb);
LAB_01a1ddd4:
                    /* WARNING: Could not recover jumptable at 0x01a1dde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,lVar1,puVar2[1]);
  return;
}


