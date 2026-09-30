/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedItemBase$$get_Valid
ENTRY_POINT: 06d7a3a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x06d7a738) */
/* WARNING: Removing unreachable block (ram,0x06d7a748) */
/* WARNING: Removing unreachable block (ram,0x06d7a750) */
/* WARNING: Removing unreachable block (ram,0x06d7a804) */
/* WARNING: Removing unreachable block (ram,0x06d7a88c) */
/* WARNING: Removing unreachable block (ram,0x06d7a898) */
/* WARNING: Removing unreachable block (ram,0x06d7a8a0) */
/* WARNING: Removing unreachable block (ram,0x06d7a90c) */
/* WARNING: Removing unreachable block (ram,0x06d7a914) */
/* WARNING: Removing unreachable block (ram,0x06d7a920) */
/* WARNING: Removing unreachable block (ram,0x06d7a948) */

void Meta_XR_ImmersiveDebugger_InspectedItemBase__get_Valid(void)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 (*pauVar14) [12];
  undefined1 uVar15;
  long *in_x9;
  ulong uVar16;
  int *piVar17;
  undefined1 *puVar18;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar19;
  long *unaff_x24;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  undefined1 auVar29 [16];
  long *plStack0000000000000020;
  long *plStack0000000000000028;
  undefined4 uStack0000000000000048;
  char cStack000000000000004c;
  char cStack0000000000000050;
  char cStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000078;
  char cStack000000000000007c;
  
  plStack0000000000000020 = (long *)(unaff_x21 + 0xb8);
  uVar19 = 0;
  plStack0000000000000028 = in_x9;
  do {
    lVar11 = *unaff_x19;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x29) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06d7a3fc;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06d7a3fc:
    iVar8 = (*(code *)*puVar9)();
    if ((long)iVar8 <= (long)uVar19) {
      return;
    }
    lVar11 = *unaff_x19;
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x24) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_06d7a45c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_03cf1348();
LAB_06d7a45c:
    auVar29 = (*(code *)*puVar9)();
    lVar11 = auVar29._0_8_;
    lVar12 = *(long *)(unaff_x21 + 0x58);
    if (lVar12 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_06d7a980;
    uVar2 = *(uint *)(lVar12 + uVar19 * 4 + 0x20);
    lVar12 = (long)(int)uVar2;
    if (uVar2 != 0xffffffff) {
      lVar13 = *(long *)(unaff_x21 + 200);
      if (lVar13 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
      if (*(uint *)(lVar13 + 0x18) <= uVar2) {
LAB_06d7a980:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      *(undefined1 *)(lVar13 + lVar12 + 0x20) = 0;
      if (cStack000000000000007c == '\0') {
        iStack0000000000000078 = 0x37;
        if (DAT_0940fffc == '\0') {
          auVar29 = FUN_03c8f898(PTR_DAT_08e69f40);
          DAT_0940fffc = '\x01';
        }
        in_stack_00000068 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
        in_stack_00000060 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
        uVar16 = FUN_06d7a1a8(auVar29._0_8_,auVar29._8_8_,lVar11,unaff_x20,&stack0x00000078,
                              &stack0x00000060);
        iVar8 = iStack0000000000000078;
        if ((uVar16 & 1) != 0) {
          if (iStack0000000000000078 == 0) {
            *(undefined8 *)(unaff_x21 + 0xac) = in_stack_00000068;
            *(undefined8 *)(unaff_x21 + 0xa4) = in_stack_00000060;
          }
          in_stack_00000058 = 0;
          uVar16 = FUN_06d7b438(uVar16,uVar19 & 0xffffffff,unaff_x20,iStack0000000000000078,
                                (long)&stack0x00000078 + 4,&stack0x00000058);
          if ((cStack000000000000007c == '\0') && ((uVar16 & 1) != 0)) {
            cStack0000000000000054 = '\0';
            cStack0000000000000050 = '\0';
            cStack000000000000004c = '\0';
            uStack0000000000000048 = 9;
            uVar10 = FUN_06d7b598(uVar16,unaff_x20,iVar8,(long)&stack0x00000050 + 4,&stack0x00000050
                                  ,&stack0x00000048,(long)&stack0x00000048 + 4);
            if (DAT_0940fff5 == '\0') {
              uVar10 = FUN_03c8f898(PTR_DAT_08e68e18);
              DAT_0940fff5 = '\x01';
            }
            cVar7 = cStack0000000000000054;
            uVar20 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
            uVar21 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
            FUN_06d7b634(uVar10,unaff_x20,iVar8);
            if (cStack0000000000000050 != '\0') {
              lVar13 = thunk_FUN_03cf5234(*unaff_x28);
              FUN_07145224(lVar13,0);
              if (lVar13 == 0)
              goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
              *(undefined8 *)(lVar13 + 0x10) = in_stack_00000058;
              thunk_FUN_03d233cc();
              if (lVar11 == 0)
              goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
              *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
              thunk_FUN_03d233cc();
              *(undefined8 *)(lVar13 + 0x28) = in_stack_00000068;
              *(undefined8 *)(lVar13 + 0x20) = in_stack_00000060;
              *(undefined8 *)(lVar13 + 0x30) = 0;
              thunk_FUN_03d233cc();
              plVar1 = plStack0000000000000020;
              if (iVar8 != 0xb) {
                plVar1 = plStack0000000000000028;
              }
              *plVar1 = lVar13;
              thunk_FUN_03d233cc(plVar1,lVar13);
              unaff_x29 = (long *)PTR_DAT_08e71528;
            }
            if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x160) == 0)) {
Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos:
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            fVar26 = *(float *)(unaff_x21 + 0x18);
            fVar27 = *(float *)(*(long *)(unaff_x20 + 0x160) + 0x20);
            if (DAT_0940fffc == '\0') {
              FUN_03c8f898(PTR_DAT_08e69f40);
              DAT_0940fffc = '\x01';
            }
            pauVar14 = *(undefined1 (**) [12])(*(long *)PTR_DAT_08e69f40 + 0xb8);
            uVar4 = *(undefined8 *)(*pauVar14 + 8);
            uVar28 = (undefined4)((ulong)uVar4 >> 0x20);
            uVar10 = *(undefined8 *)*pauVar14;
            auVar6 = *pauVar14;
            if (DAT_0940fff5 == '\0') {
              FUN_03c8f898(PTR_DAT_08e68e18);
              DAT_0940fff5 = '\x01';
            }
            fVar26 = fVar26 * fVar27;
            uVar23 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
            uVar22 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
            auVar25._8_8_ = in_stack_00000068;
            auVar25._0_8_ = in_stack_00000060;
            auVar5._8_8_ = in_stack_00000068;
            auVar5._0_8_ = in_stack_00000060;
            auVar24[0] = -(cVar7 == '\0');
            auVar24[1] = auVar24[0];
            auVar24[2] = auVar24[0];
            auVar24[3] = auVar24[0];
            auVar24[4] = auVar24[0];
            auVar24[5] = auVar24[0];
            auVar24[6] = auVar24[0];
            auVar24[7] = auVar24[0];
            auVar24[8] = auVar24[0];
            auVar24[9] = auVar24[0];
            auVar24[10] = auVar24[0];
            auVar24[0xb] = auVar24[0];
            auVar24[0xc] = auVar24[0];
            auVar24[0xd] = auVar24[0];
            auVar24[0xe] = auVar24[0];
            auVar24[0xf] = auVar24[0];
            auVar29._12_4_ = uVar28;
            auVar29._0_12_ = auVar6;
            auVar25 = auVar25 ^ (auVar5 ^ auVar29) & auVar24;
            uVar3 = NEON_rev64(uVar23,4);
            fVar27 = fVar26;
            if (*(char *)(unaff_x21 + 0x24) == '\0') {
              uVar15 = 0;
              uVar20 = uVar23;
              uVar21 = uVar22;
            }
            else {
              if (cStack000000000000004c != '\0') {
                fVar27 = fVar26 * *(float *)(unaff_x21 + 0x2c);
              }
              lVar11 = *(long *)(unaff_x21 + 200);
              if (lVar11 == 0)
              goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
              if (*(uint *)(lVar11 + 0x18) <= uVar2) goto LAB_06d7a980;
              uVar15 = 1;
              *(undefined1 *)(lVar11 + lVar12 + 0x20) = 1;
            }
            uVar3 = NEON_rev64(uVar3,4);
            puVar18 = (undefined1 *)(*(long *)(unaff_x21 + 0x48) + lVar12 * 0x50);
            *puVar18 = 1;
            *(undefined2 *)(puVar18 + 1) = 0;
            puVar18[3] = 0;
            *(int *)(puVar18 + 4) = iVar8;
            *(float *)(puVar18 + 8) = fVar27;
            *(float *)(puVar18 + 0xc) = fVar26;
            puVar18[0x10] = uVar15;
            puVar18[0x11] = cVar7 != '\0';
            *(undefined2 *)(puVar18 + 0x12) = 0;
            *(long *)(puVar18 + 0x1c) = auVar25._8_8_;
            *(long *)(puVar18 + 0x14) = auVar25._0_8_;
            *(undefined8 *)(puVar18 + 0x24) = uVar3;
            *(undefined4 *)(puVar18 + 0x2c) = uVar22;
            *(undefined8 *)(puVar18 + 0x30) = uVar20;
            *(undefined4 *)(puVar18 + 0x38) = uVar21;
            *(int *)(puVar18 + 0x3c) = (int)uVar10;
            *(int *)(puVar18 + 0x40) = (int)((ulong)uVar10 >> 0x20);
            *(int *)(puVar18 + 0x44) = (int)uVar4;
            *(undefined4 *)(puVar18 + 0x48) = uVar28;
            puVar18[0x4c] = cVar7;
            puVar18[0x4f] = 0;
            *(undefined2 *)(puVar18 + 0x4d) = 0;
            goto LAB_06d7a784;
          }
        }
        puVar9 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + lVar12 * 0x50);
        *(undefined4 *)puVar9 = 0;
        *(int *)((long)puVar9 + 4) = iVar8;
      }
      else {
        puVar9 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + lVar12 * 0x50);
        *puVar9 = DAT_018af920;
      }
      puVar9[2] = 0;
      puVar9[1] = 0;
      puVar9[4] = 0;
      puVar9[3] = 0;
      puVar9[6] = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[7] = 0;
      puVar9[9] = 0;
    }
LAB_06d7a784:
    uVar19 = uVar19 + 1;
  } while( true );
}


