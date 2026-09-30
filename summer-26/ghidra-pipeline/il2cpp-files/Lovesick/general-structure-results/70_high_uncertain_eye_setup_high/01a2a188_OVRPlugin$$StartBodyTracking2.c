/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking2
ENTRY_POINT: 01a2a188
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking2(void)

{
  undefined8 *puVar1;
  undefined1 in_w8;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 unaff_w19;
  long unaff_x20;
  long *plVar5;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xb29) = in_w8;
  plVar5 = *(long **)(unaff_x20 + 0x38);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)
           Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
         ) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_01a2a1e8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_00d59724(plVar5,*(long *)
                                Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
                        ,0);
LAB_01a2a1e8:
                    /* WARNING: Could not recover jumptable at 0x01a2a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,unaff_w19,puVar1[1]);
  return;
}


