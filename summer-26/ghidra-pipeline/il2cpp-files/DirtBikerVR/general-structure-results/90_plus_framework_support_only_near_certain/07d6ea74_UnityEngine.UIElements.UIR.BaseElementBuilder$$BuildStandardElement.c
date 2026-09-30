/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.BaseElementBuilder$$BuildStandardElement
ENTRY_POINT: 07d6ea74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_9;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_9
*/


void UnityEngine_UIElements_UIR_BaseElementBuilder__BuildStandardElement(void)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  ulong uVar33;
  undefined1 *puVar34;
  char cVar35;
  undefined1 uVar36;
  uint uVar37;
  uint uVar38;
  float *pfVar39;
  float *pfVar40;
  int *piVar41;
  long *plVar42;
  long lVar43;
  long unaff_x19;
  long *plVar44;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar45;
  uint uVar46;
  uint *puVar47;
  int iVar48;
  long *unaff_x29;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float unaff_s8;
  float fVar67;
  float fVar68;
  float unaff_s9;
  float fVar69;
  float unaff_s10;
  float fVar70;
  float fVar71;
  float fVar72;
  float unaff_s12;
  float fVar73;
  float unaff_s13;
  float fVar74;
  float fVar75;
  float fVar76;
  int iStack000000000000000c;
  long in_stack_00000018;
  int in_stack_00000028;
  float *in_stack_00000040;
  long *in_stack_00000090;
  undefined8 *in_stack_000000c8;
  float fStack00000000000000d0;
  long *in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack0000000000000100;
  float fStack000000000000013c;
  long in_stack_00000140;
  long *in_stack_00000148;
  float fStack0000000000000150;
  uint in_stack_000010fc;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  undefined8 in_stack_00001190;
  
  fVar49 = (float)FUN_07d532bc();
  puVar13 = Unity_Services_CloudSave_Internal_Models_GetFileMetadata400OneOf_<>c_TypeInfo;
  if (*unaff_x29 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  fVar50 = (float)FUN_07d532ec(*unaff_x29 + 0xb0,0);
  fVar10 = DAT_015c5b20;
  fVar49 = unaff_s10 - (fVar49 - fVar50);
  *(undefined8 *)(unaff_x22 + 0x2f4) = 0;
  *(undefined8 *)(unaff_x22 + 0x300) = 0;
  puVar12 = Unity_Services_Qos_QosDiscovery_GetServiceServersRequest_<>c_TypeInfo;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar49 = (float)(int)(fVar49 + fVar10);
  }
  *(undefined4 *)(unaff_x22 + 0x308) = 0;
  FUN_05913330(ZEXT816(0),unaff_x22 + 0x310,*(undefined8 *)puVar12);
  puVar47 = (uint *)(unaff_x22 + 0x334);
  puVar47[0] = 0;
  uVar7 = DAT_015c4680;
  puVar47[1] = 0;
  *(undefined4 *)(unaff_x22 + 0x344) = 0;
  *(undefined8 *)(unaff_x22 + 0x33c) = 0;
  *(undefined8 *)(unaff_x22 + 0x358) = 0xffffffff00000000;
  lVar27 = *(long *)puVar13;
  *(undefined1 *)(unaff_x22 + 0x330) = 0;
  *(undefined8 *)(unaff_x22 + 0x348) = uVar7;
  *(undefined4 *)(unaff_x22 + 0x15b8) = 0;
  *(undefined8 *)(unaff_x22 + 0x350) = 0;
  *(undefined1 *)(unaff_x22 + 0x2f0) = 0;
  *(undefined4 *)(unaff_x22 + 0x19cc) = 0x80000000;
  if (*(int *)(lVar27 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar27 = *(long *)puVar13;
  }
  puVar12 = RootMotion_FinalIK_GenericPoser_Map_TypeInfo;
  lVar27 = *(long *)(*(long *)(lVar27 + 0xb8) + 0x10);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar18 = FUN_04ec264c(lVar27,0x6b65726e,
                        *(undefined8 *)RootMotion_FinalIK_GenericPoser_Map_TypeInfo);
  lVar27 = *(long *)(*(long *)(*(long *)puVar13 + 0xb8) + 0x10);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar19 = FUN_04ec264c(lVar27,0x6d61726b,*(undefined8 *)puVar12);
  puVar11 = UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo;
  lVar27 = *(long *)(*(long *)(*(long *)puVar13 + 0xb8) + 0x10);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar20 = FUN_04ec264c(lVar27,0x6d6b6d6b,*(undefined8 *)puVar12);
  lVar27 = *(long *)puVar11;
  *(undefined4 *)(unaff_x22 + 0x368) = 0xbf800000;
  fVar50 = *(float *)(unaff_x22 + 0x58);
  fVar70 = *(float *)(unaff_x22 + 0x5c);
  *(undefined8 *)(unaff_x22 + 0x360) = 0;
  if (*(int *)(lVar27 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar27);
    lVar27 = *(long *)puVar11;
  }
  *(undefined8 *)(unaff_x22 + 0x36c) = **(undefined8 **)(lVar27 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x374) = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 8);
  puVar13 = Unity_Services_CloudSave_Internal_Data_GetItemsRequest_<>c_TypeInfo;
  if (unaff_x19 == 0) goto LAB_07d72adc;
  FUN_07d95bf0();
  *(undefined8 *)(unaff_x22 + 0x37c) = 0;
  *(undefined4 *)(unaff_x22 + 900) = 0;
  *(undefined4 *)(unaff_x22 + 0x19d0) = 0;
  *in_stack_00000040 = 0.0;
  *(undefined1 *)(unaff_x22 + 0x388) = 0;
  FUN_07d8c610(&stack0x00001190,0xffffffff,0,0);
  uVar3 = *(uint *)(in_stack_00000140 + 0x98);
  FUN_07d79804();
  FUN_07d79804();
  FUN_07d79804();
  FUN_07d79804();
  FUN_07d79804();
  FUN_0591393c(unaff_x22 + 0x15f0,*(undefined8 *)puVar13);
  lVar27 = *(long *)(unaff_x22 + 0x20);
  *(undefined1 *)(unaff_x22 + 0x4d) = 0;
  fVar9 = DAT_015c5994;
  fVar8 = DAT_015c5798;
  uVar77 = 0;
  if (lVar27 == 0) goto LAB_07d72adc;
  iStack000000000000000c = 0;
  fVar65 = unaff_s12 * DAT_015c5994;
  pcVar1 = (char *)(unaff_x22 + 0x1588);
  if (fVar50 <= 0.0) {
    fVar50 = 0.0;
  }
  iVar48 = 0;
  bVar6 = false;
  uVar5 = in_stack_00000028 - 1;
  fVar50 = fVar50 + DAT_015c5c68;
  fVar76 = (unaff_s13 / unaff_s9) * unaff_s8;
  fVar70 = fVar70 + DAT_015c5c68;
  bVar15 = true;
  bVar2 = 1;
  fStack000000000000013c = 0.0;
  fVar51 = fVar76;
  fStack0000000000000100 = fVar50;
