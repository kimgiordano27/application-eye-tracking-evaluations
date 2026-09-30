/*
FUNCTION_NAME: UnityEngine.UIElements.BaseVisualElementPanel$$get_cursorManager
ENTRY_POINT: 03990414
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void UnityEngine_UIElements_BaseVisualElementPanel__get_cursorManager(long param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint *puVar30;
  long unaff_x22;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float unaff_s12;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  auVar8._8_8_ = in_stack_00000010;
  auVar8._0_8_ = in_stack_00000008;
  auVar7._8_8_ = in_stack_00000010;
  auVar7._0_8_ = in_stack_00000008;
  auVar6._8_8_ = in_stack_00000010;
  auVar6._0_8_ = in_stack_00000008;
  if (param_1 == 0) goto LAB_03990eb8;
  puVar1 = (uint *)(unaff_x20 + 0x324);
  if (*puVar1 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)*puVar1 * 0x188;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x120);
    lVar28 = *unaff_x19;
    auVar6 = auVar7;
    if (lVar28 == 0) goto LAB_03990eb8;
    if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
    lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
    *(undefined8 *)(lVar28 + 200) = *(undefined8 *)(lVar28 + 0x130);
    *(undefined4 *)(lVar28 + 0xd0) = *(undefined4 *)(lVar28 + 0x138);
    lVar28 = *unaff_x19;
    auVar6 = auVar8;
    if (lVar28 == 0) goto LAB_03990eb8;
    if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
    lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
    *(undefined8 *)(lVar28 + 0xf0) = *(undefined8 *)(lVar28 + 0x13c);
    *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar28 + 0x144);
    puVar14 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar15 = (uint)*(byte *)(unaff_x20 + 0x1ab);
    if (unaff_w21 >> 0x18 <= uVar15) {
      uVar15 = (uint)in_stack_00000018._4_1_;
    }
    bVar3 = (byte)uVar15;
    in_stack_00000018._4_1_ = bVar3;
    auVar6 = _in_stack_00000008;
    if (unaff_x22 == 0) goto LAB_03990eb8;
    uVar31 = *(undefined8 *)(unaff_x22 + 0x90);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar27 = FUN_03922f24(uVar31,0,0);
    auVar10._8_8_ = in_stack_00000010;
    auVar10._0_8_ = in_stack_00000008;
    auVar9._8_8_ = in_stack_00000010;
    auVar9._0_8_ = in_stack_00000008;
    auVar6._8_8_ = in_stack_00000010;
    auVar6._0_8_ = in_stack_00000008;
    if (((uVar27 & 1) == 0) &&
       ((*(char *)(unaff_x22 + 0xa1) != '\0' || (*(int *)(unaff_x20 + 0x1c0) < 2)))) {
      uVar31 = *(undefined8 *)(unaff_x22 + 0x98);
      if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar27 = FUN_0391f968(uVar31,0,0);
      auVar13._8_8_ = in_stack_00000010;
      auVar13._0_8_ = in_stack_00000008;
      auVar6._8_8_ = in_stack_00000010;
      auVar6._0_8_ = in_stack_00000008;
      lVar28 = *unaff_x19;
      if (lVar28 == 0) goto LAB_03990eb8;
      uVar2 = *puVar1;
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
      if ((uVar27 & 1) == 0) {
        lVar29 = *(long *)(unaff_x22 + 0x90);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        fVar32 = (float)(unaff_w21 & 0xff) / 255.0;
        fVar33 = (float)(unaff_w21 >> 8 & 0xff) / 255.0;
        fVar34 = (float)(unaff_w21 >> 0x10 & 0xff) / 255.0;
        fVar35 = (float)uVar15 / 255.0;
        uVar16 = FUN_01bd7168(*(float *)(lVar29 + 0x3c) * fVar32,*(float *)(lVar29 + 0x40) * fVar33,
                              *(float *)(lVar29 + 0x44) * fVar34,*(float *)(lVar29 + 0x48) * fVar35,
                              0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0xc4) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar2 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x22 + 0x90);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        uVar16 = FUN_01bd7168(fVar32 * *(float *)(lVar29 + 0x1c),fVar33 * *(float *)(lVar29 + 0x20),
                              fVar34 * *(float *)(lVar29 + 0x24),fVar35 * *(float *)(lVar29 + 0x28),
                              0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0x9c) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar2 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x22 + 0x90);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        uVar16 = FUN_01bd7168(fVar32 * *(float *)(lVar29 + 0x2c),fVar33 * *(float *)(lVar29 + 0x30),
                              fVar34 * *(float *)(lVar29 + 0x34),fVar35 * *(float *)(lVar29 + 0x38),
                              0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0xec) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar2 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x22 + 0x90);
        auVar6 = _in_stack_00000008;
      }
      else {
        lVar29 = *(long *)(unaff_x22 + 0x98);
        auVar6 = auVar13;
        if (lVar29 == 0) goto LAB_03990eb8;
        fVar32 = (float)(unaff_w21 & 0xff) / 255.0;
        fVar33 = (float)(unaff_w21 >> 8 & 0xff) / 255.0;
        fVar34 = (float)(unaff_w21 >> 0x10 & 0xff) / 255.0;
        fVar35 = (float)uVar15 / 255.0;
        uVar16 = FUN_01bd7168(*(float *)(lVar29 + 0x3c) * fVar32,*(float *)(lVar29 + 0x40) * fVar33,
                              *(float *)(lVar29 + 0x44) * fVar34,*(float *)(lVar29 + 0x48) * fVar35,
                              0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0xc4) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar2 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x22 + 0x98);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        uVar16 = FUN_01bd7168(fVar32 * *(float *)(lVar29 + 0x1c),fVar33 * *(float *)(lVar29 + 0x20),
                              fVar34 * *(float *)(lVar29 + 0x24),fVar35 * *(float *)(lVar29 + 0x28),
                              0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0x9c) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar2 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x22 + 0x98);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        uVar16 = FUN_01bd7168(fVar32 * *(float *)(lVar29 + 0x2c),fVar33 * *(float *)(lVar29 + 0x30),
                              fVar34 * *(float *)(lVar29 + 0x34),fVar35 * *(float *)(lVar29 + 0x38),
                              0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0xec) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar2 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x22 + 0x98);
        auVar6 = _in_stack_00000008;
      }
      if (lVar29 == 0) goto LAB_03990eb8;
      uVar16 = FUN_01bd7168(fVar32 * *(float *)(lVar29 + 0x4c),fVar33 * *(float *)(lVar29 + 0x50),
                            fVar34 * *(float *)(lVar29 + 0x54),fVar35 * *(float *)(lVar29 + 0x58),0)
      ;
      *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0x114) = uVar16;
    }
    else {
      lVar28 = *unaff_x19;
      if (lVar28 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
      uVar4 = (undefined1)(unaff_w21 >> 0x10);
      *(undefined1 *)(lVar28 + 0xc6) = uVar4;
      uVar5 = (undefined2)unaff_w21;
      *(undefined2 *)(lVar28 + 0xc4) = uVar5;
      *(byte *)(lVar28 + 199) = bVar3;
      lVar28 = *unaff_x19;
      auVar6 = auVar9;
      if (lVar28 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
      *(undefined1 *)(lVar28 + 0x9e) = uVar4;
      *(undefined2 *)(lVar28 + 0x9c) = uVar5;
      *(byte *)(lVar28 + 0x9f) = bVar3;
      lVar28 = *unaff_x19;
      auVar6 = auVar10;
      if (lVar28 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
      *(undefined1 *)(lVar28 + 0xee) = uVar4;
      *(undefined2 *)(lVar28 + 0xec) = uVar5;
      *(byte *)(lVar28 + 0xef) = bVar3;
      lVar28 = *unaff_x19;
      auVar6 = _in_stack_00000008;
      if (lVar28 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
      *(undefined1 *)(lVar28 + 0x116) = uVar4;
      *(undefined2 *)(lVar28 + 0x114) = uVar5;
      *(byte *)(lVar28 + 0x117) = bVar3;
    }
    uVar31 = *(undefined8 *)(unaff_x20 + 0x288);
    if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar27 = FUN_0391f968(uVar31,0,0);
    auVar11._8_8_ = in_stack_00000010;
    auVar11._0_8_ = in_stack_00000008;
    auVar6._8_8_ = in_stack_00000010;
    auVar6._0_8_ = in_stack_00000008;
    if ((uVar27 & 1) != 0) {
      lVar28 = *unaff_x19;
      if (lVar28 == 0) goto LAB_03990eb8;
      uVar2 = *(uint *)(unaff_x20 + 0x324);
      if (*(uint *)(lVar28 + 0x18) <= uVar2) goto LAB_03990ebc;
      if (*(char *)(unaff_x20 + 0x2b8) == '\0') {
        lVar29 = *(long *)(unaff_x20 + 0x288);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        uVar36 = *(undefined4 *)(lVar29 + 0x3c);
        uVar37 = *(undefined4 *)(lVar29 + 0x40);
        uVar38 = *(undefined4 *)(lVar29 + 0x44);
        uVar16 = *(undefined4 *)(lVar29 + 0x48);
        fVar33 = (float)(unaff_w21 & 0xff) / 255.0;
        fVar32 = (float)(unaff_w21 >> 8 & 0xff) / 255.0;
        fVar34 = (float)(unaff_w21 >> 0x10 & 0xff) / 255.0;
        fVar35 = (float)uVar15 / 255.0;
        fStack0000000000000004 = unaff_s12;
        if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0399a414(uVar36,uVar37,uVar38,uVar16,fVar33,fVar32,fVar34,fVar35,0);
        uVar16 = FUN_01bd7168(0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar2 * 0x188 + 0xc4) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar15 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x20 + 0x288);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        FUN_0399a414(*(undefined4 *)(lVar29 + 0x1c),*(undefined4 *)(lVar29 + 0x20),
                     *(undefined4 *)(lVar29 + 0x24),*(undefined4 *)(lVar29 + 0x28),fVar33,fVar32,
                     fVar34,fVar35,0);
        uVar16 = FUN_01bd7168(0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar15 * 0x188 + 0x9c) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar15 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x20 + 0x288);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        FUN_0399a414(*(undefined4 *)(lVar29 + 0x2c),*(undefined4 *)(lVar29 + 0x30),
                     *(undefined4 *)(lVar29 + 0x34),*(undefined4 *)(lVar29 + 0x38),fVar33,fVar32,
                     fVar34,fVar35,0);
        uVar16 = FUN_01bd7168(0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar28 + (long)(int)uVar15 * 0x188 + 0xec) = uVar16;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar15 = *puVar1;
        if (*(uint *)(lVar28 + 0x18) <= uVar15) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x20 + 0x288);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        FUN_0399a414(*(undefined4 *)(lVar29 + 0x4c),*(undefined4 *)(lVar29 + 0x50),
                     *(undefined4 *)(lVar29 + 0x54),*(undefined4 *)(lVar29 + 0x58),fVar33,fVar32,
                     fVar34,fVar35,0);
        uVar16 = FUN_01bd7168(0);
        *(undefined4 *)(lVar28 + (long)(int)uVar15 * 0x188 + 0x114) = uVar16;
        unaff_s12 = fStack0000000000000004;
      }
      else {
        puVar30 = (uint *)(lVar28 + (long)(int)uVar2 * 0x188 + 0xc4);
        uVar15 = *puVar30;
        lVar28 = *(long *)(unaff_x20 + 0x288);
        auVar6 = auVar11;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar15 = FUN_01bd7168(((float)(uVar15 & 0xff) / 255.0) * *(float *)(lVar28 + 0x3c),
                              ((float)(uVar15 >> 8 & 0xff) / 255.0) * *(float *)(lVar28 + 0x40),
                              ((float)(uVar15 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar28 + 0x44),
                              ((float)(uVar15 >> 0x18) / 255.0) * *(float *)(lVar28 + 0x48),0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *puVar30 = uVar15;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
        puVar30 = (uint *)(lVar28 + (long)(int)*puVar1 * 0x188 + 0x9c);
        uVar15 = *puVar30;
        lVar28 = *(long *)(unaff_x20 + 0x288);
        auVar6 = _in_stack_00000008;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar15 = FUN_01bd7168(((float)(uVar15 & 0xff) / 255.0) * *(float *)(lVar28 + 0x1c),
                              ((float)(uVar15 >> 8 & 0xff) / 255.0) * *(float *)(lVar28 + 0x20),
                              ((float)(uVar15 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar28 + 0x24),
                              ((float)(uVar15 >> 0x18) / 255.0) * *(float *)(lVar28 + 0x28),0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *puVar30 = uVar15;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
        puVar30 = (uint *)(lVar28 + (long)(int)*puVar1 * 0x188 + 0xec);
        uVar15 = *puVar30;
        lVar28 = *(long *)(unaff_x20 + 0x288);
        auVar6 = _in_stack_00000008;
        if (lVar28 == 0) goto LAB_03990eb8;
        uVar15 = FUN_01bd7168(((float)(uVar15 & 0xff) / 255.0) * *(float *)(lVar28 + 0x2c),
                              ((float)(uVar15 >> 8 & 0xff) / 255.0) * *(float *)(lVar28 + 0x30),
                              ((float)(uVar15 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar28 + 0x34),
                              ((float)(uVar15 >> 0x18) / 255.0) * *(float *)(lVar28 + 0x38),0);
        auVar6._8_8_ = in_stack_00000010;
        auVar6._0_8_ = in_stack_00000008;
        *puVar30 = uVar15;
        lVar28 = *unaff_x19;
        if (lVar28 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
        lVar29 = *(long *)(unaff_x20 + 0x288);
        auVar6 = _in_stack_00000008;
        if (lVar29 == 0) goto LAB_03990eb8;
        lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
        uVar15 = *(uint *)(lVar28 + 0x114);
        uVar16 = FUN_01bd7168(((float)(uVar15 & 0xff) / 255.0) * *(float *)(lVar29 + 0x4c),
                              ((float)(uVar15 >> 8 & 0xff) / 255.0) * *(float *)(lVar29 + 0x50),
                              ((float)(uVar15 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar29 + 0x54),
                              ((float)(uVar15 >> 0x18) / 255.0) * *(float *)(lVar29 + 0x58),0);
        *(undefined4 *)(lVar28 + 0x114) = uVar16;
      }
    }
    puVar14 = StringLiteral_2271;
    auVar12._8_8_ = in_stack_00000010;
    auVar12._0_8_ = in_stack_00000008;
    auVar6._8_8_ = in_stack_00000010;
    auVar6._0_8_ = in_stack_00000008;
    lVar28 = *unaff_x19;
    if (lVar28 != 0) {
      if (*(uint *)(lVar28 + 0x18) <= *puVar1) goto LAB_03990ebc;
      lVar28 = *(long *)(lVar28 + (long)(int)*puVar1 * 0x188 + 0x38);
      if ((lVar28 != 0) ||
         ((auVar6 = auVar12, *(long *)(unaff_x20 + 0x1588) != 0 &&
          (lVar28 = *(long *)(*(long *)(unaff_x20 + 0x1588) + 0x20), auVar6 = _in_stack_00000008,
          lVar28 != 0)))) {
        _in_stack_00000008 = FUN_0396b168(lVar28,0);
        if (*(int *)(*(long *)puVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar17 = FUN_0396ad2c(&stack0x00000008,0);
        auVar6 = _in_stack_00000008;
        if (*(long *)(unaff_x20 + 0x68) != 0) {
          iVar18 = FUN_0396de84(*(long *)(unaff_x20 + 0x68),0);
          iVar19 = FUN_0396ad34(&stack0x00000008,0);
          auVar6 = _in_stack_00000008;
          if (*(long *)(unaff_x20 + 0x68) != 0) {
            iVar20 = FUN_0396de94(*(long *)(unaff_x20 + 0x68),0);
            iVar21 = FUN_0396ad34(&stack0x00000008,0);
            iVar22 = FUN_0396ad44(&stack0x00000008,0);
            auVar6 = _in_stack_00000008;
            if (*(long *)(unaff_x20 + 0x68) != 0) {
              iVar23 = FUN_0396de94(*(long *)(unaff_x20 + 0x68),0);
              iVar24 = FUN_0396ad2c(&stack0x00000008,0);
              iVar25 = FUN_0396ad3c(&stack0x00000008,0);
              auVar6 = _in_stack_00000008;
              if (*(long *)(unaff_x20 + 0x68) != 0) {
                iVar26 = FUN_0396de84(*(long *)(unaff_x20 + 0x68),0);
                lVar28 = *unaff_x19;
                auVar6 = _in_stack_00000008;
                if (lVar28 != 0) {
                  if (*puVar1 < *(uint *)(lVar28 + 0x18)) {
                    lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
                    fVar33 = ((float)iVar17 - unaff_s12) / (float)iVar18;
                    fVar32 = ((float)iVar19 - unaff_s12) / (float)iVar20;
                    *(float *)(lVar28 + 0xac) = fVar33;
                    *(float *)(lVar28 + 0xb0) = fVar32;
                    *(undefined4 *)(lVar28 + 0xb4) = 0;
                    *(undefined4 *)(lVar28 + 0xb8) = 0;
                    lVar28 = *unaff_x19;
                    if (lVar28 == 0) goto LAB_03990eb8;
                    if (*puVar1 < *(uint *)(lVar28 + 0x18)) {
                      lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
                      fVar34 = ((float)iVar21 + unaff_s12 + 0.0 + (float)iVar22) / (float)iVar23;
                      *(float *)(lVar28 + 0x84) = fVar33;
                      *(float *)(lVar28 + 0x88) = fVar34;
                      *(undefined4 *)(lVar28 + 0x8c) = 0;
                      *(undefined4 *)(lVar28 + 0x90) = 0;
                      lVar28 = *unaff_x19;
                      if (lVar28 == 0) goto LAB_03990eb8;
                      if (*puVar1 < *(uint *)(lVar28 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
                        fVar33 = ((float)iVar24 + unaff_s12 + 0.0 + (float)iVar25) / (float)iVar26;
                        *(float *)(lVar28 + 0xd4) = fVar33;
                        *(float *)(lVar28 + 0xd8) = fVar34;
                        *(undefined4 *)(lVar28 + 0xdc) = 0;
                        *(undefined4 *)(lVar28 + 0xe0) = 0;
                        lVar28 = *unaff_x19;
                        if (lVar28 == 0) goto LAB_03990eb8;
                        if (*puVar1 < *(uint *)(lVar28 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)*puVar1 * 0x188;
                          *(float *)(lVar28 + 0xfc) = fVar33;
                          *(float *)(lVar28 + 0x100) = fVar32;
                          *(undefined4 *)(lVar28 + 0x108) = 0;
                          *(undefined4 *)(lVar28 + 0x104) = 0;
                          return;
                        }
                      }
                    }
                  }
                  goto LAB_03990ebc;
                }
              }
            }
          }
        }
      }
    }
LAB_03990eb8:
    _in_stack_00000008 = auVar6;
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_03990ebc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


