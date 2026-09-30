/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$UpdateCategory
ENTRY_POINT: 06d79ab8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__UpdateCategory(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long in_x9;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int iVar18;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *plVar19;
  long unaff_x25;
  long *plVar20;
  ulong uVar21;
  undefined8 unaff_x29;
  undefined1 auVar22 [16];
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
  
  uVar6 = (**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  lVar7 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_052124c0(lVar7,*unaff_x21);
  lVar8 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_052124c0(lVar8,*unaff_x21);
  lVar9 = FUN_03c8f97c(*unaff_x20,(ulong)uVar6);
  plVar20 = (long *)(unaff_x25 + 0x58);
  *plVar20 = lVar9;
  thunk_FUN_03d233cc(plVar20,lVar9);
  if (0 < (int)uVar6) {
    uVar21 = 0;
    iVar18 = 0;
    plVar19 = (long *)PTR_DAT_08e71508;
    do {
      lVar9 = *unaff_x19;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar19) {
            puVar10 = (undefined8 *)(lVar9 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_06d79b88;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03cf1348();
LAB_06d79b88:
      auVar22 = (*(code *)*puVar10)();
      lVar9 = auVar22._0_8_;
      if (lVar9 != 0) {
        in_stack_00000068._4_4_ = 0x37;
        if (DAT_0940fffc == '\0') {
          auVar22 = FUN_03c8f898(PTR_DAT_08e69f40);
          DAT_0940fffc = '\x01';
        }
        in_stack_00000058 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
        in_stack_00000050 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
        uVar15 = FUN_06d7a1a8(auVar22._0_8_,auVar22._8_8_,lVar9,unaff_x29,(long)&stack0x00000068 + 4
                              ,&stack0x00000050);
        lVar14 = *plVar20;
        if (lVar14 == 0) goto LAB_06d79fd8;
        bVar5 = *(uint *)(lVar14 + 0x18) <= uVar21;
        if ((uVar15 & 1) == 0) {
          if (bVar5) goto LAB_06d79fdc;
          *(undefined4 *)(lVar14 + uVar21 * 4 + 0x20) = 0xffffffff;
        }
        else {
          if (bVar5) {
LAB_06d79fdc:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          *(int *)(lVar14 + uVar21 * 4 + 0x20) = iVar18;
          if (lVar7 == 0) goto LAB_06d79fd8;
          uVar13 = *(undefined8 *)(lVar9 + 0x18);
          lVar14 = *(long *)(lVar7 + 0x10);
          lVar16 = *(long *)PTR_DAT_08e6a298;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar14 == 0) goto LAB_06d79fd8;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
            thunk_FUN_03d233cc();
          }
          else {
            FUN_05212cf4(lVar7,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar4 = in_stack_00000068._4_4_;
          uVar13 = FUN_06d755c4(unaff_x29,in_stack_00000068._4_4_);
          if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
            thunk_FUN_03cd7500(*(long *)PTR_DAT_08e68f00);
          }
          uVar15 = FUN_085dfaac(uVar13,0,0);
          if ((uVar15 & 1) != 0) {
            in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar4);
            uVar11 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000018);
            in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(lVar9 + 0x10));
            uVar12 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,&stack0x00000028);
            uVar11 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8f4d0,uVar11,uVar12,0);
            if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
            }
            FUN_085a437c(uVar11,0);
          }
          if (lVar8 == 0) goto LAB_06d79fd8;
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)PTR_DAT_08e6a298;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_06d79fd8;
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar10 = uVar13;
            thunk_FUN_03d233cc(puVar10,uVar13);
          }
          else {
            FUN_05212cf4(lVar8,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          iVar18 = iVar18 + 1;
          plVar19 = (long *)PTR_DAT_08e71508;
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar6);
  }
  uVar21 = FUN_085f07cc(in_stack_00000008,0);
  if ((uVar21 & 1) != 0) {
    FUN_085f07dc(in_stack_00000008,0);
  }
  uVar21 = FUN_085f07cc(unaff_x25 + 0x68,0);
  if ((uVar21 & 1) != 0) {
    FUN_085f07dc(unaff_x25 + 0x68,0);
  }
  puVar3 = PTR_DAT_08e6dc78;
  if (lVar7 != 0) {
    uVar13 = FUN_05214770(lVar7,*(undefined8 *)PTR_DAT_08e6dc78);
    in_stack_00000018 = 0;
    FUN_085f066c(&stack0x00000018,uVar13,0xffffffff,0);
    *in_stack_00000008 = in_stack_00000018;
    puVar2 = PTR_DAT_08e85450;
    if (lVar8 != 0) {
      uVar13 = FUN_05214770(lVar8,*(undefined8 *)puVar3);
      in_stack_00000028 = 0;
      FUN_085f066c(&stack0x00000028,uVar13,0xffffffff,0);
      plVar20 = (long *)(unaff_x25 + 0x38);
      *(undefined8 *)(unaff_x25 + 0x68) = in_stack_00000028;
      if (*plVar20 != 0) {
        FUN_05594600(plVar20,*(undefined8 *)PTR_DAT_08e85478);
      }
      puVar3 = PTR_DAT_08e8f4c8;
      uVar6 = FUN_085f0a00(in_stack_00000008,0);
      uVar21 = (ulong)uVar6;
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_055942ac(&stack0x00000018,uVar21,4,1,*(undefined8 *)puVar2);
      *(undefined8 *)(unaff_x25 + 0x40) = in_stack_00000020;
      *plVar20 = in_stack_00000018;
      plVar19 = (long *)(unaff_x25 + 0x48);
      *(undefined8 *)(unaff_x25 + 0x78) = in_stack_00000020;
      *(long *)(unaff_x25 + 0x70) = in_stack_00000018;
      if (*plVar19 != 0) {
        FUN_055ed558(plVar19,*(undefined8 *)PTR_DAT_08e8f4b8);
      }
      puVar2 = PTR_DAT_08e6abb0;
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_055ed204(&stack0x00000018,uVar21,4,1,*(undefined8 *)puVar3);
      *(undefined8 *)(unaff_x25 + 0x50) = in_stack_00000020;
      *plVar19 = in_stack_00000018;
      if (0 < (int)uVar6) {
        lVar7 = 0;
        do {
          puVar10 = (undefined8 *)(*plVar19 + lVar7);
          lVar7 = lVar7 + 0x50;
          puVar10[7] = 0;
          puVar10[6] = 0;
          puVar10[9] = 0;
          puVar10[8] = 0;
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar10[1] = 0;
          *puVar10 = 0;
        } while (uVar21 * 0x50 - lVar7 != 0);
      }
      in_stack_00000038 = *(undefined8 *)(unaff_x25 + 0x40);
      in_stack_00000030 = *plVar20;
      in_stack_00000048 = *(undefined8 *)(unaff_x25 + 0x50);
      in_stack_00000040 = *plVar19;
      *(undefined8 *)(unaff_x25 + 0x88) = in_stack_00000038;
      *(long *)(unaff_x25 + 0x80) = in_stack_00000030;
      *(undefined8 *)(unaff_x25 + 0x98) = in_stack_00000048;
      *(long *)(unaff_x25 + 0x90) = in_stack_00000040;
      uVar13 = FUN_03c8f97c(*(undefined8 *)puVar2,*(undefined4 *)(unaff_x25 + 0x50));
      *(undefined8 *)(unaff_x25 + 200) = uVar13;
      thunk_FUN_03d233cc();
      FUN_06d7a2f8(unaff_x25,unaff_x29);
      return;
    }
  }
LAB_06d79fd8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


