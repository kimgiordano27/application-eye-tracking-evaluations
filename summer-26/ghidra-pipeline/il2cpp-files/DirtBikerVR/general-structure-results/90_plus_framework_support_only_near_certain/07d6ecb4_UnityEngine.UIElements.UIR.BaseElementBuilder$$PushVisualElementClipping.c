/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.BaseElementBuilder$$PushVisualElementClipping
ENTRY_POINT: 07d6ecb4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_7;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_UIElements_UIR_BaseElementBuilder__PushVisualElementClipping(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 *puVar24;
  char cVar25;
  undefined1 uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  float *pfVar30;
  float *pfVar31;
  int *piVar32;
  long *plVar33;
  long lVar34;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar35;
  uint *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar36;
  uint uVar37;
  uint *unaff_x25;
  int iVar38;
  long *unaff_x29;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float unaff_s8;
  float fVar57;
  float fVar58;
  float unaff_s9;
  float fVar59;
  float unaff_s10;
  float fVar60;
  float unaff_s11;
  float fVar61;
  float unaff_s12;
  float fVar62;
  float unaff_s13;
  float fVar63;
  float fVar64;
  float fVar65;
  float unaff_s15;
  int iStack000000000000000c;
  long in_stack_00000018;
  int iStack0000000000000028;
  undefined8 in_stack_00000030;
  float *in_stack_00000040;
  float in_stack_00000050;
  uint in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000090;
  ulong in_stack_000000a8;
  uint in_stack_000000b0;
  float fStack00000000000000c4;
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
  uint uVar66;
  uint uVar67;
  uint uVar68;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
  FUN_07d79804();
  FUN_07d79804();
  FUN_0591393c(unaff_x22 + 0x15f0,*unaff_x20);
  lVar29 = *(long *)(unaff_x22 + 0x20);
  *(undefined1 *)(unaff_x22 + 0x4d) = 0;
  fVar7 = DAT_015c5994;
  fVar6 = DAT_015c5798;
  uVar66 = 0;
  if (lVar29 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iStack000000000000000c = 0;
  fVar55 = unaff_s12 * DAT_015c5994;
  pcVar1 = (char *)(unaff_x22 + 0x1588);
  if (unaff_s11 <= 0.0) {
    unaff_s11 = 0.0;
  }
  iVar38 = 0;
  bVar5 = false;
  uVar4 = iStack0000000000000028 - 1;
  fVar53 = unaff_s11 + DAT_015c5c68;
  fVar65 = (unaff_s13 / unaff_s9) * unaff_s8;
  fVar39 = unaff_s10 + DAT_015c5c68;
  bVar9 = true;
  bVar2 = 1;
  fStack000000000000013c = 0.0;
  fVar40 = fVar65;
  fStack00000000000000c4 = unaff_s15;
  fStack0000000000000100 = fVar53;
LAB_07d6edd8:
  if ((int)*(uint *)(lVar29 + 0x18) <= (int)uVar66) {
LAB_07d72ae0:
    FUN_07d797b8();
    return;
  }
  if (*(uint *)(lVar29 + 0x18) <= uVar66) goto LAB_07d72b20;
  uVar12 = *(uint *)(lVar29 + (long)(int)uVar66 * 0x10 + 0x24);
  if (uVar12 == 0) goto LAB_07d72ae0;
  *unaff_x21 = uVar12;
  if (5 < iVar38) {
    uVar18 = FUN_0676d8dc();
    uVar19 = FUN_0674e2a4(&stack0x0000112c,0);
    uVar18 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar18,
                          *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar19,0);
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
    }
    FUN_07c4fb40(uVar18,0);
    uVar12 = *unaff_x21;
    in_stack_00001190 = CONCAT44(3,*unaff_x25);
  }
  if (uVar12 == 0x1a) goto LAB_07d72ac8;
  if ((uVar12 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
    pcVar1[0] = '\x01';
    pcVar1[1] = '\x01';
    uVar20 = FUN_07d74ca8();
    if (((uVar20 & 1) != 0) && (uVar66 = in_stack_000010fc, *pcVar1 == '\x01')) goto LAB_07d72ac8;
  }
  else {
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    *pcVar1 = *(char *)(lVar29 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar29 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar29 + 0x40);
    thunk_FUN_03afed3c(unaff_x29);
  }
  lVar29 = *(long *)(unaff_x19 + 0x30);
  if (lVar29 == 0) goto LAB_07d72adc;
  uVar17 = *(uint *)(unaff_x22 + 0x334);
  uVar12 = *(uint *)(lVar29 + 0x18);
  if (uVar12 <= uVar17) goto LAB_07d72b20;
  lVar34 = lVar29 + 0x20;
  uVar67 = (uint)in_stack_00001190;
  uVar46 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar25 = *(char *)(lVar34 + (long)(int)uVar17 * 0x178 + 0x3c);
  *(undefined1 *)(unaff_x22 + 0x1589) = 0;
  if (uVar67 == uVar17) {
    uVar15 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar15;
    *pcVar1 = '\x01';
    if (uVar15 != 0x2026) {
      if (uVar15 != 3) goto LAB_07d6efec;
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      uVar12 = *unaff_x25;
      lVar21 = FUN_07d61598(*unaff_x29,0);
      if (lVar21 == 0) goto LAB_07d72adc;
      uVar18 = FUN_060344a4(lVar21,3,*(undefined8 *)
                                      System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                           );
      if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
      *(undefined8 *)(lVar34 + (long)(int)uVar12 * 0x178 + 0x10) = uVar18;
      thunk_FUN_03afed3c();
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      goto LAB_07d6efec;
    }
    if (uVar12 <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(lVar34 + (long)(int)*unaff_x25 * 0x178 + 0x10) =
         *(undefined8 *)(unaff_x22 + 0x19f8);
    thunk_FUN_03afed3c();
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    *(undefined8 *)(lVar29 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
    *(undefined1 *)(lVar29 + 0x28) = 1;
    thunk_FUN_03afed3c();
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x50) =
         *(undefined8 *)(unaff_x22 + 0x1a08);
    thunk_FUN_03afed3c();
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x58) =
         *(undefined4 *)(unaff_x22 + 0x1a10);
    lVar29 = *(long *)(unaff_x22 + 0x15c0);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
    *(int *)(lVar29 + 0x54) = *(int *)(lVar29 + 0x54) + 1;
    uVar12 = *(uint *)(unaff_x22 + 0x334);
    *(undefined1 *)(unaff_x22 + 0x4d) = 1;
    in_stack_00001190 = CONCAT44(3,uVar12 + 1);
  }
  else {
LAB_07d6efec:
    uVar12 = *unaff_x25;
  }
  unaff_x23 = in_stack_00000140;
  if (((int)uVar12 < 0) && (*unaff_x21 != 3)) {
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)uVar12 * 0x178;
    *(undefined1 *)(lVar29 + 0x194) = 0;
    *(undefined4 *)(lVar29 + 0x20) = 0x200b;
    *(undefined4 *)(lVar29 + 100) = 0;
    *unaff_x25 = uVar12 + 1;
  }
  else {
    cVar3 = *pcVar1;
    if (cVar3 == '\x01') {
      uVar12 = *(uint *)(unaff_x22 + 300);
      if ((uVar12 >> 4 & 1) == 0) {
        if ((uVar12 >> 3 & 1) == 0) {
          fVar54 = 1.0;
          if ((uVar12 >> 5 & 1) != 0) {
            uVar12 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar20 = FUN_066bbc7c(uVar12,0);
            fVar54 = 1.0;
            if ((uVar20 & 1) != 0) {
              uVar12 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar12 = FUN_066bbf04(uVar12,0);
              fVar54 = fVar6;
              goto LAB_07d6f260;
            }
          }
        }
        else {
          uVar12 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar20 = FUN_066bbbdc(uVar12,0);
          fVar54 = 1.0;
          if ((uVar20 & 1) != 0) {
            uVar12 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar12 = FUN_066bc07c(uVar12,0);
            goto LAB_07d6f25c;
          }
        }
      }
      else {
        uVar12 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar20 = FUN_066bbc7c(uVar12,0);
        fVar54 = 1.0;
        if ((uVar20 & 1) != 0) {
          uVar12 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar12 = FUN_066bbf04(uVar12,0);
LAB_07d6f25c:
          fVar54 = 1.0;
LAB_07d6f260:
          *unaff_x21 = uVar12 & 0xffff;
        }
      }
      cVar3 = *pcVar1;
    }
    else {
      fVar54 = 1.0;
    }
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (cVar3 == '\x01') {
      if (lVar29 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(unaff_x22 + 0x1598) =
           *(undefined8 *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x30);
      thunk_FUN_03afed3c(unaff_x22 + 0x1598);
      if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
      lVar29 = *(long *)(unaff_x19 + 0x30);
      if (lVar29 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *unaff_x29 = *(long *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x40);
      thunk_FUN_03afed3c(unaff_x29);
      lVar29 = *(long *)(unaff_x19 + 0x30);
      if (lVar29 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *in_stack_00000090 = *(long *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x50);
      thunk_FUN_03afed3c();
      lVar29 = *(long *)(unaff_x19 + 0x30);
      if (lVar29 == 0) goto LAB_07d72adc;
      uVar15 = *unaff_x25;
      uVar12 = *(uint *)(lVar29 + 0x18);
      if (uVar12 <= uVar15) goto LAB_07d72b20;
      *(undefined4 *)(unaff_x22 + 0x78) =
           *(undefined4 *)(lVar29 + 0x20 + (long)(int)uVar15 * 0x178 + 0x38);
      if (uVar67 == uVar17) {
        lVar34 = *(long *)(unaff_x22 + 0x20);
        if (lVar34 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar34 + 0x18) <= uVar66) goto LAB_07d72b20;
        if ((*(int *)(lVar34 + (long)(int)uVar66 * 0x10 + 0x24) != 10) ||
           (uVar15 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
        if (uVar12 <= uVar15 - 1) goto LAB_07d72b20;
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar59 = *(float *)(lVar29 + 0x20 + (long)(int)(uVar15 - 1) * 0x178 + 0x40);
        fVar40 = (float)FUN_07d5328c(*unaff_x29 + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar41 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
        fVar41 = ((fVar54 * fVar59) / fVar40) * fVar41;
LAB_07d6f900:
        fStack00000000000000f4 = 0.0;
        fStack00000000000000f8 = 0.0;
        if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
      }
      else {
LAB_07d6f408:
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar59 = *(float *)(unaff_x22 + 0xf8);
        fVar40 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar41 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
        fVar41 = ((fVar54 * fVar59) / fVar40) * fVar41;
        if (uVar67 == uVar17) goto LAB_07d6f900;
LAB_07d6f918:
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fStack00000000000000f8 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fStack00000000000000f4 = (float)FUN_07d532ec(*unaff_x29 + 0xb0,0);
      }
      lVar29 = *(long *)(unaff_x22 + 0x1598);
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_07d72adc;
      fVar40 = *(float *)(unaff_x22 + 0xf0);
      fVar59 = *(float *)(lVar29 + 0x2c);
      fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar29 + 0x20),0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar42 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar43 = *(float *)(unaff_x22 + 0xf0);
      fVar45 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
      lVar29 = *(long *)(unaff_x19 + 0x30);
      fVar45 = fVar41 * fVar42 * fVar43 * fVar45;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar45 = (float)(int)(fVar45 + unaff_s15);
      }
      if (lVar29 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar34 = lVar29 + (long)(int)*unaff_x25 * 0x178;
      *(undefined1 *)(lVar34 + 0x28) = 1;
      fStack00000000000000e8 = fVar41 * fVar40 * fVar59 * fStack00000000000000e8;
      *(float *)(lVar34 + 0x160) = fStack00000000000000e8;
      fStack000000000000013c = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
      uVar12 = *unaff_x21;
      fVar59 = 0.0;
      if (uVar12 != 3 && uVar12 != 0xad) {
        fVar59 = fStack00000000000000e8;
      }
    }
    else {
      if (cVar3 == '\x02') {
        if (lVar29 != 0) {
          if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          plVar35 = *(long **)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x30);
          if (plVar35 != (long *)0x0) {
            bVar10 = *(byte *)(*(long *)
                                Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                              + 0x130);
            if ((*(byte *)(*plVar35 + 0x130) < bVar10) ||
               (*(long *)(*(long *)(*plVar35 + 200) + (ulong)bVar10 * 8 + -8) !=
                *(long *)
                 Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar35);
            }
            plVar22 = (long *)FUN_07d8466c(plVar35,0);
            if (plVar22 == (long *)0x0) {
              plVar22 = (long *)0x0;
              *in_stack_000000e0 = 0;
            }
            else {
              lVar29 = *(long *)
                        Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
              bVar10 = *(byte *)(lVar29 + 0x130);
              if (*(byte *)(*plVar22 + 0x130) < bVar10) {
                plVar33 = (long *)0x0;
              }
              else {
                plVar33 = plVar22;
                if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar10 * 8 + -8) != lVar29) {
                  plVar33 = (long *)0x0;
                }
              }
              *in_stack_000000e0 = (long)plVar33;
              if (*(byte *)(*plVar22 + 0x130) < bVar10) {
                plVar22 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar10 * 8 + -8) != lVar29) {
                plVar22 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(in_stack_000000e0,plVar22);
            iVar13 = FUN_07d85970(plVar35,0);
            *(int *)(unaff_x22 + 0x158c) = iVar13;
            if (*unaff_x21 == 0x3c) {
              *unaff_x21 = iVar13 + 0xe000;
            }
            else {
              uVar14 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0)
              ;
              *(undefined4 *)(unaff_x22 + 0x1590) = uVar14;
            }
            if (*(long *)(unaff_x22 + 0x68) != 0) {
              fVar59 = *(float *)(unaff_x22 + 0xf8);
              FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
              memcpy(&stack0x00001130,&stack0x000011a0,0x60);
              fVar40 = (float)FUN_07d5328c(&stack0x00001130,0);
              if (*unaff_x29 != 0) {
                FUN_07d60d20(&stack0x00000170,*unaff_x29,0);
                memcpy(&stack0x00001130,&stack0x00000170,0x60);
                fVar41 = (float)FUN_07d53294(&stack0x00001130,0);
                if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                fVar41 = (fVar59 / fVar40) * fVar41;
                fVar40 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                fVar59 = *(float *)(unaff_x22 + 0xf8);
                if (fVar40 <= 0.0) {
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar40 = (float)FUN_07d5328c(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar42 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
                  if (plVar35[4] == 0) goto LAB_07d72adc;
                  FUN_07d53750(&stack0x000011a0,plVar35[4],0);
                  fVar43 = (float)FUN_07d53580(&stack0x000010e0,0);
                  if (plVar35[4] == 0) goto LAB_07d72adc;
                  fVar57 = *(float *)((long)plVar35 + 0x2c);
                  fVar44 = (float)FUN_07d5378c(plVar35[4],0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar63 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
                  if (*unaff_x29 == 0) goto LAB_07d72adc;
                  fVar58 = *(float *)(unaff_x22 + 0xf0);
                  fVar45 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
                  if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (fVar59 / fVar40) * fStack00000000000000f4;
                  fStack00000000000000e8 =
                       fStack00000000000000f4 * (fVar42 / fVar43) * fVar57 * fVar44;
                  fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                  fVar45 = fVar41 * fVar63 * fVar58 * fVar45;
                  fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                  fVar40 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                  fStack00000000000000f4 = fStack00000000000000f4 * fVar40;
                }
                else {
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar40 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar42 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (plVar35[4] == 0) goto LAB_07d72adc;
                  fVar57 = *(float *)((long)plVar35 + 0x2c);
                  fVar43 = (float)FUN_07d5378c(plVar35[4],0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar44 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar63 = *(float *)(unaff_x22 + 0xf0);
                  fVar45 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                  fVar45 = fVar41 * fVar44 * fVar63 * fVar45;
                  fStack00000000000000e8 = (fVar59 / fVar40) * fVar42 * fVar57 * fVar43;
                  fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0)
                  ;
                }
                unaff_s15 = fStack00000000000000c4;
                *(long **)(unaff_x22 + 0x1598) = plVar35;
                thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar35);
                lVar29 = *(long *)(unaff_x19 + 0x30);
                if (lVar29 != 0) {
                  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                  lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
                  *(long *)(lVar29 + 0x48) = *in_stack_000000e0;
                  *(undefined1 *)(lVar29 + 0x28) = 2;
                  *(float *)(lVar29 + 0x160) = fStack00000000000000e8;
                  thunk_FUN_03afed3c();
                  lVar29 = *(long *)(unaff_x19 + 0x30);
                  if (lVar29 != 0) {
                    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                    *(long *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x40) = *unaff_x29;
                    thunk_FUN_03afed3c();
                    lVar29 = *(long *)(unaff_x19 + 0x30);
                    if (lVar29 != 0) {
                      if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                      *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x58) =
                           *(undefined4 *)(unaff_x22 + 0x78);
                      fStack000000000000013c = 0.0;
                      *(undefined4 *)(unaff_x22 + 0x78) = uVar46;
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
      uVar12 = *unaff_x21;
      fVar59 = 0.0;
      if (uVar12 != 3 && uVar12 != 0xad) {
        fVar59 = fVar40;
      }
      fVar45 = 0.0;
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      fStack00000000000000e8 = fVar40;
      if (lVar29 == 0) goto LAB_07d72adc;
    }
    fVar40 = fVar59;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    *(uint *)(lVar29 + 0x20) = uVar12;
    *(undefined4 *)(lVar29 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
    *(undefined4 *)(lVar29 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x168) =
         *(undefined4 *)(unaff_x22 + 0x1b8);
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined4 *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 0x170) =
         *(undefined4 *)(unaff_x22 + 0x1bc);
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    auVar49 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
    *(undefined4 *)(lVar29 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
    *(long *)(lVar29 + 0x184) = auVar49._8_8_;
    *(long *)(lVar29 + 0x17c) = auVar49._0_8_;
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar12 = *(uint *)(unaff_x22 + 0x334);
    uVar15 = *(uint *)(lVar29 + 0x18);
    if (uVar15 <= uVar12) goto LAB_07d72b20;
    lVar34 = lVar29 + 0x20 + (long)(int)uVar12 * 0x178;
    uVar68 = *(uint *)(unaff_x22 + 300);
    *(uint *)(lVar34 + 0x170) = uVar68;
    if (*(int *)(unaff_x22 + 0x13c) == 700) {
      *(uint *)(lVar34 + 0x170) = uVar68 | 1;
      uVar12 = *unaff_x25;
    }
    if (uVar15 <= uVar12) goto LAB_07d72b20;
    lVar29 = *(long *)(lVar29 + 0x20 + (long)(int)uVar12 * 0x178 + 0x18);
    if (lVar29 == 0) {
      if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
         (lVar29 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar29 == 0)) goto LAB_07d72adc;
      FUN_07d53750(&stack0x000011a0,lVar29,0);
    }
    else {
      FUN_07d53750(&stack0x00000510,lVar29,0);
    }
    uVar12 = *unaff_x21;
    if (uVar12 >> 0x10 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      bVar10 = FUN_066b9610(uVar12,0);
    }
    else {
      bVar10 = 0;
    }
    fVar59 = *(float *)(in_stack_00000140 + 0x8c);
    if (((in_stack_000000a8 & 0x100000000) != 0) && (*pcVar1 == '\x01')) {
      if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
      uVar12 = *unaff_x25;
      uVar15 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
      if ((int)uVar12 < (int)uVar4) {
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar12 = uVar12 + 1;
        if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
        if (*(char *)(lVar29 + 0x20 + (long)(int)uVar12 * 0x178 + 8) == '\x01') {
          lVar29 = *(long *)(lVar29 + 0x20 + (long)(int)uVar12 * 0x178 + 0x10);
          if ((((lVar29 == 0) || (*unaff_x29 == 0)) ||
              (lVar34 = *(long *)(*unaff_x29 + 0x170), lVar34 == 0)) ||
             (lVar34 = *(long *)(lVar34 + 0x40), lVar34 == 0)) goto LAB_07d72adc;
          uVar20 = FUN_05ffa6e0(lVar34,uVar15 | *(int *)(lVar29 + 0x28) << 0x10,&stack0x000010b0,
                                *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo)
          ;
          if ((uVar20 & 1) != 0) {
            FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
            FUN_07d57c94(&stack0x00001090,0);
            uVar20 = FUN_07d57e7c(&stack0x000010b0,0);
            if ((uVar20 & 0x100) != 0) {
              fVar59 = 0.0;
            }
          }
        }
        uVar12 = *unaff_x25;
      }
      uVar68 = uVar12 - 1;
      if (0 < (int)uVar12) {
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= uVar68) goto LAB_07d72b20;
        lVar34 = *(long *)(lVar29 + 0x20 + (ulong)uVar68 * 0x178 + 0x10);
        if (lVar34 == 0) goto LAB_07d72adc;
        if (*(char *)(lVar29 + 0x20 + (ulong)uVar68 * 0x178 + 8) == '\x01') {
          if (((*unaff_x29 == 0) || (lVar29 = *(long *)(*unaff_x29 + 0x170), lVar29 == 0)) ||
             (lVar29 = *(long *)(lVar29 + 0x40), lVar29 == 0)) goto LAB_07d72adc;
          uVar20 = FUN_05ffa6e0(lVar29,*(uint *)(lVar34 + 0x28) | uVar15 << 0x10,&stack0x000010b0,
                                *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo)
          ;
          if ((uVar20 & 1) != 0) {
            FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
            FUN_07d57c94(&stack0x00001090,0);
            unaff_s15 = fStack00000000000000c4;
            FUN_07d57af4(0);
            uVar20 = FUN_07d57e7c(&stack0x000010b0,0);
            if ((uVar20 & 0x100) != 0) {
              fVar59 = 0.0;
            }
          }
        }
      }
      lVar29 = *(long *)(unaff_x19 + 0x30);
      if (lVar29 == 0) goto LAB_07d72adc;
      uVar12 = *unaff_x25;
      uVar46 = FUN_07d57ad0(&stack0x00001100,0);
      if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
      *(undefined4 *)(lVar29 + (long)(int)uVar12 * 0x178 + 0x154) = uVar46;
    }
    uVar12 = *unaff_x21;
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    bVar11 = FUN_07d8fcc4(uVar12,0);
    uVar12 = *unaff_x25;
    uVar20 = (ulong)uVar12;
    if ((bVar11 & 1) == 0) {
      if (0 < (int)uVar12) {
        if ((((in_stack_00000060 & 1) == 0) ||
            (uVar15 = *(uint *)(unaff_x22 + 0x19cc), uVar15 == 0x80000000)) ||
           (uVar15 != uVar12 - 1)) {
          if ((_iStack0000000000000028 & 0x100000000) == 0) {
            bVar8 = false;
          }
          else {
            lVar29 = uVar20 * 0x178 + 0x144;
            uVar36 = uVar20;
            do {
              uVar36 = uVar36 - 1;
              iVar13 = (int)uVar20;
              uVar12 = iVar13 - 1;
              uVar20 = (ulong)uVar12;
              if ((iVar13 < 1) || (uVar36 == *(uint *)(unaff_x22 + 0x19cc))) {
                bVar8 = false;
                goto LAB_07d71064;
              }
              lVar34 = *(long *)(unaff_x19 + 0x30);
              if (lVar34 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar34 + 0x18) <= uVar36) goto LAB_07d72b20;
              lVar34 = *(long *)(lVar34 + lVar29 + -0x28c);
              if ((lVar34 == 0) || (lVar34 = FUN_07d88988(lVar34,0), lVar34 == 0))
              goto LAB_07d72adc;
              uVar15 = FUN_07d53740(lVar34,0);
              if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
              iVar13 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
              if (((*unaff_x29 == 0) || (lVar34 = FUN_07d61740(*unaff_x29,0), lVar34 == 0)) ||
                 (*(long *)(lVar34 + 0x50) == 0)) goto LAB_07d72adc;
              uVar23 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                                 (*(long *)(lVar34 + 0x50),uVar15 | iVar13 << 0x10,&stack0x00001050,
                                  *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
              lVar29 = lVar29 + -0x178;
              unaff_x29 = in_stack_00000148;
            } while ((uVar23 & 1) == 0);
            if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
            if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar12) goto LAB_07d72b20;
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
            fVar59 = 0.0;
            bVar8 = true;
          }
LAB_07d71064:
          if ((in_stack_00000060 & 1) != 0) {
            uVar12 = *(uint *)(unaff_x22 + 0x19cc);
            if (uVar12 == 0x80000000) {
              bVar8 = true;
            }
            if (!bVar8) {
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
              lVar29 = *(long *)(lVar29 + (long)(int)uVar12 * 0x178 + 0x30);
              if ((lVar29 == 0) || (lVar29 = FUN_07d88988(lVar29,0), lVar29 == 0))
              goto LAB_07d72adc;
              uVar12 = FUN_07d53740(lVar29,0);
              if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
              iVar13 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
              if (((*unaff_x29 == 0) || (lVar29 = FUN_07d61740(*unaff_x29,0), lVar29 == 0)) ||
                 (*(long *)(lVar29 + 0x48) == 0)) goto LAB_07d72adc;
              uVar20 = FUN_06008730(*(long *)(lVar29 + 0x48),uVar12 | iVar13 << 0x10,
                                    &stack0x00001038,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
              unaff_x29 = in_stack_00000148;
              if ((uVar20 & 1) != 0) {
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
                  puVar24 = &stack0x00001038;
                  goto LAB_07d711ec;
                }
                goto LAB_07d72adc;
              }
            }
          }
        }
        else {
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= uVar15) goto LAB_07d72b20;
          lVar29 = *(long *)(lVar29 + (long)(int)uVar15 * 0x178 + 0x30);
          if ((lVar29 == 0) || (lVar29 = FUN_07d88988(lVar29,0), lVar29 == 0)) goto LAB_07d72adc;
          uVar12 = FUN_07d53740(lVar29,0);
          if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
          iVar13 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
          if (((*unaff_x29 == 0) || (lVar29 = FUN_07d61740(*unaff_x29,0), lVar29 == 0)) ||
             (*(long *)(lVar29 + 0x48) == 0)) goto LAB_07d72adc;
          uVar20 = FUN_06008730(*(long *)(lVar29 + 0x48),uVar12 | iVar13 << 0x10,&stack0x00001078,
                                *(undefined8 *)
                                 UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
          unaff_x29 = in_stack_00000148;
          if ((uVar20 & 1) != 0) {
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
            puVar24 = &stack0x00001078;
LAB_07d711ec:
            FUN_07d580a8(puVar24,0);
            FUN_07d58068(&stack0x00001068,0);
            FUN_07d57ac8(&stack0x00001100,0);
            fVar59 = 0.0;
            unaff_x29 = in_stack_00000148;
          }
        }
      }
    }
    else {
      *(uint *)(unaff_x22 + 0x19cc) = uVar12;
    }
    fVar41 = (float)FUN_07d57ac0(&stack0x00001100,0);
    fVar42 = (float)FUN_07d57ac0(&stack0x00001100,0);
    if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
      fVar43 = *(float *)(unaff_x22 + 0x300);
      fVar57 = (float)FUN_07d53598(&stack0x00001110,0);
      fVar43 = fVar43 - fVar40 * fVar57 * (1.0 - *(float *)(unaff_x22 + 0x15a4));
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar43 = (float)(int)(fVar43 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar43;
      if (((bVar10 & 1) != 0) || (*unaff_x21 == 0x200b)) {
        fVar43 = fVar43 - fVar55 * *(float *)(in_stack_00000140 + 0x90);
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar43 = (float)(int)(fVar43 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar43;
      }
    }
    fVar43 = *(float *)(unaff_x22 + 0x2f8);
    fVar57 = 0.0;
    if (fVar43 != 0.0) {
      uVar12 = *unaff_x21;
      if (uVar12 != 0x200b) {
        if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar12)) ||
           (fVar57 = 0.25, (1L << ((ulong)uVar12 & 0x3f) & 0x400500000000000U) == 0)) {
          fVar57 = 0.5;
        }
        fVar44 = (float)FUN_07d53578(&stack0x00001110,0);
        fVar63 = (float)FUN_07d53588(&stack0x00001110,0);
        fVar57 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                 (fVar43 * fVar57 - fVar40 * (fVar44 * 0.5 + fVar63));
        fVar43 = fVar57 + *(float *)(unaff_x22 + 0x300);
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar43 = (float)(int)(fVar43 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar43;
      }
    }
    if (*unaff_x29 == 0) goto LAB_07d72adc;
    iVar13 = FUN_07d616d4(*unaff_x29,0);
    if (iVar13 == 0x1015) {
      bVar8 = false;
    }
    else {
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      iVar13 = FUN_07d616d4(*unaff_x29,0);
      bVar8 = iVar13 != 0x11014;
    }
    if ((cVar25 == '\0') && (*pcVar1 == '\x01')) {
      lVar29 = *(long *)(unaff_x19 + 0x30);
      if (lVar29 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      if ((*(byte *)(lVar29 + (long)(int)*unaff_x25 * 0x178 + 400) & 1) == 0) goto LAB_07d701e4;
      if (bVar8) {
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          iVar13 = FUN_07d616c4(*unaff_x29,0);
          fVar44 = (float)(iVar13 + 1);
        }
        else {
          lVar29 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar29 == 0) goto LAB_07d72adc;
          uVar20 = thunk_FUN_07c662cc(lVar29,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar20 & 1) == 0) goto LAB_07d70594;
          lVar29 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar29 == 0) goto LAB_07d72adc;
          fVar44 = (float)thunk_FUN_07c69050(lVar29,*(undefined4 *)
                                                     (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        }
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar43 = (float)FUN_07d617a8(*unaff_x29,0);
        fVar43 = fVar44 * fVar43 * 0.25;
        if (fVar44 < fStack000000000000013c + fVar43) {
          fStack000000000000013c = fVar44 - fVar43;
        }
      }
      else {
        fVar43 = 0.0;
      }
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fStack00000000000000d0 = (float)FUN_07d617b8(*unaff_x29,0);
    }
    else {
LAB_07d701e4:
      fStack00000000000000d0 = 0.0;
      if (bVar8) {
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          iVar13 = FUN_07d616c4(*unaff_x29,0);
          fVar44 = (float)(iVar13 + 1);
        }
        else {
          lVar29 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar29 == 0) goto LAB_07d72adc;
          uVar20 = thunk_FUN_07c662cc(lVar29,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar20 & 1) == 0) goto LAB_07d70290;
          lVar29 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar29 == 0) goto LAB_07d72adc;
          fVar44 = (float)thunk_FUN_07c69050(lVar29,*(undefined4 *)
                                                     (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        }
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar43 = fVar44 * *(float *)(*unaff_x29 + 400) * 0.25;
        if (fVar44 < fStack000000000000013c + fVar43) {
          fStack000000000000013c = fVar44 - fVar43;
        }
      }
      else {
        fVar43 = 0.0;
      }
    }
    fVar58 = *(float *)(unaff_x22 + 0x300);
    fVar44 = (float)FUN_07d53588(&stack0x00001110,0);
    fVar60 = *(float *)(unaff_x22 + 0x19b0);
    fVar63 = (float)FUN_07d57ab0(&stack0x00001100,0);
    fVar58 = fVar58 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                      fVar40 * (fVar63 + ((fVar44 * fVar60 - fStack000000000000013c) - fVar43));
    fVar44 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar63 = (float)FUN_07d57ac0(&stack0x00001100,0);
    fVar44 = fVar40 * (fStack000000000000013c + fVar44 + fVar63);
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar44 = (float)(int)(fVar44 + unaff_s15);
    }
    fStack0000000000000150 =
         *(float *)(unaff_x22 + 0x188) + ((fVar45 + fVar44) - *(float *)(unaff_x22 + 0x2e8));
    fVar44 = (float)FUN_07d53580(&stack0x00001110,0);
    fVar60 = fStack0000000000000150 -
             fVar40 * (fStack000000000000013c + fStack000000000000013c + fVar44);
    fVar44 = (float)FUN_07d53578(&stack0x00001110,0);
    fVar44 = fVar58 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                      fVar40 * (fVar43 + fVar43 +
                               fStack000000000000013c + fStack000000000000013c +
                               fVar44 * *(float *)(unaff_x22 + 0x19b0));
    fVar61 = fVar44;
    fVar63 = fVar58;
    if (((cVar25 == '\0') && (*pcVar1 == '\x01')) && ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      iVar13 = *(int *)(unaff_x22 + 0x19ac);
      fVar63 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar47 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      fVar62 = *(float *)(unaff_x22 + 0xf0);
      fVar64 = *(float *)(unaff_x22 + 0x188);
      fVar61 = (float)iVar13 * fVar7;
      fVar56 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
      fVar56 = fVar56 * fVar62 * (fVar63 - (fVar47 + fVar64)) * 0.5;
      fVar63 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar64 = fVar61 * fVar40 * ((fVar43 + fStack000000000000013c + fVar63) - fVar56);
      fVar47 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar62 = (float)FUN_07d53580(&stack0x00001110,0);
      fStack0000000000000150 = fStack0000000000000150 + 0.0;
      fVar63 = fVar58 + fVar64;
      fVar60 = fVar60 + 0.0;
      fVar61 = fVar61 * fVar40 * ((((fVar47 - fVar62) - fStack000000000000013c) - fVar43) - fVar56);
      fVar58 = fVar58 + fVar61;
      fVar61 = fVar44 + fVar61;
      unaff_s15 = fStack00000000000000c4;
      fVar44 = fVar44 + fVar64;
    }
    uVar19 = *in_stack_000000c8;
    uVar18 = in_stack_000000c8[1];
    if (DAT_08974d8a == '\0') {
      FUN_03a8a718(PTR_DAT_08486860);
      DAT_08974d8a = '\x01';
    }
    uVar48 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
    uVar50 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
    if (DAT_015c5bb4 <
        (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar50 >> 0x20) +
        (float)uVar18 * (float)uVar50 +
        (float)uVar19 * (float)uVar48 +
        (float)((ulong)uVar19 >> 0x20) * (float)((ulong)uVar48 >> 0x20)) {
      fVar43 = 0.0;
      auVar49._4_12_ = SUB1612(ZEXT816(0),4);
      auVar49._0_4_ = fVar60;
      uVar19 = auVar49._0_8_;
      uVar20 = (ulong)(uint)fStack0000000000000150;
      uVar18 = uVar19;
    }
    else {
      FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                   *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                   *(undefined4 *)(unaff_x22 + 0x19c8),0);
      fVar61 = (fVar44 + fVar58) * 0.5;
      fVar56 = (fVar60 + fStack0000000000000150) * 0.5;
      fVar43 = 0.0;
      auVar49 = ZEXT416((uint)(fStack0000000000000150 - fVar56));
      fVar63 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar63 = fVar61 + fVar63;
      fVar44 = 0.0;
      uVar20 = CONCAT44(fVar43 + 0.0,fVar56 + auVar49._0_4_);
      auVar49 = ZEXT416((uint)(fVar60 - fVar56));
      fVar58 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar58 = fVar61 + fVar58;
      fVar43 = 0.0;
      uVar19 = CONCAT44(fVar44 + 0.0,fVar56 + auVar49._0_4_);
      auVar49 = ZEXT416((uint)(fStack0000000000000150 - fVar56));
      fVar44 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      unaff_s15 = fStack00000000000000c4;
      fVar44 = fVar61 + fVar44;
      fVar47 = 0.0;
      fStack0000000000000150 = fVar56 + auVar49._0_4_;
      fVar43 = fVar43 + 0.0;
      auVar49 = ZEXT416((uint)(fVar60 - fVar56));
      fVar60 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar61 = fVar61 + fVar60;
      uVar18 = CONCAT44(fVar47 + 0.0,fVar56 + auVar49._0_4_);
    }
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    *(float *)(lVar29 + 0x118) = fVar58;
    *(undefined8 *)(lVar29 + 0x11c) = uVar19;
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    *(float *)(lVar29 + 0x10c) = fVar63;
    *(ulong *)(lVar29 + 0x110) = uVar20;
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    *(float *)(lVar29 + 0x124) = fVar44;
    *(ulong *)(lVar29 + 0x128) = CONCAT44(fVar43,fStack0000000000000150);
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)*unaff_x25 * 0x178;
    *(float *)(lVar29 + 0x130) = fVar61;
    *(undefined8 *)(lVar29 + 0x134) = uVar18;
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar12 = *(uint *)(unaff_x22 + 0x334);
    fVar43 = *(float *)(unaff_x22 + 0x300);
    fVar63 = (float)FUN_07d57ab0(&stack0x00001100,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
    fVar43 = fVar43 + fVar40 * fVar63;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar43 = (float)(int)(fVar43 + unaff_s15);
    }
    *(float *)(lVar29 + (long)(int)uVar12 * 0x178 + 0x13c) = fVar43;
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar12 = *(uint *)(unaff_x22 + 0x334);
    fVar63 = *(float *)(unaff_x22 + 0x2e8);
    fVar60 = *(float *)(unaff_x22 + 0x188);
    fVar43 = (float)FUN_07d57ac0(&stack0x00001100,0);
    if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
    fVar45 = (fVar45 - fVar63) + fVar60 + fVar40 * fVar43;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar45 = (float)(int)(fVar45 + unaff_s15);
    }
    *(float *)(lVar29 + (long)(int)uVar12 * 0x178 + 0x144) = fVar45;
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar12 = *(uint *)(unaff_x22 + 0x334);
    if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
    lVar29 = lVar29 + 0x20;
    *(float *)(lVar29 + (long)(int)uVar12 * 0x178 + 0x13c) =
         (fVar44 - fVar58) / ((float)uVar20 - (float)uVar19);
    fVar41 = fVar40 * (fStack00000000000000f8 + fVar41);
    if (*pcVar1 == '\x01') {
      fVar41 = fVar41 / fVar54;
      fVar42 = (fVar40 * (fStack00000000000000f4 + fVar42)) / fVar54;
    }
    else {
      fVar42 = fVar40 * (fStack00000000000000f4 + fVar42);
    }
    uVar15 = *(uint *)(unaff_x22 + 0x338);
    if ((uVar12 != uVar15 & bVar10) == 0) {
      fVar44 = *(float *)(unaff_x22 + 0x188);
      fVar41 = fVar41 + fVar44;
      fVar42 = fVar42 + fVar44;
      fVar45 = fVar41;
      fVar43 = fVar42;
      if (fVar44 != 0.0) {
        fVar45 = (fVar41 - fVar44) / *(float *)(unaff_x22 + 0xf0);
        fVar43 = (fVar42 - fVar44) / *(float *)(unaff_x22 + 0xf0);
        if (fVar45 <= fVar41) {
          fVar45 = fVar41;
        }
        if (fVar42 <= fVar43) {
          fVar43 = fVar42;
        }
      }
      lVar29 = lVar29 + (long)(int)uVar12 * 0x178;
      fVar44 = fVar45;
      if (fVar45 <= *(float *)(unaff_x22 + 0x348)) {
        fVar44 = *(float *)(unaff_x22 + 0x348);
      }
      fVar63 = fVar43;
      if (*(float *)(unaff_x22 + 0x34c) <= fVar43) {
        fVar63 = *(float *)(unaff_x22 + 0x34c);
      }
      *(float *)(unaff_x22 + 0x348) = fVar44;
      *(float *)(unaff_x22 + 0x34c) = fVar63;
      *(float *)(lVar29 + 300) = fVar45;
      *(float *)(lVar29 + 0x130) = fVar43;
      fVar45 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(lVar29 + 0x120) = fVar41 - fVar45;
      *(float *)(lVar29 + 0x128) = fVar42 - fVar45;
      *(float *)(unaff_x22 + 900) = fVar42 - fVar45;
      if (*(int *)(unaff_x22 + 0x350) == 0) {
        *(float *)(unaff_x22 + 0x380) = fVar44;
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar42 = *(float *)(unaff_x22 + 0x37c);
        fVar45 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        fVar54 = (fVar40 * fVar45) / fVar54;
        if (fVar42 <= fVar54) {
          fVar42 = fVar54;
        }
        fVar45 = *(float *)(unaff_x22 + 0x2e8);
        *(float *)(unaff_x22 + 0x37c) = fVar42;
      }
      if (fVar45 == 0.0) {
        fVar54 = *(float *)(unaff_x22 + 0x19d0);
        if (*(float *)(unaff_x22 + 0x19d0) <= fVar41) {
          fVar54 = fVar41;
        }
        *(float *)(unaff_x22 + 0x19d0) = fVar54;
      }
    }
    else {
      lVar29 = lVar29 + (long)(int)uVar12 * 0x178;
      uVar18 = *(undefined8 *)(unaff_x22 + 0x348);
      *(undefined8 *)(lVar29 + 300) = uVar18;
      fVar45 = *(float *)(unaff_x22 + 0x2e8);
      fVar54 = (float)((ulong)uVar18 >> 0x20) - fVar45;
      *(float *)(lVar29 + 0x120) = (float)uVar18 - fVar45;
      *(float *)(lVar29 + 0x128) = fVar54;
      *(float *)(unaff_x22 + 900) = fVar54;
    }
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar68 = *unaff_x25;
    if (*(uint *)(lVar29 + 0x18) <= uVar68) goto LAB_07d72b20;
    lVar29 = lVar29 + (long)(int)uVar68 * 0x178;
    *(undefined1 *)(lVar29 + 0x194) = 0;
    uVar27 = *unaff_x21;
    if (uVar27 == 9) {
LAB_07d70d34:
      *(undefined1 *)(lVar29 + 0x194) = 1;
      pfVar30 = (float *)(unaff_x22 + 0x364);
      pfVar31 = (float *)(unaff_x22 + 0x360);
      if (uVar67 == uVar17) {
        lVar29 = *(long *)(unaff_x19 + 0x48);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        pfVar31 = (float *)(lVar29 + 100);
        pfVar30 = (float *)(lVar29 + 0x68);
      }
      fVar41 = *pfVar31;
      fVar42 = *pfVar30;
      fVar54 = *(float *)(unaff_x22 + 0x368);
      fVar43 = 0.0;
      fVar45 = *(float *)(unaff_x22 + 0x300);
      fStack0000000000000100 = (fVar53 - fVar41) - fVar42;
      bVar8 = true;
      if ((fVar54 <= fStack0000000000000100) && (bVar8 = false, !NAN(fVar54))) {
        bVar8 = fVar54 == -1.0;
      }
      if (!bVar8) {
        fStack0000000000000100 = fVar54;
      }
      fVar54 = 0.0;
      if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
        fVar54 = (float)FUN_07d53598(&stack0x00001110,0);
        uVar27 = *unaff_x21;
      }
      if (uVar27 != 0xad) {
        fStack00000000000000e8 = fVar40;
      }
      if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        fVar43 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
      }
      uVar68 = *unaff_x25;
      if (fVar39 < (*(float *)(unaff_x22 + 0x380) -
                   (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar43) {
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = uVar68;
        }
        iVar13 = *(int *)(in_stack_00000140 + 100);
        if (iVar13 != 1) {
          if ((iVar13 != 6) && (iVar13 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
          uVar66 = FUN_07d79b5c();
          goto LAB_07d71040;
        }
        if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
        iVar13 = FUN_059137dc(unaff_x22 + 0x15f0,
                              *(undefined8 *)
                               Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
        if (iVar13 == 0) {
          unaff_x25[0] = 0;
          unaff_x25[1] = 0;
          uVar66 = 0xffffffff;
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
        iVar16 = FUN_07d79b5c();
        iVar13 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
        iVar38 = iVar38 + 1;
        *(int *)(unaff_x22 + 0x334) = iVar13 + -1;
        unaff_x29 = in_stack_00000148;
        uVar66 = iVar16 - 1;
        in_stack_00001190 = CONCAT44(0x2026,iVar13 + -1);
        goto LAB_07d72ac8;
      }
LAB_07d70fbc:
      uVar27 = uVar68;
      if ((bVar11 & fStack0000000000000100 <
                    ABS(fVar45) +
                    fVar54 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) == 1)
      {
        if (((in_stack_000000b0 != 0) && (in_stack_000000b0 != 3)) &&
           (uVar68 != *(uint *)(unaff_x22 + 0x338))) {
          uVar66 = FUN_07d79b5c();
          fVar54 = *(float *)(unaff_x22 + 0x2ec);
          if (fVar54 == DAT_015c55ac) {
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            uVar27 = *unaff_x25;
            if (*(uint *)(lVar29 + 0x18) <= uVar27) goto LAB_07d72b20;
            fVar45 = *(float *)(unaff_x22 + 0x2e8);
            fVar54 = 0.0;
            if ((0.0 < fVar45) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
              fVar54 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
            }
            fVar54 = *(float *)(lVar29 + (long)(int)uVar27 * 0x178 + 0x14c) +
                     (fVar54 - *(float *)(unaff_x22 + 0x34c)) +
                     fVar65 * (in_stack_00000050 + *(float *)(unaff_x22 + 0x15bc));
          }
          else {
            *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            fVar45 = *(float *)(unaff_x22 + 0x2e8);
            uVar27 = *(uint *)(unaff_x22 + 0x334);
          }
          if ((*(uint *)(lVar29 + 0x18) <= uVar27) ||
             (uVar37 = uVar27 - 1, *(uint *)(lVar29 + 0x18) <= uVar37)) goto LAB_07d72b20;
          piVar32 = (int *)(lVar29 + 0x20 + (long)(int)uVar27 * 0x178);
          fVar54 = (fVar55 * 0.0 + fVar54 + *(float *)(unaff_x22 + 0x380) + fVar45) -
                   (float)piVar32[0x4c];
          if ((*(int *)(lVar29 + 0x20 + (long)(int)uVar37 * 0x178) == 0xad && !bVar5) &&
             ((*(int *)(in_stack_00000140 + 100) == 0 || (fVar54 < fVar39)))) {
            bVar5 = false;
            uVar66 = uVar66 - 1;
            *unaff_x25 = uVar37;
            unaff_x29 = in_stack_00000148;
            in_stack_00001190 = CONCAT44(0x2d,uVar37);
            goto LAB_07d72ac8;
          }
          if (*piVar32 == 0xad) {
            bVar5 = true;
            unaff_x29 = in_stack_00000148;
          }
          else {
            if (((bVar2 != 0) && (iVar13 = *(int *)(unaff_x22 + 0x11f0), iVar13 != -1)) &&
               (iVar13 != iStack000000000000000c)) {
              uVar66 = FUN_07d79b5c();
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 == 0) goto LAB_07d72adc;
              uVar27 = *unaff_x25;
              uVar37 = uVar27 - 1;
              if (*(uint *)(lVar29 + 0x18) <= uVar37) goto LAB_07d72b20;
              iStack000000000000000c = iVar13;
              if (*(int *)(lVar29 + (long)(int)uVar37 * 0x178 + 0x20) == 0xad) {
                bVar5 = false;
                uVar66 = uVar66 - 1;
                *unaff_x25 = uVar37;
                unaff_x29 = in_stack_00000148;
                in_stack_00001190 = CONCAT44(0x2d,uVar37);
                goto LAB_07d72ac8;
              }
            }
            if (fVar39 < fVar54) {
              if (*(int *)(unaff_x22 + 0x35c) == -1) {
                *(uint *)(unaff_x22 + 0x35c) = uVar27;
              }
              iVar13 = *(int *)(in_stack_00000140 + 100);
              bVar5 = false;
              if (iVar13 < 3) {
                if (iVar13 != 0) {
                  if (iVar13 == 1) {
                    iVar13 = FUN_059137dc(unaff_x22 + 0x15f0,
                                          *(undefined8 *)
                                           Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                         );
                    if (iVar13 != 0) {
                      Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                                (&stack0x000011a0,unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                                );
                      memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                      iVar16 = FUN_07d79b5c();
                      bVar5 = false;
                      goto LAB_07d712c4;
                    }
                    bVar5 = false;
                    goto LAB_07d72aac;
                  }
                  if (iVar13 != 2) goto LAB_07d7166c;
                }
LAB_07d729d0:
                FUN_07d7bce4();
                bVar5 = false;
                bVar2 = 1;
                bVar9 = true;
                unaff_x29 = in_stack_00000148;
              }
              else {
                if (iVar13 == 3) {
                  uVar66 = FUN_07d79b5c();
                  bVar5 = false;
                }
                else {
                  if (iVar13 != 6) {
                    if (iVar13 != 4) goto LAB_07d7166c;
                    goto LAB_07d729d0;
                  }
                  bVar5 = false;
                  uVar68 = uVar27;
                }
LAB_07d71040:
                unaff_x29 = in_stack_00000148;
                in_stack_00001190 = CONCAT44(3,uVar68);
              }
            }
            else {
              FUN_07d7bce4();
              bVar5 = false;
              bVar2 = 1;
              bVar9 = true;
              unaff_x29 = in_stack_00000148;
            }
          }
          goto LAB_07d72ac8;
        }
        iVar13 = *(int *)(in_stack_00000140 + 100);
        if (iVar13 == 1) {
          iVar13 = FUN_059137dc(unaff_x22 + 0x15f0,
                                *(undefined8 *)
                                 Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
          if (iVar13 != 0) {
            Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                      (&stack0x000011a0,unaff_x22 + 0x15f0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                      );
            memcpy(&stack0x00000528,&stack0x000011a0,0x398);
            iVar16 = FUN_07d79b5c();
LAB_07d712c4:
            iVar13 = *(int *)(unaff_x22 + 0x334);
            goto LAB_07d712d0;
          }
LAB_07d72aac:
          unaff_x25[0] = 0;
          unaff_x25[1] = 0;
          uVar66 = 0xffffffff;
          unaff_x29 = in_stack_00000148;
          in_stack_00001190 = DAT_015c3d00;
          goto LAB_07d72ac8;
        }
        if (iVar13 == 6) {
          uVar66 = FUN_07d79b5c();
          uVar68 = *(uint *)(unaff_x22 + 0x334);
          goto LAB_07d71040;
        }
        if (iVar13 == 3) goto LAB_07d7102c;
      }
LAB_07d7166c:
      if ((bVar10 & 1) == 0) {
        if (*unaff_x21 == 0xad) {
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= uVar27) goto LAB_07d72b20;
          *(undefined1 *)(lVar29 + (long)(int)uVar27 * 0x178 + 0x194) = 0;
        }
        else {
          if (*pcVar1 == '\x02') {
            FUN_07d7a738();
          }
          else if (*pcVar1 == '\x01') {
            FUN_07d79ee4();
          }
          uVar68 = *unaff_x25;
          if (bVar9) {
            *(uint *)(unaff_x22 + 0x340) = uVar68;
          }
          *(uint *)(unaff_x22 + 0x344) = uVar68;
          *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
          lVar29 = *(long *)(unaff_x19 + 0x48);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          bVar9 = false;
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(float *)(lVar29 + 100) = fVar41;
          *(float *)(lVar29 + 0x68) = fVar42;
        }
      }
      else {
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= uVar27) goto LAB_07d72b20;
        *(undefined1 *)(lVar29 + (long)(int)uVar27 * 0x178 + 0x194) = 0;
        lVar29 = *(long *)(unaff_x19 + 0x48);
        if (lVar29 == 0) goto LAB_07d72adc;
        uVar68 = *(uint *)(lVar29 + 0x18);
        if (uVar68 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar29 = lVar29 + 0x20;
        lVar34 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        iVar13 = *(int *)(lVar34 + 0x10) + 1;
        *(int *)(lVar34 + 0x10) = iVar13;
        uVar27 = *(uint *)(unaff_x22 + 0x350);
        *(int *)(unaff_x22 + 0x358) = iVar13;
        if (uVar68 <= uVar27) goto LAB_07d72b20;
        lVar34 = lVar29 + (long)(int)uVar27 * 0x60;
        *(float *)(lVar34 + 0x44) = fVar41;
        *(float *)(lVar34 + 0x48) = fVar42;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        if (*unaff_x21 == 0xa0) {
          *(int *)(lVar29 + (long)(int)uVar27 * 0x60) =
               *(int *)(lVar29 + (long)(int)uVar27 * 0x60) + 1;
        }
      }
    }
    else {
      if ((in_stack_000000b0 & 0xfffffffe) == 2) {
        if ((bVar10 & 1) == 0 && uVar27 != 0x200b) goto LAB_07d70e7c;
        goto LAB_07d70d34;
      }
      if ((bVar10 & 1) == 0) {
LAB_07d70e7c:
        if ((uVar27 != 3) && (uVar27 != 0x200b)) {
          if (uVar27 != 0xad) goto LAB_07d70d34;
          goto LAB_07d70e98;
        }
      }
      else {
LAB_07d70e98:
        if (uVar27 == 0xad && !bVar5) goto LAB_07d70d34;
      }
      if (*pcVar1 == '\x02') goto LAB_07d70d34;
      if (*(int *)(in_stack_00000140 + 100) == 6) {
        if ((uVar27 & 0xfffffffe) != 10) {
          if ((0x22 < uVar27 - 0x2007) ||
             ((1L << ((ulong)(uVar27 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
          goto LAB_07d71420;
        }
        fVar54 = 0.0;
        if ((0.0 < fVar45) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
          fVar54 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
        }
        if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar45)) + fVar54 <=
            fVar39) goto LAB_07d71228;
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = uVar68;
        }
        uVar66 = FUN_07d79b5c();
        goto LAB_07d71040;
      }
LAB_07d71228:
      if ((int)uVar27 < 0x2007) {
        if (uVar27 != 10) {
LAB_07d713e4:
          if ((uVar27 != 0xb) && (uVar27 != 0xa0)) goto LAB_07d713f4;
          goto LAB_07d71420;
        }
LAB_07d71440:
        lVar29 = *(long *)(unaff_x19 + 0x48);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        uVar27 = *unaff_x21;
LAB_07d7147c:
        if (uVar27 == 0xa0) {
          lVar29 = *(long *)(unaff_x19 + 0x48);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
        }
      }
      else {
        if ((0x22 < uVar27 - 0x2007) ||
           ((1L << ((ulong)(uVar27 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar20 = FUN_066bcb80(uVar27,0);
          uVar27 = *unaff_x21;
          if ((uVar20 & 1) != 0) goto LAB_07d71420;
          goto LAB_07d7147c;
        }
LAB_07d71420:
        if (((uVar27 != 0xad) && (uVar27 != 0x200b)) && (uVar27 != 0x2060)) goto LAB_07d71440;
      }
    }
    if ((uVar67 == uVar17) && (*(int *)(in_stack_00000140 + 100) == 1)) {
      if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar41 = *(float *)(unaff_x22 + 0xf8);
        fVar54 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar42 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar29 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_07d72adc;
        fVar43 = *(float *)(unaff_x22 + 0xf0);
        fVar44 = *(float *)(lVar29 + 0x2c);
        fVar45 = (float)FUN_07d5378c(*(long *)(lVar29 + 0x20),0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x360);
        fVar45 = (fVar41 / fVar54) * fVar42 * fVar43 * fVar44 * fVar45;
        if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 == 0) goto LAB_07d72adc;
          uVar68 = *(int *)(unaff_x22 + 0x334) - 1;
          if (*(uint *)(lVar29 + 0x18) <= uVar68) goto LAB_07d72b20;
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar41 = *(float *)(lVar29 + (long)(int)uVar68 * 0x178 + 0x60);
          fVar54 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar42 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          lVar29 = *(long *)(unaff_x22 + 0x19f8);
          if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_07d72adc;
          fVar43 = *(float *)(unaff_x22 + 0xf0);
          fVar44 = *(float *)(lVar29 + 0x2c);
          fVar45 = (float)FUN_07d5378c(*(long *)(lVar29 + 0x20),0);
          lVar29 = *(long *)(unaff_x19 + 0x48);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          uVar18 = *(undefined8 *)(lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
          fVar45 = (fVar41 / fVar54) * fVar42 * fVar43 * fVar44 * fVar45;
        }
        fVar54 = 0.0;
        fVar41 = *(float *)(unaff_x22 + 0x300);
        if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
          if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
             (lVar29 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar29 == 0))
          goto LAB_07d72adc;
          FUN_07d53750(&stack0x000011a0,lVar29,0);
          fVar54 = (float)FUN_07d53598(&stack0x000010e0,0);
        }
        fVar42 = (fVar53 - (float)uVar18) - (float)((ulong)uVar18 >> 0x20);
        fVar43 = *(float *)(unaff_x22 + 0x368);
        bVar8 = true;
        if ((fVar43 <= fVar42) && (bVar8 = false, !NAN(fVar43))) {
          bVar8 = fVar43 == -1.0;
        }
        if (!bVar8) {
          fVar42 = fVar43;
        }
        if (ABS(fVar41) + fVar45 * fVar54 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar42) {
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
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
    uVar68 = *(uint *)(unaff_x22 + 0x350);
    *(uint *)(lVar29 + (long)(int)*(uint *)(unaff_x22 + 0x334) * 0x178 + 100) = uVar68;
    if ((uVar67 == uVar17) ||
       ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
      lVar29 = *(long *)(unaff_x19 + 0x48);
      if (lVar29 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar29 + 0x18) <= uVar68) goto LAB_07d72b20;
      if (*(int *)(lVar29 + (long)(int)uVar68 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
    }
    else {
      lVar29 = *(long *)(unaff_x19 + 0x48);
      if (lVar29 == 0) goto LAB_07d72adc;
LAB_07d71a94:
      if (*(uint *)(lVar29 + 0x18) <= uVar68) goto LAB_07d72b20;
      *(undefined4 *)(lVar29 + (long)(int)uVar68 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160)
      ;
    }
    uVar68 = *unaff_x21;
    if (uVar68 != 0x200b) {
      if (uVar68 == 9) {
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar54 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        bVar11 = FUN_07d617d8(*in_stack_00000148,0);
        fVar42 = *(float *)(unaff_x22 + 0x300);
        cVar25 = *(char *)(unaff_x22 + 0xf4);
        fVar41 = fVar40 * fVar54 * (float)bVar11;
        fVar54 = fVar41 * (float)(int)(fVar42 / fVar41);
        if (fVar54 <= fVar42) {
          fVar54 = fVar42 + fVar41;
        }
      }
      else {
        fVar54 = *(float *)(unaff_x22 + 0x2f8);
        if (fVar54 == 0.0) {
          fVar41 = *(float *)(unaff_x22 + 0x300);
          if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
            fVar54 = (float)FUN_07d57ad0(&stack0x00001100,0);
            if (*in_stack_00000148 != 0) {
              fVar42 = (float)FUN_07d61798(*in_stack_00000148,0);
              cVar25 = *(char *)(unaff_x22 + 0xf4);
              fVar41 = fVar41 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                                (*(float *)(unaff_x22 + 0x2f4) +
                                fVar40 * fVar54 +
                                fVar55 * (fStack00000000000000d0 + fVar59 + fVar42));
              if (cVar25 != '\0') {
                fVar41 = (float)(int)(fVar41 + unaff_s15);
              }
              *(float *)(unaff_x22 + 0x300) = fVar41;
              if (((bVar10 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
              fVar54 = fVar41 - fVar55 * *(float *)(in_stack_00000140 + 0x90);
              goto FUN_07d71c94;
            }
            goto LAB_07d72adc;
          }
          fVar54 = (float)FUN_07d53598(&stack0x00001110,0);
          fVar45 = *(float *)(unaff_x22 + 0x19b0);
          fVar42 = (float)FUN_07d57ad0(&stack0x00001100,0);
          if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
          fVar43 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
          fVar41 = fVar41 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                            (*(float *)(unaff_x22 + 0x2f4) +
                            fVar40 * (fVar54 * fVar45 + fVar42) +
                            fVar55 * (fStack00000000000000d0 + fVar59 + fVar43));
        }
        else {
          if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar68 < 0x3b)) &&
             ((1L << ((ulong)uVar68 & 0x3f) & 0x400500000000000U) != 0)) {
            fVar54 = fVar54 * 0.5;
          }
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar41 = *(float *)(unaff_x22 + 0x300);
          fVar42 = (float)FUN_07d61798(*in_stack_00000148,0);
          fVar41 = fVar41 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                            (*(float *)(unaff_x22 + 0x2f4) +
                            (fVar54 - fVar57) + fVar55 * (fVar59 + fVar42));
        }
        cVar25 = *(char *)(unaff_x22 + 0xf4);
        if (cVar25 != '\0') {
          fVar41 = (float)(int)(fVar41 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar41;
        if (((bVar10 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
        fVar54 = fVar41 + fVar55 * *(float *)(in_stack_00000140 + 0x90);
      }
FUN_07d71c94:
      if (cVar25 != '\0') {
        fVar54 = (float)(int)(fVar54 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar54;
    }
LAB_07d71ca8:
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar68 = *unaff_x25;
    uVar27 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar27 <= uVar68) goto LAB_07d72b20;
    *(undefined4 *)(lVar29 + (long)(int)uVar68 * 0x178 + 0x158) = *(undefined4 *)(unaff_x22 + 0x300)
    ;
    uVar37 = *unaff_x21;
    if ((int)uVar37 < 0xd) {
      if ((uVar37 - 10 < 2) || (uVar37 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
      if ((uVar37 == 0x2d && uVar67 == uVar17) || (uVar68 == uVar4)) goto LAB_07d71d54;
      goto LAB_07d72314;
    }
    if (uVar37 != 0x2028) {
      if (uVar37 != 0xd) goto LAB_07d71d38;
      fVar54 = *(float *)(unaff_x22 + 0x308) + 0.0;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar54 = (float)(int)(fVar54 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar54;
      if (uVar68 != uVar4) {
        uVar37 = 0xd;
        goto LAB_07d72314;
      }
    }
LAB_07d71d54:
    if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
      fVar54 = *(float *)(unaff_x22 + 0x348);
      fVar41 = *(float *)(unaff_x22 + 0x15b8);
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar54 = fVar54 - fVar41;
      if ((fVar7 < ABS(fVar54)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        uVar46 = *(undefined4 *)(unaff_x22 + 0x338);
        uVar14 = *(undefined4 *)(unaff_x22 + 0x334);
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07d8f610(uVar46,uVar14);
        fVar41 = fVar54 + *(float *)(unaff_x22 + 0x2e8);
        *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar54;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar41 = (float)(int)(fVar41 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x2e8) = fVar41;
        if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
          Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                    (&stack0x00000170,unaff_x22 + 0x15f0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                    );
          memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
          thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
          *(float *)(unaff_x22 + 0xb00) = fVar54 + *(float *)(unaff_x22 + 0xb00);
          *(float *)(unaff_x22 + 0xb34) = fVar54 + *(float *)(unaff_x22 + 0xb34);
          memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
          FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                      );
        }
      }
    }
    fVar41 = *(float *)(unaff_x22 + 0x2e8);
    fVar42 = *(float *)(unaff_x22 + 0x34c) - fVar41;
    fVar54 = *(float *)(unaff_x22 + 900);
    if (fVar42 <= *(float *)(unaff_x22 + 900)) {
      fVar54 = fVar42;
    }
    fVar45 = *(float *)(unaff_x22 + 0x348);
    *(float *)(unaff_x22 + 900) = fVar54;
    if (in_stack_0000119c == '\0') {
      *in_stack_00000040 = fVar54;
    }
    lVar29 = *(long *)(unaff_x19 + 0x48);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar17 = *(uint *)(unaff_x22 + 0x350);
    if (*(uint *)(lVar29 + 0x18) <= uVar17) goto LAB_07d72b20;
    lVar21 = lVar29 + 0x20 + (long)(int)uVar17 * 0x60;
    uVar67 = *(uint *)(unaff_x22 + 0x338);
    *(uint *)(lVar21 + 0x18) = uVar67;
    lVar34 = 0x338;
    if ((int)uVar67 <= *(int *)(unaff_x22 + 0x340)) {
      lVar34 = 0x340;
    }
    uVar37 = *(uint *)(unaff_x22 + lVar34);
    *(uint *)(unaff_x22 + 0x340) = uVar37;
    *(uint *)(lVar21 + 0x1c) = uVar37;
    uVar27 = *(uint *)(unaff_x22 + 0x334);
    *(uint *)(unaff_x22 + 0x33c) = uVar27;
    *(uint *)(lVar21 + 0x20) = uVar27;
    uVar68 = *(uint *)(unaff_x22 + 0x340);
    if ((int)uVar37 <= (int)*(uint *)(unaff_x22 + 0x344)) {
      uVar68 = *(uint *)(unaff_x22 + 0x344);
    }
    *(uint *)(unaff_x22 + 0x344) = uVar68;
    *(uint *)(lVar21 + 0x24) = uVar68;
    lVar34 = *(long *)(unaff_x19 + 0x30);
    uVar28 = uVar68;
    if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
      if (lVar34 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar34 + 0x18) <= uVar27) goto LAB_07d72b20;
      if (*(float *)(lVar34 + (long)(int)uVar27 * 0x178 + 0x158) != 0.0) {
        uVar37 = uVar67;
        uVar28 = uVar27;
      }
    }
    lVar29 = lVar29 + 0x20 + (long)(int)uVar17 * 0x60;
    *(uint *)(lVar29 + 4) = (uVar27 - uVar67) + 1;
    iVar13 = *(int *)(in_stack_00000068 + 0x60);
    *(int *)(lVar29 + 8) = iVar13;
    *(uint *)(lVar29 + 0xc) = (uVar68 - (uVar67 + iVar13)) + 1;
    if (lVar34 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar34 + 0x18) <= uVar37) goto LAB_07d72b20;
    *(undefined4 *)(lVar29 + 0x50) = *(undefined4 *)(lVar34 + (long)(int)uVar37 * 0x178 + 0x118);
    *(float *)(lVar29 + 0x54) = fVar42;
    lVar29 = *(long *)(unaff_x19 + 0x48);
    if (lVar29 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
    lVar34 = *(long *)(unaff_x19 + 0x30);
    if (lVar34 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar34 + 0x18) <= uVar28) goto LAB_07d72b20;
    fVar45 = fVar45 - fVar41;
    lVar29 = lVar29 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
    uVar46 = *(undefined4 *)(lVar34 + (long)(int)uVar28 * 0x178 + 0x124);
    *(float *)(lVar29 + 0x5c) = fVar45;
    *(undefined4 *)(lVar29 + 0x58) = uVar46;
    lVar29 = *(long *)(unaff_x19 + 0x48);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar67 = *(uint *)(unaff_x22 + 0x350);
    uVar17 = *(uint *)(lVar29 + 0x18);
    if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
      if (uVar17 <= uVar67) goto LAB_07d72b20;
      lVar34 = lVar29 + (long)(int)uVar67 * 0x60;
      fVar54 = *(float *)(lVar34 + 0x78) - fVar40 * fStack000000000000013c;
    }
    else {
      if (uVar17 <= uVar67) goto LAB_07d72b20;
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= uVar28) goto LAB_07d72b20;
      lVar34 = lVar29 + (long)(int)uVar67 * 0x60;
      fVar54 = *(float *)(lVar21 + (long)(int)uVar28 * 0x178 + 0x158);
    }
    *(float *)(lVar34 + 0x48) = fVar54;
    if (uVar17 <= uVar67) goto LAB_07d72b20;
    lVar34 = lVar29 + 0x20 + (long)(int)uVar67 * 0x60;
    *(float *)(lVar34 + 0x40) = fStack0000000000000100;
    if (*(int *)(lVar34 + 4) == 1) {
      *(undefined4 *)(lVar29 + 0x20 + (long)(int)uVar67 * 0x60 + 0x4c) =
           *(undefined4 *)(unaff_x22 + 0x160);
    }
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar54 = (float)FUN_07d61798(*in_stack_00000148,0);
    lVar29 = *(long *)(unaff_x19 + 0x30);
    if (lVar29 == 0) goto LAB_07d72adc;
    uVar17 = *(uint *)(unaff_x22 + 0x344);
    uVar27 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar27 <= uVar17) goto LAB_07d72b20;
    uVar67 = *(uint *)(unaff_x22 + 0x350);
    lVar34 = *(long *)(unaff_x19 + 0x48);
    fVar54 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
             (*(float *)(unaff_x22 + 0x2f4) + fVar55 * (fStack00000000000000d0 + fVar59 + fVar54));
    if (*(char *)(lVar29 + 0x20 + (long)(int)uVar17 * 0x178 + 0x174) == '\0') {
      if (lVar34 == 0) goto LAB_07d72adc;
      uVar17 = *(uint *)(unaff_x22 + 0x33c);
      if (uVar27 <= uVar17) goto LAB_07d72b20;
    }
    else if (lVar34 == 0) goto LAB_07d72adc;
    bVar8 = *(uint *)(lVar34 + 0x18) <= uVar67;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      if (bVar8) goto LAB_07d72b20;
      fVar54 = -fVar54;
    }
    else if (bVar8) goto LAB_07d72b20;
    *(float *)(lVar34 + (long)(int)uVar67 * 0x60 + 0x5c) =
         *(float *)(lVar29 + 0x20 + (long)(int)uVar17 * 0x178 + 0x138) + fVar54;
    if (*(uint *)(lVar34 + 0x18) <= uVar67) goto LAB_07d72b20;
    lVar34 = lVar34 + (long)(int)uVar67 * 0x60;
    *(float *)(lVar34 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar34 + 0x58) = fVar42;
    *(float *)(lVar34 + 0x4c) = fVar65 * in_stack_00000050 + (fVar45 - fVar42);
    *(float *)(lVar34 + 0x50) = fVar45;
    uVar37 = *unaff_x21;
    if ((int)uVar37 < 0x2d) {
      if (uVar37 - 10 < 2) {
LAB_07d72208:
        FUN_07d79804();
        uVar12 = *(uint *)(unaff_x22 + 0x334);
        iVar13 = *(int *)(unaff_x22 + 0x350) + 1;
        *(uint *)(unaff_x22 + 0x338) = uVar12 + 1;
        *(int *)(unaff_x22 + 0x350) = iVar13;
        *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
        if (*(long *)(unaff_x19 + 0x48) != 0) {
          if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar13) {
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07d8f790(iVar13);
            uVar12 = *unaff_x25;
          }
          lVar29 = *(long *)(unaff_x19 + 0x30);
          if (lVar29 != 0) {
            if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
            fVar59 = *(float *)(unaff_x22 + 0x2ec);
            fVar54 = *(float *)(lVar29 + (long)(int)uVar12 * 0x178 + 0x14c);
            if (fVar59 == DAT_015c55ac) {
              if ((*unaff_x21 == 0x2029) || (fVar41 = 0.0, *unaff_x21 == 10)) {
                fVar41 = *(float *)(in_stack_00000140 + 0x94);
              }
              uVar26 = 0;
              fVar59 = fVar54 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                       fVar65 * (in_stack_00000050 + *(float *)(unaff_x22 + 0x15bc));
            }
            else {
              if ((*unaff_x21 == 0x2029) || (fVar41 = 0.0, *unaff_x21 == 10)) {
                fVar41 = *(float *)(in_stack_00000140 + 0x94);
              }
              uVar26 = 1;
            }
            fVar59 = *(float *)(unaff_x22 + 0x2e8) + fVar59 + fVar55 * (fVar41 + 0.0);
            bVar9 = *(char *)(unaff_x22 + 0xf4) != '\0';
            *(undefined1 *)(unaff_x22 + 0x2f0) = uVar26;
            *(float *)(unaff_x22 + 0x15b8) = fVar54;
            fVar54 = *(float *)(unaff_x22 + 0x304) + 0.0 + *(float *)(unaff_x22 + 0x308);
            if (bVar9) {
              fVar59 = (float)(int)(fVar59 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x2e8) = fVar59;
            if (bVar9) {
              fVar54 = (float)(int)(fVar54 + unaff_s15);
            }
            *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
            *(float *)(unaff_x22 + 0x300) = fVar54;
            FUN_07d79804();
            FUN_07d79804();
            *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
            bVar2 = 1;
            bVar9 = true;
            unaff_x29 = in_stack_00000148;
            goto LAB_07d72ac8;
          }
        }
        goto LAB_07d72adc;
      }
      if (uVar37 == 3) {
        if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
        uVar37 = 3;
        uVar66 = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
      }
    }
    else if ((uVar37 - 0x2028 < 2) || (uVar37 == 0x2d)) goto LAB_07d72208;
LAB_07d72314:
    uVar17 = *unaff_x25;
    if (uVar27 <= uVar17) goto LAB_07d72b20;
    lVar29 = lVar29 + 0x20;
    if (*(char *)(lVar29 + (long)(int)uVar17 * 0x178 + 0x174) != '\0') {
      lVar34 = lVar29 + (long)(int)uVar17 * 0x178;
      auVar49 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
      uVar18 = *(undefined8 *)(lVar34 + 0xf8);
      auVar51 = NEON_ext(auVar49,auVar49,8,1);
      uVar19 = *(undefined8 *)(lVar34 + 0x104);
      auVar52._0_4_ = -(uint)(auVar49._0_4_ < (float)uVar18);
      auVar52._4_4_ = -(uint)(auVar49._4_4_ < (float)((ulong)uVar18 >> 0x20));
      auVar52._8_4_ = -(uint)((float)uVar19 < auVar51._0_4_);
      auVar52._12_4_ = -(uint)((float)((ulong)uVar19 >> 0x20) < auVar51._4_4_);
      auVar51._8_8_ = uVar19;
      auVar51._0_8_ = uVar18;
      auVar49 = auVar49 ^ (auVar49 ^ auVar51) & ~auVar52;
      *(long *)(in_stack_00000068 + 0x80) = auVar49._8_8_;
      *(long *)(in_stack_00000068 + 0x78) = auVar49._0_8_;
    }
    if (((in_stack_000000b0 != 3) && (in_stack_000000b0 != 0)) ||
       ((*(uint *)(in_stack_00000140 + 100) < 7 &&
        ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) != 0)))) {
      if (((bVar10 & 1) == 0) && (uVar37 != 0x200b)) {
        if (uVar37 == 0x2d) {
          if (0 < (int)uVar17) {
            if (uVar27 <= uVar17 - 1) goto LAB_07d72b20;
            uVar46 = *(undefined4 *)(lVar29 + (ulong)(uVar17 - 1) * 0x178);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar20 = FUN_066b9610(uVar46,0);
            if ((uVar20 & 1) != 0) {
              uVar37 = *unaff_x21;
              goto LAB_07d72408;
            }
          }
          goto LAB_07d72410;
        }
LAB_07d72408:
        if (uVar37 == 0xad) goto LAB_07d72410;
        if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
        if (bVar2 == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
          bVar2 = 0;
          goto LAB_07d72940;
        }
LAB_07d72618:
        if (bVar5 || *unaff_x21 != 0xad) {
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
        uVar37 = *unaff_x21;
        if ((int)uVar37 < 0x2007) {
          if (uVar37 == 0x2d) {
            uVar12 = *unaff_x25 - 1;
            if (0 < (int)*unaff_x25) {
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
              uVar46 = *(undefined4 *)(lVar29 + (ulong)uVar12 * 0x178 + 0x20);
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar20 = FUN_066b9610(uVar46,0);
              if ((uVar20 & 1) != 0) goto LAB_07d72940;
            }
          }
          else if (uVar37 == 0xa0) goto LAB_07d72644;
        }
        else if (((uVar37 - 0x2007 < 0x29) &&
                 ((1L << ((ulong)(uVar37 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                (uVar37 == 0x2060)) {
LAB_07d72644:
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar20 = FUN_07d90128(uVar37,0);
          if ((uVar20 & 1) == 0) {
LAB_07d7268c:
            uVar17 = *unaff_x21;
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar20 = FUN_07d901bc(uVar17,0);
            if ((uVar20 & 1) == 0) {
              if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
                 (uVar12 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar12)) {
LAB_07d72418:
                if (bVar2 != 0) {
                  if ((bVar10 & 1) == 0) goto LAB_07d72618;
                  if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                  goto LAB_07d72630;
                }
                goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
              }
              lVar29 = *(long *)(unaff_x19 + 0x30);
              if (lVar29 != 0) {
                if (*(uint *)(lVar29 + 0x18) <= uVar12) goto LAB_07d72b20;
                uVar46 = *(undefined4 *)(lVar29 + (long)(int)uVar12 * 0x178 + 0x20);
                if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                            0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar20 = FUN_07d901bc(uVar46,0);
                if ((uVar20 & 1) == 0) goto LAB_07d72418;
                lVar29 = *(long *)(unaff_x19 + 0x30);
                if (lVar29 != 0) {
                  if (*(uint *)(lVar29 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
                  if (in_stack_00000018 != 0) {
                    uVar46 = *(undefined4 *)(lVar29 + (long)(int)(*unaff_x25 + 1) * 0x178 + 0x20);
                    lVar29 = FUN_07d86e90(in_stack_00000018,0);
                    if ((lVar29 != 0) && (lVar29 = FUN_07d98b58(lVar29,0), lVar29 != 0)) {
                      uVar12 = FUN_049ddf40(lVar29,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                      lVar29 = FUN_07d86e90(in_stack_00000018,0);
                      if ((lVar29 != 0) && (lVar29 = FUN_07d98b58(lVar29,0), lVar29 != 0)) {
                        uVar17 = FUN_049ddf40(lVar29,uVar46,*(undefined8 *)PTR_DAT_084b5110);
                        if (((uVar12 | uVar17) & 1) != 0) goto LAB_07d72940;
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
               (lVar29 = FUN_07d86e90(in_stack_00000018,0), lVar29 == 0)) goto LAB_07d72adc;
            if (*(char *)(lVar29 + 0x28) != '\0') goto LAB_07d7268c;
          }
          lVar29 = FUN_07d86e90(in_stack_00000018,0);
          if ((lVar29 == 0) || (lVar29 = FUN_07d98b58(lVar29,0), lVar29 == 0)) goto LAB_07d72adc;
          uVar20 = FUN_049ddf40(lVar29,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
          if ((int)*unaff_x25 < (int)uVar4) {
            lVar29 = FUN_07d86e90(in_stack_00000018,0);
            if (lVar29 == 0) goto LAB_07d72adc;
            lVar29 = FUN_07d98da0(lVar29,0);
            lVar34 = *(long *)(unaff_x19 + 0x30);
            if (lVar34 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar34 + 0x18) <= *unaff_x25 + 1) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            if (lVar29 == 0) goto LAB_07d72adc;
            bVar11 = FUN_049ddf40(lVar29,*(undefined4 *)
                                          (lVar34 + (long)(int)(*unaff_x25 + 1) * 0x178 + 0x20),
                                  *(undefined8 *)PTR_DAT_084b5110);
            if ((uVar20 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
            bVar2 = bVar11 & bVar2;
            bVar10 = bVar2 & bVar10;
            if ((bVar2 != 0) || (((bVar11 ^ 1) & 1) != 0)) goto LAB_07d728a8;
            bVar2 = 0;
          }
          else {
            bVar11 = 0;
            if ((uVar20 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
            if ((bVar2 & uVar12 == uVar15) == 0) goto LAB_07d72940;
            bVar2 = 1;
LAB_07d728a8:
            FUN_07d79804();
            bVar10 = bVar10 & 1;
          }
          if (bVar10 == 0) goto LAB_07d72940;
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
  lVar29 = *(long *)(unaff_x22 + 0x20);
  uVar66 = uVar66 + 1;
  if (lVar29 == 0) goto LAB_07d72adc;
  goto LAB_07d6edd8;
}


