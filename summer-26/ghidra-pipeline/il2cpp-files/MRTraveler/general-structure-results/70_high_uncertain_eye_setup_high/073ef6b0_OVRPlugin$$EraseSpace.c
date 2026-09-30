/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 073ef6b0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpace(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long *unaff_x23;
  
  while( true ) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
    if (uVar4 <= unaff_x22) break;
    *(undefined4 *)(lVar3 + unaff_x22 * 4 + 0x20) = param_1;
    if (uVar4 <= unaff_x22 + 1) break;
    uVar1 = unaff_x22 + 2;
    *(undefined4 *)(lVar3 + (unaff_x22 + 1) * 4 + 0x20) = param_2;
    if (uVar4 <= uVar1) break;
    unaff_w21 = unaff_w21 + 1;
    unaff_x22 = unaff_x22 + 3;
    *(undefined4 *)(lVar3 + uVar1 * 4 + 0x20) = param_3;
    if (unaff_w21 == 0x18) {
      return;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073ef6a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_073ef6a0:
    param_1 = (*(code *)*puVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


