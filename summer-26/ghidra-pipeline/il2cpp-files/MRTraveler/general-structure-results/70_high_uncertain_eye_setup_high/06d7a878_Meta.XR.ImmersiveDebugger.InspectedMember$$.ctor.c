/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.InspectedMember$$.ctor
ENTRY_POINT: 06d7a878
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06d7a738) */
/* WARNING: Removing unreachable block (ram,0x06d7a748) */
/* WARNING: Removing unreachable block (ram,0x06d7a750) */
/* WARNING: Removing unreachable block (ram,0x06d7a804) */

void Meta_XR_ImmersiveDebugger_InspectedMember___ctor
               (float param_1,undefined4 param_2,undefined8 param_3,float param_4,float param_5,
               float param_6,undefined1 param_7 [16],float param_8)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 in_w8;
  long lVar9;
  long lVar10;
  undefined1 (*pauVar11) [12];
  undefined1 uVar12;
  ulong uVar13;
  int *piVar14;
  long in_x10;
  undefined1 *puVar15;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  undefined8 *unaff_x26;
  char unaff_w27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float in_s16;
  float in_s17;
  float in_s22;
  float in_s26;
  float in_s28;
  undefined1 auVar22 [16];
  long *in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack0000000000000048;
  char cStack000000000000004c;
  char cStack0000000000000050;
  char cStack0000000000000054;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000078;
  char cStack000000000000007c;
  
  param_4 = param_4 - in_s22;
  fVar16 = in_s16 - in_s26;
  param_8 = param_8 - param_6;
  fVar17 = (param_5 - in_s17) - in_s28;
  uVar8 = NEON_rev64(param_3,4);
  uVar19 = (undefined4)uVar8;
  uVar20 = (undefined4)((ulong)uVar8 >> 0x20);
  uVar8 = param_3;
  if ((*(char *)(unaff_x21 + 0x24) != '\0') && (uVar8 = param_3, *(char *)(in_x10 + 0x39) == '\0'))
  {
    lVar9 = *(long *)(unaff_x21 + 200);
    if (lVar9 != 0) {
      if ((uint)unaff_x23 < *(uint *)(lVar9 + 0x18)) {
        uVar12 = 1;
        *(undefined1 *)(lVar9 + unaff_x23 + 0x20) = 1;
        param_2 = *(undefined4 *)(in_x10 + 0x1c);
        uVar8 = NEON_rev64(*(undefined8 *)(in_x10 + 0x14),4);
        uVar19 = (undefined4)uVar8;
        uVar20 = (undefined4)((ulong)uVar8 >> 0x20);
        fVar21 = param_1;
        if (cStack000000000000004c == '\0') goto LAB_06d7a8ac;
        uVar12 = 1;
        fVar21 = param_1 * *(float *)(unaff_x21 + 0x2c);
        goto LAB_06d7a8ac;
      }
LAB_06d7a980:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
LAB_06d7a8a4:
  in_stack_00000038 = uVar8;
  uVar12 = 0;
  in_stack_00000040 = param_2;
  fVar21 = param_1;
LAB_06d7a8ac:
  uVar8 = NEON_rev64(CONCAT44(uVar20,uVar19),4);
  puVar15 = (undefined1 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
  *puVar15 = 1;
  *(undefined2 *)(puVar15 + 1) = 0;
  puVar15[3] = 0;
  *(int *)(puVar15 + 4) = unaff_w25;
  *(float *)(puVar15 + 8) = fVar21;
  *(float *)(puVar15 + 0xc) = param_1;
  puVar15[0x10] = uVar12;
  puVar15[0x11] = in_w8;
  *(undefined2 *)(puVar15 + 0x12) = 0;
  *(long *)(puVar15 + 0x1c) = param_7._8_8_;
  *(long *)(puVar15 + 0x14) = param_7._0_8_;
  *(undefined8 *)(puVar15 + 0x24) = uVar8;
  *(undefined4 *)(puVar15 + 0x2c) = param_2;
  *(undefined8 *)(puVar15 + 0x30) = in_stack_00000038;
  *(undefined4 *)(puVar15 + 0x38) = in_stack_00000040;
  *(float *)(puVar15 + 0x3c) = param_4;
  *(float *)(puVar15 + 0x40) = fVar16;
  *(float *)(puVar15 + 0x44) = param_8;
  *(float *)(puVar15 + 0x48) = fVar17;
  puVar15[0x4c] = unaff_w27;
  puVar15[0x4f] = 0;
  *(undefined2 *)(puVar15 + 0x4d) = 0;
LAB_06d7a3b0:
  do {
    unaff_x22 = unaff_x22 + 1;
    lVar9 = *unaff_x19;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x29) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06d7a3fc;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06d7a3fc:
    iVar6 = (*(code *)*puVar7)();
    if ((long)iVar6 <= (long)unaff_x22) {
      return;
    }
    lVar9 = *unaff_x19;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06d7a45c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348();
LAB_06d7a45c:
    auVar22 = (*(code *)*puVar7)();
    lVar9 = auVar22._0_8_;
    lVar10 = *(long *)(unaff_x21 + 0x58);
    if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
    if (*(uint *)(lVar10 + 0x18) <= unaff_x22) goto LAB_06d7a980;
    uVar2 = *(uint *)(lVar10 + unaff_x22 * 4 + 0x20);
    unaff_x23 = (long)(int)uVar2;
  } while (uVar2 == 0xffffffff);
  lVar10 = *(long *)(unaff_x21 + 200);
  if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
  if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_06d7a980;
  *(undefined1 *)(lVar10 + unaff_x23 + 0x20) = 0;
  if (cStack000000000000007c == '\0') {
    iStack0000000000000078 = 0x37;
    if (DAT_0940fffc == '\0') {
      auVar22 = FUN_03c8f898(PTR_DAT_08e69f40);
      DAT_0940fffc = '\x01';
    }
    in_stack_00000068 = (*(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8))[1];
    in_stack_00000060 = **(undefined8 **)(*(long *)PTR_DAT_08e69f40 + 0xb8);
    uVar13 = FUN_06d7a1a8(auVar22._0_8_,auVar22._8_8_,lVar9,unaff_x20,&stack0x00000078,
                          &stack0x00000060);
    unaff_w25 = iStack0000000000000078;
    if ((uVar13 & 1) != 0) {
      if (iStack0000000000000078 == 0) {
        unaff_x26[1] = in_stack_00000068;
        *unaff_x26 = in_stack_00000060;
      }
      in_stack_00000058 = 0;
      uVar13 = FUN_06d7b438(uVar13,unaff_x22 & 0xffffffff,unaff_x20,iStack0000000000000078,
                            (long)&stack0x00000078 + 4,&stack0x00000058);
      if ((cStack000000000000007c == '\0') && ((uVar13 & 1) != 0)) goto code_r0x06d7a568;
    }
    puVar7 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
    *(undefined4 *)puVar7 = 0;
    *(int *)((long)puVar7 + 4) = unaff_w25;
  }
  else {
    puVar7 = (undefined8 *)(*(long *)(unaff_x21 + 0x48) + unaff_x23 * 0x50);
    *puVar7 = DAT_018af920;
  }
  puVar7[2] = 0;
  puVar7[1] = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[9] = 0;
  goto LAB_06d7a3b0;
code_r0x06d7a568:
  cStack0000000000000054 = '\0';
  cStack0000000000000050 = '\0';
  cStack000000000000004c = '\0';
  uStack0000000000000048 = 9;
  uVar8 = FUN_06d7b598(uVar13,unaff_x20,unaff_w25,(long)&stack0x00000050 + 4,&stack0x00000050,
                       &stack0x00000048,(long)&stack0x00000048 + 4);
  if (DAT_0940fff5 == '\0') {
    uVar8 = FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  unaff_w27 = cStack0000000000000054;
  in_stack_00000038 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  in_stack_00000040 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
  FUN_06d7b634(uVar8,unaff_x20,unaff_w25);
  if (cStack0000000000000050 != '\0') {
    lVar10 = thunk_FUN_03cf5234(*unaff_x28);
    FUN_07145224(lVar10,0);
    if (lVar10 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
    *(undefined8 *)(lVar10 + 0x10) = in_stack_00000058;
    thunk_FUN_03d233cc();
    if (lVar9 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar10 + 0x28) = in_stack_00000068;
    *(undefined8 *)(lVar10 + 0x20) = in_stack_00000060;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    thunk_FUN_03d233cc();
    plVar1 = in_stack_00000020;
    if (unaff_w25 != 0xb) {
      plVar1 = in_stack_00000028;
    }
    *plVar1 = lVar10;
    thunk_FUN_03d233cc(plVar1,lVar10);
    unaff_x29 = (long *)PTR_DAT_08e71528;
  }
  if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x160) == 0))
  goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
  param_1 = *(float *)(unaff_x21 + 0x18);
  fVar21 = *(float *)(*(long *)(unaff_x20 + 0x160) + 0x20);
  if (DAT_0940fffc == '\0') {
    FUN_03c8f898(PTR_DAT_08e69f40);
    DAT_0940fffc = '\x01';
  }
  pauVar11 = *(undefined1 (**) [12])(*(long *)PTR_DAT_08e69f40 + 0xb8);
  uVar3 = *(undefined8 *)(*pauVar11 + 8);
  fVar17 = (float)((ulong)uVar3 >> 0x20);
  uVar8 = *(undefined8 *)*pauVar11;
  auVar5 = *pauVar11;
  fVar16 = (float)((ulong)uVar8 >> 0x20);
  if (DAT_0940fff5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fff5 = '\x01';
  }
  param_8 = (float)uVar3;
  param_4 = (float)uVar8;
  param_1 = param_1 * fVar21;
  uVar8 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  param_2 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
  param_7._8_8_ = in_stack_00000068;
  param_7._0_8_ = in_stack_00000060;
  auVar4._8_8_ = in_stack_00000068;
  auVar4._0_8_ = in_stack_00000060;
  auVar18[0] = -(unaff_w27 == '\0');
  in_w8 = unaff_w27 != '\0';
  auVar18[1] = auVar18[0];
  auVar18[2] = auVar18[0];
  auVar18[3] = auVar18[0];
  auVar18[4] = auVar18[0];
  auVar18[5] = auVar18[0];
  auVar18[6] = auVar18[0];
  auVar18[7] = auVar18[0];
  auVar18[8] = auVar18[0];
  auVar18[9] = auVar18[0];
  auVar18[10] = auVar18[0];
  auVar18[0xb] = auVar18[0];
  auVar18[0xc] = auVar18[0];
  auVar18[0xd] = auVar18[0];
  auVar18[0xe] = auVar18[0];
  auVar18[0xf] = auVar18[0];
  auVar22._12_4_ = fVar17;
  auVar22._0_12_ = auVar5;
  param_7 = param_7 ^ (auVar4 ^ auVar22) & auVar18;
  uVar3 = NEON_rev64(uVar8,4);
  uVar19 = (undefined4)uVar3;
  uVar20 = (undefined4)((ulong)uVar3 >> 0x20);
  if (*(char *)(unaff_x21 + 0x24) == '\0') goto LAB_06d7a8a4;
  fVar21 = param_1;
  if (cStack000000000000004c != '\0') {
    fVar21 = param_1 * *(float *)(unaff_x21 + 0x2c);
  }
  lVar9 = *(long *)(unaff_x21 + 200);
  if (lVar9 == 0) goto Meta_XR_ImmersiveDebugger_InspectedMember__PopulateSupportedGizmos;
  if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_06d7a980;
  uVar12 = 1;
  *(undefined1 *)(lVar9 + unaff_x23 + 0x20) = 1;
  goto LAB_06d7a8ac;
}


