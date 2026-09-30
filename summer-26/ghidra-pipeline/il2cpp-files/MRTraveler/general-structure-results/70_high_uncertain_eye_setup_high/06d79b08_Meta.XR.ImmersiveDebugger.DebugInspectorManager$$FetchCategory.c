/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$FetchCategory
ENTRY_POINT: 06d79b08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__FetchCategory(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *unaff_x19;
  int iVar14;
  long *plVar15;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *plVar16;
  ulong uVar17;
  uint unaff_w27;
  undefined8 unaff_x29;
  undefined1 auVar18 [16];
  undefined8 *in_stack_00000008;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  plVar16 = (long *)(unaff_x25 + 0x58);
  *plVar16 = param_1;
  thunk_FUN_03d233cc(plVar16,param_1);
  if (0 < (int)unaff_w27) {
    uVar17 = 0;
    iVar14 = 0;
    plVar15 = (long *)PTR_DAT_08e71508;
    do {
      lVar10 = *unaff_x19;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *plVar15) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06d79b88;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348();
LAB_06d79b88:
      auVar18 = (*(code *)*puVar6)();
      lVar10 = auVar18._0_8_;
      if (lVar10 != 0) {
        in_stack_00000068._4_4_ = 0x37;
        if (DAT_0940fffc == '\0') {
          auVar18 = FUN_03c8f898(PTR_DAT_08e69f40);
          DAT_0940fffc = '\x01';
        }
        in_stack_00000058 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
        in_stack_00000050 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
        uVar12 = FUN_06d7a1a8(auVar18._0_8_,auVar18._8_8_,lVar10,unaff_x29,
                              (long)&stack0x00000068 + 4,&stack0x00000050);
        lVar11 = *plVar16;
        if (lVar11 == 0) goto LAB_06d79fd8;
        bVar4 = *(uint *)(lVar11 + 0x18) <= uVar17;
        if ((uVar12 & 1) == 0) {
          if (bVar4) goto LAB_06d79fdc;
          *(undefined4 *)(lVar11 + uVar17 * 4 + 0x20) = 0xffffffff;
        }
        else {
          if (bVar4) {
LAB_06d79fdc:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(int *)(lVar11 + uVar17 * 4 + 0x20) = iVar14;
          if (unaff_x24 == 0) goto LAB_06d79fd8;
          uVar9 = *(undefined8 *)(lVar10 + 0x18);
          lVar11 = *(long *)(unaff_x24 + 0x10);
          *(int *)(unaff_x24 + 0x1c) = *(int *)(unaff_x24 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_06d79fd8;
          uVar5 = *(uint *)(unaff_x24 + 0x18);
          if (uVar5 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(unaff_x24 + 0x18) = uVar5 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar5 * 8 + 0x20) = uVar9;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4();
          }
          uVar3 = in_stack_00000068._4_4_;
          uVar9 = FUN_06d755c4(unaff_x29,in_stack_00000068._4_4_);
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e68f00);
          }
          uVar12 = FUN_085dfaac(uVar9,0,0);
          if ((uVar12 & 1) != 0) {
            in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar3);
            uVar7 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000018);
            in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(lVar10 + 0x10));
            uVar8 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,&stack0x00000028);
            uVar7 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8f4d0,uVar7,uVar8,0);
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
            }
            FUN_085a437c(uVar7,0);
          }
          if (unaff_x23 == 0) goto LAB_06d79fd8;
          lVar10 = *(long *)(unaff_x23 + 0x10);
          *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_06d79fd8;
          uVar5 = *(uint *)(unaff_x23 + 0x18);
          if (uVar5 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(unaff_x23 + 0x18) = uVar5 + 1;
            puVar6 = (undefined8 *)(lVar10 + (long)(int)uVar5 * 8 + 0x20);
            *puVar6 = uVar9;
            thunk_FUN_03d233cc(puVar6,uVar9);
          }
          else {
            FUN_05212cf4();
          }
          iVar14 = iVar14 + 1;
          plVar15 = (long *)PTR_DAT_08e71508;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != unaff_w27);
  }
  uVar17 = FUN_085f07cc(in_stack_00000008,0);
  if ((uVar17 & 1) != 0) {
    FUN_085f07dc(in_stack_00000008,0);
  }
  uVar17 = FUN_085f07cc(unaff_x25 + 0x68,0);
  if ((uVar17 & 1) != 0) {
    FUN_085f07dc(unaff_x25 + 0x68,0);
  }
  if (unaff_x24 != 0) {
    uVar9 = FUN_05214770();
    in_stack_00000018 = 0;
    FUN_085f066c(&stack0x00000018,uVar9,0xffffffff,0);
    *in_stack_00000008 = in_stack_00000018;
    puVar1 = PTR_DAT_08e85450;
    if (unaff_x23 != 0) {
      uVar9 = FUN_05214770();
      in_stack_00000028 = 0;
      FUN_085f066c(&stack0x00000028,uVar9,0xffffffff,0);
      plVar16 = (long *)(unaff_x25 + 0x38);
      *(undefined8 *)(unaff_x25 + 0x68) = in_stack_00000028;
      if (*plVar16 != 0) {
        FUN_05594600(plVar16,*(undefined8 *)PTR_DAT_08e85478);
      }
      puVar2 = PTR_DAT_08e8f4c8;
      uVar5 = FUN_085f0a00(in_stack_00000008,0);
      uVar17 = (ulong)uVar5;
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_055942ac(&stack0x00000018,uVar17,4,1,*(undefined8 *)puVar1);
      *(undefined8 *)(unaff_x25 + 0x40) = in_stack_00000020;
      *plVar16 = in_stack_00000018;
      plVar15 = (long *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x25 + 0x78) = in_stack_00000020;
      *(long *)(unaff_x25 + 0x70) = in_stack_00000018;
      if (*plVar15 != 0) {
        FUN_055ed558(plVar15,*(undefined8 *)PTR_DAT_08e8f4b8);
      }
      puVar1 = PTR_DAT_08e6abb0;
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_055ed204(&stack0x00000018,uVar17,4,1,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x25 + 0x50) = in_stack_00000020;
      *plVar15 = in_stack_00000018;
      if (0 < (int)uVar5) {
        lVar10 = 0;
        do {
          puVar6 = (undefined8 *)(*plVar15 + lVar10);
          lVar10 = lVar10 + 0x50;
          puVar6[7] = 0;
          puVar6[6] = 0;
          puVar6[9] = 0;
          puVar6[8] = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
          puVar6[5] = 0;
          puVar6[4] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
        } while (uVar17 * 0x50 - lVar10 != 0);
      }
      in_stack_00000038 = *(undefined8 *)(unaff_x25 + 0x40);
      in_stack_00000030 = *plVar16;
      in_stack_00000048 = *(undefined8 *)(unaff_x25 + 0x50);
      in_stack_00000040 = *plVar15;
      *(undefined8 *)(unaff_x25 + 0x88) = in_stack_00000038;
      *(long *)(unaff_x25 + 0x80) = in_stack_00000030;
      *(undefined8 *)(unaff_x25 + 0x98) = in_stack_00000048;
      *(long *)(unaff_x25 + 0x90) = in_stack_00000040;
      uVar9 = FUN_03c8f97c(*(undefined8 *)puVar1,*(undefined4 *)(unaff_x25 + 0x50));
      *(undefined8 *)(unaff_x25 + 200) = uVar9;
      thunk_FUN_03d233cc();
      FUN_06d7a2f8(unaff_x25,unaff_x29);
      return;
    }
  }
LAB_06d79fd8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


