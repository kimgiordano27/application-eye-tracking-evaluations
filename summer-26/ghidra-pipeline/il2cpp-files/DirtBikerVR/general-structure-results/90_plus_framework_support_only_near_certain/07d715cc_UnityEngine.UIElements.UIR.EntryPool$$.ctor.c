/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.EntryPool$$.ctor
ENTRY_POINT: 07d715cc
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


void UnityEngine_UIElements_UIR_EntryPool___ctor(uint param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 *puVar18;
  char cVar19;
  undefined1 uVar20;
  uint in_w8;
  uint uVar21;
  float *pfVar22;
  long lVar23;
  uint in_w9;
  float *pfVar24;
  int *piVar25;
  uint uVar26;
  long *plVar27;
  long in_x10;
  long lVar28;
  long unaff_x19;
  int unaff_w20;
  long *plVar29;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar30;
  long unaff_x23;
  uint unaff_w24;
  uint uVar31;
  uint *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float unaff_s8;
  float fVar48;
  float unaff_s9;
  float unaff_s10;
  float fVar49;
  float unaff_s12;
  float fVar50;
  float fVar51;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  int iStack000000000000000c;
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
  uint uStack0000000000000058;
  int iStack000000000000005c;
  ulong in_stack_00000060;
  long in_stack_00000068;
  long *in_stack_00000090;
  undefined8 in_stack_00000098;
  float *in_stack_000000a0;
  float fStack00000000000000a8;
  int iStack00000000000000b0;
  float fStack00000000000000b4;
  float *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  undefined8 in_stack_000000d8;
  long *in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000f4;
  float fStack00000000000000f8;
  float fStack0000000000000100;
  uint uStack0000000000000104;
  int in_stack_00000108;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  long *in_stack_00000148;
  float in_stack_00000150;
  undefined8 in_stack_00000160;
  char *in_stack_00000168;
  uint in_stack_000010fc;
  uint in_stack_0000112c;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
  uVar4 = in_stack_00000060;
  do {
    fVar45 = unaff_s12;
    iStack000000000000000c = unaff_w20;
    if (*(int *)(in_x10 + 0x20) != 0xad) goto LAB_07d71624;
    bVar3 = false;
    in_stack_00001190 = CONCAT44(0x2d,in_w9);
    *unaff_x25 = in_w9;
    fVar32 = unaff_s12;
    in_stack_0000112c = param_1 - 1;
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
      uVar7 = *(uint *)(lVar23 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
      if (uVar7 == 0) goto LAB_07d72ae0;
      *unaff_x21 = uVar7;
      if (5 < in_stack_00000108) {
        uVar12 = FUN_0676d8dc();
        uVar13 = FUN_0674e2a4(&stack0x0000112c,0);
        uVar12 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar12,
                              *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar13,0);
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4fb40(uVar12,0);
        uVar7 = *unaff_x21;
        in_stack_00001190 = CONCAT44(3,*unaff_x25);
      }
    } while (uVar7 == 0x1a);
    if ((uVar7 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
      in_stack_00000168[0] = '\x01';
      in_stack_00000168[1] = '\x01';
      uVar14 = FUN_07d74ca8();
      if (((uVar14 & 1) != 0) &&
         (in_stack_0000112c = in_stack_000010fc, *in_stack_00000168 == '\x01')) goto LAB_07d72ac8;
    }
    else {
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *in_stack_00000168 = *(char *)(lVar23 + 0x28);
      *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar23 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar23 + 0x40);
      thunk_FUN_03afed3c(in_stack_00000148);
    }
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    unaff_w26 = *(uint *)(unaff_x22 + 0x334);
    uVar7 = *(uint *)(lVar23 + 0x18);
    if (uVar7 <= unaff_w26) goto LAB_07d72b20;
    lVar28 = lVar23 + 0x20;
    in_stack_00000160._4_4_ = (uint)in_stack_00001190;
    uVar38 = *(undefined4 *)(unaff_x22 + 0x78);
    cVar19 = *(char *)(lVar28 + (long)(int)unaff_w26 * (long)(int)unaff_w27 + 0x3c);
    in_stack_00000168[1] = '\0';
    if (in_stack_00000160._4_4_ == unaff_w26) {
      uVar11 = (uint)((ulong)in_stack_00001190 >> 0x20);
      *unaff_x21 = uVar11;
      *in_stack_00000168 = '\x01';
      if (uVar11 != 0x2026) {
        if (uVar11 != 3) goto LAB_07d6efec;
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        uVar7 = *unaff_x25;
        lVar15 = FUN_07d61598(*in_stack_00000148,0);
        if (lVar15 == 0) goto LAB_07d72adc;
        uVar12 = FUN_060344a4(lVar15,3,*(undefined8 *)
                                        System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                             );
        if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
        *(undefined8 *)(lVar28 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x10) = uVar12;
        thunk_FUN_03afed3c();
        *(undefined1 *)(unaff_x22 + 0x4d) = 1;
        goto LAB_07d6efec;
      }
      if (uVar7 <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar28 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
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
      uVar7 = *(uint *)(unaff_x22 + 0x334);
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      in_stack_00001190 = CONCAT44(3,uVar7 + 1);
    }
    else {
LAB_07d6efec:
      uVar7 = *unaff_x25;
    }
    unaff_x23 = in_stack_00000140;
    if (((int)uVar7 < 0) && (*unaff_x21 != 3)) {
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
      lVar23 = lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27;
      *(undefined1 *)(lVar23 + 0x194) = 0;
      *(undefined4 *)(lVar23 + 0x20) = 0x200b;
      *(undefined4 *)(lVar23 + 100) = 0;
      *unaff_x25 = uVar7 + 1;
      goto LAB_07d72ac8;
    }
    cVar2 = *in_stack_00000168;
    if (cVar2 == '\x01') {
      uVar7 = *(uint *)(unaff_x22 + 300);
      if ((uVar7 >> 4 & 1) == 0) {
        if ((uVar7 >> 3 & 1) == 0) {
          fVar45 = 1.0;
          if ((uVar7 >> 5 & 1) != 0) {
            uVar7 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar14 = FUN_066bbc7c(uVar7,0);
            fVar45 = 1.0;
            if ((uVar14 & 1) != 0) {
              uVar7 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar7 = FUN_066bbf04(uVar7,0);
              fVar45 = fStack0000000000000010;
              goto LAB_07d6f260;
            }
          }
        }
        else {
          uVar7 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_066bbbdc(uVar7,0);
          fVar45 = 1.0;
          if ((uVar14 & 1) != 0) {
            uVar7 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar7 = FUN_066bc07c(uVar7,0);
            goto LAB_07d6f25c;
          }
        }
      }
      else {
        uVar7 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar14 = FUN_066bbc7c(uVar7,0);
        fVar45 = 1.0;
        if ((uVar14 & 1) != 0) {
          uVar7 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar7 = FUN_066bbf04(uVar7,0);
LAB_07d6f25c:
          fVar45 = 1.0;
LAB_07d6f260:
          *unaff_x21 = uVar7 & 0xffff;
        }
      }
      cVar2 = *in_stack_00000168;
    }
    else {
      fVar45 = 1.0;
    }
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (cVar2 == '\x01') {
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
      uVar11 = *unaff_x25;
      uVar7 = *(uint *)(lVar23 + 0x18);
      if (uVar7 <= uVar11) goto LAB_07d72b20;
      *(undefined4 *)(unaff_x22 + 0x78) =
           *(undefined4 *)(lVar23 + 0x20 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x38);
      if (in_stack_00000160._4_4_ == unaff_w26) {
        lVar28 = *(long *)(unaff_x22 + 0x20);
        if (lVar28 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar28 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
        if ((*(int *)(lVar28 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
           (uVar11 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
        if (uVar7 <= uVar11 - 1) goto LAB_07d72b20;
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar48 = *(float *)(lVar23 + 0x20 + (long)(int)(uVar11 - 1) * (long)(int)unaff_w27 + 0x40);
        fVar32 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar33 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
        fVar33 = ((fVar45 * fVar48) / fVar32) * fVar33;
LAB_07d6f900:
        fStack00000000000000f4 = 0.0;
        fStack00000000000000f8 = 0.0;
        if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
      }
      else {
LAB_07d6f408:
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar48 = *(float *)(unaff_x22 + 0xf8);
        fVar32 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar33 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
        fVar33 = ((fVar45 * fVar48) / fVar32) * fVar33;
        if (in_stack_00000160._4_4_ == unaff_w26) goto LAB_07d6f900;
LAB_07d6f918:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
      }
      lVar23 = *(long *)(unaff_x22 + 0x1598);
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_07d72adc;
      fVar32 = *(float *)(unaff_x22 + 0xf0);
      fVar48 = *(float *)(lVar23 + 0x2c);
      fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar23 + 0x20),0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar34 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar35 = *(float *)(unaff_x22 + 0xf0);
      fVar37 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      lVar23 = *(long *)(unaff_x19 + 0x30);
      fVar37 = fVar33 * fVar34 * fVar35 * fVar37;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar37 = (float)(int)(fVar37 + unaff_s15);
      }
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar28 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(undefined1 *)(lVar28 + 0x28) = 1;
      fStack00000000000000e8 = fVar33 * fVar32 * fVar48 * fStack00000000000000e8;
      *(float *)(lVar28 + 0x160) = fStack00000000000000e8;
      in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
      fVar32 = 1.0;
      unaff_s13 = 0.0;
      uVar7 = *unaff_x21;
      fVar48 = 0.0;
      if (uVar7 != 3 && uVar7 != 0xad) {
        fVar48 = fStack00000000000000e8;
      }
    }
    else {
      if (cVar2 == '\x02') {
        if (lVar23 != 0) {
          if (*unaff_x25 < *(uint *)(lVar23 + 0x18)) {
            plVar29 = *(long **)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
            if (plVar29 != (long *)0x0) {
              bVar6 = *(byte *)(*(long *)
                                 Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                               + 0x130);
              if ((*(byte *)(*plVar29 + 0x130) < bVar6) ||
                 (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar6 * 8 + -8) !=
                  *(long *)
                   Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8ad40(plVar29);
              }
              plVar16 = (long *)FUN_07d8466c(plVar29,0);
              if (plVar16 == (long *)0x0) {
                plVar16 = (long *)0x0;
                *in_stack_000000e0 = 0;
              }
              else {
                lVar23 = *(long *)
                          Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
                bVar6 = *(byte *)(lVar23 + 0x130);
                if (*(byte *)(*plVar16 + 0x130) < bVar6) {
                  plVar27 = (long *)0x0;
                }
                else {
                  plVar27 = plVar16;
                  if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar6 * 8 + -8) != lVar23) {
                    plVar27 = (long *)0x0;
                  }
                }
                *in_stack_000000e0 = (long)plVar27;
                if (*(byte *)(*plVar16 + 0x130) < bVar6) {
                  plVar16 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar6 * 8 + -8) != lVar23) {
                  plVar16 = (long *)0x0;
                }
              }
              thunk_FUN_03afed3c(in_stack_000000e0,plVar16);
              iVar8 = FUN_07d85970(plVar29,0);
              *(int *)(unaff_x22 + 0x158c) = iVar8;
              if (*unaff_x21 == 0x3c) {
                *unaff_x21 = iVar8 + 0xe000;
              }
              else {
                uVar9 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0
                                    );
                *(undefined4 *)(unaff_x22 + 0x1590) = uVar9;
              }
              if (*(long *)(unaff_x22 + 0x68) != 0) {
                fVar48 = *(float *)(unaff_x22 + 0xf8);
                FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
                memcpy(&stack0x00001130,&stack0x000011a0,0x60);
                fVar32 = (float)FUN_07d5328c(&stack0x00001130,0);
                if (*in_stack_00000148 != 0) {
                  FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
                  memcpy(&stack0x00001130,&stack0x00000170,0x60);
                  fVar33 = (float)FUN_07d53294(&stack0x00001130,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar33 = (fVar48 / fVar32) * fVar33;
                  fVar32 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                  fVar48 = *(float *)(unaff_x22 + 0xf8);
                  if (fVar32 <= 0.0) {
                    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    fVar32 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
                    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    fVar34 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                    if (plVar29[4] == 0) goto LAB_07d72adc;
                    FUN_07d53750(&stack0x000011a0,plVar29[4],0);
                    fVar35 = (float)FUN_07d53580(&stack0x000010e0,0);
                    if (plVar29[4] == 0) goto LAB_07d72adc;
                    fVar47 = *(float *)((long)plVar29 + 0x2c);
                    fVar36 = (float)FUN_07d5378c(plVar29[4],0);
                    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    fVar50 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
                    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    fVar39 = *(float *)(unaff_x22 + 0xf0);
                    fVar37 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                    fStack00000000000000f4 = (fVar48 / fVar32) * fStack00000000000000f4;
                    fStack00000000000000e8 =
                         fStack00000000000000f4 * (fVar34 / fVar35) * fVar47 * fVar36;
                    fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                    fVar37 = fVar33 * fVar50 * fVar39 * fVar37;
                    fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                    fVar32 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                    fStack00000000000000f4 = fStack00000000000000f4 * fVar32;
                  }
                  else {
                    if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                    fVar32 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                    if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                    fVar34 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                    if (plVar29[4] == 0) goto LAB_07d72adc;
                    fVar47 = *(float *)((long)plVar29 + 0x2c);
                    fVar35 = (float)FUN_07d5378c(plVar29[4],0);
                    if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                    fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                    if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                    fVar36 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                    if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                    fVar50 = *(float *)(unaff_x22 + 0xf0);
                    fVar37 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                    if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                    fVar37 = fVar33 * fVar36 * fVar50 * fVar37;
                    fStack00000000000000e8 = (fVar48 / fVar32) * fVar34 * fVar47 * fVar35;
                    fStack00000000000000f4 =
                         (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0);
                  }
                  *(long **)(unaff_x22 + 0x1598) = plVar29;
                  thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar29);
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
                              *(undefined4 *)(unaff_x22 + 0x78) = uVar38;
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
      uVar7 = *unaff_x21;
      fVar48 = 0.0;
      if (uVar7 != 3 && uVar7 != 0xad) {
        fVar48 = unaff_s14;
      }
      fVar37 = 0.0;
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      fStack00000000000000e8 = unaff_s14;
      if (lVar23 == 0) goto LAB_07d72adc;
    }
    unaff_s14 = fVar48;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(uint *)(lVar23 + 0x20) = uVar7;
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
    auVar41 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
    *(undefined4 *)(lVar23 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
    *(long *)(lVar23 + 0x184) = auVar41._8_8_;
    *(long *)(lVar23 + 0x17c) = auVar41._0_8_;
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    uVar7 = *(uint *)(unaff_x22 + 0x334);
    uVar11 = *(uint *)(lVar23 + 0x18);
    if (uVar11 <= uVar7) goto LAB_07d72b20;
    lVar28 = lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27;
    uVar31 = *(uint *)(unaff_x22 + 300);
    *(uint *)(lVar28 + 0x170) = uVar31;
    if (*(int *)(unaff_x22 + 0x13c) == 700) {
      *(uint *)(lVar28 + 0x170) = uVar31 | 1;
      uVar7 = *unaff_x25;
    }
    if (uVar11 <= uVar7) goto LAB_07d72b20;
    lVar23 = *(long *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x18);
    if (lVar23 == 0) {
      if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
         (lVar23 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar23 == 0)) goto LAB_07d72adc;
      FUN_07d53750(&stack0x000011a0,lVar23,0);
    }
    else {
      FUN_07d53750(&stack0x00000510,lVar23,0);
    }
    uVar7 = *unaff_x21;
    if (uVar7 >> 0x10 == 0) {
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      unaff_w24 = FUN_066b9610(uVar7,0);
    }
    else {
      unaff_w24 = 0;
    }
    fStack00000000000000d4 = *(float *)(in_stack_00000140 + 0x8c);
    if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*in_stack_00000168 == '\x01')) {
      if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
      uVar7 = *unaff_x25;
      uVar11 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
      if ((int)uVar7 < (int)uStack000000000000004c) {
        lVar23 = *(long *)(unaff_x19 + 0x30);
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar7 = uVar7 + 1;
        if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
        if (*(char *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 8) == '\x01') {
          lVar23 = *(long *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x10);
          if ((((lVar23 == 0) || (*in_stack_00000148 == 0)) ||
              (lVar28 = *(long *)(*in_stack_00000148 + 0x170), lVar28 == 0)) ||
             (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto LAB_07d72adc;
          uVar14 = FUN_05ffa6e0(lVar28,uVar11 | *(int *)(lVar23 + 0x28) << 0x10,&stack0x000010b0,
                                *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo)
          ;
          if ((uVar14 & 1) != 0) {
            FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
            FUN_07d57c94(&stack0x00001090,0);
            uVar14 = FUN_07d57e7c(&stack0x000010b0,0);
            if ((uVar14 & 0x100) != 0) {
              fStack00000000000000d4 = unaff_s13;
            }
          }
        }
        uVar7 = *unaff_x25;
      }
      uVar31 = uVar7 - 1;
      if (0 < (int)uVar7) {
        lVar23 = *(long *)(unaff_x19 + 0x30);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= uVar31) goto LAB_07d72b20;
        lVar28 = *(long *)(lVar23 + 0x20 + (ulong)uVar31 * (ulong)unaff_w27 + 0x10);
        if (lVar28 == 0) goto LAB_07d72adc;
        if (*(char *)(lVar23 + 0x20 + (ulong)uVar31 * (ulong)unaff_w27 + 8) == '\x01') {
          if (((*in_stack_00000148 == 0) ||
              (lVar23 = *(long *)(*in_stack_00000148 + 0x170), lVar23 == 0)) ||
             (lVar23 = *(long *)(lVar23 + 0x40), lVar23 == 0)) goto LAB_07d72adc;
          uVar14 = FUN_05ffa6e0(lVar23,*(uint *)(lVar28 + 0x28) | uVar11 << 0x10,&stack0x000010b0,
                                *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo)
          ;
          if ((uVar14 & 1) != 0) {
            FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
            FUN_07d57c94(&stack0x00001090,0);
            FUN_07d57af4(0);
            uVar14 = FUN_07d57e7c(&stack0x000010b0,0);
            unaff_s15 = in_stack_000000c0._4_4_;
            if ((uVar14 & 0x100) != 0) {
              fStack00000000000000d4 = unaff_s13;
            }
          }
        }
      }
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      uVar7 = *unaff_x25;
      uVar38 = FUN_07d57ad0(&stack0x00001100,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
      *(undefined4 *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x154) = uVar38;
    }
    uVar7 = *unaff_x21;
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    bVar6 = FUN_07d8fcc4(uVar7,0);
    uVar7 = *unaff_x25;
    uVar14 = (ulong)uVar7;
    if ((bVar6 & 1) == 0) {
      if (0 < (int)uVar7) {
        if ((((uVar4 & 1) == 0) || (uVar11 = *(uint *)(unaff_x22 + 0x19cc), uVar11 == 0x80000000))
           || (uVar11 != uVar7 - 1)) {
          if ((_iStack0000000000000028 & 0x100000000) == 0) {
            bVar5 = false;
          }
          else {
            lVar23 = uVar14 * unaff_w27 + 0x144;
            uVar30 = uVar14;
            do {
              uVar30 = uVar30 - 1;
              iVar8 = (int)uVar14;
              uVar7 = iVar8 - 1;
              uVar14 = (ulong)uVar7;
              if ((iVar8 < 1) || (uVar30 == *(uint *)(unaff_x22 + 0x19cc))) {
                bVar5 = false;
                goto LAB_07d71064;
              }
              lVar28 = *(long *)(unaff_x19 + 0x30);
              if (lVar28 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar28 + 0x18) <= uVar30) goto LAB_07d72b20;
              lVar28 = *(long *)(lVar28 + lVar23 + -0x28c);
              if ((lVar28 == 0) || (lVar28 = FUN_07d88988(lVar28,0), lVar28 == 0))
              goto LAB_07d72adc;
              uVar11 = FUN_07d53740(lVar28,0);
              if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
              iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
              if (((*in_stack_00000148 == 0) ||
                  (lVar28 = FUN_07d61740(*in_stack_00000148,0), lVar28 == 0)) ||
                 (*(long *)(lVar28 + 0x50) == 0)) goto LAB_07d72adc;
              uVar17 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                                 (*(long *)(lVar28 + 0x50),uVar11 | iVar8 << 0x10,&stack0x00001050,
                                  *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
              lVar23 = lVar23 + -0x178;
            } while ((uVar17 & 1) == 0);
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
            fStack00000000000000d4 = 0.0;
            bVar5 = true;
          }
LAB_07d71064:
          if ((uVar4 & 1) != 0) {
            uVar7 = *(uint *)(unaff_x22 + 0x19cc);
            if (uVar7 == 0x80000000) {
              bVar5 = true;
            }
            if (!bVar5) {
              lVar23 = *(long *)(unaff_x19 + 0x30);
              if (lVar23 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
              lVar23 = *(long *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x30);
              if ((lVar23 == 0) || (lVar23 = FUN_07d88988(lVar23,0), lVar23 == 0))
              goto LAB_07d72adc;
              uVar7 = FUN_07d53740(lVar23,0);
              if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
              iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
              if (((*in_stack_00000148 == 0) ||
                  (lVar23 = FUN_07d61740(*in_stack_00000148,0), lVar23 == 0)) ||
                 (*(long *)(lVar23 + 0x48) == 0)) goto LAB_07d72adc;
              uVar14 = FUN_06008730(*(long *)(lVar23 + 0x48),uVar7 | iVar8 << 0x10,&stack0x00001038,
                                    *(undefined8 *)
                                     UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
              if ((uVar14 & 1) != 0) {
                if (*(long *)(unaff_x19 + 0x30) != 0) {
                  if (*(uint *)(unaff_x22 + 0x19cc) < *(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18))
                  {
                    FUN_07d58088(&stack0x00001038,0);
                    UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths
                              (&stack0x00001070,0);
                    FUN_07d580a8(&stack0x00001038,0);
                    FUN_07d58058(&stack0x00001068,0);
                    FUN_07d57ab8(&stack0x00001100,0);
                    FUN_07d58088(&stack0x00001038,0);
                    FUN_07d58048(&stack0x00001070,0);
                    puVar18 = &stack0x00001038;
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
          if (*(uint *)(lVar23 + 0x18) <= uVar11) goto LAB_07d72b20;
          lVar23 = *(long *)(lVar23 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x30);
          if ((lVar23 == 0) || (lVar23 = FUN_07d88988(lVar23,0), lVar23 == 0)) goto LAB_07d72adc;
          uVar7 = FUN_07d53740(lVar23,0);
          if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
          iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
          if (((*in_stack_00000148 == 0) ||
              (lVar23 = FUN_07d61740(*in_stack_00000148,0), lVar23 == 0)) ||
             (*(long *)(lVar23 + 0x48) == 0)) goto LAB_07d72adc;
          uVar14 = FUN_06008730(*(long *)(lVar23 + 0x48),uVar7 | iVar8 << 0x10,&stack0x00001078,
                                *(undefined8 *)
                                 UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
          if ((uVar14 & 1) != 0) {
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
            puVar18 = &stack0x00001078;
LAB_07d711ec:
            FUN_07d580a8(puVar18,0);
            FUN_07d58068(&stack0x00001068,0);
            FUN_07d57ac8(&stack0x00001100,0);
            fStack00000000000000d4 = 0.0;
          }
        }
      }
    }
    else {
      *(uint *)(unaff_x22 + 0x19cc) = uVar7;
    }
    fVar48 = (float)FUN_07d57ac0(&stack0x00001100,0);
    fVar33 = (float)FUN_07d57ac0(&stack0x00001100,0);
    if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
      fVar34 = *(float *)(unaff_x22 + 0x300);
      fVar35 = (float)FUN_07d53598(&stack0x00001110,0);
      fVar34 = fVar34 - unaff_s14 * fVar35 * (fVar32 - *(float *)(unaff_x22 + 0x15a4));
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar34 = (float)(int)(fVar34 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar34;
      if (((unaff_w24 & 1) != 0) || (*unaff_x21 == 0x200b)) {
        fVar34 = fVar34 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar34 = (float)(int)(fVar34 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar34;
      }
    }
    fVar34 = *(float *)(unaff_x22 + 0x2f8);
    in_stack_00000098._4_4_ = 0.0;
    if (fVar34 != 0.0) {
      uVar7 = *unaff_x21;
      if (uVar7 != 0x200b) {
        if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar7)) ||
           (fVar35 = 0.25, (1L << ((ulong)uVar7 & 0x3f) & 0x400500000000000U) == 0)) {
          fVar35 = 0.5;
        }
        fVar47 = (float)FUN_07d53578(&stack0x00001110,0);
        fVar36 = (float)FUN_07d53588(&stack0x00001110,0);
        in_stack_00000098._4_4_ =
             (fVar32 - *(float *)(unaff_x22 + 0x15a4)) *
             (fVar34 * fVar35 - unaff_s14 * (fVar47 * 0.5 + fVar36));
        fVar34 = in_stack_00000098._4_4_ + *(float *)(unaff_x22 + 0x300);
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar34 = (float)(int)(fVar34 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar34;
      }
    }
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar8 = FUN_07d616d4(*in_stack_00000148,0);
    if (iVar8 == 0x1015) {
      bVar5 = false;
    }
    else {
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      iVar8 = FUN_07d616d4(*in_stack_00000148,0);
      bVar5 = iVar8 != 0x11014;
    }
    if ((cVar19 == '\0') && (*in_stack_00000168 == '\x01')) {
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      if ((*(byte *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
      goto LAB_07d701e4;
      if (bVar5) {
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          iVar8 = FUN_07d616c4(*in_stack_00000148,0);
          fVar35 = (float)(iVar8 + 1);
        }
        else {
          lVar23 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar23 == 0) goto LAB_07d72adc;
          uVar14 = thunk_FUN_07c662cc(lVar23,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar14 & 1) == 0) goto LAB_07d70594;
          lVar23 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar23 == 0) goto LAB_07d72adc;
          fVar35 = (float)thunk_FUN_07c69050(lVar23,*(undefined4 *)
                                                     (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar34 = (float)FUN_07d617a8(*in_stack_00000148,0);
        fVar34 = fVar35 * fVar34 * 0.25;
        if (fVar35 < in_stack_00000138._4_4_ + fVar34) {
          in_stack_00000138._4_4_ = fVar35 - fVar34;
        }
      }
      else {
        fVar34 = 0.0;
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000d0 = (float)FUN_07d617b8(*in_stack_00000148,0);
    }
    else {
LAB_07d701e4:
      fStack00000000000000d0 = 0.0;
      if (bVar5) {
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          iVar8 = FUN_07d616c4(*in_stack_00000148,0);
          fVar35 = (float)(iVar8 + 1);
        }
        else {
          lVar23 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar23 == 0) goto LAB_07d72adc;
          uVar14 = thunk_FUN_07c662cc(lVar23,*(undefined4 *)
                                              (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          if ((uVar14 & 1) == 0) goto LAB_07d70290;
          lVar23 = *in_stack_00000090;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          if (lVar23 == 0) goto LAB_07d72adc;
          fVar35 = (float)thunk_FUN_07c69050(lVar23,*(undefined4 *)
                                                     (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar34 = fVar35 * *(float *)(*in_stack_00000148 + 400) * 0.25;
        if (fVar35 < in_stack_00000138._4_4_ + fVar34) {
          in_stack_00000138._4_4_ = fVar35 - fVar34;
        }
      }
      else {
        fVar34 = 0.0;
      }
    }
    fVar36 = *(float *)(unaff_x22 + 0x300);
    fVar35 = (float)FUN_07d53588(&stack0x00001110,0);
    fVar50 = *(float *)(unaff_x22 + 0x19b0);
    fVar47 = (float)FUN_07d57ab0(&stack0x00001100,0);
    fVar36 = fVar36 + (fVar32 - *(float *)(unaff_x22 + 0x15a4)) *
                      unaff_s14 * (fVar47 + ((fVar35 * fVar50 - in_stack_00000138._4_4_) - fVar34));
    fVar35 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar47 = (float)FUN_07d57ac0(&stack0x00001100,0);
    fVar35 = unaff_s14 * (in_stack_00000138._4_4_ + fVar35 + fVar47);
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar35 = (float)(int)(fVar35 + unaff_s15);
    }
    in_stack_00000150 =
         *(float *)(unaff_x22 + 0x188) + ((fVar37 + fVar35) - *(float *)(unaff_x22 + 0x2e8));
    fVar35 = (float)FUN_07d53580(&stack0x00001110,0);
    fVar47 = in_stack_00000150 -
             unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar35);
    fVar35 = (float)FUN_07d53578(&stack0x00001110,0);
    fVar32 = fVar36 + (fVar32 - *(float *)(unaff_x22 + 0x15a4)) *
                      unaff_s14 *
                      (fVar34 + fVar34 +
                      in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                      fVar35 * *(float *)(unaff_x22 + 0x19b0));
    fVar50 = fVar32;
    fVar35 = fVar36;
    if (((cVar19 == '\0') && (*in_stack_00000168 == '\x01')) &&
       ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      iVar8 = *(int *)(unaff_x22 + 0x19ac);
      fVar35 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar39 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar49 = *(float *)(unaff_x22 + 0xf0);
      fVar51 = *(float *)(unaff_x22 + 0x188);
      fVar50 = (float)iVar8 * fStack0000000000000054;
      fVar46 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar46 = fVar46 * fVar49 * (fVar35 - (fVar39 + fVar51)) * 0.5;
      fVar35 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar51 = fVar50 * unaff_s14 * ((fVar34 + in_stack_00000138._4_4_ + fVar35) - fVar46);
      fVar39 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar49 = (float)FUN_07d53580(&stack0x00001110,0);
      in_stack_00000150 = in_stack_00000150 + 0.0;
      fVar35 = fVar36 + fVar51;
      fVar47 = fVar47 + 0.0;
      fVar50 = fVar50 * unaff_s14 *
                        ((((fVar39 - fVar49) - in_stack_00000138._4_4_) - fVar34) - fVar46);
      fVar36 = fVar36 + fVar50;
      fVar50 = fVar32 + fVar50;
      unaff_s15 = in_stack_000000c0._4_4_;
      fVar32 = fVar32 + fVar51;
    }
    uVar13 = *in_stack_000000c8;
    uVar12 = in_stack_000000c8[1];
    if (DAT_08974d8a == '\0') {
      FUN_03a8a718(PTR_DAT_08486860);
      DAT_08974d8a = '\x01';
    }
    uVar40 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
    uVar42 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
    if (DAT_015c5bb4 <
        (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar42 >> 0x20) +
        (float)uVar12 * (float)uVar42 +
        (float)uVar13 * (float)uVar40 +
        (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar40 >> 0x20)) {
      fVar34 = 0.0;
      auVar41._4_12_ = SUB1612(ZEXT816(0),4);
      auVar41._0_4_ = fVar47;
      uVar13 = auVar41._0_8_;
      uVar14 = (ulong)(uint)in_stack_00000150;
      uVar12 = uVar13;
    }
    else {
      FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                   *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                   *(undefined4 *)(unaff_x22 + 0x19c8),0);
      fVar50 = (fVar32 + fVar36) * 0.5;
      fVar46 = (fVar47 + in_stack_00000150) * 0.5;
      fVar32 = 0.0;
      auVar41 = ZEXT416((uint)(in_stack_00000150 - fVar46));
      fVar35 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar35 = fVar50 + fVar35;
      fVar39 = 0.0;
      uVar14 = CONCAT44(fVar32 + 0.0,fVar46 + auVar41._0_4_);
      auVar41 = ZEXT416((uint)(fVar47 - fVar46));
      fVar36 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar36 = fVar50 + fVar36;
      fVar34 = 0.0;
      uVar13 = CONCAT44(fVar39 + 0.0,fVar46 + auVar41._0_4_);
      auVar41 = ZEXT416((uint)(in_stack_00000150 - fVar46));
      fVar32 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar32 = fVar50 + fVar32;
      fVar39 = 0.0;
      in_stack_00000150 = fVar46 + auVar41._0_4_;
      fVar34 = fVar34 + 0.0;
      auVar41 = ZEXT416((uint)(fVar47 - fVar46));
      fVar47 = (float)FUN_07c888bc(&stack0x00000ff0,0);
      fVar50 = fVar50 + fVar47;
      unaff_s15 = in_stack_000000c0._4_4_;
      uVar12 = CONCAT44(fVar39 + 0.0,fVar46 + auVar41._0_4_);
    }
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(float *)(lVar23 + 0x118) = fVar36;
    *(undefined8 *)(lVar23 + 0x11c) = uVar13;
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(float *)(lVar23 + 0x10c) = fVar35;
    *(ulong *)(lVar23 + 0x110) = uVar14;
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(float *)(lVar23 + 0x124) = fVar32;
    *(ulong *)(lVar23 + 0x128) = CONCAT44(fVar34,in_stack_00000150);
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(float *)(lVar23 + 0x130) = fVar50;
    *(undefined8 *)(lVar23 + 0x134) = uVar12;
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    uVar7 = *(uint *)(unaff_x22 + 0x334);
    fVar34 = *(float *)(unaff_x22 + 0x300);
    fVar35 = (float)FUN_07d57ab0(&stack0x00001100,0);
    if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
    fVar34 = fVar34 + unaff_s14 * fVar35;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar34 = (float)(int)(fVar34 + unaff_s15);
    }
    *(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x13c) = fVar34;
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    uVar7 = *(uint *)(unaff_x22 + 0x334);
    fVar35 = *(float *)(unaff_x22 + 0x2e8);
    fVar47 = *(float *)(unaff_x22 + 0x188);
    fVar34 = (float)FUN_07d57ac0(&stack0x00001100,0);
    if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
    fVar34 = (fVar37 - fVar35) + fVar47 + unaff_s14 * fVar34;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar34 = (float)(int)(fVar34 + unaff_s15);
    }
    *(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x144) = fVar34;
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    unaff_w29 = *(uint *)(unaff_x22 + 0x334);
    if (*(uint *)(lVar23 + 0x18) <= unaff_w29) goto LAB_07d72b20;
    lVar23 = lVar23 + 0x20;
    *(float *)(lVar23 + (long)(int)unaff_w29 * (long)(int)unaff_w27 + 0x13c) =
         (fVar32 - fVar36) / ((float)uVar14 - (float)uVar13);
    fVar48 = unaff_s14 * (fStack00000000000000f8 + fVar48);
    if (*in_stack_00000168 == '\x01') {
      fVar48 = fVar48 / fVar45;
      fVar33 = (unaff_s14 * (fStack00000000000000f4 + fVar33)) / fVar45;
    }
    else {
      fVar33 = unaff_s14 * (fStack00000000000000f4 + fVar33);
    }
    in_stack_00000150 = *(float *)(unaff_x22 + 0x338);
    unaff_s13 = 0.0;
    unaff_s12 = 1.0;
    fVar32 = 1.0;
    if (((float)unaff_w29 != in_stack_00000150 & unaff_w24) == 0) {
      fVar35 = *(float *)(unaff_x22 + 0x188);
      fVar48 = fVar48 + fVar35;
      fVar33 = fVar33 + fVar35;
      fVar34 = fVar48;
      fVar37 = fVar33;
      if (fVar35 != 0.0) {
        fVar34 = (fVar48 - fVar35) / *(float *)(unaff_x22 + 0xf0);
        fVar37 = (fVar33 - fVar35) / *(float *)(unaff_x22 + 0xf0);
        if (fVar34 <= fVar48) {
          fVar34 = fVar48;
        }
        if (fVar33 <= fVar37) {
          fVar37 = fVar33;
        }
      }
      lVar23 = lVar23 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
      fVar35 = fVar34;
      if (fVar34 <= *(float *)(unaff_x22 + 0x348)) {
        fVar35 = *(float *)(unaff_x22 + 0x348);
      }
      fVar47 = fVar37;
      if (*(float *)(unaff_x22 + 0x34c) <= fVar37) {
        fVar47 = *(float *)(unaff_x22 + 0x34c);
      }
      *(float *)(unaff_x22 + 0x348) = fVar35;
      *(float *)(unaff_x22 + 0x34c) = fVar47;
      *(float *)(lVar23 + 300) = fVar34;
      *(float *)(lVar23 + 0x130) = fVar37;
      fVar34 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(lVar23 + 0x120) = fVar48 - fVar34;
      *(float *)(lVar23 + 0x128) = fVar33 - fVar34;
      *(float *)(unaff_x22 + 900) = fVar33 - fVar34;
      if (*(int *)(unaff_x22 + 0x350) == 0) {
        *(float *)(unaff_x22 + 0x380) = fVar35;
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar33 = *(float *)(unaff_x22 + 0x37c);
        fVar34 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        fVar45 = (unaff_s14 * fVar34) / fVar45;
        if (fVar33 <= fVar45) {
          fVar33 = fVar45;
        }
        fVar34 = *(float *)(unaff_x22 + 0x2e8);
        *(float *)(unaff_x22 + 0x37c) = fVar33;
      }
      if (fVar34 == 0.0) {
        fVar45 = *(float *)(unaff_x22 + 0x19d0);
        if (*(float *)(unaff_x22 + 0x19d0) <= fVar48) {
          fVar45 = fVar48;
        }
        *(float *)(unaff_x22 + 0x19d0) = fVar45;
      }
    }
    else {
      lVar23 = lVar23 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x348);
      *(undefined8 *)(lVar23 + 300) = uVar12;
      fVar34 = *(float *)(unaff_x22 + 0x2e8);
      fVar45 = (float)((ulong)uVar12 >> 0x20) - fVar34;
      *(float *)(lVar23 + 0x120) = (float)uVar12 - fVar34;
      *(float *)(lVar23 + 0x128) = fVar45;
      *(float *)(unaff_x22 + 900) = fVar45;
    }
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    unaff_w28 = *unaff_x25;
    if (*(uint *)(lVar23 + 0x18) <= unaff_w28) goto LAB_07d72b20;
    lVar23 = lVar23 + (long)(int)unaff_w28 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar23 + 0x194) = 0;
    uVar7 = *unaff_x21;
    uStack0000000000000104 = unaff_w24;
    if (uVar7 != 9) {
      if (iStack000000000000005c == 2) {
        if ((unaff_w24 & 1) == 0 && uVar7 != 0x200b) goto LAB_07d70e7c;
        goto LAB_07d70d34;
      }
      if ((unaff_w24 & 1) == 0) {
LAB_07d70e7c:
        if ((uVar7 != 3) && (uVar7 != 0x200b)) {
          if (uVar7 != 0xad) goto LAB_07d70d34;
          goto LAB_07d70e98;
        }
      }
      else {
LAB_07d70e98:
        if (uVar7 == 0xad && !bVar3) goto LAB_07d70d34;
      }
      if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
      if (*(int *)(in_stack_00000140 + 100) == 6) {
        if ((uVar7 & 0xfffffffe) != 10) {
          if ((0x22 < uVar7 - 0x2007) ||
             ((1L << ((ulong)(uVar7 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
          goto LAB_07d71420;
        }
        fVar45 = 0.0;
        if ((0.0 < fVar34) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
          fVar45 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
        }
        if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar34)) + fVar45 <=
            fStack00000000000000a8) goto LAB_07d71228;
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = unaff_w28;
        }
        in_stack_0000112c = FUN_07d79b5c();
        fVar32 = unaff_s12;
        goto LAB_07d71040;
      }
LAB_07d71228:
      if ((int)uVar7 < 0x2007) {
        if (uVar7 != 10) {
LAB_07d713e4:
          if ((uVar7 != 0xb) && (uVar7 != 0xa0)) goto LAB_07d713f4;
          goto LAB_07d71420;
        }
LAB_07d71440:
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        uVar7 = *unaff_x21;
LAB_07d7147c:
        fVar32 = unaff_s12;
        if (uVar7 == 0xa0) {
          lVar23 = *(long *)(unaff_x19 + 0x48);
          if (lVar23 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
        }
      }
      else {
        if ((0x22 < uVar7 - 0x2007) ||
           ((1L << ((ulong)(uVar7 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_066bcb80(uVar7,0);
          uVar7 = *unaff_x21;
          if ((uVar14 & 1) != 0) goto LAB_07d71420;
          goto LAB_07d7147c;
        }
LAB_07d71420:
        if (((uVar7 != 0xad) && (uVar7 != 0x200b)) && (uVar7 != 0x2060)) goto LAB_07d71440;
      }
LAB_07d717bc:
      if ((in_stack_00000160._4_4_ == unaff_w26) && (*(int *)(unaff_x23 + 100) == 1)) {
        if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar48 = *(float *)(unaff_x22 + 0xf8);
          fVar45 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar33 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          lVar23 = *(long *)(unaff_x22 + 0x19f8);
          if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_07d72adc;
          fVar37 = *(float *)(unaff_x22 + 0xf0);
          fVar35 = *(float *)(lVar23 + 0x2c);
          fVar34 = (float)FUN_07d5378c(*(long *)(lVar23 + 0x20),0);
          uVar12 = *(undefined8 *)in_stack_000000b8;
          fVar34 = (fVar48 / fVar45) * fVar33 * fVar37 * fVar35 * fVar34;
          if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
            lVar23 = *(long *)(unaff_x19 + 0x30);
            if (lVar23 == 0) goto LAB_07d72adc;
            uVar7 = *(int *)(unaff_x22 + 0x334) - 1;
            if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar48 = *(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x60);
            fVar45 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar33 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            lVar23 = *(long *)(unaff_x22 + 0x19f8);
            if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_07d72adc;
            fVar37 = *(float *)(unaff_x22 + 0xf0);
            fVar35 = *(float *)(lVar23 + 0x2c);
            fVar34 = (float)FUN_07d5378c(*(long *)(lVar23 + 0x20),0);
            lVar23 = *(long *)(unaff_x19 + 0x48);
            if (lVar23 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            uVar12 = *(undefined8 *)(lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
            fVar32 = 1.0;
            fVar34 = (fVar48 / fVar45) * fVar33 * fVar37 * fVar35 * fVar34;
          }
          fVar45 = 0.0;
          fVar48 = *(float *)(unaff_x22 + 0x300);
          if (*(char *)(unaff_x23 + 0x82) == '\0') {
            if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
               (lVar23 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar23 == 0))
            goto LAB_07d72adc;
            FUN_07d53750(&stack0x000011a0,lVar23,0);
            fVar45 = (float)FUN_07d53598(&stack0x000010e0,0);
          }
          fVar33 = (fStack00000000000000b4 - (float)uVar12) - (float)((ulong)uVar12 >> 0x20);
          fVar37 = *(float *)(unaff_x22 + 0x368);
          bVar5 = true;
          if ((fVar37 <= fVar33) && (bVar5 = false, !NAN(fVar37))) {
            bVar5 = fVar37 == -1.0;
          }
          if (!bVar5) {
            fVar33 = fVar37;
          }
          if (ABS(fVar48) + fVar34 * fVar45 * (fVar32 - *(float *)(unaff_x22 + 0x15a4)) < fVar33) {
            FUN_07d79804();
            memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
            FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                        );
          }
        }
      }
      else if (*(int *)(unaff_x23 + 100) == 1) goto LAB_07d717ec;
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
      uVar7 = *(uint *)(unaff_x22 + 0x350);
      *(uint *)(lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) =
           uVar7;
      if ((in_stack_00000160._4_4_ == unaff_w26) ||
         ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
        if (*(int *)(lVar23 + (long)(int)uVar7 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
      }
      else {
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
LAB_07d71a94:
        if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
        *(undefined4 *)(lVar23 + (long)(int)uVar7 * 0x60 + 0x6c) =
             *(undefined4 *)(unaff_x22 + 0x160);
      }
      uVar7 = *unaff_x21;
      if (uVar7 != 0x200b) {
        if (uVar7 == 9) {
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar45 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          bVar6 = FUN_07d617d8(*in_stack_00000148,0);
          fVar33 = *(float *)(unaff_x22 + 0x300);
          cVar19 = *(char *)(unaff_x22 + 0xf4);
          fVar48 = unaff_s14 * fVar45 * (float)bVar6;
          fVar45 = fVar48 * (float)(int)(fVar33 / fVar48);
          if (fVar45 <= fVar33) {
            fVar45 = fVar33 + fVar48;
          }
        }
        else {
          fVar45 = *(float *)(unaff_x22 + 0x2f8);
          if (fVar45 == 0.0) {
            fVar48 = *(float *)(unaff_x22 + 0x300);
            if (*(char *)(unaff_x23 + 0x82) != '\0') {
              fVar45 = (float)FUN_07d57ad0(&stack0x00001100,0);
              if (*in_stack_00000148 != 0) {
                fVar33 = (float)FUN_07d61798(*in_stack_00000148,0);
                cVar19 = *(char *)(unaff_x22 + 0xf4);
                fVar48 = fVar48 - (fVar32 - *(float *)(unaff_x22 + 0x15a4)) *
                                  (*(float *)(unaff_x22 + 0x2f4) +
                                  unaff_s14 * fVar45 +
                                  in_stack_000000d8._4_4_ *
                                  (fStack00000000000000d0 + fStack00000000000000d4 + fVar33));
                if (cVar19 != '\0') {
                  fVar48 = (float)(int)(fVar48 + unaff_s15);
                }
                *(float *)(unaff_x22 + 0x300) = fVar48;
                if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
                fVar45 = fVar48 - in_stack_000000d8._4_4_ * *(float *)(unaff_x23 + 0x90);
                goto FUN_07d71c94;
              }
              goto LAB_07d72adc;
            }
            fVar45 = (float)FUN_07d53598(&stack0x00001110,0);
            fVar34 = *(float *)(unaff_x22 + 0x19b0);
            fVar33 = (float)FUN_07d57ad0(&stack0x00001100,0);
            if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
            fVar37 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
            fVar48 = fVar48 + (fVar32 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              unaff_s14 * (fVar45 * fVar34 + fVar33) +
                              in_stack_000000d8._4_4_ *
                              (fStack00000000000000d0 + fStack00000000000000d4 + fVar37));
          }
          else {
            if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar7 < 0x3b)) &&
               ((1L << ((ulong)uVar7 & 0x3f) & 0x400500000000000U) != 0)) {
              fVar45 = fVar45 * 0.5;
            }
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar48 = *(float *)(unaff_x22 + 0x300);
            fVar33 = (float)FUN_07d61798(*in_stack_00000148,0);
            fVar48 = fVar48 + (fVar32 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              (fVar45 - in_stack_00000098._4_4_) +
                              in_stack_000000d8._4_4_ * (fStack00000000000000d4 + fVar33));
          }
          cVar19 = *(char *)(unaff_x22 + 0xf4);
          if (cVar19 != '\0') {
            fVar48 = (float)(int)(fVar48 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar48;
          if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
          fVar45 = fVar48 + in_stack_000000d8._4_4_ * *(float *)(unaff_x23 + 0x90);
        }
FUN_07d71c94:
        if (cVar19 != '\0') {
          fVar45 = (float)(int)(fVar45 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar45;
      }
LAB_07d71ca8:
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      uVar7 = *unaff_x25;
      uVar11 = (uint)*(undefined8 *)(lVar23 + 0x18);
      if (uVar11 <= uVar7) goto LAB_07d72b20;
      *(undefined4 *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x158) =
           *(undefined4 *)(unaff_x22 + 0x300);
      uVar31 = *unaff_x21;
      if ((int)uVar31 < 0xd) {
        if ((uVar31 - 10 < 2) || (uVar31 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
        if ((uVar31 == 0x2d && in_stack_00000160._4_4_ == unaff_w26) ||
           (uVar7 == uStack000000000000004c)) goto LAB_07d71d54;
      }
      else {
        if (uVar31 != 0x2028) {
          if (uVar31 != 0xd) goto LAB_07d71d38;
          fVar45 = *(float *)(unaff_x22 + 0x308) + unaff_s13;
          if (*(char *)(unaff_x22 + 0xf4) != '\0') {
            fVar45 = (float)(int)(fVar45 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar45;
          if (uVar7 != uStack000000000000004c) {
            uVar31 = 0xd;
            goto LAB_07d72314;
          }
        }
LAB_07d71d54:
        if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
          fVar45 = *(float *)(unaff_x22 + 0x348);
          fVar48 = *(float *)(unaff_x22 + 0x15b8);
          if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          fVar45 = fVar45 - fVar48;
          if ((fStack0000000000000054 < ABS(fVar45)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            uVar38 = *(undefined4 *)(unaff_x22 + 0x338);
            uVar9 = *(undefined4 *)(unaff_x22 + 0x334);
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07d8f610(uVar38,uVar9);
            fVar48 = fVar45 + *(float *)(unaff_x22 + 0x2e8);
            *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar45;
            if (*(char *)(unaff_x22 + 0xf4) != '\0') {
              fVar48 = (float)(int)(fVar48 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x2e8) = fVar48;
            if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
              Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                        (&stack0x00000170,unaff_x22 + 0x15f0,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                        );
              memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
              thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
              *(float *)(unaff_x22 + 0xb00) = fVar45 + *(float *)(unaff_x22 + 0xb00);
              *(float *)(unaff_x22 + 0xb34) = fVar45 + *(float *)(unaff_x22 + 0xb34);
              memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
              FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                          );
            }
          }
        }
        fVar48 = *(float *)(unaff_x22 + 0x2e8);
        fVar33 = *(float *)(unaff_x22 + 0x34c) - fVar48;
        fVar45 = *(float *)(unaff_x22 + 900);
        if (fVar33 <= *(float *)(unaff_x22 + 900)) {
          fVar45 = fVar33;
        }
        fVar34 = *(float *)(unaff_x22 + 0x348);
        *(float *)(unaff_x22 + 900) = fVar45;
        if (in_stack_0000119c == '\0') {
          *in_stack_00000040 = fVar45;
        }
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar7 = *(uint *)(unaff_x22 + 0x350);
        if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
        lVar15 = lVar23 + 0x20 + (long)(int)uVar7 * 0x60;
        uVar11 = *(uint *)(unaff_x22 + 0x338);
        *(uint *)(lVar15 + 0x18) = uVar11;
        lVar28 = 0x338;
        if ((int)uVar11 <= *(int *)(unaff_x22 + 0x340)) {
          lVar28 = 0x340;
        }
        uVar26 = *(uint *)(unaff_x22 + lVar28);
        *(uint *)(unaff_x22 + 0x340) = uVar26;
        *(uint *)(lVar15 + 0x1c) = uVar26;
        uVar1 = *(uint *)(unaff_x22 + 0x334);
        *(uint *)(unaff_x22 + 0x33c) = uVar1;
        *(uint *)(lVar15 + 0x20) = uVar1;
        uVar31 = *(uint *)(unaff_x22 + 0x340);
        if ((int)uVar26 <= (int)*(uint *)(unaff_x22 + 0x344)) {
          uVar31 = *(uint *)(unaff_x22 + 0x344);
        }
        *(uint *)(unaff_x22 + 0x344) = uVar31;
        *(uint *)(lVar15 + 0x24) = uVar31;
        lVar28 = *(long *)(unaff_x19 + 0x30);
        uVar21 = uVar31;
        if ((*(uint *)(unaff_x23 + 0x98) & 0xfffffffe) == 2) {
          if (lVar28 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar28 + 0x18) <= uVar1) goto LAB_07d72b20;
          if (*(float *)(lVar28 + (long)(int)uVar1 * (long)(int)unaff_w27 + 0x158) != 0.0) {
            uVar26 = uVar11;
            uVar21 = uVar1;
          }
        }
        lVar23 = lVar23 + 0x20 + (long)(int)uVar7 * 0x60;
        *(uint *)(lVar23 + 4) = (uVar1 - uVar11) + 1;
        iVar8 = *(int *)(in_stack_00000068 + 0x60);
        *(int *)(lVar23 + 8) = iVar8;
        *(uint *)(lVar23 + 0xc) = (uVar31 - (uVar11 + iVar8)) + 1;
        if (lVar28 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar28 + 0x18) <= uVar26) goto LAB_07d72b20;
        *(undefined4 *)(lVar23 + 0x50) =
             *(undefined4 *)(lVar28 + (long)(int)uVar26 * (long)(int)unaff_w27 + 0x118);
        *(float *)(lVar23 + 0x54) = fVar33;
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar28 = *(long *)(unaff_x19 + 0x30);
        if (lVar28 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_07d72b20;
        fVar34 = fVar34 - fVar48;
        lVar23 = lVar23 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        uVar38 = *(undefined4 *)(lVar28 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x124);
        *(float *)(lVar23 + 0x5c) = fVar34;
        *(undefined4 *)(lVar23 + 0x58) = uVar38;
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar11 = *(uint *)(unaff_x22 + 0x350);
        uVar7 = *(uint *)(lVar23 + 0x18);
        if (*(char *)(unaff_x23 + 0xa0) == '\0') {
          if (uVar7 <= uVar11) goto LAB_07d72b20;
          lVar28 = lVar23 + (long)(int)uVar11 * 0x60;
          fVar45 = *(float *)(lVar28 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
        }
        else {
          if (uVar7 <= uVar11) goto LAB_07d72b20;
          lVar15 = *(long *)(unaff_x19 + 0x30);
          if (lVar15 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_07d72b20;
          lVar28 = lVar23 + (long)(int)uVar11 * 0x60;
          fVar45 = *(float *)(lVar15 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x158);
        }
        *(float *)(lVar28 + 0x48) = fVar45;
        if (uVar7 <= uVar11) goto LAB_07d72b20;
        lVar28 = lVar23 + 0x20 + (long)(int)uVar11 * 0x60;
        *(float *)(lVar28 + 0x40) = fStack0000000000000100;
        if (*(int *)(lVar28 + 4) == 1) {
          *(undefined4 *)(lVar23 + 0x20 + (long)(int)uVar11 * 0x60 + 0x4c) =
               *(undefined4 *)(unaff_x22 + 0x160);
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar45 = (float)FUN_07d61798(*in_stack_00000148,0);
        lVar23 = *(long *)(unaff_x19 + 0x30);
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar7 = *(uint *)(unaff_x22 + 0x344);
        uVar11 = (uint)*(undefined8 *)(lVar23 + 0x18);
        if (uVar11 <= uVar7) goto LAB_07d72b20;
        uVar31 = *(uint *)(unaff_x22 + 0x350);
        lVar28 = *(long *)(unaff_x19 + 0x48);
        fVar45 = (fVar32 - *(float *)(unaff_x22 + 0x15a4)) *
                 (*(float *)(unaff_x22 + 0x2f4) +
                 in_stack_000000d8._4_4_ *
                 (fStack00000000000000d0 + fStack00000000000000d4 + fVar45));
        if (*(char *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x174) == '\0') {
          if (lVar28 == 0) goto LAB_07d72adc;
          uVar7 = *(uint *)(unaff_x22 + 0x33c);
          if (uVar11 <= uVar7) goto LAB_07d72b20;
        }
        else if (lVar28 == 0) goto LAB_07d72adc;
        bVar5 = *(uint *)(lVar28 + 0x18) <= uVar31;
        if (*(char *)(unaff_x23 + 0x82) == '\0') {
          if (bVar5) goto LAB_07d72b20;
          fVar45 = -fVar45;
        }
        else if (bVar5) goto LAB_07d72b20;
        *(float *)(lVar28 + (long)(int)uVar31 * 0x60 + 0x5c) =
             *(float *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x138) + fVar45;
        if (*(uint *)(lVar28 + 0x18) <= uVar31) goto LAB_07d72b20;
        lVar28 = lVar28 + (long)(int)uVar31 * 0x60;
        *(float *)(lVar28 + 0x54) = unaff_s13 - *(float *)(unaff_x22 + 0x2e8);
        *(float *)(lVar28 + 0x58) = fVar33;
        *(float *)(lVar28 + 0x4c) = fStack0000000000000048 + (fVar34 - fVar33);
        *(float *)(lVar28 + 0x50) = fVar34;
        uVar31 = *unaff_x21;
        if ((int)uVar31 < 0x2d) {
          if (uVar31 - 10 < 2) {
LAB_07d72208:
            FUN_07d79804();
            uVar7 = *(uint *)(unaff_x22 + 0x334);
            iVar8 = *(int *)(unaff_x22 + 0x350) + 1;
            *(uint *)(unaff_x22 + 0x338) = uVar7 + 1;
            *(int *)(unaff_x22 + 0x350) = iVar8;
            *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
            if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07d72adc;
            if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar8) {
              if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                          0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              FUN_07d8f790(iVar8);
              uVar7 = *unaff_x25;
            }
            lVar23 = *(long *)(unaff_x19 + 0x30);
            if (lVar23 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
            fVar48 = *(float *)(unaff_x22 + 0x2ec);
            fVar45 = *(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x14c);
            if (fVar48 == DAT_015c55ac) {
              if ((*unaff_x21 == 0x2029) || (fVar33 = 0.0, *unaff_x21 == 10)) {
                fVar33 = *(float *)(unaff_x23 + 0x94);
              }
              uVar20 = 0;
              fVar48 = fVar45 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                       in_stack_00000020._4_4_ *
                       (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
            }
            else {
              if ((*unaff_x21 == 0x2029) || (fVar33 = 0.0, *unaff_x21 == 10)) {
                fVar33 = *(float *)(unaff_x23 + 0x94);
              }
              uVar20 = 1;
            }
            fVar48 = *(float *)(unaff_x22 + 0x2e8) +
                     fVar48 + in_stack_000000d8._4_4_ * (fVar33 + unaff_s13);
            bVar5 = *(char *)(unaff_x22 + 0xf4) != '\0';
            *(undefined1 *)(unaff_x22 + 0x2f0) = uVar20;
            *(float *)(unaff_x22 + 0x15b8) = fVar45;
            fVar45 = *(float *)(unaff_x22 + 0x304) + unaff_s13 + *(float *)(unaff_x22 + 0x308);
            if (bVar5) {
              fVar48 = (float)(int)(fVar48 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x2e8) = fVar48;
            if (bVar5) {
              fVar45 = (float)(int)(fVar45 + unaff_s15);
            }
            *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
            *(float *)(unaff_x22 + 0x300) = fVar45;
            FUN_07d79804();
            FUN_07d79804();
            *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
            in_stack_00000060._4_4_ = 1;
            uStack0000000000000058 = 1;
            goto LAB_07d72ac8;
          }
          if (uVar31 == 3) {
            if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
            uVar31 = 3;
            in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
          }
        }
        else if ((uVar31 - 0x2028 < 2) || (uVar31 == 0x2d)) goto LAB_07d72208;
      }
LAB_07d72314:
      uVar7 = *unaff_x25;
      if (uVar11 <= uVar7) goto LAB_07d72b20;
      lVar23 = lVar23 + 0x20;
      if (*(char *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x174) != '\0') {
        lVar28 = lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27;
        auVar41 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
        uVar12 = *(undefined8 *)(lVar28 + 0xf8);
        auVar43 = NEON_ext(auVar41,auVar41,8,1);
        uVar13 = *(undefined8 *)(lVar28 + 0x104);
        auVar44._0_4_ = -(uint)(auVar41._0_4_ < (float)uVar12);
        auVar44._4_4_ = -(uint)(auVar41._4_4_ < (float)((ulong)uVar12 >> 0x20));
        auVar44._8_4_ = -(uint)((float)uVar13 < auVar43._0_4_);
        auVar44._12_4_ = -(uint)((float)((ulong)uVar13 >> 0x20) < auVar43._4_4_);
        auVar43._8_8_ = uVar13;
        auVar43._0_8_ = uVar12;
        auVar41 = auVar41 ^ (auVar41 ^ auVar43) & ~auVar44;
        *(long *)(in_stack_00000068 + 0x80) = auVar41._8_8_;
        *(long *)(in_stack_00000068 + 0x78) = auVar41._0_8_;
      }
      if (((iStack00000000000000b0 == 3) || (iStack00000000000000b0 == 0)) &&
         ((6 < *(uint *)(unaff_x23 + 100) ||
          ((1 << (ulong)(*(uint *)(unaff_x23 + 100) & 0x1f) & 0x4aU) == 0)))) goto LAB_07d72940;
      if (((uStack0000000000000104 & 1) == 0) && (uVar31 != 0x200b)) {
        if (uVar31 == 0x2d) {
          if ((int)uVar7 < 1) goto LAB_07d72410;
          if (uVar11 <= uVar7 - 1) goto LAB_07d72b20;
          uVar38 = *(undefined4 *)(lVar23 + (ulong)(uVar7 - 1) * (ulong)unaff_w27);
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_066b9610(uVar38,0);
          if ((uVar14 & 1) != 0) {
            uVar31 = *unaff_x21;
            goto LAB_07d72408;
          }
          goto LAB_07d72410;
        }
LAB_07d72408:
        if (uVar31 == 0xad) goto LAB_07d72410;
        if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
        if ((in_stack_00000060._4_4_ & 1) == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
          in_stack_00000060._4_4_ = 0;
          goto LAB_07d72940;
        }
LAB_07d72618:
        if (bVar3 || *unaff_x21 != 0xad) {
LAB_07d72630:
          in_stack_00000060._4_4_ = 1;
        }
        else {
LAB_07d72434:
          FUN_07d79804();
          in_stack_00000060._4_4_ = 1;
        }
      }
      else {
LAB_07d72410:
        if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
        uVar31 = *unaff_x21;
        if ((int)uVar31 < 0x2007) {
          if (uVar31 == 0x2d) {
            uVar7 = *unaff_x25 - 1;
            if (0 < (int)*unaff_x25) {
              lVar23 = *(long *)(unaff_x19 + 0x30);
              if (lVar23 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
              uVar38 = *(undefined4 *)(lVar23 + (ulong)uVar7 * (ulong)unaff_w27 + 0x20);
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_066b9610(uVar38,0);
              if ((uVar14 & 1) != 0) goto LAB_07d72940;
            }
          }
          else if (uVar31 == 0xa0) goto LAB_07d72644;
        }
        else if (((uVar31 - 0x2007 < 0x29) &&
                 ((1L << ((ulong)(uVar31 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                (uVar31 == 0x2060)) {
LAB_07d72644:
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_07d90128(uVar31,0);
          if ((uVar14 & 1) == 0) {
LAB_07d7268c:
            uVar7 = *unaff_x21;
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar14 = FUN_07d901bc(uVar7,0);
            if ((uVar14 & 1) == 0) {
              if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
                 (uVar7 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar7)) {
LAB_07d72418:
                if ((in_stack_00000060._4_4_ & 1) != 0) {
                  if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72618;
                  if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                  goto LAB_07d72630;
                }
                goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
              }
              lVar23 = *(long *)(unaff_x19 + 0x30);
              if (lVar23 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
              uVar38 = *(undefined4 *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x20);
              if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                          0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_07d901bc(uVar38,0);
              if ((uVar14 & 1) == 0) goto LAB_07d72418;
              lVar23 = *(long *)(unaff_x19 + 0x30);
              if (lVar23 != 0) {
                if (*unaff_x25 + 1 < *(uint *)(lVar23 + 0x18)) {
                  if (in_stack_00000018 != 0) {
                    uVar38 = *(undefined4 *)
                              (lVar23 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
                    lVar23 = FUN_07d86e90(in_stack_00000018,0);
                    if ((lVar23 != 0) && (lVar23 = FUN_07d98b58(lVar23,0), lVar23 != 0)) {
                      uVar7 = FUN_049ddf40(lVar23,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                      lVar23 = FUN_07d86e90(in_stack_00000018,0);
                      if ((lVar23 != 0) && (lVar23 = FUN_07d98b58(lVar23,0), lVar23 != 0)) {
                        uVar11 = FUN_049ddf40(lVar23,uVar38,*(undefined8 *)PTR_DAT_084b5110);
                        if (((uVar7 | uVar11) & 1) != 0) goto LAB_07d72940;
                        goto LAB_07d72934;
                      }
                    }
                  }
                  goto LAB_07d72adc;
                }
                goto LAB_07d72b20;
              }
              goto LAB_07d72adc;
            }
            if (in_stack_00000018 == 0) goto LAB_07d72adc;
          }
          else {
            if ((in_stack_00000018 == 0) ||
               (lVar23 = FUN_07d86e90(in_stack_00000018,0), lVar23 == 0)) goto LAB_07d72adc;
            if (*(char *)(lVar23 + 0x28) != '\0') goto LAB_07d7268c;
          }
          lVar23 = FUN_07d86e90(in_stack_00000018,0);
          if ((lVar23 == 0) || (lVar23 = FUN_07d98b58(lVar23,0), lVar23 == 0)) goto LAB_07d72adc;
          uVar14 = FUN_049ddf40(lVar23,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
          if ((int)*unaff_x25 < (int)uStack000000000000004c) {
            lVar23 = FUN_07d86e90(in_stack_00000018,0);
            if (lVar23 == 0) goto LAB_07d72adc;
            lVar23 = FUN_07d98da0(lVar23,0);
            lVar28 = *(long *)(unaff_x19 + 0x30);
            if (lVar28 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar28 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
            if (lVar23 == 0) goto LAB_07d72adc;
            uVar7 = FUN_049ddf40(lVar23,*(undefined4 *)
                                         (lVar28 + (long)(int)(*unaff_x25 + 1) *
                                                   (long)(int)unaff_w27 + 0x20),
                                 *(undefined8 *)PTR_DAT_084b5110);
            if ((uVar14 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
            if ((in_stack_00000060._4_4_ & (float)unaff_w29 == in_stack_00000150) == 0)
            goto LAB_07d72940;
            in_stack_00000060._4_4_ = 1;
LAB_07d728a8:
            FUN_07d79804();
          }
          else {
            uVar7 = 0;
            if ((uVar14 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
            in_stack_00000060._4_4_ = uVar7 & in_stack_00000060._4_4_;
            uStack0000000000000104 = in_stack_00000060._4_4_ & uStack0000000000000104;
            if (((in_stack_00000060._4_4_ & 1) != 0) || (((uVar7 ^ 1) & 1) != 0)) goto LAB_07d728a8;
            in_stack_00000060._4_4_ = 0;
          }
          if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72940;
          goto LAB_07d72934;
        }
        in_stack_00000060._4_4_ = 0;
        *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
      }
LAB_07d72934:
      FUN_07d79804();
LAB_07d72940:
      FUN_07d79804();
      *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
      goto LAB_07d72ac8;
    }
LAB_07d70d34:
    *(undefined1 *)(lVar23 + 0x194) = 1;
    pfVar22 = in_stack_000000a0;
    pfVar24 = in_stack_000000b8;
    if (in_stack_00000160._4_4_ == unaff_w26) {
      lVar23 = *(long *)(unaff_x19 + 0x48);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      pfVar24 = (float *)(lVar23 + 100);
      pfVar22 = (float *)(lVar23 + 0x68);
    }
    unaff_s8 = *pfVar24;
    unaff_s9 = *pfVar22;
    fVar45 = *(float *)(unaff_x22 + 0x368);
    fVar33 = 0.0;
    fVar48 = *(float *)(unaff_x22 + 0x300);
    fStack0000000000000100 = (fStack00000000000000b4 - unaff_s8) - unaff_s9;
    bVar5 = true;
    if ((fVar45 <= fStack0000000000000100) && (bVar5 = false, !NAN(fVar45))) {
      bVar5 = fVar45 == -1.0;
    }
    if (!bVar5) {
      fStack0000000000000100 = fVar45;
    }
    fVar45 = 0.0;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      fVar45 = (float)FUN_07d53598(&stack0x00001110,0);
      uVar7 = *unaff_x21;
    }
    if (uVar7 != 0xad) {
      fStack00000000000000e8 = unaff_s14;
    }
    if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar33 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    uVar7 = *unaff_x25;
    unaff_w28 = uVar7;
    if (fStack00000000000000a8 <
        (*(float *)(unaff_x22 + 0x380) -
        (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar33) {
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar7;
      }
      iVar8 = *(int *)(in_stack_00000140 + 100);
      if (iVar8 != 1) {
        if ((iVar8 != 6) && (iVar8 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
        in_stack_0000112c = FUN_07d79b5c();
        fVar32 = unaff_s12;
        goto LAB_07d71040;
      }
      if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
      iVar8 = FUN_059137dc(unaff_x22 + 0x15f0,
                           *(undefined8 *)
                            Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
      if (iVar8 == 0) {
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
        iVar10 = FUN_07d79b5c();
        iVar8 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
        in_stack_00000108 = in_stack_00000108 + 1;
        *(int *)(unaff_x22 + 0x334) = iVar8 + -1;
        in_stack_00001190 = CONCAT44(0x2026,iVar8 + -1);
        fVar32 = unaff_s12;
        in_stack_0000112c = iVar10 - 1;
      }
      goto LAB_07d72ac8;
    }
LAB_07d70fbc:
    fVar33 = unaff_s12;
    if ((bVar6 & fStack0000000000000100 <
                 ABS(fVar48) +
                 fVar45 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) != 1) {
LAB_07d7166c:
      fVar32 = fVar33;
      if ((unaff_w24 & 1) == 0) {
        if (*unaff_x21 == 0xad) {
          lVar23 = *(long *)(unaff_x19 + 0x30);
          if (lVar23 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
          *(undefined1 *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x194) = 0;
        }
        else {
          if (*in_stack_00000168 == '\x02') {
            FUN_07d7a738();
          }
          else if (*in_stack_00000168 == '\x01') {
            FUN_07d79ee4();
          }
          uVar7 = *unaff_x25;
          if ((uStack0000000000000058 & 1) != 0) {
            *(uint *)(unaff_x22 + 0x340) = uVar7;
          }
          *(uint *)(unaff_x22 + 0x344) = uVar7;
          *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
          lVar23 = *(long *)(unaff_x19 + 0x48);
          if (lVar23 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          uStack0000000000000058 = 0;
          lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(float *)(lVar23 + 100) = unaff_s8;
          *(float *)(lVar23 + 0x68) = unaff_s9;
        }
      }
      else {
        lVar23 = *(long *)(unaff_x19 + 0x30);
        if (lVar23 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
        *(undefined1 *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x194) = 0;
        lVar23 = *(long *)(unaff_x19 + 0x48);
        if (lVar23 == 0) goto LAB_07d72adc;
        uVar7 = *(uint *)(lVar23 + 0x18);
        if (uVar7 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar23 = lVar23 + 0x20;
        lVar28 = lVar23 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        iVar8 = *(int *)(lVar28 + 0x10) + 1;
        *(int *)(lVar28 + 0x10) = iVar8;
        uVar11 = *(uint *)(unaff_x22 + 0x350);
        *(int *)(unaff_x22 + 0x358) = iVar8;
        if (uVar7 <= uVar11) goto LAB_07d72b20;
        lVar28 = lVar23 + (long)(int)uVar11 * 0x60;
        *(float *)(lVar28 + 0x44) = unaff_s8;
        *(float *)(lVar28 + 0x48) = unaff_s9;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        if (*unaff_x21 == 0xa0) {
          *(int *)(lVar23 + (long)(int)uVar11 * 0x60) =
               *(int *)(lVar23 + (long)(int)uVar11 * 0x60) + 1;
        }
      }
      goto LAB_07d717bc;
    }
    if (((iStack00000000000000b0 == 0) || (iStack00000000000000b0 == 3)) ||
       (uVar7 == *(uint *)(unaff_x22 + 0x338))) {
      iVar8 = *(int *)(in_stack_00000140 + 100);
      if (iVar8 == 1) {
        iVar8 = FUN_059137dc(unaff_x22 + 0x15f0,
                             *(undefined8 *)
                              Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
        fVar32 = unaff_s12;
        if (iVar8 != 0) {
          Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                    (&stack0x000011a0,unaff_x22 + 0x15f0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                    );
          memcpy(&stack0x00000528,&stack0x000011a0,0x398);
          iVar10 = FUN_07d79b5c();
LAB_07d712c4:
          iVar8 = *(int *)(unaff_x22 + 0x334);
          unaff_s12 = fVar32;
          goto LAB_07d712d0;
        }
LAB_07d72aac:
        unaff_x25[0] = 0;
        unaff_x25[1] = 0;
        in_stack_0000112c = 0xffffffff;
        in_stack_00001190 = DAT_015c3d00;
        goto LAB_07d72ac8;
      }
      if (iVar8 == 6) {
        in_stack_0000112c = FUN_07d79b5c();
        fVar32 = unaff_s12;
        unaff_w28 = *(uint *)(unaff_x22 + 0x334);
        goto LAB_07d71040;
      }
      fVar33 = fVar32;
      if (iVar8 == 3) goto LAB_07d7102c;
      goto LAB_07d7166c;
    }
    in_stack_0000112c = FUN_07d79b5c();
    fVar45 = *(float *)(unaff_x22 + 0x2ec);
    if (fVar45 == DAT_015c55ac) {
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      in_w8 = *unaff_x25;
      if (*(uint *)(lVar23 + 0x18) <= in_w8) goto LAB_07d72b20;
      fVar48 = *(float *)(unaff_x22 + 0x2e8);
      fVar45 = 0.0;
      if ((0.0 < fVar48) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        fVar45 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
      }
      fVar45 = *(float *)(lVar23 + (long)(int)in_w8 * (long)(int)unaff_w27 + 0x14c) +
               (fVar45 - *(float *)(unaff_x22 + 0x34c)) +
               in_stack_00000020._4_4_ * (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
    }
    else {
      *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
      lVar23 = *(long *)(unaff_x19 + 0x30);
      if (lVar23 == 0) goto LAB_07d72adc;
      fVar48 = *(float *)(unaff_x22 + 0x2e8);
      in_w8 = *(uint *)(unaff_x22 + 0x334);
    }
    if ((*(uint *)(lVar23 + 0x18) <= in_w8) ||
       (uVar7 = in_w8 - 1, *(uint *)(lVar23 + 0x18) <= uVar7)) goto LAB_07d72b20;
    piVar25 = (int *)(lVar23 + 0x20 + (long)(int)in_w8 * (long)(int)unaff_w27);
    unaff_s10 = (fStack0000000000000014 + fVar45 + *(float *)(unaff_x22 + 0x380) + fVar48) -
                (float)piVar25[0x4c];
    if ((*(int *)(lVar23 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27) == 0xad && !bVar3) &&
       ((*(int *)(in_stack_00000140 + 100) == 0 || (unaff_s10 < fStack00000000000000a8)))) {
      bVar3 = false;
      in_stack_00001190 = CONCAT44(0x2d,uVar7);
      *unaff_x25 = uVar7;
      in_stack_0000112c = in_stack_0000112c - 1;
      goto LAB_07d72ac8;
    }
    if (*piVar25 == 0xad) {
      bVar3 = true;
      fVar32 = unaff_s12;
      goto LAB_07d72ac8;
    }
    fVar45 = unaff_s12;
    if ((((in_stack_00000060._4_4_ & 1) == 0) ||
        (unaff_w20 = *(int *)(unaff_x22 + 0x11f0), fVar45 = fVar32, unaff_w20 == -1)) ||
       (unaff_w20 == iStack000000000000000c)) {
LAB_07d71624:
      uVar7 = in_w8;
      fVar32 = fVar45;
      if (fStack00000000000000a8 < unaff_s10) {
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = uVar7;
        }
        iVar8 = *(int *)(unaff_x23 + 100);
        bVar3 = false;
        fVar33 = fVar32;
        if (iVar8 < 3) {
          if (iVar8 != 0) {
            if (iVar8 == 1) {
              iVar8 = FUN_059137dc(unaff_x22 + 0x15f0,
                                   *(undefined8 *)
                                    Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo)
              ;
              if (iVar8 == 0) {
                bVar3 = false;
                goto LAB_07d72aac;
              }
              Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                        (&stack0x000011a0,unaff_x22 + 0x15f0,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                        );
              memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
              iVar10 = FUN_07d79b5c();
              bVar3 = false;
              goto LAB_07d712c4;
            }
            if (iVar8 != 2) goto LAB_07d7166c;
          }
LAB_07d729d0:
          FUN_07d7bce4();
          bVar3 = false;
          in_stack_00000060._4_4_ = 1;
          uStack0000000000000058 = 1;
        }
        else {
          if (iVar8 == 3) {
            in_stack_0000112c = FUN_07d79b5c();
            bVar3 = false;
          }
          else {
            if (iVar8 != 6) {
              if (iVar8 != 4) goto LAB_07d7166c;
              goto LAB_07d729d0;
            }
            bVar3 = false;
            unaff_w28 = uVar7;
          }
LAB_07d71040:
          in_stack_00001190 = CONCAT44(3,unaff_w28);
        }
      }
      else {
        FUN_07d7bce4();
        bVar3 = false;
        in_stack_00000060._4_4_ = 1;
        uStack0000000000000058 = 1;
      }
      goto LAB_07d72ac8;
    }
    in_stack_0000112c = FUN_07d79b5c();
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_w8 = *unaff_x25;
    in_w9 = in_w8 - 1;
    if (*(uint *)(lVar23 + 0x18) <= in_w9) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    in_x10 = lVar23 + (long)(int)in_w9 * (long)(int)unaff_w27;
    param_1 = in_stack_0000112c;
  } while( true );
}


