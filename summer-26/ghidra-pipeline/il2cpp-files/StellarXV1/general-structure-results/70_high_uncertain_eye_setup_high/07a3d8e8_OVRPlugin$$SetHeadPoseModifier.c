/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 07a3d8e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetHeadPoseModifier(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x22;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  puVar1 = (undefined8 *)FUN_040b1e00(param_1,param_2,4);
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 == 0) {
    FUN_07a3dab8();
    FUN_07a3dafc();
    return;
  }
  lVar3 = FUN_07a24e04(lVar2,0);
  if (lVar3 == 0) {
    FUN_07a3dab8();
  }
  else {
    FUN_07a24e04(lVar2,0);
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_07a3d9b0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a3d9b0:
    (*(code *)*puVar1)();
    FUN_07a3db44();
    *(undefined1 *)(unaff_x19 + 0x60) = 0;
  }
  FUN_07a24f10(&stack0x00000040);
  plVar6 = *(long **)(unaff_x19 + 0x70);
  if (plVar6 == (long *)0x0) {
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    uStack0000000000000034 = uStack0000000000000054;
    uStack0000000000000030 = uStack0000000000000050;
  }
  else {
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092ed800) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_07a3da54;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092ed800,2);
LAB_07a3da54:
    (*(code *)*puVar1)(&stack0x00000020,plVar6,&stack0x00000040,puVar1[1]);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    uStack0000000000000014 = uStack0000000000000034;
    FUN_07a52108(0x3f800000);
    *(undefined1 *)(unaff_x19 + 0x61) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


