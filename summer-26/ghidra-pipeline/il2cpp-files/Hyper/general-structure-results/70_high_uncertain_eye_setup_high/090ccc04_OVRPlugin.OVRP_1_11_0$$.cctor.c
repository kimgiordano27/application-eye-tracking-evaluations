/*
FUNCTION_NAME: OVRPlugin.OVRP_1_11_0$$.cctor
ENTRY_POINT: 090ccc04
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_11_0___cctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  long unaff_x19;
  long unaff_x20;
  ulong uVar12;
  long *plVar13;
  long lVar14;
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
  ulong in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  FUN_09038efc(param_5,0,0);
  *(ulong *)(unaff_x20 + 0x28) = CONCAT44(in_stack_00000038,uStack0000000000000034);
  *(ulong *)(unaff_x20 + 0x20) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
  *(ulong *)(unaff_x20 + 0x1c) = CONCAT44(uStack000000000000002c,uStack0000000000000028);
  *(ulong *)(unaff_x20 + 0x14) = in_stack_00000020;
  puVar5 = PTR_DAT_0ac40a38;
  plVar13 = (long *)PTR_DAT_0ac09788;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    *(undefined4 *)(*(long *)(unaff_x19 + 0x48) + 0x70) = 0x3f800000;
    puVar4 = PTR_DAT_0ac0f100;
    uVar12 = 0;
    lVar14 = -0x1a0;
    lVar15 = 0x20;
    uVar7 = in_stack_00000020;
    while( true ) {
      uVar17 = (undefined4)uVar7;
      if (*(long *)(unaff_x19 + 0x60) == 0) break;
      lVar6 = FUN_06b7fba4(*(long *)(unaff_x19 + 0x60),uVar12 & 0xffffffff,*(undefined8 *)puVar5);
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        thunk_FUN_049a583c(*plVar13);
      }
      uVar7 = FUN_0a17cd28(lVar6,0,0);
      lVar10 = *(long *)(unaff_x19 + 0x48);
      if ((uVar7 & 1) == 0) {
        if ((lVar10 == 0) || (lVar6 == 0)) break;
        lVar10 = *(long *)(lVar10 + 0x48);
        lVar8 = FUN_0a17834c(lVar6,0);
        if ((lVar8 == 0) || (uVar16 = FUN_0a18a4e0(lVar8,0), lVar10 == 0)) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_090ccf04;
        lVar10 = lVar10 + lVar14;
        *(undefined4 *)(lVar10 + 0x1c0) = uVar16;
        *(undefined4 *)(lVar10 + 0x1c4) = uVar17;
        *(undefined4 *)(lVar10 + 0x1c8) = param_3;
        *(undefined4 *)(lVar10 + 0x1cc) = param_4;
        uVar9 = FUN_0a17834c(lVar6,0);
        FUN_09038efc(&stack0x00000020,uVar9,0,0);
        uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
        uStack0000000000000048 = uStack0000000000000028;
        in_stack_00000040 = in_stack_00000020;
        uStack000000000000004c = uStack000000000000002c;
        uStack0000000000000050 = uStack0000000000000030;
        uVar9 = FUN_0a17834c();
        FUN_0904d4ec(&stack0x00000000 + 4,uVar9,&stack0x00000040,0);
        uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
        uVar7 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
        uStack0000000000000048 = in_stack_00000000._12_4_;
        in_stack_00000040 = in_stack_00000000._4_8_;
        uStack000000000000004c = uStack0000000000000010;
        uStack0000000000000050 = uStack0000000000000014;
        if ((*(long *)(unaff_x19 + 0x48) == 0) ||
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar6 == 0)) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_090ccf04;
        puVar1 = (undefined8 *)(lVar6 + lVar15);
        *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
        puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
        puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
        *puVar1 = in_stack_00000000._4_8_;
      }
      else {
        if (lVar10 == 0) break;
        lVar6 = *(long *)(lVar10 + 0x48);
        if (DAT_0b31f57b == '\0') {
          FUN_04947ee4(puVar4);
          DAT_0b31f57b = '\x01';
        }
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) {
LAB_090ccf04:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        uVar9 = **(undefined8 **)(*(long *)puVar4 + 0xb8);
        *(undefined8 *)(lVar6 + lVar14 + 0x1c8) = (*(undefined8 **)(*(long *)puVar4 + 0xb8))[1];
        *(undefined8 *)(lVar6 + lVar14 + 0x1c0) = uVar9;
        puVar3 = PTR_DAT_0ac0def8;
        if (*(long *)(unaff_x19 + 0x48) == 0) break;
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
        if (DAT_0b31f3e7 == '\0') {
          FUN_04947ee4(PTR_DAT_0ac0def8);
          puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          uVar17 = *puVar11;
          uVar18 = puVar11[1];
          param_3 = puVar11[2];
          DAT_0b31f3e7 = '\x01';
          plVar13 = (long *)PTR_DAT_0ac09788;
          if (DAT_0b31f57b == '\0') {
            FUN_04947ee4(puVar4);
            DAT_0b31f57b = '\x01';
            plVar13 = (long *)PTR_DAT_0ac09788;
          }
        }
        else {
          puVar11 = *(undefined4 **)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
          uVar17 = *puVar11;
          uVar18 = puVar11[1];
          param_3 = puVar11[2];
        }
        uVar7 = (ulong)uVar18;
        param_4 = **(undefined4 **)(*(long *)puVar4 + 0xb8);
        in_stack_00000020 = 0;
        uStack0000000000000028 = 0;
        uStack000000000000002c = 0;
        in_stack_00000038 = 0;
        uStack0000000000000030 = 0;
        uStack0000000000000034 = 0;
        FUN_0a188128(uVar17,&stack0x00000020,0);
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_090ccf04;
        puVar2 = (ulong *)(lVar6 + lVar15);
        *(undefined4 *)(puVar2 + 3) = in_stack_00000038;
        puVar2[2] = CONCAT44(uStack0000000000000034,uStack0000000000000030);
        puVar2[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
        *puVar2 = in_stack_00000020;
      }
      lVar14 = lVar14 + 0x10;
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x1c;
      if (lVar14 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


