/*
FUNCTION_NAME: UnityEngine.UIElements.BaseVisualElementPanel$$set_cursorManager
ENTRY_POINT: 0399041c
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


void UnityEngine_UIElements_BaseVisualElementPanel__set_cursorManager(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint *puVar28;
  long unaff_x22;
  undefined8 uVar29;
  uint *unaff_x29;
  float fVar30;
  float fVar31;
  float fVar32;
  float unaff_s12;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  float fStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  auVar6._8_8_ = in_stack_00000010;
  auVar6._0_8_ = in_stack_00000008;
  auVar5._8_8_ = in_stack_00000010;
  auVar5._0_8_ = in_stack_00000008;
  if (*unaff_x29 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)*unaff_x29 * 0x188;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x118);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x120);
    lVar26 = *unaff_x19;
    if (lVar26 == 0) goto LAB_03990eb8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
    lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
    *(undefined8 *)(lVar26 + 200) = *(undefined8 *)(lVar26 + 0x130);
    *(undefined4 *)(lVar26 + 0xd0) = *(undefined4 *)(lVar26 + 0x138);
    lVar26 = *unaff_x19;
    auVar5 = auVar6;
    if (lVar26 == 0) goto LAB_03990eb8;
    if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
    lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
    *(undefined8 *)(lVar26 + 0xf0) = *(undefined8 *)(lVar26 + 0x13c);
    *(undefined4 *)(lVar26 + 0xf8) = *(undefined4 *)(lVar26 + 0x144);
    puVar12 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    uVar13 = (uint)*(byte *)(unaff_x20 + 0x1ab);
    if (unaff_w21 >> 0x18 <= uVar13) {
      uVar13 = (uint)in_stack_00000018._4_1_;
    }
    bVar2 = (byte)uVar13;
    in_stack_00000018._4_1_ = bVar2;
    auVar5 = _in_stack_00000008;
    if (unaff_x22 == 0) goto LAB_03990eb8;
    uVar29 = *(undefined8 *)(unaff_x22 + 0x90);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar25 = FUN_03922f24(uVar29,0,0);
    auVar8._8_8_ = in_stack_00000010;
    auVar8._0_8_ = in_stack_00000008;
    auVar7._8_8_ = in_stack_00000010;
    auVar7._0_8_ = in_stack_00000008;
    auVar5._8_8_ = in_stack_00000010;
    auVar5._0_8_ = in_stack_00000008;
    if (((uVar25 & 1) == 0) &&
       ((*(char *)(unaff_x22 + 0xa1) != '\0' || (*(int *)(unaff_x20 + 0x1c0) < 2)))) {
      uVar29 = *(undefined8 *)(unaff_x22 + 0x98);
      if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar25 = FUN_0391f968(uVar29,0,0);
      auVar11._8_8_ = in_stack_00000010;
      auVar11._0_8_ = in_stack_00000008;
      auVar5._8_8_ = in_stack_00000010;
      auVar5._0_8_ = in_stack_00000008;
      lVar26 = *unaff_x19;
      if (lVar26 == 0) goto LAB_03990eb8;
      uVar1 = *unaff_x29;
      if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
      if ((uVar25 & 1) == 0) {
        lVar27 = *(long *)(unaff_x22 + 0x90);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        fVar30 = (float)(unaff_w21 & 0xff) / 255.0;
        fVar31 = (float)(unaff_w21 >> 8 & 0xff) / 255.0;
        fVar32 = (float)(unaff_w21 >> 0x10 & 0xff) / 255.0;
        fVar33 = (float)uVar13 / 255.0;
        uVar14 = FUN_01bd7168(*(float *)(lVar27 + 0x3c) * fVar30,*(float *)(lVar27 + 0x40) * fVar31,
                              *(float *)(lVar27 + 0x44) * fVar32,*(float *)(lVar27 + 0x48) * fVar33,
                              0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0xc4) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar1 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x22 + 0x90);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        uVar14 = FUN_01bd7168(fVar30 * *(float *)(lVar27 + 0x1c),fVar31 * *(float *)(lVar27 + 0x20),
                              fVar32 * *(float *)(lVar27 + 0x24),fVar33 * *(float *)(lVar27 + 0x28),
                              0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0x9c) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar1 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x22 + 0x90);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        uVar14 = FUN_01bd7168(fVar30 * *(float *)(lVar27 + 0x2c),fVar31 * *(float *)(lVar27 + 0x30),
                              fVar32 * *(float *)(lVar27 + 0x34),fVar33 * *(float *)(lVar27 + 0x38),
                              0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0xec) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar1 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x22 + 0x90);
        auVar5 = _in_stack_00000008;
      }
      else {
        lVar27 = *(long *)(unaff_x22 + 0x98);
        auVar5 = auVar11;
        if (lVar27 == 0) goto LAB_03990eb8;
        fVar30 = (float)(unaff_w21 & 0xff) / 255.0;
        fVar31 = (float)(unaff_w21 >> 8 & 0xff) / 255.0;
        fVar32 = (float)(unaff_w21 >> 0x10 & 0xff) / 255.0;
        fVar33 = (float)uVar13 / 255.0;
        uVar14 = FUN_01bd7168(*(float *)(lVar27 + 0x3c) * fVar30,*(float *)(lVar27 + 0x40) * fVar31,
                              *(float *)(lVar27 + 0x44) * fVar32,*(float *)(lVar27 + 0x48) * fVar33,
                              0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0xc4) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar1 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x22 + 0x98);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        uVar14 = FUN_01bd7168(fVar30 * *(float *)(lVar27 + 0x1c),fVar31 * *(float *)(lVar27 + 0x20),
                              fVar32 * *(float *)(lVar27 + 0x24),fVar33 * *(float *)(lVar27 + 0x28),
                              0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0x9c) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar1 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x22 + 0x98);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        uVar14 = FUN_01bd7168(fVar30 * *(float *)(lVar27 + 0x2c),fVar31 * *(float *)(lVar27 + 0x30),
                              fVar32 * *(float *)(lVar27 + 0x34),fVar33 * *(float *)(lVar27 + 0x38),
                              0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0xec) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar1 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x22 + 0x98);
        auVar5 = _in_stack_00000008;
      }
      if (lVar27 == 0) goto LAB_03990eb8;
      uVar14 = FUN_01bd7168(fVar30 * *(float *)(lVar27 + 0x4c),fVar31 * *(float *)(lVar27 + 0x50),
                            fVar32 * *(float *)(lVar27 + 0x54),fVar33 * *(float *)(lVar27 + 0x58),0)
      ;
      *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0x114) = uVar14;
    }
    else {
      lVar26 = *unaff_x19;
      if (lVar26 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
      lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
      uVar3 = (undefined1)(unaff_w21 >> 0x10);
      *(undefined1 *)(lVar26 + 0xc6) = uVar3;
      uVar4 = (undefined2)unaff_w21;
      *(undefined2 *)(lVar26 + 0xc4) = uVar4;
      *(byte *)(lVar26 + 199) = bVar2;
      lVar26 = *unaff_x19;
      auVar5 = auVar7;
      if (lVar26 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
      lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
      *(undefined1 *)(lVar26 + 0x9e) = uVar3;
      *(undefined2 *)(lVar26 + 0x9c) = uVar4;
      *(byte *)(lVar26 + 0x9f) = bVar2;
      lVar26 = *unaff_x19;
      auVar5 = auVar8;
      if (lVar26 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
      lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
      *(undefined1 *)(lVar26 + 0xee) = uVar3;
      *(undefined2 *)(lVar26 + 0xec) = uVar4;
      *(byte *)(lVar26 + 0xef) = bVar2;
      lVar26 = *unaff_x19;
      auVar5 = _in_stack_00000008;
      if (lVar26 == 0) goto LAB_03990eb8;
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
      lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
      *(undefined1 *)(lVar26 + 0x116) = uVar3;
      *(undefined2 *)(lVar26 + 0x114) = uVar4;
      *(byte *)(lVar26 + 0x117) = bVar2;
    }
    uVar29 = *(undefined8 *)(unaff_x20 + 0x288);
    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar25 = FUN_0391f968(uVar29,0,0);
    auVar9._8_8_ = in_stack_00000010;
    auVar9._0_8_ = in_stack_00000008;
    auVar5._8_8_ = in_stack_00000010;
    auVar5._0_8_ = in_stack_00000008;
    if ((uVar25 & 1) != 0) {
      lVar26 = *unaff_x19;
      if (lVar26 == 0) goto LAB_03990eb8;
      uVar1 = *(uint *)(unaff_x20 + 0x324);
      if (*(uint *)(lVar26 + 0x18) <= uVar1) goto LAB_03990ebc;
      if (*(char *)(unaff_x20 + 0x2b8) == '\0') {
        lVar27 = *(long *)(unaff_x20 + 0x288);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        uVar34 = *(undefined4 *)(lVar27 + 0x3c);
        uVar35 = *(undefined4 *)(lVar27 + 0x40);
        uVar36 = *(undefined4 *)(lVar27 + 0x44);
        uVar14 = *(undefined4 *)(lVar27 + 0x48);
        fVar31 = (float)(unaff_w21 & 0xff) / 255.0;
        fVar30 = (float)(unaff_w21 >> 8 & 0xff) / 255.0;
        fVar32 = (float)(unaff_w21 >> 0x10 & 0xff) / 255.0;
        fVar33 = (float)uVar13 / 255.0;
        fStack0000000000000004 = unaff_s12;
        if (*(int *)(*(long *)PTR_DAT_03dad2f8 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_0399a414(uVar34,uVar35,uVar36,uVar14,fVar31,fVar30,fVar32,fVar33,0);
        uVar14 = FUN_01bd7168(0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar1 * 0x188 + 0xc4) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar13 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x20 + 0x288);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        FUN_0399a414(*(undefined4 *)(lVar27 + 0x1c),*(undefined4 *)(lVar27 + 0x20),
                     *(undefined4 *)(lVar27 + 0x24),*(undefined4 *)(lVar27 + 0x28),fVar31,fVar30,
                     fVar32,fVar33,0);
        uVar14 = FUN_01bd7168(0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar13 * 0x188 + 0x9c) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar13 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x20 + 0x288);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        FUN_0399a414(*(undefined4 *)(lVar27 + 0x2c),*(undefined4 *)(lVar27 + 0x30),
                     *(undefined4 *)(lVar27 + 0x34),*(undefined4 *)(lVar27 + 0x38),fVar31,fVar30,
                     fVar32,fVar33,0);
        uVar14 = FUN_01bd7168(0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *(undefined4 *)(lVar26 + (long)(int)uVar13 * 0x188 + 0xec) = uVar14;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar13 = *unaff_x29;
        if (*(uint *)(lVar26 + 0x18) <= uVar13) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x20 + 0x288);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        FUN_0399a414(*(undefined4 *)(lVar27 + 0x4c),*(undefined4 *)(lVar27 + 0x50),
                     *(undefined4 *)(lVar27 + 0x54),*(undefined4 *)(lVar27 + 0x58),fVar31,fVar30,
                     fVar32,fVar33,0);
        uVar14 = FUN_01bd7168(0);
        *(undefined4 *)(lVar26 + (long)(int)uVar13 * 0x188 + 0x114) = uVar14;
        unaff_s12 = fStack0000000000000004;
      }
      else {
        puVar28 = (uint *)(lVar26 + (long)(int)uVar1 * 0x188 + 0xc4);
        uVar13 = *puVar28;
        lVar26 = *(long *)(unaff_x20 + 0x288);
        auVar5 = auVar9;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar13 = FUN_01bd7168(((float)(uVar13 & 0xff) / 255.0) * *(float *)(lVar26 + 0x3c),
                              ((float)(uVar13 >> 8 & 0xff) / 255.0) * *(float *)(lVar26 + 0x40),
                              ((float)(uVar13 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar26 + 0x44),
                              ((float)(uVar13 >> 0x18) / 255.0) * *(float *)(lVar26 + 0x48),0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *puVar28 = uVar13;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
        puVar28 = (uint *)(lVar26 + (long)(int)*unaff_x29 * 0x188 + 0x9c);
        uVar13 = *puVar28;
        lVar26 = *(long *)(unaff_x20 + 0x288);
        auVar5 = _in_stack_00000008;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar13 = FUN_01bd7168(((float)(uVar13 & 0xff) / 255.0) * *(float *)(lVar26 + 0x1c),
                              ((float)(uVar13 >> 8 & 0xff) / 255.0) * *(float *)(lVar26 + 0x20),
                              ((float)(uVar13 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar26 + 0x24),
                              ((float)(uVar13 >> 0x18) / 255.0) * *(float *)(lVar26 + 0x28),0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *puVar28 = uVar13;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
        puVar28 = (uint *)(lVar26 + (long)(int)*unaff_x29 * 0x188 + 0xec);
        uVar13 = *puVar28;
        lVar26 = *(long *)(unaff_x20 + 0x288);
        auVar5 = _in_stack_00000008;
        if (lVar26 == 0) goto LAB_03990eb8;
        uVar13 = FUN_01bd7168(((float)(uVar13 & 0xff) / 255.0) * *(float *)(lVar26 + 0x2c),
                              ((float)(uVar13 >> 8 & 0xff) / 255.0) * *(float *)(lVar26 + 0x30),
                              ((float)(uVar13 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar26 + 0x34),
                              ((float)(uVar13 >> 0x18) / 255.0) * *(float *)(lVar26 + 0x38),0);
        auVar5._8_8_ = in_stack_00000010;
        auVar5._0_8_ = in_stack_00000008;
        *puVar28 = uVar13;
        lVar26 = *unaff_x19;
        if (lVar26 == 0) goto LAB_03990eb8;
        if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
        lVar27 = *(long *)(unaff_x20 + 0x288);
        auVar5 = _in_stack_00000008;
        if (lVar27 == 0) goto LAB_03990eb8;
        lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
        uVar13 = *(uint *)(lVar26 + 0x114);
        uVar14 = FUN_01bd7168(((float)(uVar13 & 0xff) / 255.0) * *(float *)(lVar27 + 0x4c),
                              ((float)(uVar13 >> 8 & 0xff) / 255.0) * *(float *)(lVar27 + 0x50),
                              ((float)(uVar13 >> 0x10 & 0xff) / 255.0) * *(float *)(lVar27 + 0x54),
                              ((float)(uVar13 >> 0x18) / 255.0) * *(float *)(lVar27 + 0x58),0);
        *(undefined4 *)(lVar26 + 0x114) = uVar14;
      }
    }
    puVar12 = StringLiteral_2271;
    auVar10._8_8_ = in_stack_00000010;
    auVar10._0_8_ = in_stack_00000008;
    auVar5._8_8_ = in_stack_00000010;
    auVar5._0_8_ = in_stack_00000008;
    lVar26 = *unaff_x19;
    if (lVar26 != 0) {
      if (*(uint *)(lVar26 + 0x18) <= *unaff_x29) goto LAB_03990ebc;
      lVar26 = *(long *)(lVar26 + (long)(int)*unaff_x29 * 0x188 + 0x38);
      if ((lVar26 != 0) ||
         ((auVar5 = auVar10, *(long *)(unaff_x20 + 0x1588) != 0 &&
          (lVar26 = *(long *)(*(long *)(unaff_x20 + 0x1588) + 0x20), auVar5 = _in_stack_00000008,
          lVar26 != 0)))) {
        _in_stack_00000008 = FUN_0396b168(lVar26,0);
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar15 = FUN_0396ad2c(&stack0x00000008,0);
        auVar5 = _in_stack_00000008;
        if (*(long *)(unaff_x20 + 0x68) != 0) {
          iVar16 = FUN_0396de84(*(long *)(unaff_x20 + 0x68),0);
          iVar17 = FUN_0396ad34(&stack0x00000008,0);
          auVar5 = _in_stack_00000008;
          if (*(long *)(unaff_x20 + 0x68) != 0) {
            iVar18 = FUN_0396de94(*(long *)(unaff_x20 + 0x68),0);
            iVar19 = FUN_0396ad34(&stack0x00000008,0);
            iVar20 = FUN_0396ad44(&stack0x00000008,0);
            auVar5 = _in_stack_00000008;
            if (*(long *)(unaff_x20 + 0x68) != 0) {
              iVar21 = FUN_0396de94(*(long *)(unaff_x20 + 0x68),0);
              iVar22 = FUN_0396ad2c(&stack0x00000008,0);
              iVar23 = FUN_0396ad3c(&stack0x00000008,0);
              auVar5 = _in_stack_00000008;
              if (*(long *)(unaff_x20 + 0x68) != 0) {
                iVar24 = FUN_0396de84(*(long *)(unaff_x20 + 0x68),0);
                lVar26 = *unaff_x19;
                auVar5 = _in_stack_00000008;
                if (lVar26 != 0) {
                  if (*unaff_x29 < *(uint *)(lVar26 + 0x18)) {
                    lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
                    fVar31 = ((float)iVar15 - unaff_s12) / (float)iVar16;
                    fVar30 = ((float)iVar17 - unaff_s12) / (float)iVar18;
                    *(float *)(lVar26 + 0xac) = fVar31;
                    *(float *)(lVar26 + 0xb0) = fVar30;
                    *(undefined4 *)(lVar26 + 0xb4) = 0;
                    *(undefined4 *)(lVar26 + 0xb8) = 0;
                    lVar26 = *unaff_x19;
                    if (lVar26 == 0) goto LAB_03990eb8;
                    if (*unaff_x29 < *(uint *)(lVar26 + 0x18)) {
                      lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
                      fVar32 = ((float)iVar19 + unaff_s12 + 0.0 + (float)iVar20) / (float)iVar21;
                      *(float *)(lVar26 + 0x84) = fVar31;
                      *(float *)(lVar26 + 0x88) = fVar32;
                      *(undefined4 *)(lVar26 + 0x8c) = 0;
                      *(undefined4 *)(lVar26 + 0x90) = 0;
                      lVar26 = *unaff_x19;
                      if (lVar26 == 0) goto LAB_03990eb8;
                      if (*unaff_x29 < *(uint *)(lVar26 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
                        fVar31 = ((float)iVar22 + unaff_s12 + 0.0 + (float)iVar23) / (float)iVar24;
                        *(float *)(lVar26 + 0xd4) = fVar31;
                        *(float *)(lVar26 + 0xd8) = fVar32;
                        *(undefined4 *)(lVar26 + 0xdc) = 0;
                        *(undefined4 *)(lVar26 + 0xe0) = 0;
                        lVar26 = *unaff_x19;
                        if (lVar26 == 0) goto LAB_03990eb8;
                        if (*unaff_x29 < *(uint *)(lVar26 + 0x18)) {
                          lVar26 = lVar26 + (long)(int)*unaff_x29 * 0x188;
                          *(float *)(lVar26 + 0xfc) = fVar31;
                          *(float *)(lVar26 + 0x100) = fVar30;
                          *(undefined4 *)(lVar26 + 0x108) = 0;
                          *(undefined4 *)(lVar26 + 0x104) = 0;
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
    _in_stack_00000008 = auVar5;
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_03990ebc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


