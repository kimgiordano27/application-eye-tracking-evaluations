/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedHandle$$TryGetMember
ENTRY_POINT: 06d7a4b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_6;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
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

void Meta_XR_ImmersiveDebugger_InspectedHandle__TryGetMember(void)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [12];
  undefined1 uVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 *puVar17;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined4 uStack0000000000000048;
  char cStack000000000000004c;
  char cStack0000000000000050;
  char cStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000078;
  char cStack000000000000007c;
  
code_r0x06d7a4b4:
  puVar12 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
  *puVar12 = DAT_018af920;
  do {
    puVar12[2] = 0;
    puVar12[1] = 0;
    puVar12[4] = 0;
    puVar12[3] = 0;
    puVar12[6] = 0;
    puVar12[5] = 0;
    puVar12[8] = 0;
    puVar12[7] = 0;
    puVar12[9] = 0;
LAB_06d7a3b0:
    do {
      unaff_x22 = unaff_x22 + 1;
      lVar10 = *unaff_x19;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x29) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06d7a3fc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d7a3fc:
      iVar8 = (*(code *)*puVar12)();
      if ((long)iVar8 <= (long)unaff_x22) {
        return;
      }
      lVar10 = *unaff_x19;
      uVar15 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *unaff_x24) {
            puVar12 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06d7a45c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_03cf1348();
LAB_06d7a45c:
      auVar27 = (*(code *)*puVar12)();
      lVar10 = auVar27._0_8_;
      lVar11 = *(long *)(unaff_x21 + 0x58);
      if (lVar11 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
      if (*(uint *)(lVar11 + 0x18) <= unaff_x22) goto LAB_06d7a980;
      uVar2 = *(uint *)(lVar11 + unaff_x22 * 4 + 0x20);
      unaff_x23 = (long)(int)uVar2;
    } while (uVar2 == 0xffffffff);
    lVar11 = *(long *)(unaff_x21 + 200);
    if (lVar11 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
    if (*(uint *)(lVar11 + 0x18) <= uVar2) {
LAB_06d7a980:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined1 *)(lVar11 + unaff_x23 + 0x20) = 0;
    if (cStack000000000000007c != '\0') goto code_r0x06d7a4b4;
    iStack0000000000000078 = 0x37;
    if (DAT_0940fffc == '\0') {
      auVar27 = FUN_03c8f898(PTR_DAT_08e69f40);
      DAT_0940fffc = '\x01';
    }
    in_stack_00000068 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
    in_stack_00000060 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
    uVar15 = FUN_06d7a1a8(auVar27._0_8_,auVar27._8_8_,lVar10,unaff_x20,&stack0x00000078,
                          &stack0x00000060);
    iVar8 = iStack0000000000000078;
    if ((uVar15 & 1) != 0) {
      if (iStack0000000000000078 == 0) {
        unaff_x26[1] = in_stack_00000068;
        *unaff_x26 = in_stack_00000060;
      }
      in_stack_00000058 = 0;
      uVar15 = FUN_06d7b438(uVar15,unaff_x22 & 0xffffffff,unaff_x20,iStack0000000000000078,
                            (long)&stack0x00000078 + 4,&stack0x00000058);
      if ((cStack000000000000007c != '\0') || ((uVar15 & 1) == 0)) goto LAB_06d7a75c;
      cStack0000000000000054 = '\0';
      cStack0000000000000050 = '\0';
      cStack000000000000004c = '\0';
      uStack0000000000000048 = 9;
      uVar9 = FUN_06d7b598(uVar15,unaff_x20,iVar8,(long)&stack0x00000050 + 4,&stack0x00000050,
                           &stack0x00000048,(long)&stack0x00000048 + 4);
      if (DAT_0940fff5 == '\0') {
        uVar9 = FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      cVar7 = cStack0000000000000054;
      uVar18 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      uVar19 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
      FUN_06d7b634(uVar9,unaff_x20,iVar8);
      if (cStack0000000000000050 != '\0') {
        lVar11 = thunk_FUN_03cf5234(*unaff_x28);
        FUN_07145224(lVar11,0);
        if (lVar11 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
        *(undefined8 *)(lVar11 + 0x10) = in_stack_00000058;
        thunk_FUN_03d233cc();
        if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
        *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
        thunk_FUN_03d233cc();
        *(undefined8 *)(lVar11 + 0x28) = in_stack_00000068;
        *(undefined8 *)(lVar11 + 0x20) = in_stack_00000060;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        thunk_FUN_03d233cc();
        plVar1 = in_stack_00000020;
        if (iVar8 != 0xb) {
          plVar1 = in_stack_00000028;
        }
        *plVar1 = lVar11;
        thunk_FUN_03d233cc(plVar1,lVar11);
        unaff_x29 = (long *)PTR_DAT_08e71528;
      }
      if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x160) == 0)) {
Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      fVar24 = *(float *)(unaff_x21 + 0x18);
      fVar25 = *(float *)(*(long *)(unaff_x20 + 0x160) + 0x20);
      if (DAT_0940fffc == '\0') {
        FUN_03c8f898(PTR_DAT_08e69f40);
        DAT_0940fffc = '\x01';
      }
      pauVar13 = *(undefined1 (**) [12])(*(long *)PTR_DAT_08e69f40 + 0xb8);
      uVar4 = *(undefined8 *)(*pauVar13 + 8);
      uVar26 = (undefined4)((ulong)uVar4 >> 0x20);
      uVar9 = *(undefined8 *)*pauVar13;
      auVar6 = *pauVar13;
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      fVar24 = fVar24 * fVar25;
      uVar21 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      uVar20 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
      auVar23._8_8_ = in_stack_00000068;
      auVar23._0_8_ = in_stack_00000060;
      auVar5._8_8_ = in_stack_00000068;
      auVar5._0_8_ = in_stack_00000060;
      auVar22[0] = -(cVar7 == '\0');
      auVar22[1] = auVar22[0];
      auVar22[2] = auVar22[0];
      auVar22[3] = auVar22[0];
      auVar22[4] = auVar22[0];
      auVar22[5] = auVar22[0];
      auVar22[6] = auVar22[0];
      auVar22[7] = auVar22[0];
      auVar22[8] = auVar22[0];
      auVar22[9] = auVar22[0];
      auVar22[10] = auVar22[0];
      auVar22[0xb] = auVar22[0];
      auVar22[0xc] = auVar22[0];
      auVar22[0xd] = auVar22[0];
      auVar22[0xe] = auVar22[0];
      auVar22[0xf] = auVar22[0];
      auVar27._12_4_ = uVar26;
      auVar27._0_12_ = auVar6;
      auVar23 = auVar23 ^ (auVar5 ^ auVar27) & auVar22;
      uVar3 = NEON_rev64(uVar21,4);
      fVar25 = fVar24;
      if (*(char *)(unaff_x21 + 0x24) == '\0') {
        uVar14 = 0;
        uVar18 = uVar21;
        uVar19 = uVar20;
      }
      else {
        if (cStack000000000000004c != '\0') {
          fVar25 = fVar24 * *(float *)(unaff_x21 + 0x2c);
        }
        lVar10 = *(long *)(unaff_x21 + 200);
        if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
        if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_06d7a980;
        uVar14 = 1;
        *(undefined1 *)(lVar10 + unaff_x23 + 0x20) = 1;
      }
      uVar3 = NEON_rev64(uVar3,4);
      puVar17 = (undefined1 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
      *puVar17 = 1;
      *(undefined2 *)(puVar17 + 1) = 0;
      puVar17[3] = 0;
      *(int *)(puVar17 + 4) = iVar8;
      *(float *)(puVar17 + 8) = fVar25;
      *(float *)(puVar17 + 0xc) = fVar24;
      puVar17[0x10] = uVar14;
      puVar17[0x11] = cVar7 != '\0';
      *(undefined2 *)(puVar17 + 0x12) = 0;
      *(long *)(puVar17 + 0x1c) = auVar23._8_8_;
      *(long *)(puVar17 + 0x14) = auVar23._0_8_;
      *(undefined8 *)(puVar17 + 0x24) = uVar3;
      *(undefined4 *)(puVar17 + 0x2c) = uVar20;
      *(undefined8 *)(puVar17 + 0x30) = uVar18;
      *(undefined4 *)(puVar17 + 0x38) = uVar19;
      *(int *)(puVar17 + 0x3c) = (int)uVar9;
      *(int *)(puVar17 + 0x40) = (int)((ulong)uVar9 >> 0x20);
      *(int *)(puVar17 + 0x44) = (int)uVar4;
      *(undefined4 *)(puVar17 + 0x48) = uVar26;
      puVar17[0x4c] = cVar7;
      puVar17[0x4f] = 0;
      *(undefined2 *)(puVar17 + 0x4d) = 0;
      goto LAB_06d7a3b0;
    }
LAB_06d7a75c:
    puVar12 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
    *(undefined4 *)puVar12 = 0;
    *(int *)((long)puVar12 + 4) = iVar8;
  } while( true );
}


