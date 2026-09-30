/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.EntryProcessor$$set_lastHeadCommand
ENTRY_POINT: 07d7263c
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


void UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand(void)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 *puVar17;
  char cVar18;
  undefined1 uVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  long lVar23;
  float *pfVar24;
  int *piVar25;
  long *plVar26;
  long lVar27;
  long unaff_x19;
  long *plVar28;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar29;
  long unaff_x23;
  uint uVar30;
  uint *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  char *unaff_x28;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float unaff_s12;
  float fVar51;
  float fVar52;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  int iStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  float *in_stack_00000040;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  uint uStack0000000000000058;
  int iStack000000000000005c;
  uint in_stack_00000060;
  uint uStack0000000000000064;
  long in_stack_00000068;
  long *in_stack_00000090;
  float *in_stack_000000a0;
  float fStack00000000000000a8;
  int iStack00000000000000b0;
  float fStack00000000000000b4;
  float *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  float fStack00000000000000d0;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float in_stack_00000100;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  long *in_stack_00000148;
  float fStack0000000000000150;
  char *in_stack_00000168;
  uint in_stack_000010fc;
  uint in_stack_0000112c;
  uint uVar53;
  uint uVar54;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
code_r0x07d7263c:
  uStack0000000000000064 = 0;
LAB_07d72940:
  FUN_07d79804();
  *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
