/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_SetBoundaryVisible
ENTRY_POINT: 04f8c9b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_SetBoundaryVisible
               (long param_1,undefined1 param_2 [16],ulong param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 *puVar10;
  long unaff_x19;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  puVar4 = PTR_DAT_06317848;
  plVar12 = (long *)PTR_DAT_06312520;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    puVar3 = PTR_DAT_06312cd8;
    uVar11 = 0;
    lVar13 = -0x1a0;
    lVar14 = 0x20;
    while( true ) {
      uVar16 = (undefined4)param_3;
      if (*(long *)(unaff_x19 + 0x60) == 0) break;
      lVar5 = FUN_037a6268(*(long *)(unaff_x19 + 0x60),uVar11 & 0xffffffff,*(undefined8 *)puVar4);
      if (*(int *)(*plVar12 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*plVar12);
      }
      uVar6 = FUN_05c8e378(lVar5,0,0);
      lVar9 = *(long *)(unaff_x19 + 0x48);
      if ((uVar6 & 1) == 0) {
        if ((lVar9 == 0) || (lVar5 == 0)) break;
        lVar9 = *(long *)(lVar9 + 0x48);
        lVar7 = FUN_05c89340(lVar5,0);
        if ((lVar7 == 0) || (uVar15 = FUN_05c9c2ec(lVar7,0), lVar9 == 0)) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_04f8cc98;
        lVar9 = lVar9 + lVar13;
        *(undefined4 *)(lVar9 + 0x1c0) = uVar15;
        *(undefined4 *)(lVar9 + 0x1c4) = uVar16;
        *(undefined4 *)(lVar9 + 0x1c8) = param_4;
        *(undefined4 *)(lVar9 + 0x1cc) = param_5;
        uVar8 = FUN_05c89340(lVar5,0);
        FUN_04ef8cd4(&stack0x00000020,uVar8,0,0);
        uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
        uStack0000000000000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack000000000000004c = uStack000000000000002c;
        uStack0000000000000050 = uStack0000000000000030;
        uVar8 = FUN_05c89340();
        FUN_04f0d2c4(&stack0x00000000 + 4,uVar8,&stack0x00000040,0);
        uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        param_3 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        uStack0000000000000048 = in_stack_00000000._12_4_;
        in_stack_00000040 = in_stack_00000000._4_8_;
        uStack000000000000004c = uStack0000000000000010;
        uStack0000000000000050 = uStack0000000000000014;
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar5 == 0)) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_04f8cc98;
        puVar1 = (undefined8 *)(lVar5 + lVar14);
        *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
        puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
        puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *puVar1 = in_stack_00000000._4_8_;
      }
      else {
        if (lVar9 == 0) break;
        lVar5 = *(long *)(lVar9 + 0x48);
        if (DAT_066c1d9a == '\0') {
          FUN_02b3c81c(puVar3);
          DAT_066c1d9a = '\x01';
        }
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) {
LAB_04f8cc98:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        uVar8 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        *(undefined8 *)(lVar5 + lVar13 + 0x1c8) = (*(undefined8 **)(*(long *)puVar3 + 0xb8))[1];
        *(undefined8 *)(lVar5 + lVar13 + 0x1c0) = uVar8;
        puVar2 = PTR_DAT_06312438;
        if (*(long *)(unaff_x19 + 0x48) == 0) break;
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
        if (DAT_066c1d97 == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
          uVar16 = *puVar10;
          uVar17 = puVar10[1];
          param_4 = puVar10[2];
          DAT_066c1d97 = '\x01';
          plVar12 = (long *)PTR_DAT_06312520;
          if (DAT_066c1d9a == '\0') {
            FUN_02b3c81c(puVar3);
            DAT_066c1d9a = '\x01';
            plVar12 = (long *)PTR_DAT_06312520;
          }
        }
        else {
          puVar10 = *(undefined4 **)(*(long *)PTR_DAT_06312438 + 0xb8);
          uVar16 = *puVar10;
          uVar17 = puVar10[1];
          param_4 = puVar10[2];
        }
        param_3 = (ulong)uVar17;
        param_5 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_05c99d80(uVar16,&stack0x00000020,0);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_04f8cc98;
        puVar1 = (undefined8 *)(lVar5 + lVar14);
        *(undefined4 *)(puVar1 + 3) = in_stack_00000038;
        puVar1[2] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
        puVar1[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *puVar1 = in_stack_00000020;
      }
      lVar13 = lVar13 + 0x10;
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x1c;
      if (lVar13 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


