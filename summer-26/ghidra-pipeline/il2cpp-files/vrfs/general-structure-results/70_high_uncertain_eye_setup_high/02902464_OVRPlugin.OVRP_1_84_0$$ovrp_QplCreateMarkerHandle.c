/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplCreateMarkerHandle
ENTRY_POINT: 02902464
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplCreateMarkerHandle(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long in_stack_00000018;
  
  if (*(long *)(param_1 + 0xb0) == unaff_x22) {
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xf) * 0x10 + 0x138);
          goto LAB_02902bb0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80();
LAB_02902bb0:
    (*(code *)*puVar1)();
  }
  else {
    if (*(int *)(param_2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      param_1 = *(long *)(*(long *)(*unaff_x25 + 0xb8) + 8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
    }
    if (*(uint *)(param_1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    if (*(long *)(param_1 + 0x28) == unaff_x22) {
      lVar2 = *(long *)(unaff_x23 + 0x28);
      goto joined_r0x029027d4;
    }
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x10) * 0x10 + 0x138);
          goto LAB_02902b88;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80();
LAB_02902b88:
    (*(code *)*puVar1)();
  }
  lVar2 = *(long *)(unaff_x23 + 0x28);
joined_r0x029027d4:
  if (lVar2 != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


