/*
FUNCTION_NAME: FUN_018e7748
ENTRY_POINT: 018e7748
PROGRAM: vrfs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


ulong FUN_018e7748(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  undefined8 uVar20;
  long *plVar21;
  int iVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  long local_150;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
                    /* try { // try from 018e7760 to 019e776b has its CatchHandler @ 018e7c10 */
  if ((DAT_0722ad3c & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e3fc70);
                    /* try { // try from 018e7790 to 019e7793 has its CatchHandler @ 018e7c70 */
    thunk_FUN_0159f088(PTR_DAT_06e1aa38);
                    /* try { // try from 018e779c to 019e77bf has its CatchHandler @ 018e7c28 */
    thunk_FUN_0159f088(PTR_DAT_06dcd588);
    thunk_FUN_0159f088(PTR_DAT_06dc4b50);
    thunk_FUN_0159f088(PTR_DAT_06e5d4e0);
    thunk_FUN_0159f088(PTR_DAT_06deaef8);
    thunk_FUN_0159f088(PTR_DAT_06d89a30);
                    /* try { // try from 018e77dc to 019e77df has its CatchHandler @ 018e7c70 */
    thunk_FUN_0159f088(PTR_DAT_06deb408);
                    /* try { // try from 018e77e4 to 019e77ff has its CatchHandler @ 018e7c60 */
    thunk_FUN_0159f088(PTR_DAT_06e08bb8);
    thunk_FUN_0159f088(PTR_DAT_06e2c630);
    thunk_FUN_0159f088(PTR_DAT_06e5f350);
    thunk_FUN_0159f088(PTR_DAT_06de4118);
                    /* try { // try from 018e7810 to 019e784b has its CatchHandler @ 018e7c70 */
    thunk_FUN_0159f088(PTR_DAT_06e1e250);
    DAT_0722ad3c = 1;
  }
  puVar7 = PTR_DAT_06e1aa38;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_a0._8_8_ = 0;
  local_a0._0_8_ = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  auVar27 = ZEXT816(0);
  if (param_2 == 0) goto LAB_018e7f14;
                    /* try { // try from 018e7864 to 019e7867 has its CatchHandler @ 018e7bfc */
  lVar17 = *(long *)(param_2 + 0x78);
  plVar21 = *(long **)(param_2 + 0x80);
  local_310 = *(undefined8 *)(param_1 + 0x148);
  uStack_318 = *(undefined8 *)(param_1 + 0x140);
  local_320 = *(undefined8 *)(param_1 + 0x138);
  uVar13 = System_Collections_Generic_List<NativeArray<ushort>>__System_Collections_ICollection_CopyTo
                     (&local_320,plVar21,*(undefined8 *)PTR_DAT_06dcd588);
  auVar27._8_8_ = local_a0._8_8_;
  auVar27._0_8_ = local_a0._0_8_;
  if ((int)uVar13 != -1) {
    uVar23 = uVar13 & 0xffffffff;
    uVar10 = FUN_04e95c08(param_1 + 0x128,uVar23,*(undefined8 *)puVar7);
    uVar12 = 2;
    *(undefined4 *)(param_1 + 0x118) = uVar10;
    *(int *)(param_1 + 0x11c) = (int)uVar13;
LAB_018e78c0:
    *(undefined4 *)(param_1 + 0x120) = uVar12;
    return uVar23;
  }
  if (lVar17 == 0) goto LAB_018e7f14;
  iVar19 = *(int *)(lVar17 + 0xe0);
  if (DAT_0722a89c == '\0') {
    uVar13 = thunk_FUN_0159f088(PTR_DAT_06e4d340);
    DAT_0722a89c = '\x01';
  }
  auVar27._8_8_ = local_a0._8_8_;
  auVar27._0_8_ = local_a0._0_8_;
  auVar5._8_8_ = local_a0._8_8_;
  auVar5._0_8_ = local_a0._0_8_;
  auVar4._8_8_ = local_a0._8_8_;
  auVar4._0_8_ = local_a0._0_8_;
  uVar26 = **(undefined8 **)(*(long *)PTR_DAT_06e4d340 + 0xb8);
  if (plVar21 == (long *)0x0) {
LAB_018e7970:
    FUN_018e75d0(uVar13,param_2);
    bVar2 = false;
    iVar22 = 0;
  }
  else {
    lVar18 = *plVar21;
    bVar3 = *(byte *)(*(long *)PTR_DAT_06de4118 + 300);
    if ((*(byte *)(lVar18 + 300) < bVar3) ||
       (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06de4118)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_06e1e250 + 300);
      if ((*(byte *)(lVar18 + 300) < bVar3) ||
         (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_06e1e250))
      goto LAB_018e7970;
      auVar27 = auVar4;
      if ((plVar21[0x34] == 0) ||
         (lVar18 = *(long *)(plVar21[0x34] + 0x180), auVar27 = auVar5, lVar18 == 0))
      goto LAB_018e7f14;
      piVar14 = (int *)FUN_04eaeddc(lVar18,*(undefined8 *)PTR_DAT_06e5d4e0);
      auVar6._8_8_ = local_a0._8_8_;
      auVar6._0_8_ = local_a0._0_8_;
      auVar27._8_8_ = local_a0._8_8_;
      auVar27._0_8_ = local_a0._0_8_;
      if (plVar21[0x34] == 0) goto LAB_018e7f14;
      lVar18 = *(long *)(plVar21[0x34] + 0x188);
      auVar27 = auVar6;
    }
    else {
      if (plVar21[0x30] == 0) goto LAB_018e7f14;
      piVar14 = (int *)FUN_04eaeddc(plVar21[0x30],*(undefined8 *)PTR_DAT_06e5d4e0);
      auVar27._8_8_ = local_a0._8_8_;
      auVar27._0_8_ = local_a0._0_8_;
      lVar18 = plVar21[0x31];
    }
    if (lVar18 == 0) goto LAB_018e7f14;
    iVar22 = *piVar14;
    puVar15 = (undefined8 *)FUN_0515ab60(lVar18,*(undefined8 *)PTR_DAT_06dc4b50);
    uVar26 = *puVar15;
    FUN_018e75d0(puVar15,param_2);
    if (iVar22 == 0) {
      bVar2 = false;
    }
    else {
      iVar19 = iVar22 + iVar19 * 0x1000000;
      bVar2 = true;
    }
  }
  if (*(int *)(param_1 + 0x118) == iVar19) {
LAB_018e798c:
    return (ulong)*(uint *)(param_1 + 0x11c);
  }
  if ((!bVar2) && (0 < *(int *)(param_1 + 0x128))) {
    uVar23 = 0;
    do {
      iVar11 = FUN_04e95c08((int *)(param_1 + 0x128),uVar23,*(undefined8 *)puVar7);
      if (iVar11 == iVar19) {
        *(int *)(param_1 + 0x118) = iVar19;
        *(int *)(param_1 + 0x11c) = (int)uVar23;
        FUN_04e9ac8c(&local_320,param_1 + 0x150,uVar23,*(undefined8 *)PTR_DAT_06e3fc70);
        auVar27._8_8_ = local_a0._8_8_;
        auVar27._0_8_ = local_a0._0_8_;
        if (local_150 == 0) goto LAB_018e7f14;
        uVar12 = *(undefined4 *)(local_150 + 0x184);
        goto LAB_018e78c0;
      }
      uVar1 = (int)uVar23 + 1;
      uVar23 = (ulong)uVar1;
    } while ((int)uVar1 < *(int *)(param_1 + 0x128));
  }
  puVar7 = PTR_DAT_06deaef8;
  if ((param_3 & 1) == 0) {
    return 0xffffffff;
  }
  if (bVar2) {
    iVar11 = 2;
  }
  else {
    uVar20 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)PTR_DAT_06deaef8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar13 = FUN_018e7f18(lVar17,uVar20);
    if ((uVar13 & 1) == 0) {
      uVar20 = *(undefined8 *)(param_1 + 0xb0);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar13 = FUN_018e7f18(lVar17,uVar20);
      iVar11 = 3;
      if ((uVar13 & 1) == 0) {
        iVar11 = 0;
      }
    }
    else {
      iVar11 = 1;
    }
  }
  puVar7 = PTR_DAT_06d89a30;
  fVar25 = (float)((ulong)uVar26 >> 0x20);
  if (((iVar11 != 0) && (*(int *)(param_1 + 0xc4) == 1)) ||
     ((iVar11 == 1 && (*(int *)(param_1 + 0xc4) == 0)))) {
    if (*(int *)(param_1 + 0x11c) == -1) {
      uVar12 = FUN_018e7fe4(param_1,iVar19);
      *(undefined4 *)(param_1 + 0x11c) = uVar12;
    }
    else {
      lVar18 = FUN_018e758c(param_1);
      auVar27._8_8_ = local_a0._8_8_;
      auVar27._0_8_ = local_a0._0_8_;
      lVar18 = *(long *)(lVar18 + 0x1d0);
      if (lVar18 == 0) goto LAB_018e7f14;
      *(long *)(lVar18 + 0x170) = param_2;
      thunk_FUN_01656ef8(lVar18 + 0x170,param_2);
      *(long *)(lVar18 + 0x178) = lVar17;
      thunk_FUN_01656ef8(lVar18 + 0x178,lVar17);
      *(int *)(lVar18 + 0x184) = iVar11;
      *(int *)(lVar18 + 0xfc) = iVar19;
      *(int *)(lVar18 + 0x180) = iVar22;
      *(undefined8 *)(lVar18 + 0x194) = 0;
      *(undefined8 *)(lVar18 + 0x19c) = 0;
      *(undefined8 *)(lVar18 + 0x18c) = 0;
      *(undefined4 *)(lVar18 + 0x1a4) = 0;
    }
    if ((iVar11 == 2) &&
       (puVar16 = (undefined1 *)FUN_018e758c(param_1,*(undefined4 *)(param_1 + 0x11c)),
       fVar24 = (float)*(undefined8 *)(puVar16 + 0x1d8) - (float)uVar26,
       fVar25 = (float)((ulong)*(undefined8 *)(puVar16 + 0x1d8) >> 0x20) - fVar25,
       DAT_0534bf7c <= fVar24 * fVar24 + fVar25 * fVar25)) {
      *(undefined8 *)(puVar16 + 0x1d8) = uVar26;
      *puVar16 = 1;
    }
    uVar13 = (ulong)*(uint *)(param_1 + 0x11c);
    *(int *)(param_1 + 0x118) = iVar19;
    goto LAB_018e7ee8;
  }
  if (iVar11 == 0) {
    if (*(int *)(param_1 + 0x118) != -1) goto LAB_018e798c;
    if ((*(long *)(param_1 + 0x70) == 0) ||
       (lVar17 = FUN_02511da8(*(long *)(param_1 + 0x70),0), lVar17 == 0)) {
      local_d0 = 0;
      uStack_d8 = 0;
      local_e0 = 0;
    }
    else {
      auVar27 = FUN_024ffec0(lVar17,0);
      uStack_318 = 0;
      local_310 = 0;
      local_320 = 0;
      OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke
                (&local_320,auVar27._0_8_,auVar27._8_8_,*(undefined8 *)puVar7);
      uStack_d8 = uStack_318;
      local_e0 = local_320;
      local_d0 = local_310;
    }
    puVar9 = PTR_DAT_06e5f350;
    puVar8 = PTR_DAT_06e08bb8;
    uStack_88 = uStack_d8;
    local_90 = local_e0;
    uVar26 = local_90;
    local_90._0_1_ = (char)local_e0;
    local_80 = local_d0;
    bVar2 = (char)local_90 == '\0';
    local_90 = uVar26;
    if ((bVar2) ||
       (local_a0 = FUN_0406b17c(&local_90,*(undefined8 *)PTR_DAT_06e08bb8), local_a0._12_4_ < 1))
    goto LAB_018e7db0;
    auVar27 = FUN_0406b17c(&local_90,*(undefined8 *)puVar8);
    local_a0 = auVar27;
    lVar17 = FUN_03f69260(local_a0,0,*(undefined8 *)puVar9);
    auVar27 = local_a0;
    if (lVar17 == 0) goto LAB_018e7f14;
    plVar21 = *(long **)(lVar17 + 0x78);
    if (plVar21 == (long *)0x0) {
LAB_018e7db0:
      if (*(long *)(param_1 + 0xb0) == 0) {
LAB_018e7e04:
        local_f0 = 0;
        uStack_f8 = 0;
        local_100 = 0;
      }
      else {
        lVar17 = FUN_02511da8(*(long *)(param_1 + 0xb0),0);
        if (lVar17 == 0) goto LAB_018e7e04;
        auVar27 = FUN_024ffec0(lVar17,0);
        uStack_318 = 0;
        local_310 = 0;
        local_320 = 0;
        OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke
                  (&local_320,auVar27._0_8_,auVar27._8_8_,*(undefined8 *)puVar7);
        uStack_f8 = uStack_318;
        local_100 = local_320;
        local_f0 = local_310;
      }
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      uVar26 = local_c0;
      local_c0._0_1_ = (char)local_100;
      local_b0 = local_f0;
      bVar2 = (char)local_c0 != '\0';
      iVar22 = iVar19;
      local_c0 = uVar26;
      if (bVar2) {
        auVar27 = FUN_0406b17c(&local_c0,*(undefined8 *)puVar8);
        local_a0 = auVar27;
        if (0 < auVar27._12_4_) {
          auVar27 = FUN_0406b17c(&local_c0,*(undefined8 *)puVar8);
          local_a0 = auVar27;
          lVar17 = FUN_03f69260(local_a0,0,*(undefined8 *)puVar9);
          auVar27 = local_a0;
          if (lVar17 == 0) {
LAB_018e7f14:
            local_a0 = auVar27;
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          if (*(long *)(lVar17 + 0x78) != 0) {
            iVar22 = *(int *)(*(long *)(lVar17 + 0x78) + 0xe0);
            auVar27 = FUN_0406b17c(&local_c0,*(undefined8 *)puVar8);
            local_a0 = auVar27;
            FUN_03f69260(local_a0,0,*(undefined8 *)puVar9);
          }
        }
      }
    }
    else {
      bVar3 = *(byte *)(*(long *)PTR_DAT_06e1e250 + 300);
      if ((bVar3 <= *(byte *)(*plVar21 + 300)) &&
         (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) == *(long *)PTR_DAT_06e1e250)
         ) goto LAB_018e7db0;
      iVar22 = (int)plVar21[0x1c];
      auVar27 = FUN_0406b17c(&local_90,*(undefined8 *)puVar8);
      local_a0 = auVar27;
      FUN_03f69260(local_a0,0,*(undefined8 *)puVar9);
    }
    uVar13 = FUN_018e7fe4(param_1,iVar22);
    uVar13 = uVar13 & 0xffffffff;
  }
  else {
    uVar13 = FUN_018e7fe4(param_1,iVar19);
    uVar13 = uVar13 & 0xffffffff;
    if ((iVar11 == 2) &&
       (puVar16 = (undefined1 *)FUN_018e758c(param_1,uVar13),
       fVar24 = (float)*(undefined8 *)(puVar16 + 0x1d8) - (float)uVar26,
       fVar25 = (float)((ulong)*(undefined8 *)(puVar16 + 0x1d8) >> 0x20) - fVar25,
       DAT_0534bf7c <= fVar24 * fVar24 + fVar25 * fVar25)) {
      *(undefined8 *)(puVar16 + 0x1d8) = uVar26;
      *puVar16 = 1;
    }
  }
  *(int *)(param_1 + 0x118) = iVar19;
  *(int *)(param_1 + 0x11c) = (int)uVar13;
LAB_018e7ee8:
  *(int *)(param_1 + 0x120) = iVar11;
  return uVar13;
}


