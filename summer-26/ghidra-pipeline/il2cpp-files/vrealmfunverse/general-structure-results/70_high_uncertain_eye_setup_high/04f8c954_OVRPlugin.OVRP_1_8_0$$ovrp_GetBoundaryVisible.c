/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryVisible
ENTRY_POINT: 04f8c954
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 in_w8;
  long lVar10;
  undefined4 *puVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  ulong uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  
  *(undefined1 *)(unaff_x20 + 0xd7d) = in_w8;
  lVar12 = *(long *)(unaff_x19 + 0x48);
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  if (lVar12 != 0) {
    *(undefined2 *)(lVar12 + 0x10) = 0x101;
    *(undefined1 *)(lVar12 + 0x12) = 1;
    *(undefined1 *)(lVar12 + 0x50) = 1;
    *(undefined4 *)(lVar12 + 0x30) = 3;
    uVar6 = FUN_05c89340();
    FUN_04ef8cd4(&stack0x00000020,uVar6,0,0);
    *(ulong *)(lVar12 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
    *(ulong *)(lVar12 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
    *(ulong *)(lVar12 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    *(ulong *)(lVar12 + 0x14) = in_stack_00000020;
    puVar5 = PTR_DAT_06317848;
    plVar14 = (long *)PTR_DAT_06312520;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x70) = 0x3f800000;
      puVar4 = PTR_DAT_06312cd8;
      uVar13 = 0;
      lVar12 = -0x1a0;
      lVar15 = 0x20;
      uVar8 = in_stack_00000020;
      while( true ) {
        uVar17 = (undefined4)uVar8;
        if (*(long *)(unaff_x19 + 0x60) == 0) break;
        lVar7 = FUN_037a6268(*(long *)(unaff_x19 + 0x60),uVar13 & 0xffffffff,*(undefined8 *)puVar5);
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*plVar14);
        }
        uVar8 = FUN_05c8e378(lVar7,0,0);
        lVar10 = *(long *)(unaff_x19 + 0x48);
        if ((uVar8 & 1) == 0) {
          if ((lVar10 == 0) || (lVar7 == 0)) break;
          lVar10 = *(long *)(lVar10 + 0x48);
          lVar9 = FUN_05c89340(lVar7,0);
          if ((lVar9 == 0) || (uVar16 = FUN_05c9c2ec(lVar9,0), lVar10 == 0)) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_04f8cc98;
          lVar10 = lVar10 + lVar12;
          *(undefined4 *)(lVar10 + 0x1c0) = uVar16;
          *(undefined4 *)(lVar10 + 0x1c4) = uVar17;
          *(undefined4 *)(lVar10 + 0x1c8) = param_3;
          *(undefined4 *)(lVar10 + 0x1cc) = param_4;
          uVar6 = FUN_05c89340(lVar7,0);
          FUN_04ef8cd4(&stack0x00000020,uVar6,0,0);
          uStack0000000000000048 = uStack0000000000000028;
          uStack0000000000000040 = in_stack_00000020;
          uStack0000000000000054 = uStack0000000000000034;
          uStack0000000000000058 = in_stack_00000038;
          uStack000000000000004c = uStack000000000000002c;
          uStack0000000000000050 = uStack0000000000000030;
          uVar6 = FUN_05c89340();
          FUN_04f0d2c4(&stack0x00000000 + 4,uVar6,&stack0x00000040,0);
          uVar8 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
          uStack0000000000000048 = in_stack_00000000._12_4_;
          uStack0000000000000040 = in_stack_00000000._4_8_;
          uStack0000000000000054 = uStack0000000000000018;
          uStack0000000000000058 = uStack000000000000001c;
          uStack000000000000004c = uStack0000000000000010;
          uStack0000000000000050 = uStack0000000000000014;
          if ((*(long *)(unaff_x19 + 0x48) == 0) ||
             (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar7 == 0)) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_04f8cc98;
          puVar1 = (undefined8 *)(lVar7 + lVar15);
          *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
          puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
          puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
          *puVar1 = in_stack_00000000._4_8_;
        }
        else {
          if (lVar10 == 0) break;
          lVar7 = *(long *)(lVar10 + 0x48);
          if (DAT_066c1d9a == '\0') {
            FUN_02b3c81c(puVar4);
            DAT_066c1d9a = '\x01';
          }
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) {
LAB_04f8cc98:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          uVar6 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
          *(undefined8 *)(lVar7 + lVar12 + 0x1c8) = (*(undefined8 **)(*(long *)puVar4 + 0xb8))[1];
          *(undefined8 *)(lVar7 + lVar12 + 0x1c0) = uVar6;
          puVar3 = PTR_DAT_06312438;
          if (*(long *)(unaff_x19 + 0x48) == 0) break;
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
          if (DAT_066c1d97 == '\0') {
            FUN_02b3c81c(PTR_DAT_06312438);
            puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
            uVar17 = *puVar11;
            uVar18 = puVar11[1];
            param_3 = puVar11[2];
            DAT_066c1d97 = '\x01';
            plVar14 = (long *)PTR_DAT_06312520;
            if (DAT_066c1d9a == '\0') {
              FUN_02b3c81c(puVar4);
              DAT_066c1d9a = '\x01';
              plVar14 = (long *)PTR_DAT_06312520;
            }
          }
          else {
            puVar11 = *(undefined4 **)(*(long *)PTR_DAT_06312438 + 0xb8);
            uVar17 = *puVar11;
            uVar18 = puVar11[1];
            param_3 = puVar11[2];
          }
          uVar8 = (ulong)uVar18;
          param_4 = **(undefined4 **)(*(long *)puVar4 + 0xb8);
          in_stack_00000020 = 0;
          uStack0000000000000028 = 0;
          uStack000000000000002c = 0;
          in_stack_00000038 = 0;
          uStack0000000000000030 = 0;
          uStack0000000000000034 = 0;
          FUN_05c99d80(uVar17,&stack0x00000020,0);
          if (lVar7 == 0) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_04f8cc98;
          puVar2 = (ulong *)(lVar7 + lVar15);
          *(undefined4 *)(puVar2 + 3) = in_stack_00000038;
          puVar2[2] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
          puVar2[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
          *puVar2 = in_stack_00000020;
        }
        lVar12 = lVar12 + 0x10;
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x1c;
        if (lVar12 == 0) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


