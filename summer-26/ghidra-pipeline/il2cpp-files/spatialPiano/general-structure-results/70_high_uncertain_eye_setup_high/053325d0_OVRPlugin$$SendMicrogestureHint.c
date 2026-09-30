/*
FUNCTION_NAME: OVRPlugin$$SendMicrogestureHint
ENTRY_POINT: 053325d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SendMicrogestureHint(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long in_x9;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  long *unaff_x23;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000060 [16];
  
  piVar4 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar4 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 0x12) * 0x10 + 0x138);
      goto LAB_0533260c;
    }
    in_x9 = in_x9 + -1;
    piVar4 = piVar4 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_02f421d0();
LAB_0533260c:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) != 0) {
    lVar3 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar4 + 0xd) * 0x10 + 0x138);
          goto LAB_05332670;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_02f421d0();
LAB_05332670:
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) != 0) {
      lVar3 = *unaff_x20;
      lVar5 = *(long *)(unaff_x19 + 0x18);
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uStack0000000000000034 = in_stack_00000060._4_8_;
      if (uVar2 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_053326e8;
          }
          uVar2 = uVar2 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_02f421d0();
LAB_053326e8:
      (*(code *)*puVar1)();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uStack0000000000000014 = uStack0000000000000034;
      FUN_05332750(lVar5,in_stack_00000048);
      uVar2 = (ulong)*(uint *)(unaff_x19 + 0x10);
      if (*(uint *)(unaff_x19 + 0x10) == 0xffffffff) {
        uVar2 = FUN_05331db4();
        *(int *)(unaff_x19 + 0x10) = (int)uVar2;
      }
      FUN_05331e18(uVar2,*(undefined8 *)(unaff_x19 + 0x18));
    }
  }
  return;
}


