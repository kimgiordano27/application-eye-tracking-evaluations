/*
FUNCTION_NAME: OVRPlugin$$.cctor
ENTRY_POINT: 05683304
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05683a28) */

void OVRPlugin___cctor(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined4 in_stack_00000190;
  undefined8 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  
  FUN_02d965b8(PTR_DAT_06a0e8c0);
  *(undefined1 *)(unaff_x23 + 0x79f) = 1;
  lVar15 = *unaff_x20;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar15 = *unaff_x20;
  }
  **(uint **)(lVar15 + 0xb8) = unaff_w22 & 0xffff;
  puVar4 = PTR_DAT_069fc218;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x148);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar7 = System_Collections_Generic_List<XRDisplaySubsystemDescriptor>_TypeInfo;
  puVar8 = PTR_DAT_06a0f1a0;
  puVar6 = PTR_DAT_069ff2f8;
  puVar5 = PTR_DAT_069fed70;
  uVar12 = FUN_05681520(uVar1);
  **(undefined1 **)(*unaff_x21 + 0xb8) = uVar12;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar11 = System_Collections_Generic_List<XRBaseGrabTransformer>_TypeInfo;
  puVar10 = System_Collections_Generic_List<XRBaseController>_TypeInfo;
  puVar9 = System_Collections_Generic_IReadOnlyList<OVRSpaceUser>_TypeInfo;
  puVar4 = System_Collections_Generic_IReadOnlyList<InputDevice>_TypeInfo;
  uVar16 = FUN_06305184(0);
  uVar17 = FUN_0630504c(0);
  uVar16 = FUN_0536d554(uVar16,*(undefined8 *)puVar6,uVar17,0);
  uVar17 = FUN_06304ddc(0);
  uVar18 = FUN_06304ca4(0);
  uVar17 = FUN_0536dcdc(*(undefined8 *)puVar5,uVar17,*(undefined8 *)puVar7,uVar18,0);
  iVar14 = FUN_05686898();
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)puVar8);
  }
  FUN_05645350(&stack0x00000008,uVar17,iVar14,0);
  memcpy(&stack0x00000198,&stack0x00000008,0x158);
  in_stack_000001c0 = *(undefined4 *)(unaff_x19 + 0x148);
  in_stack_000001d0 = 0;
  in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ | 8;
  uVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_05656090(uVar17,0,*(undefined8 *)puVar10,0);
  LeanTween__value(&stack0x000001f0,uVar17);
  uVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
  FUN_05655f0c(uVar17,0,*(undefined8 *)puVar11,0);
  LeanTween__value(&stack0x00000218,uVar17);
  LeanTween__value(&stack0x00000228);
  LeanTween__value(&stack0x00000280,uVar16);
  if (DAT_06db4c74 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    DAT_06db4c74 = '\x01';
  }
  puVar4 = PTR_DAT_069fb978;
  in_stack_00000188 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0x3c);
  in_stack_00000190 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_069fb978 + 0xb8) + 0x44);
  FUN_056427e4(&stack0x00000188,0);
  if (DAT_06db4c76 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    DAT_06db4c76 = '\x01';
  }
  puVar6 = System_Collections_Generic_List<XRAnchorSubsystemDescriptor>_TypeInfo;
  puVar5 = System_Collections_Generic_IReadOnlyList<OVRSpatialAnchor>_TypeInfo;
  lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
  in_stack_00000188 = *(undefined8 *)(lVar15 + 0x18);
  in_stack_00000190 = *(undefined4 *)(lVar15 + 0x20);
  FUN_056427e4(&stack0x00000188,0);
  if (DAT_06db4c73 == '\0') {
    FUN_02d965b8(PTR_DAT_069fb978);
    DAT_06db4c73 = '\x01';
  }
  puVar7 = System_Collections_Generic_List<XRControllerState>_TypeInfo;
  lVar15 = *(long *)(*(long *)puVar4 + 0xb8);
  in_stack_00000188 = *(undefined8 *)(lVar15 + 0x48);
  in_stack_00000190 = *(undefined4 *)(lVar15 + 0x50);
  FUN_056427e4(&stack0x00000188,0);
  uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_056558ac(uVar16,0,*(undefined8 *)puVar6,0);
  LeanTween__value(&stack0x000002b8,uVar16);
  in_stack_000001b8._4_4_ = in_stack_000001b8._4_4_ & 0xe40401df | 0xbf8fe00;
  uVar19 = FUN_05697660(uVar16,in_stack_000001d0,0);
  if ((uVar19 & 1) != 0) {
    uVar16 = FUN_05697c18(0);
    *(undefined8 *)(unaff_x19 + 0x1a0) = uVar16;
    LeanTween__value(unaff_x19 + 0x1a0,uVar16);
    uVar16 = FUN_05698184(0);
    *(undefined8 *)(unaff_x19 + 0x1a8) = uVar16;
    LeanTween__value(unaff_x19 + 0x1a8,uVar16);
    uVar16 = OVRPlugin_Qpl_Annotation_Builder__Add(0);
    *(undefined8 *)(unaff_x19 + 0x1b0) = uVar16;
    LeanTween__value(unaff_x19 + 0x1b0,uVar16);
    uVar16 = FUN_05698008(0);
    *(undefined8 *)(unaff_x19 + 0x1b8) = uVar16;
    LeanTween__value(unaff_x19 + 0x1b8,uVar16);
    uVar16 = FUN_05697e8c(0);
    *(undefined8 *)(unaff_x19 + 0x178) = uVar16;
    LeanTween__value(unaff_x19 + 0x178,uVar16);
  }
  FUN_0442ad50(*(undefined8 *)puVar7);
  if (((0x2c < *(int *)(unaff_x19 + 0x268)) && ((*(byte *)(unaff_x19 + 0x254) >> 2 & 1) != 0)) ||
     ((uVar19 = FUN_0568cf08(), (uVar19 & 1) != 0 && ((*(byte *)(unaff_x19 + 0x254) >> 3 & 1) != 0))
     )) {
    if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar19 = FUN_0564f908(0);
    if ((uVar19 & 1) != 0) {
      if (*(int *)(unaff_x19 + 0x268) < 0x2d) {
        bVar13 = 0;
      }
      else {
        bVar13 = *(byte *)(unaff_x19 + 0x254) >> 2 & 1;
      }
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   System_Collections_Generic_List<XRCameraSubsystemDescriptor>_TypeInfo
                                 );
      FUN_0569c178(uVar16,bVar13,0);
      *(undefined8 *)(unaff_x19 + 400) = uVar16;
      LeanTween__value(unaff_x19 + 400,uVar16);
    }
  }
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  bVar13 = OVRHapticsClip__set_Samples(&stack0x00000198,0);
  if (DAT_06dbc7a0 == '\0') {
    FUN_02d965b8(System_Func<float,_float,_float,_float>_TypeInfo);
    DAT_06dbc7a0 = '\x01';
  }
  puVar4 = System_Func<float,_float,_float,_float>_TypeInfo;
  bVar13 = bVar13 & 1;
  **(byte **)(*(long *)System_Func<float,_float,_float,_float>_TypeInfo + 0xb8) = bVar13;
  puVar3 = (undefined8 *)System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo;
  if (DAT_06dbbb4d == '\0') {
    FUN_02d965b8(puVar4);
    DAT_06dbbb4d = '\x01';
    bVar13 = **(byte **)(*(long *)puVar4 + 0xb8);
    puVar3 = (undefined8 *)System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo;
  }
  if (bVar13 == 0) {
    System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo = (undefined *)puVar3;
    return;
  }
  uVar2 = iVar14 - 1;
  if (4 < uVar2) {
    uVar2 = 0xffffffff;
  }
  System_Collections_Generic_List<XRDisplaySubsystem>_TypeInfo = (undefined *)puVar3;
  *(int *)(unaff_x19 + 0x24) = iVar14;
  *(uint *)(unaff_x19 + 0x28) = uVar2;
  FUN_05683d48();
  FUN_0442ad50(*puVar3);
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05645c14(DAT_010fd060,0);
  puVar9 = System_Collections_Generic_List<X509Extension>_TypeInfo;
  puVar7 = PTR_DAT_069fda90;
  puVar6 = PTR_DAT_069fda80;
  puVar5 = PTR_DAT_069fda78;
  puVar4 = PTR_DAT_069fb990;
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    FUN_04010c90(&stack0x00000008,*(long *)(unaff_x19 + 0x80),*(undefined8 *)PTR_DAT_069fda90);
    in_stack_00000180 = in_stack_00000018;
    in_stack_00000178 = in_stack_00000010;
    in_stack_00000170 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000170;
    while (uVar19 = FUN_05156804(&stack0x00000170,*(undefined8 *)puVar6), (uVar19 & 1) != 0) {
      FUN_05683f30();
      FUN_05683f30();
    }
    FUN_05156800(&stack0x00000170,*(undefined8 *)puVar5);
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      FUN_04010c90(&stack0x00000008,*(long *)(unaff_x19 + 0x88),*(undefined8 *)puVar7);
      in_stack_00000180 = in_stack_00000018;
      in_stack_00000178 = in_stack_00000010;
      in_stack_00000170 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000170;
      while (uVar19 = FUN_05156804(&stack0x00000170,*(undefined8 *)puVar6), (uVar19 & 1) != 0) {
        FUN_05684124();
      }
      FUN_05156800(&stack0x00000170,*(undefined8 *)puVar5);
      uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
      FUN_0567ea6c();
      *(undefined8 *)(unaff_x19 + 0x198) = uVar16;
      LeanTween__value(unaff_x19 + 0x198,uVar16);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x128);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar19 = FUN_06350670(uVar16,0,0);
      if ((uVar19 & 1) != 0) {
        lVar15 = FUN_0634bbcc();
        if (lVar15 == 0) goto LAB_05683a58;
        uVar16 = FUN_0364c220(lVar15,*(undefined8 *)
                                      System_Collections_Generic_List<X509ChainStatus>_TypeInfo);
        *(undefined8 *)(unaff_x19 + 0x128) = uVar16;
        LeanTween__value(unaff_x19 + 0x128,uVar16);
      }
      lVar15 = *(long *)puVar8;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar15 = *(long *)puVar8;
      }
      lVar15 = *(long *)(lVar15 + 0xb8);
      if (-1 < *(int *)(unaff_x19 + 0x70)) {
        *(int *)(lVar15 + 0x28) = *(int *)(unaff_x19 + 0x70);
      }
      if (-1 < *(int *)(unaff_x19 + 0x74)) {
        *(int *)(lVar15 + 0x34) = *(int *)(unaff_x19 + 0x74);
      }
      if (-1 < *(int *)(unaff_x19 + 0x78)) {
        *(int *)(lVar15 + 0x38) = *(int *)(unaff_x19 + 0x78);
      }
      if (-1 < *(int *)(unaff_x19 + 0x7c)) {
        *(int *)(lVar15 + 0x3c) = *(int *)(unaff_x19 + 0x7c);
      }
      FUN_056841a8();
      return;
    }
  }
LAB_05683a58:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