LAB_07d72ac8:
  do {
    lVar23 = *(long *)(unaff_x22 + 0x20);
    in_stack_0000112c = in_stack_0000112c + 1;
    if (lVar23 == 0) goto LAB_07d72adc;
    if ((int)*(uint *)(lVar23 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
      FUN_07d797b8();
      return;
    }
    if (*(uint *)(lVar23 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
    uVar4 = *(uint *)(lVar23 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
    if (uVar4 == 0) goto LAB_07d72ae0;
    *unaff_x21 = uVar4;
    if (5 < unaff_w26) {
      uVar11 = FUN_0676d8dc();
      uVar12 = FUN_0674e2a4(&stack0x0000112c,0);
      uVar11 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar11,
                            *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4fb40(uVar11,0);
      uVar4 = *unaff_x21;
      in_stack_00001190 = CONCAT44(3,*unaff_x25);
    }
  } while (uVar4 == 0x1a);
  if ((uVar4 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
    unaff_x28[0] = '\x01';
    unaff_x28[1] = '\x01';
    uVar13 = FUN_07d74ca8();
    if (((uVar13 & 1) != 0) && (in_stack_0000112c = in_stack_000010fc, *unaff_x28 == '\x01'))
    goto LAB_07d72ac8;
  }
  else {
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *unaff_x28 = *(char *)(lVar23 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar23 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar23 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
  }
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar10 = *(uint *)(unaff_x22 + 0x334);
  uVar4 = *(uint *)(lVar23 + 0x18);
  if (uVar4 <= uVar10) goto LAB_07d72b20;
  lVar27 = lVar23 + 0x20;
  uVar53 = (uint)in_stack_00001190;
  uVar37 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar18 = *(char *)(lVar27 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x3c);
  unaff_x28[1] = '\0';
  if (uVar53 == uVar10) {
    uVar7 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar7;
    *unaff_x28 = '\x01';
    if (uVar7 == 0x2026) {
      if (uVar4 <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
           *(undefined8 *)(unaff_x22 + 0x19f8);
      thunk_FUN_03afed3c();
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(undefined8 *)(lVar23 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
      *(undefined1 *)(lVar23 + 0x28) = 1;
      thunk_FUN_03afed3c();
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
           *(undefined8 *)(unaff_x22 + 0x1a08);
      thunk_FUN_03afed3c();
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
           *(undefined4 *)(unaff_x22 + 0x1a10);
      lVar23 = *(long *)(unaff_x22 + 0x15c0);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
      *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
      uVar4 = *(uint *)(unaff_x22 + 0x334);
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      in_stack_00001190 = CONCAT44(3,uVar4 + 1);
      goto joined_r0x07d6f120;
    }
    if (uVar7 != 3) goto LAB_07d6efec;
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    uVar4 = *unaff_x25;
    lVar14 = FUN_07d61598(*in_stack_00000148,0);
    if (lVar14 == 0) goto LAB_07d72adc;
    uVar11 = FUN_060344a4(lVar14,3,*(undefined8 *)
                                    System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                         );
    if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_07d72b20;
    *(undefined8 *)(lVar27 + (long)(int)uVar4 * (long)(int)unaff_w27 + 0x10) = uVar11;
    thunk_FUN_03afed3c();
    *(undefined1 *)(unaff_x22 + 0x4d) = 1;
    unaff_x28 = in_stack_00000168;
  }
LAB_07d6efec:
  uVar4 = *unaff_x25;
joined_r0x07d6f120:
  unaff_x23 = in_stack_00000140;
  if (((int)uVar4 < 0) && (*unaff_x21 != 3)) {
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)uVar4 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar23 + 0x194) = 0;
    *(undefined4 *)(lVar23 + 0x20) = 0x200b;
    *(undefined4 *)(lVar23 + 100) = 0;
    *unaff_x25 = uVar4 + 1;
    goto LAB_07d72ac8;
  }
  cVar1 = *unaff_x28;
  if (cVar1 == '\x01') {
    uVar4 = *(uint *)(unaff_x22 + 300);
    if ((uVar4 >> 4 & 1) == 0) {
      if ((uVar4 >> 3 & 1) == 0) {
        fVar44 = 1.0;
        if ((uVar4 >> 5 & 1) != 0) {
          uVar4 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar13 = FUN_066bbc7c(uVar4,0);
          fVar44 = 1.0;
          if ((uVar13 & 1) != 0) {
            uVar4 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar4 = FUN_066bbf04(uVar4,0);
            fVar44 = fStack0000000000000010;
            goto LAB_07d6f260;
          }
        }
      }
      else {
        uVar4 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_066bbbdc(uVar4,0);
        fVar44 = 1.0;
        if ((uVar13 & 1) != 0) {
          uVar4 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_066bc07c(uVar4,0);
          goto LAB_07d6f25c;
        }
      }
    }
    else {
      uVar4 = *unaff_x21;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_066bbc7c(uVar4,0);
      fVar44 = 1.0;
      if ((uVar13 & 1) != 0) {
        uVar4 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar4 = FUN_066bbf04(uVar4,0);
LAB_07d6f25c:
        fVar44 = 1.0;
LAB_07d6f260:
        *unaff_x21 = uVar4 & 0xffff;
      }
    }
    cVar1 = *unaff_x28;
  }
  else {
    fVar44 = 1.0;
  }
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (cVar1 == '\x01') {
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(unaff_x22 + 0x1598) =
         *(undefined8 *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
    thunk_FUN_03afed3c(unaff_x22 + 0x1598);
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000148 = *(long *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000090 = *(long *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50);
    thunk_FUN_03afed3c();
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    uVar7 = *unaff_x25;
    uVar4 = *(uint *)(lVar23 + 0x18);
    if (uVar4 <= uVar7) goto LAB_07d72b20;
    *(undefined4 *)(unaff_x22 + 0x78) =
         *(undefined4 *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x38);
    if (uVar53 == uVar10) {
      lVar27 = *(long *)(unaff_x22 + 0x20);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
      if ((*(int *)(lVar27 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
         (uVar7 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
      if (uVar4 <= uVar7 - 1) goto LAB_07d72b20;
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar47 = *(float *)(lVar23 + 0x20 + (long)(int)(uVar7 - 1) * (long)(int)unaff_w27 + 0x40);
      fVar31 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar32 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar32 = ((fVar44 * fVar47) / fVar31) * fVar32;
LAB_07d6f900:
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
    }
    else {
LAB_07d6f408:
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar47 = *(float *)(unaff_x22 + 0xf8);
      fVar31 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar32 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar32 = ((fVar44 * fVar47) / fVar31) * fVar32;
      if (uVar53 == uVar10) goto LAB_07d6f900;
LAB_07d6f918:
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
    }
    lVar23 = *(long *)(unaff_x22 + 0x1598);
    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_07d72adc;
    fVar31 = *(float *)(unaff_x22 + 0xf0);
    fVar47 = *(float *)(lVar23 + 0x2c);
    fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar23 + 0x20),0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar33 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar34 = *(float *)(unaff_x22 + 0xf0);
    fVar36 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    lVar23 = *(long *)(unaff_x19 + 0x30);
    fVar36 = fVar32 * fVar33 * fVar34 * fVar36;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar36 = (float)(int)(fVar36 + unaff_s15);
    }
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar27 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar27 + 0x28) = 1;
    fStack00000000000000e8 = fVar32 * fVar31 * fVar47 * fStack00000000000000e8;
    *(float *)(lVar27 + 0x160) = fStack00000000000000e8;
    in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
    unaff_s12 = 1.0;
    unaff_s13 = 0.0;
    uVar4 = *unaff_x21;
    fVar31 = 0.0;
    if (uVar4 != 3 && uVar4 != 0xad) {
      fVar31 = fStack00000000000000e8;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (lVar23 != 0) {
        if (*unaff_x25 < *(uint *)(lVar23 + 0x18)) {
          plVar28 = *(long **)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
          if (plVar28 != (long *)0x0) {
            bVar3 = *(byte *)(*(long *)
                               Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar28 + 0x130) < bVar3) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar3 * 8 + -8) !=
                *(long *)
                 Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar28);
            }
            plVar15 = (long *)FUN_07d8466c(plVar28,0);
            if (plVar15 == (long *)0x0) {
              plVar15 = (long *)0x0;
              *in_stack_000000e0 = 0;
            }
            else {
              lVar23 = *(long *)
                        Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
              bVar3 = *(byte *)(lVar23 + 0x130);
              if (*(byte *)(*plVar15 + 0x130) < bVar3) {
                plVar26 = (long *)0x0;
              }
              else {
                plVar26 = plVar15;
                if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != lVar23) {
                  plVar26 = (long *)0x0;
                }
              }
              *in_stack_000000e0 = (long)plVar26;
              if (*(byte *)(*plVar15 + 0x130) < bVar3) {
                plVar15 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) != lVar23) {
                plVar15 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(in_stack_000000e0,plVar15);
            iVar5 = FUN_07d85970(plVar28,0);
            *(int *)(unaff_x22 + 0x158c) = iVar5;
            if (*unaff_x21 == 0x3c) {
              *unaff_x21 = iVar5 + 0xe000;
            }
            else {
              uVar6 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
              *(undefined4 *)(unaff_x22 + 0x1590) = uVar6;
            }
            if (*(long *)(unaff_x22 + 0x68) != 0) {
              fVar47 = *(float *)(unaff_x22 + 0xf8);
              FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
              memcpy(&stack0x00001130,&stack0x000011a0,0x60);
              fVar31 = (float)FUN_07d5328c(&stack0x00001130,0);
              if (*in_stack_00000148 != 0) {
                FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
                memcpy(&stack0x00001130,&stack0x00000170,0x60);
                fVar32 = (float)FUN_07d53294(&stack0x00001130,0);
                if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                fVar32 = (fVar47 / fVar31) * fVar32;
                fVar31 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                fVar47 = *(float *)(unaff_x22 + 0xf8);
                if (fVar31 <= 0.0) {
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar31 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar33 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  FUN_07d53750(&stack0x000011a0,plVar28[4],0);
                  fVar34 = (float)FUN_07d53580(&stack0x000010e0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar46 = *(float *)((long)plVar28 + 0x2c);
                  fVar35 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar51 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar48 = *(float *)(unaff_x22 + 0xf0);
                  fVar36 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (fVar47 / fVar31) * fStack00000000000000f4;
                  fStack00000000000000e8 =
                       fStack00000000000000f4 * (fVar33 / fVar34) * fVar46 * fVar35;
                  fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                  fVar36 = fVar32 * fVar51 * fVar48 * fVar36;
                  fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                  fVar31 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                  fStack00000000000000f4 = fStack00000000000000f4 * fVar31;
                }
                else {
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar31 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar33 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar46 = *(float *)((long)plVar28 + 0x2c);
                  fVar34 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar35 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar51 = *(float *)(unaff_x22 + 0xf0);
                  fVar36 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                  fVar36 = fVar32 * fVar35 * fVar51 * fVar36;
                  fStack00000000000000e8 = (fVar47 / fVar31) * fVar33 * fVar46 * fVar34;
                  fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0)
                  ;
                  unaff_x28 = in_stack_00000168;
                }
                *(long **)(unaff_x22 + 0x1598) = plVar28;
                thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar28);
                lVar23 = *(long *)(unaff_x19 + 0x30);
                if (lVar23 != 0) {
                  if (*unaff_x25 < *(uint *)(lVar23 + 0x18)) {
                    lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
                    *(long *)(lVar23 + 0x48) = *in_stack_000000e0;
                    *(undefined1 *)(lVar23 + 0x28) = 2;
                    *(float *)(lVar23 + 0x160) = fStack00000000000000e8;
                    thunk_FUN_03afed3c();
                    lVar23 = *(long *)(unaff_x19 + 0x30);
                    if (lVar23 != 0) {
                      if (*unaff_x25 < *(uint *)(lVar23 + 0x18)) {
                        *(long *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) =
                             *in_stack_00000148;
                        thunk_FUN_03afed3c();
                        lVar23 = *(long *)(unaff_x19 + 0x30);
                        if (lVar23 != 0) {
                          if (*unaff_x25 < *(uint *)(lVar23 + 0x18)) {
                            *(undefined4 *)
                             (lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
                                 *(undefined4 *)(unaff_x22 + 0x78);
                            in_stack_00000138._4_4_ = 0.0;
                            *(undefined4 *)(unaff_x22 + 0x78) = uVar37;
                            unaff_s15 = in_stack_000000c0._4_4_;
                            goto LAB_07d6fa0c;
                          }
                          goto LAB_07d72b20;
                        }
                        goto LAB_07d72adc;
                      }
                      goto LAB_07d72b20;
                    }
                    goto LAB_07d72adc;
                  }
                  goto LAB_07d72b20;
                }
              }
            }
          }
          goto LAB_07d72adc;
        }
        goto LAB_07d72b20;
      }
      goto LAB_07d72adc;
    }
    uVar4 = *unaff_x21;
    fVar31 = 0.0;
    if (uVar4 != 3 && uVar4 != 0xad) {
      fVar31 = unaff_s14;
    }
    fVar36 = 0.0;
    fStack00000000000000f4 = 0.0;
    fStack00000000000000f8 = 0.0;
    fStack00000000000000e8 = unaff_s14;
    if (lVar23 == 0) goto LAB_07d72adc;
  }
  unaff_s14 = fVar31;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(uint *)(lVar23 + 0x20) = uVar4;
  *(undefined4 *)(lVar23 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
  *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
       *(undefined4 *)(unaff_x22 + 0x1b8);
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
       *(undefined4 *)(unaff_x22 + 0x1bc);
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  auVar40 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
  *(undefined4 *)(lVar23 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
  *(long *)(lVar23 + 0x184) = auVar40._8_8_;
  *(long *)(lVar23 + 0x17c) = auVar40._0_8_;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar4 = *(uint *)(unaff_x22 + 0x334);
  uVar7 = *(uint *)(lVar23 + 0x18);
  if (uVar7 <= uVar4) goto LAB_07d72b20;
  lVar27 = lVar23 + 0x20 + (long)(int)uVar4 * (long)(int)unaff_w27;
  uVar8 = *(uint *)(unaff_x22 + 300);
  *(uint *)(lVar27 + 0x170) = uVar8;
  if (*(int *)(unaff_x22 + 0x13c) == 700) {
    *(uint *)(lVar27 + 0x170) = uVar8 | 1;
    uVar4 = *unaff_x25;
  }
  if (uVar7 <= uVar4) goto LAB_07d72b20;
  lVar23 = *(long *)(lVar23 + 0x20 + (long)(int)uVar4 * (long)(int)unaff_w27 + 0x18);
  if (lVar23 == 0) {
    if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
       (lVar23 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar23 == 0)) goto LAB_07d72adc;
    FUN_07d53750(&stack0x000011a0,lVar23,0);
  }
  else {
    FUN_07d53750(&stack0x00000510,lVar23,0);
  }
  uVar4 = *unaff_x21;
  if (uVar4 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_066b9610(uVar4,0);
  }
  else {
    uVar4 = 0;
  }
  fVar31 = *(float *)(in_stack_00000140 + 0x8c);
  if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*unaff_x28 == '\x01')) {
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
    uVar7 = *unaff_x25;
    uVar8 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
    if ((int)uVar7 < (int)uStack000000000000004c) {
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      uVar7 = uVar7 + 1;
      if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
      if (*(char *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 8) == '\x01') {
        lVar23 = *(long *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x10);
        if ((((lVar23 == 0) || (*in_stack_00000148 == 0)) ||
            (lVar27 = *(long *)(*in_stack_00000148 + 0x170), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_05ffa6e0(lVar27,uVar8 | *(int *)(lVar23 + 0x28) << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar13 & 1) != 0) {
          FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          uVar13 = FUN_07d57e7c(&stack0x000010b0,0);
          if ((uVar13 & 0x100) != 0) {
            fVar31 = unaff_s13;
          }
        }
      }
      uVar7 = *unaff_x25;
    }
    uVar54 = uVar7 - 1;
    if (0 < (int)uVar7) {
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= uVar54) goto LAB_07d72b20;
      lVar27 = *(long *)(lVar23 + 0x20 + (ulong)uVar54 * (ulong)unaff_w27 + 0x10);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(char *)(lVar23 + 0x20 + (ulong)uVar54 * (ulong)unaff_w27 + 8) == '\x01') {
        if (((*in_stack_00000148 == 0) ||
            (lVar23 = *(long *)(*in_stack_00000148 + 0x170), lVar23 == 0)) ||
           (lVar23 = *(long *)(lVar23 + 0x40), lVar23 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_05ffa6e0(lVar23,*(uint *)(lVar27 + 0x28) | uVar8 << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar13 & 1) != 0) {
          FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          FUN_07d57af4(0);
          uVar13 = FUN_07d57e7c(&stack0x000010b0,0);
          unaff_s15 = in_stack_000000c0._4_4_;
          if ((uVar13 & 0x100) != 0) {
            fVar31 = unaff_s13;
          }
        }
      }
    }
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    uVar7 = *unaff_x25;
    uVar37 = FUN_07d57ad0(&stack0x00001100,0);
    if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
    *(undefined4 *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x154) = uVar37;
  }
  uVar7 = *unaff_x21;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar3 = FUN_07d8fcc4(uVar7,0);
  uVar7 = *unaff_x25;
  uVar13 = (ulong)uVar7;
  if ((bVar3 & 1) == 0) {
    if (0 < (int)uVar7) {
      if ((((in_stack_00000060 & 1) == 0) ||
          (uVar8 = *(uint *)(unaff_x22 + 0x19cc), uVar8 == 0x80000000)) || (uVar8 != uVar7 - 1)) {
        if ((_iStack0000000000000028 & 0x100000000) == 0) {
          bVar2 = false;
        }
        else {
          lVar23 = uVar13 * unaff_w27 + 0x144;
          uVar29 = uVar13;
          do {
            uVar29 = uVar29 - 1;
            iVar5 = (int)uVar13;
            uVar7 = iVar5 - 1;
            uVar13 = (ulong)uVar7;
            if ((iVar5 < 1) || (uVar29 == *(uint *)(unaff_x22 + 0x19cc))) {
              bVar2 = false;
              goto LAB_07d71064;
            }
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= uVar29) goto LAB_07d72b20;
            lVar27 = *(long *)(lVar27 + lVar23 + -0x28c);
            if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
            uVar8 = FUN_07d53740(lVar27,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar5 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar27 = FUN_07d61740(*in_stack_00000148,0), lVar27 == 0)) ||
               (*(long *)(lVar27 + 0x50) == 0)) goto LAB_07d72adc;
            uVar16 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                               (*(long *)(lVar27 + 0x50),uVar8 | iVar5 << 0x10,&stack0x00001050,
                                *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
            lVar23 = lVar23 + -0x178;
            unaff_x28 = in_stack_00000168;
          } while ((uVar16 & 1) == 0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar7) goto LAB_07d72b20;
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
          fVar31 = 0.0;
          bVar2 = true;
        }
LAB_07d71064:
        if ((in_stack_00000060 & 1) != 0) {
          uVar7 = *(uint *)(unaff_x22 + 0x19cc);
          if (uVar7 == 0x80000000) {
            bVar2 = true;
          }
          if (!bVar2) {
            lVar23 = *(long *)(unaff_x19 + 0x30);
            if (lVar23 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
            lVar23 = *(long *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x30);
            if ((lVar23 == 0) || (lVar23 = FUN_07d88988(lVar23,0), lVar23 == 0)) goto LAB_07d72adc;
            uVar7 = FUN_07d53740(lVar23,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar5 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar23 = FUN_07d61740(*in_stack_00000148,0), lVar23 == 0)) ||
               (*(long *)(lVar23 + 0x48) == 0)) goto LAB_07d72adc;
            uVar13 = FUN_06008730(*(long *)(lVar23 + 0x48),uVar7 | iVar5 << 0x10,&stack0x00001038,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            unaff_x28 = in_stack_00000168;
            if ((uVar13 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                if (*(uint *)(unaff_x22 + 0x19cc) < *(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18)) {
                  FUN_07d58088(&stack0x00001038,0);
                  UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0)
                  ;
                  FUN_07d580a8(&stack0x00001038,0);
                  FUN_07d58058(&stack0x00001068,0);
                  FUN_07d57ab8(&stack0x00001100,0);
                  FUN_07d58088(&stack0x00001038,0);
                  FUN_07d58048(&stack0x00001070,0);
                  puVar17 = &stack0x00001038;
                  goto LAB_07d711ec;
                }
                goto LAB_07d72b20;
              }
              goto LAB_07d72adc;
            }
          }
        }
      }
      else {
        lVar23 = *(long *)(unaff_x19 + 0x30);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= uVar8) goto LAB_07d72b20;
        lVar23 = *(long *)(lVar23 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x30);
        if ((lVar23 == 0) || (lVar23 = FUN_07d88988(lVar23,0), lVar23 == 0)) goto LAB_07d72adc;
        uVar7 = FUN_07d53740(lVar23,0);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        iVar5 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
        if (((*in_stack_00000148 == 0) || (lVar23 = FUN_07d61740(*in_stack_00000148,0), lVar23 == 0)
            ) || (*(long *)(lVar23 + 0x48) == 0)) goto LAB_07d72adc;
        uVar13 = FUN_06008730(*(long *)(lVar23 + 0x48),uVar7 | iVar5 << 0x10,&stack0x00001078,
                              *(undefined8 *)
                               UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
        unaff_x28 = in_stack_00000168;
        if ((uVar13 & 1) != 0) {
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
          puVar17 = &stack0x00001078;
LAB_07d711ec:
          FUN_07d580a8(puVar17,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fVar31 = 0.0;
          unaff_x28 = in_stack_00000168;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x22 + 0x19cc) = uVar7;
  }
  fVar47 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar32 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
    fVar33 = *(float *)(unaff_x22 + 0x300);
    fVar34 = (float)FUN_07d53598(&stack0x00001110,0);
    fVar33 = fVar33 - unaff_s14 * fVar34 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4));
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar33 = (float)(int)(fVar33 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar33;
    if (((uVar4 & 1) != 0) || (*unaff_x21 == 0x200b)) {
      fVar33 = fVar33 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar33 = (float)(int)(fVar33 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar33;
    }
  }
  fVar33 = *(float *)(unaff_x22 + 0x2f8);
  fVar34 = 0.0;
  if (fVar33 != 0.0) {
    uVar7 = *unaff_x21;
    if (uVar7 != 0x200b) {
      if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar7)) ||
         (fVar34 = 0.25, (1L << ((ulong)uVar7 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar34 = 0.5;
      }
      fVar46 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar35 = (float)FUN_07d53588(&stack0x00001110,0);
      fVar34 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
               (fVar33 * fVar34 - unaff_s14 * (fVar46 * 0.5 + fVar35));
      fVar33 = fVar34 + *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar33 = (float)(int)(fVar33 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar33;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar5 = FUN_07d616d4(*in_stack_00000148,0);
  if (iVar5 == 0x1015) {
    bVar2 = false;
  }
  else {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar5 = FUN_07d616d4(*in_stack_00000148,0);
    bVar2 = iVar5 != 0x11014;
  }
  if ((cVar18 == '\0') && (*unaff_x28 == '\x01')) {
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    if ((*(byte *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
    goto LAB_07d701e4;
    if (bVar2) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar5 = FUN_07d616c4(*in_stack_00000148,0);
        fVar46 = (float)(iVar5 + 1);
      }
      else {
        lVar23 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar13 = thunk_FUN_07c662cc(lVar23,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar13 & 1) == 0) goto LAB_07d70594;
        lVar23 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar23 == 0) goto LAB_07d72adc;
        fVar46 = (float)thunk_FUN_07c69050(lVar23,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar33 = (float)FUN_07d617a8(*in_stack_00000148,0);
      fVar33 = fVar46 * fVar33 * 0.25;
      if (fVar46 < in_stack_00000138._4_4_ + fVar33) {
        in_stack_00000138._4_4_ = fVar46 - fVar33;
      }
    }
    else {
      fVar33 = 0.0;
    }
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fStack00000000000000d0 = (float)FUN_07d617b8(*in_stack_00000148,0);
  }
  else {
LAB_07d701e4:
    fStack00000000000000d0 = 0.0;
    if (bVar2) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar5 = FUN_07d616c4(*in_stack_00000148,0);
        fVar46 = (float)(iVar5 + 1);
      }
      else {
        lVar23 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar13 = thunk_FUN_07c662cc(lVar23,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar13 & 1) == 0) goto LAB_07d70290;
        lVar23 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar23 == 0) goto LAB_07d72adc;
        fVar46 = (float)thunk_FUN_07c69050(lVar23,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar33 = fVar46 * *(float *)(*in_stack_00000148 + 400) * 0.25;
      if (fVar46 < in_stack_00000138._4_4_ + fVar33) {
        in_stack_00000138._4_4_ = fVar46 - fVar33;
      }
    }
    else {
      fVar33 = 0.0;
    }
  }
  fVar51 = *(float *)(unaff_x22 + 0x300);
  fVar46 = (float)FUN_07d53588(&stack0x00001110,0);
  fVar48 = *(float *)(unaff_x22 + 0x19b0);
  fVar35 = (float)FUN_07d57ab0(&stack0x00001100,0);
  fVar51 = fVar51 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 * (fVar35 + ((fVar46 * fVar48 - in_stack_00000138._4_4_) - fVar33));
  fVar46 = (float)FUN_07d53590(&stack0x00001110,0);
  fVar35 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar46 = unaff_s14 * (in_stack_00000138._4_4_ + fVar46 + fVar35);
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar46 = (float)(int)(fVar46 + unaff_s15);
  }
  fStack0000000000000150 =
       *(float *)(unaff_x22 + 0x188) + ((fVar36 + fVar46) - *(float *)(unaff_x22 + 0x2e8));
  fVar46 = (float)FUN_07d53580(&stack0x00001110,0);
  fVar48 = fStack0000000000000150 -
           unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar46);
  fVar46 = (float)FUN_07d53578(&stack0x00001110,0);
  fVar46 = fVar51 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 *
                    (fVar33 + fVar33 +
                    in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                    fVar46 * *(float *)(unaff_x22 + 0x19b0));
  fVar49 = fVar46;
  fVar35 = fVar51;
  if (((cVar18 == '\0') && (*unaff_x28 == '\x01')) && ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0))
  {
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    iVar5 = *(int *)(unaff_x22 + 0x19ac);
    fVar35 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar38 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar50 = *(float *)(unaff_x22 + 0xf0);
    fVar52 = *(float *)(unaff_x22 + 0x188);
    fVar49 = (float)iVar5 * fStack0000000000000054;
    fVar45 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar45 = fVar45 * fVar50 * (fVar35 - (fVar38 + fVar52)) * 0.5;
    fVar35 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar52 = fVar49 * unaff_s14 * ((fVar33 + in_stack_00000138._4_4_ + fVar35) - fVar45);
    fVar38 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar50 = (float)FUN_07d53580(&stack0x00001110,0);
    fStack0000000000000150 = fStack0000000000000150 + 0.0;
    fVar35 = fVar51 + fVar52;
    fVar48 = fVar48 + 0.0;
    fVar49 = fVar49 * unaff_s14 *
                      ((((fVar38 - fVar50) - in_stack_00000138._4_4_) - fVar33) - fVar45);
    fVar51 = fVar51 + fVar49;
    fVar49 = fVar46 + fVar49;
    unaff_s15 = in_stack_000000c0._4_4_;
    fVar46 = fVar46 + fVar52;
  }
  uVar12 = *in_stack_000000c8;
  uVar11 = in_stack_000000c8[1];
  if (DAT_08974d8a == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  uVar39 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  uVar41 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  if (DAT_015c5bb4 <
      (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar41 >> 0x20) +
      (float)uVar11 * (float)uVar41 +
      (float)uVar12 * (float)uVar39 +
      (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar39 >> 0x20)) {
    fVar33 = 0.0;
    auVar40._4_12_ = SUB1612(ZEXT816(0),4);
    auVar40._0_4_ = fVar48;
    uVar12 = auVar40._0_8_;
    uVar13 = (ulong)(uint)fStack0000000000000150;
    uVar11 = uVar12;
  }
  else {
    FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                 *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                 *(undefined4 *)(unaff_x22 + 0x19c8),0);
    fVar49 = (fVar46 + fVar51) * 0.5;
    fVar45 = (fVar48 + fStack0000000000000150) * 0.5;
    fVar33 = 0.0;
    auVar40 = ZEXT416((uint)(fStack0000000000000150 - fVar45));
    fVar35 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar35 = fVar49 + fVar35;
    fVar46 = 0.0;
    uVar13 = CONCAT44(fVar33 + 0.0,fVar45 + auVar40._0_4_);
    auVar40 = ZEXT416((uint)(fVar48 - fVar45));
    fVar51 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar51 = fVar49 + fVar51;
    fVar33 = 0.0;
    uVar12 = CONCAT44(fVar46 + 0.0,fVar45 + auVar40._0_4_);
    auVar40 = ZEXT416((uint)(fStack0000000000000150 - fVar45));
    fVar46 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar46 = fVar49 + fVar46;
    fVar38 = 0.0;
    fStack0000000000000150 = fVar45 + auVar40._0_4_;
    fVar33 = fVar33 + 0.0;
    auVar40 = ZEXT416((uint)(fVar48 - fVar45));
    fVar48 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar49 = fVar49 + fVar48;
    unaff_s15 = in_stack_000000c0._4_4_;
    uVar11 = CONCAT44(fVar38 + 0.0,fVar45 + auVar40._0_4_);
  }
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar23 + 0x118) = fVar51;
  *(undefined8 *)(lVar23 + 0x11c) = uVar12;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar23 + 0x10c) = fVar35;
  *(ulong *)(lVar23 + 0x110) = uVar13;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar23 + 0x124) = fVar46;
  *(ulong *)(lVar23 + 0x128) = CONCAT44(fVar33,fStack0000000000000150);
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar23 + 0x130) = fVar49;
  *(undefined8 *)(lVar23 + 0x134) = uVar11;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar7 = *(uint *)(unaff_x22 + 0x334);
  fVar33 = *(float *)(unaff_x22 + 0x300);
  fVar35 = (float)FUN_07d57ab0(&stack0x00001100,0);
  if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
  fVar33 = fVar33 + unaff_s14 * fVar35;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar33 = (float)(int)(fVar33 + unaff_s15);
  }
  *(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x13c) = fVar33;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar7 = *(uint *)(unaff_x22 + 0x334);
  fVar35 = *(float *)(unaff_x22 + 0x2e8);
  fVar48 = *(float *)(unaff_x22 + 0x188);
  fVar33 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
  fVar33 = (fVar36 - fVar35) + fVar48 + unaff_s14 * fVar33;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar33 = (float)(int)(fVar33 + unaff_s15);
  }
  *(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x144) = fVar33;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar7 = *(uint *)(unaff_x22 + 0x334);
  if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
  lVar23 = lVar23 + 0x20;
  *(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x13c) =
       (fVar46 - fVar51) / ((float)uVar13 - (float)uVar12);
  fVar47 = unaff_s14 * (fStack00000000000000f8 + fVar47);
  if (*unaff_x28 == '\x01') {
    fVar47 = fVar47 / fVar44;
    fVar32 = (unaff_s14 * (fStack00000000000000f4 + fVar32)) / fVar44;
  }
  else {
    fVar32 = unaff_s14 * (fStack00000000000000f4 + fVar32);
  }
  uVar8 = *(uint *)(unaff_x22 + 0x338);
  unaff_s13 = 0.0;
  unaff_s12 = 1.0;
  if ((uVar7 != uVar8 & uVar4) == 0) {
    fVar46 = *(float *)(unaff_x22 + 0x188);
    fVar47 = fVar47 + fVar46;
    fVar32 = fVar32 + fVar46;
    fVar33 = fVar47;
    fVar36 = fVar32;
    if (fVar46 != 0.0) {
      fVar33 = (fVar47 - fVar46) / *(float *)(unaff_x22 + 0xf0);
      fVar36 = (fVar32 - fVar46) / *(float *)(unaff_x22 + 0xf0);
      if (fVar33 <= fVar47) {
        fVar33 = fVar47;
      }
      if (fVar32 <= fVar36) {
        fVar36 = fVar32;
      }
    }
    lVar23 = lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27;
    fVar46 = fVar33;
    if (fVar33 <= *(float *)(unaff_x22 + 0x348)) {
      fVar46 = *(float *)(unaff_x22 + 0x348);
    }
    fVar35 = fVar36;
    if (*(float *)(unaff_x22 + 0x34c) <= fVar36) {
      fVar35 = *(float *)(unaff_x22 + 0x34c);
    }
    *(float *)(unaff_x22 + 0x348) = fVar46;
    *(float *)(unaff_x22 + 0x34c) = fVar35;
    *(float *)(lVar23 + 300) = fVar33;
    *(float *)(lVar23 + 0x130) = fVar36;
    fVar33 = *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar23 + 0x120) = fVar47 - fVar33;
    *(float *)(lVar23 + 0x128) = fVar32 - fVar33;
    *(float *)(unaff_x22 + 900) = fVar32 - fVar33;
    if (*(int *)(unaff_x22 + 0x350) == 0) {
      *(float *)(unaff_x22 + 0x380) = fVar46;
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar32 = *(float *)(unaff_x22 + 0x37c);
      fVar33 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      fVar44 = (unaff_s14 * fVar33) / fVar44;
      if (fVar32 <= fVar44) {
        fVar32 = fVar44;
      }
      fVar33 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 0x37c) = fVar32;
    }
    if (fVar33 == 0.0) {
      fVar44 = *(float *)(unaff_x22 + 0x19d0);
      if (*(float *)(unaff_x22 + 0x19d0) <= fVar47) {
        fVar44 = fVar47;
      }
      *(float *)(unaff_x22 + 0x19d0) = fVar44;
    }
  }
  else {
    lVar23 = lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x348);
    *(undefined8 *)(lVar23 + 300) = uVar11;
    fVar33 = *(float *)(unaff_x22 + 0x2e8);
    fVar44 = (float)((ulong)uVar11 >> 0x20) - fVar33;
    *(float *)(lVar23 + 0x120) = (float)uVar11 - fVar33;
    *(float *)(lVar23 + 0x128) = fVar44;
    *(float *)(unaff_x22 + 900) = fVar44;
  }
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar54 = *unaff_x25;
  if (*(uint *)(lVar23 + 0x18) <= uVar54) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)uVar54 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar23 + 0x194) = 0;
  uVar20 = *unaff_x21;
  if (uVar20 == 9) {
LAB_07d70d34:
    *(undefined1 *)(lVar23 + 0x194) = 1;
    pfVar22 = in_stack_000000a0;
    pfVar24 = in_stack_000000b8;
    if (uVar53 == uVar10) {
      lVar23 = *(long *)(unaff_x19 + 0x48);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      pfVar24 = (float *)(lVar23 + 100);
      pfVar22 = (float *)(lVar23 + 0x68);
    }
    fVar47 = *pfVar24;
    fVar32 = *pfVar22;
    fVar44 = *(float *)(unaff_x22 + 0x368);
    fVar36 = 0.0;
    fVar33 = *(float *)(unaff_x22 + 0x300);
    in_stack_00000100 = (fStack00000000000000b4 - fVar47) - fVar32;
    bVar2 = true;
    if ((fVar44 <= in_stack_00000100) && (bVar2 = false, !NAN(fVar44))) {
      bVar2 = fVar44 == -1.0;
    }
    if (!bVar2) {
      in_stack_00000100 = fVar44;
    }
    fVar44 = 0.0;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      fVar44 = (float)FUN_07d53598(&stack0x00001110,0);
      uVar20 = *unaff_x21;
    }
    if (uVar20 != 0xad) {
      fStack00000000000000e8 = unaff_s14;
    }
    if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar36 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    uVar54 = *unaff_x25;
    if (fStack00000000000000a8 <
        (*(float *)(unaff_x22 + 0x380) -
        (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar36) {
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar54;
      }
      iVar5 = *(int *)(in_stack_00000140 + 100);
      if (iVar5 != 1) {
        if ((iVar5 != 6) && (iVar5 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
        in_stack_0000112c = FUN_07d79b5c();
        goto LAB_07d71040;
      }
      if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
      iVar5 = FUN_059137dc(unaff_x22 + 0x15f0,
                           *(undefined8 *)
                            Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
      if (iVar5 == 0) {
        unaff_x25[0] = 0;
        unaff_x25[1] = 0;
        in_stack_0000112c = 0xffffffff;
        unaff_x28 = in_stack_00000168;
        in_stack_00001190 = DAT_015c3d00;
      }
      else {
        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                  (&stack0x000011a0,unaff_x22 + 0x15f0,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                  );
        memcpy(&stack0x00000c58,&stack0x000011a0,0x398);
        iVar9 = FUN_07d79b5c();
        iVar5 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
        unaff_w26 = unaff_w26 + 1;
        *(int *)(unaff_x22 + 0x334) = iVar5 + -1;
        unaff_x28 = in_stack_00000168;
        unaff_s12 = 1.0;
        in_stack_0000112c = iVar9 - 1;
        in_stack_00001190 = CONCAT44(0x2026,iVar5 + -1);
      }
      goto LAB_07d72ac8;
    }
LAB_07d70fbc:
    uVar20 = uVar54;
    if ((bVar3 & in_stack_00000100 <
                 ABS(fVar33) +
                 fVar44 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) == 1) {
      if (((iStack00000000000000b0 != 0) && (iStack00000000000000b0 != 3)) &&
         (uVar54 != *(uint *)(unaff_x22 + 0x338))) {
        in_stack_0000112c = FUN_07d79b5c();
        fVar44 = *(float *)(unaff_x22 + 0x2ec);
        if (fVar44 == DAT_015c55ac) {
          lVar23 = *(long *)(unaff_x19 + 0x30);
          if (lVar23 == 0) goto LAB_07d72adc;
          uVar20 = *unaff_x25;
          if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_07d72b20;
          fVar33 = *(float *)(unaff_x22 + 0x2e8);
          fVar44 = 0.0;
          if ((0.0 < fVar33) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar44 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          fVar44 = *(float *)(lVar23 + (long)(int)uVar20 * (long)(int)unaff_w27 + 0x14c) +
                   (fVar44 - *(float *)(unaff_x22 + 0x34c)) +
                   in_stack_00000020._4_4_ *
                   (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
        }
        else {
          *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
          lVar23 = *(long *)(unaff_x19 + 0x30);
          if (lVar23 == 0) goto LAB_07d72adc;
          fVar33 = *(float *)(unaff_x22 + 0x2e8);
          uVar20 = *(uint *)(unaff_x22 + 0x334);
        }
        if ((*(uint *)(lVar23 + 0x18) <= uVar20) ||
           (uVar30 = uVar20 - 1, *(uint *)(lVar23 + 0x18) <= uVar30)) goto LAB_07d72b20;
        piVar25 = (int *)(lVar23 + 0x20 + (long)(int)uVar20 * (long)(int)unaff_w27);
        fVar44 = (fStack0000000000000014 + fVar44 + *(float *)(unaff_x22 + 0x380) + fVar33) -
                 (float)piVar25[0x4c];
        if ((*(int *)(lVar23 + 0x20 + (long)(int)uVar30 * (long)(int)unaff_w27) != 0xad ||
             (in_stack_00000038._4_4_ & 1) != 0) ||
           ((*(int *)(in_stack_00000140 + 100) != 0 && (fStack00000000000000a8 <= fVar44)))) {
          if (*piVar25 != 0xad) {
            if ((((uStack0000000000000064 & 1) != 0) &&
                (iVar5 = *(int *)(unaff_x22 + 0x11f0), iVar5 != -1)) &&
               (iVar5 != in_stack_00000008._4_4_)) {
              in_stack_0000112c = FUN_07d79b5c();
              lVar23 = *(long *)(unaff_x19 + 0x30);
              if (lVar23 == 0) goto LAB_07d72adc;
              uVar20 = *unaff_x25;
              uVar30 = uVar20 - 1;
              if (*(uint *)(lVar23 + 0x18) <= uVar30) goto LAB_07d72b20;
              in_stack_00000008._4_4_ = iVar5;
              if (*(int *)(lVar23 + (long)(int)uVar30 * (long)(int)unaff_w27 + 0x20) == 0xad) {
                in_stack_00000038._4_4_ = 0;
                in_stack_0000112c = in_stack_0000112c - 1;
                *unaff_x25 = uVar30;
                unaff_x28 = in_stack_00000168;
                in_stack_00001190 = CONCAT44(0x2d,uVar30);
                goto LAB_07d72ac8;
              }
            }
            if (fStack00000000000000a8 < fVar44) {
              if (*(int *)(unaff_x22 + 0x35c) == -1) {
                *(uint *)(unaff_x22 + 0x35c) = uVar20;
              }
              iVar5 = *(int *)(in_stack_00000140 + 100);
              in_stack_00000038._4_4_ = 0;
              if (iVar5 < 3) {
                if (iVar5 != 0) {
                  if (iVar5 == 1) {
                    iVar5 = FUN_059137dc(unaff_x22 + 0x15f0,
                                         *(undefined8 *)
                                          Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                        );
                    if (iVar5 != 0) {
                      Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                                (&stack0x000011a0,unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                                );
                      memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                      iVar9 = FUN_07d79b5c();
                      in_stack_00000038._4_4_ = 0;
                      goto LAB_07d712c4;
                    }
                    in_stack_00000038._4_4_ = 0;
                    goto LAB_07d72aac;
                  }
                  if (iVar5 != 2) goto LAB_07d7166c;
                }
LAB_07d729d0:
                FUN_07d7bce4();
                in_stack_00000038._4_4_ = 0;
                uStack0000000000000064 = 1;
                uStack0000000000000058 = 1;
                unaff_x28 = in_stack_00000168;
                unaff_s12 = 1.0;
              }
              else {
                if (iVar5 == 3) {
                  in_stack_0000112c = FUN_07d79b5c();
                  in_stack_00000038._4_4_ = 0;
                }
                else {
                  if (iVar5 != 6) {
                    if (iVar5 != 4) goto LAB_07d7166c;
                    goto LAB_07d729d0;
                  }
                  in_stack_00000038._4_4_ = 0;
                  uVar54 = uVar20;
                }
LAB_07d71040:
                unaff_x28 = in_stack_00000168;
                in_stack_00001190 = CONCAT44(3,uVar54);
              }
            }
            else {
              FUN_07d7bce4();
              in_stack_00000038._4_4_ = 0;
              uStack0000000000000064 = 1;
              uStack0000000000000058 = 1;
              unaff_x28 = in_stack_00000168;
            }
            goto LAB_07d72ac8;
          }
          in_stack_00000038._4_4_ = 1;
          unaff_x28 = in_stack_00000168;
        }
        else {
          in_stack_00000038._4_4_ = 0;
          in_stack_0000112c = in_stack_0000112c - 1;
          *unaff_x25 = uVar30;
          unaff_x28 = in_stack_00000168;
          in_stack_00001190 = CONCAT44(0x2d,uVar30);
        }
        goto LAB_07d72ac8;
      }
      iVar5 = *(int *)(in_stack_00000140 + 100);
      if (iVar5 == 1) {
        iVar5 = FUN_059137dc(unaff_x22 + 0x15f0,
                             *(undefined8 *)
                              Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
        if (iVar5 != 0) {
          Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                    (&stack0x000011a0,unaff_x22 + 0x15f0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                    );
          memcpy(&stack0x00000528,&stack0x000011a0,0x398);
          iVar9 = FUN_07d79b5c();
LAB_07d712c4:
          iVar5 = *(int *)(unaff_x22 + 0x334);
          goto LAB_07d712d0;
        }
LAB_07d72aac:
        unaff_x25[0] = 0;
        unaff_x25[1] = 0;
        in_stack_0000112c = 0xffffffff;
        unaff_x28 = in_stack_00000168;
        in_stack_00001190 = DAT_015c3d00;
        goto LAB_07d72ac8;
      }
      if (iVar5 == 6) {
        in_stack_0000112c = FUN_07d79b5c();
        uVar54 = *(uint *)(unaff_x22 + 0x334);
        goto LAB_07d71040;
      }
      if (iVar5 == 3) goto LAB_07d7102c;
    }
LAB_07d7166c:
    if ((uVar4 & 1) == 0) {
      if (*unaff_x21 == 0xad) {
        lVar23 = *(long *)(unaff_x19 + 0x30);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_07d72b20;
        *(undefined1 *)(lVar23 + (long)(int)uVar20 * (long)(int)unaff_w27 + 0x194) = 0;
      }
      else {
        if (*in_stack_00000168 == '\x02') {
          FUN_07d7a738();
        }
        else if (*in_stack_00000168 == '\x01') {
          FUN_07d79ee4();
        }
        uVar54 = *unaff_x25;
        if ((uStack0000000000000058 & 1) != 0) {
          *(uint *)(unaff_x22 + 0x340) = uVar54;
        }
        *(uint *)(unaff_x22 + 0x344) = uVar54;
        *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uStack0000000000000058 = 0;
        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(float *)(lVar23 + 100) = fVar47;
        *(float *)(lVar23 + 0x68) = fVar32;
      }
    }
    else {
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= uVar20) goto LAB_07d72b20;
      *(undefined1 *)(lVar23 + (long)(int)uVar20 * (long)(int)unaff_w27 + 0x194) = 0;
      lVar23 = *(long *)(unaff_x19 + 0x48);
      if (lVar23 == 0) goto LAB_07d72adc;
      uVar54 = *(uint *)(lVar23 + 0x18);
      if (uVar54 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar23 = lVar23 + 0x20;
      lVar27 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      iVar5 = *(int *)(lVar27 + 0x10) + 1;
      *(int *)(lVar27 + 0x10) = iVar5;
      uVar20 = *(uint *)(unaff_x22 + 0x350);
      *(int *)(unaff_x22 + 0x358) = iVar5;
      if (uVar54 <= uVar20) goto LAB_07d72b20;
      lVar27 = lVar23 + (long)(int)uVar20 * 0x60;
      *(float *)(lVar27 + 0x44) = fVar47;
      *(float *)(lVar27 + 0x48) = fVar32;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      if (*unaff_x21 == 0xa0) {
        *(int *)(lVar23 + (long)(int)uVar20 * 0x60) =
             *(int *)(lVar23 + (long)(int)uVar20 * 0x60) + 1;
      }
    }
  }
  else {
    if (iStack000000000000005c == 2) {
      if ((uVar4 & 1) == 0 && uVar20 != 0x200b) goto LAB_07d70e7c;
      goto LAB_07d70d34;
    }
    if ((uVar4 & 1) == 0) {
LAB_07d70e7c:
      if ((uVar20 != 3) && (uVar20 != 0x200b)) {
        if (uVar20 != 0xad) goto LAB_07d70d34;
        goto LAB_07d70e98;
      }
    }
    else {
LAB_07d70e98:
      if (uVar20 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
    }
    if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
    if (*(int *)(in_stack_00000140 + 100) == 6) {
      if ((uVar20 & 0xfffffffe) != 10) {
        if ((0x22 < uVar20 - 0x2007) ||
           ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
        goto LAB_07d71420;
      }
      fVar44 = 0.0;
      if ((0.0 < fVar33) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        fVar44 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
      }
      if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar33)) + fVar44 <=
          fStack00000000000000a8) goto LAB_07d71228;
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar54;
      }
      in_stack_0000112c = FUN_07d79b5c();
      goto LAB_07d71040;
    }
LAB_07d71228:
    if ((int)uVar20 < 0x2007) {
      if (uVar20 != 10) {
LAB_07d713e4:
        if ((uVar20 != 0xb) && (uVar20 != 0xa0)) goto LAB_07d713f4;
        goto LAB_07d71420;
      }
LAB_07d71440:
      lVar23 = *(long *)(unaff_x19 + 0x48);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      uVar20 = *unaff_x21;
LAB_07d7147c:
      if (uVar20 == 0xa0) {
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
      }
    }
    else {
      if ((0x22 < uVar20 - 0x2007) ||
         ((1L << ((ulong)(uVar20 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_066bcb80(uVar20,0);
        uVar20 = *unaff_x21;
        if ((uVar13 & 1) != 0) goto LAB_07d71420;
        goto LAB_07d7147c;
      }
LAB_07d71420:
      if (((uVar20 != 0xad) && (uVar20 != 0x200b)) && (uVar20 != 0x2060)) goto LAB_07d71440;
    }
  }
  if ((uVar53 == uVar10) && (*(int *)(in_stack_00000140 + 100) == 1)) {
    if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar47 = *(float *)(unaff_x22 + 0xf8);
      fVar44 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar32 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      lVar23 = *(long *)(unaff_x22 + 0x19f8);
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_07d72adc;
      fVar36 = *(float *)(unaff_x22 + 0xf0);
      fVar46 = *(float *)(lVar23 + 0x2c);
      fVar33 = (float)FUN_07d5378c(*(long *)(lVar23 + 0x20),0);
      uVar11 = *(undefined8 *)in_stack_000000b8;
      fVar33 = (fVar47 / fVar44) * fVar32 * fVar36 * fVar46 * fVar33;
      if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
        lVar23 = *(long *)(unaff_x19 + 0x30);
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar54 = *(int *)(unaff_x22 + 0x334) - 1;
        if (*(uint *)(lVar23 + 0x18) <= uVar54) goto LAB_07d72b20;
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar47 = *(float *)(lVar23 + (long)(int)uVar54 * (long)(int)unaff_w27 + 0x60);
        fVar44 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar32 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar23 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_07d72adc;
        fVar36 = *(float *)(unaff_x22 + 0xf0);
        fVar46 = *(float *)(lVar23 + 0x2c);
        fVar33 = (float)FUN_07d5378c(*(long *)(lVar23 + 0x20),0);
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uVar11 = *(undefined8 *)(lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
        fVar33 = (fVar47 / fVar44) * fVar32 * fVar36 * fVar46 * fVar33;
      }
      fVar44 = 0.0;
      fVar47 = *(float *)(unaff_x22 + 0x300);
      if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
        if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
           (lVar23 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar23 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar23,0);
        fVar44 = (float)FUN_07d53598(&stack0x000010e0,0);
      }
      fVar32 = (fStack00000000000000b4 - (float)uVar11) - (float)((ulong)uVar11 >> 0x20);
      fVar36 = *(float *)(unaff_x22 + 0x368);
      bVar2 = true;
      if ((fVar36 <= fVar32) && (bVar2 = false, !NAN(fVar36))) {
        bVar2 = fVar36 == -1.0;
      }
      if (!bVar2) {
        fVar32 = fVar36;
      }
      if (ABS(fVar47) + fVar33 * fVar44 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar32) {
        FUN_07d79804();
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  else if (*(int *)(in_stack_00000140 + 100) == 1) goto LAB_07d717ec;
  unaff_s12 = 1.0;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
  uVar54 = *(uint *)(unaff_x22 + 0x350);
  *(uint *)(lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) = uVar54;
  if ((uVar53 == uVar10) ||
     ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar23 = *(long *)(unaff_x19 + 0x48);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= uVar54) goto LAB_07d72b20;
    if (*(int *)(lVar23 + (long)(int)uVar54 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
  }
  else {
    lVar23 = *(long *)(unaff_x19 + 0x48);
    if (lVar23 == 0) goto LAB_07d72adc;
LAB_07d71a94:
    if (*(uint *)(lVar23 + 0x18) <= uVar54) goto LAB_07d72b20;
    *(undefined4 *)(lVar23 + (long)(int)uVar54 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160);
  }
  uVar54 = *unaff_x21;
  if (uVar54 != 0x200b) {
    if (uVar54 == 9) {
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar44 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      bVar3 = FUN_07d617d8(*in_stack_00000148,0);
      fVar32 = *(float *)(unaff_x22 + 0x300);
      cVar18 = *(char *)(unaff_x22 + 0xf4);
      fVar47 = unaff_s14 * fVar44 * (float)bVar3;
      fVar44 = fVar47 * (float)(int)(fVar32 / fVar47);
      if (fVar44 <= fVar32) {
        fVar44 = fVar32 + fVar47;
      }
    }
    else {
      fVar44 = *(float *)(unaff_x22 + 0x2f8);
      if (fVar44 == 0.0) {
        fVar47 = *(float *)(unaff_x22 + 0x300);
        if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
          fVar44 = (float)FUN_07d57ad0(&stack0x00001100,0);
          if (*in_stack_00000148 != 0) {
            fVar32 = (float)FUN_07d61798(*in_stack_00000148,0);
            cVar18 = *(char *)(unaff_x22 + 0xf4);
            fVar47 = fVar47 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              unaff_s14 * fVar44 +
                              in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar31 + fVar32));
            if (cVar18 != '\0') {
              fVar47 = (float)(int)(fVar47 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x300) = fVar47;
            if (((uVar4 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
            fVar44 = fVar47 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
            goto FUN_07d71c94;
          }
          goto LAB_07d72adc;
        }
        fVar44 = (float)FUN_07d53598(&stack0x00001110,0);
        fVar33 = *(float *)(unaff_x22 + 0x19b0);
        fVar32 = (float)FUN_07d57ad0(&stack0x00001100,0);
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar36 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
        fVar47 = fVar47 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          unaff_s14 * (fVar44 * fVar33 + fVar32) +
                          in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar31 + fVar36));
      }
      else {
        if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar54 < 0x3b)) &&
           ((1L << ((ulong)uVar54 & 0x3f) & 0x400500000000000U) != 0)) {
          fVar44 = fVar44 * 0.5;
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar47 = *(float *)(unaff_x22 + 0x300);
        fVar32 = (float)FUN_07d61798(*in_stack_00000148,0);
        fVar47 = fVar47 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          (fVar44 - fVar34) + in_stack_000000d8._4_4_ * (fVar31 + fVar32));
      }
      cVar18 = *(char *)(unaff_x22 + 0xf4);
      if (cVar18 != '\0') {
        fVar47 = (float)(int)(fVar47 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar47;
      if (((uVar4 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
      fVar44 = fVar47 + in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
    }
FUN_07d71c94:
    if (cVar18 != '\0') {
      fVar44 = (float)(int)(fVar44 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar44;
  }
LAB_07d71ca8:
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar54 = *unaff_x25;
  uVar20 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar20 <= uVar54) goto LAB_07d72b20;
  *(undefined4 *)(lVar23 + (long)(int)uVar54 * (long)(int)unaff_w27 + 0x158) =
       *(undefined4 *)(unaff_x22 + 0x300);
  uVar30 = *unaff_x21;
  if ((int)uVar30 < 0xd) {
    if ((1 < uVar30 - 10) && (uVar30 != 3)) {
LAB_07d71d38:
      if ((uVar30 != 0x2d || uVar53 != uVar10) && (uVar54 != uStack000000000000004c))
      goto LAB_07d72314;
    }
  }
  else if (uVar30 != 0x2028) {
    if (uVar30 != 0xd) goto LAB_07d71d38;
    fVar44 = *(float *)(unaff_x22 + 0x308) + 0.0;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar44 = (float)(int)(fVar44 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar44;
    if (uVar54 != uStack000000000000004c) {
      uVar30 = 0xd;
      goto LAB_07d72314;
    }
  }
  if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
    fVar44 = *(float *)(unaff_x22 + 0x348);
    fVar47 = *(float *)(unaff_x22 + 0x15b8);
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar44 = fVar44 - fVar47;
    if ((fStack0000000000000054 < ABS(fVar44)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      uVar37 = *(undefined4 *)(unaff_x22 + 0x338);
      uVar6 = *(undefined4 *)(unaff_x22 + 0x334);
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      FUN_07d8f610(uVar37,uVar6);
      fVar47 = fVar44 + *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar44;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar47 = (float)(int)(fVar47 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x2e8) = fVar47;
      if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                  (&stack0x00000170,unaff_x22 + 0x15f0,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                  );
        memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
        thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
        *(float *)(unaff_x22 + 0xb00) = fVar44 + *(float *)(unaff_x22 + 0xb00);
        *(float *)(unaff_x22 + 0xb34) = fVar44 + *(float *)(unaff_x22 + 0xb34);
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  fVar47 = *(float *)(unaff_x22 + 0x2e8);
  fVar32 = *(float *)(unaff_x22 + 0x34c) - fVar47;
  fVar44 = *(float *)(unaff_x22 + 900);
  if (fVar32 <= *(float *)(unaff_x22 + 900)) {
    fVar44 = fVar32;
  }
  fVar33 = *(float *)(unaff_x22 + 0x348);
  *(float *)(unaff_x22 + 900) = fVar44;
  if (in_stack_0000119c == '\0') {
    *in_stack_00000040 = fVar44;
  }
  lVar23 = *(long *)(unaff_x19 + 0x48);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar10 = *(uint *)(unaff_x22 + 0x350);
  if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_07d72b20;
  lVar14 = lVar23 + 0x20 + (long)(int)uVar10 * 0x60;
  uVar53 = *(uint *)(unaff_x22 + 0x338);
  *(uint *)(lVar14 + 0x18) = uVar53;
  lVar27 = 0x338;
  if ((int)uVar53 <= *(int *)(unaff_x22 + 0x340)) {
    lVar27 = 0x340;
  }
  uVar30 = *(uint *)(unaff_x22 + lVar27);
  *(uint *)(unaff_x22 + 0x340) = uVar30;
  *(uint *)(lVar14 + 0x1c) = uVar30;
  uVar20 = *(uint *)(unaff_x22 + 0x334);
  *(uint *)(unaff_x22 + 0x33c) = uVar20;
  *(uint *)(lVar14 + 0x20) = uVar20;
  uVar54 = *(uint *)(unaff_x22 + 0x340);
  if ((int)uVar30 <= (int)*(uint *)(unaff_x22 + 0x344)) {
    uVar54 = *(uint *)(unaff_x22 + 0x344);
  }
  *(uint *)(unaff_x22 + 0x344) = uVar54;
  *(uint *)(lVar14 + 0x24) = uVar54;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  uVar21 = uVar54;
  if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_07d72b20;
    if (*(float *)(lVar27 + (long)(int)uVar20 * (long)(int)unaff_w27 + 0x158) != 0.0) {
      uVar30 = uVar53;
      uVar21 = uVar20;
    }
  }
  lVar23 = lVar23 + 0x20 + (long)(int)uVar10 * 0x60;
  *(uint *)(lVar23 + 4) = (uVar20 - uVar53) + 1;
  iVar5 = *(int *)(in_stack_00000068 + 0x60);
  *(int *)(lVar23 + 8) = iVar5;
  *(uint *)(lVar23 + 0xc) = (uVar54 - (uVar53 + iVar5)) + 1;
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= uVar30) goto LAB_07d72b20;
  *(undefined4 *)(lVar23 + 0x50) =
       *(undefined4 *)(lVar27 + (long)(int)uVar30 * (long)(int)unaff_w27 + 0x118);
  *(float *)(lVar23 + 0x54) = fVar32;
  lVar23 = *(long *)(unaff_x19 + 0x48);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= uVar21) goto LAB_07d72b20;
  fVar33 = fVar33 - fVar47;
  lVar23 = lVar23 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
  uVar37 = *(undefined4 *)(lVar27 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x124);
  *(float *)(lVar23 + 0x5c) = fVar33;
  *(undefined4 *)(lVar23 + 0x58) = uVar37;
  lVar23 = *(long *)(unaff_x19 + 0x48);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar53 = *(uint *)(unaff_x22 + 0x350);
  uVar10 = *(uint *)(lVar23 + 0x18);
  if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
    if (uVar10 <= uVar53) goto LAB_07d72b20;
    lVar27 = lVar23 + (long)(int)uVar53 * 0x60;
    fVar44 = *(float *)(lVar27 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
  }
  else {
    if (uVar10 <= uVar53) goto LAB_07d72b20;
    lVar14 = *(long *)(unaff_x19 + 0x30);
    if (lVar14 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_07d72b20;
    lVar27 = lVar23 + (long)(int)uVar53 * 0x60;
    fVar44 = *(float *)(lVar14 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x158);
  }
  *(float *)(lVar27 + 0x48) = fVar44;
  if (uVar10 <= uVar53) goto LAB_07d72b20;
  lVar27 = lVar23 + 0x20 + (long)(int)uVar53 * 0x60;
  *(float *)(lVar27 + 0x40) = in_stack_00000100;
  if (*(int *)(lVar27 + 4) == 1) {
    *(undefined4 *)(lVar23 + 0x20 + (long)(int)uVar53 * 0x60 + 0x4c) =
         *(undefined4 *)(unaff_x22 + 0x160);
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar44 = (float)FUN_07d61798(*in_stack_00000148,0);
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  uVar10 = *(uint *)(unaff_x22 + 0x344);
  uVar20 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar20 <= uVar10) goto LAB_07d72b20;
  uVar53 = *(uint *)(unaff_x22 + 0x350);
  lVar27 = *(long *)(unaff_x19 + 0x48);
  fVar44 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
           (*(float *)(unaff_x22 + 0x2f4) +
           in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar31 + fVar44));
  if (*(char *)(lVar23 + 0x20 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x174) == '\0') {
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar10 = *(uint *)(unaff_x22 + 0x33c);
    if (uVar20 <= uVar10) goto LAB_07d72b20;
  }
  else if (lVar27 == 0) goto LAB_07d72adc;
  bVar2 = *(uint *)(lVar27 + 0x18) <= uVar53;
  if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
    if (bVar2) goto LAB_07d72b20;
    fVar44 = -fVar44;
  }
  else if (bVar2) goto LAB_07d72b20;
  *(float *)(lVar27 + (long)(int)uVar53 * 0x60 + 0x5c) =
       *(float *)(lVar23 + 0x20 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x138) + fVar44;
  if (*(uint *)(lVar27 + 0x18) <= uVar53) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)uVar53 * 0x60;
  *(float *)(lVar27 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
  *(float *)(lVar27 + 0x58) = fVar32;
  *(float *)(lVar27 + 0x4c) = fStack0000000000000048 + (fVar33 - fVar32);
  *(float *)(lVar27 + 0x50) = fVar33;
  uVar30 = *unaff_x21;
  if ((int)uVar30 < 0x2d) {
    if (1 < uVar30 - 10) goto code_r0x07d721d0;
  }
  else if ((1 < uVar30 - 0x2028) && (uVar30 != 0x2d)) goto LAB_07d72314;
  FUN_07d79804();
  uVar4 = *(uint *)(unaff_x22 + 0x334);
  iVar5 = *(int *)(unaff_x22 + 0x350) + 1;
  *(uint *)(unaff_x22 + 0x338) = uVar4 + 1;
  *(int *)(unaff_x22 + 0x350) = iVar5;
  *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
  if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07d72adc;
  if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar5) {
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07d8f790(iVar5);
    uVar4 = *unaff_x25;
  }
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_07d72b20;
  fVar31 = *(float *)(unaff_x22 + 0x2ec);
  fVar44 = *(float *)(lVar23 + (long)(int)uVar4 * (long)(int)unaff_w27 + 0x14c);
  if (fVar31 == DAT_015c55ac) {
    if ((*unaff_x21 == 0x2029) || (fVar47 = 0.0, *unaff_x21 == 10)) {
      fVar47 = *(float *)(in_stack_00000140 + 0x94);
    }
    uVar19 = 0;
    fVar31 = fVar44 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
             in_stack_00000020._4_4_ * (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
  }
  else {
    if ((*unaff_x21 == 0x2029) || (fVar47 = 0.0, *unaff_x21 == 10)) {
      fVar47 = *(float *)(in_stack_00000140 + 0x94);
    }
    uVar19 = 1;
  }
  fVar31 = *(float *)(unaff_x22 + 0x2e8) + fVar31 + in_stack_000000d8._4_4_ * (fVar47 + 0.0);
  bVar2 = *(char *)(unaff_x22 + 0xf4) != '\0';
  *(undefined1 *)(unaff_x22 + 0x2f0) = uVar19;
  *(float *)(unaff_x22 + 0x15b8) = fVar44;
  fVar44 = *(float *)(unaff_x22 + 0x304) + 0.0 + *(float *)(unaff_x22 + 0x308);
  if (bVar2) {
    fVar31 = (float)(int)(fVar31 + unaff_s15);
  }
  *(float *)(unaff_x22 + 0x2e8) = fVar31;
  if (bVar2) {
    fVar44 = (float)(int)(fVar44 + unaff_s15);
  }
  *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
  *(float *)(unaff_x22 + 0x300) = fVar44;
  FUN_07d79804();
  FUN_07d79804();
  *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
  uStack0000000000000064 = 1;
  uStack0000000000000058 = 1;
  unaff_x28 = in_stack_00000168;
  goto LAB_07d72ac8;
code_r0x07d721d0:
  if (uVar30 == 3) {
    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
    uVar30 = 3;
    in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
  }
LAB_07d72314:
  uVar10 = *unaff_x25;
  if (uVar20 <= uVar10) goto LAB_07d72b20;
  lVar23 = lVar23 + 0x20;
  if (*(char *)(lVar23 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x174) != '\0') {
    lVar27 = lVar23 + (long)(int)uVar10 * (long)(int)unaff_w27;
    auVar40 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
    uVar11 = *(undefined8 *)(lVar27 + 0xf8);
    auVar42 = NEON_ext(auVar40,auVar40,8,1);
    uVar12 = *(undefined8 *)(lVar27 + 0x104);
    auVar43._0_4_ = -(uint)(auVar40._0_4_ < (float)uVar11);
    auVar43._4_4_ = -(uint)(auVar40._4_4_ < (float)((ulong)uVar11 >> 0x20));
    auVar43._8_4_ = -(uint)((float)uVar12 < auVar42._0_4_);
    auVar43._12_4_ = -(uint)((float)((ulong)uVar12 >> 0x20) < auVar42._4_4_);
    auVar42._8_8_ = uVar12;
    auVar42._0_8_ = uVar11;
    auVar40 = auVar40 ^ (auVar40 ^ auVar42) & ~auVar43;
    *(long *)(in_stack_00000068 + 0x80) = auVar40._8_8_;
    *(long *)(in_stack_00000068 + 0x78) = auVar40._0_8_;
  }
  if (((iStack00000000000000b0 == 3) || (iStack00000000000000b0 == 0)) &&
     ((unaff_x28 = in_stack_00000168, 6 < *(uint *)(in_stack_00000140 + 100) ||
      ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) == 0)))) goto LAB_07d72940;
  if (((uVar4 & 1) == 0) && (uVar30 != 0x200b)) {
    if (uVar30 == 0x2d) {
      if (0 < (int)uVar10) {
        if (uVar20 <= uVar10 - 1) goto LAB_07d72b20;
        uVar37 = *(undefined4 *)(lVar23 + (ulong)(uVar10 - 1) * (ulong)unaff_w27);
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_066b9610(uVar37,0);
        if ((uVar13 & 1) != 0) {
          uVar30 = *unaff_x21;
          goto LAB_07d72408;
        }
      }
      goto LAB_07d72410;
    }
LAB_07d72408:
    if (uVar30 == 0xad) goto LAB_07d72410;
    if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
    unaff_x28 = in_stack_00000168;
    if ((uStack0000000000000064 & 1) == 0) goto code_r0x07d7263c;
LAB_07d72618:
    if ((in_stack_00000038._4_4_ & 1) == 0 && *unaff_x21 == 0xad) {
LAB_07d72434:
      FUN_07d79804();
      uStack0000000000000064 = 1;
      goto LAB_07d72934;
    }
  }
  else {
LAB_07d72410:
    if (*(char *)(unaff_x22 + 0x388) == '\0') {
      uVar30 = *unaff_x21;
      if ((int)uVar30 < 0x2007) {
        if (uVar30 == 0x2d) {
          uVar4 = *unaff_x25 - 1;
          if (0 < (int)*unaff_x25) {
            lVar23 = *(long *)(unaff_x19 + 0x30);
            if (lVar23 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar23 + 0x18) <= uVar4) goto LAB_07d72b20;
            uVar37 = *(undefined4 *)(lVar23 + (ulong)uVar4 * (ulong)unaff_w27 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_066b9610(uVar37,0);
            unaff_x28 = in_stack_00000168;
            if ((uVar13 & 1) != 0) goto LAB_07d72940;
          }
        }
        else if (uVar30 == 0xa0) goto LAB_07d72644;
      }
      else if (((uVar30 - 0x2007 < 0x29) &&
               ((1L << ((ulong)(uVar30 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
              (uVar30 == 0x2060)) {
LAB_07d72644:
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        uVar13 = FUN_07d90128(uVar30,0);
        if ((uVar13 & 1) == 0) {
LAB_07d7268c:
          uVar10 = *unaff_x21;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar13 = FUN_07d901bc(uVar10,0);
          if ((uVar13 & 1) == 0) {
            if ((*(char *)(unaff_x22 + 0x388) == '\0') &&
               (uVar10 = *unaff_x25 + 1, (int)uVar10 < iStack0000000000000028)) {
              lVar23 = *(long *)(unaff_x19 + 0x30);
              if (lVar23 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_07d72b20;
              uVar37 = *(undefined4 *)(lVar23 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x20);
              if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                          0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_07d901bc(uVar37,0);
              if ((uVar13 & 1) != 0) {
                lVar23 = *(long *)(unaff_x19 + 0x30);
                if (lVar23 != 0) {
                  if (*(uint *)(lVar23 + 0x18) <= *unaff_x25 + 1) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c8();
                  }
                  if (in_stack_00000018 == 0) goto LAB_07d72adc;
                  uVar37 = *(undefined4 *)
                            (lVar23 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
                  lVar23 = FUN_07d86e90(in_stack_00000018,0);
                  if ((lVar23 == 0) || (lVar23 = FUN_07d98b58(lVar23,0), lVar23 == 0))
                  goto LAB_07d72adc;
                  uVar4 = FUN_049ddf40(lVar23,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                  lVar23 = FUN_07d86e90(in_stack_00000018,0);
                  if ((lVar23 == 0) || (lVar23 = FUN_07d98b58(lVar23,0), lVar23 == 0))
                  goto LAB_07d72adc;
                  uVar10 = FUN_049ddf40(lVar23,uVar37,*(undefined8 *)PTR_DAT_084b5110);
                  unaff_x28 = in_stack_00000168;
                  if (((uVar4 | uVar10) & 1) != 0) goto LAB_07d72940;
                  goto LAB_07d72934;
                }
                goto LAB_07d72adc;
              }
            }
            goto LAB_07d72418;
          }
          if (in_stack_00000018 == 0) goto LAB_07d72adc;
        }
        else {
          if ((in_stack_00000018 == 0) || (lVar23 = FUN_07d86e90(in_stack_00000018,0), lVar23 == 0))
          goto LAB_07d72adc;
          if (*(char *)(lVar23 + 0x28) != '\0') goto LAB_07d7268c;
        }
        lVar23 = FUN_07d86e90(in_stack_00000018,0);
        if ((lVar23 == 0) || (lVar23 = FUN_07d98b58(lVar23,0), lVar23 == 0)) goto LAB_07d72adc;
        uVar13 = FUN_049ddf40(lVar23,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
        if ((int)*unaff_x25 < (int)uStack000000000000004c) {
          lVar23 = FUN_07d86e90(in_stack_00000018,0);
          if (lVar23 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar23 = FUN_07d98da0(lVar23,0);
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
          if (lVar23 == 0) goto LAB_07d72adc;
          uVar10 = FUN_049ddf40(lVar23,*(undefined4 *)
                                        (lVar27 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27
                                        + 0x20),*(undefined8 *)PTR_DAT_084b5110);
          if ((uVar13 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
          uStack0000000000000064 = uVar10 & uStack0000000000000064;
          uVar4 = uStack0000000000000064 & uVar4;
          if (((uStack0000000000000064 & 1) != 0) || (((uVar10 ^ 1) & 1) != 0)) goto LAB_07d728a8;
          uStack0000000000000064 = 0;
        }
        else {
          uVar10 = 0;
          if ((uVar13 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
          unaff_x28 = in_stack_00000168;
          if ((uStack0000000000000064 & uVar7 == uVar8) == 0) goto LAB_07d72940;
          uStack0000000000000064 = 1;
LAB_07d728a8:
          FUN_07d79804();
        }
        unaff_x28 = in_stack_00000168;
        if ((uVar4 & 1) == 0) goto LAB_07d72940;
        goto LAB_07d72934;
      }
      uStack0000000000000064 = 0;
      *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
      goto LAB_07d72934;
    }
LAB_07d72418:
    unaff_x28 = in_stack_00000168;
    if ((uStack0000000000000064 & 1) == 0) goto code_r0x07d7263c;
    if ((uVar4 & 1) == 0) goto LAB_07d72618;
    if (*unaff_x21 != 0xa0) goto LAB_07d72434;
  }
  uStack0000000000000064 = 1;
LAB_07d72934:
  FUN_07d79804();
  unaff_x28 = in_stack_00000168;
  goto LAB_07d72940;
}


