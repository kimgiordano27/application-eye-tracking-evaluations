/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$RegisterHandle
ENTRY_POINT: 06d79984
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_InstanceCache__RegisterHandle(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  long *unaff_x19;
  long unaff_x20;
  long *plVar23;
  long unaff_x25;
  long *plVar24;
  long unaff_x29;
  undefined1 auVar25 [16];
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
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x2b8));
  FUN_03c8f898(PTR_DAT_08e6a2b0);
  FUN_03c8f898(PTR_DAT_08e85478);
  FUN_03c8f898(PTR_DAT_08e8f4b8);
  FUN_03c8f898(PTR_DAT_08e85450);
  FUN_03c8f898(PTR_DAT_08e8f4c8);
  FUN_03c8f898(PTR_DAT_08e8f4c0);
  FUN_03c8f898(PTR_DAT_08e8ed00);
  FUN_03c8f898(PTR_DAT_08e68f00);
  FUN_03c8f898(PTR_DAT_08e8f4d0);
  *(undefined1 *)(unaff_x20 + 0x9dd) = 1;
  puVar1 = (undefined8 *)(unaff_x25 + 0x60);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  uVar11 = FUN_085f07cc(puVar1,0);
  if ((uVar11 & 1) != 0) {
    iVar8 = FUN_06d79fe0();
    iVar9 = FUN_085f0a00(puVar1,0);
    if (iVar8 == iVar9) {
      return;
    }
  }
  puVar5 = PTR_DAT_08e6baa0;
  puVar4 = PTR_DAT_08e6a2b8;
  puVar3 = PTR_DAT_08e6a2b0;
  if ((unaff_x29 != 0) && (unaff_x19 != (long *)0x0)) {
    lVar18 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar11 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_08e71528) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_06d79ac0;
        }
        uVar11 = uVar11 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar11 != 0);
    }
    puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d79ac0:
    uVar10 = (*(code *)*puVar12)();
    lVar18 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
    FUN_052124c0(lVar18,*(undefined8 *)puVar4);
    lVar13 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
    FUN_052124c0(lVar13,*(undefined8 *)puVar4);
    lVar14 = FUN_03c8f97c(*(undefined8 *)puVar5,(ulong)uVar10);
    plVar24 = (long *)(unaff_x25 + 0x58);
    *plVar24 = lVar14;
    thunk_FUN_03d233cc(plVar24,lVar14);
    if (0 < (int)uVar10) {
      uVar11 = 0;
      iVar8 = 0;
      plVar23 = (long *)PTR_DAT_08e71508;
      do {
        lVar14 = *unaff_x19;
        uVar20 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar20 != 0) {
          piVar22 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *plVar23) {
              puVar12 = (undefined8 *)(lVar14 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_06d79b88;
            }
            uVar20 = uVar20 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar20 != 0);
        }
        puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d79b88:
        auVar25 = (*(code *)*puVar12)();
        lVar14 = auVar25._0_8_;
        if (lVar14 != 0) {
          in_stack_00000068._4_4_ = 0x37;
          if (DAT_0940fffc == '\0') {
            auVar25 = FUN_03c8f898(PTR_DAT_08e69f40);
            DAT_0940fffc = '\x01';
          }
          in_stack_00000058 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
          in_stack_00000050 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
          uVar20 = FUN_06d7a1a8(auVar25._0_8_,auVar25._8_8_,lVar14,unaff_x29,
                                (long)&stack0x00000068 + 4,&stack0x00000050);
          lVar19 = *plVar24;
          if (lVar19 == 0) goto LAB_06d79fd8;
          bVar7 = *(uint *)(lVar19 + 0x18) <= uVar11;
          if ((uVar20 & 1) == 0) {
            if (bVar7) goto LAB_06d79fdc;
            *(undefined4 *)(lVar19 + uVar11 * 4 + 0x20) = 0xffffffff;
          }
          else {
            if (bVar7) {
LAB_06d79fdc:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb38();
            }
            *(int *)(lVar19 + uVar11 * 4 + 0x20) = iVar8;
            if (lVar18 == 0) goto LAB_06d79fd8;
            uVar17 = *(undefined8 *)(lVar14 + 0x18);
            lVar19 = *(long *)(lVar18 + 0x10);
            lVar21 = *(long *)PTR_DAT_08e6a298;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_06d79fd8;
            uVar2 = *(uint *)(lVar18 + 0x18);
            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar18 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar19 + (long)(int)uVar2 * 8 + 0x20) = uVar17;
              thunk_FUN_03d233cc();
            }
            else {
              FUN_05212cf4(lVar18,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
            }
            uVar6 = in_stack_00000068._4_4_;
            uVar17 = FUN_06d755c4(unaff_x29,in_stack_00000068._4_4_);
            if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e68f00);
            }
            uVar20 = FUN_085dfaac(uVar17,0,0);
            if ((uVar20 & 1) != 0) {
              in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,uVar6);
              uVar15 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e8dbd8,&stack0x00000018);
              in_stack_00000028 = CONCAT44(in_stack_00000028._4_4_,*(undefined4 *)(lVar14 + 0x10));
              uVar16 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e71500,&stack0x00000028);
              uVar15 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e8f4d0,uVar15,uVar16,0);
              if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
                thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
              }
              FUN_085a437c(uVar15,0);
            }
            if (lVar13 == 0) goto LAB_06d79fd8;
            lVar14 = *(long *)(lVar13 + 0x10);
            lVar19 = *(long *)PTR_DAT_08e6a298;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar14 == 0) goto LAB_06d79fd8;
            uVar2 = *(uint *)(lVar13 + 0x18);
            if (uVar2 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar2 + 1;
              puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
              *puVar12 = uVar17;
              thunk_FUN_03d233cc(puVar12,uVar17);
            }
            else {
              FUN_05212cf4(lVar13,uVar17,
                           *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
            }
            iVar8 = iVar8 + 1;
            plVar23 = (long *)PTR_DAT_08e71508;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    uVar11 = FUN_085f07cc(puVar1,0);
    if ((uVar11 & 1) != 0) {
      FUN_085f07dc(puVar1,0);
    }
    uVar11 = FUN_085f07cc(unaff_x25 + 0x68,0);
    if ((uVar11 & 1) != 0) {
      FUN_085f07dc(unaff_x25 + 0x68,0);
    }
    puVar3 = PTR_DAT_08e6dc78;
    if (lVar18 != 0) {
      uVar17 = FUN_05214770(lVar18,*(undefined8 *)PTR_DAT_08e6dc78);
      in_stack_00000018 = 0;
      FUN_085f066c(&stack0x00000018,uVar17,0xffffffff,0);
      *puVar1 = in_stack_00000018;
      puVar4 = PTR_DAT_08e85450;
      if (lVar13 != 0) {
        uVar17 = FUN_05214770(lVar13,*(undefined8 *)puVar3);
        in_stack_00000028 = 0;
        FUN_085f066c(&stack0x00000028,uVar17,0xffffffff,0);
        plVar24 = (long *)(unaff_x25 + 0x38);
        *(undefined8 *)(unaff_x25 + 0x68) = in_stack_00000028;
        if (*plVar24 != 0) {
          FUN_05594600(plVar24,*(undefined8 *)PTR_DAT_08e85478);
        }
        puVar3 = PTR_DAT_08e8f4c8;
        uVar10 = FUN_085f0a00(puVar1,0);
        uVar11 = (ulong)uVar10;
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_055942ac(&stack0x00000018,uVar11,4,1,*(undefined8 *)puVar4);
        *(undefined8 *)(unaff_x25 + 0x40) = in_stack_00000020;
        *plVar24 = in_stack_00000018;
        plVar23 = (long *)(unaff_x25 + 0x48);
        *(undefined8 *)(unaff_x25 + 0x78) = in_stack_00000020;
        *(long *)(unaff_x25 + 0x70) = in_stack_00000018;
        if (*plVar23 != 0) {
          FUN_055ed558(plVar23,*(undefined8 *)PTR_DAT_08e8f4b8);
        }
        puVar4 = PTR_DAT_08e6abb0;
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_055ed204(&stack0x00000018,uVar11,4,1,*(undefined8 *)puVar3);
        *(undefined8 *)(unaff_x25 + 0x50) = in_stack_00000020;
        *plVar23 = in_stack_00000018;
        if (0 < (int)uVar10) {
          lVar18 = 0;
          do {
            puVar1 = (undefined8 *)(*plVar23 + lVar18);
            lVar18 = lVar18 + 0x50;
            puVar1[7] = 0;
            puVar1[6] = 0;
            puVar1[9] = 0;
            puVar1[8] = 0;
            puVar1[3] = 0;
            puVar1[2] = 0;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[1] = 0;
            *puVar1 = 0;
          } while (uVar11 * 0x50 - lVar18 != 0);
        }
        in_stack_00000038 = *(undefined8 *)(unaff_x25 + 0x40);
        in_stack_00000030 = *plVar24;
        in_stack_00000048 = *(undefined8 *)(unaff_x25 + 0x50);
        in_stack_00000040 = *plVar23;
        *(undefined8 *)(unaff_x25 + 0x88) = in_stack_00000038;
        *(long *)(unaff_x25 + 0x80) = in_stack_00000030;
        *(undefined8 *)(unaff_x25 + 0x98) = in_stack_00000048;
        *(long *)(unaff_x25 + 0x90) = in_stack_00000040;
        uVar17 = FUN_03c8f97c(*(undefined8 *)puVar4,*(undefined4 *)(unaff_x25 + 0x50));
        *(undefined8 *)(unaff_x25 + 200) = uVar17;
        thunk_FUN_03d233cc();
        FUN_06d7a2f8(unaff_x25,unaff_x29);
        return;
      }
    }
  }
LAB_06d79fd8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


