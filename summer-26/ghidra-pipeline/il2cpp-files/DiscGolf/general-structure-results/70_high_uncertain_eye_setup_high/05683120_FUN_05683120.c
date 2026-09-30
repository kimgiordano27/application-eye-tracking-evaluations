/*
FUNCTION_NAME: FUN_05683120
ENTRY_POINT: 05683120
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05683a28) */

void FUN_05683120(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_348;
  undefined8 *puStack_340;
  undefined8 local_338;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 *puStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 auStack_1b8 [36];
  uint local_194;
  undefined4 local_190;
  undefined8 local_180;
  undefined8 local_160 [4];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0 [7];
  undefined8 local_98 [7];
  
  puVar3 = PTR_DAT_06a0e8c0;
  if ((DAT_06dbc73e & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc218);
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(PTR_DAT_069fda78);
    FUN_02d965b8(PTR_DAT_069fda80);
    FUN_02d965b8(PTR_DAT_069fda88);
    FUN_02d965b8(System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fda90);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyList<OVRSpatialAnchor>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(System_Collections_Generic_List<X509Extension>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo);
    FUN_02d965b8(System_Func<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<XRBaseController>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<XRControllerState>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e8c0);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyList<OVRSpaceUser>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fed70);
    FUN_02d965b8(PTR_DAT_069ff2f8);
    DAT_06dbc73e = 1;
  }
  memset(auStack_1b8,0,0x158);
  local_1c0 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1e0 = 0;
  puStack_1d8 = (undefined8 *)0x0;
  local_1e8 = 0;
  uVar13 = FUN_06359454(0);
  *(undefined4 *)(param_4 + 0x268) = uVar13;
  FUN_05683c70(param_4);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar4 = System_Func<OvrGpuSkinnerMorphTargetsOnlyDrawCall>_TypeInfo;
  uVar15 = FUN_05659dac(0);
  if ((uVar15 & 1) == 0) {
    uVar1 = *(uint *)(param_4 + 0x34);
    if ((int)uVar1 < 0x10000) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbc79f == '\0') {
        FUN_02d965b8(PTR_DAT_06a0e8c0);
        DAT_06dbc79f = '\x01';
      }
      lVar19 = *(long *)puVar3;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar19 = *(long *)puVar3;
      }
      **(uint **)(lVar19 + 0xb8) = uVar1 & 0xffff;
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05659e0c(0);
    }
  }
  puVar3 = PTR_DAT_069fc218;
  uVar13 = *(undefined4 *)(param_4 + 0x148);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar8 = System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo;
  puVar7 = PTR_DAT_06a0f1a0;
  puVar6 = PTR_DAT_069ff2f8;
  puVar5 = PTR_DAT_069fed70;
  uVar11 = FUN_05681520(uVar13);
  **(undefined1 **)(*(long *)puVar4 + 0xb8) = uVar11;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar10 = System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo;
  puVar9 = System_Collections_Generic_List<XRBaseController>_TypeInfo;
  puVar4 = System_Collections_Generic_IReadOnlyList<OVRSpaceUser>_TypeInfo;
  puVar3 = System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo;
  uVar16 = FUN_06305184(0);
  uVar17 = FUN_0630504c(0);
  uVar16 = FUN_0536d554(uVar16,*(undefined8 *)puVar6,uVar17,0);
  uVar17 = FUN_06304ddc(0);
  uVar18 = FUN_06304ca4(0);
  uVar17 = FUN_0536dcdc(*(undefined8 *)puVar5,uVar17,*(undefined8 *)puVar8,uVar18,0);
  iVar14 = FUN_05686898();
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar7);
  }
  FUN_05645350(&local_348,uVar17,iVar14,0);
  memcpy(auStack_1b8,&local_348,0x158);
  local_190 = *(undefined4 *)(param_4 + 0x148);
  local_180 = 0;
  local_194 = local_194 | 8;
  uVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_05656090(uVar17,0,*(undefined8 *)puVar9,0);
  local_160[0] = uVar17;
  LeanTween__value(local_160,uVar17);
  uVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_05655f0c(uVar17,0,*(undefined8 *)puVar10,0);
  local_138 = uVar17;
  LeanTween__value(&local_138,uVar17);
  local_128 = *(undefined8 *)(param_4 + 0x110);
  local_130 = 0;
  LeanTween__value(&local_128);
  uStack_110 = *(undefined8 *)(param_4 + 0x60);
  local_118 = *(undefined8 *)(param_4 + 0x58);
  local_108 = *(undefined8 *)(param_4 + 0x68);
  local_140 = 0;
  local_120 = 1;
  local_d0[0] = uVar16;
  LeanTween__value(local_d0,uVar16);
  if (DAT_06db4c74 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    DAT_06db4c74 = '\x01';
  }
  puVar3 = PTR_DAT_069fb978;
  local_1c8 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0x3c);
  uVar13 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0x44);
  local_1c0 = uVar13;
  local_f4 = FUN_056427e4(&local_1c8,0);
  local_f0 = uVar13;
  local_ec = param_3;
  if (DAT_06db4c76 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    DAT_06db4c76 = '\x01';
  }
  puVar5 = System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo;
  puVar4 = System_Collections_Generic_IReadOnlyList<OVRSpatialAnchor>_TypeInfo;
  lVar19 = *(long *)(*(long *)puVar3 + 0xb8);
  local_1c8 = *(undefined8 *)(lVar19 + 0x18);
  uVar13 = *(undefined4 *)(lVar19 + 0x20);
  local_1c0 = uVar13;
  local_e8 = FUN_056427e4(&local_1c8,0);
  local_e4 = uVar13;
  local_e0 = param_3;
  if (DAT_06db4c73 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    DAT_06db4c73 = '\x01';
  }
  puVar6 = System_Collections_Generic_List<XRControllerState>_TypeInfo;
  lVar19 = *(long *)(*(long *)puVar3 + 0xb8);
  local_1c8 = *(undefined8 *)(lVar19 + 0x48);
  uVar13 = *(undefined4 *)(lVar19 + 0x50);
  local_1c0 = uVar13;
  local_dc = FUN_056427e4(&local_1c8,0);
  local_d8 = uVar13;
  local_d4 = param_3;
  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_056558ac(uVar16,0,*(undefined8 *)puVar5,0);
  local_98[0] = uVar16;
  LeanTween__value(local_98,uVar16);
  local_194 = local_194 & 0xe40401df | 0xbf8fe00;
  uVar15 = FUN_05697660(local_98[0],local_180,0);
  if ((uVar15 & 1) != 0) {
    uVar16 = FUN_05697c18(0);
    *(undefined8 *)(param_4 + 0x1a0) = uVar16;
    LeanTween__value(param_4 + 0x1a0,uVar16);
    uVar16 = FUN_05698184(0);
    *(undefined8 *)(param_4 + 0x1a8) = uVar16;
    LeanTween__value(param_4 + 0x1a8,uVar16);
    uVar16 = OVRPlugin_Qpl_Annotation_Builder__Add(0);
    *(undefined8 *)(param_4 + 0x1b0) = uVar16;
    LeanTween__value(param_4 + 0x1b0,uVar16);
    uVar16 = FUN_05698008(0);
    *(undefined8 *)(param_4 + 0x1b8) = uVar16;
    LeanTween__value(param_4 + 0x1b8,uVar16);
    uVar16 = FUN_05697e8c(0);
    *(undefined8 *)(param_4 + 0x178) = uVar16;
    LeanTween__value(param_4 + 0x178,uVar16);
  }
  FUN_0442ad50(*(undefined8 *)puVar6);
  if (((0x2c < *(int *)(param_4 + 0x268)) && ((*(byte *)(param_4 + 0x254) >> 2 & 1) != 0)) ||
     ((uVar15 = FUN_0568cf08(param_4), (uVar15 & 1) != 0 &&
      ((*(byte *)(param_4 + 0x254) >> 3 & 1) != 0)))) {
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar15 = FUN_0564f908(0);
    if ((uVar15 & 1) != 0) {
      if (*(int *)(param_4 + 0x268) < 0x2d) {
        bVar12 = 0;
      }
      else {
        bVar12 = *(byte *)(param_4 + 0x254) >> 2 & 1;
      }
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo
                                 );
      FUN_0569c178(uVar16,bVar12,0);
      *(undefined8 *)(param_4 + 400) = uVar16;
      LeanTween__value(param_4 + 400,uVar16);
    }
  }
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  bVar12 = OVRHapticsClip__set_Samples(auStack_1b8,0);
  if (DAT_06dbc7a0 == '\0') {
    FUN_02d965b8(System_Func<float,_float,_float,_float>_TypeInfo);
    DAT_06dbc7a0 = '\x01';
  }
  puVar3 = System_Func<float,_float,_float,_float>_TypeInfo;
  bVar12 = bVar12 & 1;
  **(byte **)(*(long *)System_Func<float,_float,_float,_float>_TypeInfo + 0xb8) = bVar12;
  puVar2 = (undefined8 *)System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo;
  if (DAT_06dbbb4d == '\0') {
    FUN_02d965b8(puVar3);
    DAT_06dbbb4d = '\x01';
    bVar12 = **(byte **)(*(long *)puVar3 + 0xb8);
    puVar2 = (undefined8 *)System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo;
  }
  if (bVar12 == 0) {
    System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo = (undefined *)puVar2;
    return;
  }
  uVar1 = iVar14 - 1;
  if (4 < uVar1) {
    uVar1 = 0xffffffff;
  }
  System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo = (undefined *)puVar2;
  *(int *)(param_4 + 0x24) = iVar14;
  *(uint *)(param_4 + 0x28) = uVar1;
  FUN_05683d48(param_4);
  FUN_0442ad50(*puVar2);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05645c14(DAT_010fd060,0);
  puVar8 = System_Collections_Generic_List<X509Extension>_TypeInfo;
  puVar6 = PTR_DAT_069fda90;
  puVar5 = PTR_DAT_069fda80;
  puVar4 = PTR_DAT_069fda78;
  puVar3 = PTR_DAT_069fb990;
  if (*(long *)(param_4 + 0x80) != 0) {
    FUN_04010c90(&local_348,*(long *)(param_4 + 0x80),*(undefined8 *)PTR_DAT_069fda90);
    local_1d0 = local_338;
    puStack_1d8 = puStack_340;
    local_1e0 = local_348;
    local_348 = 0;
    puStack_340 = &local_1e0;
    while (uVar15 = FUN_05156804(&local_1e0,*(undefined8 *)puVar5), uVar16 = local_1d0,
          (uVar15 & 1) != 0) {
      FUN_05683f30(param_4,local_1d0,1);
      FUN_05683f30(param_4,uVar16,2);
    }
    FUN_05156800(&local_1e0,*(undefined8 *)puVar4);
    if (*(long *)(param_4 + 0x88) != 0) {
      FUN_04010c90(&local_348,*(long *)(param_4 + 0x88),*(undefined8 *)puVar6);
      local_1d0 = local_338;
      puStack_1d8 = puStack_340;
      local_1e0 = local_348;
      local_348 = 0;
      puStack_340 = &local_1e0;
      while (uVar15 = FUN_05156804(&local_1e0,*(undefined8 *)puVar5), (uVar15 & 1) != 0) {
        FUN_05684124(param_4,local_1d0);
      }
      FUN_05156800(&local_1e0,*(undefined8 *)puVar4);
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
      FUN_0567ea6c();
      *(undefined8 *)(param_4 + 0x198) = uVar16;
      LeanTween__value(param_4 + 0x198,uVar16);
      uVar16 = *(undefined8 *)(param_4 + 0x128);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar15 = FUN_06350670(uVar16,0,0);
      if ((uVar15 & 1) != 0) {
        lVar19 = FUN_0634bbcc(param_4,0);
        if (lVar19 == 0) goto LAB_05683a58;
        uVar16 = FUN_0364c220(lVar19,*(undefined8 *)
                                      System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
        *(undefined8 *)(param_4 + 0x128) = uVar16;
        LeanTween__value(param_4 + 0x128,uVar16);
      }
      lVar19 = *(long *)puVar7;
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar19 = *(long *)puVar7;
      }
      lVar19 = *(long *)(lVar19 + 0xb8);
      if (-1 < *(int *)(param_4 + 0x70)) {
        *(int *)(lVar19 + 0x28) = *(int *)(param_4 + 0x70);
      }
      if (-1 < *(int *)(param_4 + 0x74)) {
        *(int *)(lVar19 + 0x34) = *(int *)(param_4 + 0x74);
      }
      if (-1 < *(int *)(param_4 + 0x78)) {
        *(int *)(lVar19 + 0x38) = *(int *)(param_4 + 0x78);
      }
      if (-1 < *(int *)(param_4 + 0x7c)) {
        *(int *)(lVar19 + 0x3c) = *(int *)(param_4 + 0x7c);
      }
      FUN_056841a8(param_4);
      return;
    }
  }
LAB_05683a58:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


