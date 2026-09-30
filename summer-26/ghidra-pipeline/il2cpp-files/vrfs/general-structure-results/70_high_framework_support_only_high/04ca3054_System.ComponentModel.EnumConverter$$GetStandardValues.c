/*
FUNCTION_NAME: System.ComponentModel.EnumConverter$$GetStandardValues
ENTRY_POINT: 04ca3054
PROGRAM: vrfs-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_ComponentModel_EnumConverter__GetStandardValues(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 uVar27;
  char cVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  undefined4 *puVar32;
  long lVar33;
  long lVar34;
  float *pfVar35;
  code *pcVar36;
  long lVar37;
  float *pfVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  undefined4 unaff_w22;
  int iVar43;
  double *unaff_x23;
  long unaff_x24;
  long lVar44;
  uint uVar45;
  long *unaff_x25;
  uint unaff_w26;
  long *plVar46;
  uint uVar47;
  uint *unaff_x28;
  long *unaff_x29;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  double dVar58;
  undefined8 uVar59;
  double dVar60;
  double dVar61;
  float fVar62;
  undefined8 uVar63;
  ulong uVar64;
  uint uVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float unaff_s14;
  float fVar79;
  float fVar80;
  float unaff_s15;
  float fVar81;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  uint uStack000000000000003c;
  uint uStack0000000000000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  ulong in_stack_00000058;
  float fStack0000000000000060;
  uint uStack0000000000000064;
  int iStack0000000000000068;
  float fStack000000000000006c;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  uint uStack0000000000000078;
  undefined8 in_stack_00000080;
  float in_stack_00000088;
  uint uStack000000000000008c;
  uint uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  float fStack00000000000000a0;
  ulong in_stack_000000a8;
  float fStack00000000000000b0;
  undefined8 in_stack_000000b8;
  float fStack00000000000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d8;
  float fStack00000000000000dc;
  undefined8 uStack00000000000000e0;
  float fStack00000000000000ec;
  float in_stack_000000f0;
  float fStack00000000000000f4;
  undefined8 in_stack_000000f8;
  float fStack0000000000000120;
  float fStack0000000000000124;
  long *in_stack_00000130;
  long in_stack_00000140;
  long *in_stack_00000160;
  long *in_stack_00000170;
  uint *in_stack_00000178;
  long *in_stack_00000180;
  undefined8 in_stack_00000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float in_stack_000001b0;
  float in_stack_0000110c;
  float in_stack_00001110;
  float in_stack_00001118;
  float in_stack_0000111c;
  float in_stack_00001124;
  float in_stack_00001128;
  float in_stack_00001130;
  float in_stack_00001134;
  float in_stack_0000113c;
  float in_stack_00001140;
  float in_stack_00001148;
  float in_stack_0000114c;
  uint in_stack_0000122c;
  uint in_stack_00001258;
  undefined8 in_stack_00001260;
  undefined8 in_stack_00001268;
  float in_stack_00001270;
  undefined8 in_stack_00001278;
  char in_stack_00001284;
  float in_stack_00001288;
  uint in_stack_0000128c;
  undefined4 in_stack_000012a4;
  double in_stack_000012a8;
  double in_stack_000012b0;
  double in_stack_000012b8;
  double in_stack_000012c0;
  double in_stack_000012c8;
  
  uVar25 = _uStack0000000000000070;
code_r0x04ca3054:
  iVar15 = FUN_04ab1930(param_1,param_2);
  fVar71 = *(float *)(unaff_x19 + 0x41);
  if (iVar15 < 1) {
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    iVar15 = FUN_04ab1930(*in_stack_00000170 + 0x28,0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar55 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
    fVar48 = fStack00000000000000cc;
    if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
      fVar48 = unaff_s15;
    }
    if (unaff_x19[0x1f] == 0) goto LAB_04caa2e0;
    fVar75 = (float)FUN_04ab1960(unaff_x19[0x1f] + 0x28,0);
    if (unaff_x29[4] == 0) goto LAB_04caa2e0;
    FUN_04ab1df4(&stack0x00001290,unaff_x29[4],0);
    fVar49 = (float)FUN_04ab1c24(&stack0x000011a0,0);
    if (unaff_x29[4] == 0) goto LAB_04caa2e0;
    fVar50 = *(float *)((long)unaff_x29 + 0x2c);
    fVar77 = (float)FUN_04ab1e30(unaff_x29[4],0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fStack0000000000000120 = (float)FUN_04ab1960(*in_stack_00000170 + 0x28,0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar67 = (float)FUN_04ab1988(*in_stack_00000170 + 0x28,0);
    if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
    fVar53 = *(float *)((long)unaff_x19 + 0x434);
    fVar51 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
    if (unaff_x19[0x1f] == 0) goto LAB_04caa2e0;
    fVar51 = unaff_s14 * fVar67 * fVar53 * fVar51;
    fVar48 = (fVar71 / (float)iVar15) * fVar55 * fVar48;
    fVar71 = fVar48 * (fVar75 / fVar49) * fVar50 * fVar77;
    fVar48 = fVar48 / fVar71;
    fStack0000000000000120 = fVar48 * fStack0000000000000120;
    fVar55 = (float)FUN_04ab1990(unaff_x19[0x1f] + 0x28,0);
    fVar48 = fVar48 * fVar55;
  }
  else {
    if (*unaff_x25 == 0) goto LAB_04caa2e0;
    iVar15 = FUN_04ab1930(*unaff_x25 + 0x28,0);
    if (*unaff_x25 == 0) goto LAB_04caa2e0;
    fVar48 = (float)FUN_04ab1938(*unaff_x25 + 0x28,0);
    if (unaff_x29[4] == 0) goto LAB_04caa2e0;
    fVar75 = *(float *)((long)unaff_x29 + 0x2c);
    fVar55 = fStack00000000000000cc;
    if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
      fVar55 = unaff_s15;
    }
    fVar49 = (float)FUN_04ab1e30(unaff_x29[4],0);
    if (unaff_x19[0xd5] == 0) goto LAB_04caa2e0;
    fStack0000000000000120 = (float)FUN_04ab1960(unaff_x19[0xd5] + 0x28,0);
    if (*unaff_x25 == 0) goto LAB_04caa2e0;
    fVar50 = (float)FUN_04ab1988(*unaff_x25 + 0x28,0);
    if (*unaff_x25 == 0) goto LAB_04caa2e0;
    fVar77 = *(float *)((long)unaff_x19 + 0x434);
    fVar51 = (float)FUN_04ab1938(*unaff_x25 + 0x28,0);
    if (unaff_x19[0xd5] == 0) goto LAB_04caa2e0;
    fVar51 = unaff_s14 * fVar50 * fVar77 * fVar51;
    fVar71 = (fVar71 / (float)iVar15) * fVar48 * fVar55 * fVar75 * fVar49;
    fVar48 = (float)FUN_04ab1990(unaff_x19[0xd5] + 0x28,0);
  }
  *in_stack_00000160 = (long)unaff_x29;
  thunk_FUN_01656ef8(in_stack_00000160,unaff_x29);
  if ((*in_stack_00000180 != 0) && (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 != 0)) {
    if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
    lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
    *(undefined4 *)(lVar31 + 0x20) = 1;
    *(float *)(lVar31 + 0x15c) = fVar71;
    *(long *)(lVar31 + 0x40) = *in_stack_00000170;
    thunk_FUN_01656ef8();
    lVar31 = *in_stack_00000180;
    if ((lVar31 != 0) && (lVar34 = *(long *)(lVar31 + 0x38), lVar34 != 0)) {
      if (*unaff_x28 < *(uint *)(lVar34 + 0x18)) {
        fVar55 = 0.0;
        *(int *)(lVar34 + (int)*unaff_x28 * unaff_x24 + 0x50) = (int)unaff_x19[0x23];
        *(undefined4 *)(unaff_x19 + 0x23) = unaff_w22;
LAB_04ca3698:
        fVar75 = 0.0;
        if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
          fVar75 = fVar71;
        }
LAB_04ca36b0:
        fVar49 = fVar75;
        lVar31 = *(long *)(lVar31 + 0x38);
        if (lVar31 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
        *(short *)(lVar31 + 0x24) = (short)in_stack_0000128c;
        *(int *)(lVar31 + 0x58) = (int)unaff_x19[0x41];
        *(int *)(lVar31 + 0x160) = (int)unaff_x19[0x9f];
        if ((unaff_x19[0x73] == 0) || (lVar31 = *(long *)(unaff_x19[0x73] + 0x38), lVar31 == 0))
        goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        *(int *)(lVar31 + (int)*unaff_x28 * unaff_x24 + 0x164) = (int)unaff_x19[0x2a];
        if ((unaff_x19[0x73] == 0) || (lVar31 = *(long *)(unaff_x19[0x73] + 0x38), lVar31 == 0))
        goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        *(undefined4 *)(lVar31 + (int)*unaff_x28 * unaff_x24 + 0x16c) =
             *(undefined4 *)((long)unaff_x19 + 0x154);
        if ((unaff_x19[0x73] == 0) || (lVar31 = *(long *)(unaff_x19[0x73] + 0x38), lVar31 == 0))
        goto LAB_04caa2e0;
        uVar66 = *(undefined4 *)(_fStack00000000000000a0 + 2);
        dVar61 = _fStack00000000000000a0[1];
        dVar58 = *_fStack00000000000000a0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
        *(undefined4 *)(lVar31 + 0x188) = uVar66;
        *(double *)(lVar31 + 0x180) = dVar61;
        *(double *)(lVar31 + 0x178) = dVar58;
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
        lVar34 = *(long *)(lVar31 + 0x38);
        *(undefined4 *)(lVar31 + 0x18c) = *(undefined4 *)((long)unaff_x19 + 0x27c);
        if ((lVar34 == 0) &&
           ((*in_stack_00000160 == 0 || (lVar34 = *(long *)(*in_stack_00000160 + 0x20), lVar34 == 0)
            ))) goto LAB_04caa2e0;
        FUN_04ab1df4(&stack0x00001290,lVar34,0);
        unaff_x23[1] = dVar61;
        *unaff_x23 = dVar58;
        if (in_stack_0000128c >> 0x10 == 0) {
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar16 = FUN_028fcbcc(in_stack_0000128c,0);
          uVar16 = uVar16 & 1;
        }
        else {
          uVar16 = 0;
        }
        uVar52 = 0;
        fStack00000000000000f4 = *(float *)(unaff_x19 + 0x59);
        iVar15 = (int)unaff_x24;
        if (((in_stack_000000a8 & 1) != 0) && (*(int *)((long)unaff_x19 + 0x654) == 0)) {
          if (*in_stack_00000160 == 0) goto LAB_04caa2e0;
          uVar21 = *unaff_x28;
          uVar47 = *(uint *)(*in_stack_00000160 + 0x28);
          if ((int)uVar21 < (int)in_stack_00000058._4_4_) {
            lVar31 = FUN_04ec8ec8();
            if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x38), lVar31 == 0))
            goto LAB_04caa2e0;
            uVar21 = *unaff_x28 + 1;
            if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
            if (*(int *)(lVar31 + (int)uVar21 * unaff_x24 + 0x20) == 0) {
              if ((*in_stack_00000180 == 0) ||
                 (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
              if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
              lVar31 = *(long *)(lVar31 + (int)uVar21 * unaff_x24 + 0x30);
              if ((((lVar31 == 0) || (*in_stack_00000170 == 0)) ||
                  (lVar34 = *(long *)(*in_stack_00000170 + 0x178), lVar34 == 0)) ||
                 (lVar34 = *(long *)(lVar34 + 0x40), lVar34 == 0)) goto LAB_04caa2e0;
              uVar23 = FUN_02fc4850(lVar34,uVar47 | *(int *)(lVar31 + 0x28) << 0x10,&stack0x00001170
                                    ,*(undefined8 *)PTR_DAT_06e62e58);
              if ((uVar23 & 1) != 0) {
                FUN_04ab4d7c(&stack0x00001290,&stack0x00001170,0);
                unaff_x23[0x17b] = dVar61;
                unaff_x23[0x17a] = dVar58;
                uVar52 = FUN_04ab4bd0(&stack0x00001150,0);
                uVar23 = FUN_04ab4db8(&stack0x00001170,0);
                if ((uVar23 & 0x100) != 0) {
                  fStack00000000000000f4 = 0.0;
                }
              }
            }
            uVar21 = *unaff_x28;
          }
          if (0 < (int)uVar21) {
            if ((*in_stack_00000180 == 0) ||
               (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar31 + 0x18) <= (uint)((long)(int)uVar21 + -1)) goto LAB_04caa4c0;
            lVar31 = *(long *)(lVar31 + ((long)(int)uVar21 + -1) * unaff_x24 + 0x30);
            if (lVar31 == 0) goto LAB_04caa2e0;
            uVar21 = *(uint *)(lVar31 + 0x28);
            lVar31 = FUN_04ec8ec8();
            if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x38), lVar31 == 0))
            goto LAB_04caa2e0;
            if (*(uint *)(lVar31 + 0x18) <= *unaff_x28 - 1) goto LAB_04caa4c0;
            if (*(int *)(lVar31 + (long)(int)(*unaff_x28 - 1) * (long)iVar15 + 0x20) == 0) {
              if (((*in_stack_00000170 == 0) ||
                  (lVar31 = *(long *)(*in_stack_00000170 + 0x178), lVar31 == 0)) ||
                 (lVar31 = *(long *)(lVar31 + 0x40), lVar31 == 0)) goto LAB_04caa2e0;
              uVar23 = FUN_02fc4850(lVar31,uVar21 | uVar47 << 0x10,&stack0x00001170,
                                    *(undefined8 *)PTR_DAT_06e62e58);
              if ((uVar23 & 1) != 0) {
                FUN_04ab4da4(&stack0x00001290,&stack0x00001170,0);
                unaff_x23[0x17b] = dVar61;
                unaff_x23[0x17a] = dVar58;
                FUN_04ab4bd0(&stack0x00001150,0);
                FUN_04ab4a30(uVar52,0);
                uVar23 = FUN_04ab4db8(&stack0x00001170,0);
                if ((uVar23 & 0x100) != 0) {
                  fStack00000000000000f4 = 0.0;
                }
              }
            }
          }
        }
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        uVar21 = *unaff_x28;
        uVar52 = FUN_04ab4a0c(&stack0x00001230,0);
        if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
        *(undefined4 *)(lVar31 + (int)uVar21 * unaff_x24 + 0x154) = uVar52;
        if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar23 = FUN_051fbaac(in_stack_0000128c,0);
        uVar21 = *unaff_x28;
        if ((uVar23 & 1) == 0) {
          if (0 < (int)uVar21) {
            if ((((uVar25 & 0x100000000) == 0) ||
                (uVar47 = *(uint *)((long)unaff_x19 + 0x324), uVar47 == 0x80000000)) ||
               (uVar47 != uVar21 - 1)) {
              if ((in_stack_00000058 & 1) == 0) {
                bVar12 = false;
              }
              else {
                lVar31 = (int)uVar21 * unaff_x24 + 0x144;
                lVar34 = (long)(int)uVar21;
                do {
                  lVar22 = lVar34 + -1;
                  if ((lVar34 < 1) ||
                     (uVar21 = (int)lVar34 - 1, uVar21 == *(uint *)((long)unaff_x19 + 0x324))) {
                    bVar12 = false;
                    goto LAB_04ca3e04;
                  }
                  if ((*in_stack_00000180 == 0) ||
                     (lVar34 = *(long *)(*in_stack_00000180 + 0x38), lVar34 == 0))
                  goto LAB_04caa2e0;
                  if (*(uint *)(lVar34 + 0x18) <= uVar21) goto LAB_04caa4c0;
                  lVar34 = *(long *)(lVar34 + lVar31 + -0x28c);
                  if ((lVar34 == 0) || (lVar34 = *(long *)(lVar34 + 0x20), lVar34 == 0))
                  goto LAB_04caa2e0;
                  uVar21 = FUN_04ab1de4(lVar34,0);
                  if ((*in_stack_00000160 == 0) ||
                     (((*in_stack_00000170 == 0 ||
                       (lVar34 = *(long *)(*in_stack_00000170 + 0x178), lVar34 == 0)) ||
                      (lVar34 = *(long *)(lVar34 + 0x50), lVar34 == 0)))) goto LAB_04caa2e0;
                  uVar24 = System_Collections_Generic_List<bool>__Exists
                                     (lVar34,uVar21 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                      &stack0x00001120,*(undefined8 *)PTR_DAT_06e0b230);
                  lVar31 = lVar31 + -0x178;
                  lVar34 = lVar22;
                } while ((uVar24 & 1) == 0);
                if ((*in_stack_00000180 == 0) ||
                   (lVar34 = *(long *)(*in_stack_00000180 + 0x38), lVar34 == 0)) goto LAB_04caa2e0;
                if (*(uint *)(lVar34 + 0x18) <= (uint)lVar22) goto LAB_04caa4c0;
                fVar75 = *(float *)((long)unaff_x19 + 0x4e4);
                fVar50 = *(float *)((long)unaff_x19 + 0x62c);
                fVar77 = *(float *)(lVar34 + lVar31);
                FUN_04ab49f4(((((float *)(lVar34 + lVar31))[-3] - *(float *)(unaff_x19 + 0xca)) /
                              fVar49 + in_stack_00001124) - in_stack_00001130,&stack0x00001230,0);
                FUN_04ab4a04(((fVar77 - ((fVar51 - fVar75) + fVar50)) / fVar49 + in_stack_00001128)
                             - in_stack_00001134,&stack0x00001230,0);
                fStack00000000000000f4 = 0.0;
                bVar12 = true;
              }
LAB_04ca3e04:
              if ((uVar25 & 0x100000000) != 0) {
                uVar21 = *(uint *)((long)unaff_x19 + 0x324);
                if (!bVar12 && (long)(int)uVar21 != -0x80000000) {
                  if ((*in_stack_00000180 == 0) ||
                     (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0))
                  goto LAB_04caa2e0;
                  if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
                  lVar31 = *(long *)(lVar31 + (int)uVar21 * unaff_x24 + 0x30);
                  if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x20), lVar31 == 0))
                  goto LAB_04caa2e0;
                  uVar21 = FUN_04ab1de4(lVar31,0);
                  if ((*in_stack_00000160 == 0) ||
                     (((*in_stack_00000170 == 0 ||
                       (lVar31 = *(long *)(*in_stack_00000170 + 0x178), lVar31 == 0)) ||
                      (lVar31 = *(long *)(lVar31 + 0x48), lVar31 == 0)))) goto LAB_04caa2e0;
                  uVar24 = FUN_034635a8(lVar31,uVar21 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                        &stack0x00001108,*(undefined8 *)PTR_DAT_06e61380);
                  if ((uVar24 & 1) != 0) {
                    if ((*in_stack_00000180 != 0) &&
                       (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 != 0)) {
                      if (*(uint *)((long)unaff_x19 + 0x324) < *(uint *)(lVar31 + 0x18)) {
                        FUN_04ab49f4((in_stack_0000110c +
                                     (*(float *)(lVar31 + (int)*(uint *)((long)unaff_x19 + 0x324) *
                                                          unaff_x24 + 0x138) -
                                     *(float *)(unaff_x19 + 0xca)) / fVar49) - in_stack_00001118,
                                     &stack0x00001230,0);
                        fVar75 = in_stack_0000111c;
                        fVar50 = in_stack_00001110;
                        goto LAB_04ca3f08;
                      }
                      goto LAB_04caa4c0;
                    }
                    goto LAB_04caa2e0;
                  }
                }
              }
            }
            else {
              if ((*in_stack_00000180 == 0) ||
                 (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
              if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_04caa4c0;
              lVar31 = *(long *)(lVar31 + (int)uVar47 * unaff_x24 + 0x30);
              if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x20), lVar31 == 0))
              goto LAB_04caa2e0;
              uVar21 = FUN_04ab1de4(lVar31,0);
              if ((*in_stack_00000160 == 0) ||
                 (((*in_stack_00000170 == 0 ||
                   (lVar31 = *(long *)(*in_stack_00000170 + 0x178), lVar31 == 0)) ||
                  (lVar31 = *(long *)(lVar31 + 0x48), lVar31 == 0)))) goto LAB_04caa2e0;
              uVar24 = FUN_034635a8(lVar31,uVar21 | *(int *)(*in_stack_00000160 + 0x28) << 0x10,
                                    &stack0x00001138,*(undefined8 *)PTR_DAT_06e61380);
              if ((uVar24 & 1) != 0) {
                if ((*in_stack_00000180 == 0) ||
                   (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)unaff_x19 + 0x324))
                goto LAB_04caa4c0;
                FUN_04ab49f4((in_stack_0000113c +
                             (*(float *)(lVar31 + (int)*(uint *)((long)unaff_x19 + 0x324) *
                                                  unaff_x24 + 0x138) - *(float *)(unaff_x19 + 0xca))
                             / fVar49) - in_stack_00001148,&stack0x00001230,0);
                fVar75 = in_stack_0000114c;
                fVar50 = in_stack_00001140;
LAB_04ca3f08:
                FUN_04ab4a04(fVar50 - fVar75,&stack0x00001230,0);
                fStack00000000000000f4 = 0.0;
              }
            }
          }
        }
        else {
          *(uint *)((long)unaff_x19 + 0x324) = uVar21;
        }
        fVar75 = (float)FUN_04ab49fc(&stack0x00001230,0);
        fVar50 = (float)FUN_04ab49fc(&stack0x00001230,0);
        if ((char)unaff_x19[0x1d] != '\0') {
          fVar67 = *(float *)(unaff_x19 + 0xca);
          fVar77 = (float)FUN_04ab1c3c(&stack0x00001240,0);
          fVar67 = fVar67 - fVar49 * fVar77 * (1.0 - *(float *)(unaff_x19 + 0x5f));
          *(float *)(unaff_x19 + 0xca) = fVar67;
          if ((uVar16 != 0) || (in_stack_0000128c == 0x200b)) {
            *(float *)(unaff_x19 + 0xca) = fVar67 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b)
            ;
          }
        }
        fVar67 = *(float *)(unaff_x19 + 0x5a);
        fVar77 = 0.0;
        if (fVar67 != 0.0) {
          if (((*(char *)((long)unaff_x19 + 0x2d4) == '\0') || (0x3a < in_stack_0000128c)) ||
             (fVar77 = 0.25, (1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) == 0)) {
            fVar77 = 0.5;
          }
          fVar53 = (float)FUN_04ab1c1c(&stack0x00001240,0);
          fVar54 = (float)FUN_04ab1c2c(&stack0x00001240,0);
          fVar77 = (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                   (fVar67 * fVar77 - fVar49 * (fVar53 * 0.5 + fVar54));
          *(float *)(unaff_x19 + 0xca) = fVar77 + *(float *)(unaff_x19 + 0xca);
        }
        if (((unaff_w20 == 0) && (*(int *)((long)unaff_x19 + 0x654) == 0)) &&
           ((*(byte *)((long)unaff_x19 + 0x27c) & 1) != 0)) {
          lVar31 = *in_stack_00000130;
          if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar24 = FUN_051d2ac0(lVar31,0,0);
          fVar53 = 0.0;
          if ((uVar24 & 1) != 0) {
            lVar31 = *in_stack_00000130;
            if (*(int *)(*(long *)PTR_DAT_06db55e8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            plVar30 = (long *)PTR_DAT_06db55e8;
            if (lVar31 == 0) goto LAB_04caa2e0;
            uVar24 = FUN_04887e40(lVar31,*(undefined4 *)
                                          (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) + 0x6c),0);
            if ((uVar24 & 1) != 0) {
              lVar31 = *in_stack_00000130;
              if (*(int *)(*plVar30 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                plVar30 = (long *)PTR_DAT_06db55e8;
              }
              if (lVar31 == 0) goto LAB_04caa2e0;
              fVar67 = (float)FUN_0488be70(lVar31,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0x6c)
                                           ,0);
              if ((*in_stack_00000170 == 0) || (*in_stack_00000130 == 0)) goto LAB_04caa2e0;
              fVar54 = *(float *)(*in_stack_00000170 + 0x1a8);
              fVar53 = (float)FUN_0488be70(*in_stack_00000130,
                                           *(undefined4 *)
                                            (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) + 0xe4),0);
              fVar53 = fVar53 * fVar67 * fVar54 * 0.25;
              if (fVar67 < fVar55 + fVar53) {
                fVar55 = fVar67 - fVar53;
              }
            }
          }
          if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
          fStack00000000000000ec = *(float *)(*in_stack_00000170 + 0x1ac);
        }
        else {
          lVar31 = *in_stack_00000130;
          if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar24 = FUN_051d2ac0(lVar31,0,0);
          fStack00000000000000ec = 0.0;
          if ((uVar24 & 1) != 0) {
            lVar31 = *in_stack_00000130;
            if (*(int *)(*(long *)PTR_DAT_06db55e8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            plVar30 = (long *)PTR_DAT_06db55e8;
            if (lVar31 == 0) goto LAB_04caa2e0;
            uVar24 = FUN_04887e40(lVar31,*(undefined4 *)
                                          (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) + 0x6c),0);
            if ((uVar24 & 1) != 0) {
              lVar31 = *in_stack_00000130;
              if (*(int *)(*plVar30 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                plVar30 = (long *)PTR_DAT_06db55e8;
              }
              if (lVar31 == 0) goto LAB_04caa2e0;
              uVar24 = FUN_04887e40(lVar31,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0xe4),0);
              if ((uVar24 & 1) != 0) {
                lVar31 = *in_stack_00000130;
                if (*(int *)(*plVar30 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  plVar30 = (long *)PTR_DAT_06db55e8;
                }
                if (lVar31 != 0) {
                  fVar67 = (float)FUN_0488be70(lVar31,*(undefined4 *)
                                                       (*(long *)(*plVar30 + 0xb8) + 0x6c),0);
                  if ((*in_stack_00000170 != 0) && (*in_stack_00000130 != 0)) {
                    fVar54 = *(float *)(*in_stack_00000170 + 0x1a0);
                    fVar53 = (float)FUN_0488be70(*in_stack_00000130,
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)PTR_DAT_06db55e8 + 0xb8) +
                                                  0xe4),0);
                    fVar53 = fVar53 * fVar67 * fVar54 * 0.25;
                    if (fVar67 < fVar55 + fVar53) {
                      fVar55 = fVar67 - fVar53;
                    }
                    goto LAB_04ca432c;
                  }
                }
                goto LAB_04caa2e0;
              }
            }
          }
          fVar53 = 0.0;
        }
LAB_04ca432c:
        fVar68 = *(float *)(unaff_x19 + 0xca);
        fVar67 = (float)FUN_04ab1c2c(&stack0x00001240,0);
        fVar70 = *(float *)((long)unaff_x19 + 0x474);
        fVar54 = (float)FUN_04ab49ec(&stack0x00001230,0);
        fVar68 = fVar68 + (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                          fVar49 * (fVar54 + ((fVar67 * fVar70 - fVar55) - fVar53));
        fVar67 = (float)FUN_04ab1c34(&stack0x00001240,0);
        fVar54 = (float)FUN_04ab49fc(&stack0x00001230,0);
        fVar76 = *(float *)((long)unaff_x19 + 0x62c) +
                 ((fVar51 + fVar49 * (fVar55 + fVar67 + fVar54)) -
                 *(float *)((long)unaff_x19 + 0x4e4));
        fVar67 = (float)FUN_04ab1c24(&stack0x00001240,0);
        fVar81 = fVar76 - fVar49 * (fVar55 + fVar55 + fVar67);
        fVar67 = (float)FUN_04ab1c1c(&stack0x00001240,0);
        fVar70 = fVar68 + (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                          fVar49 * (fVar53 + fVar53 +
                                   fVar55 + fVar55 + fVar67 * *(float *)((long)unaff_x19 + 0x474));
        fVar67 = fVar68;
        fVar54 = fVar70;
        if (((*(int *)((long)unaff_x19 + 0x654) == 0) && (unaff_w20 == 0)) &&
           ((*(byte *)((long)unaff_x19 + 0x27c) >> 1 & 1) != 0)) {
          if (unaff_x19[0x1f] == 0) goto LAB_04caa2e0;
          lVar31 = unaff_x19[0xc0];
          fVar67 = (float)FUN_04ab1968(unaff_x19[0x1f] + 0x28,0);
          if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
          fVar54 = (float)FUN_04ab1988(*in_stack_00000170 + 0x28,0);
          if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
          fVar56 = *(float *)((long)unaff_x19 + 0x434);
          fVar80 = *(float *)((long)unaff_x19 + 0x62c);
          fVar62 = (float)(int)lVar31 * fStack0000000000000060;
          fVar57 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
          fVar57 = fVar57 * fVar56 * (fVar67 - (fVar54 + fVar80)) * 0.5;
          fVar67 = (float)FUN_04ab1c34(&stack0x00001240,0);
          fVar67 = fVar62 * fVar49 * ((fVar53 + fVar55 + fVar67) - fVar57);
          fVar56 = (float)FUN_04ab1c34(&stack0x00001240,0);
          fVar80 = (float)FUN_04ab1c24(&stack0x00001240,0);
          fVar76 = fVar76 + 0.0;
          fVar81 = fVar81 + 0.0;
          fVar54 = fVar70 + fVar67;
          fVar67 = fVar68 + fVar67;
          fVar62 = fVar62 * fVar49 * ((((fVar56 - fVar80) - fVar55) - fVar53) - fVar57);
          fVar68 = fVar68 + fVar62;
          fVar70 = fVar70 + fVar62;
        }
        uVar72 = *(undefined8 *)(in_stack_00000140 + 0x198);
        uVar74 = *(undefined8 *)(in_stack_00000140 + 0x1a0);
        if (DAT_0722a13f == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06e3d060);
          DAT_0722a13f = '\x01';
        }
        uVar59 = **(undefined8 **)(*(long *)PTR_DAT_06e3d060 + 0xb8);
        uVar63 = (*(undefined8 **)(*(long *)PTR_DAT_06e3d060 + 0xb8))[1];
        fVar56 = 0.0;
        if (DAT_0534c368 <
            (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar63 >> 0x20) +
            (float)uVar74 * (float)uVar63 +
            (float)uVar72 * (float)uVar59 +
            (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar59 >> 0x20)) {
          fVar73 = 0.0;
          fVar78 = 0.0;
          fVar62 = 0.0;
          fVar57 = fVar81;
          fVar80 = fVar76;
        }
        else {
          FUN_051e8150(&stack0x00001290,*(undefined4 *)((long)unaff_x19 + 0x464),
                       (int)unaff_x19[0x8d],*(undefined4 *)((long)unaff_x19 + 0x46c),
                       (int)unaff_x19[0x8e],0);
          fVar79 = (fVar81 + fVar76) * 0.5;
          fVar69 = (fVar54 + fVar68) * 0.5;
          fVar76 = fVar76 - fVar79;
          unaff_x23[0x169] = dVar61;
          unaff_x23[0x168] = dVar58;
          unaff_x23[0x16b] = in_stack_000012a8;
          unaff_x23[0x16a] = (double)CONCAT44(in_stack_000012a4,uVar66);
          fVar62 = 0.0;
          unaff_x23[0x16d] = in_stack_000012b8;
          unaff_x23[0x16c] = in_stack_000012b0;
          unaff_x23[0x16f] = in_stack_000012c8;
          unaff_x23[0x16e] = in_stack_000012c0;
          fVar80 = fVar76;
          fVar67 = (float)FUN_051e8050(fVar67 - fVar69,&stack0x000010c0,0);
          fVar67 = fVar69 + fVar67;
          fVar62 = fVar62 + 0.0;
          fVar81 = fVar81 - fVar79;
          fVar78 = 0.0;
          fVar57 = fVar81;
          fVar68 = (float)FUN_051e8050(fVar68 - fVar69,&stack0x000010c0,0);
          fVar68 = fVar69 + fVar68;
          fVar78 = fVar78 + 0.0;
          fVar73 = 0.0;
          fVar54 = (float)FUN_051e8050(fVar54 - fVar69,&stack0x000010c0,0);
          fVar54 = fVar69 + fVar54;
          fVar76 = fVar79 + fVar76;
          fVar73 = fVar73 + 0.0;
          fVar56 = 0.0;
          fVar70 = (float)FUN_051e8050(fVar70 - fVar69,&stack0x000010c0,0);
          fVar70 = fVar69 + fVar70;
          fVar56 = fVar56 + 0.0;
          fVar81 = fVar79 + fVar81;
          fVar57 = fVar79 + fVar57;
          fVar80 = fVar79 + fVar80;
        }
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
        *(float *)(lVar31 + 0x114) = fVar68;
        *(float *)(lVar31 + 0x118) = fVar57;
        *(float *)(lVar31 + 0x11c) = fVar78;
        if (*in_stack_00000180 == 0) goto LAB_04caa2e0;
        lVar31 = *(long *)(*in_stack_00000180 + 0x38);
        uVar24 = (ulong)(uint)fVar49;
        if (lVar31 == 0) goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
        *(float *)(lVar31 + 0x108) = fVar67;
        *(float *)(lVar31 + 0x10c) = fVar80;
        *(float *)(lVar31 + 0x110) = fVar62;
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
        *(float *)(lVar31 + 0x124) = fVar76;
        *(float *)(lVar31 + 0x128) = fVar73;
        *(float *)(lVar31 + 0x120) = fVar54;
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar31 + 0x18) <= *unaff_x28) goto LAB_04caa4c0;
        lVar31 = lVar31 + (int)*unaff_x28 * unaff_x24;
        *(float *)(lVar31 + 300) = fVar70;
        *(float *)(lVar31 + 0x130) = fVar81;
        *(float *)(lVar31 + 0x134) = fVar56;
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        uVar21 = *unaff_x28;
        fVar70 = *(float *)(unaff_x19 + 0xca);
        fVar67 = (float)FUN_04ab49ec(&stack0x00001230,0);
        if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
        *(float *)(lVar31 + (int)uVar21 * unaff_x24 + 0x138) = fVar70 + fVar49 * fVar67;
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        uVar21 = *unaff_x28;
        fVar76 = *(float *)((long)unaff_x19 + 0x4e4);
        fVar70 = *(float *)((long)unaff_x19 + 0x62c);
        fVar67 = (float)FUN_04ab49fc(&stack0x00001230,0);
        if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
        *(float *)(lVar31 + (int)uVar21 * unaff_x24 + 0x144) =
             (fVar51 - fVar76) + fVar70 + fVar49 * fVar67;
        if ((*in_stack_00000180 == 0) ||
           (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
        uVar21 = *unaff_x28;
        lVar34 = (long)(int)uVar21;
        if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
        *(float *)(lVar31 + lVar34 * unaff_x24 + 0x158) = (fVar54 - fVar68) / (fVar80 - fVar57);
        fVar67 = *(float *)((long)unaff_x19 + 0x62c);
        fVar75 = fVar49 * (fStack0000000000000120 + fVar75);
        if (*(int *)((long)unaff_x19 + 0x654) == 0) {
          fVar75 = fVar75 / in_stack_000000f8._4_4_;
          fVar48 = (fVar49 * (fVar48 + fVar50)) / in_stack_000000f8._4_4_;
        }
        else {
          fVar48 = fVar49 * (fVar48 + fVar50);
        }
        uVar47 = *(uint *)(unaff_x19 + 0x94);
        bVar12 = uVar16 == 0;
        fVar75 = fVar67 + fVar75;
        bVar13 = uVar21 != uVar47;
        if (bVar13 && !bVar12) {
          fVar50 = *(float *)((long)unaff_x19 + 0x4d4);
          lVar31 = lVar31 + lVar34 * unaff_x24;
          *(float *)(lVar31 + 0x14c) = fVar50;
          fVar48 = *(float *)(unaff_x19 + 0x9b);
          *(float *)(lVar31 + 0x150) = fVar48;
          fVar67 = *(float *)((long)unaff_x19 + 0x4e4);
          fVar51 = fVar50 - fVar67;
        }
        else {
          fVar48 = fVar67 + fVar48;
          fVar51 = fVar75;
          fVar54 = fVar48;
          if (fVar67 != 0.0) {
            fVar51 = (fVar75 - fVar67) / *(float *)((long)unaff_x19 + 0x434);
            fVar54 = (fVar48 - fVar67) / *(float *)((long)unaff_x19 + 0x434);
            if (fVar51 <= fVar75) {
              fVar51 = fVar75;
            }
            if (fVar48 <= fVar54) {
              fVar54 = fVar48;
            }
          }
          lVar31 = lVar31 + lVar34 * unaff_x24;
          fVar50 = fVar51;
          if (fVar51 <= *(float *)((long)unaff_x19 + 0x4d4)) {
            fVar50 = *(float *)((long)unaff_x19 + 0x4d4);
          }
          fVar67 = fVar54;
          if (*(float *)(unaff_x19 + 0x9b) <= fVar54) {
            fVar67 = *(float *)(unaff_x19 + 0x9b);
          }
          *(float *)((long)unaff_x19 + 0x4d4) = fVar50;
          *(float *)(unaff_x19 + 0x9b) = fVar67;
          *(float *)(lVar31 + 0x14c) = fVar51;
          *(float *)(lVar31 + 0x150) = fVar54;
          fVar67 = *(float *)((long)unaff_x19 + 0x4e4);
          fVar51 = fVar75 - fVar67;
        }
        uVar64 = (ulong)(uint)fVar67;
        *(float *)(lVar31 + 0x140) = fVar51;
        *(float *)((long)unaff_x19 + 0x4cc) = fVar51;
        *(float *)(lVar31 + 0x148) = fVar48 - fVar67;
        *(float *)(unaff_x19 + 0x9a) = fVar48 - fVar67;
        if (((int)unaff_x19[0x96] == 0) || (*(char *)((long)unaff_x19 + 0x36c) != '\0')) {
          if (!bVar13 || bVar12) {
            *(float *)((long)unaff_x19 + 0x4c4) = fVar50;
            if (unaff_x19[0x1f] != 0) {
              fVar48 = *(float *)(unaff_x19 + 0x99);
              fVar50 = (float)FUN_04ab1968(unaff_x19[0x1f] + 0x28,0);
              in_stack_000000f8._4_4_ = (fVar49 * fVar50) / in_stack_000000f8._4_4_;
              uVar64 = (ulong)*(uint *)((long)unaff_x19 + 0x4e4);
              if (fVar48 <= in_stack_000000f8._4_4_) {
                fVar48 = in_stack_000000f8._4_4_;
              }
              *(float *)(unaff_x19 + 0x99) = fVar48;
              goto LAB_04ca4930;
            }
            goto LAB_04caa2e0;
          }
        }
        else {
LAB_04ca4930:
          if ((!bVar13 || bVar12) && (float)uVar64 == 0.0) {
            fVar48 = *(float *)(unaff_x19 + 0x98);
            if (*(float *)(unaff_x19 + 0x98) <= fVar75) {
              fVar48 = fVar75;
            }
            *(float *)(unaff_x19 + 0x98) = fVar48;
          }
        }
        lVar31 = *in_stack_00000180;
        if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x38), lVar34 == 0)) goto LAB_04caa2e0;
        uVar65 = *unaff_x28;
        if (*(uint *)(lVar34 + 0x18) <= uVar65) goto LAB_04caa4c0;
        lVar34 = lVar34 + (int)uVar65 * unaff_x24;
        *(undefined1 *)(lVar34 + 400) = 0;
        uVar29 = *(uint *)(unaff_x19 + 0x53);
        if ((((in_stack_0000128c == 9) ||
             ((uVar16 != 0 || in_stack_0000128c == 0x200b &&
              ((*(uint *)((long)unaff_x19 + 0x2fc) & 0xfffffffe) == 2)))) ||
            ((uVar16 == 0 &&
             (((in_stack_0000128c != 3 && (in_stack_0000128c != 0x200b)) &&
              (in_stack_0000128c != 0xad)))))) ||
           ((((uint)(in_stack_0000128c == 0xad) & (uStack0000000000000064 ^ 0xffffffff)) != 0 ||
            (*(int *)((long)unaff_x19 + 0x654) == 1)))) {
          *(undefined1 *)(lVar34 + 400) = 1;
          pfVar35 = _fStack00000000000000b0;
          pfVar38 = _fStack00000000000000c0;
          if (unaff_w26 != 0) {
            lVar31 = *(long *)(lVar31 + 0x50);
            if (lVar31 == 0) goto LAB_04caa2e0;
            if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
            lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
            pfVar38 = (float *)(lVar31 + 100);
            pfVar35 = (float *)(lVar31 + 0x68);
          }
          fVar50 = *pfVar38;
          fVar75 = *pfVar35;
          fVar48 = *(float *)(unaff_x19 + 0x72);
          fVar67 = *(float *)(unaff_x19 + 0xca);
          fStack0000000000000124 = (fStack00000000000000c8 - fVar50) - fVar75;
          bVar13 = true;
          if ((fVar48 <= fStack0000000000000124) && (bVar13 = false, !NAN(fVar48))) {
            bVar13 = fVar48 == -1.0;
          }
          if (!bVar13) {
            fStack0000000000000124 = fVar48;
          }
          fVar48 = 0.0;
          uVar26 = 0;
          if ((char)unaff_x19[0x1d] == '\0') {
            uVar26 = FUN_04ab1c3c(&stack0x00001240,0);
            uVar64 = (ulong)*(uint *)((long)unaff_x19 + 0x4e4);
          }
          fVar68 = *(float *)(unaff_x19 + 0x9b);
          fVar51 = *(float *)(unaff_x19 + 0x5f);
          fVar54 = (float)uVar64;
          if (in_stack_0000128c != 0xad) {
            fVar71 = fVar49;
          }
          if ((0.0 < fVar54) && (fVar48 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
            fVar48 = *(float *)(in_stack_00000140 + 0x208) - *(float *)(in_stack_00000140 + 0x210);
          }
          fVar48 = (*(float *)((long)unaff_x19 + 0x4c4) - (fVar68 - fVar54)) + fVar48;
          uVar65 = *in_stack_00000178;
          if (fStack00000000000000d0 < fVar48) {
            if (*(int *)((long)unaff_x19 + 0x30c) == -1) {
              *(uint *)((long)unaff_x19 + 0x30c) = uVar65;
            }
            plVar30 = (long *)PTR_DAT_06e12318;
            uVar72 = DAT_053d9ff0;
            if ((char)unaff_x19[0x4b] != '\0') {
              fVar70 = *(float *)((long)unaff_x19 + 0x2ec);
              if (((fVar70 < *(float *)(unaff_x19 + 0x5c)) && (0.0 < fVar54)) &&
                 (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
                fVar71 = *(float *)(unaff_x19 + 0x5c) +
                         ((in_stack_00000020._4_4_ - fVar48) / (float)(int)unaff_x19[0x96]) /
                         in_stack_00000080._4_4_;
                if (fVar71 <= fVar70) {
                  fVar71 = fVar70;
                }
                goto LAB_04caa350;
              }
              fVar54 = *(float *)((long)unaff_x19 + 0x204);
              fVar48 = *(float *)(unaff_x19 + 0x4e);
              uVar64 = (ulong)(uint)fVar48;
              if ((fVar48 < fVar54) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
                fVar71 = (fVar54 - *(float *)(unaff_x19 + 0x4c)) * 0.5;
                if (fVar71 <= DAT_0534c364) {
                  fVar71 = DAT_0534c364;
                }
                fVar55 = (fVar54 - fVar71) * 20.0 + 0.5;
                fVar71 = DAT_0537e710;
                if (fVar55 != INFINITY) {
                  fVar71 = (float)(int)fVar55 / 20.0;
                }
                if (fVar71 <= fVar48) {
                  fVar71 = fVar48;
                }
                *(float *)((long)unaff_x19 + 0x25c) = fVar54;
                goto LAB_04ca717c;
              }
            }
            switch((int)unaff_x19[0x61]) {
            case 1:
              lVar31 = *(long *)PTR_DAT_06e12318;
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar31 = *plVar30;
              }
              lVar34 = *(long *)(lVar31 + 0xb8);
              if (*(int *)(lVar34 + 0x1708) == 0) {
LAB_04ca5438:
                in_stack_00001278 = DAT_053d9ff0;
                in_stack_00000178[0] = 0;
                in_stack_00000178[1] = 0;
                in_stack_00001258 = 0xffffffff;
              }
              else {
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar34 = *(long *)(*plVar30 + 0xb8);
                }
                FUN_023a2be0(&stack0x00001290,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
                memcpy(&stack0x00000d08,&stack0x00001290,0x3b8);
LAB_04ca540c:
                iVar17 = FUN_04ed5dfc();
                in_stack_00001258 = iVar17 - 1;
                uVar66 = 0x2026;
                unaff_w21 = unaff_w21 + 1;
                uVar16 = *(int *)((long)unaff_x19 + 0x49c) - 1;
                *(uint *)((long)unaff_x19 + 0x49c) = uVar16;
LAB_04ca5544:
                in_stack_00001278 = CONCAT44(uVar66,uVar16);
              }
              goto LAB_04ca2d40;
            default:
              goto switchD_04ca4cec_caseD_2;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
LAB_04ca5044:
              in_stack_00001258 = FUN_04ed5dfc();
              break;
            case 5:
              if ((uVar65 == 0) || ((int)in_stack_00001258 < 0)) {
                *in_stack_00000178 = 0;
                plVar30 = (long *)PTR_DAT_06e12318;
                in_stack_00001258 = 0xffffffff;
                in_stack_00001278 = uVar72;
              }
              else {
                fVar71 = *(float *)(in_stack_00000140 + 0x208);
                if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                in_stack_00001258 = FUN_04ed5dfc();
                if (fStack00000000000000d0 < fVar71 - fVar68) break;
                *(undefined1 *)((long)unaff_x19 + 0x36c) = 1;
                *(undefined4 *)(unaff_x19 + 0x94) = *(undefined4 *)((long)unaff_x19 + 0x49c);
                uVar72 = NEON_rev64(*(undefined8 *)(*(long *)(*plVar30 + 0xb8) + 0x1730),4);
                *(undefined8 *)(in_stack_00000140 + 0x208) = uVar72;
                unaff_x19[0x98] = 0;
                uVar64 = 0;
                *(int *)(unaff_x19 + 0x96) = (int)unaff_x19[0x96] + 1;
                *(undefined4 *)((long)unaff_x19 + 0x4dc) = 0;
                *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
                *(float *)(unaff_x19 + 0xca) = *(float *)((long)unaff_x19 + 0x43c) + 0.0;
                *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
              }
              goto LAB_04ca2d40;
            case 6:
              if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              in_stack_00001258 = FUN_04ed5dfc();
              lVar31 = unaff_x19[0x62];
              if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                thunk_FUN_016466fc(*(long *)PTR_DAT_06d9fd78);
              }
              uVar23 = FUN_051d2ac0(lVar31,0,0);
              if ((uVar23 & 1) != 0) {
                plVar46 = (long *)unaff_x19[0x62];
                uVar72 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar46 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar46 + 0x558))(plVar46,uVar72,*(undefined8 *)(*plVar46 + 0x560));
                lVar31 = unaff_x19[0x62];
                if (lVar31 == 0) goto LAB_04caa2e0;
                *(int *)(lVar31 + 0x430) = (int)unaff_x19[0x86];
                FUN_04ec8ce4(lVar31,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
                plVar46 = (long *)unaff_x19[0x62];
                if (plVar46 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 100) = 1;
              }
            }
            in_stack_00001278 = CONCAT44(3,uVar65);
            goto LAB_04ca2d40;
          }
switchD_04ca4cec_caseD_2:
          plVar30 = (long *)PTR_DAT_06e12318;
          if ((uVar23 & 1) != 0) {
            fVar48 = 1.0 - fVar51;
            uVar64 = (ulong)(uint)fVar48;
            fVar67 = ABS(fVar67) + (float)uVar26 * fVar48 * fVar71;
            fVar71 = DAT_0537e70c;
            if ((uVar29 & 0x18) == 0) {
              fVar71 = 1.0;
            }
            uVar26 = (ulong)(uint)(fVar71 * fStack0000000000000124);
            if (fVar67 <= fVar71 * fStack0000000000000124) goto LAB_04ca4e60;
            if (((*(int *)((long)unaff_x19 + 0x2fc) == 0) ||
                (*(int *)((long)unaff_x19 + 0x2fc) == 3)) || (uVar65 == *(uint *)(unaff_x19 + 0x94))
               ) {
              if (((char)unaff_x19[0x4b] != '\0') &&
                 (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
                fVar54 = *(float *)((long)unaff_x19 + 0x2f4) / 100.0;
                if (fVar51 < fVar54) {
                  fVar48 = fVar67 / fVar48;
                  if (fVar51 <= 0.0) {
                    fVar48 = fVar67;
                  }
                  fVar51 = fVar51 + (fVar67 - fVar71 * (fStack0000000000000124 + DAT_0537e708)) /
                                    fVar48;
                  goto LAB_04caa444;
                }
                fVar51 = *(float *)((long)unaff_x19 + 0x204);
                uVar64 = (ulong)(uint)fVar51;
                fVar48 = *(float *)(unaff_x19 + 0x4e);
                uVar26 = (ulong)(uint)fVar48;
                if (fVar51 <= fVar48) goto LAB_04ca4e10;
LAB_04caa3b8:
                fVar71 = (fVar51 - *(float *)(unaff_x19 + 0x4c)) * 0.5;
                if (fVar71 <= DAT_0534c364) {
                  fVar71 = DAT_0534c364;
                }
                *(float *)((long)unaff_x19 + 0x25c) = fVar51;
                fVar55 = (fVar51 - fVar71) * 20.0 + 0.5;
                fVar71 = DAT_0537e710;
                if (fVar55 != INFINITY) {
                  fVar71 = (float)(int)fVar55 / 20.0;
                }
                if (fVar71 <= fVar48) {
                  fVar71 = fVar48;
                }
LAB_04ca717c:
                *(float *)((long)unaff_x19 + 0x204) = fVar71;
                return;
              }
LAB_04ca4e10:
              iVar17 = (int)unaff_x19[0x61];
              if (iVar17 == 1) {
                lVar31 = *(long *)PTR_DAT_06e12318;
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar31 = *plVar30;
                }
                lVar34 = *(long *)(lVar31 + 0xb8);
                if (*(int *)(lVar34 + 0x1708) == 0) goto LAB_04ca5438;
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar34 = *(long *)(*plVar30 + 0xb8);
                }
                FUN_023a2be0(&stack0x00001290,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
                memcpy(&stack0x00000598,&stack0x00001290,0x3b8);
                goto LAB_04ca540c;
              }
              if (iVar17 != 6) {
                if (iVar17 == 3) {
                  if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  goto LAB_04ca5044;
                }
                goto LAB_04ca4e60;
              }
              if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              in_stack_00001258 = FUN_04ed5dfc();
              lVar31 = unaff_x19[0x62];
              if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                thunk_FUN_016466fc(*(long *)PTR_DAT_06d9fd78);
              }
              uVar23 = FUN_051d2ac0(lVar31,0,0);
              if ((uVar23 & 1) != 0) {
                plVar46 = (long *)unaff_x19[0x62];
                uVar72 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar46 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar46 + 0x558))(plVar46,uVar72,*(undefined8 *)(*plVar46 + 0x560));
                lVar31 = unaff_x19[0x62];
                if (lVar31 == 0) goto LAB_04caa2e0;
                *(int *)(lVar31 + 0x430) = (int)unaff_x19[0x86];
                FUN_04ec8ce4(lVar31,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
                plVar46 = (long *)unaff_x19[0x62];
                if (plVar46 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 100) = 1;
              }
              uVar16 = *in_stack_00000178;
              uVar66 = 3;
              goto LAB_04ca5544;
            }
            if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            in_stack_00001258 = FUN_04ed5dfc();
            if (*(float *)((long)unaff_x19 + 0x2e4) == DAT_0537e704) {
              lVar31 = *in_stack_00000180;
              if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x38), lVar34 == 0))
              goto LAB_04caa2e0;
              if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
              fVar48 = *(float *)((long)unaff_x19 + 0x4e4);
              fVar51 = 0.0;
              if ((0.0 < fVar48) && (fVar51 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
                fVar51 = *(float *)(in_stack_00000140 + 0x208) -
                         *(float *)(in_stack_00000140 + 0x210);
              }
              fVar51 = in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2dc) +
                       *(float *)(lVar34 + (int)*in_stack_00000178 * unaff_x24 + 0x14c) +
                       (fVar51 - *(float *)(unaff_x19 + 0x9b)) +
                       in_stack_00000080._4_4_ *
                       (in_stack_00000050._4_4_ + *(float *)(unaff_x19 + 0x5c));
            }
            else {
              lVar31 = unaff_x19[0x73];
              *(undefined1 *)(unaff_x19 + 0x5d) = 1;
              if (lVar31 == 0) goto LAB_04caa2e0;
              fVar48 = *(float *)((long)unaff_x19 + 0x4e4);
              fVar51 = *(float *)((long)unaff_x19 + 0x2e4) +
                       in_stack_000000f0 * *(float *)((long)unaff_x19 + 0x2dc);
            }
            puVar10 = PTR_DAT_06e12318;
            lVar31 = *(long *)(lVar31 + 0x38);
            if (lVar31 == 0) goto LAB_04caa2e0;
            uVar18 = *(uint *)((long)unaff_x19 + 0x49c);
            if ((*(uint *)(lVar31 + 0x18) <= uVar18) ||
               (uVar4 = uVar18 - 1, *(uint *)(lVar31 + 0x18) <= uVar4)) goto LAB_04caa4c0;
            fVar51 = fVar51 + *(float *)((long)unaff_x19 + 0x4c4);
            uVar64 = (ulong)(uint)fVar51;
            fVar68 = (fVar51 + fVar48) - *(float *)(lVar31 + (int)uVar18 * unaff_x24 + 0x150);
            if (((uStack0000000000000064 & 1) == 0 &&
                 *(short *)(lVar31 + (long)(int)uVar4 * (long)iVar15 + 0x24) == 0xad) &&
               ((fVar68 < fStack00000000000000d0 || ((int)unaff_x19[0x61] == 0)))) {
              uStack0000000000000064 = 0;
              *in_stack_00000178 = uVar4;
              plVar30 = (long *)PTR_DAT_06e12318;
              in_stack_00001258 = in_stack_00001258 - 1;
              in_stack_00001278 = CONCAT44(0x2d,uVar4);
              goto LAB_04ca2d40;
            }
            if (*(short *)(lVar31 + (int)uVar18 * unaff_x24 + 0x24) == 0xad) {
              uStack0000000000000064 = 1;
              plVar30 = (long *)PTR_DAT_06e12318;
              goto LAB_04ca2d40;
            }
            if (((uint)in_stack_00000088 & (uint)*(byte *)(unaff_x19 + 0x4b) & 1) != 0) {
              fVar51 = *(float *)(unaff_x19 + 0x5f);
              fVar54 = *(float *)((long)unaff_x19 + 0x2f4) / 100.0;
              if ((fVar54 <= fVar51) || ((int)unaff_x19[0x4d] <= *(int *)((long)unaff_x19 + 0x264)))
              {
                fVar51 = *(float *)((long)unaff_x19 + 0x204);
                uVar64 = (ulong)(uint)fVar51;
                fVar48 = *(float *)(unaff_x19 + 0x4e);
                if ((fVar48 < fVar51) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d]))
                goto LAB_04caa3b8;
                goto LAB_04ca6a40;
              }
LAB_04caa454:
              fVar48 = fVar67;
              if (0.0 < fVar51) {
                fVar48 = fVar67 / (1.0 - fVar51);
              }
              fVar51 = fVar51 + (fVar67 - fVar71 * (fStack0000000000000124 + DAT_0537e708)) / fVar48
              ;
LAB_04caa444:
              if (fVar54 <= fVar51) {
                fVar51 = fVar54;
              }
              *(float *)(unaff_x19 + 0x5f) = fVar51;
              return;
            }
LAB_04ca6a40:
            lVar31 = *(long *)PTR_DAT_06e12318;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar31 = *(long *)puVar10;
            }
            iVar17 = *(int *)(*(long *)(lVar31 + 0xb8) + 0xf80);
            if (((iVar17 != iStack0000000000000028) && (iVar17 != -1)) &&
               ((((uint)in_stack_00000088 ^ 1) & 1) == 0)) {
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              in_stack_00001258 = FUN_04ed5dfc();
              if ((unaff_x19[0x73] == 0) ||
                 (lVar31 = *(long *)(unaff_x19[0x73] + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
              uVar18 = *in_stack_00000178 - 1;
              if (*(uint *)(lVar31 + 0x18) <= uVar18) goto LAB_04caa4c0;
              iStack0000000000000028 = iVar17;
              if (*(short *)(lVar31 + (long)(int)uVar18 * (long)iVar15 + 0x24) == 0xad) {
                uStack0000000000000064 = 0;
                *in_stack_00000178 = uVar18;
                plVar30 = (long *)PTR_DAT_06e12318;
                in_stack_00001258 = in_stack_00001258 - 1;
                in_stack_00001278 = CONCAT44(0x2d,uVar18);
                goto LAB_04ca2d40;
              }
            }
            uVar26 = _fStack00000000000000d0 & 0xffffffff;
            if (fVar68 <= fStack00000000000000d0) {
              FUN_04ed690c(in_stack_00000080._4_4_);
              in_stack_00000088 = 1.4013e-45;
              uStack0000000000000064 = 0;
              uStack0000000000000070 = 1;
              plVar30 = (long *)PTR_DAT_06e12318;
              uVar64 = uVar24;
              goto LAB_04ca2d40;
            }
            if (*(int *)((long)unaff_x19 + 0x30c) == -1) {
              *(undefined4 *)((long)unaff_x19 + 0x30c) = *(undefined4 *)((long)unaff_x19 + 0x49c);
            }
            if ((char)unaff_x19[0x4b] != '\0') {
              fVar48 = *(float *)((long)unaff_x19 + 0x2ec);
              if ((fVar48 < *(float *)(unaff_x19 + 0x5c)) &&
                 (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
                fVar71 = *(float *)(unaff_x19 + 0x5c) +
                         ((in_stack_00000020._4_4_ - fVar68) / (float)((int)unaff_x19[0x96] + 1)) /
                         in_stack_00000080._4_4_;
                if (fVar71 <= fVar48) {
                  fVar71 = fVar48;
                }
LAB_04caa350:
                *(float *)(unaff_x19 + 0x5c) = fVar71;
                return;
              }
              fVar51 = *(float *)(unaff_x19 + 0x5f);
              fVar54 = *(float *)((long)unaff_x19 + 0x2f4) / 100.0;
              if ((fVar51 < fVar54) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d]))
              goto LAB_04caa454;
              fVar51 = *(float *)((long)unaff_x19 + 0x204);
              uVar64 = (ulong)(uint)fVar51;
              fVar48 = *(float *)(unaff_x19 + 0x4e);
              uVar26 = (ulong)(uint)fVar48;
              if ((fVar48 < fVar51) && (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d]))
              goto LAB_04caa3b8;
            }
            switch((int)unaff_x19[0x61]) {
            case 0:
            case 2:
            case 4:
              FUN_04ed690c(in_stack_00000080._4_4_);
              uVar64 = uVar24;
              goto LAB_04ca6fb0;
            case 1:
              lVar31 = *(long *)PTR_DAT_06e12318;
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar31 = *(long *)PTR_DAT_06e12318;
              }
              in_stack_00001278 = DAT_053d9ff0;
              lVar34 = *(long *)(lVar31 + 0xb8);
              if (*(int *)(lVar34 + 0x1708) == 0) {
                in_stack_00001258 = 0xffffffff;
                in_stack_00000178[0] = 0;
                in_stack_00000178[1] = 0;
              }
              else {
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar34 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
                }
                FUN_023a2be0(&stack0x00001290,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
                memcpy(&stack0x00000950,&stack0x00001290,0x3b8);
                iVar17 = FUN_04ed5dfc();
                in_stack_00001258 = iVar17 - 1;
                unaff_w21 = unaff_w21 + 1;
                iVar17 = *(int *)((long)unaff_x19 + 0x49c) + -1;
                *(int *)((long)unaff_x19 + 0x49c) = iVar17;
                in_stack_00001278 = CONCAT44(0x2026,iVar17);
              }
              break;
            case 3:
              if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              in_stack_00001258 = FUN_04ed5dfc();
              in_stack_00001278 = CONCAT44(3,uVar65);
              break;
            case 5:
              *(undefined1 *)((long)unaff_x19 + 0x36c) = 1;
              FUN_04ed690c(in_stack_00000080._4_4_);
              *(undefined4 *)((long)unaff_x19 + 0x4dc) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4e4) = 0;
              unaff_x19[0x98] = 0;
              *(int *)((long)unaff_x19 + 0x4bc) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
              uVar64 = uVar24;
LAB_04ca6fb0:
              in_stack_00000088 = 1.4013e-45;
              uStack0000000000000064 = 0;
              uStack0000000000000070 = 1;
              plVar30 = (long *)PTR_DAT_06e12318;
              goto LAB_04ca2d40;
            case 6:
              lVar31 = unaff_x19[0x62];
              if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar23 = FUN_051d2ac0(lVar31,0,0);
              if ((uVar23 & 1) != 0) {
                plVar30 = (long *)unaff_x19[0x62];
                uVar72 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar30 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar30 + 0x558))(plVar30,uVar72,*(undefined8 *)(*plVar30 + 0x560));
                lVar31 = unaff_x19[0x62];
                if (lVar31 == 0) goto LAB_04caa2e0;
                *(int *)(lVar31 + 0x430) = (int)unaff_x19[0x86];
                FUN_04ec8ce4(lVar31,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
                plVar30 = (long *)unaff_x19[0x62];
                if (plVar30 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar30 + 0x7d8))(plVar30,0,0,*(undefined8 *)(*plVar30 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 100) = 1;
              }
              in_stack_00001278 = CONCAT44(3,*in_stack_00000178);
              break;
            default:
              uStack0000000000000064 = 0;
              goto LAB_04ca4e60;
            }
            uStack0000000000000064 = 0;
            plVar30 = (long *)PTR_DAT_06e12318;
            goto LAB_04ca2d40;
          }
LAB_04ca4e60:
          if (uVar16 != 0) {
            lVar31 = *in_stack_00000180;
            if ((lVar31 != 0) && (lVar34 = *(long *)(lVar31 + 0x38), lVar34 != 0)) {
              uVar65 = *in_stack_00000178;
              if (uVar65 < *(uint *)(lVar34 + 0x18)) {
                *(undefined1 *)(lVar34 + (int)uVar65 * unaff_x24 + 400) = 0;
                *(uint *)((long)unaff_x19 + 0x4ac) = uVar65;
                lVar34 = *(long *)(lVar31 + 0x50);
                if (lVar34 != 0) {
                  uVar65 = *(uint *)(lVar34 + 0x18);
                  if (*(uint *)(unaff_x19 + 0x96) < uVar65) {
                    lVar22 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
                    iVar17 = *(int *)(lVar22 + 0x2c) + 1;
                    *(int *)(lVar22 + 0x2c) = iVar17;
                    uVar18 = *(uint *)(unaff_x19 + 0x96);
                    *(int *)(unaff_x19 + 0x97) = iVar17;
                    if (uVar18 < uVar65) {
                      lVar22 = lVar34 + (long)(int)uVar18 * 0x60;
                      *(float *)(lVar22 + 100) = fVar50;
                      *(float *)(lVar22 + 0x68) = fVar75;
                      *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
                      if (in_stack_0000128c != 0xa0) goto LAB_04ca5760;
                      lVar34 = lVar34 + (long)(int)uVar18 * 0x60;
                      goto LAB_04ca4f00;
                    }
                  }
                  goto LAB_04caa4c0;
                }
                goto LAB_04caa2e0;
              }
              goto LAB_04caa4c0;
            }
            goto LAB_04caa2e0;
          }
          if (in_stack_0000128c != 0xad) {
            if (*(int *)((long)unaff_x19 + 0x654) == 1) {
              (**(code **)(*unaff_x19 + 0x8c8))(uVar26,fVar53);
            }
            else if (*(int *)((long)unaff_x19 + 0x654) == 0) {
              (**(code **)(*unaff_x19 + 0x8b8))(fVar55);
            }
            uVar65 = *in_stack_00000178;
            if ((uStack0000000000000070 & 1) != 0) {
              *(uint *)(in_stack_00000140 + 0x1d8) = uVar65;
            }
            *(uint *)((long)unaff_x19 + 0x4ac) = uVar65;
            *(int *)((long)unaff_x19 + 0x4b4) = *(int *)((long)unaff_x19 + 0x4b4) + 1;
            if ((unaff_x19[0x73] != 0) && (lVar31 = *(long *)(unaff_x19[0x73] + 0x50), lVar31 != 0))
            {
              if (*(uint *)(unaff_x19 + 0x96) < *(uint *)(lVar31 + 0x18)) {
                lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
                uStack0000000000000070 = 0;
                *(float *)(lVar31 + 100) = fVar50;
                *(float *)(lVar31 + 0x68) = fVar75;
                goto LAB_04ca5760;
              }
              goto LAB_04caa4c0;
            }
            goto LAB_04caa2e0;
          }
          if ((*in_stack_00000180 == 0) ||
             (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
          *(undefined1 *)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 400) = 0;
        }
        else {
          if (((in_stack_0000128c & 0xfffffffe) == 10) && ((int)unaff_x19[0x61] == 6)) {
            fVar71 = 0.0;
            if ((0.0 < (float)uVar64) && (fVar71 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
              fVar71 = *(float *)(in_stack_00000140 + 0x208) - *(float *)(in_stack_00000140 + 0x210)
              ;
            }
            uVar23 = _fStack00000000000000d0 & 0xffffffff;
            if (fStack00000000000000d0 <
                (*(float *)((long)unaff_x19 + 0x4c4) -
                (*(float *)(unaff_x19 + 0x9b) - (float)uVar64)) + fVar71) {
              if (*(int *)((long)unaff_x19 + 0x30c) == -1) {
                *(uint *)((long)unaff_x19 + 0x30c) = uVar65;
              }
              plVar30 = (long *)PTR_DAT_06e12318;
              if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              in_stack_00001258 = FUN_04ed5dfc();
              lVar31 = unaff_x19[0x62];
              if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                thunk_FUN_016466fc(*(long *)PTR_DAT_06d9fd78);
              }
              uVar24 = FUN_051d2ac0(lVar31,0,0);
              if ((uVar24 & 1) != 0) {
                plVar46 = (long *)unaff_x19[0x62];
                uVar72 = (**(code **)(*unaff_x19 + 0x548))();
                if (plVar46 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar46 + 0x558))(plVar46,uVar72,*(undefined8 *)(*plVar46 + 0x560));
                lVar31 = unaff_x19[0x62];
                if (lVar31 == 0) goto LAB_04caa2e0;
                *(int *)(lVar31 + 0x430) = (int)unaff_x19[0x86];
                FUN_04ec8ce4(lVar31,*(undefined4 *)((long)unaff_x19 + 0x49c),0);
                plVar46 = (long *)unaff_x19[0x62];
                if (plVar46 == (long *)0x0) goto LAB_04caa2e0;
                (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
                *(undefined1 *)(unaff_x19 + 100) = 1;
              }
              uVar64 = uVar23;
              in_stack_00001278 = CONCAT44(3,uVar65);
              goto LAB_04ca2d40;
            }
          }
          if ((((in_stack_0000128c - 0x2007 < 0x23) &&
               ((1L << ((ulong)(in_stack_0000128c - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
              (in_stack_0000128c - 10 < 2)) || (in_stack_0000128c == 0xa0)) {
LAB_04ca56bc:
            if (((in_stack_0000128c != 0xad) && (in_stack_0000128c != 0x200b)) &&
               (in_stack_0000128c != 0x2060)) {
              lVar31 = *in_stack_00000180;
              if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x50), lVar34 == 0))
              goto LAB_04caa2e0;
              if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
              lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
              *(int *)(lVar34 + 0x2c) = *(int *)(lVar34 + 0x2c) + 1;
              *(int *)(lVar31 + 0x20) = *(int *)(lVar31 + 0x20) + 1;
            }
          }
          else {
            if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar23 = FUN_029007b8(in_stack_0000128c,0);
            if ((uVar23 & 1) != 0) goto LAB_04ca56bc;
          }
          if (in_stack_0000128c == 0xa0) {
            if ((*in_stack_00000180 == 0) ||
               (lVar34 = *(long *)(*in_stack_00000180 + 0x50), lVar34 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
            lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
LAB_04ca4f00:
            *(int *)(lVar34 + 0x20) = *(int *)(lVar34 + 0x20) + 1;
          }
        }
LAB_04ca5760:
        if (((int)unaff_x19[0x61] == 1) && ((in_stack_0000128c == 0x2d || (unaff_w26 != 1)))) {
          if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
          fVar71 = *(float *)(unaff_x19 + 0x41);
          iVar17 = FUN_04ab1930(unaff_x19[0xcd] + 0x28,0);
          if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
          fVar75 = (float)FUN_04ab1938(unaff_x19[0xcd] + 0x28,0);
          lVar31 = unaff_x19[0xcc];
          fVar48 = fStack00000000000000cc;
          if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
            fVar48 = 1.0;
          }
          if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_04caa2e0;
          fVar67 = *(float *)((long)unaff_x19 + 0x434);
          fVar53 = *(float *)(lVar31 + 0x2c);
          fVar50 = (float)FUN_04ab1e30(*(long *)(lVar31 + 0x20),0);
          fVar51 = *_fStack00000000000000c0;
          fVar50 = fVar67 * (fVar71 / (float)iVar17) * fVar75 * fVar48 * fVar53 * fVar50;
          fVar71 = *_fStack00000000000000b0;
          if ((in_stack_0000128c == 10) &&
             (*(int *)((long)unaff_x19 + 0x49c) != (int)unaff_x19[0x94])) {
            if ((*in_stack_00000180 == 0) ||
               (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
            uVar65 = *(int *)((long)unaff_x19 + 0x49c) - 1;
            if (*(uint *)(lVar31 + 0x18) <= uVar65) goto LAB_04caa4c0;
            if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
            fVar48 = *(float *)(lVar31 + (long)(int)uVar65 * (long)iVar15 + 0x58);
            iVar17 = FUN_04ab1930(unaff_x19[0xcd] + 0x28,0);
            if (unaff_x19[0xcd] == 0) goto LAB_04caa2e0;
            fVar67 = (float)FUN_04ab1938(unaff_x19[0xcd] + 0x28,0);
            lVar31 = unaff_x19[0xcc];
            fVar75 = fStack00000000000000cc;
            if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
              fVar75 = 1.0;
            }
            if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_04caa2e0;
            fVar53 = *(float *)((long)unaff_x19 + 0x434);
            fVar54 = *(float *)(lVar31 + 0x2c);
            fVar50 = (float)FUN_04ab1e30(*(long *)(lVar31 + 0x20),0);
            if ((*in_stack_00000180 == 0) ||
               (lVar31 = *(long *)(*in_stack_00000180 + 0x50), lVar31 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
            lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
            fVar51 = *(float *)(lVar31 + 100);
            fVar71 = *(float *)(lVar31 + 0x68);
            fVar50 = fVar53 * (fVar48 / (float)iVar17) * fVar67 * fVar75 * fVar54 * fVar50;
          }
          fVar53 = *(float *)((long)unaff_x19 + 0x4e4);
          fVar75 = *(float *)((long)unaff_x19 + 0x4c4);
          fVar54 = *(float *)(unaff_x19 + 0x9b);
          fVar48 = 0.0;
          fVar67 = 0.0;
          if ((0.0 < fVar53) && (fVar67 = 0.0, (char)unaff_x19[0x5d] == '\0')) {
            fVar67 = *(float *)(in_stack_00000140 + 0x208) - *(float *)(in_stack_00000140 + 0x210);
          }
          fVar68 = *(float *)(unaff_x19 + 0xca);
          if ((char)unaff_x19[0x1d] == '\0') {
            if ((unaff_x19[0xcc] == 0) || (lVar31 = *(long *)(unaff_x19[0xcc] + 0x20), lVar31 == 0))
            goto LAB_04caa2e0;
            FUN_04ab1df4(&stack0x00001290,lVar31,0);
            fVar48 = (float)FUN_04ab1c3c(&stack0x000011a0,0);
          }
          puVar10 = PTR_DAT_06e12318;
          fVar70 = *(float *)(unaff_x19 + 0x72);
          fVar71 = (fStack00000000000000c8 - fVar51) - fVar71;
          bVar13 = true;
          if ((fVar70 <= fVar71) && (bVar13 = false, !NAN(fVar70))) {
            bVar13 = fVar70 == -1.0;
          }
          if (!bVar13) {
            fVar71 = fVar70;
          }
          fVar51 = DAT_0537e70c;
          if ((uVar29 & 0x18) == 0) {
            fVar51 = 1.0;
          }
          if (((fVar75 - (fVar54 - fVar53)) + fVar67 < fStack00000000000000d0) &&
             (ABS(fVar68) + fVar50 * fVar48 * (1.0 - *(float *)(unaff_x19 + 0x5f)) < fVar51 * fVar71
             )) {
            if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            Photon_Chat_Demo_ChatGui__OnUserSubscribed();
            lVar31 = *(long *)(*(long *)puVar10 + 0xb8);
            uVar72 = *(undefined8 *)PTR_DAT_06e2bb40;
            memcpy(&stack0x00001290,(void *)(lVar31 + 0x810),0x3b8);
            FUN_023a2a94(lVar31 + 0x1338,&stack0x00001290,uVar72);
          }
        }
        lVar31 = *in_stack_00000180;
        if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x38), lVar34 == 0)) goto LAB_04caa2e0;
        if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
        uVar65 = *(uint *)(unaff_x19 + 0x96);
        lVar34 = lVar34 + (int)*in_stack_00000178 * unaff_x24;
        *(uint *)(lVar34 + 0x5c) = uVar65;
        *(undefined4 *)(lVar34 + 0x60) = *(undefined4 *)((long)unaff_x19 + 0x4bc);
        if (((unaff_w26 & 1) == 0) &&
           ((0xd < in_stack_0000128c || ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0))))
        {
          lVar31 = *(long *)(lVar31 + 0x50);
          if (lVar31 == 0) goto LAB_04caa2e0;
LAB_04ca5b20:
          if (*(uint *)(lVar31 + 0x18) <= uVar65) goto LAB_04caa4c0;
          *(int *)(lVar31 + (long)(int)uVar65 * 0x60 + 0x6c) = (int)unaff_x19[0x53];
        }
        else {
          lVar31 = *(long *)(lVar31 + 0x50);
          if (lVar31 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar31 + 0x18) <= uVar65) goto LAB_04caa4c0;
          if (*(int *)(lVar31 + (long)(int)uVar65 * 0x60 + 0x24) == 1) goto LAB_04ca5b20;
        }
        if (in_stack_0000128c == 9) {
          if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
          fVar71 = (float)FUN_04ab19d8(*in_stack_00000170 + 0x28,0);
          if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
          fVar75 = *(float *)(unaff_x19 + 0xca);
          uVar64 = (ulong)(uint)fVar75;
          fVar48 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000170 + 0x1b1));
          fVar48 = fVar49 * fVar71 * fVar48;
          if ((char)unaff_x19[0x1d] == '\0') {
            fVar71 = fVar48 * (float)(int)(fVar75 / fVar48);
            if (fVar71 <= fVar75) {
              fVar71 = fVar75 + fVar48;
            }
          }
          else {
            fVar71 = fVar48 * (float)(int)(fVar75 / fVar48);
            if (fVar75 <= fVar71) {
              fVar71 = fVar75 - fVar48;
            }
          }
LAB_04ca5d7c:
          *(float *)(unaff_x19 + 0xca) = fVar71;
        }
        else {
          fVar71 = *(float *)(unaff_x19 + 0x5a);
          if (fVar71 == 0.0) {
            fVar71 = *(float *)(unaff_x19 + 0xca);
            if ((char)unaff_x19[0x1d] == '\0') {
              fVar75 = (float)FUN_04ab1c3c(&stack0x00001240,0);
              fVar77 = *(float *)(in_stack_00000140 + 0x1a8);
              fVar50 = (float)FUN_04ab4a0c(&stack0x00001230,0);
              if (*in_stack_00000170 != 0) {
                fVar48 = 1.0 - *(float *)(unaff_x19 + 0x5f);
                fVar71 = fVar71 + fVar48 * (*(float *)((long)unaff_x19 + 0x2cc) +
                                           fVar49 * (fVar75 * fVar77 + fVar50) +
                                           in_stack_000000f0 *
                                           (fStack00000000000000ec +
                                           fStack00000000000000f4 +
                                           *(float *)(*in_stack_00000170 + 0x1a4)));
                *(float *)(unaff_x19 + 0xca) = fVar71;
                goto joined_r0x04ca5cbc;
              }
              goto LAB_04caa2e0;
            }
            fVar48 = (float)FUN_04ab4a0c(&stack0x00001230,0);
            if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
            uVar64 = (ulong)(uint)(1.0 - *(float *)(unaff_x19 + 0x5f));
            fVar71 = fVar71 - (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                              (*(float *)((long)unaff_x19 + 0x2cc) +
                              fVar49 * fVar48 +
                              in_stack_000000f0 *
                              (fStack00000000000000ec +
                              fStack00000000000000f4 + *(float *)(*in_stack_00000170 + 0x1a4)));
            *(float *)(unaff_x19 + 0xca) = fVar71;
            if ((uVar16 != 0) || (in_stack_0000128c == 0x200b)) {
              uVar64 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b));
              fVar71 = fVar71 - in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b);
              goto LAB_04ca5d7c;
            }
          }
          else {
            if (((*(char *)((long)unaff_x19 + 0x2d4) != '\0') && (in_stack_0000128c < 0x3b)) &&
               ((1L << ((ulong)in_stack_0000128c & 0x3f) & 0x400500000000000U) != 0)) {
              fVar71 = fVar71 * 0.5;
            }
            if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
            fVar48 = *(float *)(unaff_x19 + 0xca);
            fVar71 = fVar48 + (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                              (*(float *)((long)unaff_x19 + 0x2cc) +
                              (fVar71 - fVar77) +
                              in_stack_000000f0 *
                              (fStack00000000000000f4 + *(float *)(*in_stack_00000170 + 0x1a4)));
            *(float *)(unaff_x19 + 0xca) = fVar71;
joined_r0x04ca5cbc:
            if ((uVar16 != 0) || (uVar64 = (ulong)(uint)fVar48, in_stack_0000128c == 0x200b)) {
              uVar64 = (ulong)(uint)(in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b));
              fVar71 = fVar71 + in_stack_000000f0 * *(float *)(unaff_x19 + 0x5b);
              goto LAB_04ca5d7c;
            }
          }
        }
        lVar31 = *in_stack_00000180;
        if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x38), lVar34 == 0)) goto LAB_04caa2e0;
        uVar65 = *in_stack_00000178;
        if (*(uint *)(lVar34 + 0x18) <= uVar65) goto LAB_04caa4c0;
        *(float *)(lVar34 + (int)uVar65 * unaff_x24 + 0x13c) = fVar71;
        if (in_stack_0000128c == 0xd) {
          uVar64 = 0;
          *(float *)(unaff_x19 + 0xca) = *(float *)((long)unaff_x19 + 0x43c) + 0.0;
        }
        if (((int)unaff_x19[0x61] == 5) &&
           (((0xd < in_stack_0000128c || ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0x2c00U) == 0))
            && (1 < in_stack_0000128c - 0x2028)))) {
          lVar34 = *(long *)(lVar31 + 0x58);
          if (lVar34 == 0) goto LAB_04caa2e0;
          iVar17 = *(int *)((long)unaff_x19 + 0x4bc) + 1;
          if (*(int *)(lVar34 + 0x18) < iVar17) {
            if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            FUN_022de88c((long *)(lVar31 + 0x58),iVar17,1,*(undefined8 *)PTR_DAT_06dc6880);
            lVar31 = *in_stack_00000180;
            if (lVar31 == 0) goto LAB_04caa2e0;
          }
          lVar34 = *(long *)(lVar31 + 0x58);
          if (lVar34 == 0) goto LAB_04caa2e0;
          lVar22 = (long)(int)*(uint *)((long)unaff_x19 + 0x4bc);
          if (*(uint *)(lVar34 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4bc)) goto LAB_04caa4c0;
          lVar37 = lVar34 + lVar22 * 0x14;
          fVar48 = *(float *)(lVar37 + 0x30);
          uVar64 = (ulong)(uint)fVar48;
          *(int *)(lVar37 + 0x28) = (int)unaff_x19[0x98];
          fVar71 = *(float *)(unaff_x19 + 0x9a);
          if (fVar48 <= *(float *)(unaff_x19 + 0x9a)) {
            fVar71 = fVar48;
          }
          *(float *)(lVar37 + 0x30) = fVar71;
          if (*(char *)((long)unaff_x19 + 0x36c) != '\0') {
            *(undefined1 *)((long)unaff_x19 + 0x36c) = 0;
            *(undefined4 *)(lVar34 + lVar22 * 0x14 + 0x20) =
                 *(undefined4 *)((long)unaff_x19 + 0x49c);
          }
          uVar65 = *in_stack_00000178;
          *(uint *)(lVar34 + lVar22 * 0x14 + 0x24) = uVar65;
        }
        uVar29 = in_stack_0000128c;
        if (((in_stack_0000128c < 0xc) && ((1 << (ulong)(in_stack_0000128c & 0x1f) & 0xc08U) != 0))
           || ((in_stack_0000128c - 0x2028 < 2 ||
               (((unaff_w26 & in_stack_0000128c == 0x2d) != 0 ||
                ((float)uVar65 == in_stack_00000058._4_4_)))))) {
          if (0.0 < *(float *)((long)unaff_x19 + 0x4e4)) {
            fVar71 = *(float *)((long)unaff_x19 + 0x4d4) - *(float *)((long)unaff_x19 + 0x4dc);
            if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            if (((fStack0000000000000060 < ABS(fVar71)) && ((char)unaff_x19[0x5d] == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x36c) == '\0')) {
              Photon_Chat_Demo_ChatGui__OnUserPropertiesChanged(fVar71);
              *(float *)(unaff_x19 + 0x9a) = *(float *)(unaff_x19 + 0x9a) - fVar71;
              *(float *)((long)unaff_x19 + 0x4e4) = fVar71 + *(float *)((long)unaff_x19 + 0x4e4);
              puVar10 = PTR_DAT_06e12318;
              lVar31 = *(long *)PTR_DAT_06e12318;
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar31 = *(long *)puVar10;
              }
              lVar34 = *(long *)(lVar31 + 0xb8);
              if (*(int *)(lVar34 + 0x838) == (int)unaff_x19[0x96]) {
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar34 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
                }
                FUN_023a2be0(&stack0x00001290,lVar34 + 0x1338,*(undefined8 *)PTR_DAT_06dc3038);
                memcpy(&stack0x000001c0,&stack0x00001290,0x3b8);
                puVar10 = PTR_DAT_06e12318;
                lVar31 = *(long *)PTR_DAT_06e12318;
                memcpy((void *)(*(long *)(lVar31 + 0xb8) + 0x810),&stack0x000001c0,0x3b8);
                thunk_FUN_01656ef8(*(long *)(lVar31 + 0xb8) + 0x8a8,0);
                lVar31 = *(long *)(*(long *)puVar10 + 0xb8);
                *(float *)(lVar31 + 0x848) = fVar71 + *(float *)(lVar31 + 0x848);
                *(float *)(lVar31 + 0x894) = fVar71 + *(float *)(lVar31 + 0x894);
                uVar72 = *(undefined8 *)PTR_DAT_06e2bb40;
                memcpy(&stack0x00001290,(void *)(lVar31 + 0x810),0x3b8);
                FUN_023a2a94(lVar31 + 0x1338,&stack0x00001290,uVar72);
              }
            }
          }
          fVar75 = *(float *)((long)unaff_x19 + 0x4e4);
          *(undefined1 *)((long)unaff_x19 + 0x36c) = 0;
          fVar48 = *(float *)(unaff_x19 + 0x9b) - fVar75;
          fVar71 = *(float *)(unaff_x19 + 0x9a);
          if (fVar48 <= *(float *)(unaff_x19 + 0x9a)) {
            fVar71 = fVar48;
          }
          *(float *)(unaff_x19 + 0x9a) = fVar71;
          fVar50 = *(float *)((long)unaff_x19 + 0x4d4);
          if (in_stack_00001284 == '\0') {
            in_stack_00001288 = fVar71;
          }
          if ((*(char *)((long)unaff_x19 + 0x364) != '\0') &&
             (((int)unaff_x19[0x6b] <= *(int *)((long)unaff_x19 + 0x49c) ||
              ((int)unaff_x19[0x6c] <= (int)unaff_x19[0x96])))) {
            in_stack_00001284 = '\x01';
          }
          lVar31 = *in_stack_00000180;
          if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x50), lVar34 == 0)) goto LAB_04caa2e0;
          uVar65 = *(uint *)(unaff_x19 + 0x96);
          if (*(uint *)(lVar34 + 0x18) <= uVar65) goto LAB_04caa4c0;
          lVar22 = lVar34 + (long)(int)uVar65 * 0x60;
          *(int *)(lVar22 + 0x38) = (int)unaff_x19[0x94];
          iVar17 = (int)unaff_x19[0x94];
          if ((int)unaff_x19[0x94] <= *(int *)((long)unaff_x19 + 0x4a4)) {
            iVar17 = *(int *)((long)unaff_x19 + 0x4a4);
          }
          *(int *)((long)unaff_x19 + 0x4a4) = iVar17;
          *(int *)(lVar22 + 0x3c) = iVar17;
          *(undefined4 *)(unaff_x19 + 0x95) = *(undefined4 *)((long)unaff_x19 + 0x49c);
          *(undefined4 *)(lVar22 + 0x40) = *(undefined4 *)((long)unaff_x19 + 0x49c);
          iVar17 = *(int *)((long)unaff_x19 + 0x4a4);
          if (*(int *)((long)unaff_x19 + 0x4a4) <= *(int *)((long)unaff_x19 + 0x4ac)) {
            iVar17 = *(int *)((long)unaff_x19 + 0x4ac);
          }
          *(int *)((long)unaff_x19 + 0x4ac) = iVar17;
          *(int *)(lVar22 + 0x44) = iVar17;
          *(int *)(lVar22 + 0x24) = (*(int *)(lVar22 + 0x40) - *(int *)(lVar22 + 0x38)) + 1;
          iVar43 = *(int *)((long)unaff_x19 + 0x4b4);
          *(int *)(lVar22 + 0x28) = iVar43;
          *(int *)(lVar22 + 0x30) = ((iVar17 - *(int *)(lVar22 + 0x38)) - iVar43) + 1;
          lVar31 = *(long *)(lVar31 + 0x38);
          if (lVar31 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4a4)) goto LAB_04caa4c0;
          uVar66 = *(undefined4 *)
                    (lVar31 + (int)*(uint *)((long)unaff_x19 + 0x4a4) * unaff_x24 + 0x114);
          lVar34 = lVar34 + (long)(int)uVar65 * 0x60;
          *(float *)(lVar34 + 0x74) = fVar48;
          *(undefined4 *)(lVar34 + 0x70) = uVar66;
          lVar31 = *in_stack_00000180;
          if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x50), lVar34 == 0)) goto LAB_04caa2e0;
          if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
          lVar31 = *(long *)(lVar31 + 0x38);
          if (lVar31 == 0) goto LAB_04caa2e0;
          if (*(uint *)(lVar31 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_04caa4c0;
          uVar66 = *(undefined4 *)
                    (lVar31 + (int)*(uint *)((long)unaff_x19 + 0x4ac) * unaff_x24 + 0x120);
          fVar50 = fVar50 - fVar75;
          lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x96) * 0x60;
          *(float *)(lVar34 + 0x7c) = fVar50;
          *(undefined4 *)(lVar34 + 0x78) = uVar66;
          lVar31 = *in_stack_00000180;
          if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x50), lVar34 == 0)) goto LAB_04caa2e0;
          lVar22 = (long)(int)*(uint *)(unaff_x19 + 0x96);
          if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x96)) goto LAB_04caa4c0;
          lVar37 = lVar34 + lVar22 * 0x60;
          *(float *)(lVar37 + 0x48) = *(float *)(lVar37 + 0x78) - fVar49 * fVar55;
          *(float *)(lVar37 + 0x60) = fStack0000000000000124;
          if (*(int *)(lVar37 + 0x24) == 1) {
            *(int *)(lVar34 + lVar22 * 0x60 + 0x6c) = (int)unaff_x19[0x53];
          }
          if ((*in_stack_00000170 == 0) || (lVar37 = *(long *)(lVar31 + 0x38), lVar37 == 0))
          goto LAB_04caa2e0;
          lVar44 = (long)(int)*(uint *)((long)unaff_x19 + 0x4ac);
          if (*(uint *)(lVar37 + 0x18) <= *(uint *)((long)unaff_x19 + 0x4ac)) goto LAB_04caa4c0;
          if ((*(char *)(lVar37 + lVar44 * unaff_x24 + 400) == '\0') &&
             (lVar44 = (long)(int)*(uint *)(unaff_x19 + 0x95),
             *(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x95))) goto LAB_04caa4c0;
          fVar75 = (1.0 - *(float *)(unaff_x19 + 0x5f)) *
                   (*(float *)((long)unaff_x19 + 0x2cc) +
                   in_stack_000000f0 *
                   (fStack00000000000000ec +
                   fStack00000000000000f4 + *(float *)(*in_stack_00000170 + 0x1a4)));
          fVar71 = -fVar75;
          if ((char)unaff_x19[0x1d] != '\0') {
            fVar71 = fVar75;
          }
          lVar34 = lVar34 + lVar22 * 0x60;
          *(float *)(lVar34 + 0x5c) = *(float *)(lVar37 + lVar44 * unaff_x24 + 0x13c) + fVar71;
          fVar71 = *(float *)((long)unaff_x19 + 0x4e4);
          *(float *)(lVar34 + 0x4c) = fStack000000000000006c + (fVar50 - fVar48);
          *(float *)(lVar34 + 0x50) = fVar50;
          fVar71 = 0.0 - fVar71;
          uVar64 = (ulong)(uint)fVar71;
          *(float *)(lVar34 + 0x54) = fVar71;
          *(float *)(lVar34 + 0x58) = fVar48;
          plVar30 = (long *)PTR_DAT_06e12318;
          if ((((in_stack_0000128c & 0xfffffffe) == 10) ||
              ((unaff_w26 & in_stack_0000128c == 0x2d) != 0)) || (in_stack_0000128c - 0x2028 < 2)) {
            if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            Photon_Chat_Demo_ChatGui__OnUserSubscribed();
            iVar17 = (int)unaff_x19[0x96] + 1;
            *(int *)(unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x49c) + 1;
            *(int *)(unaff_x19 + 0x96) = iVar17;
            *(undefined8 *)(in_stack_00000140 + 0x1e8) = 0;
            lVar31 = unaff_x19[0x73];
            if ((lVar31 == 0) || (*(long *)(lVar31 + 0x50) == 0)) goto LAB_04caa2e0;
            if (*(int *)(*(long *)(lVar31 + 0x50) + 0x18) <= iVar17) {
              FUN_04ed6750();
              lVar31 = unaff_x19[0x73];
              if (lVar31 == 0) goto LAB_04caa2e0;
            }
            lVar31 = *(long *)(lVar31 + 0x38);
            if (lVar31 == 0) goto LAB_04caa2e0;
            if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
            fVar71 = *(float *)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 0x14c);
            if (*(float *)((long)unaff_x19 + 0x2e4) == DAT_0537e704) {
              fVar48 = 0.0;
              if ((in_stack_0000128c == 0x2029) || (in_stack_0000128c == 10)) {
                fVar48 = *(float *)(unaff_x19 + 0x5e);
              }
              uVar27 = 0;
              fVar48 = *(float *)((long)unaff_x19 + 0x4e4) +
                       fVar71 + (0.0 - *(float *)(unaff_x19 + 0x9b)) +
                       in_stack_00000080._4_4_ *
                       (in_stack_00000050._4_4_ + *(float *)(unaff_x19 + 0x5c)) +
                       in_stack_000000f0 * (*(float *)((long)unaff_x19 + 0x2dc) + fVar48);
            }
            else {
              if ((in_stack_0000128c == 0x2029) || (fVar48 = 0.0, in_stack_0000128c == 10)) {
                fVar48 = *(float *)(unaff_x19 + 0x5e);
              }
              uVar27 = 1;
              fVar48 = *(float *)((long)unaff_x19 + 0x4e4) +
                       *(float *)((long)unaff_x19 + 0x2e4) +
                       in_stack_000000f0 * (*(float *)((long)unaff_x19 + 0x2dc) + fVar48);
            }
            *(float *)((long)unaff_x19 + 0x4e4) = fVar48;
            *(undefined1 *)(unaff_x19 + 0x5d) = uVar27;
            lVar31 = *plVar30;
            if (*(int *)(lVar31 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar31 = *plVar30;
            }
            uVar72 = NEON_rev64(*(undefined8 *)(*(long *)(lVar31 + 0xb8) + 0x1730),4);
            *(undefined8 *)(in_stack_00000140 + 0x208) = uVar72;
            uVar64 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x43c);
            *(float *)((long)unaff_x19 + 0x4dc) = fVar71;
            *(float *)(unaff_x19 + 0xca) =
                 *(float *)(unaff_x19 + 0x87) + 0.0 + *(float *)((long)unaff_x19 + 0x43c);
            Photon_Chat_Demo_ChatGui__OnUserSubscribed();
            Photon_Chat_Demo_ChatGui__OnUserSubscribed();
            in_stack_00000088 = 1.4013e-45;
            *(int *)((long)unaff_x19 + 0x49c) = *(int *)((long)unaff_x19 + 0x49c) + 1;
            uStack0000000000000070 = 1;
LAB_04ca2d40:
            do {
              unaff_s15 = 1.0;
              in_stack_00001258 = in_stack_00001258 + 1;
              lVar31 = unaff_x19[0x90];
              if (lVar31 == 0) goto LAB_04caa2e0;
              if ((int)*(uint *)(lVar31 + 0x18) <= (int)in_stack_00001258) {
LAB_04ca70c0:
                fVar71 = (float)uVar64;
                if (((char)unaff_x19[0x4b] != '\0') &&
                   (fVar71 = DAT_0537e714,
                   DAT_0537e714 < *(float *)((long)unaff_x19 + 0x25c) - *(float *)(unaff_x19 + 0x4c)
                   )) {
                  fVar71 = *(float *)((long)unaff_x19 + 0x204);
                  fVar48 = *(float *)((long)unaff_x19 + 0x274);
                  if ((fVar71 < fVar48) &&
                     (*(int *)((long)unaff_x19 + 0x264) < (int)unaff_x19[0x4d])) {
                    if (*(float *)(unaff_x19 + 0x5f) < *(float *)((long)unaff_x19 + 0x2f4) / 100.0)
                    {
                      *(undefined4 *)(unaff_x19 + 0x5f) = 0;
                    }
                    fVar55 = (*(float *)((long)unaff_x19 + 0x25c) - fVar71) * 0.5;
                    if (fVar55 <= DAT_0534c364) {
                      fVar55 = DAT_0534c364;
                    }
                    *(float *)(unaff_x19 + 0x4c) = fVar71;
                    fVar55 = (fVar71 + fVar55) * 20.0 + 0.5;
                    fVar71 = DAT_0537e710;
                    if (fVar55 != INFINITY) {
                      fVar71 = (float)(int)fVar55 / 20.0;
                    }
                    if (fVar48 <= fVar71) {
                      fVar71 = fVar48;
                    }
                    goto LAB_04ca717c;
                  }
                }
                *(undefined1 *)((long)unaff_x19 + 0x26c) = 1;
                puVar10 = PTR_DAT_06d9fd78;
                if ((int)unaff_x19[0x4d] <= *(int *)((long)unaff_x19 + 0x264)) {
                  uVar72 = FUN_032194f0(_uStack0000000000000040,0);
                  uVar74 = FUN_031cc64c(in_stack_00000048,0);
                  uVar72 = FUN_02526f2c(*(undefined8 *)PTR_DAT_06e4b7d0,uVar72,
                                        *(undefined8 *)PTR_DAT_06e3cf20,uVar74,0);
                  if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
                    thunk_FUN_016466fc(*(long *)PTR_DAT_06e52cd8);
                  }
                  FUN_048662d8(uVar72,0);
                }
                if ((*in_stack_00000178 == 0) ||
                   ((*in_stack_00000178 == 1 && (in_stack_0000128c == 3)))) {
                  pcVar36 = *(code **)(*unaff_x19 + 0x948);
                  goto LAB_04caa2f8;
                }
                lVar31 = *plVar30;
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar31 = *plVar30;
                }
                puVar11 = PTR_DAT_06e50440;
                lVar31 = **(long **)(lVar31 + 0xb8);
                if (lVar31 == 0) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
                iVar15 = *(int *)(lVar31 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x38 + 0x54) <<
                         2;
                if ((*in_stack_00000180 == 0) ||
                   (lVar31 = *(long *)(*in_stack_00000180 + 0x60), lVar31 == 0)) goto LAB_04caa2e0;
                if (*(int *)(lVar31 + 0x18) == 0) goto LAB_04caa4c0;
                FUN_051ef01c(lVar31 + 0x20,0,0);
                if (DAT_0722a13e == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06e50440);
                  DAT_0722a13e = '\x01';
                }
                iVar17 = (int)unaff_x19[0x52];
                fStack00000000000000ec = **(float **)(*(long *)puVar11 + 0xb8);
                uStack00000000000000e0 = *(undefined8 *)(*(float **)(*(long *)puVar11 + 0xb8) + 1);
                lVar31 = unaff_x19[0xe5];
                in_stack_000000a8 = uStack00000000000000e0;
                fStack00000000000000b0 = fStack00000000000000ec;
                if (iVar17 < 0x401) {
                  if (iVar17 == 0x100) {
                    if (lVar31 == 0) goto LAB_04caa2e0;
                    if (*(uint *)(lVar31 + 0x18) < 2) goto LAB_04caa4c0;
                    uVar72 = *(undefined8 *)(lVar31 + 0x30);
                    if ((int)unaff_x19[0x61] == 5) {
                      if ((*in_stack_00000180 == 0) ||
                         (lVar34 = *(long *)(*in_stack_00000180 + 0x58), lVar34 == 0))
                      goto LAB_04caa2e0;
                      if (*(uint *)(lVar34 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
                      fVar71 = *(float *)(lVar34 + (long)(int)uStack000000000000003c * 0x14 + 0x28);
                    }
                    else {
                      fVar71 = *(float *)((long)unaff_x19 + 0x4c4);
                    }
                    fStack00000000000000b0 =
                         fStack0000000000000038 + 0.0 + *(float *)(lVar31 + 0x2c);
                    fVar71 = (0.0 - fVar71) - fStack0000000000000030;
                  }
                  else if (iVar17 == 0x200) {
                    if (lVar31 == 0) goto LAB_04caa2e0;
                    if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
                    goto LAB_04caa4c0;
                    fStack00000000000000b0 =
                         (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                    uVar72 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5,
                                      ((float)*(undefined8 *)(lVar31 + 0x24) +
                                      (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5);
                    if ((int)unaff_x19[0x61] == 5) {
                      if ((*in_stack_00000180 == 0) ||
                         (lVar31 = *(long *)(*in_stack_00000180 + 0x58), lVar31 == 0))
                      goto LAB_04caa2e0;
                      if (*(uint *)(lVar31 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
                      lVar31 = lVar31 + (long)(int)uStack000000000000003c * 0x14;
                      fStack00000000000000b0 = fStack0000000000000038 + 0.0 + fStack00000000000000b0
                      ;
                      fVar71 = ((fStack0000000000000030 + *(float *)(lVar31 + 0x28) +
                                *(float *)(lVar31 + 0x30)) - fStack0000000000000034) * -0.5 + 0.0;
                    }
                    else {
                      fStack00000000000000b0 = fStack0000000000000038 + 0.0 + fStack00000000000000b0
                      ;
                      fVar71 = ((fStack0000000000000030 + *(float *)((long)unaff_x19 + 0x4c4) +
                                in_stack_00001288) - fStack0000000000000034) * -0.5 + 0.0;
                    }
                  }
                  else {
                    if (iVar17 != 0x400) goto LAB_04ca76a0;
                    if (lVar31 == 0) goto LAB_04caa2e0;
                    if (*(int *)(lVar31 + 0x18) == 0) goto LAB_04caa4c0;
                    uVar72 = *(undefined8 *)(lVar31 + 0x24);
                    if ((int)unaff_x19[0x61] == 5) {
                      if ((*in_stack_00000180 == 0) ||
                         (lVar34 = *(long *)(*in_stack_00000180 + 0x58), lVar34 == 0))
                      goto LAB_04caa2e0;
                      if (*(uint *)(lVar34 + 0x18) <= uStack000000000000003c) goto LAB_04caa4c0;
                      in_stack_00001288 =
                           *(float *)(lVar34 + (long)(int)uStack000000000000003c * 0x14 + 0x30);
                    }
                    fStack00000000000000b0 =
                         fStack0000000000000038 + 0.0 + *(float *)(lVar31 + 0x20);
                    fVar71 = fStack0000000000000034 + (0.0 - in_stack_00001288);
                  }
                  in_stack_000000a8 =
                       CONCAT44((float)((ulong)uVar72 >> 0x20) + 0.0,(float)uVar72 + fVar71);
                }
                else if (iVar17 == 0x800) {
                  if (lVar31 == 0) goto LAB_04caa2e0;
                  if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
                  goto LAB_04caa4c0;
                  fVar71 = ((float)*(undefined8 *)(lVar31 + 0x24) +
                           (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5;
                  fStack00000000000000b0 =
                       fStack0000000000000038 + 0.0 +
                       (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                  in_stack_000000a8 =
                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                fVar71 + 0.0);
                }
                else if (iVar17 == 0x1000) {
                  if (lVar31 == 0) goto LAB_04caa2e0;
                  if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
                  goto LAB_04caa4c0;
                  fVar71 = ((float)*(undefined8 *)(lVar31 + 0x24) +
                           (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5;
                  fStack00000000000000b0 =
                       fStack0000000000000038 + 0.0 +
                       (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                  in_stack_000000a8 =
                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                fVar71 + (0.0 - ((fStack0000000000000030 +
                                                  *(float *)((long)unaff_x19 + 0x4f4) +
                                                 *(float *)((long)unaff_x19 + 0x4ec)) -
                                                fStack0000000000000034) * 0.5));
                }
                else if (iVar17 == 0x2000) {
                  if (lVar31 == 0) goto LAB_04caa2e0;
                  if ((*(int *)(lVar31 + 0x18) == 1) || (*(int *)(lVar31 + 0x18) == 0))
                  goto LAB_04caa4c0;
                  fStack00000000000000b0 =
                       fStack0000000000000038 + 0.0 +
                       (*(float *)(lVar31 + 0x20) + *(float *)(lVar31 + 0x2c)) * 0.5;
                  fVar71 = 0.0 - ((*(float *)(unaff_x19 + 0x99) - fStack0000000000000030) -
                                 fStack0000000000000034) * 0.5;
                  in_stack_000000a8 =
                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar31 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar31 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                ((float)*(undefined8 *)(lVar31 + 0x24) +
                                (float)*(undefined8 *)(lVar31 + 0x30)) * 0.5 + fVar71);
                }
LAB_04ca76a0:
                if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
                uVar72 = FUN_036e1620(unaff_x19[0xe7],0);
                puVar11 = PTR_DAT_06e124b8;
                if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                  thunk_FUN_016466fc(*(long *)puVar10);
                }
                uVar25 = FUN_051d94d4(uVar72,0,0);
                lVar31 = FUN_04ec8f8c();
                if (lVar31 == 0) goto LAB_04caa2e0;
                FUN_04f1cc5c(lVar31,0);
                *(float *)(unaff_x19 + 0xe4) = fVar71;
                if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
                iVar17 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor
                                   (unaff_x19[0xe7],0);
                if (unaff_x19[0xe7] == 0) goto LAB_04caa2e0;
                fVar48 = (float)FUN_036e0f48(unaff_x19[0xe7],0);
                dVar61 = DAT_0534bb48;
                dVar60 = modf(DAT_0534bb48,(double *)&stack0x00001290);
                if (dVar60 == 0.5) {
                  fVar55 = (float)dVar58;
                  if (((long)dVar58 & 1U) != 0) {
                    fVar55 = (float)dVar58 + 1.0;
                  }
                }
                else {
                  fVar55 = 255.0;
                }
                dVar60 = modf(dVar61,(double *)&stack0x00001290);
                if (dVar60 == 0.5) {
                  fVar75 = (float)dVar58;
                  if (((long)dVar58 & 1U) != 0) {
                    fVar75 = (float)dVar58 + 1.0;
                  }
                }
                else {
                  fVar75 = 255.0;
                }
                dVar60 = modf(dVar61,(double *)&stack0x00001290);
                if (dVar60 == 0.5) {
                  fVar49 = (float)dVar58;
                  if (((long)dVar58 & 1U) != 0) {
                    fVar49 = (float)dVar58 + 1.0;
                  }
                }
                else {
                  fVar49 = 255.0;
                }
                dVar60 = modf(dVar61,(double *)&stack0x00001290);
                if (dVar60 == 0.5) {
                  fVar50 = (float)dVar58;
                  if (((long)dVar58 & 1U) != 0) {
                    fVar50 = (float)dVar58 + 1.0;
                  }
                }
                else {
                  fVar50 = 255.0;
                }
                modf(dVar61,(double *)&stack0x00001290);
                modf(dVar61,(double *)&stack0x00001290);
                modf(dVar61,(double *)&stack0x00001290);
                modf(dVar61,(double *)&stack0x00001290);
                if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                if (DAT_07236d0f == '\0') {
                  thunk_FUN_0159f088(PTR_DAT_06e124b8);
                  DAT_07236d0f = '\x01';
                }
                puVar10 = PTR_DAT_06e124b8;
                lVar31 = *(long *)PTR_DAT_06e124b8;
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar31 = *(long *)puVar10;
                }
                puVar32 = *(undefined4 **)(lVar31 + 0xb8);
                uVar23 = (ulong)(uint)puVar32[1];
                uVar24 = (ulong)(uint)puVar32[2];
                uVar64 = (ulong)(uint)puVar32[3];
                FUN_0480b01c(*puVar32,uVar23,uVar24,uVar64,&stack0x00001260,0x4000ffff,0);
                if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                lVar31 = *in_stack_00000180;
                if (lVar31 == 0) goto LAB_04caa2e0;
                uVar16 = *in_stack_00000178;
                if ((int)uVar16 < 1) {
                  fStack00000000000000cc = 0.0;
                  iVar17 = 0;
                  goto LAB_04ca9d20;
                }
                lVar31 = *(long *)(lVar31 + 0x38);
                fVar71 = ABS(fVar71);
                fVar77 = 1.0;
                if ((uVar25 & 1) == 0) {
                  fVar77 = fVar71;
                }
                if (lVar31 == 0) goto LAB_04caa2e0;
                bVar12 = false;
                bVar13 = false;
                bVar14 = false;
                bVar9 = false;
                fStack00000000000000cc = 0.0;
                uStack0000000000000040 = 0;
                uStack0000000000000070 = 0;
                in_stack_000000f0 = 0.0;
                fStack00000000000000f4 =
                     *(float *)(*(long *)(*(long *)PTR_DAT_06e12318 + 0xb8) + 0x1730);
                uStack000000000000008c =
                     (int)fVar55 & 0xffU | ((int)fVar75 & 0xffU) << 8 |
                     ((int)fVar49 & 0xffU) << 0x10 | (int)fVar50 << 0x18;
                in_stack_00000080._4_4_ = fStack00000000000000d8;
                in_stack_00000088 = 0.0;
                fStack0000000000000120 = 0.0;
                fStack0000000000000060 = 0.0;
                fStack00000000000000a0 = 0.0;
                in_stack_00000058._4_4_ = 0.0;
                iVar43 = 0;
                lVar34 = 0x2dc;
                uVar21 = 0;
                fVar55 = 0.0;
                fStack00000000000000c8 = fStack00000000000000d8;
                fStack00000000000000c0 = fStack00000000000000dc;
                fStack0000000000000074 = fStack00000000000000dc;
                uStack0000000000000078 = in_stack_000000b8._4_4_;
                fStack0000000000000094 = fStack00000000000000dc;
                fStack0000000000000098 = fStack00000000000000d8;
                uStack0000000000000090 = in_stack_000000b8._4_4_;
                uVar47 = 1;
                uVar65 = 0;
                goto LAB_04ca7b5c;
              }
              if (*(uint *)(lVar31 + 0x18) <= in_stack_00001258) goto LAB_04caa4c0;
              uVar16 = *(uint *)(lVar31 + (long)(int)in_stack_00001258 * 0x10 + 0x24);
              if (uVar16 == 0) goto LAB_04ca70c0;
              if (5 < unaff_w21) {
                uVar72 = FUN_031d7010(&stack0x0000128c,0);
                uVar74 = FUN_032194f0(&stack0x00001258,0);
                uVar72 = FUN_02526f2c(*(undefined8 *)PTR_DAT_06d94380,uVar72,
                                      *(undefined8 *)PTR_DAT_06dbf898,uVar74,0);
                if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
                  thunk_FUN_016466fc(*(long *)PTR_DAT_06e52cd8);
                }
                FUN_0486672c(uVar72,0);
                in_stack_00001278 = CONCAT44(3,*in_stack_00000178);
              }
              in_stack_0000128c = uVar16;
            } while (uVar16 == 0x1a);
            if ((uVar16 == 0x3c) && (*(char *)((long)unaff_x19 + 0x332) != '\0')) {
              *(undefined1 *)((long)unaff_x19 + 0x461) = 1;
              *(undefined4 *)((long)unaff_x19 + 0x654) = 0;
              uVar23 = FUN_04ed0048();
              if (((uVar23 & 1) != 0) &&
                 (in_stack_00001258 = in_stack_0000122c, *(int *)((long)unaff_x19 + 0x654) == 0))
              goto LAB_04ca2d40;
            }
            else {
              if ((*in_stack_00000180 == 0) ||
                 (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
              if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
              lVar31 = lVar31 + (int)*in_stack_00000178 * unaff_x24;
              *(undefined4 *)((long)unaff_x19 + 0x654) = *(undefined4 *)(lVar31 + 0x20);
              *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar31 + 0x50);
              unaff_x19[0x1f] = *(long *)(lVar31 + 0x40);
              thunk_FUN_01656ef8(in_stack_00000170);
            }
            if ((unaff_x19[0x73] == 0) || (lVar31 = *(long *)(unaff_x19[0x73] + 0x38), lVar31 == 0))
            goto LAB_04caa2e0;
            uVar21 = *in_stack_00000178;
            if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
            lVar34 = (long)(int)uVar21;
            unaff_w20 = (uint)*(byte *)(lVar31 + lVar34 * unaff_x24 + 0x54);
            *(undefined1 *)((long)unaff_x19 + 0x461) = 0;
            unaff_w22 = (undefined4)unaff_x19[0x23];
            if ((uint)in_stack_00001278 == uVar21) {
              uVar16 = (uint)((ulong)in_stack_00001278 >> 0x20);
              *(undefined4 *)((long)unaff_x19 + 0x654) = 0;
              if (uVar16 == 0x2026) {
                *(long *)(lVar31 + lVar34 * unaff_x24 + 0x30) = unaff_x19[0xcc];
                thunk_FUN_01656ef8();
                puVar10 = PTR_DAT_06e12318;
                if ((unaff_x19[0x73] == 0) ||
                   (lVar31 = *(long *)(unaff_x19[0x73] + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
                lVar31 = lVar31 + (int)*in_stack_00000178 * unaff_x24;
                *(undefined4 *)(lVar31 + 0x20) = 0;
                *(long *)(lVar31 + 0x40) = unaff_x19[0xcd];
                thunk_FUN_01656ef8();
                if ((unaff_x19[0x73] == 0) ||
                   (lVar31 = *(long *)(unaff_x19[0x73] + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
                *(long *)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 0x48) = unaff_x19[0xce];
                thunk_FUN_01656ef8();
                if ((*in_stack_00000180 == 0) ||
                   (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
                *(int *)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 0x50) = (int)unaff_x19[0xcf]
                ;
                lVar31 = *(long *)puVar10;
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar31 = *(long *)puVar10;
                }
                lVar31 = **(long **)(lVar31 + 0xb8);
                if (lVar31 == 0) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
                lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x38;
                unaff_w26 = 1;
                *(int *)(lVar31 + 0x54) = *(int *)(lVar31 + 0x54) + 1;
                uVar21 = *(uint *)((long)unaff_x19 + 0x49c);
                *(undefined1 *)(unaff_x19 + 100) = 1;
                in_stack_00001278 = CONCAT44(3,uVar21 + 1);
              }
              else if (uVar16 == 3) {
                if ((*in_stack_00000170 == 0) ||
                   (lVar22 = FUN_04813434(*in_stack_00000170,0), lVar22 == 0)) goto LAB_04caa2e0;
                uVar72 = FUN_03468e18(lVar22,3,*(undefined8 *)PTR_DAT_06dfe0a0);
                if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
                *(undefined8 *)(lVar31 + lVar34 * unaff_x24 + 0x30) = uVar72;
                thunk_FUN_01656ef8();
                uVar21 = *(uint *)((long)unaff_x19 + 0x49c);
                unaff_w26 = 1;
                *(undefined1 *)(unaff_x19 + 100) = 1;
              }
              else {
                unaff_w26 = 1;
              }
            }
            else {
              unaff_w26 = 0;
            }
            plVar30 = (long *)PTR_DAT_06e12318;
            in_stack_0000128c = uVar16;
            if (((int)uVar21 < *(int *)((long)unaff_x19 + 0x354)) && (uVar16 != 3)) {
              if ((*in_stack_00000180 == 0) ||
                 (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
              if (*(uint *)(lVar31 + 0x18) <= uVar21) goto LAB_04caa4c0;
              lVar31 = lVar31 + (long)(int)uVar21 * (long)iVar15;
              *(undefined1 *)(lVar31 + 400) = 0;
              *(undefined2 *)(lVar31 + 0x24) = 0x200b;
              *(undefined4 *)(lVar31 + 0x5c) = 0;
              *in_stack_00000178 = uVar21 + 1;
              goto LAB_04ca2d40;
            }
            iVar17 = *(int *)((long)unaff_x19 + 0x654);
            in_stack_000000f8._4_4_ = unaff_s15;
            if (iVar17 == 0) {
              uVar21 = *(uint *)((long)unaff_x19 + 0x27c);
              if ((uVar21 >> 4 & 1) == 0) {
                if ((uVar21 >> 3 & 1) == 0) {
                  if ((uVar21 >> 5 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                    }
                    uVar23 = FUN_028ff674(uVar16,0);
                    if ((uVar23 & 1) != 0) {
                      if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                        thunk_FUN_016466fc();
                      }
                      uVar16 = FUN_028ff948(uVar16,0);
                      uVar16 = uVar16 & 0xffff;
                      in_stack_000000f8._4_4_ = fStack000000000000002c;
                    }
                  }
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uVar23 = FUN_028ff5b8(uVar16,0);
                  in_stack_000000f8._4_4_ = 1.0;
                  if ((uVar23 & 1) != 0) {
                    if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                      thunk_FUN_016466fc();
                    }
                    uVar16 = FUN_028ffac4(uVar16,0);
                    goto LAB_04ca33c4;
                  }
                }
              }
              else {
                if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                }
                uVar23 = FUN_028ff674(uVar16,0);
                in_stack_000000f8._4_4_ = 1.0;
                if ((uVar23 & 1) != 0) {
                  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uVar16 = FUN_028ff948(uVar16,0);
LAB_04ca33c4:
                  uVar16 = uVar16 & 0xffff;
                  in_stack_000000f8._4_4_ = 1.0;
                }
              }
              iVar17 = *(int *)((long)unaff_x19 + 0x654);
              in_stack_0000128c = uVar16;
            }
            unaff_x28 = in_stack_00000178;
            if (iVar17 == 0) {
              if ((*in_stack_00000180 == 0) ||
                 (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
              if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
              *in_stack_00000160 = *(long *)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 0x30);
              thunk_FUN_01656ef8(in_stack_00000160);
              plVar30 = (long *)PTR_DAT_06e12318;
              if (*in_stack_00000160 != 0) {
                if ((*in_stack_00000180 == 0) ||
                   (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
                *in_stack_00000170 = *(long *)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 0x40);
                thunk_FUN_01656ef8();
                if ((*in_stack_00000180 == 0) ||
                   (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
                if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
                *in_stack_00000130 = *(long *)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 0x48);
                thunk_FUN_01656ef8();
                if ((*in_stack_00000180 == 0) ||
                   (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0)) goto LAB_04caa2e0;
                uVar21 = *in_stack_00000178;
                uVar16 = *(uint *)(lVar31 + 0x18);
                if (uVar16 <= uVar21) goto LAB_04caa4c0;
                *(undefined4 *)(unaff_x19 + 0x23) =
                     *(undefined4 *)(lVar31 + (int)uVar21 * unaff_x24 + 0x50);
                if (unaff_w26 == 0) {
LAB_04ca34e8:
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fVar55 = *(float *)(unaff_x19 + 0x41);
                  iVar15 = FUN_04ab1930(*in_stack_00000170 + 0x28,0);
                  lVar31 = unaff_x19[0x1f];
                }
                else {
                  lVar34 = unaff_x19[0x90];
                  if (lVar34 == 0) goto LAB_04caa2e0;
                  if (*(uint *)(lVar34 + 0x18) <= in_stack_00001258) goto LAB_04caa4c0;
                  if ((*(int *)(lVar34 + (long)(int)in_stack_00001258 * 0x10 + 0x24) != 10) ||
                     (uVar21 == *(uint *)(unaff_x19 + 0x94))) goto LAB_04ca34e8;
                  if (uVar16 <= uVar21 - 1) goto LAB_04caa4c0;
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fVar55 = *(float *)(lVar31 + (long)(int)(uVar21 - 1) * (long)iVar15 + 0x58);
                  iVar15 = FUN_04ab1930(*in_stack_00000170 + 0x28,0);
                  lVar31 = *in_stack_00000170;
                }
                if (lVar31 == 0) goto LAB_04caa2e0;
                fVar49 = (float)FUN_04ab1938(lVar31 + 0x28,0);
                fVar48 = 0.0;
                fVar75 = fStack00000000000000cc;
                if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
                  fVar75 = unaff_s15;
                }
                fStack0000000000000120 = 0.0;
                if ((unaff_w26 & in_stack_0000128c == 0x2026) == 0) {
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fStack0000000000000120 = (float)FUN_04ab1960(*in_stack_00000170 + 0x28,0);
                  if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                  fVar48 = (float)FUN_04ab1990(*in_stack_00000170 + 0x28,0);
                }
                lVar31 = unaff_x19[0xcb];
                if ((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) goto LAB_04caa2e0;
                fVar50 = *(float *)((long)unaff_x19 + 0x434);
                fVar77 = *(float *)(lVar31 + 0x2c);
                fVar71 = (float)FUN_04ab1e30(*(long *)(lVar31 + 0x20),0);
                if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                fVar67 = (float)FUN_04ab1988(*in_stack_00000170 + 0x28,0);
                if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
                fVar53 = *(float *)((long)unaff_x19 + 0x434);
                fVar51 = (float)FUN_04ab1938(*in_stack_00000170 + 0x28,0);
                lVar31 = unaff_x19[0x73];
                if ((lVar31 == 0) || (lVar34 = *(long *)(lVar31 + 0x38), lVar34 == 0))
                goto LAB_04caa2e0;
                if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
                lVar34 = lVar34 + (int)*in_stack_00000178 * unaff_x24;
                *(undefined4 *)(lVar34 + 0x20) = 0;
                fVar75 = ((in_stack_000000f8._4_4_ * fVar55) / (float)iVar15) * fVar49 * fVar75;
                fVar71 = fVar75 * fVar50 * fVar77 * fVar71;
                *(float *)(lVar34 + 0x15c) = fVar71;
                uVar16 = *(uint *)(unaff_x19 + 0x23);
                fVar51 = fVar75 * fVar67 * fVar53 * fVar51;
                if (uVar16 == 0) {
                  fVar55 = *(float *)(unaff_x19 + 0xc5);
                  goto LAB_04ca3698;
                }
                lVar34 = unaff_x19[0xe3];
                if (lVar34 == 0) goto LAB_04caa2e0;
                if (*(uint *)(lVar34 + 0x18) <= uVar16) goto LAB_04caa4c0;
                lVar34 = *(long *)(lVar34 + (long)(int)uVar16 * 8 + 0x20);
                if (lVar34 == 0) goto LAB_04caa2e0;
                fVar55 = *(float *)(lVar34 + 0x104);
                goto LAB_04ca3698;
              }
              goto LAB_04ca2d40;
            }
            if (iVar17 == 1) {
              lVar31 = FUN_04ec8ec8();
              if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x38), lVar31 == 0))
              goto LAB_04caa2e0;
              if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178) goto LAB_04caa4c0;
              unaff_x29 = *(long **)(lVar31 + (int)*in_stack_00000178 * unaff_x24 + 0x30);
              if (unaff_x29 == (long *)0x0) goto LAB_04caa2e0;
              bVar6 = *(byte *)(*(long *)PTR_DAT_06e1b450 + 300);
              if ((*(byte *)(*unaff_x29 + 300) < bVar6) ||
                 (*(long *)(*(long *)(*unaff_x29 + 200) + (ulong)bVar6 * 8 + -8) !=
                  *(long *)PTR_DAT_06e1b450)) {
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(unaff_x29);
              }
              plVar30 = (long *)unaff_x29[3];
              if (plVar30 == (long *)0x0) {
                plVar30 = (long *)0x0;
                *_uStack0000000000000078 = 0;
              }
              else {
                lVar31 = *(long *)PTR_DAT_06df4c20;
                bVar6 = *(byte *)(lVar31 + 300);
                if (*(byte *)(*plVar30 + 300) < bVar6) {
                  plVar46 = (long *)0x0;
                }
                else {
                  plVar46 = plVar30;
                  if (*(long *)(*(long *)(*plVar30 + 200) + (ulong)bVar6 * 8 + -8) != lVar31) {
                    plVar46 = (long *)0x0;
                  }
                }
                *_uStack0000000000000078 = (long)plVar46;
                if (*(byte *)(*plVar30 + 300) < bVar6) {
                  plVar30 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar30 + 200) + (ulong)bVar6 * 8 + -8) != lVar31) {
                  plVar30 = (long *)0x0;
                }
              }
              thunk_FUN_01656ef8(_uStack0000000000000078,plVar30);
              lVar31 = unaff_x29[5];
              *(int *)((long)unaff_x19 + 0x6b4) = (int)lVar31;
              puVar10 = PTR_DAT_06e12318;
              if (in_stack_0000128c == 0x3c) {
                in_stack_0000128c = (int)lVar31 + 0xe000;
              }
              else {
                lVar31 = *(long *)PTR_DAT_06e12318;
                if (*(int *)(lVar31 + 0xe0) == 0) {
                  thunk_FUN_016466fc();
                  lVar31 = *(long *)puVar10;
                }
                *(undefined4 *)((long)unaff_x19 + 0x1cc) =
                     *(undefined4 *)(*(long *)(lVar31 + 0xb8) + 0x68);
              }
              if (unaff_x19[0x1f] == 0) goto LAB_04caa2e0;
              fVar71 = *(float *)(unaff_x19 + 0x41);
              memmove(&stack0x000011c0,(void *)(unaff_x19[0x1f] + 0x28),0x60);
              iVar15 = FUN_04ab1930(&stack0x000011c0,0);
              if (*in_stack_00000170 == 0) goto LAB_04caa2e0;
              memmove(&stack0x000011c0,(void *)(*in_stack_00000170 + 0x28),0x60);
              fVar55 = (float)FUN_04ab1938(&stack0x000011c0,0);
              fVar48 = fStack00000000000000cc;
              if (*(char *)((long)unaff_x19 + 0x336) != '\0') {
                fVar48 = unaff_s15;
              }
              if (unaff_x19[0xd5] == 0) goto LAB_04caa2e0;
              param_1 = unaff_x19[0xd5] + 0x28;
              param_2 = 0;
              unaff_s14 = (fVar71 / (float)iVar15) * fVar55 * fVar48;
              unaff_x25 = _uStack0000000000000078;
              goto code_r0x04ca3054;
            }
            lVar31 = *in_stack_00000180;
            fVar51 = 0.0;
            fVar75 = 0.0;
            if (in_stack_0000128c != 3 && in_stack_0000128c != 0xad) {
              fVar75 = fVar49;
            }
            if (lVar31 == 0) goto LAB_04caa2e0;
            fStack0000000000000120 = 0.0;
            fVar48 = 0.0;
            fVar71 = fVar49;
            goto LAB_04ca36b0;
          }
          if (in_stack_0000128c == 3) {
            if (unaff_x19[0x90] != 0) {
              in_stack_00001258 = (uint)*(undefined8 *)(unaff_x19[0x90] + 0x18);
              uVar29 = 3;
              goto LAB_04ca65bc;
            }
            goto LAB_04caa2e0;
          }
        }
LAB_04ca65bc:
        plVar30 = (long *)PTR_DAT_06e12318;
        lVar31 = *(long *)(lVar31 + 0x38);
        if (lVar31 == 0) goto LAB_04caa2e0;
        uVar18 = *in_stack_00000178;
        lVar34 = (long)(int)uVar18;
        uVar65 = *(uint *)(lVar31 + 0x18);
        if (uVar65 <= uVar18) goto LAB_04caa4c0;
        if (*(char *)(lVar31 + lVar34 * unaff_x24 + 400) != '\0') {
          lVar22 = lVar31 + lVar34 * unaff_x24;
          uVar23 = unaff_x19[0x9d];
          uVar24 = *(ulong *)(lVar22 + 0x114);
          unaff_x19[0x9d] =
               uVar24 ^ (uVar24 ^ uVar23) &
                        CONCAT44(-(uint)((float)(uVar23 >> 0x20) < (float)(uVar24 >> 0x20)),
                                 -(uint)((float)uVar23 < (float)uVar24));
          uVar23 = unaff_x19[0x9e];
          uVar64 = *(ulong *)(lVar22 + 0x120);
          unaff_x19[0x9e] =
               uVar64 ^ (uVar64 ^ uVar23) &
                        CONCAT44(-(uint)((float)(uVar64 >> 0x20) < (float)(uVar23 >> 0x20)),
                                 -(uint)((float)uVar64 < (float)uVar23));
        }
        if (((*(int *)((long)unaff_x19 + 0x2fc) != 3) && (*(int *)((long)unaff_x19 + 0x2fc) != 0))
           || ((*(uint *)(unaff_x19 + 0x61) < 7 &&
               ((1 << (ulong)(*(uint *)(unaff_x19 + 0x61) & 0x1f) & 0x4aU) != 0)))) {
          if ((((uVar16 == 0) && (uVar29 != 0x2d)) && (uVar29 != 0x200b)) && (uVar29 != 0xad)) {
            if (*(char *)((long)unaff_x19 + 0x301) == '\0') goto LAB_04ca671c;
LAB_04ca6658:
            if (((uint)in_stack_00000088 & 1) == 0) {
              in_stack_00000088 = 0.0;
            }
            else {
              uVar16 = (uint)(in_stack_0000128c == 0xa0 || bVar12) &
                       (uStack0000000000000064 | in_stack_0000128c != 0xad) ^ 1;
LAB_04ca668c:
              in_stack_00000088 = (float)1;
LAB_04ca6bdc:
              if (*(int *)(*plVar30 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              Photon_Chat_Demo_ChatGui__OnUserSubscribed();
              if (uVar16 != 0) goto LAB_04ca6c10;
            }
          }
          else {
            if (*(char *)((long)unaff_x19 + 0x301) == '\x01') goto LAB_04ca6658;
            if ((int)uVar29 < 0x2007) {
              if (uVar29 == 0x2d) {
                if (0 < (int)uVar18) {
                  if (uVar65 <= (uint)(lVar34 + -1)) goto LAB_04caa4c0;
                  uVar8 = *(undefined2 *)(lVar31 + (lVar34 + -1) * unaff_x24 + 0x24);
                  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uVar23 = FUN_028fcbcc(uVar8,0);
                  if ((uVar23 & 1) != 0) {
                    if ((*in_stack_00000180 == 0) ||
                       (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 == 0))
                    goto LAB_04caa2e0;
                    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000178 - 1) goto LAB_04caa4c0;
                    if (*(int *)(lVar31 + (long)(int)(*in_stack_00000178 - 1) * (long)iVar15 + 0x5c)
                        == (int)unaff_x19[0x96]) goto LAB_04ca6c40;
                  }
                }
              }
              else if (uVar29 == 0xa0) goto LAB_04ca671c;
LAB_04ca6ba4:
              lVar31 = *plVar30;
              if (*(int *)(lVar31 + 0xe0) == 0) {
                thunk_FUN_016466fc();
                lVar31 = *plVar30;
              }
              in_stack_00000088 = 0.0;
              uVar16 = 0;
              *(undefined4 *)(*(long *)(lVar31 + 0xb8) + 0xf80) = 0xffffffff;
              goto LAB_04ca6bdc;
            }
            if (((0x28 < uVar29 - 0x2007) ||
                ((1L << ((ulong)(uVar29 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
               (uVar29 != 0x2060)) goto LAB_04ca6ba4;
LAB_04ca671c:
            if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar23 = FUN_051fbcd0(uVar29,0);
            if ((uVar23 & 1) == 0) {
LAB_04ca6768:
              if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar23 = FUN_051fbd3c(in_stack_0000128c,0);
              if ((uVar23 & 1) != 0) goto LAB_04ca6798;
              if ((*(char *)((long)unaff_x19 + 0x301) != '\0') ||
                 (uVar16 = *in_stack_00000178 + 1, iStack0000000000000068 <= (int)uVar16))
              goto LAB_04ca6658;
              if ((*in_stack_00000180 != 0) &&
                 (lVar31 = *(long *)(*in_stack_00000180 + 0x38), lVar31 != 0)) {
                if (uVar16 < *(uint *)(lVar31 + 0x18)) {
                  uVar8 = *(undefined2 *)(lVar31 + (long)(int)uVar16 * (long)iVar15 + 0x24);
                  if (*(int *)(*(long *)PTR_DAT_06e23ec0 + 0xe0) == 0) {
                    thunk_FUN_016466fc();
                  }
                  uVar23 = FUN_051fbd3c(uVar8,0);
                  if ((uVar23 & 1) == 0) goto LAB_04ca6658;
LAB_04ca6bd8:
                  uVar16 = 0;
                  goto LAB_04ca6bdc;
                }
                goto LAB_04caa4c0;
              }
              goto LAB_04caa2e0;
            }
            if (*(int *)(*(long *)PTR_DAT_06e238a8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar23 = FUN_051f2178(0);
            if ((uVar23 & 1) != 0) goto LAB_04ca6768;
LAB_04ca6798:
            if (*(int *)(*(long *)PTR_DAT_06e238a8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            lVar31 = FUN_051f1f60(0);
            if ((lVar31 == 0) || (*(long *)(lVar31 + 0x10) == 0)) goto LAB_04caa2e0;
            uVar23 = FUN_04c47858(*(long *)(lVar31 + 0x10),in_stack_0000128c,
                                  *(undefined8 *)PTR_DAT_06e4cb50);
            if ((int)in_stack_00000058._4_4_ <= (int)*in_stack_00000178) {
              if ((uVar23 & 1) == 0) {
                in_stack_00000088 = 0.0;
                goto LAB_04ca6bd8;
              }
LAB_04ca68f8:
              if (((uint)in_stack_00000088 & (uint)(uVar21 == uVar47)) != 1) goto LAB_04ca6c40;
              uVar16 = (uint)(uVar16 != 0);
              goto LAB_04ca668c;
            }
            if (*(int *)(*(long *)PTR_DAT_06e238a8 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            lVar31 = FUN_051f1f60(0);
            if (((lVar31 == 0) || (*in_stack_00000180 == 0)) ||
               (lVar34 = *(long *)(*in_stack_00000180 + 0x38), lVar34 == 0)) goto LAB_04caa2e0;
            if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000178 + 1) goto LAB_04caa4c0;
            if (*(long *)(lVar31 + 0x18) == 0) goto LAB_04caa2e0;
            uVar65 = FUN_04c47858(*(long *)(lVar31 + 0x18),
                                  *(undefined2 *)
                                   (lVar34 + (long)(int)(*in_stack_00000178 + 1) * (long)iVar15 +
                                   0x24),*(undefined8 *)PTR_DAT_06e4cb50);
            if ((uVar23 & 1) != 0) goto LAB_04ca68f8;
            uVar21 = (uint)in_stack_00000088 & uVar65;
            uVar47 = (uint)in_stack_00000088 | uVar65 ^ 0xffffffff;
            uVar16 = uVar16 != 0 & uVar21;
            in_stack_00000088 = (float)uVar21;
            if ((uVar47 & 1) != 0) goto LAB_04ca6bdc;
            if (uVar16 == 0) goto LAB_04ca6c40;
LAB_04ca6c10:
            if (*(int *)(*plVar30 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            Photon_Chat_Demo_ChatGui__OnUserSubscribed();
          }
        }
LAB_04ca6c40:
        if (*(int *)(*plVar30 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        Photon_Chat_Demo_ChatGui__OnUserSubscribed();
        *(int *)((long)unaff_x19 + 0x49c) = *(int *)((long)unaff_x19 + 0x49c) + 1;
        goto LAB_04ca2d40;
      }
      goto LAB_04caa4c0;
    }
  }
  goto LAB_04caa2e0;
LAB_04ca7b5c:
  uVar16 = uVar47 - 1;
  if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar44 = (long)(int)uVar16;
  lVar22 = lVar31 + lVar44 * 0x178;
  lVar37 = *(long *)(lVar22 + 0x40);
  uVar7 = *(ushort *)(lVar22 + 0x24);
  uVar29 = (uint)uVar7;
  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar18 = FUN_028fcbcc(uVar7,0);
  if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
  if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x50), lVar22 == 0))
  goto LAB_04caa2e0;
  uVar4 = *(uint *)(lVar31 + lVar44 * 0x178 + 0x5c);
  if (*(uint *)(lVar22 + 0x18) <= uVar4) goto LAB_04caa4c0;
  lVar42 = (long)(int)uVar4;
  lVar22 = lVar22 + lVar42 * 0x60;
  fVar70 = *(float *)(lVar22 + 0x60);
  fVar68 = *(float *)(lVar22 + 100);
  uVar45 = *(uint *)(lVar22 + 0x6c);
  iVar19 = *(int *)(lVar22 + 0x20);
  iVar20 = *(int *)(lVar22 + 0x28);
  iVar5 = *(int *)(lVar22 + 0x30);
  uVar2 = *(uint *)(lVar22 + 0x40);
  uVar3 = *(uint *)(lVar22 + 0x44);
  lVar40 = (long)(int)uVar3;
  fVar49 = *(float *)(lVar22 + 0x50);
  fVar67 = *(float *)(lVar22 + 0x58);
  fVar76 = *(float *)(lVar22 + 0x5c);
  fVar51 = *(float *)(lVar22 + 0x70);
  fVar54 = *(float *)(lVar22 + 0x74);
  fVar75 = *(float *)(lVar22 + 0x78);
  fVar50 = *(float *)(lVar22 + 0x7c);
  fVar53 = fVar70 + fVar68;
  plVar30 = (long *)PTR_DAT_06e50440;
  if ((int)uVar45 < 9) {
    switch(uVar45) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000ec = fVar68 + 0.0;
      }
      else {
        fStack00000000000000ec = 0.0 - fVar76;
      }
      break;
    case 2:
      fStack00000000000000ec = (fVar68 + fVar70 * 0.5) - fVar76 * 0.5;
      break;
    case 3:
      goto switchD_04ca7cb8_caseD_3;
    case 4:
      fStack00000000000000ec = fVar53 - fVar76;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000ec = fVar53;
      }
      break;
    default:
      if ((((uVar29 != 3) && (uVar29 != 0x2060)) && (uVar29 != 0x200b)) &&
         (((uVar29 != 0xad && (uVar29 != 10)) && (((int)uVar16 <= (int)uVar3 && (uVar45 == 8))))))
      goto LAB_04ca7d74;
      goto switchD_04ca7cb8_caseD_3;
    }
    uStack00000000000000e0 = 0;
  }
  else if (uVar45 == 0x10) {
    if ((int)uVar3 < (int)uVar16) goto switchD_04ca7cb8_caseD_3;
    if (uVar29 < 0xad) {
      if ((uVar29 != 3) && (uVar29 != 10)) goto LAB_04ca7d74;
    }
    else if ((uVar29 != 0xad) && ((uVar29 != 0x200b && (uVar29 != 0x2060)))) {
LAB_04ca7d74:
      if (*(uint *)(lVar31 + 0x18) <= uVar2) goto LAB_04caa4c0;
      uVar8 = *(undefined2 *)(lVar31 + (long)(int)uVar2 * 0x178 + 0x24);
      if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar25 = FUN_02900324(uVar8,0);
      plVar30 = (long *)PTR_DAT_06e50440;
      if ((uVar25 & 1) == 0) {
        bVar1 = (int)uVar4 < (int)unaff_x19[0x96];
      }
      else {
        bVar1 = false;
      }
      if ((fVar70 < fVar76) || (bVar1 || (uVar45 >> 4 & 1) != 0)) {
        if ((uVar47 == 1) || ((uVar4 != uVar65 || (uVar16 == *(uint *)((long)unaff_x19 + 0x354)))))
        {
          fStack00000000000000ec = fVar68;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000ec = fVar53;
          }
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uStack0000000000000040 = FUN_029007b8(uVar29,0);
          uStack00000000000000e0 = 0;
        }
        else {
          cVar28 = (char)unaff_x19[0x1d];
          iVar5 = (iVar5 - iVar19) - (uStack0000000000000040 & 1);
          fVar53 = -fVar76;
          if (cVar28 != '\0') {
            fVar53 = fVar76;
          }
          fVar68 = 1.0;
          if (0 < iVar5) {
            fVar68 = *(float *)((long)unaff_x19 + 0x304);
          }
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          uVar72 = CONCAT44((float)((ulong)uStack00000000000000e0 >> 0x20) + 0.0,
                            (float)uStack00000000000000e0 + 0.0);
          if (uVar29 == 9) {
LAB_04ca9ca8:
            fVar53 = ((fVar70 + fVar53) * (1.0 - fVar68)) / (float)iVar5;
            plVar30 = (long *)PTR_DAT_06e50440;
            if (cVar28 == '\0') {
              fStack00000000000000ec = fStack00000000000000ec + fVar53;
              uStack00000000000000e0 = uVar72;
            }
            else {
              fStack00000000000000ec = fStack00000000000000ec - fVar53;
            }
          }
          else {
            if (uVar29 != 0xa0) {
              if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
                thunk_FUN_016466fc();
              }
              uVar25 = FUN_029007b8(uVar29,0);
              cVar28 = (char)unaff_x19[0x1d];
              if ((uVar25 & 1) != 0) goto LAB_04ca9ca8;
            }
            fVar53 = ((fVar70 + fVar53) * fVar68) /
                     (float)(int)((iVar19 - (~uStack0000000000000040 & 1)) + iVar20);
            plVar30 = (long *)PTR_DAT_06e50440;
            if (cVar28 == '\0') {
              fStack00000000000000ec = fStack00000000000000ec + fVar53;
              uStack00000000000000e0 = uVar72;
            }
            else {
              fStack00000000000000ec = fStack00000000000000ec - fVar53;
            }
          }
        }
      }
      else {
        fStack00000000000000ec = fVar68;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000ec = fVar53;
        }
        uStack00000000000000e0 = 0;
      }
    }
  }
  else if (uVar45 == 0x20) {
    fStack00000000000000ec = (fVar68 + fVar70 * 0.5) - (fVar51 + fVar75) * 0.5;
    uStack00000000000000e0 = 0;
  }
switchD_04ca7cb8_caseD_3:
  uVar45 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar45 <= uVar16) goto LAB_04caa4c0;
  lVar22 = lVar31 + lVar44 * 0x178;
  fVar53 = fStack00000000000000b0 + fStack00000000000000ec;
  fVar68 = (float)in_stack_000000a8 + (float)uStack00000000000000e0;
  fVar70 = (float)(in_stack_000000a8 >> 0x20) + (float)((ulong)uStack00000000000000e0 >> 0x20);
  if (*(char *)(lVar22 + 400) == '\0') goto LAB_04ca8744;
  iVar19 = *(int *)(lVar31 + lVar44 * 0x178 + 0x20);
  if (iVar19 != 0) goto LAB_04ca8414;
  fVar55 = fmodf(*(float *)((long)unaff_x19 + 0x344) * (float)(int)uVar4,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x33c)) {
  case 0:
    lVar33 = lVar31 + lVar44 * 0x178;
    *(undefined4 *)(lVar33 + 0x84) = 0;
    *(undefined4 *)(lVar33 + 0xac) = 0;
    *(undefined4 *)(lVar33 + 0xd4) = 0x3f800000;
    fVar55 = 1.0;
    break;
  case 1:
    fVar50 = *(float *)(lVar31 + lVar44 * 0x178 + 0x68);
    if (*(int *)((long)unaff_x19 + 0x294) == 0x208) {
      lVar33 = lVar31 + lVar44 * 0x178;
      fVar75 = (fStack00000000000000ec + fVar50) - *(float *)(unaff_x19 + 0x9d);
      fVar50 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
      goto LAB_04ca7fd8;
    }
    lVar33 = lVar31 + lVar44 * 0x178;
    fVar75 = fVar75 - fVar51;
    *(float *)(lVar33 + 0x84) = fVar55 + (fVar50 - fVar51) / fVar75;
    *(float *)(lVar33 + 0xac) = fVar55 + (*(float *)(lVar33 + 0x90) - fVar51) / fVar75;
    *(float *)(lVar33 + 0xd4) = fVar55 + (*(float *)(lVar33 + 0xb8) - fVar51) / fVar75;
    fVar55 = fVar55 + (*(float *)(lVar33 + 0xe0) - fVar51) / fVar75;
    break;
  case 2:
    lVar33 = lVar31 + lVar44 * 0x178;
    fVar50 = *(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d);
    fVar75 = (fStack00000000000000ec + *(float *)(lVar33 + 0x68)) - *(float *)(unaff_x19 + 0x9d);
LAB_04ca7fd8:
    *(float *)(lVar33 + 0x84) = fVar55 + fVar75 / fVar50;
    *(float *)(lVar33 + 0xac) =
         fVar55 + ((fStack00000000000000ec + *(float *)(lVar33 + 0x90)) -
                  *(float *)(unaff_x19 + 0x9d)) /
                  (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
    *(float *)(lVar33 + 0xd4) =
         fVar55 + ((fStack00000000000000ec + *(float *)(lVar33 + 0xb8)) -
                  *(float *)(unaff_x19 + 0x9d)) /
                  (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
    fVar55 = fVar55 + ((fStack00000000000000ec + *(float *)(lVar33 + 0xe0)) -
                      *(float *)(unaff_x19 + 0x9d)) /
                      (*(float *)(unaff_x19 + 0x9e) - *(float *)(unaff_x19 + 0x9d));
    break;
  case 3:
    switch((int)unaff_x19[0x68]) {
    case 0:
      lVar33 = lVar31 + lVar44 * 0x178;
      *(undefined4 *)(lVar33 + 0x88) = 0;
      *(undefined4 *)(lVar33 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar33 + 0xd8) = 0;
      *(undefined4 *)(lVar33 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar33 = lVar31 + lVar44 * 0x178;
      fVar50 = fVar50 - fVar54;
      fVar75 = fVar55 + (*(float *)(lVar33 + 0x6c) - fVar54) / fVar50;
      fVar50 = fVar55 + (*(float *)(lVar33 + 0x94) - fVar54) / fVar50;
      *(float *)(lVar33 + 0x88) = fVar75;
      *(float *)(lVar33 + 0xb0) = fVar50;
      *(float *)(lVar33 + 0xd8) = fVar75;
      *(float *)(lVar33 + 0x100) = fVar50;
      break;
    case 2:
      lVar33 = lVar31 + lVar44 * 0x178;
      fVar75 = fVar55 + (*(float *)(lVar33 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
                        (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
      *(float *)(lVar33 + 0x88) = fVar75;
      fVar50 = *(float *)((long)unaff_x19 + 0x4ec);
      fVar51 = *(float *)((long)unaff_x19 + 0x4f4);
      *(float *)(lVar33 + 0xd8) = fVar75;
      fVar75 = fVar55 + (*(float *)(lVar33 + 0x94) - fVar50) / (fVar51 - fVar50);
      *(float *)(lVar33 + 0xb0) = fVar75;
      *(float *)(lVar33 + 0x100) = fVar75;
      break;
    case 3:
      if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_048662d8(*(undefined8 *)PTR_DAT_06da50d0,0);
      uVar45 = (uint)*(undefined8 *)(lVar31 + 0x18);
    }
    if (uVar45 <= uVar16) goto LAB_04caa4c0;
    lVar33 = lVar31 + lVar44 * 0x178;
    fVar75 = *(float *)(lVar33 + 0x158);
    fVar50 = (1.0 - (*(float *)(lVar33 + 0x88) + *(float *)(lVar33 + 0xb0)) * fVar75) * 0.5;
    fVar51 = fVar55 + *(float *)(lVar33 + 0x88) * fVar75 + fVar50;
    fVar55 = fVar55 + fVar50 + *(float *)(lVar33 + 0xb0) * fVar75;
    *(float *)(lVar33 + 0x84) = fVar51;
    *(float *)(lVar33 + 0xac) = fVar51;
    *(float *)(lVar33 + 0xd4) = fVar55;
    break;
  default:
    goto switchD_04ca7ef8_default;
  }
  *(float *)(lVar31 + lVar44 * 0x178 + 0xfc) = fVar55;
switchD_04ca7ef8_default:
  switch((int)unaff_x19[0x68]) {
  case 0:
    if (uVar45 <= uVar16) goto LAB_04caa4c0;
    lVar33 = lVar31 + lVar44 * 0x178;
    *(undefined4 *)(lVar33 + 0x88) = 0;
    *(undefined4 *)(lVar33 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar33 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar33 + 0x100) = 0;
    break;
  case 1:
    if (uVar16 < uVar45) {
      lVar33 = lVar31 + lVar44 * 0x178;
      fVar49 = fVar49 - fVar67;
      fVar55 = (*(float *)(lVar33 + 0x6c) - fVar67) / fVar49;
      fVar49 = (*(float *)(lVar33 + 0x94) - fVar67) / fVar49;
      *(float *)(lVar33 + 0x88) = fVar55;
      goto LAB_04ca8338;
    }
    goto LAB_04caa4c0;
  case 2:
    if (uVar45 <= uVar16) goto LAB_04caa4c0;
    lVar33 = lVar31 + lVar44 * 0x178;
    fVar55 = (*(float *)(lVar33 + 0x6c) - *(float *)((long)unaff_x19 + 0x4ec)) /
             (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
    *(float *)(lVar33 + 0x88) = fVar55;
    fVar49 = (*(float *)(lVar33 + 0x94) - *(float *)((long)unaff_x19 + 0x4ec)) /
             (*(float *)((long)unaff_x19 + 0x4f4) - *(float *)((long)unaff_x19 + 0x4ec));
LAB_04ca8338:
    *(float *)(lVar33 + 0xb0) = fVar49;
    *(float *)(lVar33 + 0xd8) = fVar49;
    *(float *)(lVar33 + 0x100) = fVar55;
    break;
  case 3:
    if (uVar45 <= uVar16) goto LAB_04caa4c0;
    lVar33 = lVar31 + lVar44 * 0x178;
    fVar49 = *(float *)(lVar33 + 0x158);
    fVar75 = (1.0 - (*(float *)(lVar33 + 0x84) + *(float *)(lVar33 + 0xd4)) / fVar49) * 0.5;
    fVar55 = *(float *)(lVar33 + 0x84) / fVar49 + fVar75;
    fVar75 = fVar75 + *(float *)(lVar33 + 0xd4) / fVar49;
    *(float *)(lVar33 + 0x88) = fVar55;
    *(float *)(lVar33 + 0xb0) = fVar75;
    *(float *)(lVar33 + 0x100) = fVar55;
    *(float *)(lVar33 + 0xd8) = fVar75;
  }
  if (uVar45 <= uVar16) goto LAB_04caa4c0;
  lVar33 = lVar31 + lVar44 * 0x178;
  fVar55 = *(float *)(lVar33 + 0x15c) * (1.0 - *(float *)(unaff_x19 + 0x5f));
  if ((*(char *)(lVar33 + 0x54) == '\0') && ((*(byte *)(lVar31 + lVar44 * 0x178 + 0x18c) & 1) != 0))
  {
    fVar55 = -fVar55;
  }
  fVar75 = fVar71;
  if (((iVar17 == 2) || (fVar75 = fVar77, iVar17 == 1)) || (fVar75 = fVar71 / fVar48, iVar17 == 0))
  {
    fVar55 = fVar75 * fVar55;
  }
  lVar33 = lVar31 + lVar44 * 0x178;
  *(float *)(lVar33 + 0x80) = fVar55;
  *(float *)(lVar33 + 0xa8) = fVar55;
  *(float *)(lVar33 + 0xd0) = fVar55;
  *(float *)(lVar33 + 0xf8) = fVar55;
LAB_04ca8414:
  if (((int)uVar16 < (int)unaff_x19[0x6b]) &&
     ((int)fStack00000000000000cc < *(int *)((long)unaff_x19 + 0x35c))) {
    if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] != 5)) {
      if (uVar45 <= uVar16) goto LAB_04caa4c0;
      lVar22 = lVar31 + lVar44 * 0x178;
      *(ulong *)(lVar22 + 0x68) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0x68) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar22 + 0x68));
      *(float *)(lVar22 + 0x70) = fVar70 + *(float *)(lVar22 + 0x70);
      if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar22 = lVar31 + lVar44 * 0x178;
      *(ulong *)(lVar22 + 0x90) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0x90) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar22 + 0x90));
      *(float *)(lVar22 + 0x98) = fVar70 + *(float *)(lVar22 + 0x98);
      if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar22 = lVar31 + lVar44 * 0x178;
      *(ulong *)(lVar22 + 0xb8) =
           CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0xb8) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar22 + 0xb8));
      *(float *)(lVar22 + 0xc0) = fVar70 + *(float *)(lVar22 + 0xc0);
      if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar22 = lVar31 + lVar44 * 0x178;
      uVar72 = *(undefined8 *)(lVar22 + 0xe0);
      fVar75 = *(float *)(lVar22 + 0xe8);
LAB_04ca870c:
      *(ulong *)(lVar22 + 0xe0) =
           CONCAT44(fVar68 + (float)((ulong)uVar72 >> 0x20),fVar53 + (float)uVar72);
      *(float *)(lVar22 + 0xe8) = fVar70 + fVar75;
      if (iVar19 == 0) goto LAB_04ca8720;
LAB_04ca8648:
      if (iVar19 == 1) {
        pcVar36 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_04ca872c;
      }
      goto LAB_04ca8744;
    }
    if (((int)uVar4 < (int)unaff_x19[0x6c]) && ((int)unaff_x19[0x61] == 5)) {
      if (uVar16 < uVar45) {
        if (*(uint *)(lVar31 + lVar44 * 0x178 + 0x60) != uStack000000000000003c) goto LAB_04ca852c;
        lVar22 = lVar31 + lVar44 * 0x178;
        *(ulong *)(lVar22 + 0x68) =
             CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0x68) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar22 + 0x68));
        *(float *)(lVar22 + 0x70) = fVar70 + *(float *)(lVar22 + 0x70);
        if (uVar16 < *(uint *)(lVar31 + 0x18)) {
          lVar22 = lVar31 + lVar44 * 0x178;
          *(ulong *)(lVar22 + 0x90) =
               CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0x90) >> 0x20),
                        fVar53 + (float)*(undefined8 *)(lVar22 + 0x90));
          *(float *)(lVar22 + 0x98) = fVar70 + *(float *)(lVar22 + 0x98);
          if (uVar16 < *(uint *)(lVar31 + 0x18)) {
            lVar22 = lVar31 + lVar44 * 0x178;
            *(ulong *)(lVar22 + 0xb8) =
                 CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0xb8) >> 0x20),
                          fVar53 + (float)*(undefined8 *)(lVar22 + 0xb8));
            *(float *)(lVar22 + 0xc0) = fVar70 + *(float *)(lVar22 + 0xc0);
            if (uVar16 < *(uint *)(lVar31 + 0x18)) {
              lVar22 = lVar31 + lVar44 * 0x178;
              uVar72 = *(undefined8 *)(lVar22 + 0xe0);
              fVar75 = *(float *)(lVar22 + 0xe8);
              goto LAB_04ca870c;
            }
          }
        }
      }
      goto LAB_04caa4c0;
    }
  }
LAB_04ca852c:
  if (uVar45 <= uVar16) goto LAB_04caa4c0;
  if (DAT_0722a13e == '\0') {
    thunk_FUN_0159f088(plVar30);
    DAT_0722a13e = '\x01';
  }
  lVar33 = lVar31 + lVar44 * 0x178;
  uVar66 = *(undefined4 *)(*(undefined8 **)(*plVar30 + 0xb8) + 1);
  *(undefined8 *)(lVar33 + 0x68) = **(undefined8 **)(*plVar30 + 0xb8);
  *(undefined4 *)(lVar33 + 0x70) = uVar66;
  if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar33 = lVar31 + lVar44 * 0x178;
  uVar66 = *(undefined4 *)(*(undefined8 **)(*plVar30 + 0xb8) + 1);
  *(undefined8 *)(lVar33 + 0x90) = **(undefined8 **)(*plVar30 + 0xb8);
  *(undefined4 *)(lVar33 + 0x98) = uVar66;
  if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar33 = lVar31 + lVar44 * 0x178;
  uVar66 = *(undefined4 *)(*(undefined8 **)(*plVar30 + 0xb8) + 1);
  *(undefined8 *)(lVar33 + 0xb8) = **(undefined8 **)(*plVar30 + 0xb8);
  *(undefined4 *)(lVar33 + 0xc0) = uVar66;
  if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar33 = lVar31 + lVar44 * 0x178;
  uVar66 = *(undefined4 *)(*(undefined8 **)(*plVar30 + 0xb8) + 1);
  *(undefined8 *)(lVar33 + 0xe0) = **(undefined8 **)(*plVar30 + 0xb8);
  *(undefined4 *)(lVar33 + 0xe8) = uVar66;
  if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_04caa4c0;
  *(undefined1 *)(lVar22 + 400) = 0;
  if (iVar19 != 0) goto LAB_04ca8648;
LAB_04ca8720:
  pcVar36 = *(code **)(*unaff_x19 + 0x8d8);
LAB_04ca872c:
  (*pcVar36)();
LAB_04ca8744:
  if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar22 = lVar22 + lVar44 * 0x178;
  uVar72 = *(undefined8 *)(lVar22 + 0x114);
  *(undefined8 *)(lVar22 + 0x114) =
       CONCAT44(fVar68 + (float)((ulong)uVar72 >> 0x20),fVar53 + (float)uVar72);
  *(float *)(lVar22 + 0x11c) = fVar70 + *(float *)(lVar22 + 0x11c);
  if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar22 = lVar22 + lVar44 * 0x178;
  *(ulong *)(lVar22 + 0x108) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0x108) >> 0x20),
                fVar53 + (float)*(undefined8 *)(lVar22 + 0x108));
  *(float *)(lVar22 + 0x110) = fVar70 + *(float *)(lVar22 + 0x110);
  if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar22 = lVar22 + lVar44 * 0x178;
  *(ulong *)(lVar22 + 0x120) =
       CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar22 + 0x120) >> 0x20),
                fVar53 + (float)*(undefined8 *)(lVar22 + 0x120));
  *(float *)(lVar22 + 0x128) = fVar70 + *(float *)(lVar22 + 0x128);
  if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
  lVar22 = lVar22 + lVar44 * 0x178;
  *(float *)(lVar22 + 300) = fVar53 + *(float *)(lVar22 + 300);
  *(ulong *)(lVar22 + 0x130) =
       CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar22 + 0x130) >> 0x20),
                fVar68 + (float)*(undefined8 *)(lVar22 + 0x130));
  lVar22 = *in_stack_00000180;
  if ((lVar22 == 0) || (lVar33 = *(long *)(lVar22 + 0x38), lVar33 == 0)) goto LAB_04caa2e0;
  uVar45 = *(uint *)(lVar33 + 0x18);
  if (uVar45 <= uVar16) goto LAB_04caa4c0;
  lVar39 = lVar33 + lVar44 * 0x178;
  uVar23 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar39 + 0x138) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar39 + 0x138));
  fVar75 = fVar68 + *(float *)(lVar39 + 0x148);
  uVar24 = (ulong)(uint)fVar75;
  uVar64 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                    fVar68 + (float)*(undefined8 *)(lVar39 + 0x140));
  *(ulong *)(lVar39 + 0x138) = uVar23;
  *(ulong *)(lVar39 + 0x140) = uVar64;
  *(float *)(lVar39 + 0x148) = fVar75;
  if (uVar4 == uVar65) {
    uVar65 = *in_stack_00000178 - 1;
    if (uVar16 == uVar65) goto LAB_04ca8950;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_04caa2e0;
    if (*(uint *)(lVar22 + 0x18) <= uVar65) goto LAB_04caa4c0;
    lVar39 = (long)(int)uVar65;
    lVar41 = lVar22 + lVar39 * 0x60;
    uVar64 = (ulong)(uint)*(float *)(lVar41 + 0x5c);
    fVar75 = fVar68 + *(float *)(lVar41 + 0x58);
    uVar23 = (ulong)(uint)fVar75;
    fVar49 = fVar53 + *(float *)(lVar41 + 0x5c);
    uVar24 = (ulong)(uint)fVar49;
    *(ulong *)(lVar41 + 0x50) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar41 + 0x50) >> 0x20),
                  fVar68 + (float)*(undefined8 *)(lVar41 + 0x50));
    *(float *)(lVar41 + 0x58) = fVar75;
    *(float *)(lVar41 + 0x5c) = fVar49;
    if (uVar45 <= *(uint *)(lVar41 + 0x38)) goto LAB_04caa4c0;
    uVar66 = *(undefined4 *)(lVar33 + (long)(int)*(uint *)(lVar41 + 0x38) * 0x178 + 0x114);
    lVar22 = lVar22 + lVar39 * 0x60;
    *(float *)(lVar22 + 0x74) = fVar75;
    *(undefined4 *)(lVar22 + 0x70) = uVar66;
    lVar22 = *in_stack_00000180;
    if ((lVar22 == 0) || (lVar33 = *(long *)(lVar22 + 0x50), lVar33 == 0)) goto LAB_04caa2e0;
    if (*(uint *)(lVar33 + 0x18) <= uVar65) goto LAB_04caa4c0;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_04caa2e0;
    uVar65 = *(uint *)(lVar33 + lVar39 * 0x60 + 0x44);
    if (*(uint *)(lVar22 + 0x18) <= uVar65) goto LAB_04caa4c0;
    lVar33 = lVar33 + lVar39 * 0x60;
    *(undefined4 *)(lVar33 + 0x78) = *(undefined4 *)(lVar22 + (long)(int)uVar65 * 0x178 + 0x120);
    *(undefined4 *)(lVar33 + 0x7c) = *(undefined4 *)(lVar33 + 0x50);
    uVar65 = *in_stack_00000178 - 1;
LAB_04ca8950:
    if (uVar16 == uVar65) {
      lVar22 = *in_stack_00000180;
      if ((lVar22 == 0) || (lVar33 = *(long *)(lVar22 + 0x50), lVar33 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar33 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar39 = lVar33 + lVar42 * 0x60;
      uVar64 = (ulong)(uint)*(float *)(lVar39 + 0x5c);
      uVar23 = CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar39 + 0x50) >> 0x20),
                        fVar68 + (float)*(undefined8 *)(lVar39 + 0x50));
      fVar75 = fVar68 + *(float *)(lVar39 + 0x58);
      fVar53 = fVar53 + *(float *)(lVar39 + 0x5c);
      uVar24 = (ulong)(uint)fVar53;
      *(ulong *)(lVar39 + 0x50) = uVar23;
      *(float *)(lVar39 + 0x58) = fVar75;
      *(float *)(lVar39 + 0x5c) = fVar53;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(lVar39 + 0x38)) goto LAB_04caa4c0;
      uVar66 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar39 + 0x38) * 0x178 + 0x114);
      lVar33 = lVar33 + lVar42 * 0x60;
      *(float *)(lVar33 + 0x74) = fVar75;
      *(undefined4 *)(lVar33 + 0x70) = uVar66;
      lVar22 = *in_stack_00000180;
      if ((lVar22 == 0) || (lVar33 = *(long *)(lVar22 + 0x50), lVar33 == 0)) goto LAB_04caa2e0;
      if (*(uint *)(lVar33 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_04caa2e0;
      uVar65 = *(uint *)(lVar33 + lVar42 * 0x60 + 0x44);
      if (*(uint *)(lVar22 + 0x18) <= uVar65) goto LAB_04caa4c0;
      lVar33 = lVar33 + lVar42 * 0x60;
      *(undefined4 *)(lVar33 + 0x78) = *(undefined4 *)(lVar22 + (long)(int)uVar65 * 0x178 + 0x120);
      *(undefined4 *)(lVar33 + 0x7c) = *(undefined4 *)(lVar33 + 0x50);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar25 = FUN_028ff808(uVar29,0);
  if (((((uVar25 & 1) == 0) && (1 < uVar29 - 0x2010)) && (uVar29 != 0xad)) && (uVar29 != 0x2d)) {
    if (bVar9) {
      if (((uVar47 != 1) && ((int)uVar16 < (int)(*(uint *)(lVar31 + 0x18) - 1))) &&
         (((int)uVar16 < (int)*in_stack_00000178 && ((uVar29 == 0x2019 || (uVar29 == 0x27)))))) {
        if (*(uint *)(lVar31 + 0x18) <= uVar47 - 2) goto LAB_04caa4c0;
        uVar8 = *(undefined2 *)(lVar31 + lVar34 + -0x430);
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar25 = FUN_028ff808(uVar8,0);
        if ((uVar25 & 1) != 0) {
          if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_04caa4c0;
          uVar8 = *(undefined2 *)(lVar31 + lVar34 + -0x140);
          if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
            thunk_FUN_016466fc();
          }
          uVar25 = FUN_028ff808(uVar8,0);
          if ((uVar25 & 1) != 0) goto LAB_04ca8b6c;
        }
      }
LAB_04ca8e0c:
      if (uVar16 == *in_stack_00000178 - 1) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar25 = FUN_028ff808(uVar29,0);
        iVar19 = iVar43;
        if ((uVar25 & 1) == 0) goto LAB_04ca8e4c;
      }
      else {
LAB_04ca8e4c:
        iVar19 = uVar47 - 2;
      }
      lVar22 = *in_stack_00000180;
      if (lVar22 == 0) goto LAB_04caa2e0;
      lVar33 = *(long *)(lVar22 + 0x40);
      if (lVar33 == 0) goto LAB_04caa2e0;
      uVar65 = *(uint *)(lVar22 + 0x24);
      iVar20 = *(int *)(lVar33 + 0x18);
      if (iVar20 < (int)(uVar65 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_022de6e4((long *)(lVar22 + 0x40),iVar20 + 1,*(undefined8 *)PTR_DAT_06da6d78);
        lVar22 = *in_stack_00000180;
        if (lVar22 == 0) goto LAB_04caa2e0;
      }
      lVar22 = *(long *)(lVar22 + 0x40);
      if (lVar22 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar22 + 0x18) <= uVar65) goto LAB_04caa4c0;
      lVar22 = lVar22 + (long)(int)uVar65 * 0x18;
      *(long **)(lVar22 + 0x20) = unaff_x19;
      *(uint *)(lVar22 + 0x28) = uVar21;
      *(int *)(lVar22 + 0x2c) = iVar19;
      *(uint *)(lVar22 + 0x30) = (iVar19 - uVar21) + 1;
      thunk_FUN_01656ef8();
      lVar22 = unaff_x19[0x73];
      if (lVar22 == 0) goto LAB_04caa2e0;
      lVar33 = *(long *)(lVar22 + 0x50);
      *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
      if (lVar33 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar33 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar33 = lVar33 + lVar42 * 0x60;
      bVar9 = false;
      fStack00000000000000cc = (float)((int)fStack00000000000000cc + 1);
      *(int *)(lVar33 + 0x34) = *(int *)(lVar33 + 0x34) + 1;
    }
    else {
      if (uVar47 == 1) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar65 = FUN_028ff740(uVar29,0);
        if (((uVar29 == 0x200b) || (((uVar18 | uVar65 ^ 1) & 1) != 0)) || (*in_stack_00000178 == 1))
        goto LAB_04ca8e0c;
      }
      bVar9 = false;
    }
  }
  else {
    if (!bVar9) {
      uVar21 = uVar16;
    }
    if (uVar16 == *in_stack_00000178 - 1) {
      lVar22 = *in_stack_00000180;
      if (lVar22 == 0) goto LAB_04caa2e0;
      lVar33 = *(long *)(lVar22 + 0x40);
      if (lVar33 == 0) goto LAB_04caa2e0;
      uVar65 = *(uint *)(lVar22 + 0x24);
      iVar19 = *(int *)(lVar33 + 0x18);
      if (iVar19 < (int)(uVar65 + 1)) {
        if (*(int *)(*(long *)PTR_DAT_06d9b5f8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_022de6e4((long *)(lVar22 + 0x40),iVar19 + 1,*(undefined8 *)PTR_DAT_06da6d78);
        lVar22 = *in_stack_00000180;
        if (lVar22 == 0) goto LAB_04caa2e0;
      }
      lVar22 = *(long *)(lVar22 + 0x40);
      if (lVar22 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar22 + 0x18) <= uVar65) goto LAB_04caa4c0;
      lVar22 = lVar22 + (long)(int)uVar65 * 0x18;
      *(long **)(lVar22 + 0x20) = unaff_x19;
      *(uint *)(lVar22 + 0x28) = uVar21;
      *(uint *)(lVar22 + 0x2c) = uVar16;
      *(uint *)(lVar22 + 0x30) = uVar47 - uVar21;
      thunk_FUN_01656ef8();
      lVar22 = unaff_x19[0x73];
      if (lVar22 == 0) goto LAB_04caa2e0;
      lVar33 = *(long *)(lVar22 + 0x50);
      *(int *)(lVar22 + 0x24) = *(int *)(lVar22 + 0x24) + 1;
      if (lVar33 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar33 + 0x18) <= uVar4) goto LAB_04caa4c0;
      lVar33 = lVar33 + lVar42 * 0x60;
      fStack00000000000000cc = (float)((int)fStack00000000000000cc + 1);
      *(int *)(lVar33 + 0x34) = *(int *)(lVar33 + 0x34) + 1;
LAB_04ca8b6c:
      bVar9 = true;
    }
    else {
      bVar9 = true;
    }
  }
  lVar22 = *in_stack_00000180;
  if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_04caa2e0;
  if (*(uint *)(lVar42 + 0x18) <= uVar16) goto LAB_04caa4c0;
  if ((*(byte *)(lVar42 + lVar44 * 0x178 + 0x18c) >> 2 & 1) == 0) {
    plVar30 = (long *)PTR_DAT_06e12318;
    if (!bVar12) {
      bVar12 = false;
      goto LAB_04ca9160;
    }
    if (*(uint *)(lVar42 + 0x18) <= uVar47 - 2) goto LAB_04caa4c0;
LAB_04ca8bcc:
    lVar33 = *unaff_x19;
    uVar65 = *(uint *)(lVar42 + lVar34 + -0x334);
    uVar66 = *(undefined4 *)(lVar42 + lVar34 + -0x2f8);
LAB_04ca90ec:
    uVar64 = (ulong)uVar65;
    uVar23 = (ulong)(uint)fStack0000000000000074;
    uVar24 = (ulong)uStack0000000000000078;
    (**(code **)(lVar33 + 0x908))
              (in_stack_00000080._4_4_,uVar23,uVar24,uVar64,fStack00000000000000f4,0,
               in_stack_00000088,uVar66);
    lVar22 = *plVar30;
LAB_04ca912c:
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar22 = *plVar30;
    }
LAB_04ca913c:
    bVar12 = false;
    fStack00000000000000f4 = *(float *)(*(long *)(lVar22 + 0xb8) + 0x1730);
    fStack0000000000000120 = 0.0;
    in_stack_000000f0 = 0.0;
  }
  else {
    lVar33 = lVar42 + lVar44 * 0x178;
    iVar19 = *(int *)(lVar33 + 0x60);
    *(int *)(lVar33 + 0x168) = iVar15;
    if ((((int)unaff_x19[0x6b] < (int)uVar16) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
       (((int)unaff_x19[0x61] == 5 && (iVar19 + 1 != (int)unaff_x19[0x6d])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (uVar29 != 0x200b && (uVar18 & 1) == 0) {
      fVar75 = *(float *)(lVar42 + lVar44 * 0x178 + 0x15c);
      if (fStack0000000000000120 <= fVar75) {
        fStack0000000000000120 = fVar75;
      }
      uVar24 = (ulong)(uint)fStack0000000000000120;
      if (in_stack_000000f0 <= ABS(fVar55)) {
        in_stack_000000f0 = ABS(fVar55);
      }
      if (iVar19 != uStack0000000000000070) {
        if (*(int *)(*(long *)PTR_DAT_06e12318 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          lVar22 = *in_stack_00000180;
          if (lVar22 == 0) goto LAB_04caa2e0;
          lVar42 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
        }
        else {
          lVar42 = *(long *)(*(long *)PTR_DAT_06e12318 + 0xb8);
        }
        fStack00000000000000f4 = *(float *)(lVar42 + 0x1730);
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
      if (unaff_x19[0x1e] == 0) goto LAB_04caa2e0;
      fVar49 = *(float *)(lVar22 + lVar44 * 0x178 + 0x144);
      fVar75 = (float)FUN_04ab19b8(unaff_x19[0x1e] + 0x28,0);
      fVar49 = fVar49 + fStack0000000000000120 * fVar75;
      if (fVar49 <= fStack00000000000000f4) {
        fStack00000000000000f4 = fVar49;
      }
      uVar23 = (ulong)(uint)fStack00000000000000f4;
      uStack0000000000000070 = iVar19;
    }
    plVar30 = (long *)PTR_DAT_06e12318;
    if (!bVar12) {
      if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar3 < (int)uVar16)) || (!bVar1)) {
LAB_04ca9044:
        bVar12 = false;
        goto LAB_04ca9160;
      }
      if (uVar16 == uVar3) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar25 = FUN_029007b8(uVar29,0);
        if ((uVar25 & 1) != 0) goto LAB_04ca9044;
      }
      if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar22 = lVar22 + lVar44 * 0x178;
      in_stack_00000088 = *(float *)(lVar22 + 0x15c);
      in_stack_00000080._4_4_ = *(float *)(lVar22 + 0x114);
      fVar75 = in_stack_00000088;
      if (fStack0000000000000120 != 0.0) {
        fVar75 = fStack0000000000000120;
      }
      uVar24 = (ulong)(uint)fVar75;
      uStack000000000000008c = *(uint *)(lVar22 + 0x164);
      uStack0000000000000078 = 0;
      fVar49 = fVar55;
      if (fStack0000000000000120 != 0.0) {
        fVar49 = in_stack_000000f0;
      }
      uVar23 = (ulong)(uint)fVar49;
      fStack0000000000000074 = fStack00000000000000f4;
      in_stack_000000f0 = fVar49;
      fStack0000000000000120 = fVar75;
    }
    if (*in_stack_00000178 == 1) {
      if ((*in_stack_00000180 != 0) && (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0))
      {
        if (uVar16 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + lVar44 * 0x178;
          lVar33 = *unaff_x19;
          uVar65 = *(uint *)(lVar22 + 0x120);
          uVar66 = *(undefined4 *)(lVar22 + 0x15c);
          goto LAB_04ca90ec;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    if ((uVar16 == uVar2) || ((int)uVar3 <= (int)uVar16)) {
      if ((*in_stack_00000180 != 0) && (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0))
      {
        if (uVar29 != 0x200b && (uVar18 & 1) == 0) {
          lVar42 = lVar44;
          if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
        }
        else {
          lVar42 = lVar40;
          if (*(uint *)(lVar22 + 0x18) <= uVar3) goto LAB_04caa4c0;
        }
        lVar22 = lVar22 + lVar42 * 0x178;
        uVar64 = (ulong)*(uint *)(lVar22 + 0x120);
        uVar23 = (ulong)(uint)fStack0000000000000074;
        uVar24 = (ulong)uStack0000000000000078;
        (**(code **)(*unaff_x19 + 0x908))
                  (in_stack_00000080._4_4_,uVar23,uVar24,uVar64,fStack00000000000000f4,0,
                   in_stack_00000088,*(undefined4 *)(lVar22 + 0x15c));
        lVar22 = *plVar30;
        goto LAB_04ca912c;
      }
      goto LAB_04caa2e0;
    }
    if (!bVar1) {
      if ((*in_stack_00000180 != 0) && (lVar42 = *(long *)(*in_stack_00000180 + 0x38), lVar42 != 0))
      {
        if (uVar47 - 2 < *(uint *)(lVar42 + 0x18)) goto LAB_04ca8bcc;
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    if ((int)uVar16 < (int)(*in_stack_00000178 - 1)) {
      if ((*in_stack_00000180 != 0) && (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0))
      {
        if (*(uint *)(lVar22 + 0x18) <= uVar47) goto LAB_04caa4c0;
        uVar25 = FUN_048097c4(uStack000000000000008c,*(undefined4 *)(lVar22 + lVar34),0);
        if ((uVar25 & 1) != 0) {
          bVar12 = true;
          goto LAB_04ca9160;
        }
        if ((*in_stack_00000180 != 0) &&
           (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0)) {
          if (uVar16 < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + lVar44 * 0x178;
            uVar64 = (ulong)*(uint *)(lVar22 + 0x120);
            uVar23 = (ulong)(uint)fStack0000000000000074;
            uVar24 = (ulong)uStack0000000000000078;
            (**(code **)(*unaff_x19 + 0x908))
                      (in_stack_00000080._4_4_,uVar23,uVar24,uVar64,fStack00000000000000f4,0,
                       in_stack_00000088,*(undefined4 *)(lVar22 + 0x15c));
            lVar22 = *plVar30;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_016466fc();
              lVar22 = *plVar30;
            }
            goto LAB_04ca913c;
          }
          goto LAB_04caa4c0;
        }
      }
      goto LAB_04caa2e0;
    }
    bVar12 = true;
  }
LAB_04ca9160:
  if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
  goto LAB_04caa2e0;
  if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
  if (lVar37 == 0) goto LAB_04caa2e0;
  uVar65 = *(uint *)(lVar22 + lVar44 * 0x178 + 0x18c);
  fVar75 = (float)FUN_04ab19c8(lVar37 + 0x28,0);
  if ((uVar65 >> 6 & 1) == 0) {
    if (bVar13) {
      if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
      goto LAB_04caa2e0;
      if (*(uint *)(lVar22 + 0x18) <= uVar47 - 2) goto LAB_04caa4c0;
      uVar65 = *(uint *)(lVar22 + lVar34 + -0x334);
      pcVar36 = *(code **)(*unaff_x19 + 0x908);
      fVar49 = fStack00000000000000a0 * fVar75 + *(float *)(lVar22 + lVar34 + -0x310);
LAB_04ca9710:
      uVar64 = (ulong)uVar65;
      uVar23 = (ulong)(uint)fStack0000000000000094;
      uVar24 = (ulong)uStack0000000000000090;
      (*pcVar36)(fStack0000000000000098,uVar23,uVar24,uVar64,fVar49,0,fStack00000000000000a0,
                 fStack00000000000000a0);
    }
LAB_04ca9740:
    bVar13 = false;
  }
  else {
    lVar22 = *in_stack_00000180;
    if ((lVar22 == 0) || (lVar42 = *(long *)(lVar22 + 0x38), lVar42 == 0)) goto LAB_04caa2e0;
    if (*(uint *)(lVar42 + 0x18) <= uVar16) goto LAB_04caa4c0;
    *(int *)(lVar42 + lVar44 * 0x178 + 0x170) = iVar15;
    if ((((int)unaff_x19[0x6b] < (int)uVar16) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
       (((int)unaff_x19[0x61] == 5 &&
        (*(int *)(lVar42 + lVar44 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar3 < (int)uVar16)) ||
       (bVar13 || !bVar1)) {
LAB_04ca92bc:
      if (!bVar13) goto LAB_04ca9740;
    }
    else {
      if (uVar16 == uVar3) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar25 = FUN_029007b8(uVar29,0);
        if ((uVar25 & 1) != 0) goto LAB_04ca92bc;
        lVar22 = *in_stack_00000180;
        if (lVar22 == 0) goto LAB_04caa2e0;
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_04caa2e0;
      if (*(uint *)(lVar22 + 0x18) <= uVar16) goto LAB_04caa4c0;
      lVar22 = lVar22 + lVar44 * 0x178;
      fStack0000000000000060 = *(float *)(lVar22 + 0x58);
      fStack00000000000000a0 = *(float *)(lVar22 + 0x15c);
      in_stack_00000058._4_4_ = *(float *)(lVar22 + 0x144);
      uVar23 = (ulong)(uint)in_stack_00000058._4_4_;
      fStack0000000000000098 = *(float *)(lVar22 + 0x114);
      fStack0000000000000094 = fVar75 * fStack00000000000000a0 + in_stack_00000058._4_4_;
      uStack0000000000000090 = 0;
    }
    uVar65 = *in_stack_00000178;
    if (uVar65 == 1) {
      if ((*in_stack_00000180 != 0) && (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0))
      {
        if (uVar16 < *(uint *)(lVar22 + 0x18)) {
          lVar37 = *unaff_x19;
          lVar22 = lVar22 + lVar44 * 0x178;
LAB_04ca942c:
          uVar65 = *(uint *)(lVar22 + 0x120);
          fVar49 = *(float *)(lVar22 + 0x144);
LAB_04ca9434:
          pcVar36 = *(code **)(lVar37 + 0x908);
LAB_04ca970c:
          fVar49 = fVar75 * fStack00000000000000a0 + fVar49;
          goto LAB_04ca9710;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    if (uVar16 == uVar2) {
      if ((*in_stack_00000180 != 0) && (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0))
      {
        uVar65 = *(uint *)(lVar22 + 0x18);
        if (uVar29 == 0x200b || (uVar18 & 1) != 0) {
          if (uVar65 <= uVar3) goto LAB_04caa4c0;
        }
        else {
LAB_04ca96e8:
          lVar40 = lVar44;
          if (uVar65 <= uVar16) goto LAB_04caa4c0;
        }
LAB_04ca96f0:
        lVar22 = lVar22 + lVar40 * 0x178;
        fVar49 = *(float *)(lVar22 + 0x144);
        uVar65 = *(uint *)(lVar22 + 0x120);
        pcVar36 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_04ca970c;
      }
      goto LAB_04caa2e0;
    }
    if ((int)uVar16 < (int)uVar65) {
      lVar22 = *in_stack_00000180;
      if ((lVar22 != 0) && (lVar42 = *(long *)(lVar22 + 0x38), lVar42 != 0)) {
        if (uVar47 < *(uint *)(lVar42 + 0x18)) {
          if (*(float *)(lVar42 + lVar34 + -0x10c) == fStack0000000000000060) {
            fVar49 = *(float *)(lVar42 + lVar34 + -0x20);
            if (*(int *)(*(long *)PTR_DAT_06e5ce10 + 0xe0) == 0) {
              thunk_FUN_016466fc();
            }
            uVar23 = (ulong)(uint)in_stack_00000058._4_4_;
            uVar25 = FUN_04809d04(fVar68 + fVar49,uVar23,0);
            if ((uVar25 & 1) != 0) {
              uVar65 = *in_stack_00000178;
              goto LAB_04ca9510;
            }
            lVar22 = *in_stack_00000180;
            if (lVar22 == 0) goto LAB_04caa2e0;
          }
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 != 0) {
            uVar65 = *(uint *)(lVar22 + 0x18);
            if ((int)uVar16 <= (int)uVar3) goto LAB_04ca96e8;
            if (uVar3 < uVar65) goto LAB_04ca96f0;
            goto LAB_04caa4c0;
          }
          goto LAB_04caa2e0;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
LAB_04ca9510:
    if ((int)uVar16 < (int)uVar65) {
      iVar19 = FUN_051d2b30(lVar37,0);
      if (*(uint *)(lVar31 + 0x18) <= uVar47) goto LAB_04caa4c0;
      lVar22 = *(long *)(lVar31 + lVar34 + -0x124);
      if (lVar22 == 0) goto LAB_04caa2e0;
      iVar20 = FUN_051d2b30(lVar22,0);
      if (iVar19 != iVar20) {
        if ((*in_stack_00000180 != 0) &&
           (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0)) {
          if (uVar16 < *(uint *)(lVar22 + 0x18)) {
            lVar37 = *unaff_x19;
            lVar22 = lVar22 + lVar44 * 0x178;
            plVar30 = (long *)PTR_DAT_06e12318;
            goto LAB_04ca942c;
          }
          goto LAB_04caa4c0;
        }
        goto LAB_04caa2e0;
      }
    }
    plVar30 = (long *)PTR_DAT_06e12318;
    if (!bVar1) {
      if ((*in_stack_00000180 != 0) && (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 != 0))
      {
        if (uVar47 - 2 < *(uint *)(lVar22 + 0x18)) {
          lVar37 = *unaff_x19;
          uVar65 = *(uint *)(lVar22 + lVar34 + -0x334);
          fVar49 = *(float *)(lVar22 + lVar34 + -0x310);
          goto LAB_04ca9434;
        }
        goto LAB_04caa4c0;
      }
      goto LAB_04caa2e0;
    }
    bVar13 = true;
  }
  if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
  goto LAB_04caa2e0;
  uVar65 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar65 <= uVar16) goto LAB_04caa4c0;
  if ((*(byte *)(lVar22 + lVar44 * 0x178 + 0x18d) >> 1 & 1) == 0) {
    if (bVar14) {
      uVar24 = (ulong)in_stack_000000b8._4_4_;
      uVar23 = (ulong)(uint)fStack00000000000000dc;
      uVar64 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000d8,uVar23,uVar24,uVar64,fStack00000000000000c0,uVar24);
    }
LAB_04ca97b0:
    bVar14 = false;
  }
  else {
    if ((((int)unaff_x19[0x6b] < (int)uVar16) || ((int)unaff_x19[0x6c] < (int)uVar4)) ||
       (((int)unaff_x19[0x61] == 5 &&
        (*(int *)(lVar22 + lVar44 * 0x178 + 0x60) + 1 != (int)unaff_x19[0x6d])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar14) {
      if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar3 < (int)uVar16)) || (!bVar1))
      goto LAB_04ca97b0;
      if (uVar16 == uVar3) {
        if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar25 = FUN_029007b8(uVar29,0);
        if ((uVar25 & 1) != 0) goto LAB_04ca97b0;
      }
      lVar37 = *plVar30;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar37 = *plVar30;
      }
      if ((*in_stack_00000180 == 0) || (lVar22 = *(long *)(*in_stack_00000180 + 0x38), lVar22 == 0))
      goto LAB_04caa2e0;
      uVar65 = (uint)*(undefined8 *)(lVar22 + 0x18);
      if (uVar65 <= uVar16) goto LAB_04caa4c0;
      lVar37 = *(long *)(lVar37 + 0xb8);
      lVar40 = lVar22 + lVar44 * 0x178;
      in_stack_00001268 = *(undefined8 *)(lVar40 + 0x180);
      in_stack_00001260 = *(undefined8 *)(lVar40 + 0x178);
      fStack00000000000000d8 = *(float *)(lVar37 + 0x1720);
      in_stack_00001270 = *(float *)(lVar40 + 0x188);
      fStack00000000000000dc = *(float *)(lVar37 + 0x1724);
      fStack00000000000000c8 = *(float *)(lVar37 + 0x1728);
      fStack00000000000000c0 = *(float *)(lVar37 + 0x172c);
      in_stack_000000b8._4_4_ = 0;
    }
    if (uVar65 <= uVar16) goto LAB_04caa4c0;
    lVar22 = lVar22 + lVar44 * 0x178;
    fVar50 = *(float *)(lVar22 + 0x120);
    fVar53 = *(float *)(lVar22 + 0x180);
    fVar68 = *(float *)(lVar22 + 0x188);
    uVar74 = *(undefined8 *)(lVar22 + 0x178);
    fVar70 = *(float *)(lVar22 + 0x184);
    uVar72 = *(undefined8 *)(lVar22 + 0x180);
    fVar54 = *(float *)(lVar22 + 0x114);
    fVar75 = *(float *)(lVar22 + 0x138);
    fVar49 = *(float *)(lVar22 + 0x13c);
    fVar51 = *(float *)(lVar22 + 0x140);
    fVar67 = *(float *)(lVar22 + 0x148);
    in_stack_00000188 = uVar74;
    fStack0000000000000190 = fVar53;
    fStack0000000000000194 = fVar70;
    in_stack_00000198 = fVar68;
    in_stack_000001a0 = in_stack_00001260;
    in_stack_000001a8 = in_stack_00001268;
    in_stack_000001b0 = in_stack_00001270;
    uVar25 = FUN_0480b0f0(&stack0x000001a0,&stack0x00000188,0);
    if ((uVar25 & 1) == 0) {
      bVar14 = (uVar18 & 1) == 0;
      if (bVar14) {
        fVar49 = fVar50;
      }
      fVar49 = fVar49 + (float)in_stack_00001268;
      fVar67 = fVar67 - in_stack_00001270;
      uVar24 = (ulong)(uint)fVar67;
      fVar51 = fVar51 + (float)((ulong)in_stack_00001268 >> 0x20);
      uVar64 = (ulong)(uint)fVar51;
      if (bVar14) {
        fVar75 = fVar54;
      }
      fVar75 = fVar75 - (float)((ulong)in_stack_00001260 >> 0x20);
      if (fVar75 <= fStack00000000000000d8) {
        fStack00000000000000d8 = fVar75;
      }
      if (fStack00000000000000c8 <= fVar49) {
        fStack00000000000000c8 = fVar49;
      }
      uVar23 = (ulong)(uint)fStack00000000000000c8;
      if (fVar67 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar67;
      }
      if (fStack00000000000000c0 <= fVar51) {
        fStack00000000000000c0 = fVar51;
      }
    }
    else {
      if (fVar67 <= fStack00000000000000dc) {
        fStack00000000000000dc = fVar67;
      }
      uVar23 = (ulong)(uint)fStack00000000000000dc;
      if (fStack00000000000000c0 <= fVar51) {
        fStack00000000000000c0 = fVar51;
      }
      bVar14 = (uVar18 & 1) == 0;
      if (bVar14) {
        fVar75 = fVar54;
      }
      fVar75 = (fVar75 + (fStack00000000000000c8 - (float)in_stack_00001268)) * 0.5;
      uVar64 = (ulong)(uint)fVar75;
      fStack00000000000000dc = fVar67 - fVar68;
      uVar24 = (ulong)in_stack_000000b8._4_4_;
      if (bVar14) {
        fVar49 = fVar50;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000d8,uVar23,uVar24,uVar64,fStack00000000000000c0,uVar24);
      fStack00000000000000c8 = fVar49 + fVar53;
      in_stack_000000b8._4_4_ = 0;
      fStack00000000000000c0 = fVar51 + fVar70;
      fStack00000000000000d8 = fVar75;
      in_stack_00001260 = uVar74;
      in_stack_00001268 = uVar72;
      in_stack_00001270 = fVar68;
    }
    if (((*in_stack_00000178 == 1) || (uVar16 == uVar2)) ||
       (((int)uVar3 <= (int)uVar16 || (!bVar1)))) {
      uVar24 = (ulong)in_stack_000000b8._4_4_;
      uVar23 = (ulong)(uint)fStack00000000000000dc;
      uVar64 = (ulong)(uint)fStack00000000000000c8;
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000d8,uVar23,uVar24,uVar64,fStack00000000000000c0,uVar24);
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
  }
  uVar16 = *in_stack_00000178;
  iVar43 = iVar43 + 1;
  lVar34 = lVar34 + 0x178;
  bVar1 = (int)uVar16 <= (int)uVar47;
  uVar47 = uVar47 + 1;
  uVar65 = uVar4;
  if (bVar1) goto LAB_04ca9d00;
  goto LAB_04ca7b5c;
LAB_04ca9d00:
  lVar31 = *in_stack_00000180;
  if (lVar31 != 0) {
    iVar17 = uVar4 + 1;
LAB_04ca9d20:
    lVar34 = *(long *)(lVar31 + 0x60);
    if (lVar34 != 0) {
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0xd3)) goto LAB_04caa4c0;
      *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0xd3) * 0x50 + 0x28) = iVar15;
      *(uint *)(lVar31 + 0x18) = uVar16;
      lVar34 = unaff_x19[0xd6];
      iVar15 = (int)fStack00000000000000cc;
      if ((int)uVar16 < 1) {
        iVar15 = 1;
      }
      if (fStack00000000000000cc == 0.0) {
        iVar15 = 1;
      }
      *(int *)(lVar31 + 0x2c) = iVar17;
      *(int *)(lVar31 + 0x1c) = (int)lVar34;
      *(int *)(lVar31 + 0x24) = iVar15;
      *(int *)(lVar31 + 0x30) = *(int *)((long)unaff_x19 + 0x4bc) + 1;
      if (((int)unaff_x19[0x69] != 0xff) ||
         (uVar25 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar25 & 1) == 0)) {
LAB_04caa2e4:
        if ((char)unaff_x19[0xde] != '\0') {
          pcVar36 = *(code **)(*unaff_x19 + 0x798);
LAB_04caa2f8:
          (*pcVar36)();
        }
        if (*(int *)(*(long *)PTR_DAT_06dc37e8 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        FUN_04808ce4();
        return;
      }
      lVar31 = unaff_x19[0xe1];
      if (lVar31 != 0) {
        (**(code **)(lVar31 + 0x18))
                  (*(undefined8 *)(lVar31 + 0x40),*in_stack_00000180,*(undefined8 *)(lVar31 + 0x28))
        ;
      }
      if (unaff_x19[0xe7] != 0) {
        iVar15 = FUN_036e12d0(unaff_x19[0xe7],0);
        if (iVar15 != 0x19) {
          lVar31 = unaff_x19[0xe7];
          if (lVar31 == 0) goto LAB_04caa2e0;
          uVar16 = FUN_036e12d0(lVar31,0);
          FUN_036e130c(lVar31,uVar16 | 0x19,0);
        }
        if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
          if ((*in_stack_00000180 == 0) ||
             (lVar31 = *(long *)(*in_stack_00000180 + 0x60), lVar31 == 0)) goto LAB_04caa2e0;
          if (*(int *)(lVar31 + 0x18) == 0) goto LAB_04caa4c0;
          FUN_051ef288(lVar31 + 0x20,1,0);
        }
        if (unaff_x19[0x7a] != 0) {
          FUN_04874e78(unaff_x19[0x7a],0);
          if ((unaff_x19[0x73] != 0) && (lVar31 = *(long *)(unaff_x19[0x73] + 0x60), lVar31 != 0)) {
            if (*(int *)(lVar31 + 0x18) == 0) {
LAB_04caa4c0:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            if (unaff_x19[0x7a] != 0) {
              FUN_0486f29c(unaff_x19[0x7a],*(undefined8 *)(lVar31 + 0x30),0);
              if ((unaff_x19[0x73] != 0) &&
                 (lVar31 = *(long *)(unaff_x19[0x73] + 0x60), lVar31 != 0)) {
                if (*(int *)(lVar31 + 0x18) == 0) goto LAB_04caa4c0;
                if (unaff_x19[0x7a] != 0) {
                  FUN_04870fa8(unaff_x19[0x7a],0,*(undefined8 *)(lVar31 + 0x48),0);
                  if ((unaff_x19[0x73] != 0) &&
                     (lVar31 = *(long *)(unaff_x19[0x73] + 0x60), lVar31 != 0)) {
                    if (*(int *)(lVar31 + 0x18) == 0) goto LAB_04caa4c0;
                    if (unaff_x19[0x7a] != 0) {
                      FUN_0486f54c(unaff_x19[0x7a],*(undefined8 *)(lVar31 + 0x50),0);
                      if ((unaff_x19[0x73] != 0) &&
                         (lVar31 = *(long *)(unaff_x19[0x73] + 0x60), lVar31 != 0)) {
                        if (*(int *)(lVar31 + 0x18) == 0) goto LAB_04caa4c0;
                        if (unaff_x19[0x7a] != 0) {
                          FUN_0486fab4(unaff_x19[0x7a],*(undefined8 *)(lVar31 + 0x58),0);
                          if (unaff_x19[0x7a] != 0) {
                            FUN_0487497c(unaff_x19[0x7a],0);
                            if (unaff_x19[0xe6] != 0) {
                              FUN_036e059c(unaff_x19[0xe6],unaff_x19[0x7a],0);
                              if (unaff_x19[0xe6] != 0) {
                                uVar72 = FUN_036e022c(unaff_x19[0xe6],0);
                                if (unaff_x19[0xe6] != 0) {
                                  uVar16 = FUN_036e0094(unaff_x19[0xe6],0);
                                  lVar31 = *in_stack_00000180;
                                  if (lVar31 != 0) {
                                    lVar22 = 0;
                                    lVar34 = 0;
                                    do {
                                      uVar25 = lVar34 + 1;
                                      if ((long)*(int *)(lVar31 + 0x34) <= (long)uVar25)
                                      goto LAB_04caa2e4;
                                      lVar31 = *(long *)(lVar31 + 0x60);
                                      if (lVar31 == 0) break;
                                      if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                      FUN_051ef154(lVar31 + lVar22 + 0x70,0);
                                      lVar31 = unaff_x19[0xe3];
                                      if (lVar31 == 0) break;
                                      if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                      uVar74 = *(undefined8 *)(lVar31 + lVar34 * 8 + 0x28);
                                      if (*(int *)(*(long *)PTR_DAT_06d9fd78 + 0xe0) == 0) {
                                        thunk_FUN_016466fc();
                                      }
                                      uVar26 = FUN_051d94d4(uVar74,0,0);
                                      if ((uVar26 & 1) == 0) {
                                        if (*(int *)((long)unaff_x19 + 0x34c) != 0) {
                                          if ((*in_stack_00000180 == 0) ||
                                             (lVar31 = *(long *)(*in_stack_00000180 + 0x60),
                                             lVar31 == 0)) break;
                                          if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                          FUN_051ef288(lVar31 + lVar22 + 0x70,1,0);
                                        }
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if (lVar31 == 0) break;
                                        lVar31 = FUN_051f9514(lVar31,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar37 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar37 == 0)) break;
                                        if (*(uint *)(lVar37 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        if (lVar31 == 0) break;
                                        FUN_0486f29c(lVar31,*(undefined8 *)(lVar37 + lVar22 + 0x80),
                                                     0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if (lVar31 == 0) break;
                                        lVar31 = FUN_051f9514(lVar31,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar37 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar37 == 0)) break;
                                        if (*(uint *)(lVar37 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        if (lVar31 == 0) break;
                                        FUN_04870fa8(lVar31,0,*(undefined8 *)
                                                               (lVar37 + lVar22 + 0x98),0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if (lVar31 == 0) break;
                                        lVar31 = FUN_051f9514(lVar31,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar37 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar37 == 0)) break;
                                        if (*(uint *)(lVar37 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        if (lVar31 == 0) break;
                                        FUN_0486f54c(lVar31,*(undefined8 *)(lVar37 + lVar22 + 0xa0),
                                                     0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if (lVar31 == 0) break;
                                        lVar31 = FUN_051f9514(lVar31,0);
                                        if ((*in_stack_00000180 == 0) ||
                                           (lVar37 = *(long *)(*in_stack_00000180 + 0x60),
                                           lVar37 == 0)) break;
                                        if (*(uint *)(lVar37 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        if (lVar31 == 0) break;
                                        FUN_0486fab4(lVar31,*(undefined8 *)(lVar37 + lVar22 + 0xa8),
                                                     0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if ((lVar31 == 0) ||
                                           (lVar31 = FUN_051f9514(lVar31,0), lVar31 == 0)) break;
                                        FUN_0487497c(lVar31,0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if (lVar31 == 0) break;
                                        lVar31 = FUN_03663ff0(lVar31,0);
                                        lVar37 = unaff_x19[0xe3];
                                        if (lVar37 == 0) break;
                                        if (*(uint *)(lVar37 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar37 = *(long *)(lVar37 + lVar34 * 8 + 0x28);
                                        if ((lVar37 == 0) ||
                                           (uVar74 = FUN_051f9514(lVar37,0), lVar31 == 0)) break;
                                        FUN_036e059c(lVar31,uVar74,0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if ((lVar31 == 0) ||
                                           (lVar31 = FUN_03663ff0(lVar31,0), lVar31 == 0)) break;
                                        FUN_036e0194(uVar72,uVar23,uVar24,uVar64,lVar31,0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        lVar31 = *(long *)(lVar31 + lVar34 * 8 + 0x28);
                                        if ((lVar31 == 0) ||
                                           (lVar31 = FUN_03663ff0(lVar31,0), lVar31 == 0)) break;
                                        FUN_036e00d0(lVar31,uVar16 & 1,0);
                                        lVar31 = unaff_x19[0xe3];
                                        if (lVar31 == 0) break;
                                        if (*(uint *)(lVar31 + 0x18) <= uVar25) goto LAB_04caa4c0;
                                        plVar30 = *(long **)(lVar31 + lVar34 * 8 + 0x28);
                                        uVar21 = (**(code **)(*unaff_x19 + 0x2b8))();
                                        if (plVar30 == (long *)0x0) break;
                                        (**(code **)(*plVar30 + 0x2c8))
                                                  (plVar30,uVar21 & 1,
                                                   *(undefined8 *)(*plVar30 + 0x2d0));
                                      }
                                      lVar31 = *in_stack_00000180;
                                      lVar34 = lVar34 + 1;
                                      lVar22 = lVar22 + 0x50;
                                    } while (lVar31 != 0);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04caa2e0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