LAB_07d6edd8:
  if ((int)*(uint *)(lVar27 + 0x18) <= (int)uVar77) {
LAB_07d72ae0:
    FUN_07d797b8();
    return;
  }
  if (*(uint *)(lVar27 + 0x18) <= uVar77) goto LAB_07d72b20;
  uVar21 = *(uint *)(lVar27 + (long)(int)uVar77 * 0x10 + 0x24);
  if (uVar21 == 0) goto LAB_07d72ae0;
  *unaff_x21 = uVar21;
  if (5 < iVar48) {
    uVar28 = FUN_0676d8dc();
    uVar29 = FUN_0674e2a4(&stack0x0000112c,0);
    uVar28 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar28,
                          *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar29,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4fb40(uVar28,0);
    uVar21 = *unaff_x21;
    in_stack_00001190 = CONCAT44(3,*puVar47);
  }
  if (uVar21 == 0x1a) goto LAB_07d72ac8;
  if ((uVar21 == 0x3c) && (*(char *)(in_stack_00000140 + 0x81) != '\0')) {
    pcVar1[0] = '\x01';
    pcVar1[1] = '\x01';
    uVar30 = FUN_07d74ca8();
    if (((uVar30 & 1) != 0) && (uVar77 = in_stack_000010fc, *pcVar1 == '\x01')) goto LAB_07d72ac8;
  }
  else {
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    *pcVar1 = *(char *)(lVar27 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar27 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar27 + 0x40);
    thunk_FUN_03afed3c(unaff_x29);
  }
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar26 = *(uint *)(unaff_x22 + 0x334);
  uVar21 = *(uint *)(lVar27 + 0x18);
  if (uVar21 <= uVar26) goto LAB_07d72b20;
  lVar43 = lVar27 + 0x20;
  uVar78 = (uint)in_stack_00001190;
  uVar57 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar35 = *(char *)(lVar43 + (long)(int)uVar26 * 0x178 + 0x3c);
  *(undefined1 *)(unaff_x22 + 0x1589) = 0;
  if (uVar78 == uVar26) {
    uVar24 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar24;
    *pcVar1 = '\x01';
    if (uVar24 != 0x2026) {
      if (uVar24 != 3) goto LAB_07d6efec;
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      uVar21 = *puVar47;
      lVar31 = FUN_07d61598(*unaff_x29,0);
      if (lVar31 == 0) goto LAB_07d72adc;
      uVar28 = FUN_060344a4(lVar31,3,*(undefined8 *)
                                      System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                           );
      if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
      *(undefined8 *)(lVar43 + (long)(int)uVar21 * 0x178 + 0x10) = uVar28;
      thunk_FUN_03afed3c();
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      goto LAB_07d6efec;
    }
    if (uVar21 <= *puVar47) goto LAB_07d72b20;
    *(undefined8 *)(lVar43 + (long)(int)*puVar47 * 0x178 + 0x10) =
         *(undefined8 *)(unaff_x22 + 0x19f8);
    thunk_FUN_03afed3c();
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    *(undefined8 *)(lVar27 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
    *(undefined1 *)(lVar27 + 0x28) = 1;
    thunk_FUN_03afed3c();
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    *(undefined8 *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x50) =
         *(undefined8 *)(unaff_x22 + 0x1a08);
    thunk_FUN_03afed3c();
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    *(undefined4 *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x58) =
         *(undefined4 *)(unaff_x22 + 0x1a10);
    lVar27 = *(long *)(unaff_x22 + 0x15c0);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
    *(int *)(lVar27 + 0x54) = *(int *)(lVar27 + 0x54) + 1;
    uVar21 = *(uint *)(unaff_x22 + 0x334);
    *(undefined1 *)(unaff_x22 + 0x4d) = 1;
    in_stack_00001190 = CONCAT44(3,uVar21 + 1);
  }
  else {
LAB_07d6efec:
    uVar21 = *puVar47;
  }
  if (((int)uVar21 < 0) && (*unaff_x21 != 3)) {
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)uVar21 * 0x178;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined4 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *puVar47 = uVar21 + 1;
  }
  else {
    cVar4 = *pcVar1;
    if (cVar4 == '\x01') {
      uVar21 = *(uint *)(unaff_x22 + 300);
      if ((uVar21 >> 4 & 1) == 0) {
        if ((uVar21 >> 3 & 1) == 0) {
          fVar64 = 1.0;
          if ((uVar21 >> 5 & 1) != 0) {
            uVar21 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar30 = FUN_066bbc7c(uVar21,0);
            fVar64 = 1.0;
            if ((uVar30 & 1) != 0) {
              uVar21 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar21 = FUN_066bbf04(uVar21,0);
              fVar64 = fVar8;
              goto LAB_07d6f260;
            }
          }
        }
        else {
          uVar21 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar30 = FUN_066bbbdc(uVar21,0);
          fVar64 = 1.0;
          if ((uVar30 & 1) != 0) {
            uVar21 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar21 = FUN_066bc07c(uVar21,0);
            goto LAB_07d6f25c;
          }
        }
      }
      else {
        uVar21 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar30 = FUN_066bbc7c(uVar21,0);
        fVar64 = 1.0;
        if ((uVar30 & 1) != 0) {
          uVar21 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar21 = FUN_066bbf04(uVar21,0);
LAB_07d6f25c:
          fVar64 = 1.0;
LAB_07d6f260:
          *unaff_x21 = uVar21 & 0xffff;
        }
      }
      cVar4 = *pcVar1;
    }
    else {
      fVar64 = 1.0;
    }
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (cVar4 == '\x01') {
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
      *(undefined8 *)(unaff_x22 + 0x1598) =
           *(undefined8 *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x30);
      thunk_FUN_03afed3c(unaff_x22 + 0x1598);
      if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
      *unaff_x29 = *(long *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x40);
      thunk_FUN_03afed3c(unaff_x29);
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
      *in_stack_00000090 = *(long *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x50);
      thunk_FUN_03afed3c();
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      uVar24 = *puVar47;
      uVar21 = *(uint *)(lVar27 + 0x18);
      if (uVar21 <= uVar24) goto LAB_07d72b20;
      *(undefined4 *)(unaff_x22 + 0x78) =
           *(undefined4 *)(lVar27 + 0x20 + (long)(int)uVar24 * 0x178 + 0x38);
      if (uVar78 == uVar26) {
        lVar43 = *(long *)(unaff_x22 + 0x20);
        if (lVar43 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar43 + 0x18) <= uVar77) goto LAB_07d72b20;
        if ((*(int *)(lVar43 + (long)(int)uVar77 * 0x10 + 0x24) != 10) ||
           (uVar24 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
        if (uVar21 <= uVar24 - 1) goto LAB_07d72b20;
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar69 = *(float *)(lVar27 + 0x20 + (long)(int)(uVar24 - 1) * 0x178 + 0x40);
        fVar51 = (float)FUN_07d5328c(*unaff_x29 + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar52 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
        fVar52 = ((fVar64 * fVar69) / fVar51) * fVar52;
LAB_07d6f900:
        fStack00000000000000f4 = 0.0;
        fStack00000000000000f8 = 0.0;
        if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
      }
      else {
LAB_07d6f408:
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar69 = *(float *)(unaff_x22 + 0xf8);
        fVar51 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar52 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
        fVar52 = ((fVar64 * fVar69) / fVar51) * fVar52;
        if (uVar78 == uVar26) goto LAB_07d6f900;
LAB_07d6f918:
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fStack00000000000000f8 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fStack00000000000000f4 = (float)FUN_07d532ec(*unaff_x29 + 0xb0,0);
      }
      lVar27 = *(long *)(unaff_x22 + 0x1598);
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_07d72adc;
      fVar51 = *(float *)(unaff_x22 + 0xf0);
      fVar69 = *(float *)(lVar27 + 0x2c);
      fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar27 + 0x20),0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar53 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar54 = *(float *)(unaff_x22 + 0xf0);
      fVar56 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
      lVar27 = *(long *)(unaff_x19 + 0x30);
      fVar56 = fVar52 * fVar53 * fVar54 * fVar56;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar56 = (float)(int)(fVar56 + fVar10);
      }
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
      lVar43 = lVar27 + (long)(int)*puVar47 * 0x178;
      *(undefined1 *)(lVar43 + 0x28) = 1;
      fStack00000000000000e8 = fVar52 * fVar51 * fVar69 * fStack00000000000000e8;
      *(float *)(lVar43 + 0x160) = fStack00000000000000e8;
      fStack000000000000013c = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
      uVar21 = *unaff_x21;
      fVar69 = 0.0;
      if (uVar21 != 3 && uVar21 != 0xad) {
        fVar69 = fStack00000000000000e8;
      }
    }
    else {
      if (cVar4 == '\x02') {
        if (lVar27 != 0) {
          if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
          plVar44 = *(long **)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x30);
          if (plVar44 != (long *)0x0) {
            bVar16 = *(byte *)(*(long *)
                                Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                              + 0x130);
            if ((*(byte *)(*plVar44 + 0x130) < bVar16) ||
               (*(long *)(*(long *)(*plVar44 + 200) + (ulong)bVar16 * 8 + -8) !=
                *(long *)
                 Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar44);
            }
            plVar32 = (long *)FUN_07d8466c(plVar44,0);
            if (plVar32 == (long *)0x0) {
              plVar32 = (long *)0x0;
              *in_stack_000000e0 = 0;
            }
            else {
              lVar27 = *(long *)
                        Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
              bVar16 = *(byte *)(lVar27 + 0x130);
              if (*(byte *)(*plVar32 + 0x130) < bVar16) {
                plVar42 = (long *)0x0;
              }
              else {
                plVar42 = plVar32;
                if (*(long *)(*(long *)(*plVar32 + 200) + (ulong)bVar16 * 8 + -8) != lVar27) {
                  plVar42 = (long *)0x0;
                }
              }
              *in_stack_000000e0 = (long)plVar42;
              if (*(byte *)(*plVar32 + 0x130) < bVar16) {
                plVar32 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar32 + 200) + (ulong)bVar16 * 8 + -8) != lVar27) {
                plVar32 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(in_stack_000000e0,plVar32);
            iVar22 = FUN_07d85970(plVar44,0);
            *(int *)(unaff_x22 + 0x158c) = iVar22;
            if (*unaff_x21 == 0x3c) {
              *unaff_x21 = iVar22 + 0xe000;
            }
            else {
              uVar23 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0)
              ;
              *(undefined4 *)(unaff_x22 + 0x1590) = uVar23;
            }
            if (*(long *)(unaff_x22 + 0x68) != 0) {
              fVar69 = *(float *)(unaff_x22 + 0xf8);
              FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
              memcpy(&stack0x00001130,&stack0x000011a0,0x60);
              fVar51 = (float)FUN_07d5328c(&stack0x00001130,0);
              if (*unaff_x29 != 0) {
                FUN_07d60d20(&stack0x00000170,*unaff_x29,0);
                memcpy(&stack0x00001130,&stack0x00000170,0x60);
                fVar52 = (float)FUN_07d53294(&stack0x00001130,0);
                if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                fVar52 = (fVar69 / fVar51) * fVar52;
                fVar51 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                fVar69 = *(float *)(unaff_x22 + 0xf8);
                if (fVar51 <= 0.0) {
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar51 = (float)FUN_07d5328c(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar53 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
                  if (plVar44[4] == 0) goto LAB_07d72adc;
                  FUN_07d53750(&stack0x000011a0,plVar44[4],0);
                  fVar54 = (float)FUN_07d53580(&stack0x000010e0,0);
                  if (plVar44[4] == 0) goto LAB_07d72adc;
                  fVar67 = *(float *)((long)plVar44 + 0x2c);
                  fVar55 = (float)FUN_07d5378c(plVar44[4],0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar74 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar68 = *(float *)(unaff_x22 + 0xf0);
                  fVar56 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
                  if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (fVar69 / fVar51) * fStack00000000000000f4;
                  fStack00000000000000e8 =
                       fStack00000000000000f4 * (fVar53 / fVar54) * fVar67 * fVar55;
                  fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                  fVar56 = fVar52 * fVar74 * fVar68 * fVar56;
                  fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                  fVar51 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                  fStack00000000000000f4 = fStack00000000000000f4 * fVar51;
                }
                else {
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar51 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar53 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (plVar44[4] == 0) goto LAB_07d72adc;
                  fVar67 = *(float *)((long)plVar44 + 0x2c);
                  fVar54 = (float)FUN_07d5378c(plVar44[4],0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar55 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar74 = *(float *)(unaff_x22 + 0xf0);
                  fVar56 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                  fVar56 = fVar52 * fVar55 * fVar74 * fVar56;
                  fStack00000000000000e8 = (fVar69 / fVar51) * fVar53 * fVar67 * fVar54;
                  fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0)
                  ;
                }
                *(long **)(unaff_x22 + 0x1598) = plVar44;
                thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar44);
                lVar27 = *(long *)(unaff_x19 + 0x30);
                if (lVar27 != 0) {
                  if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
                  lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
                  *(long *)(lVar27 + 0x48) = *in_stack_000000e0;
                  *(undefined1 *)(lVar27 + 0x28) = 2;
                  *(float *)(lVar27 + 0x160) = fStack00000000000000e8;
                  thunk_FUN_03afed3c();
                  lVar27 = *(long *)(unaff_x19 + 0x30);
                  if (lVar27 != 0) {
                    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
                    *(long *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x40) = *unaff_x29;
                    thunk_FUN_03afed3c();
                    lVar27 = *(long *)(unaff_x19 + 0x30);
                    if (lVar27 != 0) {
                      if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
                      *(undefined4 *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x58) =
                           *(undefined4 *)(unaff_x22 + 0x78);
                      fStack000000000000013c = 0.0;
                      *(undefined4 *)(unaff_x22 + 0x78) = uVar57;
                      goto LAB_07d6fa0c;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_07d72adc;
      }
      uVar21 = *unaff_x21;
      fVar69 = 0.0;
      if (uVar21 != 3 && uVar21 != 0xad) {
        fVar69 = fVar51;
      }
      fVar56 = 0.0;
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      fStack00000000000000e8 = fVar51;
      if (lVar27 == 0) goto LAB_07d72adc;
    }
    fVar51 = fVar69;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    *(uint *)(lVar27 + 0x20) = uVar21;
    *(undefined4 *)(lVar27 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
    *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    *(undefined4 *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x168) =
         *(undefined4 *)(unaff_x22 + 0x1b8);
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    *(undefined4 *)(lVar27 + (long)(int)*puVar47 * 0x178 + 0x170) =
         *(undefined4 *)(unaff_x22 + 0x1bc);
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    auVar60 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
    *(undefined4 *)(lVar27 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
    *(long *)(lVar27 + 0x184) = auVar60._8_8_;
    *(long *)(lVar27 + 0x17c) = auVar60._0_8_;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar21 = *(uint *)(unaff_x22 + 0x334);
    uVar24 = *(uint *)(lVar27 + 0x18);
    if (uVar24 <= uVar21) goto LAB_07d72b20;
    lVar43 = lVar27 + 0x20 + (long)(int)uVar21 * 0x178;
    uVar79 = *(uint *)(unaff_x22 + 300);
    *(uint *)(lVar43 + 0x170) = uVar79;
    if (*(int *)(unaff_x22 + 0x13c) == 700) {
      *(uint *)(lVar43 + 0x170) = uVar79 | 1;
      uVar21 = *puVar47;
    }
    if (uVar24 <= uVar21) goto LAB_07d72b20;
    lVar27 = *(long *)(lVar27 + 0x20 + (long)(int)uVar21 * 0x178 + 0x18);
    if (lVar27 == 0) {
      if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
         (lVar27 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar27 == 0)) goto LAB_07d72adc;
      FUN_07d53750(&stack0x000011a0,lVar27,0);
    }
    else {
      FUN_07d53750(&stack0x00000510,lVar27,0);
    }
    uVar21 = *unaff_x21;
    if (uVar21 >> 0x10 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      bVar16 = FUN_066b9610(uVar21,0);
    }
    else {
      bVar16 = 0;
    }
    fVar69 = *(float *)(in_stack_00000140 + 0x8c);
    if (((uVar18 & 1) != 0) && (*pcVar1 == '\x01')) {
      if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
      uVar21 = *puVar47;
      uVar24 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
      if ((int)uVar21 < (int)uVar5) {
        lVar27 = *(long *)(unaff_x19 + 0x30);
        if (lVar27 == 0) goto LAB_07d72adc;
        uVar21 = uVar21 + 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
        if (*(char *)(lVar27 + 0x20 + (long)(int)uVar21 * 0x178 + 8) == '\x01') {
          lVar27 = *(long *)(lVar27 + 0x20 + (long)(int)uVar21 * 0x178 + 0x10);
          if ((((lVar27 == 0) || (*unaff_x29 == 0)) ||
              (lVar43 = *(long *)(*unaff_x29 + 0x170), lVar43 == 0)) ||
             (lVar43 = *(long *)(lVar43 + 0x40), lVar43 == 0)) goto LAB_07d72adc;
          uVar30 = FUN_05ffa6e0(lVar43,uVar24 | *(int *)(lVar27 + 0x28) << 0x10,&stack0x000010b0,
                                *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo)
          ;
          if ((uVar30 & 1) != 0) {
            FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
            FUN_07d57c94(&stack0x00001090,0);
            uVar30 = FUN_07d57e7c(&stack0x000010b0,0);
            if ((uVar30 & 0x100) != 0) {
              fVar69 = 0.0;
            }
          }
        }
        uVar21 = *puVar47;
      }
      uVar79 = uVar21 - 1;
      if (0 < (int)uVar21) {
        lVar27 = *(long *)(unaff_x19 + 0x30);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= uVar79) goto LAB_07d72b20;
        lVar43 = *(long *)(lVar27 + 0x20 + (ulong)uVar79 * 0x178 + 0x10);
        if (lVar43 == 0) goto LAB_07d72adc;
        if (*(char *)(lVar27 + 0x20 + (ulong)uVar79 * 0x178 + 8) == '\x01') {
          if (((*unaff_x29 == 0) || (lVar27 = *(long *)(*unaff_x29 + 0x170), lVar27 == 0)) ||
             (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_07d72adc;
          uVar30 = FUN_05ffa6e0(lVar27,*(uint *)(lVar43 + 0x28) | uVar24 << 0x10,&stack0x000010b0,
                                *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo)
          ;
          if ((uVar30 & 1) != 0) {
            FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
            FUN_07d57c94(&stack0x00001090,0);
            FUN_07d57af4(0);
            uVar30 = FUN_07d57e7c(&stack0x000010b0,0);
            if ((uVar30 & 0x100) != 0) {
              fVar69 = 0.0;
            }
          }
        }
      }
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      uVar21 = *puVar47;
      uVar57 = FUN_07d57ad0(&stack0x00001100,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
      *(undefined4 *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x154) = uVar57;
    }
    uVar21 = *unaff_x21;
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    bVar17 = FUN_07d8fcc4(uVar21,0);
    uVar21 = *puVar47;
    uVar30 = (ulong)uVar21;
    if ((bVar17 & 1) == 0) {
      if (0 < (int)uVar21) {
        if ((((uVar19 & 1) == 0) || (uVar24 = *(uint *)(unaff_x22 + 0x19cc), uVar24 == 0x80000000))
           || (uVar24 != uVar21 - 1)) {
          if ((uVar20 & 1) == 0) {
            bVar14 = false;
          }
          else {
            lVar27 = uVar30 * 0x178 + 0x144;
            uVar45 = uVar30;
            do {
              uVar45 = uVar45 - 1;
              iVar22 = (int)uVar30;
              uVar21 = iVar22 - 1;
              uVar30 = (ulong)uVar21;
              if ((iVar22 < 1) || (uVar45 == *(uint *)(unaff_x22 + 0x19cc))) {
                bVar14 = false;
                goto LAB_07d71064;
              }
              lVar43 = *(long *)(unaff_x19 + 0x30);
              if (lVar43 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar43 + 0x18) <= uVar45) goto LAB_07d72b20;
              lVar43 = *(long *)(lVar43 + lVar27 + -0x28c);
              if ((lVar43 == 0) || (lVar43 = FUN_07d88988(lVar43,0), lVar43 == 0))
              goto LAB_07d72adc;
              uVar24 = FUN_07d53740(lVar43,0);
              if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
              iVar22 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
              if (((*unaff_x29 == 0) || (lVar43 = FUN_07d61740(*unaff_x29,0), lVar43 == 0)) ||
                 (*(long *)(lVar43 + 0x50) == 0)) goto LAB_07d72adc;
              uVar33 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                                 (*(long *)(lVar43 + 0x50),uVar24 | iVar22 << 0x10,&stack0x00001050,
                                  *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
              lVar27 = lVar27 + -0x178;
              unaff_x29 = in_stack_00000148;
            } while ((uVar33 & 1) == 0);
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
            if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar21) goto LAB_07d72b20;
            FUN_07d580c8(&stack0x00001050,0);
            UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
            FUN_07d580e8(&stack0x00001050,0);
            FUN_07d58058(&stack0x00001068,0);
            FUN_07d57ab8(&stack0x00001100,0);
            FUN_07d580c8(&stack0x00001050,0);
            FUN_07d58048(&stack0x00001070,0);
            FUN_07d580e8(&stack0x00001050,0);
            FUN_07d58068(&stack0x00001068,0);
            FUN_07d57ac8(&stack0x00001100,0);
            fVar69 = 0.0;
            bVar14 = true;
          }
LAB_07d71064:
          if ((uVar19 & 1) != 0) {
            uVar21 = *(uint *)(unaff_x22 + 0x19cc);
            if (uVar21 == 0x80000000) {
              bVar14 = true;
            }
            if (!bVar14) {
              lVar27 = *(long *)(unaff_x19 + 0x30);
              if (lVar27 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
              lVar27 = *(long *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x30);
              if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0))
              goto LAB_07d72adc;
              uVar21 = FUN_07d53740(lVar27,0);
              if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
              iVar22 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
              if (((*unaff_x29 == 0) || (lVar27 = FUN_07d61740(*unaff_x29,0), lVar27 == 0)) ||
                 (*(long *)(lVar27 + 0x48) == 0)) goto LAB_07d72adc;
              uVar30 = FUN_06008730(*(long *)(lVar27 + 0x48),uVar21 | iVar22 << 0x10,
                                    &stack0x00001038,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
              unaff_x29 = in_stack_00000148;
              if ((uVar30 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= *(uint *)(unaff_x22 + 0x19cc)
                     ) goto LAB_07d72b20;
                  FUN_07d58088(&stack0x00001038,0);
                  UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0)
                  ;
                  FUN_07d580a8(&stack0x00001038,0);
                  FUN_07d58058(&stack0x00001068,0);
                  FUN_07d57ab8(&stack0x00001100,0);
                  FUN_07d58088(&stack0x00001038,0);
                  FUN_07d58048(&stack0x00001070,0);
                  puVar34 = &stack0x00001038;
                  goto LAB_07d711ec;
                }
                goto LAB_07d72adc;
              }
            }
          }
        }
        else {
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= uVar24) goto LAB_07d72b20;
          lVar27 = *(long *)(lVar27 + (long)(int)uVar24 * 0x178 + 0x30);
          if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
          uVar21 = FUN_07d53740(lVar27,0);
          if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
          iVar22 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
          if (((*unaff_x29 == 0) || (lVar27 = FUN_07d61740(*unaff_x29,0), lVar27 == 0)) ||
             (*(long *)(lVar27 + 0x48) == 0)) goto LAB_07d72adc;
          uVar30 = FUN_06008730(*(long *)(lVar27 + 0x48),uVar21 | iVar22 << 0x10,&stack0x00001078,
                                *(undefined8 *)
                                 UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
          unaff_x29 = in_stack_00000148;
          if ((uVar30 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
            if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= *(uint *)(unaff_x22 + 0x19cc))
            goto LAB_07d72b20;
            FUN_07d58088(&stack0x00001078,0);
            UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
            FUN_07d580a8(&stack0x00001078,0);
            FUN_07d58058(&stack0x00001068,0);
            FUN_07d57ab8(&stack0x00001100,0);
            FUN_07d58088(&stack0x00001078,0);
            FUN_07d58048(&stack0x00001070,0);
            puVar34 = &stack0x00001078;
LAB_07d711ec:
            FUN_07d580a8(puVar34,0);
            FUN_07d58068(&stack0x00001068,0);
            FUN_07d57ac8(&stack0x00001100,0);
            fVar69 = 0.0;
            unaff_x29 = in_stack_00000148;
          }
        }
      }
    }
    else {
      *(uint *)(unaff_x22 + 0x19cc) = uVar21;
    }
    fVar52 = (float)FUN_07d57ac0(&stack0x00001100,0);
    fVar53 = (float)FUN_07d57ac0(&stack0x00001100,0);
    if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
      fVar54 = *(float *)(unaff_x22 + 0x300);
      fVar67 = (float)FUN_07d53598(&stack0x00001110,0);
      fVar54 = fVar54 - fVar51 * fVar67 * (1.0 - *(float *)(unaff_x22 + 0x15a4));
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar54 = (float)(int)(fVar54 + fVar10);
      }
      *(float *)(unaff_x22 + 0x300) = fVar54;
      if (((bVar16 & 1) != 0) || (*unaff_x21 == 0x200b)) {
        fVar54 = fVar54 - fVar65 * *(float *)(in_stack_00000140 + 0x90);
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar54 = (float)(int)(fVar54 + fVar10);
        }
        *(float *)(unaff_x22 + 0x300) = fVar54;
      }
    }
    fVar54 = *(float *)(unaff_x22 + 0x2f8);
    fVar67 = 0.0;
    if (fVar54 != 0.0) {
      uVar21 = *unaff_x21;
      if (uVar21 != 0x200b) {
        if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar21)) ||
           (fVar67 = 0.25, (1L << ((ulong)uVar21 & 0x3f) & 0x400500000000000U) == 0)) {
          fVar67 = 0.5;
        }
        fVar55 = (float)FUN_07d53578(&stack0x00001110,0);
        fVar74 = (float)FUN_07d53588(&stack0x00001110,0);
        fVar67 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                 (fVar54 * fVar67 - fVar51 * (fVar55 * 0.5 + fVar74));
        fVar54 = fVar67 + *(float *)(unaff_x22 + 0x300);
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar54 = (float)(int)(fVar54 + fVar10);
        }
        *(float *)(unaff_x22 + 0x300) = fVar54;
      }
    }
    if (*unaff_x29 == 0) goto LAB_07d72adc;
    iVar22 = FUN_07d616d4(*unaff_x29,0);
    if (iVar22 == 0x1015) {
      bVar14 = false;
    }
    else {
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      iVar22 = FUN_07d616d4(*unaff_x29,0);
      bVar14 = iVar22 != 0x11014;
    }
    if ((cVar35 == '\0') && (*pcVar1 == '\x01')) {
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
      if ((*(byte *)(lVar27 + (long)(int)*puVar47 * 0x178 + 400) & 1) == 0) goto LAB_07d701e4;
      if (bVar14) {
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          iVar22 = FUN_07d616c4(*unaff_x29,0);
          fVar55 = (float)(iVar22 + 1);
        }
        else {
          lVar27 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar27 == 0) goto LAB_07d72adc;
          uVar30 = thunk_FUN_07c662cc(lVar27,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar30 & 1) == 0) goto LAB_07d70594;
          lVar27 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar27 == 0) goto LAB_07d72adc;
          fVar55 = (float)thunk_FUN_07c69050(lVar27,*(undefined4 *)
                                                     (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        }
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar54 = (float)FUN_07d617a8(*unaff_x29,0);
        fVar54 = fVar55 * fVar54 * 0.25;
        if (fVar55 < fStack000000000000013c + fVar54) {
          fStack000000000000013c = fVar55 - fVar54;
        }
      }
      else {
        fVar54 = 0.0;
      }
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fStack00000000000000d0 = (float)FUN_07d617b8(*unaff_x29,0);
    }
    else {
LAB_07d701e4:
      fStack00000000000000d0 = 0.0;
      if (bVar14) {
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          iVar22 = FUN_07d616c4(*unaff_x29,0);
          fVar55 = (float)(iVar22 + 1);
        }
        else {
          lVar27 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar27 == 0) goto LAB_07d72adc;
          uVar30 = thunk_FUN_07c662cc(lVar27,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar30 & 1) == 0) goto LAB_07d70290;
          lVar27 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar27 == 0) goto LAB_07d72adc;
          fVar55 = (float)thunk_FUN_07c69050(lVar27,*(undefined4 *)
                                                     (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        }
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar54 = fVar55 * *(float *)(*unaff_x29 + 400) * 0.25;
        if (fVar55 < fStack000000000000013c + fVar54) {
          fStack000000000000013c = fVar55 - fVar54;
        }
      }
      else {
        fVar54 = 0.0;
      }
    }
    fVar68 = *(float *)(unaff_x22 + 0x300);
    fVar55 = (float)FUN_07d53588(&stack0x00001110,0);
    fVar71 = *(float *)(unaff_x22 + 0x19b0);
    fVar74 = (float)FUN_07d57ab0(&stack0x00001100,0);
    fVar68 = fVar68 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                      fVar51 * (fVar74 + ((fVar55 * fVar71 - fStack000000000000013c) - fVar54));
    fVar55 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar74 = (float)FUN_07d57ac0(&stack0x00001100,0);
    fVar55 = fVar51 * (fStack000000000000013c + fVar55 + fVar74);
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar55 = (float)(int)(fVar55 + fVar10);
    }
    fStack0000000000000150 =
         *(float *)(unaff_x22 + 0x188) + ((fVar56 + fVar55) - *(float *)(unaff_x22 + 0x2e8));
    fVar55 = (float)FUN_07d53580(&stack0x00001110,0);
    fVar71 = fStack0000000000000150 -
             fVar51 * (fStack000000000000013c + fStack000000000000013c + fVar55);
    fVar55 = (float)FUN_07d53578(&stack0x00001110,0);
    fVar55 = fVar68 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                      fVar51 * (fVar54 + fVar54 +
                               fStack000000000000013c + fStack000000000000013c +
                               fVar55 * *(float *)(unaff_x22 + 0x19b0));
    fVar72 = fVar55;
    fVar74 = fVar68;
    if (((cVar35 == '\0') && (*pcVar1 == '\x01')) && ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      iVar22 = *(int *)(unaff_x22 + 0x19ac);
      fVar74 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar58 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar73 = *(float *)(unaff_x22 + 0xf0);
      fVar75 = *(float *)(unaff_x22 + 0x188);
      fVar72 = (float)iVar22 * fVar9;
      fVar66 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
      fVar66 = fVar66 * fVar73 * (fVar74 - (fVar58 + fVar75)) * 0.5;
      fVar74 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar75 = fVar72 * fVar51 * ((fVar54 + fStack000000000000013c + fVar74) - fVar66);
      fVar58 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar73 = (float)FUN_07d53580(&stack0x00001110,0);
      fStack0000000000000150 = fStack0000000000000150 + 0.0;
      fVar74 = fVar68 + fVar75;
      fVar71 = fVar71 + 0.0;
      fVar72 = fVar72 * fVar51 * ((((fVar58 - fVar73) - fStack000000000000013c) - fVar54) - fVar66);
      fVar68 = fVar68 + fVar72;
      fVar72 = fVar55 + fVar72;
      fVar55 = fVar55 + fVar75;
    }
    uVar29 = *in_stack_000000c8;
    uVar28 = in_stack_000000c8[1];
    if (DAT_08974d8a == '\0') {
      FUN_03a8a718(PTR_DAT_08486860);
      DAT_08974d8a = '\x01';
    }
    uVar59 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
    uVar61 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
    if (DAT_015c5bb4 <
        (float)((ulong)uVar28 >> 0x20) * (float)((ulong)uVar61 >> 0x20) +
        (float)uVar28 * (float)uVar61 +
        (float)uVar29 * (float)uVar59 +
        (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar59 >> 0x20)) {
      fVar54 = 0.0;
      auVar60._4_12_ = SUB1612(ZEXT816(0),4);
      auVar60._0_4_ = fVar71;
      uVar29 = auVar60._0_8_;
      uVar30 = (ulong)(uint)fStack0000000000000150;
      uVar28 = uVar29;
    }
    else {
      FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                   *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                   *(undefined4 *)(unaff_x22 + 0x19c8),0);
      fVar72 = (fVar55 + fVar68) * 0.5;
      fVar66 = (fVar71 + fStack0000000000000150) * 0.5;
      fVar54 = 0.0;
      auVar60 = ZEXT416((uint)(fStack0000000000000150 - fVar66));
      fVar74 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar74 = fVar72 + fVar74;
      fVar55 = 0.0;
      uVar30 = CONCAT44(fVar54 + 0.0,fVar66 + auVar60._0_4_);
      auVar60 = ZEXT416((uint)(fVar71 - fVar66));
      fVar68 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar68 = fVar72 + fVar68;
      fVar54 = 0.0;
      uVar29 = CONCAT44(fVar55 + 0.0,fVar66 + auVar60._0_4_);
      auVar60 = ZEXT416((uint)(fStack0000000000000150 - fVar66));
      fVar55 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar55 = fVar72 + fVar55;
      fVar58 = 0.0;
      fStack0000000000000150 = fVar66 + auVar60._0_4_;
      fVar54 = fVar54 + 0.0;
      auVar60 = ZEXT416((uint)(fVar71 - fVar66));
      fVar71 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar72 = fVar72 + fVar71;
      uVar28 = CONCAT44(fVar58 + 0.0,fVar66 + auVar60._0_4_);
    }
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    *(float *)(lVar27 + 0x118) = fVar68;
    *(undefined8 *)(lVar27 + 0x11c) = uVar29;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    *(float *)(lVar27 + 0x10c) = fVar74;
    *(ulong *)(lVar27 + 0x110) = uVar30;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    *(float *)(lVar27 + 0x124) = fVar55;
    *(ulong *)(lVar27 + 0x128) = CONCAT44(fVar54,fStack0000000000000150);
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *puVar47) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)*puVar47 * 0x178;
    *(float *)(lVar27 + 0x130) = fVar72;
    *(undefined8 *)(lVar27 + 0x134) = uVar28;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar21 = *(uint *)(unaff_x22 + 0x334);
    fVar54 = *(float *)(unaff_x22 + 0x300);
    fVar74 = (float)FUN_07d57ab0(&stack0x00001100,0);
    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
    fVar54 = fVar54 + fVar51 * fVar74;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar54 = (float)(int)(fVar54 + fVar10);
    }
    *(float *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x13c) = fVar54;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar21 = *(uint *)(unaff_x22 + 0x334);
    fVar74 = *(float *)(unaff_x22 + 0x2e8);
    fVar71 = *(float *)(unaff_x22 + 0x188);
    fVar54 = (float)FUN_07d57ac0(&stack0x00001100,0);
    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
    fVar56 = (fVar56 - fVar74) + fVar71 + fVar51 * fVar54;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar56 = (float)(int)(fVar56 + fVar10);
    }
    *(float *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x144) = fVar56;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar21 = *(uint *)(unaff_x22 + 0x334);
    if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
    lVar27 = lVar27 + 0x20;
    *(float *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x13c) =
         (fVar55 - fVar68) / ((float)uVar30 - (float)uVar29);
    fVar52 = fVar51 * (fStack00000000000000f8 + fVar52);
    if (*pcVar1 == '\x01') {
      fVar52 = fVar52 / fVar64;
      fVar53 = (fVar51 * (fStack00000000000000f4 + fVar53)) / fVar64;
    }
    else {
      fVar53 = fVar51 * (fStack00000000000000f4 + fVar53);
    }
    uVar24 = *(uint *)(unaff_x22 + 0x338);
    if ((uVar21 != uVar24 & bVar16) == 0) {
      fVar55 = *(float *)(unaff_x22 + 0x188);
      fVar52 = fVar52 + fVar55;
      fVar53 = fVar53 + fVar55;
      fVar56 = fVar52;
      fVar54 = fVar53;
      if (fVar55 != 0.0) {
        fVar56 = (fVar52 - fVar55) / *(float *)(unaff_x22 + 0xf0);
        fVar54 = (fVar53 - fVar55) / *(float *)(unaff_x22 + 0xf0);
        if (fVar56 <= fVar52) {
          fVar56 = fVar52;
        }
        if (fVar53 <= fVar54) {
          fVar54 = fVar53;
        }
      }
      lVar27 = lVar27 + (long)(int)uVar21 * 0x178;
      fVar55 = fVar56;
      if (fVar56 <= *(float *)(unaff_x22 + 0x348)) {
        fVar55 = *(float *)(unaff_x22 + 0x348);
      }
      fVar74 = fVar54;
      if (*(float *)(unaff_x22 + 0x34c) <= fVar54) {
        fVar74 = *(float *)(unaff_x22 + 0x34c);
      }
      *(float *)(unaff_x22 + 0x348) = fVar55;
      *(float *)(unaff_x22 + 0x34c) = fVar74;
      *(float *)(lVar27 + 300) = fVar56;
      *(float *)(lVar27 + 0x130) = fVar54;
      fVar56 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(lVar27 + 0x120) = fVar52 - fVar56;
      *(float *)(lVar27 + 0x128) = fVar53 - fVar56;
      *(float *)(unaff_x22 + 900) = fVar53 - fVar56;
      if (*(int *)(unaff_x22 + 0x350) == 0) {
        *(float *)(unaff_x22 + 0x380) = fVar55;
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar53 = *(float *)(unaff_x22 + 0x37c);
        fVar56 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        fVar64 = (fVar51 * fVar56) / fVar64;
        if (fVar53 <= fVar64) {
          fVar53 = fVar64;
        }
        fVar56 = *(float *)(unaff_x22 + 0x2e8);
        *(float *)(unaff_x22 + 0x37c) = fVar53;
      }
      if (fVar56 == 0.0) {
        fVar64 = *(float *)(unaff_x22 + 0x19d0);
        if (*(float *)(unaff_x22 + 0x19d0) <= fVar52) {
          fVar64 = fVar52;
        }
        *(float *)(unaff_x22 + 0x19d0) = fVar64;
      }
    }
    else {
      lVar27 = lVar27 + (long)(int)uVar21 * 0x178;
      uVar28 = *(undefined8 *)(unaff_x22 + 0x348);
      *(undefined8 *)(lVar27 + 300) = uVar28;
      fVar56 = *(float *)(unaff_x22 + 0x2e8);
      fVar64 = (float)((ulong)uVar28 >> 0x20) - fVar56;
      *(float *)(lVar27 + 0x120) = (float)uVar28 - fVar56;
      *(float *)(lVar27 + 0x128) = fVar64;
      *(float *)(unaff_x22 + 900) = fVar64;
    }
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar79 = *puVar47;
    if (*(uint *)(lVar27 + 0x18) <= uVar79) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)uVar79 * 0x178;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    uVar37 = *unaff_x21;
    if (uVar37 == 9) {
LAB_07d70d34:
      *(undefined1 *)(lVar27 + 0x194) = 1;
      pfVar39 = (float *)(unaff_x22 + 0x364);
      pfVar40 = (float *)(unaff_x22 + 0x360);
      if (uVar78 == uVar26) {
        lVar27 = *(long *)(unaff_x19 + 0x48);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        pfVar40 = (float *)(lVar27 + 100);
        pfVar39 = (float *)(lVar27 + 0x68);
      }
      fVar52 = *pfVar40;
      fVar53 = *pfVar39;
      fVar64 = *(float *)(unaff_x22 + 0x368);
      fVar54 = 0.0;
      fVar56 = *(float *)(unaff_x22 + 0x300);
      fStack0000000000000100 = (fVar50 - fVar52) - fVar53;
      bVar14 = true;
      if ((fVar64 <= fStack0000000000000100) && (bVar14 = false, !NAN(fVar64))) {
        bVar14 = fVar64 == -1.0;
      }
      if (!bVar14) {
        fStack0000000000000100 = fVar64;
      }
      fVar64 = 0.0;
      if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
        fVar64 = (float)FUN_07d53598(&stack0x00001110,0);
        uVar37 = *unaff_x21;
      }
      if (uVar37 != 0xad) {
        fStack00000000000000e8 = fVar51;
      }
      if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        fVar54 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
      }
      uVar79 = *puVar47;
      if (fVar70 < (*(float *)(unaff_x22 + 0x380) -
                   (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar54) {
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = uVar79;
        }
        iVar22 = *(int *)(in_stack_00000140 + 100);
        if (iVar22 != 1) {
          if ((iVar22 != 6) && (iVar22 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
          uVar77 = FUN_07d79b5c();
          goto LAB_07d71040;
        }
        if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
        iVar22 = FUN_059137dc(unaff_x22 + 0x15f0,
                              *(undefined8 *)
                               Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
        if (iVar22 == 0) {
          puVar47[0] = 0;
          puVar47[1] = 0;
          uVar77 = 0xffffffff;
          unaff_x29 = in_stack_00000148;
          in_stack_00001190 = DAT_015c3d00;
          goto LAB_07d72ac8;
        }
        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                  (&stack0x000011a0,unaff_x22 + 0x15f0,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                  );
        memcpy(&stack0x00000c58,&stack0x000011a0,0x398);
        iVar25 = FUN_07d79b5c();
        iVar22 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
        iVar48 = iVar48 + 1;
        *(int *)(unaff_x22 + 0x334) = iVar22 + -1;
        unaff_x29 = in_stack_00000148;
        uVar77 = iVar25 - 1;
        in_stack_00001190 = CONCAT44(0x2026,iVar22 + -1);
        goto LAB_07d72ac8;
      }
LAB_07d70fbc:
      uVar37 = uVar79;
      if ((bVar17 & fStack0000000000000100 <
                    ABS(fVar56) +
                    fVar64 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) == 1)
      {
        if (((uVar3 != 0) && (uVar3 != 3)) && (uVar79 != *(uint *)(unaff_x22 + 0x338))) {
          uVar77 = FUN_07d79b5c();
          fVar64 = *(float *)(unaff_x22 + 0x2ec);
          if (fVar64 == DAT_015c55ac) {
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            uVar37 = *puVar47;
            if (*(uint *)(lVar27 + 0x18) <= uVar37) goto LAB_07d72b20;
            fVar56 = *(float *)(unaff_x22 + 0x2e8);
            fVar64 = 0.0;
            if ((0.0 < fVar56) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
              fVar64 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
            }
            fVar64 = *(float *)(lVar27 + (long)(int)uVar37 * 0x178 + 0x14c) +
                     (fVar64 - *(float *)(unaff_x22 + 0x34c)) +
                     fVar76 * (fVar49 + *(float *)(unaff_x22 + 0x15bc));
          }
          else {
            *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            fVar56 = *(float *)(unaff_x22 + 0x2e8);
            uVar37 = *(uint *)(unaff_x22 + 0x334);
          }
          if ((*(uint *)(lVar27 + 0x18) <= uVar37) ||
             (uVar46 = uVar37 - 1, *(uint *)(lVar27 + 0x18) <= uVar46)) goto LAB_07d72b20;
          piVar41 = (int *)(lVar27 + 0x20 + (long)(int)uVar37 * 0x178);
          fVar64 = (fVar65 * 0.0 + fVar64 + *(float *)(unaff_x22 + 0x380) + fVar56) -
                   (float)piVar41[0x4c];
          if ((*(int *)(lVar27 + 0x20 + (long)(int)uVar46 * 0x178) == 0xad && !bVar6) &&
             ((*(int *)(in_stack_00000140 + 100) == 0 || (fVar64 < fVar70)))) {
            bVar6 = false;
            uVar77 = uVar77 - 1;
            *puVar47 = uVar46;
            unaff_x29 = in_stack_00000148;
            in_stack_00001190 = CONCAT44(0x2d,uVar46);
            goto LAB_07d72ac8;
          }
          if (*piVar41 == 0xad) {
            bVar6 = true;
            unaff_x29 = in_stack_00000148;
          }
          else {
            if (((bVar2 != 0) && (iVar22 = *(int *)(unaff_x22 + 0x11f0), iVar22 != -1)) &&
               (iVar22 != iStack000000000000000c)) {
              uVar77 = FUN_07d79b5c();
              lVar27 = *(long *)(unaff_x19 + 0x30);
              if (lVar27 == 0) goto LAB_07d72adc;
              uVar37 = *puVar47;
              uVar46 = uVar37 - 1;
              if (*(uint *)(lVar27 + 0x18) <= uVar46) goto LAB_07d72b20;
              iStack000000000000000c = iVar22;
              if (*(int *)(lVar27 + (long)(int)uVar46 * 0x178 + 0x20) == 0xad) {
                bVar6 = false;
                uVar77 = uVar77 - 1;
                *puVar47 = uVar46;
                unaff_x29 = in_stack_00000148;
                in_stack_00001190 = CONCAT44(0x2d,uVar46);
                goto LAB_07d72ac8;
              }
            }
            if (fVar70 < fVar64) {
              if (*(int *)(unaff_x22 + 0x35c) == -1) {
                *(uint *)(unaff_x22 + 0x35c) = uVar37;
              }
              iVar22 = *(int *)(in_stack_00000140 + 100);
              bVar6 = false;
              if (iVar22 < 3) {
                if (iVar22 != 0) {
                  if (iVar22 == 1) {
                    iVar22 = FUN_059137dc(unaff_x22 + 0x15f0,
                                          *(undefined8 *)
                                           Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                         );
                    if (iVar22 != 0) {
                      Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                                (&stack0x000011a0,unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                                );
                      memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                      iVar25 = FUN_07d79b5c();
                      bVar6 = false;
                      goto LAB_07d712c4;
                    }
                    bVar6 = false;
                    goto LAB_07d72aac;
                  }
                  if (iVar22 != 2) goto LAB_07d7166c;
                }
LAB_07d729d0:
                FUN_07d7bce4();
                bVar6 = false;
                bVar2 = 1;
                bVar15 = true;
                unaff_x29 = in_stack_00000148;
              }
              else {
                if (iVar22 == 3) {
                  uVar77 = FUN_07d79b5c();
                  bVar6 = false;
                }
                else {
                  if (iVar22 != 6) {
                    if (iVar22 != 4) goto LAB_07d7166c;
                    goto LAB_07d729d0;
                  }
                  bVar6 = false;
                  uVar79 = uVar37;
                }
LAB_07d71040:
                unaff_x29 = in_stack_00000148;
                in_stack_00001190 = CONCAT44(3,uVar79);
              }
            }
            else {
              FUN_07d7bce4();
              bVar6 = false;
              bVar2 = 1;
              bVar15 = true;
              unaff_x29 = in_stack_00000148;
            }
          }
          goto LAB_07d72ac8;
        }
        iVar22 = *(int *)(in_stack_00000140 + 100);
        if (iVar22 == 1) {
          iVar22 = FUN_059137dc(unaff_x22 + 0x15f0,
                                *(undefined8 *)
                                 Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
          if (iVar22 != 0) {
            Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                      (&stack0x000011a0,unaff_x22 + 0x15f0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                      );
            memcpy(&stack0x00000528,&stack0x000011a0,0x398);
            iVar25 = FUN_07d79b5c();
LAB_07d712c4:
            iVar22 = *(int *)(unaff_x22 + 0x334);
            goto LAB_07d712d0;
          }
LAB_07d72aac:
          puVar47[0] = 0;
          puVar47[1] = 0;
          uVar77 = 0xffffffff;
          unaff_x29 = in_stack_00000148;
          in_stack_00001190 = DAT_015c3d00;
          goto LAB_07d72ac8;
        }
        if (iVar22 == 6) {
          uVar77 = FUN_07d79b5c();
          uVar79 = *(uint *)(unaff_x22 + 0x334);
          goto LAB_07d71040;
        }
        if (iVar22 == 3) goto LAB_07d7102c;
      }
LAB_07d7166c:
      if ((bVar16 & 1) == 0) {
        if (*unaff_x21 == 0xad) {
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= uVar37) goto LAB_07d72b20;
          *(undefined1 *)(lVar27 + (long)(int)uVar37 * 0x178 + 0x194) = 0;
        }
        else {
          if (*pcVar1 == '\x02') {
            FUN_07d7a738();
          }
          else if (*pcVar1 == '\x01') {
            FUN_07d79ee4();
          }
          if (bVar15) {
            *(uint *)(unaff_x22 + 0x340) = *puVar47;
          }
          *(uint *)(unaff_x22 + 0x344) = *puVar47;
          *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
          lVar27 = *(long *)(unaff_x19 + 0x48);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          bVar15 = false;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(float *)(lVar27 + 100) = fVar52;
          *(float *)(lVar27 + 0x68) = fVar53;
        }
      }
      else {
        lVar27 = *(long *)(unaff_x19 + 0x30);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= uVar37) goto LAB_07d72b20;
        *(undefined1 *)(lVar27 + (long)(int)uVar37 * 0x178 + 0x194) = 0;
        lVar27 = *(long *)(unaff_x19 + 0x48);
        if (lVar27 == 0) goto LAB_07d72adc;
        uVar79 = *(uint *)(lVar27 + 0x18);
        if (uVar79 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar27 = lVar27 + 0x20;
        lVar43 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        iVar22 = *(int *)(lVar43 + 0x10) + 1;
        *(int *)(lVar43 + 0x10) = iVar22;
        uVar37 = *(uint *)(unaff_x22 + 0x350);
        *(int *)(unaff_x22 + 0x358) = iVar22;
        if (uVar79 <= uVar37) goto LAB_07d72b20;
        lVar43 = lVar27 + (long)(int)uVar37 * 0x60;
        *(float *)(lVar43 + 0x44) = fVar52;
        *(float *)(lVar43 + 0x48) = fVar53;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        if (*unaff_x21 == 0xa0) {
          *(int *)(lVar27 + (long)(int)uVar37 * 0x60) =
               *(int *)(lVar27 + (long)(int)uVar37 * 0x60) + 1;
        }
      }
    }
    else {
      if ((uVar3 & 0xfffffffe) == 2) {
        if ((bVar16 & 1) == 0 && uVar37 != 0x200b) goto LAB_07d70e7c;
        goto LAB_07d70d34;
      }
      if ((bVar16 & 1) == 0) {
LAB_07d70e7c:
        if ((uVar37 != 3) && (uVar37 != 0x200b)) {
          if (uVar37 != 0xad) goto LAB_07d70d34;
          goto LAB_07d70e98;
        }
      }
      else {
LAB_07d70e98:
        if (uVar37 == 0xad && !bVar6) goto LAB_07d70d34;
      }
      if (*pcVar1 == '\x02') goto LAB_07d70d34;
      if (*(int *)(in_stack_00000140 + 100) == 6) {
        if ((uVar37 & 0xfffffffe) != 10) {
          if ((0x22 < uVar37 - 0x2007) ||
             ((1L << ((ulong)(uVar37 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
          goto LAB_07d71420;
        }
        fVar64 = 0.0;
        if ((0.0 < fVar56) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
          fVar64 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
        }
        if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar56)) + fVar64 <=
            fVar70) goto LAB_07d71228;
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = uVar79;
        }
        uVar77 = FUN_07d79b5c();
        goto LAB_07d71040;
      }
LAB_07d71228:
      if ((int)uVar37 < 0x2007) {
        if (uVar37 != 10) {
LAB_07d713e4:
          if ((uVar37 != 0xb) && (uVar37 != 0xa0)) goto LAB_07d713f4;
          goto LAB_07d71420;
        }
LAB_07d71440:
        lVar27 = *(long *)(unaff_x19 + 0x48);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        uVar37 = *unaff_x21;
LAB_07d7147c:
        if (uVar37 == 0xa0) {
          lVar27 = *(long *)(unaff_x19 + 0x48);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
        }
      }
      else {
        if ((0x22 < uVar37 - 0x2007) ||
           ((1L << ((ulong)(uVar37 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar30 = FUN_066bcb80(uVar37,0);
          uVar37 = *unaff_x21;
          if ((uVar30 & 1) != 0) goto LAB_07d71420;
          goto LAB_07d7147c;
        }
LAB_07d71420:
        if (((uVar37 != 0xad) && (uVar37 != 0x200b)) && (uVar37 != 0x2060)) goto LAB_07d71440;
      }
    }
    if ((uVar78 == uVar26) && (*(int *)(in_stack_00000140 + 100) == 1)) {
      if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar52 = *(float *)(unaff_x22 + 0xf8);
        fVar64 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar53 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar27 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_07d72adc;
        fVar54 = *(float *)(unaff_x22 + 0xf0);
        fVar55 = *(float *)(lVar27 + 0x2c);
        fVar56 = (float)FUN_07d5378c(*(long *)(lVar27 + 0x20),0);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x360);
        fVar56 = (fVar52 / fVar64) * fVar53 * fVar54 * fVar55 * fVar56;
        if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          uVar79 = *(int *)(unaff_x22 + 0x334) - 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar79) goto LAB_07d72b20;
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar52 = *(float *)(lVar27 + (long)(int)uVar79 * 0x178 + 0x60);
          fVar64 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar53 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          lVar27 = *(long *)(unaff_x22 + 0x19f8);
          if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_07d72adc;
          fVar54 = *(float *)(unaff_x22 + 0xf0);
          fVar55 = *(float *)(lVar27 + 0x2c);
          fVar56 = (float)FUN_07d5378c(*(long *)(lVar27 + 0x20),0);
          lVar27 = *(long *)(unaff_x19 + 0x48);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          uVar28 = *(undefined8 *)(lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
          fVar56 = (fVar52 / fVar64) * fVar53 * fVar54 * fVar55 * fVar56;
        }
        fVar64 = 0.0;
        fVar52 = *(float *)(unaff_x22 + 0x300);
        if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
          if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
             (lVar27 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar27 == 0))
          goto LAB_07d72adc;
          FUN_07d53750(&stack0x000011a0,lVar27,0);
          fVar64 = (float)FUN_07d53598(&stack0x000010e0,0);
        }
        fVar53 = (fVar50 - (float)uVar28) - (float)((ulong)uVar28 >> 0x20);
        fVar54 = *(float *)(unaff_x22 + 0x368);
        bVar14 = true;
        if ((fVar54 <= fVar53) && (bVar14 = false, !NAN(fVar54))) {
          bVar14 = fVar54 == -1.0;
        }
        if (!bVar14) {
          fVar53 = fVar54;
        }
        if (ABS(fVar52) + fVar56 * fVar64 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar53) {
          FUN_07d79804();
          memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
          FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                      );
        }
      }
    }
    else if (*(int *)(in_stack_00000140 + 100) == 1) goto LAB_07d717ec;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
    uVar79 = *(uint *)(unaff_x22 + 0x350);
    *(uint *)(lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x334) * 0x178 + 100) = uVar79;
    if ((uVar78 == uVar26) ||
       ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
      lVar27 = *(long *)(unaff_x19 + 0x48);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= uVar79) goto LAB_07d72b20;
      if (*(int *)(lVar27 + (long)(int)uVar79 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
    }
    else {
      lVar27 = *(long *)(unaff_x19 + 0x48);
      if (lVar27 == 0) goto LAB_07d72adc;
LAB_07d71a94:
      if (*(uint *)(lVar27 + 0x18) <= uVar79) goto LAB_07d72b20;
      *(undefined4 *)(lVar27 + (long)(int)uVar79 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160)
      ;
    }
    uVar79 = *unaff_x21;
    if (uVar79 != 0x200b) {
      if (uVar79 == 9) {
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar64 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        bVar17 = FUN_07d617d8(*in_stack_00000148,0);
        fVar53 = *(float *)(unaff_x22 + 0x300);
        cVar35 = *(char *)(unaff_x22 + 0xf4);
        fVar52 = fVar51 * fVar64 * (float)bVar17;
        fVar64 = fVar52 * (float)(int)(fVar53 / fVar52);
        if (fVar64 <= fVar53) {
          fVar64 = fVar53 + fVar52;
        }
      }
      else {
        fVar64 = *(float *)(unaff_x22 + 0x2f8);
        if (fVar64 == 0.0) {
          fVar52 = *(float *)(unaff_x22 + 0x300);
          if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
            fVar64 = (float)FUN_07d57ad0(&stack0x00001100,0);
            if (*in_stack_00000148 != 0) {
              fVar53 = (float)FUN_07d61798(*in_stack_00000148,0);
              cVar35 = *(char *)(unaff_x22 + 0xf4);
              fVar52 = fVar52 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                                (*(float *)(unaff_x22 + 0x2f4) +
                                fVar51 * fVar64 +
                                fVar65 * (fStack00000000000000d0 + fVar69 + fVar53));
              if (cVar35 != '\0') {
                fVar52 = (float)(int)(fVar52 + fVar10);
              }
              *(float *)(unaff_x22 + 0x300) = fVar52;
              if (((bVar16 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
              fVar64 = fVar52 - fVar65 * *(float *)(in_stack_00000140 + 0x90);
              goto FUN_07d71c94;
            }
            goto LAB_07d72adc;
          }
          fVar64 = (float)FUN_07d53598(&stack0x00001110,0);
          fVar56 = *(float *)(unaff_x22 + 0x19b0);
          fVar53 = (float)FUN_07d57ad0(&stack0x00001100,0);
          if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
          fVar54 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
          fVar52 = fVar52 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                            (*(float *)(unaff_x22 + 0x2f4) +
                            fVar51 * (fVar64 * fVar56 + fVar53) +
                            fVar65 * (fStack00000000000000d0 + fVar69 + fVar54));
        }
        else {
          if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar79 < 0x3b)) &&
             ((1L << ((ulong)uVar79 & 0x3f) & 0x400500000000000U) != 0)) {
            fVar64 = fVar64 * 0.5;
          }
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar52 = *(float *)(unaff_x22 + 0x300);
          fVar53 = (float)FUN_07d61798(*in_stack_00000148,0);
          fVar52 = fVar52 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                            (*(float *)(unaff_x22 + 0x2f4) +
                            (fVar64 - fVar67) + fVar65 * (fVar69 + fVar53));
        }
        cVar35 = *(char *)(unaff_x22 + 0xf4);
        if (cVar35 != '\0') {
          fVar52 = (float)(int)(fVar52 + fVar10);
        }
        *(float *)(unaff_x22 + 0x300) = fVar52;
        if (((bVar16 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
        fVar64 = fVar52 + fVar65 * *(float *)(in_stack_00000140 + 0x90);
      }
FUN_07d71c94:
      if (cVar35 != '\0') {
        fVar64 = (float)(int)(fVar64 + fVar10);
      }
      *(float *)(unaff_x22 + 0x300) = fVar64;
    }
LAB_07d71ca8:
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar79 = *puVar47;
    uVar37 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar37 <= uVar79) goto LAB_07d72b20;
    *(undefined4 *)(lVar27 + (long)(int)uVar79 * 0x178 + 0x158) = *(undefined4 *)(unaff_x22 + 0x300)
    ;
    uVar46 = *unaff_x21;
    if ((int)uVar46 < 0xd) {
      if ((uVar46 - 10 < 2) || (uVar46 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
      if ((uVar46 == 0x2d && uVar78 == uVar26) || (uVar79 == uVar5)) goto LAB_07d71d54;
      goto LAB_07d72314;
    }
    if (uVar46 != 0x2028) {
      if (uVar46 != 0xd) goto LAB_07d71d38;
      fVar64 = *(float *)(unaff_x22 + 0x308) + 0.0;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar64 = (float)(int)(fVar64 + fVar10);
      }
      *(float *)(unaff_x22 + 0x300) = fVar64;
      if (uVar79 != uVar5) {
        uVar46 = 0xd;
        goto LAB_07d72314;
      }
    }
LAB_07d71d54:
    if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
      fVar64 = *(float *)(unaff_x22 + 0x348);
      fVar52 = *(float *)(unaff_x22 + 0x15b8);
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar64 = fVar64 - fVar52;
      if ((fVar9 < ABS(fVar64)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        uVar57 = *(undefined4 *)(unaff_x22 + 0x338);
        uVar23 = *(undefined4 *)(unaff_x22 + 0x334);
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07d8f610(uVar57,uVar23);
        fVar52 = fVar64 + *(float *)(unaff_x22 + 0x2e8);
        *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar64;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar52 = (float)(int)(fVar52 + fVar10);
        }
        *(float *)(unaff_x22 + 0x2e8) = fVar52;
        if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
          Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                    (&stack0x00000170,unaff_x22 + 0x15f0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                    );
          memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
          thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
          *(float *)(unaff_x22 + 0xb00) = fVar64 + *(float *)(unaff_x22 + 0xb00);
          *(float *)(unaff_x22 + 0xb34) = fVar64 + *(float *)(unaff_x22 + 0xb34);
          memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
          FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                      );
        }
      }
    }
    fVar52 = *(float *)(unaff_x22 + 0x2e8);
    fVar53 = *(float *)(unaff_x22 + 0x34c) - fVar52;
    fVar64 = *(float *)(unaff_x22 + 900);
    if (fVar53 <= *(float *)(unaff_x22 + 900)) {
      fVar64 = fVar53;
    }
    fVar56 = *(float *)(unaff_x22 + 0x348);
    *(float *)(unaff_x22 + 900) = fVar64;
    *in_stack_00000040 = fVar64;
    lVar27 = *(long *)(unaff_x19 + 0x48);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar26 = *(uint *)(unaff_x22 + 0x350);
    if (*(uint *)(lVar27 + 0x18) <= uVar26) goto LAB_07d72b20;
    lVar31 = lVar27 + 0x20 + (long)(int)uVar26 * 0x60;
    uVar78 = *(uint *)(unaff_x22 + 0x338);
    *(uint *)(lVar31 + 0x18) = uVar78;
    lVar43 = 0x338;
    if ((int)uVar78 <= *(int *)(unaff_x22 + 0x340)) {
      lVar43 = 0x340;
    }
    uVar46 = *(uint *)(unaff_x22 + lVar43);
    *(uint *)(unaff_x22 + 0x340) = uVar46;
    *(uint *)(lVar31 + 0x1c) = uVar46;
    uVar37 = *(uint *)(unaff_x22 + 0x334);
    *(uint *)(unaff_x22 + 0x33c) = uVar37;
    *(uint *)(lVar31 + 0x20) = uVar37;
    uVar79 = *(uint *)(unaff_x22 + 0x340);
    if ((int)uVar46 <= (int)*(uint *)(unaff_x22 + 0x344)) {
      uVar79 = *(uint *)(unaff_x22 + 0x344);
    }
    *(uint *)(unaff_x22 + 0x344) = uVar79;
    *(uint *)(lVar31 + 0x24) = uVar79;
    lVar43 = *(long *)(unaff_x19 + 0x30);
    uVar38 = uVar79;
    if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
      if (lVar43 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar43 + 0x18) <= uVar37) goto LAB_07d72b20;
      if (*(float *)(lVar43 + (long)(int)uVar37 * 0x178 + 0x158) != 0.0) {
        uVar46 = uVar78;
        uVar38 = uVar37;
      }
    }
    lVar27 = lVar27 + 0x20 + (long)(int)uVar26 * 0x60;
    *(uint *)(lVar27 + 4) = (uVar37 - uVar78) + 1;
    iVar22 = *(int *)(unaff_x22 + 0x354);
    *(int *)(lVar27 + 8) = iVar22;
    *(uint *)(lVar27 + 0xc) = (uVar79 - (uVar78 + iVar22)) + 1;
    if (lVar43 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar43 + 0x18) <= uVar46) goto LAB_07d72b20;
    *(undefined4 *)(lVar27 + 0x50) = *(undefined4 *)(lVar43 + (long)(int)uVar46 * 0x178 + 0x118);
    *(float *)(lVar27 + 0x54) = fVar53;
    lVar27 = *(long *)(unaff_x19 + 0x48);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
    lVar43 = *(long *)(unaff_x19 + 0x30);
    if (lVar43 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar43 + 0x18) <= uVar38) goto LAB_07d72b20;
    fVar56 = fVar56 - fVar52;
    lVar27 = lVar27 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
    uVar57 = *(undefined4 *)(lVar43 + (long)(int)uVar38 * 0x178 + 0x124);
    *(float *)(lVar27 + 0x5c) = fVar56;
    *(undefined4 *)(lVar27 + 0x58) = uVar57;
    lVar27 = *(long *)(unaff_x19 + 0x48);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar78 = *(uint *)(unaff_x22 + 0x350);
    uVar26 = *(uint *)(lVar27 + 0x18);
    if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
      if (uVar26 <= uVar78) goto LAB_07d72b20;
      lVar43 = lVar27 + (long)(int)uVar78 * 0x60;
      fVar64 = *(float *)(lVar43 + 0x78) - fVar51 * fStack000000000000013c;
    }
    else {
      if (uVar26 <= uVar78) goto LAB_07d72b20;
      lVar31 = *(long *)(unaff_x19 + 0x30);
      if (lVar31 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar31 + 0x18) <= uVar38) goto LAB_07d72b20;
      lVar43 = lVar27 + (long)(int)uVar78 * 0x60;
      fVar64 = *(float *)(lVar31 + (long)(int)uVar38 * 0x178 + 0x158);
    }
    *(float *)(lVar43 + 0x48) = fVar64;
    if (uVar26 <= uVar78) goto LAB_07d72b20;
    lVar43 = lVar27 + 0x20 + (long)(int)uVar78 * 0x60;
    *(float *)(lVar43 + 0x40) = fStack0000000000000100;
    if (*(int *)(lVar43 + 4) == 1) {
      *(undefined4 *)(lVar27 + 0x20 + (long)(int)uVar78 * 0x60 + 0x4c) =
           *(undefined4 *)(unaff_x22 + 0x160);
    }
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar64 = (float)FUN_07d61798(*in_stack_00000148,0);
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar26 = *(uint *)(unaff_x22 + 0x344);
    uVar37 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar37 <= uVar26) goto LAB_07d72b20;
    uVar78 = *(uint *)(unaff_x22 + 0x350);
    lVar43 = *(long *)(unaff_x19 + 0x48);
    fVar64 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
             (*(float *)(unaff_x22 + 0x2f4) + fVar65 * (fStack00000000000000d0 + fVar69 + fVar64));
    if (*(char *)(lVar27 + 0x20 + (long)(int)uVar26 * 0x178 + 0x174) == '\0') {
      if (lVar43 == 0) goto LAB_07d72adc;
      uVar26 = *(uint *)(unaff_x22 + 0x33c);
      if (uVar37 <= uVar26) goto LAB_07d72b20;
    }
    else if (lVar43 == 0) goto LAB_07d72adc;
    bVar14 = *(uint *)(lVar43 + 0x18) <= uVar78;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      if (bVar14) goto LAB_07d72b20;
      fVar64 = -fVar64;
    }
    else if (bVar14) goto LAB_07d72b20;
    *(float *)(lVar43 + (long)(int)uVar78 * 0x60 + 0x5c) =
         *(float *)(lVar27 + 0x20 + (long)(int)uVar26 * 0x178 + 0x138) + fVar64;
    if (*(uint *)(lVar43 + 0x18) <= uVar78) goto LAB_07d72b20;
    lVar43 = lVar43 + (long)(int)uVar78 * 0x60;
    *(float *)(lVar43 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar43 + 0x58) = fVar53;
    *(float *)(lVar43 + 0x4c) = fVar76 * fVar49 + (fVar56 - fVar53);
    *(float *)(lVar43 + 0x50) = fVar56;
    uVar46 = *unaff_x21;
    if ((int)uVar46 < 0x2d) {
      if (uVar46 - 10 < 2) {
LAB_07d72208:
        FUN_07d79804();
        uVar21 = *(uint *)(unaff_x22 + 0x334);
        iVar22 = *(int *)(unaff_x22 + 0x350) + 1;
        *(uint *)(unaff_x22 + 0x338) = uVar21 + 1;
        *(int *)(unaff_x22 + 0x350) = iVar22;
        *(undefined8 *)(unaff_x22 + 0x354) = 0;
        if (*(long *)(unaff_x19 + 0x48) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar22) {
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07d8f790(iVar22);
            uVar21 = *puVar47;
          }
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 != 0) {
            if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
            fVar69 = *(float *)(unaff_x22 + 0x2ec);
            fVar64 = *(float *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x14c);
            if (fVar69 == DAT_015c55ac) {
              if ((*unaff_x21 == 0x2029) || (fVar52 = 0.0, *unaff_x21 == 10)) {
                fVar52 = *(float *)(in_stack_00000140 + 0x94);
              }
              uVar36 = 0;
              fVar69 = fVar64 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                       fVar76 * (fVar49 + *(float *)(unaff_x22 + 0x15bc));
            }
            else {
              if ((*unaff_x21 == 0x2029) || (fVar52 = 0.0, *unaff_x21 == 10)) {
                fVar52 = *(float *)(in_stack_00000140 + 0x94);
              }
              uVar36 = 1;
            }
            fVar69 = *(float *)(unaff_x22 + 0x2e8) + fVar69 + fVar65 * (fVar52 + 0.0);
            bVar15 = *(char *)(unaff_x22 + 0xf4) != '\0';
            *(undefined1 *)(unaff_x22 + 0x2f0) = uVar36;
            *(float *)(unaff_x22 + 0x15b8) = fVar64;
            fVar64 = *(float *)(unaff_x22 + 0x304) + 0.0 + *(float *)(unaff_x22 + 0x308);
            if (bVar15) {
              fVar69 = (float)(int)(fVar69 + fVar10);
            }
            *(float *)(unaff_x22 + 0x2e8) = fVar69;
            if (bVar15) {
              fVar64 = (float)(int)(fVar64 + fVar10);
            }
            *(undefined8 *)(unaff_x22 + 0x348) = uVar7;
            *(float *)(unaff_x22 + 0x300) = fVar64;
            FUN_07d79804();
            FUN_07d79804();
            *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
            bVar2 = 1;
            bVar15 = true;
            unaff_x29 = in_stack_00000148;
            goto LAB_07d72ac8;
          }
        }
        goto LAB_07d72adc;
      }
      if (uVar46 == 3) {
        if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
        uVar46 = 3;
        uVar77 = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
      }
    }
    else if ((uVar46 - 0x2028 < 2) || (uVar46 == 0x2d)) goto LAB_07d72208;
