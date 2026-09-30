/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.BaseElementBuilder$$.ctor
ENTRY_POINT: 07d6eed0
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


void UnityEngine_UIElements_UIR_BaseElementBuilder___ctor(void)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
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
  uint uVar21;
  uint uVar22;
  float *pfVar23;
  long lVar24;
  undefined2 in_w9;
  float *pfVar25;
  int *piVar26;
  long *plVar27;
  long lVar28;
  long unaff_x19;
  long *plVar29;
  uint *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong uVar30;
  uint uVar31;
  uint *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  char *unaff_x28;
  long *unaff_x29;
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
  float fVar48;
  float fVar49;
  float fVar50;
  float unaff_s12;
  float fVar51;
  float unaff_s13;
  float fVar52;
  float fVar53;
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
  ulong in_stack_00000060;
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
  uint uVar54;
  uint uVar55;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
  uVar2 = in_stack_00000060;
  do {
    *(undefined2 *)unaff_x28 = in_w9;
    uVar14 = FUN_07d74ca8();
    if ((uVar14 & 1) == 0) goto LAB_07d6ef30;
    in_stack_0000112c = in_stack_000010fc;
    if (*unaff_x28 != '\x01') goto LAB_07d6ef30;
LAB_07d72ac8:
    do {
      lVar24 = *(long *)(unaff_x22 + 0x20);
      in_stack_0000112c = in_stack_0000112c + 1;
      if (lVar24 == 0) goto LAB_07d72adc;
      if ((int)*(uint *)(lVar24 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
        FUN_07d797b8();
        return;
      }
      if (*(uint *)(lVar24 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
      uVar5 = *(uint *)(lVar24 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
      if (uVar5 == 0) goto LAB_07d72ae0;
      *unaff_x21 = uVar5;
      if (5 < unaff_w26) {
        uVar12 = FUN_0676d8dc();
        uVar13 = FUN_0674e2a4(&stack0x0000112c,0);
        uVar12 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar12,
                              *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar13,0);
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4fb40(uVar12,0);
        uVar5 = *unaff_x21;
        in_stack_00001190 = CONCAT44(3,*unaff_x25);
      }
    } while (uVar5 == 0x1a);
    if ((uVar5 != 0x3c) || (*(char *)(unaff_x23 + 0x81) == '\0')) {
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *unaff_x28 = *(char *)(lVar24 + 0x28);
      *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar24 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar24 + 0x40);
      thunk_FUN_03afed3c(unaff_x29);
LAB_07d6ef30:
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar11 = *(uint *)(unaff_x22 + 0x334);
      uVar5 = *(uint *)(lVar24 + 0x18);
      if (uVar5 <= uVar11) goto LAB_07d72b20;
      lVar28 = lVar24 + 0x20;
      uVar54 = (uint)in_stack_00001190;
      uVar38 = *(undefined4 *)(unaff_x22 + 0x78);
      cVar19 = *(char *)(lVar28 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x3c);
      unaff_x28[1] = '\0';
      if (uVar54 == uVar11) {
        uVar8 = (uint)((ulong)in_stack_00001190 >> 0x20);
        *unaff_x21 = uVar8;
        *unaff_x28 = '\x01';
        if (uVar8 != 0x2026) {
          if (uVar8 == 3) {
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            uVar5 = *unaff_x25;
            lVar15 = FUN_07d61598(*unaff_x29,0);
            if (lVar15 == 0) goto LAB_07d72adc;
            uVar12 = FUN_060344a4(lVar15,3,*(undefined8 *)
                                            System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                                 );
            if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_07d72b20;
            *(undefined8 *)(lVar28 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x10) = uVar12;
            thunk_FUN_03afed3c();
            *(undefined1 *)(unaff_x22 + 0x4d) = 1;
            unaff_x28 = in_stack_00000168;
          }
          goto LAB_07d6efec;
        }
        if (uVar5 <= *unaff_x25) goto LAB_07d72b20;
        *(undefined8 *)(lVar28 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
             *(undefined8 *)(unaff_x22 + 0x19f8);
        thunk_FUN_03afed3c();
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(undefined8 *)(lVar24 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
        *(undefined1 *)(lVar24 + 0x28) = 1;
        thunk_FUN_03afed3c();
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *(undefined8 *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
             *(undefined8 *)(unaff_x22 + 0x1a08);
        thunk_FUN_03afed3c();
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *(undefined4 *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
             *(undefined4 *)(unaff_x22 + 0x1a10);
        lVar24 = *(long *)(unaff_x22 + 0x15c0);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
        *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
        uVar5 = *(uint *)(unaff_x22 + 0x334);
        *(undefined1 *)(unaff_x22 + 0x4d) = 1;
        in_stack_00001190 = CONCAT44(3,uVar5 + 1);
      }
      else {
LAB_07d6efec:
        uVar5 = *unaff_x25;
      }
      unaff_x23 = in_stack_00000140;
      if (((int)uVar5 < 0) && (*unaff_x21 != 3)) {
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_07d72b20;
        lVar24 = lVar24 + (long)(int)uVar5 * (long)(int)unaff_w27;
        *(undefined1 *)(lVar24 + 0x194) = 0;
        *(undefined4 *)(lVar24 + 0x20) = 0x200b;
        *(undefined4 *)(lVar24 + 100) = 0;
        *unaff_x25 = uVar5 + 1;
        goto LAB_07d72ac8;
      }
      cVar1 = *unaff_x28;
      if (cVar1 == '\x01') {
        uVar5 = *(uint *)(unaff_x22 + 300);
        if ((uVar5 >> 4 & 1) == 0) {
          if ((uVar5 >> 3 & 1) == 0) {
            fVar45 = 1.0;
            if ((uVar5 >> 5 & 1) != 0) {
              uVar5 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_066bbc7c(uVar5,0);
              fVar45 = 1.0;
              if ((uVar14 & 1) != 0) {
                uVar5 = *unaff_x21;
                if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar5 = FUN_066bbf04(uVar5,0);
                fVar45 = fStack0000000000000010;
                goto LAB_07d6f260;
              }
            }
          }
          else {
            uVar5 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar14 = FUN_066bbbdc(uVar5,0);
            fVar45 = 1.0;
            if ((uVar14 & 1) != 0) {
              uVar5 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar5 = FUN_066bc07c(uVar5,0);
              goto LAB_07d6f25c;
            }
          }
        }
        else {
          uVar5 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar14 = FUN_066bbc7c(uVar5,0);
          fVar45 = 1.0;
          if ((uVar14 & 1) != 0) {
            uVar5 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar5 = FUN_066bbf04(uVar5,0);
LAB_07d6f25c:
            fVar45 = 1.0;
LAB_07d6f260:
            *unaff_x21 = uVar5 & 0xffff;
          }
        }
        cVar1 = *unaff_x28;
      }
      else {
        fVar45 = 1.0;
      }
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (cVar1 == '\x01') {
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *(undefined8 *)(unaff_x22 + 0x1598) =
             *(undefined8 *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
        thunk_FUN_03afed3c(unaff_x22 + 0x1598);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *unaff_x29 = *(long *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
        thunk_FUN_03afed3c(unaff_x29);
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *in_stack_00000090 = *(long *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50)
        ;
        thunk_FUN_03afed3c();
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        uVar8 = *unaff_x25;
        uVar5 = *(uint *)(lVar24 + 0x18);
        if (uVar5 <= uVar8) goto LAB_07d72b20;
        *(undefined4 *)(unaff_x22 + 0x78) =
             *(undefined4 *)(lVar24 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x38);
        if (uVar54 == uVar11) {
          lVar28 = *(long *)(unaff_x22 + 0x20);
          if (lVar28 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar28 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
          if ((*(int *)(lVar28 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
             (uVar8 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
          if (uVar5 <= uVar8 - 1) goto LAB_07d72b20;
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fVar48 = *(float *)(lVar24 + 0x20 + (long)(int)(uVar8 - 1) * (long)(int)unaff_w27 + 0x40);
          fVar32 = (float)FUN_07d5328c(*unaff_x29 + 0xb0,0);
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fVar33 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
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
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fVar33 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
          fVar33 = ((fVar45 * fVar48) / fVar32) * fVar33;
          if (uVar54 == uVar11) goto LAB_07d6f900;
LAB_07d6f918:
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fStack00000000000000f8 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fStack00000000000000f4 = (float)FUN_07d532ec(*unaff_x29 + 0xb0,0);
        }
        lVar24 = *(long *)(unaff_x22 + 0x1598);
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_07d72adc;
        fVar32 = *(float *)(unaff_x22 + 0xf0);
        fVar48 = *(float *)(lVar24 + 0x2c);
        fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar24 + 0x20),0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar34 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar35 = *(float *)(unaff_x22 + 0xf0);
        fVar37 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
        lVar24 = *(long *)(unaff_x19 + 0x30);
        fVar37 = fVar33 * fVar34 * fVar35 * fVar37;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar37 = (float)(int)(fVar37 + unaff_s15);
        }
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        lVar28 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(undefined1 *)(lVar28 + 0x28) = 1;
        fStack00000000000000e8 = fVar33 * fVar32 * fVar48 * fStack00000000000000e8;
        *(float *)(lVar28 + 0x160) = fStack00000000000000e8;
        in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
        unaff_s12 = 1.0;
        unaff_s13 = 0.0;
        uVar5 = *unaff_x21;
        fVar32 = 0.0;
        if (uVar5 != 3 && uVar5 != 0xad) {
          fVar32 = fStack00000000000000e8;
        }
      }
      else {
        if (cVar1 == '\x02') {
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          plVar29 = *(long **)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
          if (plVar29 == (long *)0x0) goto LAB_07d72adc;
          bVar4 = *(byte *)(*(long *)
                             Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                           + 0x130);
          if ((*(byte *)(*plVar29 + 0x130) < bVar4) ||
             (*(long *)(*(long *)(*plVar29 + 200) + (ulong)bVar4 * 8 + -8) !=
              *(long *)Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)
             ) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8ad40(plVar29);
          }
          plVar16 = (long *)FUN_07d8466c(plVar29,0);
          if (plVar16 == (long *)0x0) {
            plVar16 = (long *)0x0;
            *in_stack_000000e0 = 0;
          }
          else {
            lVar24 = *(long *)
                      Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
            bVar4 = *(byte *)(lVar24 + 0x130);
            if (*(byte *)(*plVar16 + 0x130) < bVar4) {
              plVar27 = (long *)0x0;
            }
            else {
              plVar27 = plVar16;
              if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar4 * 8 + -8) != lVar24) {
                plVar27 = (long *)0x0;
              }
            }
            *in_stack_000000e0 = (long)plVar27;
            if (*(byte *)(*plVar16 + 0x130) < bVar4) {
              plVar16 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar4 * 8 + -8) != lVar24) {
              plVar16 = (long *)0x0;
            }
          }
          thunk_FUN_03afed3c(in_stack_000000e0,plVar16);
          iVar6 = FUN_07d85970(plVar29,0);
          *(int *)(unaff_x22 + 0x158c) = iVar6;
          if (*unaff_x21 == 0x3c) {
            *unaff_x21 = iVar6 + 0xe000;
          }
          else {
            uVar7 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
            *(undefined4 *)(unaff_x22 + 0x1590) = uVar7;
          }
          if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
          fVar48 = *(float *)(unaff_x22 + 0xf8);
          FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
          memcpy(&stack0x00001130,&stack0x000011a0,0x60);
          fVar32 = (float)FUN_07d5328c(&stack0x00001130,0);
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          FUN_07d60d20(&stack0x00000170,*unaff_x29,0);
          memcpy(&stack0x00001130,&stack0x00000170,0x60);
          fVar33 = (float)FUN_07d53294(&stack0x00001130,0);
          if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
          fVar33 = (fVar48 / fVar32) * fVar33;
          fVar32 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
          fVar48 = *(float *)(unaff_x22 + 0xf8);
          if (fVar32 <= 0.0) {
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            fVar32 = (float)FUN_07d5328c(*unaff_x29 + 0xb0,0);
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            fStack00000000000000f4 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            fVar34 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
            if (plVar29[4] == 0) goto LAB_07d72adc;
            FUN_07d53750(&stack0x000011a0,plVar29[4],0);
            fVar35 = (float)FUN_07d53580(&stack0x000010e0,0);
            if (plVar29[4] == 0) goto LAB_07d72adc;
            fVar47 = *(float *)((long)plVar29 + 0x2c);
            fVar36 = (float)FUN_07d5378c(plVar29[4],0);
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            fStack00000000000000f8 = (float)FUN_07d532bc(*unaff_x29 + 0xb0,0);
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            fVar52 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            fVar49 = *(float *)(unaff_x22 + 0xf0);
            fVar37 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
            if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
            fStack00000000000000f4 = (fVar48 / fVar32) * fStack00000000000000f4;
            fStack00000000000000e8 = fStack00000000000000f4 * (fVar34 / fVar35) * fVar47 * fVar36;
            fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
            fVar37 = fVar33 * fVar52 * fVar49 * fVar37;
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
            fVar52 = *(float *)(unaff_x22 + 0xf0);
            fVar37 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
            if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
            fVar37 = fVar33 * fVar36 * fVar52 * fVar37;
            fStack00000000000000e8 = (fVar48 / fVar32) * fVar34 * fVar47 * fVar35;
            fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0);
            unaff_x28 = in_stack_00000168;
          }
          *(long **)(unaff_x22 + 0x1598) = plVar29;
          thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar29);
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
          *(long *)(lVar24 + 0x48) = *in_stack_000000e0;
          *(undefined1 *)(lVar24 + 0x28) = 2;
          *(float *)(lVar24 + 0x160) = fStack00000000000000e8;
          thunk_FUN_03afed3c();
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          *(long *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) = *unaff_x29;
          thunk_FUN_03afed3c();
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
          *(undefined4 *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
               *(undefined4 *)(unaff_x22 + 0x78);
          in_stack_00000138._4_4_ = 0.0;
          *(undefined4 *)(unaff_x22 + 0x78) = uVar38;
          unaff_s15 = in_stack_000000c0._4_4_;
          goto LAB_07d6fa0c;
        }
        uVar5 = *unaff_x21;
        fVar32 = 0.0;
        if (uVar5 != 3 && uVar5 != 0xad) {
          fVar32 = unaff_s14;
        }
        fVar37 = 0.0;
        fStack00000000000000f4 = 0.0;
        fStack00000000000000f8 = 0.0;
        fStack00000000000000e8 = unaff_s14;
        if (lVar24 == 0) goto LAB_07d72adc;
      }
      unaff_s14 = fVar32;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(uint *)(lVar24 + 0x20) = uVar5;
      *(undefined4 *)(lVar24 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
      *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
           *(undefined4 *)(unaff_x22 + 0x1b8);
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
           *(undefined4 *)(unaff_x22 + 0x1bc);
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      auVar41 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
      *(undefined4 *)(lVar24 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
      *(long *)(lVar24 + 0x184) = auVar41._8_8_;
      *(long *)(lVar24 + 0x17c) = auVar41._0_8_;
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar5 = *(uint *)(unaff_x22 + 0x334);
      uVar8 = *(uint *)(lVar24 + 0x18);
      if (uVar8 <= uVar5) goto LAB_07d72b20;
      lVar28 = lVar24 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27;
      uVar9 = *(uint *)(unaff_x22 + 300);
      *(uint *)(lVar28 + 0x170) = uVar9;
      if (*(int *)(unaff_x22 + 0x13c) == 700) {
        *(uint *)(lVar28 + 0x170) = uVar9 | 1;
        uVar5 = *unaff_x25;
      }
      if (uVar8 <= uVar5) goto LAB_07d72b20;
      lVar24 = *(long *)(lVar24 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x18);
      if (lVar24 == 0) {
        if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
           (lVar24 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar24 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar24,0);
      }
      else {
        FUN_07d53750(&stack0x00000510,lVar24,0);
      }
      uVar5 = *unaff_x21;
      if (uVar5 >> 0x10 == 0) {
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_066b9610(uVar5,0);
      }
      else {
        uVar5 = 0;
      }
      fVar32 = *(float *)(in_stack_00000140 + 0x8c);
      if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*unaff_x28 == '\x01')) {
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        uVar8 = *unaff_x25;
        uVar9 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
        if ((int)uVar8 < (int)uStack000000000000004c) {
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          uVar8 = uVar8 + 1;
          if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_07d72b20;
          if (*(char *)(lVar24 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 8) == '\x01') {
            lVar24 = *(long *)(lVar24 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x10);
            if ((((lVar24 == 0) || (*unaff_x29 == 0)) ||
                (lVar28 = *(long *)(*unaff_x29 + 0x170), lVar28 == 0)) ||
               (lVar28 = *(long *)(lVar28 + 0x40), lVar28 == 0)) goto LAB_07d72adc;
            uVar14 = FUN_05ffa6e0(lVar28,uVar9 | *(int *)(lVar24 + 0x28) << 0x10,&stack0x000010b0,
                                  *(undefined8 *)
                                   Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
            if ((uVar14 & 1) != 0) {
              FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
              FUN_07d57c94(&stack0x00001090,0);
              uVar14 = FUN_07d57e7c(&stack0x000010b0,0);
              if ((uVar14 & 0x100) != 0) {
                fVar32 = unaff_s13;
              }
            }
          }
          uVar8 = *unaff_x25;
        }
        uVar55 = uVar8 - 1;
        if (0 < (int)uVar8) {
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_07d72b20;
          lVar28 = *(long *)(lVar24 + 0x20 + (ulong)uVar55 * (ulong)unaff_w27 + 0x10);
          if (lVar28 == 0) goto LAB_07d72adc;
          if (*(char *)(lVar24 + 0x20 + (ulong)uVar55 * (ulong)unaff_w27 + 8) == '\x01') {
            if (((*unaff_x29 == 0) || (lVar24 = *(long *)(*unaff_x29 + 0x170), lVar24 == 0)) ||
               (lVar24 = *(long *)(lVar24 + 0x40), lVar24 == 0)) goto LAB_07d72adc;
            uVar14 = FUN_05ffa6e0(lVar24,*(uint *)(lVar28 + 0x28) | uVar9 << 0x10,&stack0x000010b0,
                                  *(undefined8 *)
                                   Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
            if ((uVar14 & 1) != 0) {
              FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
              FUN_07d57c94(&stack0x00001090,0);
              FUN_07d57af4(0);
              uVar14 = FUN_07d57e7c(&stack0x000010b0,0);
              unaff_s15 = in_stack_000000c0._4_4_;
              if ((uVar14 & 0x100) != 0) {
                fVar32 = unaff_s13;
              }
            }
          }
        }
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        uVar8 = *unaff_x25;
        uVar38 = FUN_07d57ad0(&stack0x00001100,0);
        if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_07d72b20;
        *(undefined4 *)(lVar24 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x154) = uVar38;
      }
      uVar8 = *unaff_x21;
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      bVar4 = FUN_07d8fcc4(uVar8,0);
      uVar8 = *unaff_x25;
      uVar14 = (ulong)uVar8;
      if ((bVar4 & 1) == 0) {
        if (0 < (int)uVar8) {
          if ((((uVar2 & 1) == 0) || (uVar9 = *(uint *)(unaff_x22 + 0x19cc), uVar9 == 0x80000000))
             || (uVar9 != uVar8 - 1)) {
            if ((_iStack0000000000000028 & 0x100000000) == 0) {
              bVar3 = false;
            }
            else {
              lVar24 = uVar14 * unaff_w27 + 0x144;
              uVar30 = uVar14;
              do {
                uVar30 = uVar30 - 1;
                iVar6 = (int)uVar14;
                uVar8 = iVar6 - 1;
                uVar14 = (ulong)uVar8;
                if ((iVar6 < 1) || (uVar30 == *(uint *)(unaff_x22 + 0x19cc))) {
                  bVar3 = false;
                  goto LAB_07d71064;
                }
                lVar28 = *(long *)(unaff_x19 + 0x30);
                if (lVar28 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar28 + 0x18) <= uVar30) goto LAB_07d72b20;
                lVar28 = *(long *)(lVar28 + lVar24 + -0x28c);
                if ((lVar28 == 0) || (lVar28 = FUN_07d88988(lVar28,0), lVar28 == 0))
                goto LAB_07d72adc;
                uVar9 = FUN_07d53740(lVar28,0);
                if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
                iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
                if (((*unaff_x29 == 0) || (lVar28 = FUN_07d61740(*unaff_x29,0), lVar28 == 0)) ||
                   (*(long *)(lVar28 + 0x50) == 0)) goto LAB_07d72adc;
                uVar17 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                                   (*(long *)(lVar28 + 0x50),uVar9 | iVar6 << 0x10,&stack0x00001050,
                                    *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo
                                   );
                lVar24 = lVar24 + -0x178;
                unaff_x28 = in_stack_00000168;
                unaff_x29 = in_stack_00000148;
              } while ((uVar17 & 1) == 0);
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
              fVar32 = 0.0;
              bVar3 = true;
            }
LAB_07d71064:
            if ((uVar2 & 1) != 0) {
              uVar8 = *(uint *)(unaff_x22 + 0x19cc);
              if (uVar8 == 0x80000000) {
                bVar3 = true;
              }
              if (!bVar3) {
                lVar24 = *(long *)(unaff_x19 + 0x30);
                if (lVar24 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_07d72b20;
                lVar24 = *(long *)(lVar24 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x30);
                if ((lVar24 == 0) || (lVar24 = FUN_07d88988(lVar24,0), lVar24 == 0))
                goto LAB_07d72adc;
                uVar8 = FUN_07d53740(lVar24,0);
                if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
                iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
                if (((*unaff_x29 == 0) || (lVar24 = FUN_07d61740(*unaff_x29,0), lVar24 == 0)) ||
                   (*(long *)(lVar24 + 0x48) == 0)) goto LAB_07d72adc;
                uVar14 = FUN_06008730(*(long *)(lVar24 + 0x48),uVar8 | iVar6 << 0x10,
                                      &stack0x00001038,
                                      *(undefined8 *)
                                       UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo)
                ;
                unaff_x28 = in_stack_00000168;
                unaff_x29 = in_stack_00000148;
                if ((uVar14 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
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
                  puVar18 = &stack0x00001038;
                  goto LAB_07d711ec;
                }
              }
            }
          }
          else {
            lVar24 = *(long *)(unaff_x19 + 0x30);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_07d72b20;
            lVar24 = *(long *)(lVar24 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x30);
            if ((lVar24 == 0) || (lVar24 = FUN_07d88988(lVar24,0), lVar24 == 0)) goto LAB_07d72adc;
            uVar8 = FUN_07d53740(lVar24,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*unaff_x29 == 0) || (lVar24 = FUN_07d61740(*unaff_x29,0), lVar24 == 0)) ||
               (*(long *)(lVar24 + 0x48) == 0)) goto LAB_07d72adc;
            uVar14 = FUN_06008730(*(long *)(lVar24 + 0x48),uVar8 | iVar6 << 0x10,&stack0x00001078,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            unaff_x28 = in_stack_00000168;
            unaff_x29 = in_stack_00000148;
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
              fVar32 = 0.0;
              unaff_x28 = in_stack_00000168;
              unaff_x29 = in_stack_00000148;
            }
          }
        }
      }
      else {
        *(uint *)(unaff_x22 + 0x19cc) = uVar8;
      }
      fVar48 = (float)FUN_07d57ac0(&stack0x00001100,0);
      fVar33 = (float)FUN_07d57ac0(&stack0x00001100,0);
      if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
        fVar34 = *(float *)(unaff_x22 + 0x300);
        fVar35 = (float)FUN_07d53598(&stack0x00001110,0);
        fVar34 = fVar34 - unaff_s14 * fVar35 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4));
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar34 = (float)(int)(fVar34 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar34;
        if (((uVar5 & 1) != 0) || (*unaff_x21 == 0x200b)) {
          fVar34 = fVar34 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
          if (*(char *)(unaff_x22 + 0xf4) != '\0') {
            fVar34 = (float)(int)(fVar34 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar34;
        }
      }
      fVar34 = *(float *)(unaff_x22 + 0x2f8);
      fVar35 = 0.0;
      if (fVar34 != 0.0) {
        uVar8 = *unaff_x21;
        if (uVar8 != 0x200b) {
          if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar8)) ||
             (fVar35 = 0.25, (1L << ((ulong)uVar8 & 0x3f) & 0x400500000000000U) == 0)) {
            fVar35 = 0.5;
          }
          fVar47 = (float)FUN_07d53578(&stack0x00001110,0);
          fVar36 = (float)FUN_07d53588(&stack0x00001110,0);
          fVar35 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                   (fVar34 * fVar35 - unaff_s14 * (fVar47 * 0.5 + fVar36));
          fVar34 = fVar35 + *(float *)(unaff_x22 + 0x300);
          if (*(char *)(unaff_x22 + 0xf4) != '\0') {
            fVar34 = (float)(int)(fVar34 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar34;
        }
      }
      if (*unaff_x29 == 0) goto LAB_07d72adc;
      iVar6 = FUN_07d616d4(*unaff_x29,0);
      if (iVar6 == 0x1015) {
        bVar3 = false;
      }
      else {
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        iVar6 = FUN_07d616d4(*unaff_x29,0);
        bVar3 = iVar6 != 0x11014;
      }
      if ((cVar19 == '\0') && (*unaff_x28 == '\x01')) {
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        if ((*(byte *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
        goto LAB_07d701e4;
        if (bVar3) {
          if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            iVar6 = FUN_07d616c4(*unaff_x29,0);
            fVar47 = (float)(iVar6 + 1);
          }
          else {
            lVar24 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar24 == 0) goto LAB_07d72adc;
            uVar14 = thunk_FUN_07c662cc(lVar24,*(undefined4 *)
                                                (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
            unaff_x28 = in_stack_00000168;
            if ((uVar14 & 1) == 0) goto LAB_07d70594;
            lVar24 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar24 == 0) goto LAB_07d72adc;
            fVar47 = (float)thunk_FUN_07c69050(lVar24,*(undefined4 *)
                                                       (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          }
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fVar34 = (float)FUN_07d617a8(*unaff_x29,0);
          fVar34 = fVar47 * fVar34 * 0.25;
          if (fVar47 < in_stack_00000138._4_4_ + fVar34) {
            in_stack_00000138._4_4_ = fVar47 - fVar34;
          }
        }
        else {
          fVar34 = 0.0;
        }
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fStack00000000000000d0 = (float)FUN_07d617b8(*unaff_x29,0);
      }
      else {
LAB_07d701e4:
        fStack00000000000000d0 = 0.0;
        if (bVar3) {
          if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
            if (*unaff_x29 == 0) goto LAB_07d72adc;
            iVar6 = FUN_07d616c4(*unaff_x29,0);
            fVar47 = (float)(iVar6 + 1);
          }
          else {
            lVar24 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar24 == 0) goto LAB_07d72adc;
            uVar14 = thunk_FUN_07c662cc(lVar24,*(undefined4 *)
                                                (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
            unaff_x28 = in_stack_00000168;
            if ((uVar14 & 1) == 0) goto LAB_07d70290;
            lVar24 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar24 == 0) goto LAB_07d72adc;
            fVar47 = (float)thunk_FUN_07c69050(lVar24,*(undefined4 *)
                                                       (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          }
          if (*unaff_x29 == 0) goto LAB_07d72adc;
          fVar34 = fVar47 * *(float *)(*unaff_x29 + 400) * 0.25;
          if (fVar47 < in_stack_00000138._4_4_ + fVar34) {
            in_stack_00000138._4_4_ = fVar47 - fVar34;
          }
        }
        else {
          fVar34 = 0.0;
        }
      }
      fVar52 = *(float *)(unaff_x22 + 0x300);
      fVar47 = (float)FUN_07d53588(&stack0x00001110,0);
      fVar49 = *(float *)(unaff_x22 + 0x19b0);
      fVar36 = (float)FUN_07d57ab0(&stack0x00001100,0);
      fVar52 = fVar52 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                        unaff_s14 *
                        (fVar36 + ((fVar47 * fVar49 - in_stack_00000138._4_4_) - fVar34));
      fVar47 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar36 = (float)FUN_07d57ac0(&stack0x00001100,0);
      fVar47 = unaff_s14 * (in_stack_00000138._4_4_ + fVar47 + fVar36);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar47 = (float)(int)(fVar47 + unaff_s15);
      }
      fStack0000000000000150 =
           *(float *)(unaff_x22 + 0x188) + ((fVar37 + fVar47) - *(float *)(unaff_x22 + 0x2e8));
      fVar47 = (float)FUN_07d53580(&stack0x00001110,0);
      fVar49 = fStack0000000000000150 -
               unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar47);
      fVar47 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar47 = fVar52 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                        unaff_s14 *
                        (fVar34 + fVar34 +
                        in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                        fVar47 * *(float *)(unaff_x22 + 0x19b0));
      fVar50 = fVar47;
      fVar36 = fVar52;
      if (((cVar19 == '\0') && (*unaff_x28 == '\x01')) &&
         ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        iVar6 = *(int *)(unaff_x22 + 0x19ac);
        fVar36 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar39 = (float)FUN_07d532e4(*unaff_x29 + 0xb0,0);
        if (*unaff_x29 == 0) goto LAB_07d72adc;
        fVar51 = *(float *)(unaff_x22 + 0xf0);
        fVar53 = *(float *)(unaff_x22 + 0x188);
        fVar50 = (float)iVar6 * fStack0000000000000054;
        fVar46 = (float)FUN_07d53294(*unaff_x29 + 0xb0,0);
        fVar46 = fVar46 * fVar51 * (fVar36 - (fVar39 + fVar53)) * 0.5;
        fVar36 = (float)FUN_07d53590(&stack0x00001110,0);
        fVar53 = fVar50 * unaff_s14 * ((fVar34 + in_stack_00000138._4_4_ + fVar36) - fVar46);
        fVar39 = (float)FUN_07d53590(&stack0x00001110,0);
        fVar51 = (float)FUN_07d53580(&stack0x00001110,0);
        fStack0000000000000150 = fStack0000000000000150 + 0.0;
        fVar36 = fVar52 + fVar53;
        fVar49 = fVar49 + 0.0;
        fVar50 = fVar50 * unaff_s14 *
                          ((((fVar39 - fVar51) - in_stack_00000138._4_4_) - fVar34) - fVar46);
        fVar52 = fVar52 + fVar50;
        fVar50 = fVar47 + fVar50;
        unaff_s15 = in_stack_000000c0._4_4_;
        fVar47 = fVar47 + fVar53;
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
        auVar41._0_4_ = fVar49;
        uVar13 = auVar41._0_8_;
        uVar14 = (ulong)(uint)fStack0000000000000150;
        uVar12 = uVar13;
      }
      else {
        FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                     *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                     *(undefined4 *)(unaff_x22 + 0x19c8),0);
        fVar50 = (fVar47 + fVar52) * 0.5;
        fVar46 = (fVar49 + fStack0000000000000150) * 0.5;
        fVar34 = 0.0;
        auVar41 = ZEXT416((uint)(fStack0000000000000150 - fVar46));
        fVar36 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar36 = fVar50 + fVar36;
        fVar47 = 0.0;
        uVar14 = CONCAT44(fVar34 + 0.0,fVar46 + auVar41._0_4_);
        auVar41 = ZEXT416((uint)(fVar49 - fVar46));
        fVar52 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar52 = fVar50 + fVar52;
        fVar34 = 0.0;
        uVar13 = CONCAT44(fVar47 + 0.0,fVar46 + auVar41._0_4_);
        auVar41 = ZEXT416((uint)(fStack0000000000000150 - fVar46));
        fVar47 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar47 = fVar50 + fVar47;
        fVar39 = 0.0;
        fStack0000000000000150 = fVar46 + auVar41._0_4_;
        fVar34 = fVar34 + 0.0;
        auVar41 = ZEXT416((uint)(fVar49 - fVar46));
        fVar49 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar50 = fVar50 + fVar49;
        unaff_s15 = in_stack_000000c0._4_4_;
        uVar12 = CONCAT44(fVar39 + 0.0,fVar46 + auVar41._0_4_);
      }
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar24 + 0x118) = fVar52;
      *(undefined8 *)(lVar24 + 0x11c) = uVar13;
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar24 + 0x10c) = fVar36;
      *(ulong *)(lVar24 + 0x110) = uVar14;
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar24 + 0x124) = fVar47;
      *(ulong *)(lVar24 + 0x128) = CONCAT44(fVar34,fStack0000000000000150);
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar24 + 0x130) = fVar50;
      *(undefined8 *)(lVar24 + 0x134) = uVar12;
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar8 = *(uint *)(unaff_x22 + 0x334);
      fVar34 = *(float *)(unaff_x22 + 0x300);
      fVar36 = (float)FUN_07d57ab0(&stack0x00001100,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_07d72b20;
      fVar34 = fVar34 + unaff_s14 * fVar36;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar34 = (float)(int)(fVar34 + unaff_s15);
      }
      *(float *)(lVar24 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x13c) = fVar34;
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar8 = *(uint *)(unaff_x22 + 0x334);
      fVar36 = *(float *)(unaff_x22 + 0x2e8);
      fVar49 = *(float *)(unaff_x22 + 0x188);
      fVar34 = (float)FUN_07d57ac0(&stack0x00001100,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_07d72b20;
      fVar34 = (fVar37 - fVar36) + fVar49 + unaff_s14 * fVar34;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar34 = (float)(int)(fVar34 + unaff_s15);
      }
      *(float *)(lVar24 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x144) = fVar34;
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar8 = *(uint *)(unaff_x22 + 0x334);
      if (*(uint *)(lVar24 + 0x18) <= uVar8) goto LAB_07d72b20;
      lVar24 = lVar24 + 0x20;
      *(float *)(lVar24 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x13c) =
           (fVar47 - fVar52) / ((float)uVar14 - (float)uVar13);
      fVar48 = unaff_s14 * (fStack00000000000000f8 + fVar48);
      if (*unaff_x28 == '\x01') {
        fVar48 = fVar48 / fVar45;
        fVar33 = (unaff_s14 * (fStack00000000000000f4 + fVar33)) / fVar45;
      }
      else {
        fVar33 = unaff_s14 * (fStack00000000000000f4 + fVar33);
      }
      uVar9 = *(uint *)(unaff_x22 + 0x338);
      unaff_s13 = 0.0;
      unaff_s12 = 1.0;
      if ((uVar8 != uVar9 & uVar5) == 0) {
        fVar47 = *(float *)(unaff_x22 + 0x188);
        fVar48 = fVar48 + fVar47;
        fVar33 = fVar33 + fVar47;
        fVar34 = fVar48;
        fVar37 = fVar33;
        if (fVar47 != 0.0) {
          fVar34 = (fVar48 - fVar47) / *(float *)(unaff_x22 + 0xf0);
          fVar37 = (fVar33 - fVar47) / *(float *)(unaff_x22 + 0xf0);
          if (fVar34 <= fVar48) {
            fVar34 = fVar48;
          }
          if (fVar33 <= fVar37) {
            fVar37 = fVar33;
          }
        }
        lVar24 = lVar24 + (long)(int)uVar8 * (long)(int)unaff_w27;
        fVar47 = fVar34;
        if (fVar34 <= *(float *)(unaff_x22 + 0x348)) {
          fVar47 = *(float *)(unaff_x22 + 0x348);
        }
        fVar36 = fVar37;
        if (*(float *)(unaff_x22 + 0x34c) <= fVar37) {
          fVar36 = *(float *)(unaff_x22 + 0x34c);
        }
        *(float *)(unaff_x22 + 0x348) = fVar47;
        *(float *)(unaff_x22 + 0x34c) = fVar36;
        *(float *)(lVar24 + 300) = fVar34;
        *(float *)(lVar24 + 0x130) = fVar37;
        fVar34 = *(float *)(unaff_x22 + 0x2e8);
        *(float *)(lVar24 + 0x120) = fVar48 - fVar34;
        *(float *)(lVar24 + 0x128) = fVar33 - fVar34;
        *(float *)(unaff_x22 + 900) = fVar33 - fVar34;
        if (*(int *)(unaff_x22 + 0x350) == 0) {
          *(float *)(unaff_x22 + 0x380) = fVar47;
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
        lVar24 = lVar24 + (long)(int)uVar8 * (long)(int)unaff_w27;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x348);
        *(undefined8 *)(lVar24 + 300) = uVar12;
        fVar34 = *(float *)(unaff_x22 + 0x2e8);
        fVar45 = (float)((ulong)uVar12 >> 0x20) - fVar34;
        *(float *)(lVar24 + 0x120) = (float)uVar12 - fVar34;
        *(float *)(lVar24 + 0x128) = fVar45;
        *(float *)(unaff_x22 + 900) = fVar45;
      }
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar55 = *unaff_x25;
      if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)uVar55 * (long)(int)unaff_w27;
      *(undefined1 *)(lVar24 + 0x194) = 0;
      uVar21 = *unaff_x21;
      if (uVar21 == 9) {
LAB_07d70d34:
        *(undefined1 *)(lVar24 + 0x194) = 1;
        pfVar23 = in_stack_000000a0;
        pfVar25 = in_stack_000000b8;
        if (uVar54 == uVar11) {
          lVar24 = *(long *)(unaff_x19 + 0x48);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          pfVar25 = (float *)(lVar24 + 100);
          pfVar23 = (float *)(lVar24 + 0x68);
        }
        fVar48 = *pfVar25;
        fVar33 = *pfVar23;
        fVar45 = *(float *)(unaff_x22 + 0x368);
        fVar37 = 0.0;
        fVar34 = *(float *)(unaff_x22 + 0x300);
        in_stack_00000100 = (fStack00000000000000b4 - fVar48) - fVar33;
        bVar3 = true;
        if ((fVar45 <= in_stack_00000100) && (bVar3 = false, !NAN(fVar45))) {
          bVar3 = fVar45 == -1.0;
        }
        if (!bVar3) {
          in_stack_00000100 = fVar45;
        }
        fVar45 = 0.0;
        if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
          fVar45 = (float)FUN_07d53598(&stack0x00001110,0);
          uVar21 = *unaff_x21;
        }
        if (uVar21 != 0xad) {
          fStack00000000000000e8 = unaff_s14;
        }
        if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
          fVar37 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
        }
        uVar55 = *unaff_x25;
        if (fStack00000000000000a8 <
            (*(float *)(unaff_x22 + 0x380) -
            (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar37) {
          if (*(int *)(unaff_x22 + 0x35c) == -1) {
            *(uint *)(unaff_x22 + 0x35c) = uVar55;
          }
          iVar6 = *(int *)(in_stack_00000140 + 100);
          if (iVar6 != 1) {
            if ((iVar6 != 6) && (iVar6 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
            in_stack_0000112c = FUN_07d79b5c();
            goto LAB_07d71040;
          }
          if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
          iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                               *(undefined8 *)
                                Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
          if (iVar6 == 0) {
            unaff_x25[0] = 0;
            unaff_x25[1] = 0;
            in_stack_0000112c = 0xffffffff;
            unaff_x28 = in_stack_00000168;
            unaff_x29 = in_stack_00000148;
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
            iVar6 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
            unaff_w26 = unaff_w26 + 1;
            *(int *)(unaff_x22 + 0x334) = iVar6 + -1;
            unaff_x28 = in_stack_00000168;
            unaff_x29 = in_stack_00000148;
            unaff_s12 = 1.0;
            in_stack_0000112c = iVar10 - 1;
            in_stack_00001190 = CONCAT44(0x2026,iVar6 + -1);
          }
          goto LAB_07d72ac8;
        }
LAB_07d70fbc:
        uVar21 = uVar55;
        if ((bVar4 & in_stack_00000100 <
                     ABS(fVar34) +
                     fVar45 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) == 1)
        {
          if (((iStack00000000000000b0 != 0) && (iStack00000000000000b0 != 3)) &&
             (uVar55 != *(uint *)(unaff_x22 + 0x338))) {
            in_stack_0000112c = FUN_07d79b5c();
            fVar45 = *(float *)(unaff_x22 + 0x2ec);
            if (fVar45 == DAT_015c55ac) {
              lVar24 = *(long *)(unaff_x19 + 0x30);
              if (lVar24 == 0) goto LAB_07d72adc;
              uVar21 = *unaff_x25;
              if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_07d72b20;
              fVar34 = *(float *)(unaff_x22 + 0x2e8);
              fVar45 = 0.0;
              if ((0.0 < fVar34) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
                fVar45 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
              }
              fVar45 = *(float *)(lVar24 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x14c) +
                       (fVar45 - *(float *)(unaff_x22 + 0x34c)) +
                       in_stack_00000020._4_4_ *
                       (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
            }
            else {
              *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
              lVar24 = *(long *)(unaff_x19 + 0x30);
              if (lVar24 == 0) goto LAB_07d72adc;
              fVar34 = *(float *)(unaff_x22 + 0x2e8);
              uVar21 = *(uint *)(unaff_x22 + 0x334);
            }
            if ((*(uint *)(lVar24 + 0x18) <= uVar21) ||
               (uVar31 = uVar21 - 1, *(uint *)(lVar24 + 0x18) <= uVar31)) goto LAB_07d72b20;
            piVar26 = (int *)(lVar24 + 0x20 + (long)(int)uVar21 * (long)(int)unaff_w27);
            fVar45 = (fStack0000000000000014 + fVar45 + *(float *)(unaff_x22 + 0x380) + fVar34) -
                     (float)piVar26[0x4c];
            if ((*(int *)(lVar24 + 0x20 + (long)(int)uVar31 * (long)(int)unaff_w27) == 0xad &&
                 (in_stack_00000038._4_4_ & 1) == 0) &&
               ((*(int *)(in_stack_00000140 + 100) == 0 || (fVar45 < fStack00000000000000a8)))) {
              in_stack_00000038._4_4_ = 0;
              in_stack_0000112c = in_stack_0000112c - 1;
              *unaff_x25 = uVar31;
              unaff_x28 = in_stack_00000168;
              unaff_x29 = in_stack_00000148;
              in_stack_00001190 = CONCAT44(0x2d,uVar31);
              goto LAB_07d72ac8;
            }
            if (*piVar26 == 0xad) {
              in_stack_00000038._4_4_ = 1;
              unaff_x28 = in_stack_00000168;
              unaff_x29 = in_stack_00000148;
              goto LAB_07d72ac8;
            }
            if ((((in_stack_00000060._4_4_ & 1) != 0) &&
                (iVar6 = *(int *)(unaff_x22 + 0x11f0), iVar6 != -1)) &&
               (iVar6 != in_stack_00000008._4_4_)) {
              in_stack_0000112c = FUN_07d79b5c();
              lVar24 = *(long *)(unaff_x19 + 0x30);
              if (lVar24 == 0) goto LAB_07d72adc;
              uVar21 = *unaff_x25;
              uVar31 = uVar21 - 1;
              if (*(uint *)(lVar24 + 0x18) <= uVar31) goto LAB_07d72b20;
              in_stack_00000008._4_4_ = iVar6;
              if (*(int *)(lVar24 + (long)(int)uVar31 * (long)(int)unaff_w27 + 0x20) == 0xad) {
                in_stack_00000038._4_4_ = 0;
                in_stack_0000112c = in_stack_0000112c - 1;
                *unaff_x25 = uVar31;
                unaff_x28 = in_stack_00000168;
                unaff_x29 = in_stack_00000148;
                in_stack_00001190 = CONCAT44(0x2d,uVar31);
                goto LAB_07d72ac8;
              }
            }
            if (fStack00000000000000a8 < fVar45) {
              if (*(int *)(unaff_x22 + 0x35c) == -1) {
                *(uint *)(unaff_x22 + 0x35c) = uVar21;
              }
              iVar6 = *(int *)(in_stack_00000140 + 100);
              in_stack_00000038._4_4_ = 0;
              if (iVar6 < 3) {
                if (iVar6 != 0) {
                  if (iVar6 == 1) {
                    iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                                         *(undefined8 *)
                                          Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                        );
                    if (iVar6 != 0) {
                      Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                                (&stack0x000011a0,unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                                );
                      memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                      iVar10 = FUN_07d79b5c();
                      in_stack_00000038._4_4_ = 0;
                      goto LAB_07d712c4;
                    }
                    in_stack_00000038._4_4_ = 0;
                    goto LAB_07d72aac;
                  }
                  if (iVar6 != 2) goto LAB_07d7166c;
                }
LAB_07d729d0:
                FUN_07d7bce4();
                in_stack_00000038._4_4_ = 0;
                in_stack_00000060._4_4_ = 1;
                uStack0000000000000058 = 1;
                unaff_x28 = in_stack_00000168;
                unaff_x29 = in_stack_00000148;
                unaff_s12 = 1.0;
              }
              else {
                if (iVar6 == 3) {
                  in_stack_0000112c = FUN_07d79b5c();
                  in_stack_00000038._4_4_ = 0;
                }
                else {
                  if (iVar6 != 6) {
                    if (iVar6 != 4) goto LAB_07d7166c;
                    goto LAB_07d729d0;
                  }
                  in_stack_00000038._4_4_ = 0;
                  uVar55 = uVar21;
                }
LAB_07d71040:
                unaff_x28 = in_stack_00000168;
                unaff_x29 = in_stack_00000148;
                in_stack_00001190 = CONCAT44(3,uVar55);
              }
            }
            else {
              FUN_07d7bce4();
              in_stack_00000038._4_4_ = 0;
              in_stack_00000060._4_4_ = 1;
              uStack0000000000000058 = 1;
              unaff_x28 = in_stack_00000168;
              unaff_x29 = in_stack_00000148;
            }
            goto LAB_07d72ac8;
          }
          iVar6 = *(int *)(in_stack_00000140 + 100);
          if (iVar6 == 1) {
            iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
            if (iVar6 != 0) {
              Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                        (&stack0x000011a0,unaff_x22 + 0x15f0,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                        );
              memcpy(&stack0x00000528,&stack0x000011a0,0x398);
              iVar10 = FUN_07d79b5c();
LAB_07d712c4:
              iVar6 = *(int *)(unaff_x22 + 0x334);
              goto LAB_07d712d0;
            }
LAB_07d72aac:
            unaff_x25[0] = 0;
            unaff_x25[1] = 0;
            in_stack_0000112c = 0xffffffff;
            unaff_x28 = in_stack_00000168;
            unaff_x29 = in_stack_00000148;
            in_stack_00001190 = DAT_015c3d00;
            goto LAB_07d72ac8;
          }
          if (iVar6 == 6) {
            in_stack_0000112c = FUN_07d79b5c();
            uVar55 = *(uint *)(unaff_x22 + 0x334);
            goto LAB_07d71040;
          }
          if (iVar6 == 3) goto LAB_07d7102c;
        }
LAB_07d7166c:
        if ((uVar5 & 1) == 0) {
          if (*unaff_x21 == 0xad) {
            lVar24 = *(long *)(unaff_x19 + 0x30);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_07d72b20;
            *(undefined1 *)(lVar24 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x194) = 0;
          }
          else {
            if (*in_stack_00000168 == '\x02') {
              FUN_07d7a738();
            }
            else if (*in_stack_00000168 == '\x01') {
              FUN_07d79ee4();
            }
            uVar55 = *unaff_x25;
            if ((uStack0000000000000058 & 1) != 0) {
              *(uint *)(unaff_x22 + 0x340) = uVar55;
            }
            *(uint *)(unaff_x22 + 0x344) = uVar55;
            *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
            lVar24 = *(long *)(unaff_x19 + 0x48);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            uStack0000000000000058 = 0;
            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            *(float *)(lVar24 + 100) = fVar48;
            *(float *)(lVar24 + 0x68) = fVar33;
          }
        }
        else {
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_07d72b20;
          *(undefined1 *)(lVar24 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x194) = 0;
          lVar24 = *(long *)(unaff_x19 + 0x48);
          if (lVar24 == 0) goto LAB_07d72adc;
          uVar55 = *(uint *)(lVar24 + 0x18);
          if (uVar55 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar24 = lVar24 + 0x20;
          lVar28 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          iVar6 = *(int *)(lVar28 + 0x10) + 1;
          *(int *)(lVar28 + 0x10) = iVar6;
          uVar21 = *(uint *)(unaff_x22 + 0x350);
          *(int *)(unaff_x22 + 0x358) = iVar6;
          if (uVar55 <= uVar21) goto LAB_07d72b20;
          lVar28 = lVar24 + (long)(int)uVar21 * 0x60;
          *(float *)(lVar28 + 0x44) = fVar48;
          *(float *)(lVar28 + 0x48) = fVar33;
          *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
          if (*unaff_x21 == 0xa0) {
            *(int *)(lVar24 + (long)(int)uVar21 * 0x60) =
                 *(int *)(lVar24 + (long)(int)uVar21 * 0x60) + 1;
          }
        }
      }
      else {
        if (iStack000000000000005c == 2) {
          if ((uVar5 & 1) == 0 && uVar21 != 0x200b) goto LAB_07d70e7c;
          goto LAB_07d70d34;
        }
        if ((uVar5 & 1) == 0) {
LAB_07d70e7c:
          if ((uVar21 != 3) && (uVar21 != 0x200b)) {
            if (uVar21 != 0xad) goto LAB_07d70d34;
            goto LAB_07d70e98;
          }
        }
        else {
LAB_07d70e98:
          if (uVar21 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
        }
        if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
        if (*(int *)(in_stack_00000140 + 100) == 6) {
          if ((uVar21 & 0xfffffffe) != 10) {
            if ((0x22 < uVar21 - 0x2007) ||
               ((1L << ((ulong)(uVar21 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
            goto LAB_07d71420;
          }
          fVar45 = 0.0;
          if ((0.0 < fVar34) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar45 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar34)) + fVar45 <=
              fStack00000000000000a8) goto LAB_07d71228;
          if (*(int *)(unaff_x22 + 0x35c) == -1) {
            *(uint *)(unaff_x22 + 0x35c) = uVar55;
          }
          in_stack_0000112c = FUN_07d79b5c();
          goto LAB_07d71040;
        }
LAB_07d71228:
        if ((int)uVar21 < 0x2007) {
          if (uVar21 != 10) {
LAB_07d713e4:
            if ((uVar21 != 0xb) && (uVar21 != 0xa0)) goto LAB_07d713f4;
            goto LAB_07d71420;
          }
LAB_07d71440:
          lVar24 = *(long *)(unaff_x19 + 0x48);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
          *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
          uVar21 = *unaff_x21;
LAB_07d7147c:
          if (uVar21 == 0xa0) {
            lVar24 = *(long *)(unaff_x19 + 0x48);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
          }
        }
        else {
          if ((0x22 < uVar21 - 0x2007) ||
             ((1L << ((ulong)(uVar21 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar14 = FUN_066bcb80(uVar21,0);
            uVar21 = *unaff_x21;
            if ((uVar14 & 1) != 0) goto LAB_07d71420;
            goto LAB_07d7147c;
          }
LAB_07d71420:
          if (((uVar21 != 0xad) && (uVar21 != 0x200b)) && (uVar21 != 0x2060)) goto LAB_07d71440;
        }
      }
      if ((uVar54 == uVar11) && (*(int *)(in_stack_00000140 + 100) == 1)) {
        if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar48 = *(float *)(unaff_x22 + 0xf8);
          fVar45 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar33 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          lVar24 = *(long *)(unaff_x22 + 0x19f8);
          if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_07d72adc;
          fVar37 = *(float *)(unaff_x22 + 0xf0);
          fVar47 = *(float *)(lVar24 + 0x2c);
          fVar34 = (float)FUN_07d5378c(*(long *)(lVar24 + 0x20),0);
          uVar12 = *(undefined8 *)in_stack_000000b8;
          fVar34 = (fVar48 / fVar45) * fVar33 * fVar37 * fVar47 * fVar34;
          if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
            lVar24 = *(long *)(unaff_x19 + 0x30);
            if (lVar24 == 0) goto LAB_07d72adc;
            uVar55 = *(int *)(unaff_x22 + 0x334) - 1;
            if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_07d72b20;
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar48 = *(float *)(lVar24 + (long)(int)uVar55 * (long)(int)unaff_w27 + 0x60);
            fVar45 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar33 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            lVar24 = *(long *)(unaff_x22 + 0x19f8);
            if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_07d72adc;
            fVar37 = *(float *)(unaff_x22 + 0xf0);
            fVar47 = *(float *)(lVar24 + 0x2c);
            fVar34 = (float)FUN_07d5378c(*(long *)(lVar24 + 0x20),0);
            lVar24 = *(long *)(unaff_x19 + 0x48);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            uVar12 = *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
            fVar34 = (fVar48 / fVar45) * fVar33 * fVar37 * fVar47 * fVar34;
          }
          fVar45 = 0.0;
          fVar48 = *(float *)(unaff_x22 + 0x300);
          if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
            if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
               (lVar24 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar24 == 0))
            goto LAB_07d72adc;
            FUN_07d53750(&stack0x000011a0,lVar24,0);
            fVar45 = (float)FUN_07d53598(&stack0x000010e0,0);
          }
          fVar33 = (fStack00000000000000b4 - (float)uVar12) - (float)((ulong)uVar12 >> 0x20);
          fVar37 = *(float *)(unaff_x22 + 0x368);
          bVar3 = true;
          if ((fVar37 <= fVar33) && (bVar3 = false, !NAN(fVar37))) {
            bVar3 = fVar37 == -1.0;
          }
          if (!bVar3) {
            fVar33 = fVar37;
          }
          if (ABS(fVar48) + fVar34 * fVar45 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar33) {
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
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
      uVar55 = *(uint *)(unaff_x22 + 0x350);
      *(uint *)(lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) =
           uVar55;
      if ((uVar54 == uVar11) ||
         ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
        lVar24 = *(long *)(unaff_x19 + 0x48);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_07d72b20;
        if (*(int *)(lVar24 + (long)(int)uVar55 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
      }
      else {
        lVar24 = *(long *)(unaff_x19 + 0x48);
        if (lVar24 == 0) goto LAB_07d72adc;
LAB_07d71a94:
        if (*(uint *)(lVar24 + 0x18) <= uVar55) goto LAB_07d72b20;
        *(undefined4 *)(lVar24 + (long)(int)uVar55 * 0x60 + 0x6c) =
             *(undefined4 *)(unaff_x22 + 0x160);
      }
      uVar55 = *unaff_x21;
      if (uVar55 != 0x200b) {
        if (uVar55 == 9) {
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar45 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          bVar4 = FUN_07d617d8(*in_stack_00000148,0);
          fVar33 = *(float *)(unaff_x22 + 0x300);
          cVar19 = *(char *)(unaff_x22 + 0xf4);
          fVar48 = unaff_s14 * fVar45 * (float)bVar4;
          fVar45 = fVar48 * (float)(int)(fVar33 / fVar48);
          if (fVar45 <= fVar33) {
            fVar45 = fVar33 + fVar48;
          }
        }
        else {
          fVar45 = *(float *)(unaff_x22 + 0x2f8);
          if (fVar45 == 0.0) {
            fVar48 = *(float *)(unaff_x22 + 0x300);
            if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
              fVar45 = (float)FUN_07d57ad0(&stack0x00001100,0);
              if (*in_stack_00000148 == 0) goto LAB_07d72adc;
              fVar33 = (float)FUN_07d61798(*in_stack_00000148,0);
              cVar19 = *(char *)(unaff_x22 + 0xf4);
              fVar48 = fVar48 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                                (*(float *)(unaff_x22 + 0x2f4) +
                                unaff_s14 * fVar45 +
                                in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar32 + fVar33)
                                );
              if (cVar19 != '\0') {
                fVar48 = (float)(int)(fVar48 + unaff_s15);
              }
              *(float *)(unaff_x22 + 0x300) = fVar48;
              if (((uVar5 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
              fVar45 = fVar48 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
              goto FUN_07d71c94;
            }
            fVar45 = (float)FUN_07d53598(&stack0x00001110,0);
            fVar34 = *(float *)(unaff_x22 + 0x19b0);
            fVar33 = (float)FUN_07d57ad0(&stack0x00001100,0);
            if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
            fVar37 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
            fVar48 = fVar48 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              unaff_s14 * (fVar45 * fVar34 + fVar33) +
                              in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar32 + fVar37));
          }
          else {
            if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar55 < 0x3b)) &&
               ((1L << ((ulong)uVar55 & 0x3f) & 0x400500000000000U) != 0)) {
              fVar45 = fVar45 * 0.5;
            }
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar48 = *(float *)(unaff_x22 + 0x300);
            fVar33 = (float)FUN_07d61798(*in_stack_00000148,0);
            fVar48 = fVar48 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              (fVar45 - fVar35) + in_stack_000000d8._4_4_ * (fVar32 + fVar33));
          }
          cVar19 = *(char *)(unaff_x22 + 0xf4);
          if (cVar19 != '\0') {
            fVar48 = (float)(int)(fVar48 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar48;
          if (((uVar5 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
          fVar45 = fVar48 + in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
        }
FUN_07d71c94:
        if (cVar19 != '\0') {
          fVar45 = (float)(int)(fVar45 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar45;
      }
LAB_07d71ca8:
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar55 = *unaff_x25;
      uVar21 = (uint)*(undefined8 *)(lVar24 + 0x18);
      if (uVar21 <= uVar55) goto LAB_07d72b20;
      *(undefined4 *)(lVar24 + (long)(int)uVar55 * (long)(int)unaff_w27 + 0x158) =
           *(undefined4 *)(unaff_x22 + 0x300);
      uVar31 = *unaff_x21;
      unaff_s12 = 1.0;
      if ((int)uVar31 < 0xd) {
        if ((uVar31 - 10 < 2) || (uVar31 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
        if ((uVar31 == 0x2d && uVar54 == uVar11) || (uVar55 == uStack000000000000004c))
        goto LAB_07d71d54;
        goto LAB_07d72314;
      }
      if (uVar31 != 0x2028) {
        if (uVar31 != 0xd) goto LAB_07d71d38;
        fVar45 = *(float *)(unaff_x22 + 0x308) + 0.0;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar45 = (float)(int)(fVar45 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar45;
        if (uVar55 != uStack000000000000004c) {
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
          uVar7 = *(undefined4 *)(unaff_x22 + 0x334);
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07d8f610(uVar38,uVar7);
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
      lVar24 = *(long *)(unaff_x19 + 0x48);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar11 = *(uint *)(unaff_x22 + 0x350);
      if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_07d72b20;
      lVar15 = lVar24 + 0x20 + (long)(int)uVar11 * 0x60;
      uVar54 = *(uint *)(unaff_x22 + 0x338);
      *(uint *)(lVar15 + 0x18) = uVar54;
      lVar28 = 0x338;
      if ((int)uVar54 <= *(int *)(unaff_x22 + 0x340)) {
        lVar28 = 0x340;
      }
      uVar31 = *(uint *)(unaff_x22 + lVar28);
      *(uint *)(unaff_x22 + 0x340) = uVar31;
      *(uint *)(lVar15 + 0x1c) = uVar31;
      uVar21 = *(uint *)(unaff_x22 + 0x334);
      *(uint *)(unaff_x22 + 0x33c) = uVar21;
      *(uint *)(lVar15 + 0x20) = uVar21;
      uVar55 = *(uint *)(unaff_x22 + 0x340);
      if ((int)uVar31 <= (int)*(uint *)(unaff_x22 + 0x344)) {
        uVar55 = *(uint *)(unaff_x22 + 0x344);
      }
      *(uint *)(unaff_x22 + 0x344) = uVar55;
      *(uint *)(lVar15 + 0x24) = uVar55;
      lVar28 = *(long *)(unaff_x19 + 0x30);
      uVar22 = uVar55;
      if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
        if (lVar28 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar28 + 0x18) <= uVar21) goto LAB_07d72b20;
        if (*(float *)(lVar28 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x158) != 0.0) {
          uVar31 = uVar54;
          uVar22 = uVar21;
        }
      }
      lVar24 = lVar24 + 0x20 + (long)(int)uVar11 * 0x60;
      *(uint *)(lVar24 + 4) = (uVar21 - uVar54) + 1;
      iVar6 = *(int *)(in_stack_00000068 + 0x60);
      *(int *)(lVar24 + 8) = iVar6;
      *(uint *)(lVar24 + 0xc) = (uVar55 - (uVar54 + iVar6)) + 1;
      if (lVar28 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar28 + 0x18) <= uVar31) goto LAB_07d72b20;
      *(undefined4 *)(lVar24 + 0x50) =
           *(undefined4 *)(lVar28 + (long)(int)uVar31 * (long)(int)unaff_w27 + 0x118);
      *(float *)(lVar24 + 0x54) = fVar33;
      lVar24 = *(long *)(unaff_x19 + 0x48);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar28 = *(long *)(unaff_x19 + 0x30);
      if (lVar28 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_07d72b20;
      fVar34 = fVar34 - fVar48;
      lVar24 = lVar24 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      uVar38 = *(undefined4 *)(lVar28 + (long)(int)uVar22 * (long)(int)unaff_w27 + 0x124);
      *(float *)(lVar24 + 0x5c) = fVar34;
      *(undefined4 *)(lVar24 + 0x58) = uVar38;
      lVar24 = *(long *)(unaff_x19 + 0x48);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar54 = *(uint *)(unaff_x22 + 0x350);
      uVar11 = *(uint *)(lVar24 + 0x18);
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
        if (uVar11 <= uVar54) goto LAB_07d72b20;
        lVar28 = lVar24 + (long)(int)uVar54 * 0x60;
        fVar45 = *(float *)(lVar28 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
      }
      else {
        if (uVar11 <= uVar54) goto LAB_07d72b20;
        lVar15 = *(long *)(unaff_x19 + 0x30);
        if (lVar15 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_07d72b20;
        lVar28 = lVar24 + (long)(int)uVar54 * 0x60;
        fVar45 = *(float *)(lVar15 + (long)(int)uVar22 * (long)(int)unaff_w27 + 0x158);
      }
      *(float *)(lVar28 + 0x48) = fVar45;
      if (uVar11 <= uVar54) goto LAB_07d72b20;
      lVar28 = lVar24 + 0x20 + (long)(int)uVar54 * 0x60;
      *(float *)(lVar28 + 0x40) = in_stack_00000100;
      if (*(int *)(lVar28 + 4) == 1) {
        *(undefined4 *)(lVar24 + 0x20 + (long)(int)uVar54 * 0x60 + 0x4c) =
             *(undefined4 *)(unaff_x22 + 0x160);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar45 = (float)FUN_07d61798(*in_stack_00000148,0);
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar11 = *(uint *)(unaff_x22 + 0x344);
      uVar21 = (uint)*(undefined8 *)(lVar24 + 0x18);
      if (uVar21 <= uVar11) goto LAB_07d72b20;
      uVar54 = *(uint *)(unaff_x22 + 0x350);
      lVar28 = *(long *)(unaff_x19 + 0x48);
      fVar45 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
               (*(float *)(unaff_x22 + 0x2f4) +
               in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar32 + fVar45));
      if (*(char *)(lVar24 + 0x20 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x174) == '\0') {
        if (lVar28 == 0) goto LAB_07d72adc;
        uVar11 = *(uint *)(unaff_x22 + 0x33c);
        if (uVar21 <= uVar11) goto LAB_07d72b20;
      }
      else if (lVar28 == 0) goto LAB_07d72adc;
      bVar3 = *(uint *)(lVar28 + 0x18) <= uVar54;
      if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
        if (bVar3) goto LAB_07d72b20;
        fVar45 = -fVar45;
      }
      else if (bVar3) goto LAB_07d72b20;
      *(float *)(lVar28 + (long)(int)uVar54 * 0x60 + 0x5c) =
           *(float *)(lVar24 + 0x20 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x138) + fVar45;
      if (*(uint *)(lVar28 + 0x18) <= uVar54) goto LAB_07d72b20;
      lVar28 = lVar28 + (long)(int)uVar54 * 0x60;
      *(float *)(lVar28 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
      *(float *)(lVar28 + 0x58) = fVar33;
      *(float *)(lVar28 + 0x4c) = fStack0000000000000048 + (fVar34 - fVar33);
      *(float *)(lVar28 + 0x50) = fVar34;
      uVar31 = *unaff_x21;
      if ((int)uVar31 < 0x2d) {
        if (uVar31 - 10 < 2) {
LAB_07d72208:
          FUN_07d79804();
          uVar5 = *(uint *)(unaff_x22 + 0x334);
          iVar6 = *(int *)(unaff_x22 + 0x350) + 1;
          *(uint *)(unaff_x22 + 0x338) = uVar5 + 1;
          *(int *)(unaff_x22 + 0x350) = iVar6;
          *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
          if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07d72adc;
          if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar6) {
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07d8f790(iVar6);
            uVar5 = *unaff_x25;
          }
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_07d72b20;
          fVar32 = *(float *)(unaff_x22 + 0x2ec);
          fVar45 = *(float *)(lVar24 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x14c);
          if (fVar32 == DAT_015c55ac) {
            if ((*unaff_x21 == 0x2029) || (fVar48 = 0.0, *unaff_x21 == 10)) {
              fVar48 = *(float *)(in_stack_00000140 + 0x94);
            }
            uVar20 = 0;
            fVar32 = fVar45 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                     in_stack_00000020._4_4_ *
                     (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
          }
          else {
            if ((*unaff_x21 == 0x2029) || (fVar48 = 0.0, *unaff_x21 == 10)) {
              fVar48 = *(float *)(in_stack_00000140 + 0x94);
            }
            uVar20 = 1;
          }
          fVar32 = *(float *)(unaff_x22 + 0x2e8) + fVar32 + in_stack_000000d8._4_4_ * (fVar48 + 0.0)
          ;
          bVar3 = *(char *)(unaff_x22 + 0xf4) != '\0';
          *(undefined1 *)(unaff_x22 + 0x2f0) = uVar20;
          *(float *)(unaff_x22 + 0x15b8) = fVar45;
          fVar45 = *(float *)(unaff_x22 + 0x304) + 0.0 + *(float *)(unaff_x22 + 0x308);
          if (bVar3) {
            fVar32 = (float)(int)(fVar32 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x2e8) = fVar32;
          if (bVar3) {
            fVar45 = (float)(int)(fVar45 + unaff_s15);
          }
          *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
          *(float *)(unaff_x22 + 0x300) = fVar45;
          FUN_07d79804();
          FUN_07d79804();
          *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
          in_stack_00000060._4_4_ = 1;
          uStack0000000000000058 = 1;
          unaff_x28 = in_stack_00000168;
          unaff_x29 = in_stack_00000148;
          goto LAB_07d72ac8;
        }
        if (uVar31 == 3) {
          if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
          uVar31 = 3;
          in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
        }
      }
      else if ((uVar31 - 0x2028 < 2) || (uVar31 == 0x2d)) goto LAB_07d72208;
LAB_07d72314:
      uVar11 = *unaff_x25;
      if (uVar21 <= uVar11) goto LAB_07d72b20;
      lVar24 = lVar24 + 0x20;
      if (*(char *)(lVar24 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x174) != '\0') {
        lVar28 = lVar24 + (long)(int)uVar11 * (long)(int)unaff_w27;
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
      if (((iStack00000000000000b0 != 3) && (iStack00000000000000b0 != 0)) ||
         ((*(uint *)(in_stack_00000140 + 100) < 7 &&
          ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) != 0)))) {
        if (((uVar5 & 1) == 0) && (uVar31 != 0x200b)) {
          if (uVar31 == 0x2d) {
            if (0 < (int)uVar11) {
              if (uVar21 <= uVar11 - 1) goto LAB_07d72b20;
              uVar38 = *(undefined4 *)(lVar24 + (ulong)(uVar11 - 1) * (ulong)unaff_w27);
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_066b9610(uVar38,0);
              if ((uVar14 & 1) != 0) {
                uVar31 = *unaff_x21;
                goto LAB_07d72408;
              }
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
          if ((in_stack_00000038._4_4_ & 1) == 0 && *unaff_x21 == 0xad) {
LAB_07d72434:
            FUN_07d79804();
            in_stack_00000060._4_4_ = 1;
          }
          else {
LAB_07d72630:
            in_stack_00000060._4_4_ = 1;
          }
        }
        else {
LAB_07d72410:
          if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
          uVar31 = *unaff_x21;
          if ((int)uVar31 < 0x2007) {
            if (uVar31 == 0x2d) {
              uVar5 = *unaff_x25 - 1;
              if (0 < (int)*unaff_x25) {
                lVar24 = *(long *)(unaff_x19 + 0x30);
                if (lVar24 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar24 + 0x18) <= uVar5) goto LAB_07d72b20;
                uVar38 = *(undefined4 *)(lVar24 + (ulong)uVar5 * (ulong)unaff_w27 + 0x20);
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
              uVar11 = *unaff_x21;
              if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                          0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar14 = FUN_07d901bc(uVar11,0);
              if ((uVar14 & 1) == 0) {
                if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
                   (uVar11 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar11)) {
LAB_07d72418:
                  if ((in_stack_00000060._4_4_ & 1) != 0) {
                    if ((uVar5 & 1) == 0) goto LAB_07d72618;
                    if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                    goto LAB_07d72630;
                  }
                  goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
                }
                lVar24 = *(long *)(unaff_x19 + 0x30);
                if (lVar24 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar24 + 0x18) <= uVar11) goto LAB_07d72b20;
                uVar38 = *(undefined4 *)(lVar24 + (long)(int)uVar11 * (long)(int)unaff_w27 + 0x20);
                if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                            0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar14 = FUN_07d901bc(uVar38,0);
                if ((uVar14 & 1) == 0) goto LAB_07d72418;
                lVar24 = *(long *)(unaff_x19 + 0x30);
                if (lVar24 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar24 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
                if (in_stack_00000018 == 0) goto LAB_07d72adc;
                uVar38 = *(undefined4 *)
                          (lVar24 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
                lVar24 = FUN_07d86e90(in_stack_00000018,0);
                if ((lVar24 == 0) || (lVar24 = FUN_07d98b58(lVar24,0), lVar24 == 0))
                goto LAB_07d72adc;
                uVar5 = FUN_049ddf40(lVar24,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                lVar24 = FUN_07d86e90(in_stack_00000018,0);
                if ((lVar24 == 0) || (lVar24 = FUN_07d98b58(lVar24,0), lVar24 == 0))
                goto LAB_07d72adc;
                uVar11 = FUN_049ddf40(lVar24,uVar38,*(undefined8 *)PTR_DAT_084b5110);
                if (((uVar5 | uVar11) & 1) != 0) goto LAB_07d72940;
                goto LAB_07d72934;
              }
              if (in_stack_00000018 == 0) goto LAB_07d72adc;
            }
            else {
              if ((in_stack_00000018 == 0) ||
                 (lVar24 = FUN_07d86e90(in_stack_00000018,0), lVar24 == 0)) goto LAB_07d72adc;
              if (*(char *)(lVar24 + 0x28) != '\0') goto LAB_07d7268c;
            }
            lVar24 = FUN_07d86e90(in_stack_00000018,0);
            if ((lVar24 == 0) || (lVar24 = FUN_07d98b58(lVar24,0), lVar24 == 0)) goto LAB_07d72adc;
            uVar14 = FUN_049ddf40(lVar24,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
            if ((int)*unaff_x25 < (int)uStack000000000000004c) {
              lVar24 = FUN_07d86e90(in_stack_00000018,0);
              if (lVar24 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              lVar24 = FUN_07d98da0(lVar24,0);
              lVar28 = *(long *)(unaff_x19 + 0x30);
              if (lVar28 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar28 + 0x18) <= *unaff_x25 + 1) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c8();
              }
              if (lVar24 == 0) goto LAB_07d72adc;
              uVar11 = FUN_049ddf40(lVar24,*(undefined4 *)
                                            (lVar28 + (long)(int)(*unaff_x25 + 1) *
                                                      (long)(int)unaff_w27 + 0x20),
                                    *(undefined8 *)PTR_DAT_084b5110);
              if ((uVar14 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
              in_stack_00000060._4_4_ = uVar11 & in_stack_00000060._4_4_;
              uVar5 = in_stack_00000060._4_4_ & uVar5;
              if (((in_stack_00000060._4_4_ & 1) != 0) || (((uVar11 ^ 1) & 1) != 0))
              goto LAB_07d728a8;
              in_stack_00000060._4_4_ = 0;
            }
            else {
              uVar11 = 0;
              if ((uVar14 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
              if ((in_stack_00000060._4_4_ & uVar8 == uVar9) == 0) goto LAB_07d72940;
              in_stack_00000060._4_4_ = 1;
LAB_07d728a8:
              FUN_07d79804();
            }
            if ((uVar5 & 1) == 0) goto LAB_07d72940;
            goto LAB_07d72934;
          }
          in_stack_00000060._4_4_ = 0;
          *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
        }
LAB_07d72934:
        FUN_07d79804();
      }
LAB_07d72940:
      FUN_07d79804();
      *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
      unaff_x28 = in_stack_00000168;
      unaff_x29 = in_stack_00000148;
      goto LAB_07d72ac8;
    }
    in_w9 = 0x101;
  } while( true );
}


