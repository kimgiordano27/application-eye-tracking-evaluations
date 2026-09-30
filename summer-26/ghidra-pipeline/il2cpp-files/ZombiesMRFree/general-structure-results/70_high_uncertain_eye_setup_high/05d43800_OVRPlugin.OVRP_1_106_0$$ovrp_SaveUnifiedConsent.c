/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsent
ENTRY_POINT: 05d43800
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsent
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4,
               undefined4 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar8;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  uVar9 = param_3._8_8_;
  uVar4 = param_3._0_8_;
  while( true ) {
    uStack0000000000000084 = (undefined4)uVar9;
    uStack0000000000000088 = (undefined4)((ulong)uVar9 >> 0x20);
    uStack000000000000007c = (undefined4)uVar4;
    uStack0000000000000080 = (undefined4)((ulong)uVar4 >> 0x20);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x20) {
LAB_05d43918:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    uVar10 = CONCAT44(uStack000000000000007c,in_stack_00000078);
    puVar6 = (undefined8 *)(param_1 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar6 + 0x14) = uVar9;
      *(undefined8 *)((long)puVar6 + 0xc) = uVar4;
      puVar6[1] = uVar10;
      *puVar6 = in_stack_00000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d43914;
      uVar4 = in_stack_00000070;
      lVar1 = FUN_04430018(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_06f6dae8);
      uVar11 = (undefined4)uVar4;
      if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
      }
      uVar2 = FUN_068f9b78(lVar1,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d43914;
      lVar8 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar2 & 1) == 0) break;
      if (*(char *)(unaff_x24 + 0x663) == '\0') {
        FUN_02fe925c();
        *(undefined1 *)(unaff_x24 + 0x663) = 1;
      }
      if (lVar8 == 0) goto LAB_05d43914;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_05d43918;
      uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar8 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar8 + unaff_x29 + -0xc) = uVar4;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d43914;
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x26 + 0x669) == '\0') {
        FUN_02fe925c();
        cVar5 = *(char *)(unaff_x24 + 0x663);
        *(undefined1 *)(unaff_x26 + 0x669) = 1;
      }
      else {
        cVar5 = '\x01';
      }
      puVar7 = *(undefined4 **)(*unaff_x27 + 0xb8);
      uVar11 = *puVar7;
      uVar12 = puVar7[1];
      param_4 = (ulong)(uint)puVar7[2];
      if (cVar5 == '\0') {
        FUN_02fe925c();
        *(undefined1 *)(unaff_x24 + 0x663) = 1;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_5 = *puVar7;
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      uStack000000000000007c = 0;
      uStack0000000000000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000084 = 0;
      FUN_06902890(uVar11,uVar12,param_4,param_5,puVar7[1],puVar7[2],puVar7[3],&stack0x00000070,0);
      if (lVar1 == 0) goto LAB_05d43914;
      uVar9 = CONCAT44(uStack0000000000000088,uStack0000000000000084);
      if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_05d43918;
      uVar4 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar10 = CONCAT44(uStack000000000000007c,in_stack_00000078);
      puVar6 = (undefined8 *)(lVar1 + unaff_x28);
    }
    if (((lVar1 == 0) || (lVar3 = FUN_068f5d7c(lVar1,0), lVar3 == 0)) ||
       (uVar12 = FUN_0690459c(lVar3,0), lVar8 == 0)) break;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_05d43918;
    puVar7 = (undefined4 *)(lVar8 + unaff_x29);
    puVar7[-3] = uVar12;
    puVar7[-2] = uVar11;
    puVar7[-1] = (int)param_4;
    *puVar7 = param_5;
    uVar4 = FUN_068f5d7c(lVar1,0);
    FUN_05caf184(&stack0x00000070,uVar4,0,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,in_stack_00000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar4 = FUN_068f5d7c();
    FUN_05cc37e4(&stack0x00000070,uVar4,&stack0x00000090,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,in_stack_00000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(uStack0000000000000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    param_1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    uVar9 = *(undefined8 *)(unaff_x25 + 0x14);
    uVar4 = *(undefined8 *)(unaff_x25 + 0xc);
  }
LAB_05d43914:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