LAB_07d72314:
    uVar26 = *puVar47;
    if (uVar37 <= uVar26) goto LAB_07d72b20;
    lVar27 = lVar27 + 0x20;
    if (*(char *)(lVar27 + (long)(int)uVar26 * 0x178 + 0x174) != '\0') {
      lVar43 = lVar27 + (long)(int)uVar26 * 0x178;
      auVar60 = *(undefined1 (*) [16])(unaff_x22 + 0x36c);
      uVar28 = *(undefined8 *)(lVar43 + 0xf8);
      auVar62 = NEON_ext(auVar60,auVar60,8,1);
      uVar29 = *(undefined8 *)(lVar43 + 0x104);
      auVar63._0_4_ = -(uint)(auVar60._0_4_ < (float)uVar28);
      auVar63._4_4_ = -(uint)(auVar60._4_4_ < (float)((ulong)uVar28 >> 0x20));
      auVar63._8_4_ = -(uint)((float)uVar29 < auVar62._0_4_);
      auVar63._12_4_ = -(uint)((float)((ulong)uVar29 >> 0x20) < auVar62._4_4_);
      auVar62._8_8_ = uVar29;
      auVar62._0_8_ = uVar28;
      auVar60 = auVar60 ^ (auVar60 ^ auVar62) & ~auVar63;
      *(long *)(unaff_x22 + 0x374) = auVar60._8_8_;
      *(long *)(unaff_x22 + 0x36c) = auVar60._0_8_;
    }
    if (((uVar3 != 3) && (uVar3 != 0)) ||
       ((*(uint *)(in_stack_00000140 + 100) < 7 &&
        ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) != 0)))) {
      if (((bVar16 & 1) == 0) && (uVar46 != 0x200b)) {
        if (uVar46 == 0x2d) {
          if (0 < (int)uVar26) {
            if (uVar37 <= uVar26 - 1) goto LAB_07d72b20;
            uVar57 = *(undefined4 *)(lVar27 + (ulong)(uVar26 - 1) * 0x178);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar30 = FUN_066b9610(uVar57,0);
            if ((uVar30 & 1) != 0) {
              uVar46 = *unaff_x21;
              goto LAB_07d72408;
            }
          }
          goto LAB_07d72410;
        }
LAB_07d72408:
        if (uVar46 == 0xad) goto LAB_07d72410;
        if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
        if (bVar2 == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
          bVar2 = 0;
          goto LAB_07d72940;
        }
LAB_07d72618:
        if (bVar6 || *unaff_x21 != 0xad) {
LAB_07d72630:
          bVar2 = 1;
        }
        else {
LAB_07d72434:
          FUN_07d79804();
          bVar2 = 1;
        }
      }
      else {
LAB_07d72410:
        if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
        uVar46 = *unaff_x21;
        if ((int)uVar46 < 0x2007) {
          if (uVar46 == 0x2d) {
            uVar21 = *puVar47 - 1;
            if (0 < (int)*puVar47) {
              lVar27 = *(long *)(unaff_x19 + 0x30);
              if (lVar27 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
              uVar57 = *(undefined4 *)(lVar27 + (ulong)uVar21 * 0x178 + 0x20);
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar30 = FUN_066b9610(uVar57,0);
              if ((uVar30 & 1) != 0) goto LAB_07d72940;
            }
          }
          else if (uVar46 == 0xa0) goto LAB_07d72644;
        }
        else if (((uVar46 - 0x2007 < 0x29) &&
                 ((1L << ((ulong)(uVar46 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                (uVar46 == 0x2060)) {
LAB_07d72644:
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar30 = FUN_07d90128(uVar46,0);
          if ((uVar30 & 1) == 0) {
LAB_07d7268c:
            uVar26 = *unaff_x21;
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar30 = FUN_07d901bc(uVar26,0);
            if ((uVar30 & 1) == 0) {
              if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
                 (uVar21 = *puVar47 + 1, in_stack_00000028 <= (int)uVar21)) {
LAB_07d72418:
                if (bVar2 != 0) {
                  if ((bVar16 & 1) == 0) goto LAB_07d72618;
                  if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                  goto LAB_07d72630;
                }
                goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
              }
              lVar27 = *(long *)(unaff_x19 + 0x30);
              if (lVar27 != 0) {
                if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
                uVar57 = *(undefined4 *)(lVar27 + (long)(int)uVar21 * 0x178 + 0x20);
                if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                            0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar30 = FUN_07d901bc(uVar57,0);
                if ((uVar30 & 1) == 0) goto LAB_07d72418;
                lVar27 = *(long *)(unaff_x19 + 0x30);
                if (lVar27 != 0) {
                  if (*(uint *)(lVar27 + 0x18) <= *puVar47 + 1) goto LAB_07d72b20;
                  if (in_stack_00000018 != 0) {
                    uVar57 = *(undefined4 *)(lVar27 + (long)(int)(*puVar47 + 1) * 0x178 + 0x20);
                    lVar27 = FUN_07d86e90(in_stack_00000018,0);
                    if ((lVar27 != 0) && (lVar27 = FUN_07d98b58(lVar27,0), lVar27 != 0)) {
                      uVar21 = FUN_049ddf40(lVar27,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                      lVar27 = FUN_07d86e90(in_stack_00000018,0);
                      if ((lVar27 != 0) && (lVar27 = FUN_07d98b58(lVar27,0), lVar27 != 0)) {
                        uVar26 = FUN_049ddf40(lVar27,uVar57,*(undefined8 *)PTR_DAT_084b5110);
                        if (((uVar21 | uVar26) & 1) != 0) goto LAB_07d72940;
                        goto LAB_07d72934;
                      }
                    }
                  }
                }
              }
              goto LAB_07d72adc;
            }
            if (in_stack_00000018 == 0) goto LAB_07d72adc;
          }
          else {
            if ((in_stack_00000018 == 0) ||
               (lVar27 = FUN_07d86e90(in_stack_00000018,0), lVar27 == 0)) goto LAB_07d72adc;
            if (*(char *)(lVar27 + 0x28) != '\0') goto LAB_07d7268c;
          }
          lVar27 = FUN_07d86e90(in_stack_00000018,0);
          if ((lVar27 == 0) || (lVar27 = FUN_07d98b58(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
          uVar30 = FUN_049ddf40(lVar27,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
          if ((int)*puVar47 < (int)uVar5) {
            lVar27 = FUN_07d86e90(in_stack_00000018,0);
            if (lVar27 == 0) goto LAB_07d72adc;
            lVar27 = FUN_07d98da0(lVar27,0);
            lVar43 = *(long *)(unaff_x19 + 0x30);
            if (lVar43 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar43 + 0x18) <= *puVar47 + 1) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            if (lVar27 == 0) goto LAB_07d72adc;
            bVar17 = FUN_049ddf40(lVar27,*(undefined4 *)
                                          (lVar43 + (long)(int)(*puVar47 + 1) * 0x178 + 0x20),
                                  *(undefined8 *)PTR_DAT_084b5110);
            if ((uVar30 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
            bVar2 = bVar17 & bVar2;
            bVar16 = bVar2 & bVar16;
            if ((bVar2 != 0) || (((bVar17 ^ 1) & 1) != 0)) goto LAB_07d728a8;
            bVar2 = 0;
          }
          else {
            bVar17 = 0;
            if ((uVar30 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
            if ((bVar2 & uVar21 == uVar24) == 0) goto LAB_07d72940;
            bVar2 = 1;
LAB_07d728a8:
            FUN_07d79804();
            bVar16 = bVar16 & 1;
          }
          if (bVar16 == 0) goto LAB_07d72940;
          goto LAB_07d72934;
        }
        bVar2 = 0;
        *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
      }
LAB_07d72934:
      FUN_07d79804();
    }
LAB_07d72940:
    FUN_07d79804();
    *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
    unaff_x29 = in_stack_00000148;
  }
LAB_07d72ac8:
  lVar27 = *(long *)(unaff_x22 + 0x20);
  uVar77 = uVar77 + 1;
  if (lVar27 == 0) goto LAB_07d72adc;
  goto LAB_07d6edd8;
}


