/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.MemberInfoExtensions$$IsCompatibleWithDebugInspector
ENTRY_POINT: 06d7a638
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_MemberInfoExtensions__IsCompatibleWithDebugInspector(void)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 *puVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  undefined4 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000048;
  char cStack000000000000004c;
  char cStack0000000000000050;
  byte bStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000078;
  char cStack000000000000007c;
  
code_r0x06d7a638:
  thunk_FUN_03d233cc();
  if (unaff_x27 != 0) {
    *(undefined8 *)(unaff_x28 + 0x18) = *(undefined8 *)(unaff_x27 + 0x18);
    thunk_FUN_03d233cc();
    *(undefined8 *)(unaff_x28 + 0x28) = in_stack_00000068;
    *(undefined8 *)(unaff_x28 + 0x20) = in_stack_00000060;
    *(long *)(unaff_x28 + 0x30) = in_stack_00000030;
    thunk_FUN_03d233cc();
    plVar1 = in_stack_00000020;
    if (unaff_w25 != 0xb) {
      plVar1 = in_stack_00000028;
    }
    *plVar1 = unaff_x28;
    thunk_FUN_03d233cc(plVar1,unaff_x28);
    puVar8 = PTR_DAT_08e71528;
LAB_06d7a698:
    if ((unaff_x24 != 0) && (*(long *)(unaff_x24 + 0x160) != 0)) {
      fVar30 = *(float *)(unaff_x21 + 0x18);
      fVar31 = *(float *)(*(long *)(unaff_x24 + 0x160) + 0x20);
      if (DAT_0940fffc == '\0') {
        FUN_03c8f898(PTR_DAT_08e69f40);
        DAT_0940fffc = '\x01';
      }
      pauVar13 = *(undefined1 (**) [16])(*(long *)PTR_DAT_08e69f40 + 0xb8);
      uVar3 = *(undefined8 *)(*pauVar13 + 8);
      fVar20 = (float)((ulong)uVar3 >> 0x20);
      uVar19 = *(undefined8 *)*pauVar13;
      auVar36 = *pauVar13;
      auVar7 = *(undefined1 (*) [12])*pauVar13;
      fVar21 = (float)((ulong)uVar19 >> 0x20);
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      fVar23 = (float)uVar3;
      fVar35 = (float)uVar19;
      fVar30 = fVar30 * fVar31;
      uVar19 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      uVar18 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
      fVar31 = fVar30;
      if (in_stack_00000030 == 0) {
        auVar6._8_8_ = in_stack_00000068;
        auVar6._0_8_ = in_stack_00000060;
        auVar5._8_8_ = in_stack_00000068;
        auVar5._0_8_ = in_stack_00000060;
        auVar26[0] = -((char)in_stack_00000018._4_4_ == '\0');
        bVar9 = in_stack_00000018._4_4_ != 0;
        auVar26[1] = auVar26[0];
        auVar26[2] = auVar26[0];
        auVar26[3] = auVar26[0];
        auVar26[4] = auVar26[0];
        auVar26[5] = auVar26[0];
        auVar26[6] = auVar26[0];
        auVar26[7] = auVar26[0];
        auVar26[8] = auVar26[0];
        auVar26[9] = auVar26[0];
        auVar26[10] = auVar26[0];
        auVar26[0xb] = auVar26[0];
        auVar26[0xc] = auVar26[0];
        auVar26[0xd] = auVar26[0];
        auVar26[0xe] = auVar26[0];
        auVar26[0xf] = auVar26[0];
        auVar4._12_4_ = fVar20;
        auVar4._0_12_ = auVar7;
        auVar36 = auVar6 ^ (auVar5 ^ auVar4) & auVar26;
        uVar3 = NEON_rev64(uVar19,4);
        uVar27 = (undefined4)uVar3;
        uVar29 = (undefined4)((ulong)uVar3 >> 0x20);
        if (*(char *)(unaff_x21 + 0x24) != '\0') {
          if (cStack000000000000004c != '\0') {
            fVar31 = fVar30 * *(float *)(unaff_x21 + 0x2c);
          }
          lVar12 = *(long *)(unaff_x21 + 200);
          if (lVar12 != 0) {
            if ((uint)unaff_x23 < *(uint *)(lVar12 + 0x18)) {
              uVar14 = 1;
              *(undefined1 *)(lVar12 + unaff_x23 + 0x20) = 1;
              goto LAB_06d7a8ac;
            }
LAB_06d7a980:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
        }
      }
      else {
        if ((in_stack_00000018._4_4_ == 0) || (*(char *)(in_stack_00000030 + 0x38) != '\0')) {
          bVar9 = false;
        }
        else {
          fVar20 = *(float *)(in_stack_00000030 + 0x28);
          fVar22 = *(float *)(in_stack_00000030 + 0x2c);
          fVar24 = *(float *)(in_stack_00000030 + 0x44);
          fVar34 = *(float *)(in_stack_00000030 + 0x48);
          fVar25 = *(float *)(in_stack_00000030 + 0x4c);
          fVar28 = *(float *)(in_stack_00000030 + 0x50);
          fVar32 = *(float *)(in_stack_00000030 + 0x20);
          fVar33 = *(float *)(in_stack_00000030 + 0x24);
          bVar9 = true;
          auVar36._8_8_ = in_stack_00000068;
          auVar36._0_8_ = in_stack_00000060;
          fVar35 = (fVar33 * fVar25 + fVar22 * fVar24 + fVar32 * fVar28) - fVar20 * fVar34;
          fVar21 = (fVar20 * fVar24 + fVar22 * fVar34 + fVar33 * fVar28) - fVar32 * fVar25;
          fVar23 = (fVar32 * fVar34 + fVar22 * fVar25 + fVar20 * fVar28) - fVar33 * fVar24;
          fVar20 = ((fVar22 * fVar28 - fVar32 * fVar24) - fVar33 * fVar34) - fVar20 * fVar25;
        }
        uVar3 = NEON_rev64(uVar19,4);
        uVar27 = (undefined4)uVar3;
        uVar29 = (undefined4)((ulong)uVar3 >> 0x20);
        if ((*(char *)(unaff_x21 + 0x24) != '\0') && (*(char *)(in_stack_00000030 + 0x39) == '\0'))
        {
          lVar12 = *(long *)(unaff_x21 + 200);
          if (lVar12 != 0) {
            if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x23) goto LAB_06d7a980;
            uVar14 = 1;
            *(undefined1 *)(lVar12 + unaff_x23 + 0x20) = 1;
            uVar18 = *(undefined4 *)(in_stack_00000030 + 0x1c);
            uVar19 = NEON_rev64(*(undefined8 *)(in_stack_00000030 + 0x14),4);
            uVar27 = (undefined4)uVar19;
            uVar29 = (undefined4)((ulong)uVar19 >> 0x20);
            if (cStack000000000000004c != '\0') {
              uVar14 = 1;
              fVar31 = fVar30 * *(float *)(unaff_x21 + 0x2c);
            }
            goto LAB_06d7a8ac;
          }
          goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
        }
      }
      uVar14 = 0;
      in_stack_00000038 = uVar19;
      in_stack_00000040 = uVar18;
LAB_06d7a8ac:
      uVar19 = NEON_rev64(CONCAT44(uVar29,uVar27),4);
      puVar17 = (undefined1 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
      *puVar17 = 1;
      *(undefined2 *)(puVar17 + 1) = 0;
      puVar17[3] = 0;
      *(int *)(puVar17 + 4) = unaff_w25;
      *(float *)(puVar17 + 8) = fVar31;
      *(float *)(puVar17 + 0xc) = fVar30;
      puVar17[0x10] = uVar14;
      puVar17[0x11] = bVar9;
      *(undefined2 *)(puVar17 + 0x12) = 0;
      *(long *)(puVar17 + 0x1c) = auVar36._8_8_;
      *(long *)(puVar17 + 0x14) = auVar36._0_8_;
      *(undefined8 *)(puVar17 + 0x24) = uVar19;
      *(undefined4 *)(puVar17 + 0x2c) = uVar18;
      *(undefined8 *)(puVar17 + 0x30) = in_stack_00000038;
      *(undefined4 *)(puVar17 + 0x38) = in_stack_00000040;
      *(float *)(puVar17 + 0x3c) = fVar35;
      *(float *)(puVar17 + 0x40) = fVar21;
      *(float *)(puVar17 + 0x44) = fVar23;
      *(float *)(puVar17 + 0x48) = fVar20;
      puVar17[0x4c] = (char)in_stack_00000018._4_4_;
      puVar17[0x4f] = 0;
      *(undefined2 *)(puVar17 + 0x4d) = 0;
LAB_06d7a3b0:
      do {
        unaff_x22 = unaff_x22 + 1;
        lVar12 = *unaff_x19;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06d7a3fc;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_03cf1348();
LAB_06d7a3fc:
        iVar10 = (*(code *)*puVar11)();
        if ((long)iVar10 <= (long)unaff_x22) {
          return;
        }
        lVar12 = *unaff_x19;
        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *unaff_x29) {
              puVar11 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_06d7a45c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_03cf1348();
LAB_06d7a45c:
        auVar36 = (*(code *)*puVar11)();
        unaff_x27 = auVar36._0_8_;
        lVar12 = *(long *)(unaff_x21 + 0x58);
        if (lVar12 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
        if (*(uint *)(lVar12 + 0x18) <= unaff_x22) goto LAB_06d7a980;
        uVar2 = *(uint *)(lVar12 + unaff_x22 * 4 + 0x20);
        unaff_x23 = (long)(int)uVar2;
      } while (uVar2 == 0xffffffff);
      lVar12 = *(long *)(unaff_x21 + 200);
      if (lVar12 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
      if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_06d7a980;
      *(undefined1 *)(lVar12 + unaff_x23 + 0x20) = 0;
      if (cStack000000000000007c == '\0') {
        iStack0000000000000078 = 0x37;
        if (DAT_0940fffc == '\0') {
          auVar36 = FUN_03c8f898(PTR_DAT_08e69f40);
          DAT_0940fffc = '\x01';
        }
        in_stack_00000068 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
        in_stack_00000060 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
        uVar15 = FUN_06d7a1a8(auVar36._0_8_,auVar36._8_8_,unaff_x27,unaff_x24,&stack0x00000078,
                              &stack0x00000060);
        unaff_w25 = iStack0000000000000078;
        if ((uVar15 & 1) != 0) {
          if (iStack0000000000000078 == 0) {
            unaff_x20[1] = in_stack_00000068;
            *unaff_x20 = in_stack_00000060;
          }
          in_stack_00000058 = 0;
          uVar15 = FUN_06d7b438(uVar15,unaff_x22 & 0xffffffff,unaff_x24,iStack0000000000000078,
                                (long)&stack0x00000078 + 4,&stack0x00000058);
          if ((cStack000000000000007c == '\0') && ((uVar15 & 1) != 0)) goto code_r0x06d7a568;
        }
        puVar11 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
        *(undefined4 *)puVar11 = 0;
        *(int *)((long)puVar11 + 4) = unaff_w25;
      }
      else {
        puVar11 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
        *puVar11 = DAT_018af920;
      }
      puVar11[2] = 0;
      puVar11[1] = 0;
      puVar11[4] = 0;
      puVar11[3] = 0;
      puVar11[6] = 0;
      puVar11[5] = 0;
      puVar11[8] = 0;
      puVar11[7] = 0;
      puVar11[9] = 0;
      goto LAB_06d7a3b0;
    }
  }
Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
code_r0x06d7a568:
  bStack0000000000000054 = 0;
  cStack0000000000000050 = '\0';
  cStack000000000000004c = '\0';
  uStack0000000000000048 = 9;
  uVar19 = FUN_06d7b598(uVar15,unaff_x24,unaff_w25,(long)&stack0x00000050 + 4,&stack0x00000050,
                        &stack0x00000048,(long)&stack0x00000048 + 4);
  if (DAT_0940fff5 == '\0') {
    uVar19 = FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  in_stack_00000018._4_4_ = (uint)bStack0000000000000054;
  in_stack_00000038 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  in_stack_00000040 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
  in_stack_00000030 = 0;
  FUN_06d7b634(uVar19,unaff_x24,unaff_w25);
  if (cStack0000000000000050 != '\0') goto code_r0x06d7a604;
  goto LAB_06d7a698;
code_r0x06d7a604:
  unaff_x28 = thunk_FUN_03cf5234(*unaff_x26);
  FUN_07145224(unaff_x28,0);
  if (unaff_x28 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
  *(undefined8 *)(unaff_x28 + 0x10) = in_stack_00000058;
  goto code_r0x06d7a638;
}


