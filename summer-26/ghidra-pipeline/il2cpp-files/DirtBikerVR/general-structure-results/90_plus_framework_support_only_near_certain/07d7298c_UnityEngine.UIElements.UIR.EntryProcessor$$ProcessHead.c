/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.EntryProcessor$$ProcessHead
ENTRY_POINT: 07d7298c
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


void UnityEngine_UIElements_UIR_EntryProcessor__ProcessHead(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 *puVar20;
  char cVar21;
  undefined1 uVar22;
  uint uVar23;
  uint uVar24;
  float *pfVar25;
  long lVar26;
  long lVar27;
  float *pfVar28;
  int *piVar29;
  long *plVar30;
  long unaff_x19;
  long *plVar31;
  uint *unaff_x21;
  long unaff_x22;
  long lVar32;
  ulong uVar33;
  long unaff_x23;
  uint uVar34;
  uint *unaff_x25;
  uint unaff_w27;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float unaff_s12;
  float fVar55;
  float fVar56;
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
  float *in_stack_00000040;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  undefined8 in_stack_00000058;
  uint in_stack_00000060;
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
  int in_stack_00000108;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  long *in_stack_00000148;
  float fStack0000000000000150;
  char *in_stack_00000168;
  uint in_stack_000010fc;
  uint in_stack_0000112c;
  uint uVar57;
  uint uVar58;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
code_r0x07d7298c:
  FUN_07d7bce4();
  bVar3 = false;
  bVar1 = 1;
  bVar5 = true;
  lVar32 = unaff_x23;
  fVar35 = unaff_s12;
LAB_07d72ac8:
  do {
    lVar27 = *(long *)(unaff_x22 + 0x20);
    in_stack_0000112c = in_stack_0000112c + 1;
    if (lVar27 == 0) goto LAB_07d72adc;
    if ((int)*(uint *)(lVar27 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
      FUN_07d797b8();
      return;
    }
    if (*(uint *)(lVar27 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
    uVar8 = *(uint *)(lVar27 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
    if (uVar8 == 0) goto LAB_07d72ae0;
    *unaff_x21 = uVar8;
    if (5 < in_stack_00000108) {
      uVar14 = FUN_0676d8dc();
      uVar15 = FUN_0674e2a4(&stack0x0000112c,0);
      uVar14 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar14,
                            *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar15,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4fb40(uVar14,0);
      uVar8 = *unaff_x21;
      in_stack_00001190 = CONCAT44(3,*unaff_x25);
    }
  } while (uVar8 == 0x1a);
  if ((uVar8 == 0x3c) && (*(char *)(lVar32 + 0x81) != '\0')) {
    in_stack_00000168[0] = '\x01';
    in_stack_00000168[1] = '\x01';
    uVar16 = FUN_07d74ca8();
    if (((uVar16 & 1) != 0) && (in_stack_0000112c = in_stack_000010fc, *in_stack_00000168 == '\x01')
       ) goto LAB_07d72ac8;
  }
  else {
    lVar32 = *(long *)(unaff_x19 + 0x30);
    if (lVar32 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar32 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar32 = lVar32 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *in_stack_00000168 = *(char *)(lVar32 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar32 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar32 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
  }
  lVar32 = *(long *)(unaff_x19 + 0x30);
  if (lVar32 == 0) goto LAB_07d72adc;
  uVar13 = *(uint *)(unaff_x22 + 0x334);
  uVar8 = *(uint *)(lVar32 + 0x18);
  if (uVar8 <= uVar13) goto LAB_07d72b20;
  lVar27 = lVar32 + 0x20;
  uVar57 = (uint)in_stack_00001190;
  uVar41 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar21 = *(char *)(lVar27 + (long)(int)uVar13 * (long)(int)unaff_w27 + 0x3c);
  in_stack_00000168[1] = '\0';
  if (uVar57 == uVar13) {
    uVar11 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar11;
    *in_stack_00000168 = '\x01';
    if (uVar11 != 0x2026) {
      if (uVar11 == 3) {
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        uVar8 = *unaff_x25;
        lVar17 = FUN_07d61598(*in_stack_00000148,0);
        if (lVar17 == 0) goto LAB_07d72adc;
        uVar14 = FUN_060344a4(lVar17,3,*(undefined8 *)
                                        System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                             );
        if (*(uint *)(lVar32 + 0x18) <= uVar8) goto LAB_07d72b20;
        *(undefined8 *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x10) = uVar14;
        thunk_FUN_03afed3c();
        *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      }
      goto LAB_07d6efec;
    }
    if (uVar8 <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
         *(undefined8 *)(unaff_x22 + 0x19f8);
    thunk_FUN_03afed3c();
    lVar32 = *(long *)(unaff_x19 + 0x30);
    if (lVar32 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar32 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar32 = lVar32 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(undefined8 *)(lVar32 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
    *(undefined1 *)(lVar32 + 0x28) = 1;
    thunk_FUN_03afed3c();
    lVar32 = *(long *)(unaff_x19 + 0x30);
    if (lVar32 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar32 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(lVar32 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
         *(undefined8 *)(unaff_x22 + 0x1a08);
    thunk_FUN_03afed3c();
    lVar32 = *(long *)(unaff_x19 + 0x30);
    if (lVar32 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar32 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined4 *)(lVar32 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
         *(undefined4 *)(unaff_x22 + 0x1a10);
    lVar32 = *(long *)(unaff_x22 + 0x15c0);
    if (lVar32 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar32 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
    lVar32 = lVar32 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
    *(int *)(lVar32 + 0x54) = *(int *)(lVar32 + 0x54) + 1;
    uVar8 = *(uint *)(unaff_x22 + 0x334);
    *(undefined1 *)(unaff_x22 + 0x4d) = 1;
    in_stack_00001190 = CONCAT44(3,uVar8 + 1);
  }
  else {
LAB_07d6efec:
    uVar8 = *unaff_x25;
  }
  lVar32 = in_stack_00000140;
  if (((int)uVar8 < 0) && (*unaff_x21 != 3)) {
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined4 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *unaff_x25 = uVar8 + 1;
    goto LAB_07d72ac8;
  }
  cVar2 = *in_stack_00000168;
  if (cVar2 == '\x01') {
    uVar8 = *(uint *)(unaff_x22 + 300);
    if ((uVar8 >> 4 & 1) == 0) {
      if ((uVar8 >> 3 & 1) == 0) {
        fVar48 = 1.0;
        if ((uVar8 >> 5 & 1) != 0) {
          uVar8 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar16 = FUN_066bbc7c(uVar8,0);
          fVar48 = 1.0;
          if ((uVar16 & 1) != 0) {
            uVar8 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar8 = FUN_066bbf04(uVar8,0);
            fVar48 = fStack0000000000000010;
            goto LAB_07d6f260;
          }
        }
      }
      else {
        uVar8 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar16 = FUN_066bbbdc(uVar8,0);
        fVar48 = 1.0;
        if ((uVar16 & 1) != 0) {
          uVar8 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar8 = FUN_066bc07c(uVar8,0);
          goto LAB_07d6f25c;
        }
      }
    }
    else {
      uVar8 = *unaff_x21;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar16 = FUN_066bbc7c(uVar8,0);
      fVar48 = 1.0;
      if ((uVar16 & 1) != 0) {
        uVar8 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar8 = FUN_066bbf04(uVar8,0);
LAB_07d6f25c:
        fVar48 = 1.0;
LAB_07d6f260:
        *unaff_x21 = uVar8 & 0xffff;
      }
    }
    cVar2 = *in_stack_00000168;
  }
  else {
    fVar48 = 1.0;
  }
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (cVar2 == '\x01') {
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(unaff_x22 + 0x1598) =
         *(undefined8 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
    thunk_FUN_03afed3c(unaff_x22 + 0x1598);
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000148 = *(long *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000090 = *(long *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50);
    thunk_FUN_03afed3c();
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar11 = *unaff_x25;
    uVar8 = *(uint *)(lVar27 + 0x18);
    if (uVar8 <= uVar11) goto LAB_07d72b20;
    *(undefined4 *)(unaff_x22 + 0x78) =
         *(undefined4 *)(lVar27 + 0x20 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x38);
    if (uVar57 == uVar13) {
      lVar17 = *(long *)(unaff_x22 + 0x20);
      if (lVar17 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar17 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
      if ((*(int *)(lVar17 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
         (uVar11 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
      if (uVar8 <= uVar11 - 1) goto LAB_07d72b20;
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar52 = *(float *)(lVar27 + 0x20 + (long)(int)(uVar11 - 1) * (long)(int)unaff_w27 + 0x40);
      fVar35 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar36 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar36 = ((fVar48 * fVar52) / fVar35) * fVar36;
LAB_07d6f900:
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
    }
    else {
LAB_07d6f408:
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar52 = *(float *)(unaff_x22 + 0xf8);
      fVar35 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar36 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar36 = ((fVar48 * fVar52) / fVar35) * fVar36;
      if (uVar57 == uVar13) goto LAB_07d6f900;
LAB_07d6f918:
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
    }
    lVar27 = *(long *)(unaff_x22 + 0x1598);
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_07d72adc;
    fVar35 = *(float *)(unaff_x22 + 0xf0);
    fVar52 = *(float *)(lVar27 + 0x2c);
    fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar27 + 0x20),0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar37 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar38 = *(float *)(unaff_x22 + 0xf0);
    fVar40 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    lVar27 = *(long *)(unaff_x19 + 0x30);
    fVar40 = fVar36 * fVar37 * fVar38 * fVar40;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar40 = (float)(int)(fVar40 + unaff_s15);
    }
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar17 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar17 + 0x28) = 1;
    fStack00000000000000e8 = fVar36 * fVar35 * fVar52 * fStack00000000000000e8;
    *(float *)(lVar17 + 0x160) = fStack00000000000000e8;
    in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
    fVar35 = 1.0;
    unaff_s13 = 0.0;
    uVar8 = *unaff_x21;
    fVar52 = 0.0;
    if (uVar8 != 3 && uVar8 != 0xad) {
      fVar52 = fStack00000000000000e8;
    }
  }
  else {
    if (cVar2 == '\x02') {
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      plVar31 = *(long **)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
      if (plVar31 == (long *)0x0) goto LAB_07d72adc;
      bVar6 = *(byte *)(*(long *)
                         Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar31 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(*plVar31 + 200) + (ulong)bVar6 * 8 + -8) !=
          *(long *)Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar31);
      }
      plVar18 = (long *)FUN_07d8466c(plVar31,0);
      if (plVar18 == (long *)0x0) {
        plVar18 = (long *)0x0;
        *in_stack_000000e0 = 0;
      }
      else {
        lVar27 = *(long *)Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
        bVar6 = *(byte *)(lVar27 + 0x130);
        if (*(byte *)(*plVar18 + 0x130) < bVar6) {
          plVar30 = (long *)0x0;
        }
        else {
          plVar30 = plVar18;
          if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar6 * 8 + -8) != lVar27) {
            plVar30 = (long *)0x0;
          }
        }
        *in_stack_000000e0 = (long)plVar30;
        if (*(byte *)(*plVar18 + 0x130) < bVar6) {
          plVar18 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar6 * 8 + -8) != lVar27) {
          plVar18 = (long *)0x0;
        }
      }
      thunk_FUN_03afed3c(in_stack_000000e0,plVar18);
      iVar9 = FUN_07d85970(plVar31,0);
      *(int *)(unaff_x22 + 0x158c) = iVar9;
      if (*unaff_x21 == 0x3c) {
        *unaff_x21 = iVar9 + 0xe000;
      }
      else {
        uVar10 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
        *(undefined4 *)(unaff_x22 + 0x1590) = uVar10;
      }
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar52 = *(float *)(unaff_x22 + 0xf8);
      FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
      memcpy(&stack0x00001130,&stack0x000011a0,0x60);
      fVar35 = (float)FUN_07d5328c(&stack0x00001130,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
      memcpy(&stack0x00001130,&stack0x00000170,0x60);
      fVar36 = (float)FUN_07d53294(&stack0x00001130,0);
      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
      fVar36 = (fVar52 / fVar35) * fVar36;
      fVar35 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
      fVar52 = *(float *)(unaff_x22 + 0xf8);
      if (fVar35 <= 0.0) {
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar35 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar37 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
        if (plVar31[4] == 0) goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,plVar31[4],0);
        fVar38 = (float)FUN_07d53580(&stack0x000010e0,0);
        if (plVar31[4] == 0) goto LAB_07d72adc;
        fVar50 = *(float *)((long)plVar31 + 0x2c);
        fVar39 = (float)FUN_07d5378c(plVar31[4],0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar55 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar51 = *(float *)(unaff_x22 + 0xf0);
        fVar40 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fStack00000000000000f4 = (fVar52 / fVar35) * fStack00000000000000f4;
        fStack00000000000000e8 = fStack00000000000000f4 * (fVar37 / fVar38) * fVar50 * fVar39;
        fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
        fVar40 = fVar36 * fVar55 * fVar51 * fVar40;
        fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
        fVar35 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        fStack00000000000000f4 = fStack00000000000000f4 * fVar35;
      }
      else {
        if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
        fVar35 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
        if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
        fVar37 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
        if (plVar31[4] == 0) goto LAB_07d72adc;
        fVar50 = *(float *)((long)plVar31 + 0x2c);
        fVar38 = (float)FUN_07d5378c(plVar31[4],0);
        if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
        fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
        if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
        fVar39 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
        if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
        fVar55 = *(float *)(unaff_x22 + 0xf0);
        fVar40 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
        if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
        fVar40 = fVar36 * fVar39 * fVar55 * fVar40;
        fStack00000000000000e8 = (fVar52 / fVar35) * fVar37 * fVar50 * fVar38;
        fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0);
      }
      *(long **)(unaff_x22 + 0x1598) = plVar31;
      thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar31);
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar27 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(long *)(lVar27 + 0x48) = *in_stack_000000e0;
      *(undefined1 *)(lVar27 + 0x28) = 2;
      *(float *)(lVar27 + 0x160) = fStack00000000000000e8;
      thunk_FUN_03afed3c();
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(long *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) = *in_stack_00000148;
      thunk_FUN_03afed3c();
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
           *(undefined4 *)(unaff_x22 + 0x78);
      in_stack_00000138._4_4_ = 0.0;
      *(undefined4 *)(unaff_x22 + 0x78) = uVar41;
      unaff_s15 = in_stack_000000c0._4_4_;
      goto LAB_07d6fa0c;
    }
    uVar8 = *unaff_x21;
    fVar52 = 0.0;
    if (uVar8 != 3 && uVar8 != 0xad) {
      fVar52 = unaff_s14;
    }
    fVar40 = 0.0;
    fStack00000000000000f4 = 0.0;
    fStack00000000000000f8 = 0.0;
    fStack00000000000000e8 = unaff_s14;
    if (lVar27 == 0) goto LAB_07d72adc;
  }
  unaff_s14 = fVar52;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(uint *)(lVar27 + 0x20) = uVar8;
  *(undefined4 *)(lVar27 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
  *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
       *(undefined4 *)(unaff_x22 + 0x1b8);
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
       *(undefined4 *)(unaff_x22 + 0x1bc);
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  auVar44 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
  *(undefined4 *)(lVar27 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
  *(long *)(lVar27 + 0x184) = auVar44._8_8_;
  *(long *)(lVar27 + 0x17c) = auVar44._0_8_;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar8 = *(uint *)(unaff_x22 + 0x334);
  uVar11 = *(uint *)(lVar27 + 0x18);
  if (uVar11 <= uVar8) goto LAB_07d72b20;
  lVar17 = lVar27 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27;
  uVar58 = *(uint *)(unaff_x22 + 300);
  *(uint *)(lVar17 + 0x170) = uVar58;
  if (*(int *)(unaff_x22 + 0x13c) == 700) {
    *(uint *)(lVar17 + 0x170) = uVar58 | 1;
    uVar8 = *unaff_x25;
  }
  if (uVar11 <= uVar8) goto LAB_07d72b20;
  lVar27 = *(long *)(lVar27 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x18);
  if (lVar27 == 0) {
    if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
       (lVar27 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar27 == 0)) goto LAB_07d72adc;
    FUN_07d53750(&stack0x000011a0,lVar27,0);
  }
  else {
    FUN_07d53750(&stack0x00000510,lVar27,0);
  }
  uVar8 = *unaff_x21;
  if (uVar8 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    bVar6 = FUN_066b9610(uVar8,0);
  }
  else {
    bVar6 = 0;
  }
  fVar52 = *(float *)(in_stack_00000140 + 0x8c);
  if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*in_stack_00000168 == '\x01')) {
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
    uVar8 = *unaff_x25;
    uVar11 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
    if ((int)uVar8 < (int)uStack000000000000004c) {
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      uVar8 = uVar8 + 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
      if (*(char *)(lVar27 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 8) == '\x01') {
        lVar27 = *(long *)(lVar27 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x10);
        if ((((lVar27 == 0) || (*in_stack_00000148 == 0)) ||
            (lVar17 = *(long *)(*in_stack_00000148 + 0x170), lVar17 == 0)) ||
           (lVar17 = *(long *)(lVar17 + 0x40), lVar17 == 0)) goto LAB_07d72adc;
        uVar16 = FUN_05ffa6e0(lVar17,uVar11 | *(int *)(lVar27 + 0x28) << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar16 & 1) != 0) {
          FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          uVar16 = FUN_07d57e7c(&stack0x000010b0,0);
          if ((uVar16 & 0x100) != 0) {
            fVar52 = unaff_s13;
          }
        }
      }
      uVar8 = *unaff_x25;
    }
    uVar58 = uVar8 - 1;
    if (0 < (int)uVar8) {
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= uVar58) goto LAB_07d72b20;
      lVar17 = *(long *)(lVar27 + 0x20 + (ulong)uVar58 * (ulong)unaff_w27 + 0x10);
      if (lVar17 == 0) goto LAB_07d72adc;
      if (*(char *)(lVar27 + 0x20 + (ulong)uVar58 * (ulong)unaff_w27 + 8) == '\x01') {
        if (((*in_stack_00000148 == 0) ||
            (lVar27 = *(long *)(*in_stack_00000148 + 0x170), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_07d72adc;
        uVar16 = FUN_05ffa6e0(lVar27,*(uint *)(lVar17 + 0x28) | uVar11 << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar16 & 1) != 0) {
          FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          FUN_07d57af4(0);
          uVar16 = FUN_07d57e7c(&stack0x000010b0,0);
          unaff_s15 = in_stack_000000c0._4_4_;
          if ((uVar16 & 0x100) != 0) {
            fVar52 = unaff_s13;
          }
        }
      }
    }
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar8 = *unaff_x25;
    uVar41 = FUN_07d57ad0(&stack0x00001100,0);
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
    *(undefined4 *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x154) = uVar41;
  }
  uVar8 = *unaff_x21;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar7 = FUN_07d8fcc4(uVar8,0);
  uVar8 = *unaff_x25;
  uVar16 = (ulong)uVar8;
  if ((bVar7 & 1) == 0) {
    if (0 < (int)uVar8) {
      if ((((in_stack_00000060 & 1) == 0) ||
          (uVar11 = *(uint *)(unaff_x22 + 0x19cc), uVar11 == 0x80000000)) || (uVar11 != uVar8 - 1))
      {
        if ((_iStack0000000000000028 & 0x100000000) == 0) {
          bVar4 = false;
        }
        else {
          lVar27 = uVar16 * unaff_w27 + 0x144;
          uVar33 = uVar16;
          do {
            uVar33 = uVar33 - 1;
            iVar9 = (int)uVar16;
            uVar8 = iVar9 - 1;
            uVar16 = (ulong)uVar8;
            if ((iVar9 < 1) || (uVar33 == *(uint *)(unaff_x22 + 0x19cc))) {
              bVar4 = false;
              goto LAB_07d71064;
            }
            lVar17 = *(long *)(unaff_x19 + 0x30);
            if (lVar17 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar17 + 0x18) <= uVar33) goto LAB_07d72b20;
            lVar17 = *(long *)(lVar17 + lVar27 + -0x28c);
            if ((lVar17 == 0) || (lVar17 = FUN_07d88988(lVar17,0), lVar17 == 0)) goto LAB_07d72adc;
            uVar11 = FUN_07d53740(lVar17,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar9 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar17 = FUN_07d61740(*in_stack_00000148,0), lVar17 == 0)) ||
               (*(long *)(lVar17 + 0x50) == 0)) goto LAB_07d72adc;
            uVar19 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                               (*(long *)(lVar17 + 0x50),uVar11 | iVar9 << 0x10,&stack0x00001050,
                                *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
            lVar27 = lVar27 + -0x178;
          } while ((uVar19 & 1) == 0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar8) goto LAB_07d72b20;
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
          fVar52 = 0.0;
          bVar4 = true;
        }
LAB_07d71064:
        if ((in_stack_00000060 & 1) != 0) {
          uVar8 = *(uint *)(unaff_x22 + 0x19cc);
          if (uVar8 == 0x80000000) {
            bVar4 = true;
          }
          if (!bVar4) {
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
            lVar27 = *(long *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x30);
            if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
            uVar8 = FUN_07d53740(lVar27,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar9 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar27 = FUN_07d61740(*in_stack_00000148,0), lVar27 == 0)) ||
               (*(long *)(lVar27 + 0x48) == 0)) goto LAB_07d72adc;
            uVar16 = FUN_06008730(*(long *)(lVar27 + 0x48),uVar8 | iVar9 << 0x10,&stack0x00001038,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            if ((uVar16 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
              if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= *(uint *)(unaff_x22 + 0x19cc))
              goto LAB_07d72b20;
              FUN_07d58088(&stack0x00001038,0);
              UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths(&stack0x00001070,0);
              FUN_07d580a8(&stack0x00001038,0);
              FUN_07d58058(&stack0x00001068,0);
              FUN_07d57ab8(&stack0x00001100,0);
              FUN_07d58088(&stack0x00001038,0);
              FUN_07d58048(&stack0x00001070,0);
              puVar20 = &stack0x00001038;
              goto LAB_07d711ec;
            }
          }
        }
      }
      else {
        lVar27 = *(long *)(unaff_x19 + 0x30);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= uVar11) goto LAB_07d72b20;
        lVar27 = *(long *)(lVar27 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x30);
        if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
        uVar8 = FUN_07d53740(lVar27,0);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        iVar9 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
        if (((*in_stack_00000148 == 0) || (lVar27 = FUN_07d61740(*in_stack_00000148,0), lVar27 == 0)
            ) || (*(long *)(lVar27 + 0x48) == 0)) goto LAB_07d72adc;
        uVar16 = FUN_06008730(*(long *)(lVar27 + 0x48),uVar8 | iVar9 << 0x10,&stack0x00001078,
                              *(undefined8 *)
                               UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
        if ((uVar16 & 1) != 0) {
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
          puVar20 = &stack0x00001078;
LAB_07d711ec:
          FUN_07d580a8(puVar20,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fVar52 = 0.0;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x22 + 0x19cc) = uVar8;
  }
  fVar36 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar37 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
    fVar38 = *(float *)(unaff_x22 + 0x300);
    fVar50 = (float)FUN_07d53598(&stack0x00001110,0);
    fVar38 = fVar38 - unaff_s14 * fVar50 * (fVar35 - *(float *)(unaff_x22 + 0x15a4));
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar38 = (float)(int)(fVar38 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar38;
    if (((bVar6 & 1) != 0) || (*unaff_x21 == 0x200b)) {
      fVar38 = fVar38 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar38 = (float)(int)(fVar38 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar38;
    }
  }
  fVar38 = *(float *)(unaff_x22 + 0x2f8);
  fVar50 = 0.0;
  if (fVar38 != 0.0) {
    uVar8 = *unaff_x21;
    if (uVar8 != 0x200b) {
      if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar8)) ||
         (fVar50 = 0.25, (1L << ((ulong)uVar8 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar50 = 0.5;
      }
      fVar39 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar55 = (float)FUN_07d53588(&stack0x00001110,0);
      fVar50 = (fVar35 - *(float *)(unaff_x22 + 0x15a4)) *
               (fVar38 * fVar50 - unaff_s14 * (fVar39 * 0.5 + fVar55));
      fVar38 = fVar50 + *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar38 = (float)(int)(fVar38 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar38;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar9 = FUN_07d616d4(*in_stack_00000148,0);
  if (iVar9 == 0x1015) {
    bVar4 = false;
  }
  else {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar9 = FUN_07d616d4(*in_stack_00000148,0);
    bVar4 = iVar9 != 0x11014;
  }
  if ((cVar21 == '\0') && (*in_stack_00000168 == '\x01')) {
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    if ((*(byte *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
    goto LAB_07d701e4;
    if (bVar4) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar9 = FUN_07d616c4(*in_stack_00000148,0);
        fVar39 = (float)(iVar9 + 1);
      }
      else {
        lVar27 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar27 == 0) goto LAB_07d72adc;
        uVar16 = thunk_FUN_07c662cc(lVar27,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        if ((uVar16 & 1) == 0) goto LAB_07d70594;
        lVar27 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar27 == 0) goto LAB_07d72adc;
        fVar39 = (float)thunk_FUN_07c69050(lVar27,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar38 = (float)FUN_07d617a8(*in_stack_00000148,0);
      fVar38 = fVar39 * fVar38 * 0.25;
      if (fVar39 < in_stack_00000138._4_4_ + fVar38) {
        in_stack_00000138._4_4_ = fVar39 - fVar38;
      }
    }
    else {
      fVar38 = 0.0;
    }
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fStack00000000000000d0 = (float)FUN_07d617b8(*in_stack_00000148,0);
  }
  else {
LAB_07d701e4:
    fStack00000000000000d0 = 0.0;
    if (bVar4) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar9 = FUN_07d616c4(*in_stack_00000148,0);
        fVar39 = (float)(iVar9 + 1);
      }
      else {
        lVar27 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar27 == 0) goto LAB_07d72adc;
        uVar16 = thunk_FUN_07c662cc(lVar27,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        if ((uVar16 & 1) == 0) goto LAB_07d70290;
        lVar27 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar27 == 0) goto LAB_07d72adc;
        fVar39 = (float)thunk_FUN_07c69050(lVar27,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar38 = fVar39 * *(float *)(*in_stack_00000148 + 400) * 0.25;
      if (fVar39 < in_stack_00000138._4_4_ + fVar38) {
        in_stack_00000138._4_4_ = fVar39 - fVar38;
      }
    }
    else {
      fVar38 = 0.0;
    }
  }
  fVar51 = *(float *)(unaff_x22 + 0x300);
  fVar39 = (float)FUN_07d53588(&stack0x00001110,0);
  fVar53 = *(float *)(unaff_x22 + 0x19b0);
  fVar55 = (float)FUN_07d57ab0(&stack0x00001100,0);
  fVar51 = fVar51 + (fVar35 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 * (fVar55 + ((fVar39 * fVar53 - in_stack_00000138._4_4_) - fVar38));
  fVar39 = (float)FUN_07d53590(&stack0x00001110,0);
  fVar55 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar39 = unaff_s14 * (in_stack_00000138._4_4_ + fVar39 + fVar55);
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar39 = (float)(int)(fVar39 + unaff_s15);
  }
  fStack0000000000000150 =
       *(float *)(unaff_x22 + 0x188) + ((fVar40 + fVar39) - *(float *)(unaff_x22 + 0x2e8));
  fVar39 = (float)FUN_07d53580(&stack0x00001110,0);
  fVar55 = fStack0000000000000150 -
           unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar39);
  fVar39 = (float)FUN_07d53578(&stack0x00001110,0);
  fVar35 = fVar51 + (fVar35 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 *
                    (fVar38 + fVar38 +
                    in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                    fVar39 * *(float *)(unaff_x22 + 0x19b0));
  fVar53 = fVar35;
  fVar39 = fVar51;
  if (((cVar21 == '\0') && (*in_stack_00000168 == '\x01')) &&
     ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    iVar9 = *(int *)(unaff_x22 + 0x19ac);
    fVar39 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar42 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar54 = *(float *)(unaff_x22 + 0xf0);
    fVar56 = *(float *)(unaff_x22 + 0x188);
    fVar53 = (float)iVar9 * fStack0000000000000054;
    fVar49 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar49 = fVar49 * fVar54 * (fVar39 - (fVar42 + fVar56)) * 0.5;
    fVar39 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar56 = fVar53 * unaff_s14 * ((fVar38 + in_stack_00000138._4_4_ + fVar39) - fVar49);
    fVar42 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar54 = (float)FUN_07d53580(&stack0x00001110,0);
    fStack0000000000000150 = fStack0000000000000150 + 0.0;
    fVar39 = fVar51 + fVar56;
    fVar55 = fVar55 + 0.0;
    fVar53 = fVar53 * unaff_s14 *
                      ((((fVar42 - fVar54) - in_stack_00000138._4_4_) - fVar38) - fVar49);
    fVar51 = fVar51 + fVar53;
    fVar53 = fVar35 + fVar53;
    unaff_s15 = in_stack_000000c0._4_4_;
    fVar35 = fVar35 + fVar56;
  }
  uVar15 = *in_stack_000000c8;
  uVar14 = in_stack_000000c8[1];
  if (DAT_08974d8a == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  uVar43 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  uVar45 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  if (DAT_015c5bb4 <
      (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar45 >> 0x20) +
      (float)uVar14 * (float)uVar45 +
      (float)uVar15 * (float)uVar43 +
      (float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar43 >> 0x20)) {
    fVar38 = 0.0;
    auVar44._4_12_ = SUB1612(ZEXT816(0),4);
    auVar44._0_4_ = fVar55;
    uVar15 = auVar44._0_8_;
    uVar16 = (ulong)(uint)fStack0000000000000150;
    uVar14 = uVar15;
  }
  else {
    FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                 *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                 *(undefined4 *)(unaff_x22 + 0x19c8),0);
    fVar53 = (fVar35 + fVar51) * 0.5;
    fVar49 = (fVar55 + fStack0000000000000150) * 0.5;
    fVar35 = 0.0;
    auVar44 = ZEXT416((uint)(fStack0000000000000150 - fVar49));
    fVar39 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar39 = fVar53 + fVar39;
    fVar42 = 0.0;
    uVar16 = CONCAT44(fVar35 + 0.0,fVar49 + auVar44._0_4_);
    auVar44 = ZEXT416((uint)(fVar55 - fVar49));
    fVar51 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar51 = fVar53 + fVar51;
    fVar38 = 0.0;
    uVar15 = CONCAT44(fVar42 + 0.0,fVar49 + auVar44._0_4_);
    auVar44 = ZEXT416((uint)(fStack0000000000000150 - fVar49));
    fVar35 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar35 = fVar53 + fVar35;
    fVar42 = 0.0;
    fStack0000000000000150 = fVar49 + auVar44._0_4_;
    fVar38 = fVar38 + 0.0;
    auVar44 = ZEXT416((uint)(fVar55 - fVar49));
    fVar55 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar53 = fVar53 + fVar55;
    unaff_s15 = in_stack_000000c0._4_4_;
    uVar14 = CONCAT44(fVar42 + 0.0,fVar49 + auVar44._0_4_);
  }
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar27 + 0x118) = fVar51;
  *(undefined8 *)(lVar27 + 0x11c) = uVar15;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar27 + 0x10c) = fVar39;
  *(ulong *)(lVar27 + 0x110) = uVar16;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar27 + 0x124) = fVar35;
  *(ulong *)(lVar27 + 0x128) = CONCAT44(fVar38,fStack0000000000000150);
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar27 + 0x130) = fVar53;
  *(undefined8 *)(lVar27 + 0x134) = uVar14;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar8 = *(uint *)(unaff_x22 + 0x334);
  fVar38 = *(float *)(unaff_x22 + 0x300);
  fVar39 = (float)FUN_07d57ab0(&stack0x00001100,0);
  if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
  fVar38 = fVar38 + unaff_s14 * fVar39;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar38 = (float)(int)(fVar38 + unaff_s15);
  }
  *(float *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x13c) = fVar38;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar8 = *(uint *)(unaff_x22 + 0x334);
  fVar39 = *(float *)(unaff_x22 + 0x2e8);
  fVar55 = *(float *)(unaff_x22 + 0x188);
  fVar38 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
  fVar40 = (fVar40 - fVar39) + fVar55 + unaff_s14 * fVar38;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar40 = (float)(int)(fVar40 + unaff_s15);
  }
  *(float *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x144) = fVar40;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar8 = *(uint *)(unaff_x22 + 0x334);
  if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
  lVar27 = lVar27 + 0x20;
  *(float *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x13c) =
       (fVar35 - fVar51) / ((float)uVar16 - (float)uVar15);
  fVar36 = unaff_s14 * (fStack00000000000000f8 + fVar36);
  if (*in_stack_00000168 == '\x01') {
    fVar36 = fVar36 / fVar48;
    fVar37 = (unaff_s14 * (fStack00000000000000f4 + fVar37)) / fVar48;
  }
  else {
    fVar37 = unaff_s14 * (fStack00000000000000f4 + fVar37);
  }
  uVar11 = *(uint *)(unaff_x22 + 0x338);
  unaff_s13 = 0.0;
  unaff_s12 = 1.0;
  fVar35 = 1.0;
  if ((uVar8 != uVar11 & bVar6) == 0) {
    fVar39 = *(float *)(unaff_x22 + 0x188);
    fVar36 = fVar36 + fVar39;
    fVar37 = fVar37 + fVar39;
    fVar40 = fVar36;
    fVar38 = fVar37;
    if (fVar39 != 0.0) {
      fVar40 = (fVar36 - fVar39) / *(float *)(unaff_x22 + 0xf0);
      fVar38 = (fVar37 - fVar39) / *(float *)(unaff_x22 + 0xf0);
      if (fVar40 <= fVar36) {
        fVar40 = fVar36;
      }
      if (fVar37 <= fVar38) {
        fVar38 = fVar37;
      }
    }
    lVar27 = lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27;
    fVar39 = fVar40;
    if (fVar40 <= *(float *)(unaff_x22 + 0x348)) {
      fVar39 = *(float *)(unaff_x22 + 0x348);
    }
    fVar55 = fVar38;
    if (*(float *)(unaff_x22 + 0x34c) <= fVar38) {
      fVar55 = *(float *)(unaff_x22 + 0x34c);
    }
    *(float *)(unaff_x22 + 0x348) = fVar39;
    *(float *)(unaff_x22 + 0x34c) = fVar55;
    *(float *)(lVar27 + 300) = fVar40;
    *(float *)(lVar27 + 0x130) = fVar38;
    fVar40 = *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar27 + 0x120) = fVar36 - fVar40;
    *(float *)(lVar27 + 0x128) = fVar37 - fVar40;
    *(float *)(unaff_x22 + 900) = fVar37 - fVar40;
    if (*(int *)(unaff_x22 + 0x350) == 0) {
      *(float *)(unaff_x22 + 0x380) = fVar39;
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar37 = *(float *)(unaff_x22 + 0x37c);
      fVar40 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      fVar48 = (unaff_s14 * fVar40) / fVar48;
      if (fVar37 <= fVar48) {
        fVar37 = fVar48;
      }
      fVar40 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 0x37c) = fVar37;
    }
    if (fVar40 == 0.0) {
      fVar48 = *(float *)(unaff_x22 + 0x19d0);
      if (*(float *)(unaff_x22 + 0x19d0) <= fVar36) {
        fVar48 = fVar36;
      }
      *(float *)(unaff_x22 + 0x19d0) = fVar48;
    }
  }
  else {
    lVar27 = lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x348);
    *(undefined8 *)(lVar27 + 300) = uVar14;
    fVar40 = *(float *)(unaff_x22 + 0x2e8);
    fVar48 = (float)((ulong)uVar14 >> 0x20) - fVar40;
    *(float *)(lVar27 + 0x120) = (float)uVar14 - fVar40;
    *(float *)(lVar27 + 0x128) = fVar48;
    *(float *)(unaff_x22 + 900) = fVar48;
  }
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar58 = *unaff_x25;
  if (*(uint *)(lVar27 + 0x18) <= uVar58) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)uVar58 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar27 + 0x194) = 0;
  uVar23 = *unaff_x21;
  if (uVar23 == 9) {
LAB_07d70d34:
    *(undefined1 *)(lVar27 + 0x194) = 1;
    pfVar25 = in_stack_000000a0;
    pfVar28 = in_stack_000000b8;
    if (uVar57 == uVar13) {
      lVar27 = *(long *)(unaff_x19 + 0x48);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      pfVar28 = (float *)(lVar27 + 100);
      pfVar25 = (float *)(lVar27 + 0x68);
    }
    fVar36 = *pfVar28;
    fVar37 = *pfVar25;
    fVar48 = *(float *)(unaff_x22 + 0x368);
    fVar38 = 0.0;
    fVar40 = *(float *)(unaff_x22 + 0x300);
    in_stack_00000100 = (fStack00000000000000b4 - fVar36) - fVar37;
    bVar4 = true;
    if ((fVar48 <= in_stack_00000100) && (bVar4 = false, !NAN(fVar48))) {
      bVar4 = fVar48 == -1.0;
    }
    if (!bVar4) {
      in_stack_00000100 = fVar48;
    }
    fVar48 = 0.0;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      fVar48 = (float)FUN_07d53598(&stack0x00001110,0);
      uVar23 = *unaff_x21;
    }
    if (uVar23 != 0xad) {
      fStack00000000000000e8 = unaff_s14;
    }
    if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar38 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    uVar58 = *unaff_x25;
    if (fStack00000000000000a8 <
        (*(float *)(unaff_x22 + 0x380) -
        (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar38) {
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar58;
      }
      iVar9 = *(int *)(in_stack_00000140 + 100);
      if (iVar9 != 1) {
        if ((iVar9 != 6) && (iVar9 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
        in_stack_0000112c = FUN_07d79b5c();
        goto LAB_07d71040;
      }
      if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
      iVar9 = FUN_059137dc(unaff_x22 + 0x15f0,
                           *(undefined8 *)
                            Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
      if (iVar9 == 0) {
        unaff_x25[0] = 0;
        unaff_x25[1] = 0;
        in_stack_0000112c = 0xffffffff;
        in_stack_00001190 = DAT_015c3d00;
      }
      else {
        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                  (&stack0x000011a0,unaff_x22 + 0x15f0,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                  );
        memcpy(&stack0x00000c58,&stack0x000011a0,0x398);
        iVar12 = FUN_07d79b5c();
        iVar9 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
        in_stack_00000108 = in_stack_00000108 + 1;
        *(int *)(unaff_x22 + 0x334) = iVar9 + -1;
        fVar35 = unaff_s12;
        in_stack_0000112c = iVar12 - 1;
        in_stack_00001190 = CONCAT44(0x2026,iVar9 + -1);
      }
      goto LAB_07d72ac8;
    }
LAB_07d70fbc:
    uVar23 = uVar58;
    if ((bVar7 & in_stack_00000100 <
                 ABS(fVar40) +
                 fVar48 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) == 1) {
      if (((iStack00000000000000b0 != 0) && (iStack00000000000000b0 != 3)) &&
         (uVar58 != *(uint *)(unaff_x22 + 0x338))) {
        in_stack_0000112c = FUN_07d79b5c();
        fVar48 = *(float *)(unaff_x22 + 0x2ec);
        if (fVar48 == DAT_015c55ac) {
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          uVar23 = *unaff_x25;
          if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_07d72b20;
          fVar40 = *(float *)(unaff_x22 + 0x2e8);
          fVar48 = 0.0;
          if ((0.0 < fVar40) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar48 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          fVar48 = *(float *)(lVar27 + (long)(int)uVar23 * (long)(int)unaff_w27 + 0x14c) +
                   (fVar48 - *(float *)(unaff_x22 + 0x34c)) +
                   in_stack_00000020._4_4_ *
                   (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
        }
        else {
          *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          fVar40 = *(float *)(unaff_x22 + 0x2e8);
          uVar23 = *(uint *)(unaff_x22 + 0x334);
        }
        if ((*(uint *)(lVar27 + 0x18) <= uVar23) ||
           (uVar34 = uVar23 - 1, *(uint *)(lVar27 + 0x18) <= uVar34)) goto LAB_07d72b20;
        piVar29 = (int *)(lVar27 + 0x20 + (long)(int)uVar23 * (long)(int)unaff_w27);
        fVar48 = (fStack0000000000000014 + fVar48 + *(float *)(unaff_x22 + 0x380) + fVar40) -
                 (float)piVar29[0x4c];
        if ((*(int *)(lVar27 + 0x20 + (long)(int)uVar34 * (long)(int)unaff_w27) == 0xad && !bVar3)
           && ((*(int *)(in_stack_00000140 + 100) == 0 || (fVar48 < fStack00000000000000a8)))) {
          bVar3 = false;
          *unaff_x25 = uVar34;
          in_stack_0000112c = in_stack_0000112c - 1;
          in_stack_00001190 = CONCAT44(0x2d,uVar34);
          goto LAB_07d72ac8;
        }
        if (*piVar29 == 0xad) {
          bVar3 = true;
          goto LAB_07d72ac8;
        }
        if (((bVar1 != 0) && (iVar9 = *(int *)(unaff_x22 + 0x11f0), iVar9 != -1)) &&
           (iVar9 != in_stack_00000008._4_4_)) {
          in_stack_0000112c = FUN_07d79b5c();
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          uVar23 = *unaff_x25;
          uVar34 = uVar23 - 1;
          if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_07d72b20;
          in_stack_00000008._4_4_ = iVar9;
          if (*(int *)(lVar27 + (long)(int)uVar34 * (long)(int)unaff_w27 + 0x20) == 0xad) {
            bVar3 = false;
            *unaff_x25 = uVar34;
            in_stack_0000112c = in_stack_0000112c - 1;
            in_stack_00001190 = CONCAT44(0x2d,uVar34);
            goto LAB_07d72ac8;
          }
        }
        unaff_x23 = in_stack_00000140;
        if (fStack00000000000000a8 < fVar48) {
          if (*(int *)(unaff_x22 + 0x35c) == -1) {
            *(uint *)(unaff_x22 + 0x35c) = uVar23;
          }
          iVar9 = *(int *)(in_stack_00000140 + 100);
          bVar3 = false;
          if (iVar9 < 3) {
            if (iVar9 != 0) {
              if (iVar9 == 1) {
                iVar9 = FUN_059137dc(unaff_x22 + 0x15f0,
                                     *(undefined8 *)
                                      Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                    );
                if (iVar9 != 0) {
                  Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                            (&stack0x000011a0,unaff_x22 + 0x15f0,
                             *(undefined8 *)
                              Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                            );
                  memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                  iVar12 = FUN_07d79b5c();
                  bVar3 = false;
                  goto LAB_07d712c4;
                }
                bVar3 = false;
                goto LAB_07d72aac;
              }
              if (iVar9 != 2) goto LAB_07d7166c;
            }
LAB_07d729d0:
            FUN_07d7bce4();
            bVar3 = false;
            bVar1 = 1;
            bVar5 = true;
          }
          else {
            if (iVar9 == 3) {
              in_stack_0000112c = FUN_07d79b5c();
              bVar3 = false;
            }
            else {
              if (iVar9 != 6) {
                if (iVar9 != 4) goto LAB_07d7166c;
                goto LAB_07d729d0;
              }
              bVar3 = false;
              uVar58 = uVar23;
            }
LAB_07d71040:
            fVar35 = unaff_s12;
            in_stack_00001190 = CONCAT44(3,uVar58);
          }
          goto LAB_07d72ac8;
        }
        goto code_r0x07d7298c;
      }
      iVar9 = *(int *)(in_stack_00000140 + 100);
      if (iVar9 == 1) {
        iVar9 = FUN_059137dc(unaff_x22 + 0x15f0,
                             *(undefined8 *)
                              Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
        if (iVar9 != 0) {
          Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                    (&stack0x000011a0,unaff_x22 + 0x15f0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                    );
          memcpy(&stack0x00000528,&stack0x000011a0,0x398);
          iVar12 = FUN_07d79b5c();
LAB_07d712c4:
          iVar9 = *(int *)(unaff_x22 + 0x334);
          goto LAB_07d712d0;
        }
LAB_07d72aac:
        unaff_x25[0] = 0;
        unaff_x25[1] = 0;
        in_stack_0000112c = 0xffffffff;
        fVar35 = unaff_s12;
        in_stack_00001190 = DAT_015c3d00;
        goto LAB_07d72ac8;
      }
      if (iVar9 == 6) {
        in_stack_0000112c = FUN_07d79b5c();
        uVar58 = *(uint *)(unaff_x22 + 0x334);
        goto LAB_07d71040;
      }
      if (iVar9 == 3) goto LAB_07d7102c;
    }
LAB_07d7166c:
    if ((bVar6 & 1) == 0) {
      if (*unaff_x21 == 0xad) {
        lVar27 = *(long *)(unaff_x19 + 0x30);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_07d72b20;
        *(undefined1 *)(lVar27 + (long)(int)uVar23 * (long)(int)unaff_w27 + 0x194) = 0;
      }
      else {
        if (*in_stack_00000168 == '\x02') {
          FUN_07d7a738();
        }
        else if (*in_stack_00000168 == '\x01') {
          FUN_07d79ee4();
        }
        uVar58 = *unaff_x25;
        if (bVar5) {
          *(uint *)(unaff_x22 + 0x340) = uVar58;
        }
        *(uint *)(unaff_x22 + 0x344) = uVar58;
        *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
        lVar27 = *(long *)(unaff_x19 + 0x48);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        bVar5 = false;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(float *)(lVar27 + 100) = fVar36;
        *(float *)(lVar27 + 0x68) = fVar37;
      }
    }
    else {
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_07d72b20;
      *(undefined1 *)(lVar27 + (long)(int)uVar23 * (long)(int)unaff_w27 + 0x194) = 0;
      lVar27 = *(long *)(unaff_x19 + 0x48);
      if (lVar27 == 0) goto LAB_07d72adc;
      uVar58 = *(uint *)(lVar27 + 0x18);
      if (uVar58 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar27 = lVar27 + 0x20;
      lVar17 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      iVar9 = *(int *)(lVar17 + 0x10) + 1;
      *(int *)(lVar17 + 0x10) = iVar9;
      uVar23 = *(uint *)(unaff_x22 + 0x350);
      *(int *)(unaff_x22 + 0x358) = iVar9;
      if (uVar58 <= uVar23) goto LAB_07d72b20;
      lVar17 = lVar27 + (long)(int)uVar23 * 0x60;
      *(float *)(lVar17 + 0x44) = fVar36;
      *(float *)(lVar17 + 0x48) = fVar37;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      if (*unaff_x21 == 0xa0) {
        *(int *)(lVar27 + (long)(int)uVar23 * 0x60) =
             *(int *)(lVar27 + (long)(int)uVar23 * 0x60) + 1;
      }
    }
  }
  else {
    if (in_stack_00000058._4_4_ == 2) {
      if ((bVar6 & 1) == 0 && uVar23 != 0x200b) goto LAB_07d70e7c;
      goto LAB_07d70d34;
    }
    if ((bVar6 & 1) == 0) {
LAB_07d70e7c:
      if ((uVar23 != 3) && (uVar23 != 0x200b)) {
        if (uVar23 != 0xad) goto LAB_07d70d34;
        goto LAB_07d70e98;
      }
    }
    else {
LAB_07d70e98:
      if (uVar23 == 0xad && !bVar3) goto LAB_07d70d34;
    }
    if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
    if (*(int *)(in_stack_00000140 + 100) == 6) {
      if ((uVar23 & 0xfffffffe) != 10) {
        if ((0x22 < uVar23 - 0x2007) ||
           ((1L << ((ulong)(uVar23 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
        goto LAB_07d71420;
      }
      fVar35 = 0.0;
      if ((0.0 < fVar40) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        fVar35 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
      }
      if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar40)) + fVar35 <=
          fStack00000000000000a8) goto LAB_07d71228;
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar58;
      }
      in_stack_0000112c = FUN_07d79b5c();
      goto LAB_07d71040;
    }
LAB_07d71228:
    if ((int)uVar23 < 0x2007) {
      if (uVar23 != 10) {
LAB_07d713e4:
        if ((uVar23 != 0xb) && (uVar23 != 0xa0)) goto LAB_07d713f4;
        goto LAB_07d71420;
      }
LAB_07d71440:
      lVar27 = *(long *)(unaff_x19 + 0x48);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      uVar23 = *unaff_x21;
LAB_07d7147c:
      if (uVar23 == 0xa0) {
        lVar27 = *(long *)(unaff_x19 + 0x48);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
      }
    }
    else {
      if ((0x22 < uVar23 - 0x2007) ||
         ((1L << ((ulong)(uVar23 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar16 = FUN_066bcb80(uVar23,0);
        uVar23 = *unaff_x21;
        if ((uVar16 & 1) != 0) goto LAB_07d71420;
        goto LAB_07d7147c;
      }
LAB_07d71420:
      if (((uVar23 != 0xad) && (uVar23 != 0x200b)) && (uVar23 != 0x2060)) goto LAB_07d71440;
    }
  }
  if ((uVar57 == uVar13) && (*(int *)(in_stack_00000140 + 100) == 1)) {
    if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar48 = *(float *)(unaff_x22 + 0xf8);
      fVar35 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar36 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      lVar27 = *(long *)(unaff_x22 + 0x19f8);
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_07d72adc;
      fVar40 = *(float *)(unaff_x22 + 0xf0);
      fVar38 = *(float *)(lVar27 + 0x2c);
      fVar37 = (float)FUN_07d5378c(*(long *)(lVar27 + 0x20),0);
      uVar14 = *(undefined8 *)in_stack_000000b8;
      fVar37 = (fVar48 / fVar35) * fVar36 * fVar40 * fVar38 * fVar37;
      if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
        lVar27 = *(long *)(unaff_x19 + 0x30);
        if (lVar27 == 0) goto LAB_07d72adc;
        uVar58 = *(int *)(unaff_x22 + 0x334) - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar58) goto LAB_07d72b20;
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar48 = *(float *)(lVar27 + (long)(int)uVar58 * (long)(int)unaff_w27 + 0x60);
        fVar35 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar36 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar27 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_07d72adc;
        fVar40 = *(float *)(unaff_x22 + 0xf0);
        fVar38 = *(float *)(lVar27 + 0x2c);
        fVar37 = (float)FUN_07d5378c(*(long *)(lVar27 + 0x20),0);
        lVar27 = *(long *)(unaff_x19 + 0x48);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uVar14 = *(undefined8 *)(lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
        fVar37 = (fVar48 / fVar35) * fVar36 * fVar40 * fVar38 * fVar37;
      }
      fVar35 = 0.0;
      fVar48 = *(float *)(unaff_x22 + 0x300);
      if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
        if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
           (lVar27 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar27 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar27,0);
        fVar35 = (float)FUN_07d53598(&stack0x000010e0,0);
      }
      fVar36 = (fStack00000000000000b4 - (float)uVar14) - (float)((ulong)uVar14 >> 0x20);
      fVar40 = *(float *)(unaff_x22 + 0x368);
      bVar4 = true;
      if ((fVar40 <= fVar36) && (bVar4 = false, !NAN(fVar40))) {
        bVar4 = fVar40 == -1.0;
      }
      if (!bVar4) {
        fVar36 = fVar40;
      }
      if (ABS(fVar48) + fVar37 * fVar35 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar36) {
        FUN_07d79804();
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  else if (*(int *)(in_stack_00000140 + 100) == 1) goto LAB_07d717ec;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
  uVar58 = *(uint *)(unaff_x22 + 0x350);
  *(uint *)(lVar27 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) = uVar58;
  if ((uVar57 == uVar13) ||
     ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar27 = *(long *)(unaff_x19 + 0x48);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar58) goto LAB_07d72b20;
    if (*(int *)(lVar27 + (long)(int)uVar58 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
  }
  else {
    lVar27 = *(long *)(unaff_x19 + 0x48);
    if (lVar27 == 0) goto LAB_07d72adc;
LAB_07d71a94:
    if (*(uint *)(lVar27 + 0x18) <= uVar58) goto LAB_07d72b20;
    *(undefined4 *)(lVar27 + (long)(int)uVar58 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160);
  }
  uVar58 = *unaff_x21;
  if (uVar58 != 0x200b) {
    if (uVar58 == 9) {
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar35 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      bVar7 = FUN_07d617d8(*in_stack_00000148,0);
      fVar36 = *(float *)(unaff_x22 + 0x300);
      cVar21 = *(char *)(unaff_x22 + 0xf4);
      fVar48 = unaff_s14 * fVar35 * (float)bVar7;
      fVar35 = fVar48 * (float)(int)(fVar36 / fVar48);
      if (fVar35 <= fVar36) {
        fVar35 = fVar36 + fVar48;
      }
    }
    else {
      fVar35 = *(float *)(unaff_x22 + 0x2f8);
      if (fVar35 == 0.0) {
        fVar48 = *(float *)(unaff_x22 + 0x300);
        if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
          fVar35 = (float)FUN_07d57ad0(&stack0x00001100,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar36 = (float)FUN_07d61798(*in_stack_00000148,0);
          cVar21 = *(char *)(unaff_x22 + 0xf4);
          fVar48 = fVar48 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                            (*(float *)(unaff_x22 + 0x2f4) +
                            unaff_s14 * fVar35 +
                            in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar52 + fVar36));
          if (cVar21 != '\0') {
            fVar48 = (float)(int)(fVar48 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar48;
          if (((bVar6 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
          fVar35 = fVar48 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
          goto FUN_07d71c94;
        }
        fVar35 = (float)FUN_07d53598(&stack0x00001110,0);
        fVar37 = *(float *)(unaff_x22 + 0x19b0);
        fVar36 = (float)FUN_07d57ad0(&stack0x00001100,0);
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar40 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
        fVar48 = fVar48 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          unaff_s14 * (fVar35 * fVar37 + fVar36) +
                          in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar52 + fVar40));
      }
      else {
        if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar58 < 0x3b)) &&
           ((1L << ((ulong)uVar58 & 0x3f) & 0x400500000000000U) != 0)) {
          fVar35 = fVar35 * 0.5;
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar48 = *(float *)(unaff_x22 + 0x300);
        fVar36 = (float)FUN_07d61798(*in_stack_00000148,0);
        fVar48 = fVar48 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          (fVar35 - fVar50) + in_stack_000000d8._4_4_ * (fVar52 + fVar36));
      }
      cVar21 = *(char *)(unaff_x22 + 0xf4);
      if (cVar21 != '\0') {
        fVar48 = (float)(int)(fVar48 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar48;
      if (((bVar6 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
      fVar35 = fVar48 + in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
    }
FUN_07d71c94:
    if (cVar21 != '\0') {
      fVar35 = (float)(int)(fVar35 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar35;
  }
LAB_07d71ca8:
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar58 = *unaff_x25;
  uVar23 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar23 <= uVar58) goto LAB_07d72b20;
  *(undefined4 *)(lVar27 + (long)(int)uVar58 * (long)(int)unaff_w27 + 0x158) =
       *(undefined4 *)(unaff_x22 + 0x300);
  uVar34 = *unaff_x21;
  fVar35 = 1.0;
  if ((int)uVar34 < 0xd) {
    if ((uVar34 - 10 < 2) || (uVar34 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
    if ((uVar34 == 0x2d && uVar57 == uVar13) || (uVar58 == uStack000000000000004c))
    goto LAB_07d71d54;
    goto LAB_07d72314;
  }
  if (uVar34 != 0x2028) {
    if (uVar34 != 0xd) goto LAB_07d71d38;
    fVar48 = *(float *)(unaff_x22 + 0x308) + 0.0;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar48 = (float)(int)(fVar48 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar48;
    if (uVar58 != uStack000000000000004c) {
      uVar34 = 0xd;
      goto LAB_07d72314;
    }
  }
LAB_07d71d54:
  if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
    fVar48 = *(float *)(unaff_x22 + 0x348);
    fVar36 = *(float *)(unaff_x22 + 0x15b8);
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar48 = fVar48 - fVar36;
    if ((fStack0000000000000054 < ABS(fVar48)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      uVar41 = *(undefined4 *)(unaff_x22 + 0x338);
      uVar10 = *(undefined4 *)(unaff_x22 + 0x334);
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      FUN_07d8f610(uVar41,uVar10);
      fVar36 = fVar48 + *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar48;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar36 = (float)(int)(fVar36 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x2e8) = fVar36;
      if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                  (&stack0x00000170,unaff_x22 + 0x15f0,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                  );
        memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
        thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
        *(float *)(unaff_x22 + 0xb00) = fVar48 + *(float *)(unaff_x22 + 0xb00);
        *(float *)(unaff_x22 + 0xb34) = fVar48 + *(float *)(unaff_x22 + 0xb34);
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  fVar36 = *(float *)(unaff_x22 + 0x2e8);
  fVar37 = *(float *)(unaff_x22 + 0x34c) - fVar36;
  fVar48 = *(float *)(unaff_x22 + 900);
  if (fVar37 <= *(float *)(unaff_x22 + 900)) {
    fVar48 = fVar37;
  }
  fVar40 = *(float *)(unaff_x22 + 0x348);
  *(float *)(unaff_x22 + 900) = fVar48;
  if (in_stack_0000119c == '\0') {
    *in_stack_00000040 = fVar48;
  }
  lVar27 = *(long *)(unaff_x19 + 0x48);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar13 = *(uint *)(unaff_x22 + 0x350);
  if (*(uint *)(lVar27 + 0x18) <= uVar13) goto LAB_07d72b20;
  lVar26 = lVar27 + 0x20 + (long)(int)uVar13 * 0x60;
  uVar57 = *(uint *)(unaff_x22 + 0x338);
  *(uint *)(lVar26 + 0x18) = uVar57;
  lVar17 = 0x338;
  if ((int)uVar57 <= *(int *)(unaff_x22 + 0x340)) {
    lVar17 = 0x340;
  }
  uVar34 = *(uint *)(unaff_x22 + lVar17);
  *(uint *)(unaff_x22 + 0x340) = uVar34;
  *(uint *)(lVar26 + 0x1c) = uVar34;
  uVar23 = *(uint *)(unaff_x22 + 0x334);
  *(uint *)(unaff_x22 + 0x33c) = uVar23;
  *(uint *)(lVar26 + 0x20) = uVar23;
  uVar58 = *(uint *)(unaff_x22 + 0x340);
  if ((int)uVar34 <= (int)*(uint *)(unaff_x22 + 0x344)) {
    uVar58 = *(uint *)(unaff_x22 + 0x344);
  }
  *(uint *)(unaff_x22 + 0x344) = uVar58;
  *(uint *)(lVar26 + 0x24) = uVar58;
  lVar17 = *(long *)(unaff_x19 + 0x30);
  uVar24 = uVar58;
  if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
    if (lVar17 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_07d72b20;
    if (*(float *)(lVar17 + (long)(int)uVar23 * (long)(int)unaff_w27 + 0x158) != 0.0) {
      uVar34 = uVar57;
      uVar24 = uVar23;
    }
  }
  lVar27 = lVar27 + 0x20 + (long)(int)uVar13 * 0x60;
  *(uint *)(lVar27 + 4) = (uVar23 - uVar57) + 1;
  iVar9 = *(int *)(in_stack_00000068 + 0x60);
  *(int *)(lVar27 + 8) = iVar9;
  *(uint *)(lVar27 + 0xc) = (uVar58 - (uVar57 + iVar9)) + 1;
  if (lVar17 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_07d72b20;
  *(undefined4 *)(lVar27 + 0x50) =
       *(undefined4 *)(lVar17 + (long)(int)uVar34 * (long)(int)unaff_w27 + 0x118);
  *(float *)(lVar27 + 0x54) = fVar37;
  lVar27 = *(long *)(unaff_x19 + 0x48);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
  lVar17 = *(long *)(unaff_x19 + 0x30);
  if (lVar17 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_07d72b20;
  fVar40 = fVar40 - fVar36;
  lVar27 = lVar27 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
  uVar41 = *(undefined4 *)(lVar17 + (long)(int)uVar24 * (long)(int)unaff_w27 + 0x124);
  *(float *)(lVar27 + 0x5c) = fVar40;
  *(undefined4 *)(lVar27 + 0x58) = uVar41;
  lVar27 = *(long *)(unaff_x19 + 0x48);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar57 = *(uint *)(unaff_x22 + 0x350);
  uVar13 = *(uint *)(lVar27 + 0x18);
  if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
    if (uVar13 <= uVar57) goto LAB_07d72b20;
    lVar17 = lVar27 + (long)(int)uVar57 * 0x60;
    fVar48 = *(float *)(lVar17 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
  }
  else {
    if (uVar13 <= uVar57) goto LAB_07d72b20;
    lVar26 = *(long *)(unaff_x19 + 0x30);
    if (lVar26 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar26 + 0x18) <= uVar24) goto LAB_07d72b20;
    lVar17 = lVar27 + (long)(int)uVar57 * 0x60;
    fVar48 = *(float *)(lVar26 + (long)(int)uVar24 * (long)(int)unaff_w27 + 0x158);
  }
  *(float *)(lVar17 + 0x48) = fVar48;
  if (uVar13 <= uVar57) goto LAB_07d72b20;
  lVar17 = lVar27 + 0x20 + (long)(int)uVar57 * 0x60;
  *(float *)(lVar17 + 0x40) = in_stack_00000100;
  if (*(int *)(lVar17 + 4) == 1) {
    *(undefined4 *)(lVar27 + 0x20 + (long)(int)uVar57 * 0x60 + 0x4c) =
         *(undefined4 *)(unaff_x22 + 0x160);
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar48 = (float)FUN_07d61798(*in_stack_00000148,0);
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  uVar13 = *(uint *)(unaff_x22 + 0x344);
  uVar23 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar23 <= uVar13) goto LAB_07d72b20;
  uVar57 = *(uint *)(unaff_x22 + 0x350);
  lVar17 = *(long *)(unaff_x19 + 0x48);
  fVar48 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
           (*(float *)(unaff_x22 + 0x2f4) +
           in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar52 + fVar48));
  if (*(char *)(lVar27 + 0x20 + (long)(int)uVar13 * (long)(int)unaff_w27 + 0x174) == '\0') {
    if (lVar17 == 0) goto LAB_07d72adc;
    uVar13 = *(uint *)(unaff_x22 + 0x33c);
    if (uVar23 <= uVar13) goto LAB_07d72b20;
  }
  else if (lVar17 == 0) goto LAB_07d72adc;
  bVar4 = *(uint *)(lVar17 + 0x18) <= uVar57;
  if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
    if (bVar4) goto LAB_07d72b20;
    fVar48 = -fVar48;
  }
  else if (bVar4) goto LAB_07d72b20;
  *(float *)(lVar17 + (long)(int)uVar57 * 0x60 + 0x5c) =
       *(float *)(lVar27 + 0x20 + (long)(int)uVar13 * (long)(int)unaff_w27 + 0x138) + fVar48;
  if (*(uint *)(lVar17 + 0x18) <= uVar57) goto LAB_07d72b20;
  lVar17 = lVar17 + (long)(int)uVar57 * 0x60;
  *(float *)(lVar17 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
  *(float *)(lVar17 + 0x58) = fVar37;
  *(float *)(lVar17 + 0x4c) = fStack0000000000000048 + (fVar40 - fVar37);
  *(float *)(lVar17 + 0x50) = fVar40;
  uVar34 = *unaff_x21;
  if ((int)uVar34 < 0x2d) {
    if (uVar34 - 10 < 2) {
LAB_07d72208:
      FUN_07d79804();
      uVar8 = *(uint *)(unaff_x22 + 0x334);
      iVar9 = *(int *)(unaff_x22 + 0x350) + 1;
      *(uint *)(unaff_x22 + 0x338) = uVar8 + 1;
      *(int *)(unaff_x22 + 0x350) = iVar9;
      *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07d72adc;
      if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar9) {
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07d8f790(iVar9);
        uVar8 = *unaff_x25;
      }
      lVar27 = *(long *)(unaff_x19 + 0x30);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
      fVar52 = *(float *)(unaff_x22 + 0x2ec);
      fVar48 = *(float *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x14c);
      if (fVar52 == DAT_015c55ac) {
        if ((*unaff_x21 == 0x2029) || (fVar36 = 0.0, *unaff_x21 == 10)) {
          fVar36 = *(float *)(in_stack_00000140 + 0x94);
        }
        uVar22 = 0;
        fVar52 = fVar48 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                 in_stack_00000020._4_4_ * (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc))
        ;
      }
      else {
        if ((*unaff_x21 == 0x2029) || (fVar36 = 0.0, *unaff_x21 == 10)) {
          fVar36 = *(float *)(in_stack_00000140 + 0x94);
        }
        uVar22 = 1;
      }
      fVar52 = *(float *)(unaff_x22 + 0x2e8) + fVar52 + in_stack_000000d8._4_4_ * (fVar36 + 0.0);
      bVar5 = *(char *)(unaff_x22 + 0xf4) != '\0';
      *(undefined1 *)(unaff_x22 + 0x2f0) = uVar22;
      *(float *)(unaff_x22 + 0x15b8) = fVar48;
      fVar48 = *(float *)(unaff_x22 + 0x304) + 0.0 + *(float *)(unaff_x22 + 0x308);
      if (bVar5) {
        fVar52 = (float)(int)(fVar52 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x2e8) = fVar52;
      if (bVar5) {
        fVar48 = (float)(int)(fVar48 + unaff_s15);
      }
      *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
      *(float *)(unaff_x22 + 0x300) = fVar48;
      FUN_07d79804();
      FUN_07d79804();
      *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
      bVar1 = 1;
      bVar5 = true;
      goto LAB_07d72ac8;
    }
    if (uVar34 == 3) {
      if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
      uVar34 = 3;
      in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
    }
  }
  else if ((uVar34 - 0x2028 < 2) || (uVar34 == 0x2d)) goto LAB_07d72208;
LAB_07d72314:
  uVar13 = *unaff_x25;
  if (uVar23 <= uVar13) goto LAB_07d72b20;
  lVar27 = lVar27 + 0x20;
  if (*(char *)(lVar27 + (long)(int)uVar13 * (long)(int)unaff_w27 + 0x174) != '\0') {
    lVar17 = lVar27 + (long)(int)uVar13 * (long)(int)unaff_w27;
    auVar44 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
    uVar14 = *(undefined8 *)(lVar17 + 0xf8);
    auVar46 = NEON_ext(auVar44,auVar44,8,1);
    uVar15 = *(undefined8 *)(lVar17 + 0x104);
    auVar47._0_4_ = -(uint)(auVar44._0_4_ < (float)uVar14);
    auVar47._4_4_ = -(uint)(auVar44._4_4_ < (float)((ulong)uVar14 >> 0x20));
    auVar47._8_4_ = -(uint)((float)uVar15 < auVar46._0_4_);
    auVar47._12_4_ = -(uint)((float)((ulong)uVar15 >> 0x20) < auVar46._4_4_);
    auVar46._8_8_ = uVar15;
    auVar46._0_8_ = uVar14;
    auVar44 = auVar44 ^ (auVar44 ^ auVar46) & ~auVar47;
    *(long *)(in_stack_00000068 + 0x80) = auVar44._8_8_;
    *(long *)(in_stack_00000068 + 0x78) = auVar44._0_8_;
  }
  if (((iStack00000000000000b0 != 3) && (iStack00000000000000b0 != 0)) ||
     ((*(uint *)(in_stack_00000140 + 100) < 7 &&
      ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) != 0)))) {
    if (((bVar6 & 1) == 0) && (uVar34 != 0x200b)) {
      if (uVar34 == 0x2d) {
        if (0 < (int)uVar13) {
          if (uVar23 <= uVar13 - 1) goto LAB_07d72b20;
          uVar41 = *(undefined4 *)(lVar27 + (ulong)(uVar13 - 1) * (ulong)unaff_w27);
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar16 = FUN_066b9610(uVar41,0);
          if ((uVar16 & 1) != 0) {
            uVar34 = *unaff_x21;
            goto LAB_07d72408;
          }
        }
        goto LAB_07d72410;
      }
LAB_07d72408:
      if (uVar34 == 0xad) goto LAB_07d72410;
      if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
      if (bVar1 == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
        bVar1 = 0;
        goto LAB_07d72940;
      }
LAB_07d72618:
      if (bVar3 || *unaff_x21 != 0xad) {
LAB_07d72630:
        bVar1 = 1;
      }
      else {
LAB_07d72434:
        FUN_07d79804();
        bVar1 = 1;
      }
    }
    else {
LAB_07d72410:
      if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
      uVar34 = *unaff_x21;
      if ((int)uVar34 < 0x2007) {
        if (uVar34 == 0x2d) {
          uVar8 = *unaff_x25 - 1;
          if (0 < (int)*unaff_x25) {
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
            uVar41 = *(undefined4 *)(lVar27 + (ulong)uVar8 * (ulong)unaff_w27 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar16 = FUN_066b9610(uVar41,0);
            if ((uVar16 & 1) != 0) goto LAB_07d72940;
          }
        }
        else if (uVar34 == 0xa0) goto LAB_07d72644;
      }
      else if (((uVar34 - 0x2007 < 0x29) &&
               ((1L << ((ulong)(uVar34 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
              (uVar34 == 0x2060)) {
LAB_07d72644:
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        uVar16 = FUN_07d90128(uVar34,0);
        if ((uVar16 & 1) == 0) {
LAB_07d7268c:
          uVar13 = *unaff_x21;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar16 = FUN_07d901bc(uVar13,0);
          if ((uVar16 & 1) == 0) {
            if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
               (uVar8 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar8)) {
LAB_07d72418:
              if (bVar1 != 0) {
                if ((bVar6 & 1) == 0) goto LAB_07d72618;
                if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                goto LAB_07d72630;
              }
              goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
            }
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
            uVar41 = *(undefined4 *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x20);
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar16 = FUN_07d901bc(uVar41,0);
            if ((uVar16 & 1) == 0) goto LAB_07d72418;
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
            if (in_stack_00000018 == 0) goto LAB_07d72adc;
            uVar41 = *(undefined4 *)
                      (lVar27 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
            lVar27 = FUN_07d86e90(in_stack_00000018,0);
            if ((lVar27 == 0) || (lVar27 = FUN_07d98b58(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
            uVar8 = FUN_049ddf40(lVar27,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
            lVar27 = FUN_07d86e90(in_stack_00000018,0);
            if ((lVar27 == 0) || (lVar27 = FUN_07d98b58(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
            uVar13 = FUN_049ddf40(lVar27,uVar41,*(undefined8 *)PTR_DAT_084b5110);
            if (((uVar8 | uVar13) & 1) != 0) goto LAB_07d72940;
            goto LAB_07d72934;
          }
          if (in_stack_00000018 == 0) goto LAB_07d72adc;
        }
        else {
          if ((in_stack_00000018 == 0) || (lVar27 = FUN_07d86e90(in_stack_00000018,0), lVar27 == 0))
          goto LAB_07d72adc;
          if (*(char *)(lVar27 + 0x28) != '\0') goto LAB_07d7268c;
        }
        lVar27 = FUN_07d86e90(in_stack_00000018,0);
        if ((lVar27 == 0) || (lVar27 = FUN_07d98b58(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
        uVar16 = FUN_049ddf40(lVar27,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
        if ((int)*unaff_x25 < (int)uStack000000000000004c) {
          lVar27 = FUN_07d86e90(in_stack_00000018,0);
          if (lVar27 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar27 = FUN_07d98da0(lVar27,0);
          lVar17 = *(long *)(unaff_x19 + 0x30);
          if (lVar17 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar17 + 0x18) <= *unaff_x25 + 1) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          if (lVar27 == 0) goto LAB_07d72adc;
          bVar7 = FUN_049ddf40(lVar27,*(undefined4 *)
                                       (lVar17 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27
                                       + 0x20),*(undefined8 *)PTR_DAT_084b5110);
          if ((uVar16 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
          bVar1 = bVar7 & bVar1;
          bVar6 = bVar1 & bVar6;
          if ((bVar1 != 0) || (((bVar7 ^ 1) & 1) != 0)) goto LAB_07d728a8;
          bVar1 = 0;
        }
        else {
          bVar7 = 0;
          if ((uVar16 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
          if ((bVar1 & uVar8 == uVar11) == 0) goto LAB_07d72940;
          bVar1 = 1;
LAB_07d728a8:
          FUN_07d79804();
          bVar6 = bVar6 & 1;
        }
        if (bVar6 == 0) goto LAB_07d72940;
        goto LAB_07d72934;
      }
      bVar1 = 0;
      *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
    }
LAB_07d72934:
    FUN_07d79804();
  }
LAB_07d72940:
  FUN_07d79804();
  *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
  goto LAB_07d72ac8;
}


