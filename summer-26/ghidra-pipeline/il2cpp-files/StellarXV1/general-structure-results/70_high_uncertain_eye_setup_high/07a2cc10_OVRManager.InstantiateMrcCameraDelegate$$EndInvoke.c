/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 07a2cc10
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  int *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined8 uStack0000000000000044;
  undefined1 in_stack_00000050 [16];
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 uStack00000000000000b0;
  undefined8 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  iVar1 = *unaff_x20;
  iVar7 = FUN_05886c88(param_1,*unaff_x21);
  if ((iVar1 != iVar7) && ((unaff_x20[1] & 0xfffffffeU) == 2)) {
    FUN_07a27c20(&stack0x00000050 + 4);
    *(ulong *)(unaff_x19 + 0x1c0) = CONCAT44(uStack0000000000000060,in_stack_00000050._12_4_);
    *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000050._4_8_;
    *(undefined8 *)(unaff_x19 + 0x1cc) = in_stack_00000068;
    *(ulong *)(unaff_x19 + 0x1c4) = CONCAT44(uStack0000000000000064,uStack0000000000000060);
    FUN_07a2cd78();
    uVar9 = FUN_07a27d10();
    *(undefined8 *)(unaff_x19 + 0x198) = uVar9;
    thunk_FUN_040ec700(unaff_x19 + 0x198,uVar9);
    FUN_07a28358(&stack0x000000a0);
    uVar8 = FUN_05886c88();
    in_stack_00000038 = in_stack_000000a8;
    in_stack_00000030 = in_stack_000000a0;
    uStack0000000000000044 = uStack00000000000000b4;
    in_stack_00000040 = uStack00000000000000b0;
    FUN_079bc3b0(&stack0x00000070,uVar8,4,&stack0x00000030,*(undefined8 *)(unaff_x19 + 0x108),0);
    uVar6 = in_stack_00000098;
    uVar5 = in_stack_00000090;
    uVar4 = in_stack_00000088;
    uVar3 = in_stack_00000080;
    uVar2 = in_stack_00000078;
    uVar9 = in_stack_00000070;
    if ((*(long *)(unaff_x19 + 0xd0) == 0) ||
       (plVar14 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar14 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092babe8) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_07a2cd38;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092babe8,0);
LAB_07a2cd38:
    in_stack_000000c8 = uVar2;
    in_stack_000000c0 = uVar9;
    in_stack_000000d8 = uVar4;
    in_stack_000000d0 = uVar3;
    in_stack_000000e8 = uVar6;
    in_stack_000000e0 = uVar5;
    (*(code *)*puVar10)(plVar14,&stack0x000000c0,puVar10[1]);
  }
  return;
}


