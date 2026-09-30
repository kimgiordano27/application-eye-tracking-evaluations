/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.EntryPreProcessor$$ClearReferences
ENTRY_POINT: 07d72230
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


void UnityEngine_UIElements_UIR_EntryPreProcessor__ClearReferences(void)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined1 *puVar19;
  uint in_w3;
  char cVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  int in_w8;
  float *pfVar24;
  long lVar25;
  float *pfVar26;
  int *piVar27;
  long *plVar28;
  long lVar29;
  long unaff_x19;
  int unaff_w20;
  long *plVar30;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar31;
  long unaff_x23;
  uint uVar32;
  uint *unaff_x25;
  uint unaff_w27;
  char *unaff_x28;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float unaff_s12;
  float fVar53;
  float fVar54;
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
  uint uVar55;
  uint uVar56;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
code_r0x07d72230:
  *(int *)(unaff_x22 + 0x338) = in_w8;
  *(int *)(unaff_x22 + 0x350) = unaff_w20;
  *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= unaff_w20) {
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      FUN_07d8f790(unaff_w20);
      in_w3 = *unaff_x25;
    }
    lVar25 = *(long *)(unaff_x19 + 0x30);
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= in_w3) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      fVar43 = *(float *)(unaff_x22 + 0x2ec);
      fVar40 = *(float *)(lVar25 + (long)(int)in_w3 * (long)(int)unaff_w27 + 0x14c);
      if (fVar43 == DAT_015c55ac) {
        if ((*unaff_x21 == 0x2029) || (fVar47 = 0.0, *unaff_x21 == 10)) {
          fVar47 = *(float *)(unaff_x23 + 0x94);
        }
        uVar21 = 0;
        fVar43 = fVar40 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                 in_stack_00000020._4_4_ * (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc))
        ;
      }
      else {
        if ((*unaff_x21 == 0x2029) || (fVar47 = 0.0, *unaff_x21 == 10)) {
          fVar47 = *(float *)(unaff_x23 + 0x94);
        }
        uVar21 = 1;
      }
      fVar43 = *(float *)(unaff_x22 + 0x2e8) +
               fVar43 + in_stack_000000d8._4_4_ * (fVar47 + unaff_s13);
      bVar4 = *(char *)(unaff_x22 + 0xf4) != '\0';
      *(undefined1 *)(unaff_x22 + 0x2f0) = uVar21;
      *(float *)(unaff_x22 + 0x15b8) = fVar40;
      fVar40 = *(float *)(unaff_x22 + 0x304) + unaff_s13 + *(float *)(unaff_x22 + 0x308);
      if (bVar4) {
        fVar43 = (float)(int)(fVar43 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x2e8) = fVar43;
      if (bVar4) {
        fVar40 = (float)(int)(fVar40 + unaff_s15);
      }
      *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
      *(float *)(unaff_x22 + 0x300) = fVar40;
      FUN_07d79804();
      FUN_07d79804();
      *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
      bVar1 = 1;
      bVar4 = true;
LAB_07d72ac8:
      do {
        lVar25 = *(long *)(unaff_x22 + 0x20);
        in_stack_0000112c = in_stack_0000112c + 1;
        if (lVar25 == 0) goto LAB_07d72adc;
        if ((int)*(uint *)(lVar25 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
          FUN_07d797b8();
          return;
        }
        if (*(uint *)(lVar25 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
        uVar7 = *(uint *)(lVar25 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
        if (uVar7 == 0) goto LAB_07d72ae0;
        *unaff_x21 = uVar7;
        if (5 < in_stack_00000108) {
          uVar13 = FUN_0676d8dc();
          uVar14 = FUN_0674e2a4(&stack0x0000112c,0);
          uVar13 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,
                                uVar13,*(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar14,
                                0);
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
          }
          FUN_07c4fb40(uVar13,0);
          uVar7 = *unaff_x21;
          in_stack_00001190 = CONCAT44(3,*unaff_x25);
        }
      } while (uVar7 == 0x1a);
      if ((uVar7 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
        unaff_x28[0] = '\x01';
        unaff_x28[1] = '\x01';
        uVar15 = FUN_07d74ca8();
        if (((uVar15 & 1) != 0) && (in_stack_0000112c = in_stack_000010fc, *unaff_x28 == '\x01'))
        goto LAB_07d72ac8;
      }
      else {
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *unaff_x28 = *(char *)(lVar25 + 0x28);
        *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar25 + 0x58);
        *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar25 + 0x40);
        thunk_FUN_03afed3c(in_stack_00000148);
      }
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      uVar12 = *(uint *)(unaff_x22 + 0x334);
      uVar7 = *(uint *)(lVar25 + 0x18);
      if (uVar7 <= uVar12) goto LAB_07d72b20;
      lVar29 = lVar25 + 0x20;
      uVar55 = (uint)in_stack_00001190;
      uVar38 = *(undefined4 *)(unaff_x22 + 0x78);
      cVar20 = *(char *)(lVar29 + (long)(int)uVar12 * (long)(int)unaff_w27 + 0x3c);
      unaff_x28[1] = '\0';
      if (uVar55 == uVar12) {
        uVar10 = (uint)((ulong)in_stack_00001190 >> 0x20);
        *unaff_x21 = uVar10;
        *unaff_x28 = '\x01';
        if (uVar10 != 0x2026) {
          if (uVar10 == 3) {
            if (*in_stack_00000148 != 0) {
              uVar7 = *unaff_x25;
              lVar16 = FUN_07d61598(*in_stack_00000148,0);
              if (lVar16 != 0) {
                uVar13 = FUN_060344a4(lVar16,3,*(undefined8 *)
                                                System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                                     );
                if (uVar7 < *(uint *)(lVar25 + 0x18)) {
                  *(undefined8 *)(lVar29 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x10) = uVar13;
                  thunk_FUN_03afed3c();
                  *(undefined1 *)(unaff_x22 + 0x4d) = 1;
                  unaff_x28 = in_stack_00000168;
                  goto LAB_07d6efec;
                }
                goto LAB_07d72b20;
              }
            }
            goto LAB_07d72adc;
          }
          goto LAB_07d6efec;
        }
        if (uVar7 <= *unaff_x25) goto LAB_07d72b20;
        *(undefined8 *)(lVar29 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
             *(undefined8 *)(unaff_x22 + 0x19f8);
        thunk_FUN_03afed3c();
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(undefined8 *)(lVar25 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
        *(undefined1 *)(lVar25 + 0x28) = 1;
        thunk_FUN_03afed3c();
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *(undefined8 *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
             *(undefined8 *)(unaff_x22 + 0x1a08);
        thunk_FUN_03afed3c();
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *(undefined4 *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
             *(undefined4 *)(unaff_x22 + 0x1a10);
        lVar25 = *(long *)(unaff_x22 + 0x15c0);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
        *(int *)(lVar25 + 0x54) = *(int *)(lVar25 + 0x54) + 1;
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
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
        lVar25 = lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27;
        *(undefined1 *)(lVar25 + 0x194) = 0;
        *(undefined4 *)(lVar25 + 0x20) = 0x200b;
        *(undefined4 *)(lVar25 + 100) = 0;
        *unaff_x25 = uVar7 + 1;
        goto LAB_07d72ac8;
      }
      cVar2 = *unaff_x28;
      if (cVar2 == '\x01') {
        uVar7 = *(uint *)(unaff_x22 + 300);
        if ((uVar7 >> 4 & 1) == 0) {
          if ((uVar7 >> 3 & 1) == 0) {
            fVar40 = 1.0;
            if ((uVar7 >> 5 & 1) != 0) {
              uVar7 = *unaff_x21;
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar15 = FUN_066bbc7c(uVar7,0);
              fVar40 = 1.0;
              if ((uVar15 & 1) != 0) {
                uVar7 = *unaff_x21;
                if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar7 = FUN_066bbf04(uVar7,0);
                fVar40 = fStack0000000000000010;
                goto LAB_07d6f260;
              }
            }
          }
          else {
            uVar7 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar15 = FUN_066bbbdc(uVar7,0);
            fVar40 = 1.0;
            if ((uVar15 & 1) != 0) {
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
          uVar15 = FUN_066bbc7c(uVar7,0);
          fVar40 = 1.0;
          if ((uVar15 & 1) != 0) {
            uVar7 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar7 = FUN_066bbf04(uVar7,0);
LAB_07d6f25c:
            fVar40 = 1.0;
LAB_07d6f260:
            *unaff_x21 = uVar7 & 0xffff;
          }
        }
        cVar2 = *unaff_x28;
      }
      else {
        fVar40 = 1.0;
      }
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (cVar2 == '\x01') {
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *(undefined8 *)(unaff_x22 + 0x1598) =
             *(undefined8 *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
        thunk_FUN_03afed3c(unaff_x22 + 0x1598);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *in_stack_00000148 = *(long *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40)
        ;
        thunk_FUN_03afed3c(in_stack_00000148);
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        *in_stack_00000090 = *(long *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50)
        ;
        thunk_FUN_03afed3c();
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        uVar10 = *unaff_x25;
        uVar7 = *(uint *)(lVar25 + 0x18);
        if (uVar7 <= uVar10) goto LAB_07d72b20;
        *(undefined4 *)(unaff_x22 + 0x78) =
             *(undefined4 *)(lVar25 + 0x20 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x38);
        if (uVar55 == uVar12) {
          lVar29 = *(long *)(unaff_x22 + 0x20);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
          if ((*(int *)(lVar29 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
             (uVar10 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
          if (uVar7 <= uVar10 - 1) goto LAB_07d72b20;
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar47 = *(float *)(lVar25 + 0x20 + (long)(int)(uVar10 - 1) * (long)(int)unaff_w27 + 0x40)
          ;
          fVar43 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar33 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
          fVar33 = ((fVar40 * fVar47) / fVar43) * fVar33;
LAB_07d6f900:
          fStack00000000000000f4 = 0.0;
          fStack00000000000000f8 = 0.0;
          if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
        }
        else {
LAB_07d6f408:
          if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
          fVar47 = *(float *)(unaff_x22 + 0xf8);
          fVar43 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar33 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
          fVar33 = ((fVar40 * fVar47) / fVar43) * fVar33;
          if (uVar55 == uVar12) goto LAB_07d6f900;
LAB_07d6f918:
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
        }
        lVar25 = *(long *)(unaff_x22 + 0x1598);
        if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_07d72adc;
        fVar43 = *(float *)(unaff_x22 + 0xf0);
        fVar47 = *(float *)(lVar25 + 0x2c);
        fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar25 + 0x20),0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar34 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar35 = *(float *)(unaff_x22 + 0xf0);
        fVar37 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
        lVar25 = *(long *)(unaff_x19 + 0x30);
        fVar37 = fVar33 * fVar34 * fVar35 * fVar37;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar37 = (float)(int)(fVar37 + unaff_s15);
        }
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        lVar29 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
        *(undefined1 *)(lVar29 + 0x28) = 1;
        fStack00000000000000e8 = fVar33 * fVar43 * fVar47 * fStack00000000000000e8;
        *(float *)(lVar29 + 0x160) = fStack00000000000000e8;
        in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
        unaff_s12 = 1.0;
        unaff_s13 = 0.0;
        uVar7 = *unaff_x21;
        fVar43 = 0.0;
        if (uVar7 != 3 && uVar7 != 0xad) {
          fVar43 = fStack00000000000000e8;
        }
      }
      else {
        if (cVar2 == '\x02') {
          if (lVar25 != 0) {
            if (*unaff_x25 < *(uint *)(lVar25 + 0x18)) {
              plVar30 = *(long **)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
              if (plVar30 != (long *)0x0) {
                bVar5 = *(byte *)(*(long *)
                                   Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                                 + 0x130);
                if ((*(byte *)(*plVar30 + 0x130) < bVar5) ||
                   (*(long *)(*(long *)(*plVar30 + 200) + (ulong)bVar5 * 8 + -8) !=
                    *(long *)
                     Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo))
                {
                    /* WARNING: Subroutine does not return */
                  FUN_03a8ad40(plVar30);
                }
                plVar17 = (long *)FUN_07d8466c(plVar30,0);
                if (plVar17 == (long *)0x0) {
                  plVar17 = (long *)0x0;
                  *in_stack_000000e0 = 0;
                }
                else {
                  lVar25 = *(long *)
                            Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo
                  ;
                  bVar5 = *(byte *)(lVar25 + 0x130);
                  if (*(byte *)(*plVar17 + 0x130) < bVar5) {
                    plVar28 = (long *)0x0;
                  }
                  else {
                    plVar28 = plVar17;
                    if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar5 * 8 + -8) != lVar25) {
                      plVar28 = (long *)0x0;
                    }
                  }
                  *in_stack_000000e0 = (long)plVar28;
                  if (*(byte *)(*plVar17 + 0x130) < bVar5) {
                    plVar17 = (long *)0x0;
                  }
                  else if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar5 * 8 + -8) != lVar25) {
                    plVar17 = (long *)0x0;
                  }
                }
                thunk_FUN_03afed3c(in_stack_000000e0,plVar17);
                iVar8 = FUN_07d85970(plVar30,0);
                *(int *)(unaff_x22 + 0x158c) = iVar8;
                if (*unaff_x21 == 0x3c) {
                  *unaff_x21 = iVar8 + 0xe000;
                }
                else {
                  uVar9 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000
                                       ,0);
                  *(undefined4 *)(unaff_x22 + 0x1590) = uVar9;
                }
                if (*(long *)(unaff_x22 + 0x68) != 0) {
                  fVar47 = *(float *)(unaff_x22 + 0xf8);
                  FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
                  memcpy(&stack0x00001130,&stack0x000011a0,0x60);
                  fVar43 = (float)FUN_07d5328c(&stack0x00001130,0);
                  if (*in_stack_00000148 != 0) {
                    FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
                    memcpy(&stack0x00001130,&stack0x00000170,0x60);
                    fVar33 = (float)FUN_07d53294(&stack0x00001130,0);
                    if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                    fVar33 = (fVar47 / fVar43) * fVar33;
                    fVar43 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                    fVar47 = *(float *)(unaff_x22 + 0xf8);
                    if (fVar43 <= 0.0) {
                      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                      fVar43 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
                      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                      fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                      fVar34 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                      if (plVar30[4] == 0) goto LAB_07d72adc;
                      FUN_07d53750(&stack0x000011a0,plVar30[4],0);
                      fVar35 = (float)FUN_07d53580(&stack0x000010e0,0);
                      if (plVar30[4] == 0) goto LAB_07d72adc;
                      fVar49 = *(float *)((long)plVar30 + 0x2c);
                      fVar36 = (float)FUN_07d5378c(plVar30[4],0);
                      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                      fVar53 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
                      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                      fVar50 = *(float *)(unaff_x22 + 0xf0);
                      fVar37 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                      fStack00000000000000f4 = (fVar47 / fVar43) * fStack00000000000000f4;
                      fStack00000000000000e8 =
                           fStack00000000000000f4 * (fVar34 / fVar35) * fVar49 * fVar36;
                      fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                      fVar37 = fVar33 * fVar53 * fVar50 * fVar37;
                      fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                      fVar43 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                      fStack00000000000000f4 = fStack00000000000000f4 * fVar43;
                    }
                    else {
                      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                      fVar43 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                      fVar34 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                      if (plVar30[4] == 0) goto LAB_07d72adc;
                      fVar49 = *(float *)((long)plVar30 + 0x2c);
                      fVar35 = (float)FUN_07d5378c(plVar30[4],0);
                      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                      fVar36 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                      if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                      fVar53 = *(float *)(unaff_x22 + 0xf0);
                      fVar37 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                      if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                      fVar37 = fVar33 * fVar36 * fVar53 * fVar37;
                      fStack00000000000000e8 = (fVar47 / fVar43) * fVar34 * fVar49 * fVar35;
                      fStack00000000000000f4 =
                           (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0);
                      unaff_x28 = in_stack_00000168;
                    }
                    *(long **)(unaff_x22 + 0x1598) = plVar30;
                    thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar30);
                    lVar25 = *(long *)(unaff_x19 + 0x30);
                    if (lVar25 != 0) {
                      if (*unaff_x25 < *(uint *)(lVar25 + 0x18)) {
                        lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
                        *(long *)(lVar25 + 0x48) = *in_stack_000000e0;
                        *(undefined1 *)(lVar25 + 0x28) = 2;
                        *(float *)(lVar25 + 0x160) = fStack00000000000000e8;
                        thunk_FUN_03afed3c();
                        lVar25 = *(long *)(unaff_x19 + 0x30);
                        if (lVar25 != 0) {
                          if (*unaff_x25 < *(uint *)(lVar25 + 0x18)) {
                            *(long *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40)
                                 = *in_stack_00000148;
                            thunk_FUN_03afed3c();
                            lVar25 = *(long *)(unaff_x19 + 0x30);
                            if (lVar25 != 0) {
                              if (*unaff_x25 < *(uint *)(lVar25 + 0x18)) {
                                *(undefined4 *)
                                 (lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
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
        fVar43 = 0.0;
        if (uVar7 != 3 && uVar7 != 0xad) {
          fVar43 = unaff_s14;
        }
        fVar37 = 0.0;
        fStack00000000000000f4 = 0.0;
        fStack00000000000000f8 = 0.0;
        fStack00000000000000e8 = unaff_s14;
        if (lVar25 == 0) goto LAB_07d72adc;
      }
      unaff_s14 = fVar43;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(uint *)(lVar25 + 0x20) = uVar7;
      *(undefined4 *)(lVar25 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
      *(undefined4 *)(lVar25 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
           *(undefined4 *)(unaff_x22 + 0x1b8);
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
           *(undefined4 *)(unaff_x22 + 0x1bc);
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      auVar42 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
      *(undefined4 *)(lVar25 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
      *(long *)(lVar25 + 0x184) = auVar42._8_8_;
      *(long *)(lVar25 + 0x17c) = auVar42._0_8_;
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      uVar7 = *(uint *)(unaff_x22 + 0x334);
      uVar10 = *(uint *)(lVar25 + 0x18);
      if (uVar10 <= uVar7) goto LAB_07d72b20;
      lVar29 = lVar25 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27;
      uVar56 = *(uint *)(unaff_x22 + 300);
      *(uint *)(lVar29 + 0x170) = uVar56;
      if (*(int *)(unaff_x22 + 0x13c) == 700) {
        *(uint *)(lVar29 + 0x170) = uVar56 | 1;
        uVar7 = *unaff_x25;
      }
      if (uVar10 <= uVar7) goto LAB_07d72b20;
      lVar25 = *(long *)(lVar25 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x18);
      if (lVar25 == 0) {
        if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
           (lVar25 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar25 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar25,0);
      }
      else {
        FUN_07d53750(&stack0x00000510,lVar25,0);
      }
      uVar7 = *unaff_x21;
      if (uVar7 >> 0x10 == 0) {
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        bVar5 = FUN_066b9610(uVar7,0);
      }
      else {
        bVar5 = 0;
      }
      fVar43 = *(float *)(in_stack_00000140 + 0x8c);
      if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*unaff_x28 == '\x01')) {
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        uVar7 = *unaff_x25;
        uVar10 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
        if ((int)uVar7 < (int)uStack000000000000004c) {
          lVar25 = *(long *)(unaff_x19 + 0x30);
          if (lVar25 == 0) goto LAB_07d72adc;
          uVar7 = uVar7 + 1;
          if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
          if (*(char *)(lVar25 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 8) == '\x01') {
            lVar25 = *(long *)(lVar25 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x10);
            if ((((lVar25 == 0) || (*in_stack_00000148 == 0)) ||
                (lVar29 = *(long *)(*in_stack_00000148 + 0x170), lVar29 == 0)) ||
               (lVar29 = *(long *)(lVar29 + 0x40), lVar29 == 0)) goto LAB_07d72adc;
            uVar15 = FUN_05ffa6e0(lVar29,uVar10 | *(int *)(lVar25 + 0x28) << 0x10,&stack0x000010b0,
                                  *(undefined8 *)
                                   Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
            if ((uVar15 & 1) != 0) {
              FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
              FUN_07d57c94(&stack0x00001090,0);
              uVar15 = FUN_07d57e7c(&stack0x000010b0,0);
              if ((uVar15 & 0x100) != 0) {
                fVar43 = unaff_s13;
              }
            }
          }
          uVar7 = *unaff_x25;
        }
        uVar56 = uVar7 - 1;
        if (0 < (int)uVar7) {
          lVar25 = *(long *)(unaff_x19 + 0x30);
          if (lVar25 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar25 + 0x18) <= uVar56) goto LAB_07d72b20;
          lVar29 = *(long *)(lVar25 + 0x20 + (ulong)uVar56 * (ulong)unaff_w27 + 0x10);
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(char *)(lVar25 + 0x20 + (ulong)uVar56 * (ulong)unaff_w27 + 8) == '\x01') {
            if (((*in_stack_00000148 == 0) ||
                (lVar25 = *(long *)(*in_stack_00000148 + 0x170), lVar25 == 0)) ||
               (lVar25 = *(long *)(lVar25 + 0x40), lVar25 == 0)) goto LAB_07d72adc;
            uVar15 = FUN_05ffa6e0(lVar25,*(uint *)(lVar29 + 0x28) | uVar10 << 0x10,&stack0x000010b0,
                                  *(undefined8 *)
                                   Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
            if ((uVar15 & 1) != 0) {
              FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
              FUN_07d57c94(&stack0x00001090,0);
              FUN_07d57af4(0);
              uVar15 = FUN_07d57e7c(&stack0x000010b0,0);
              unaff_s15 = in_stack_000000c0._4_4_;
              if ((uVar15 & 0x100) != 0) {
                fVar43 = unaff_s13;
              }
            }
          }
        }
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        uVar7 = *unaff_x25;
        uVar38 = FUN_07d57ad0(&stack0x00001100,0);
        if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
        *(undefined4 *)(lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x154) = uVar38;
      }
      uVar7 = *unaff_x21;
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      bVar6 = FUN_07d8fcc4(uVar7,0);
      uVar7 = *unaff_x25;
      uVar15 = (ulong)uVar7;
      if ((bVar6 & 1) == 0) {
        if (0 < (int)uVar7) {
          if ((((in_stack_00000060 & 1) == 0) ||
              (uVar10 = *(uint *)(unaff_x22 + 0x19cc), uVar10 == 0x80000000)) ||
             (uVar10 != uVar7 - 1)) {
            if ((_iStack0000000000000028 & 0x100000000) == 0) {
              bVar3 = false;
            }
            else {
              lVar25 = uVar15 * unaff_w27 + 0x144;
              uVar31 = uVar15;
              do {
                uVar31 = uVar31 - 1;
                iVar8 = (int)uVar15;
                uVar7 = iVar8 - 1;
                uVar15 = (ulong)uVar7;
                if ((iVar8 < 1) || (uVar31 == *(uint *)(unaff_x22 + 0x19cc))) {
                  bVar3 = false;
                  goto LAB_07d71064;
                }
                lVar29 = *(long *)(unaff_x19 + 0x30);
                if (lVar29 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar29 + 0x18) <= uVar31) goto LAB_07d72b20;
                lVar29 = *(long *)(lVar29 + lVar25 + -0x28c);
                if ((lVar29 == 0) || (lVar29 = FUN_07d88988(lVar29,0), lVar29 == 0))
                goto LAB_07d72adc;
                uVar10 = FUN_07d53740(lVar29,0);
                if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
                iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
                if (((*in_stack_00000148 == 0) ||
                    (lVar29 = FUN_07d61740(*in_stack_00000148,0), lVar29 == 0)) ||
                   (*(long *)(lVar29 + 0x50) == 0)) goto LAB_07d72adc;
                uVar18 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                                   (*(long *)(lVar29 + 0x50),uVar10 | iVar8 << 0x10,&stack0x00001050
                                    ,*(undefined8 *)
                                      UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
                lVar25 = lVar25 + -0x178;
                unaff_x28 = in_stack_00000168;
              } while ((uVar18 & 1) == 0);
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
              fVar43 = 0.0;
              bVar3 = true;
            }
LAB_07d71064:
            if ((in_stack_00000060 & 1) != 0) {
              uVar7 = *(uint *)(unaff_x22 + 0x19cc);
              if (uVar7 == 0x80000000) {
                bVar3 = true;
              }
              if (!bVar3) {
                lVar25 = *(long *)(unaff_x19 + 0x30);
                if (lVar25 == 0) goto LAB_07d72adc;
                if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
                lVar25 = *(long *)(lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x30);
                if ((lVar25 == 0) || (lVar25 = FUN_07d88988(lVar25,0), lVar25 == 0))
                goto LAB_07d72adc;
                uVar7 = FUN_07d53740(lVar25,0);
                if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
                iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
                if (((*in_stack_00000148 == 0) ||
                    (lVar25 = FUN_07d61740(*in_stack_00000148,0), lVar25 == 0)) ||
                   (*(long *)(lVar25 + 0x48) == 0)) goto LAB_07d72adc;
                uVar15 = FUN_06008730(*(long *)(lVar25 + 0x48),uVar7 | iVar8 << 0x10,
                                      &stack0x00001038,
                                      *(undefined8 *)
                                       UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo)
                ;
                unaff_x28 = in_stack_00000168;
                if ((uVar15 & 1) != 0) {
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    if (*(uint *)(unaff_x22 + 0x19cc) <
                        *(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18)) {
                      FUN_07d58088(&stack0x00001038,0);
                      UnityEngine_UIElements_VisualElementAsset__get_stylesheetPaths
                                (&stack0x00001070,0);
                      FUN_07d580a8(&stack0x00001038,0);
                      FUN_07d58058(&stack0x00001068,0);
                      FUN_07d57ab8(&stack0x00001100,0);
                      FUN_07d58088(&stack0x00001038,0);
                      FUN_07d58048(&stack0x00001070,0);
                      puVar19 = &stack0x00001038;
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
            lVar25 = *(long *)(unaff_x19 + 0x30);
            if (lVar25 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar25 + 0x18) <= uVar10) goto LAB_07d72b20;
            lVar25 = *(long *)(lVar25 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x30);
            if ((lVar25 == 0) || (lVar25 = FUN_07d88988(lVar25,0), lVar25 == 0)) goto LAB_07d72adc;
            uVar7 = FUN_07d53740(lVar25,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar25 = FUN_07d61740(*in_stack_00000148,0), lVar25 == 0)) ||
               (*(long *)(lVar25 + 0x48) == 0)) goto LAB_07d72adc;
            uVar15 = FUN_06008730(*(long *)(lVar25 + 0x48),uVar7 | iVar8 << 0x10,&stack0x00001078,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            unaff_x28 = in_stack_00000168;
            if ((uVar15 & 1) != 0) {
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
              puVar19 = &stack0x00001078;
LAB_07d711ec:
              FUN_07d580a8(puVar19,0);
              FUN_07d58068(&stack0x00001068,0);
              FUN_07d57ac8(&stack0x00001100,0);
              fVar43 = 0.0;
              unaff_x28 = in_stack_00000168;
            }
          }
        }
      }
      else {
        *(uint *)(unaff_x22 + 0x19cc) = uVar7;
      }
      fVar47 = (float)FUN_07d57ac0(&stack0x00001100,0);
      fVar33 = (float)FUN_07d57ac0(&stack0x00001100,0);
      if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
        fVar34 = *(float *)(unaff_x22 + 0x300);
        fVar35 = (float)FUN_07d53598(&stack0x00001110,0);
        fVar34 = fVar34 - unaff_s14 * fVar35 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4));
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar34 = (float)(int)(fVar34 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar34;
        if (((bVar5 & 1) != 0) || (*unaff_x21 == 0x200b)) {
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
        uVar7 = *unaff_x21;
        if (uVar7 != 0x200b) {
          if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar7)) ||
             (fVar35 = 0.25, (1L << ((ulong)uVar7 & 0x3f) & 0x400500000000000U) == 0)) {
            fVar35 = 0.5;
          }
          fVar49 = (float)FUN_07d53578(&stack0x00001110,0);
          fVar36 = (float)FUN_07d53588(&stack0x00001110,0);
          fVar35 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                   (fVar34 * fVar35 - unaff_s14 * (fVar49 * 0.5 + fVar36));
          fVar34 = fVar35 + *(float *)(unaff_x22 + 0x300);
          if (*(char *)(unaff_x22 + 0xf4) != '\0') {
            fVar34 = (float)(int)(fVar34 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar34;
        }
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      iVar8 = FUN_07d616d4(*in_stack_00000148,0);
      if (iVar8 == 0x1015) {
        bVar3 = false;
      }
      else {
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar8 = FUN_07d616d4(*in_stack_00000148,0);
        bVar3 = iVar8 != 0x11014;
      }
      if ((cVar20 == '\0') && (*unaff_x28 == '\x01')) {
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
        if ((*(byte *)(lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
        goto LAB_07d701e4;
        if (bVar3) {
          if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            iVar8 = FUN_07d616c4(*in_stack_00000148,0);
            fVar49 = (float)(iVar8 + 1);
          }
          else {
            lVar25 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar25 == 0) goto LAB_07d72adc;
            uVar15 = thunk_FUN_07c662cc(lVar25,*(undefined4 *)
                                                (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
            unaff_x28 = in_stack_00000168;
            if ((uVar15 & 1) == 0) goto LAB_07d70594;
            lVar25 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar25 == 0) goto LAB_07d72adc;
            fVar49 = (float)thunk_FUN_07c69050(lVar25,*(undefined4 *)
                                                       (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          }
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar34 = (float)FUN_07d617a8(*in_stack_00000148,0);
          fVar34 = fVar49 * fVar34 * 0.25;
          if (fVar49 < in_stack_00000138._4_4_ + fVar34) {
            in_stack_00000138._4_4_ = fVar49 - fVar34;
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
        if (bVar3) {
          if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70290:
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            iVar8 = FUN_07d616c4(*in_stack_00000148,0);
            fVar49 = (float)(iVar8 + 1);
          }
          else {
            lVar25 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar25 == 0) goto LAB_07d72adc;
            uVar15 = thunk_FUN_07c662cc(lVar25,*(undefined4 *)
                                                (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
            unaff_x28 = in_stack_00000168;
            if ((uVar15 & 1) == 0) goto LAB_07d70290;
            lVar25 = *in_stack_00000090;
            if (*(int *)(*(long *)
                          UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                        0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            if (lVar25 == 0) goto LAB_07d72adc;
            fVar49 = (float)thunk_FUN_07c69050(lVar25,*(undefined4 *)
                                                       (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
          }
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar34 = fVar49 * *(float *)(*in_stack_00000148 + 400) * 0.25;
          if (fVar49 < in_stack_00000138._4_4_ + fVar34) {
            in_stack_00000138._4_4_ = fVar49 - fVar34;
          }
        }
        else {
          fVar34 = 0.0;
        }
      }
      fVar53 = *(float *)(unaff_x22 + 0x300);
      fVar49 = (float)FUN_07d53588(&stack0x00001110,0);
      fVar50 = *(float *)(unaff_x22 + 0x19b0);
      fVar36 = (float)FUN_07d57ab0(&stack0x00001100,0);
      fVar53 = fVar53 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                        unaff_s14 *
                        (fVar36 + ((fVar49 * fVar50 - in_stack_00000138._4_4_) - fVar34));
      fVar49 = (float)FUN_07d53590(&stack0x00001110,0);
      fVar36 = (float)FUN_07d57ac0(&stack0x00001100,0);
      fVar49 = unaff_s14 * (in_stack_00000138._4_4_ + fVar49 + fVar36);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar49 = (float)(int)(fVar49 + unaff_s15);
      }
      fStack0000000000000150 =
           *(float *)(unaff_x22 + 0x188) + ((fVar37 + fVar49) - *(float *)(unaff_x22 + 0x2e8));
      fVar49 = (float)FUN_07d53580(&stack0x00001110,0);
      fVar50 = fStack0000000000000150 -
               unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar49);
      fVar49 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar49 = fVar53 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                        unaff_s14 *
                        (fVar34 + fVar34 +
                        in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                        fVar49 * *(float *)(unaff_x22 + 0x19b0));
      fVar51 = fVar49;
      fVar36 = fVar53;
      if (((cVar20 == '\0') && (*unaff_x28 == '\x01')) &&
         ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0)) {
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        iVar8 = *(int *)(unaff_x22 + 0x19ac);
        fVar36 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar39 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar52 = *(float *)(unaff_x22 + 0xf0);
        fVar54 = *(float *)(unaff_x22 + 0x188);
        fVar51 = (float)iVar8 * fStack0000000000000054;
        fVar48 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
        fVar48 = fVar48 * fVar52 * (fVar36 - (fVar39 + fVar54)) * 0.5;
        fVar36 = (float)FUN_07d53590(&stack0x00001110,0);
        fVar54 = fVar51 * unaff_s14 * ((fVar34 + in_stack_00000138._4_4_ + fVar36) - fVar48);
        fVar39 = (float)FUN_07d53590(&stack0x00001110,0);
        fVar52 = (float)FUN_07d53580(&stack0x00001110,0);
        fStack0000000000000150 = fStack0000000000000150 + 0.0;
        fVar36 = fVar53 + fVar54;
        fVar50 = fVar50 + 0.0;
        fVar51 = fVar51 * unaff_s14 *
                          ((((fVar39 - fVar52) - in_stack_00000138._4_4_) - fVar34) - fVar48);
        fVar53 = fVar53 + fVar51;
        fVar51 = fVar49 + fVar51;
        unaff_s15 = in_stack_000000c0._4_4_;
        fVar49 = fVar49 + fVar54;
      }
      uVar14 = *in_stack_000000c8;
      uVar13 = in_stack_000000c8[1];
      if (DAT_08974d8a == '\0') {
        FUN_03a8a718(PTR_DAT_08486860);
        DAT_08974d8a = '\x01';
      }
      uVar41 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
      uVar44 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
      if (DAT_015c5bb4 <
          (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar44 >> 0x20) +
          (float)uVar13 * (float)uVar44 +
          (float)uVar14 * (float)uVar41 +
          (float)((ulong)uVar14 >> 0x20) * (float)((ulong)uVar41 >> 0x20)) {
        fVar34 = 0.0;
        auVar42._4_12_ = SUB1612(ZEXT816(0),4);
        auVar42._0_4_ = fVar50;
        uVar14 = auVar42._0_8_;
        uVar15 = (ulong)(uint)fStack0000000000000150;
        uVar13 = uVar14;
      }
      else {
        FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                     *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                     *(undefined4 *)(unaff_x22 + 0x19c8),0);
        fVar51 = (fVar49 + fVar53) * 0.5;
        fVar48 = (fVar50 + fStack0000000000000150) * 0.5;
        fVar34 = 0.0;
        auVar42 = ZEXT416((uint)(fStack0000000000000150 - fVar48));
        fVar36 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar36 = fVar51 + fVar36;
        fVar49 = 0.0;
        uVar15 = CONCAT44(fVar34 + 0.0,fVar48 + auVar42._0_4_);
        auVar42 = ZEXT416((uint)(fVar50 - fVar48));
        fVar53 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar53 = fVar51 + fVar53;
        fVar34 = 0.0;
        uVar14 = CONCAT44(fVar49 + 0.0,fVar48 + auVar42._0_4_);
        auVar42 = ZEXT416((uint)(fStack0000000000000150 - fVar48));
        fVar49 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar49 = fVar51 + fVar49;
        fVar39 = 0.0;
        fStack0000000000000150 = fVar48 + auVar42._0_4_;
        fVar34 = fVar34 + 0.0;
        auVar42 = ZEXT416((uint)(fVar50 - fVar48));
        fVar50 = (float)FUN_07c888bc(&stack0x00000ff0,0);
        fVar51 = fVar51 + fVar50;
        unaff_s15 = in_stack_000000c0._4_4_;
        uVar13 = CONCAT44(fVar39 + 0.0,fVar48 + auVar42._0_4_);
      }
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar25 + 0x118) = fVar53;
      *(undefined8 *)(lVar25 + 0x11c) = uVar14;
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar25 + 0x10c) = fVar36;
      *(ulong *)(lVar25 + 0x110) = uVar15;
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar25 + 0x124) = fVar49;
      *(ulong *)(lVar25 + 0x128) = CONCAT44(fVar34,fStack0000000000000150);
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar25 = lVar25 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(float *)(lVar25 + 0x130) = fVar51;
      *(undefined8 *)(lVar25 + 0x134) = uVar13;
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      uVar7 = *(uint *)(unaff_x22 + 0x334);
      fVar34 = *(float *)(unaff_x22 + 0x300);
      fVar36 = (float)FUN_07d57ab0(&stack0x00001100,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
      fVar34 = fVar34 + unaff_s14 * fVar36;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar34 = (float)(int)(fVar34 + unaff_s15);
      }
      *(float *)(lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x13c) = fVar34;
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      uVar7 = *(uint *)(unaff_x22 + 0x334);
      fVar36 = *(float *)(unaff_x22 + 0x2e8);
      fVar50 = *(float *)(unaff_x22 + 0x188);
      fVar34 = (float)FUN_07d57ac0(&stack0x00001100,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
      fVar34 = (fVar37 - fVar36) + fVar50 + unaff_s14 * fVar34;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar34 = (float)(int)(fVar34 + unaff_s15);
      }
      *(float *)(lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x144) = fVar34;
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      uVar7 = *(uint *)(unaff_x22 + 0x334);
      if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
      lVar25 = lVar25 + 0x20;
      *(float *)(lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x13c) =
           (fVar49 - fVar53) / ((float)uVar15 - (float)uVar14);
      fVar47 = unaff_s14 * (fStack00000000000000f8 + fVar47);
      if (*unaff_x28 == '\x01') {
        fVar47 = fVar47 / fVar40;
        fVar33 = (unaff_s14 * (fStack00000000000000f4 + fVar33)) / fVar40;
      }
      else {
        fVar33 = unaff_s14 * (fStack00000000000000f4 + fVar33);
      }
      uVar10 = *(uint *)(unaff_x22 + 0x338);
      unaff_s13 = 0.0;
      unaff_s12 = 1.0;
      if ((uVar7 != uVar10 & bVar5) == 0) {
        fVar49 = *(float *)(unaff_x22 + 0x188);
        fVar47 = fVar47 + fVar49;
        fVar33 = fVar33 + fVar49;
        fVar34 = fVar47;
        fVar37 = fVar33;
        if (fVar49 != 0.0) {
          fVar34 = (fVar47 - fVar49) / *(float *)(unaff_x22 + 0xf0);
          fVar37 = (fVar33 - fVar49) / *(float *)(unaff_x22 + 0xf0);
          if (fVar34 <= fVar47) {
            fVar34 = fVar47;
          }
          if (fVar33 <= fVar37) {
            fVar37 = fVar33;
          }
        }
        lVar25 = lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27;
        fVar49 = fVar34;
        if (fVar34 <= *(float *)(unaff_x22 + 0x348)) {
          fVar49 = *(float *)(unaff_x22 + 0x348);
        }
        fVar36 = fVar37;
        if (*(float *)(unaff_x22 + 0x34c) <= fVar37) {
          fVar36 = *(float *)(unaff_x22 + 0x34c);
        }
        *(float *)(unaff_x22 + 0x348) = fVar49;
        *(float *)(unaff_x22 + 0x34c) = fVar36;
        *(float *)(lVar25 + 300) = fVar34;
        *(float *)(lVar25 + 0x130) = fVar37;
        fVar34 = *(float *)(unaff_x22 + 0x2e8);
        *(float *)(lVar25 + 0x120) = fVar47 - fVar34;
        *(float *)(lVar25 + 0x128) = fVar33 - fVar34;
        *(float *)(unaff_x22 + 900) = fVar33 - fVar34;
        if (*(int *)(unaff_x22 + 0x350) == 0) {
          *(float *)(unaff_x22 + 0x380) = fVar49;
          if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
          fVar33 = *(float *)(unaff_x22 + 0x37c);
          fVar34 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
          fVar40 = (unaff_s14 * fVar34) / fVar40;
          if (fVar33 <= fVar40) {
            fVar33 = fVar40;
          }
          fVar34 = *(float *)(unaff_x22 + 0x2e8);
          *(float *)(unaff_x22 + 0x37c) = fVar33;
        }
        if (fVar34 == 0.0) {
          fVar40 = *(float *)(unaff_x22 + 0x19d0);
          if (*(float *)(unaff_x22 + 0x19d0) <= fVar47) {
            fVar40 = fVar47;
          }
          *(float *)(unaff_x22 + 0x19d0) = fVar40;
        }
      }
      else {
        lVar25 = lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27;
        uVar13 = *(undefined8 *)(unaff_x22 + 0x348);
        *(undefined8 *)(lVar25 + 300) = uVar13;
        fVar34 = *(float *)(unaff_x22 + 0x2e8);
        fVar40 = (float)((ulong)uVar13 >> 0x20) - fVar34;
        *(float *)(lVar25 + 0x120) = (float)uVar13 - fVar34;
        *(float *)(lVar25 + 0x128) = fVar40;
        *(float *)(unaff_x22 + 900) = fVar40;
      }
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      uVar56 = *unaff_x25;
      if (*(uint *)(lVar25 + 0x18) <= uVar56) goto LAB_07d72b20;
      lVar25 = lVar25 + (long)(int)uVar56 * (long)(int)unaff_w27;
      *(undefined1 *)(lVar25 + 0x194) = 0;
      uVar22 = *unaff_x21;
      if (uVar22 == 9) {
LAB_07d70d34:
        *(undefined1 *)(lVar25 + 0x194) = 1;
        pfVar24 = in_stack_000000a0;
        pfVar26 = in_stack_000000b8;
        if (uVar55 == uVar12) {
          lVar25 = *(long *)(unaff_x19 + 0x48);
          if (lVar25 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          pfVar26 = (float *)(lVar25 + 100);
          pfVar24 = (float *)(lVar25 + 0x68);
        }
        fVar47 = *pfVar26;
        fVar33 = *pfVar24;
        fVar40 = *(float *)(unaff_x22 + 0x368);
        fVar37 = 0.0;
        fVar34 = *(float *)(unaff_x22 + 0x300);
        in_stack_00000100 = (fStack00000000000000b4 - fVar47) - fVar33;
        bVar3 = true;
        if ((fVar40 <= in_stack_00000100) && (bVar3 = false, !NAN(fVar40))) {
          bVar3 = fVar40 == -1.0;
        }
        if (!bVar3) {
          in_stack_00000100 = fVar40;
        }
        fVar40 = 0.0;
        if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
          fVar40 = (float)FUN_07d53598(&stack0x00001110,0);
          uVar22 = *unaff_x21;
        }
        if (uVar22 != 0xad) {
          fStack00000000000000e8 = unaff_s14;
        }
        if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
          fVar37 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
        }
        uVar56 = *unaff_x25;
        if (fStack00000000000000a8 <
            (*(float *)(unaff_x22 + 0x380) -
            (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar37) {
          if (*(int *)(unaff_x22 + 0x35c) == -1) {
            *(uint *)(unaff_x22 + 0x35c) = uVar56;
          }
          iVar8 = *(int *)(in_stack_00000140 + 100);
          if (iVar8 != 1) {
            if ((iVar8 != 6) && (iVar8 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
            in_stack_0000112c = FUN_07d79b5c();
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
            iVar11 = FUN_07d79b5c();
            iVar8 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
            in_stack_00000108 = in_stack_00000108 + 1;
            *(int *)(unaff_x22 + 0x334) = iVar8 + -1;
            in_stack_00001190 = CONCAT44(0x2026,iVar8 + -1);
            unaff_x28 = in_stack_00000168;
            unaff_s12 = 1.0;
            in_stack_0000112c = iVar11 - 1;
          }
          goto LAB_07d72ac8;
        }
LAB_07d70fbc:
        uVar22 = uVar56;
        if ((bVar6 & in_stack_00000100 <
                     ABS(fVar34) +
                     fVar40 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) == 1)
        {
          if (((iStack00000000000000b0 != 0) && (iStack00000000000000b0 != 3)) &&
             (uVar56 != *(uint *)(unaff_x22 + 0x338))) {
            in_stack_0000112c = FUN_07d79b5c();
            fVar40 = *(float *)(unaff_x22 + 0x2ec);
            if (fVar40 == DAT_015c55ac) {
              lVar25 = *(long *)(unaff_x19 + 0x30);
              if (lVar25 == 0) goto LAB_07d72adc;
              uVar22 = *unaff_x25;
              if (*(uint *)(lVar25 + 0x18) <= uVar22) goto LAB_07d72b20;
              fVar34 = *(float *)(unaff_x22 + 0x2e8);
              fVar40 = 0.0;
              if ((0.0 < fVar34) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
                fVar40 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
              }
              fVar40 = *(float *)(lVar25 + (long)(int)uVar22 * (long)(int)unaff_w27 + 0x14c) +
                       (fVar40 - *(float *)(unaff_x22 + 0x34c)) +
                       in_stack_00000020._4_4_ *
                       (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
            }
            else {
              *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
              lVar25 = *(long *)(unaff_x19 + 0x30);
              if (lVar25 == 0) goto LAB_07d72adc;
              fVar34 = *(float *)(unaff_x22 + 0x2e8);
              uVar22 = *(uint *)(unaff_x22 + 0x334);
            }
            if ((*(uint *)(lVar25 + 0x18) <= uVar22) ||
               (uVar32 = uVar22 - 1, *(uint *)(lVar25 + 0x18) <= uVar32)) goto LAB_07d72b20;
            piVar27 = (int *)(lVar25 + 0x20 + (long)(int)uVar22 * (long)(int)unaff_w27);
            fVar40 = (fStack0000000000000014 + fVar40 + *(float *)(unaff_x22 + 0x380) + fVar34) -
                     (float)piVar27[0x4c];
            if ((*(int *)(lVar25 + 0x20 + (long)(int)uVar32 * (long)(int)unaff_w27) == 0xad &&
                 (in_stack_00000038._4_4_ & 1) == 0) &&
               ((*(int *)(in_stack_00000140 + 100) == 0 || (fVar40 < fStack00000000000000a8)))) {
              in_stack_00000038._4_4_ = 0;
              in_stack_0000112c = in_stack_0000112c - 1;
              in_stack_00001190 = CONCAT44(0x2d,uVar32);
              *unaff_x25 = uVar32;
              unaff_x28 = in_stack_00000168;
              goto LAB_07d72ac8;
            }
            if (*piVar27 == 0xad) {
              in_stack_00000038._4_4_ = 1;
              unaff_x28 = in_stack_00000168;
              goto LAB_07d72ac8;
            }
            if (((bVar1 != 0) && (iVar8 = *(int *)(unaff_x22 + 0x11f0), iVar8 != -1)) &&
               (iVar8 != in_stack_00000008._4_4_)) {
              in_stack_0000112c = FUN_07d79b5c();
              lVar25 = *(long *)(unaff_x19 + 0x30);
              if (lVar25 == 0) goto LAB_07d72adc;
              uVar22 = *unaff_x25;
              uVar32 = uVar22 - 1;
              if (*(uint *)(lVar25 + 0x18) <= uVar32) goto LAB_07d72b20;
              in_stack_00000008._4_4_ = iVar8;
              if (*(int *)(lVar25 + (long)(int)uVar32 * (long)(int)unaff_w27 + 0x20) == 0xad) {
                in_stack_00000038._4_4_ = 0;
                in_stack_0000112c = in_stack_0000112c - 1;
                in_stack_00001190 = CONCAT44(0x2d,uVar32);
                *unaff_x25 = uVar32;
                unaff_x28 = in_stack_00000168;
                goto LAB_07d72ac8;
              }
            }
            if (fStack00000000000000a8 < fVar40) {
              if (*(int *)(unaff_x22 + 0x35c) == -1) {
                *(uint *)(unaff_x22 + 0x35c) = uVar22;
              }
              iVar8 = *(int *)(in_stack_00000140 + 100);
              in_stack_00000038._4_4_ = 0;
              if (iVar8 < 3) {
                if (iVar8 != 0) {
                  if (iVar8 == 1) {
                    iVar8 = FUN_059137dc(unaff_x22 + 0x15f0,
                                         *(undefined8 *)
                                          Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo
                                        );
                    if (iVar8 != 0) {
                      Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                                (&stack0x000011a0,unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                                );
                      memcpy(&stack0x000008c0,&stack0x000011a0,0x398);
                      iVar11 = FUN_07d79b5c();
                      in_stack_00000038._4_4_ = 0;
                      goto LAB_07d712c4;
                    }
                    in_stack_00000038._4_4_ = 0;
                    goto LAB_07d72aac;
                  }
                  if (iVar8 != 2) goto LAB_07d7166c;
                }
LAB_07d729d0:
                FUN_07d7bce4();
                in_stack_00000038._4_4_ = 0;
                bVar1 = 1;
                bVar4 = true;
                unaff_x28 = in_stack_00000168;
                unaff_s12 = 1.0;
              }
              else {
                if (iVar8 == 3) {
                  in_stack_0000112c = FUN_07d79b5c();
                  in_stack_00000038._4_4_ = 0;
                }
                else {
                  if (iVar8 != 6) {
                    if (iVar8 != 4) goto LAB_07d7166c;
                    goto LAB_07d729d0;
                  }
                  in_stack_00000038._4_4_ = 0;
                  uVar56 = uVar22;
                }
LAB_07d71040:
                in_stack_00001190 = CONCAT44(3,uVar56);
                unaff_x28 = in_stack_00000168;
              }
            }
            else {
              FUN_07d7bce4();
              in_stack_00000038._4_4_ = 0;
              bVar1 = 1;
              bVar4 = true;
              unaff_x28 = in_stack_00000168;
            }
            goto LAB_07d72ac8;
          }
          iVar8 = *(int *)(in_stack_00000140 + 100);
          if (iVar8 == 1) {
            iVar8 = FUN_059137dc(unaff_x22 + 0x15f0,
                                 *(undefined8 *)
                                  Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
            if (iVar8 != 0) {
              Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                        (&stack0x000011a0,unaff_x22 + 0x15f0,
                         *(undefined8 *)
                          Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                        );
              memcpy(&stack0x00000528,&stack0x000011a0,0x398);
              iVar11 = FUN_07d79b5c();
LAB_07d712c4:
              iVar8 = *(int *)(unaff_x22 + 0x334);
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
          if (iVar8 == 6) {
            in_stack_0000112c = FUN_07d79b5c();
            uVar56 = *(uint *)(unaff_x22 + 0x334);
            goto LAB_07d71040;
          }
          if (iVar8 == 3) goto LAB_07d7102c;
        }
LAB_07d7166c:
        if ((bVar5 & 1) == 0) {
          if (*unaff_x21 == 0xad) {
            lVar25 = *(long *)(unaff_x19 + 0x30);
            if (lVar25 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar25 + 0x18) <= uVar22) goto LAB_07d72b20;
            *(undefined1 *)(lVar25 + (long)(int)uVar22 * (long)(int)unaff_w27 + 0x194) = 0;
          }
          else {
            if (*in_stack_00000168 == '\x02') {
              FUN_07d7a738();
            }
            else if (*in_stack_00000168 == '\x01') {
              FUN_07d79ee4();
            }
            uVar56 = *unaff_x25;
            if (bVar4) {
              *(uint *)(unaff_x22 + 0x340) = uVar56;
            }
            *(uint *)(unaff_x22 + 0x344) = uVar56;
            *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
            lVar25 = *(long *)(unaff_x19 + 0x48);
            if (lVar25 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            bVar4 = false;
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            *(float *)(lVar25 + 100) = fVar47;
            *(float *)(lVar25 + 0x68) = fVar33;
          }
        }
        else {
          lVar25 = *(long *)(unaff_x19 + 0x30);
          if (lVar25 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar25 + 0x18) <= uVar22) goto LAB_07d72b20;
          *(undefined1 *)(lVar25 + (long)(int)uVar22 * (long)(int)unaff_w27 + 0x194) = 0;
          lVar25 = *(long *)(unaff_x19 + 0x48);
          if (lVar25 == 0) goto LAB_07d72adc;
          uVar56 = *(uint *)(lVar25 + 0x18);
          if (uVar56 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar25 = lVar25 + 0x20;
          lVar29 = lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          iVar8 = *(int *)(lVar29 + 0x10) + 1;
          *(int *)(lVar29 + 0x10) = iVar8;
          uVar22 = *(uint *)(unaff_x22 + 0x350);
          *(int *)(unaff_x22 + 0x358) = iVar8;
          if (uVar56 <= uVar22) goto LAB_07d72b20;
          lVar29 = lVar25 + (long)(int)uVar22 * 0x60;
          *(float *)(lVar29 + 0x44) = fVar47;
          *(float *)(lVar29 + 0x48) = fVar33;
          *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
          if (*unaff_x21 == 0xa0) {
            *(int *)(lVar25 + (long)(int)uVar22 * 0x60) =
                 *(int *)(lVar25 + (long)(int)uVar22 * 0x60) + 1;
          }
        }
      }
      else {
        if (in_stack_00000058._4_4_ == 2) {
          if ((bVar5 & 1) == 0 && uVar22 != 0x200b) goto LAB_07d70e7c;
          goto LAB_07d70d34;
        }
        if ((bVar5 & 1) == 0) {
LAB_07d70e7c:
          if ((uVar22 != 3) && (uVar22 != 0x200b)) {
            if (uVar22 != 0xad) goto LAB_07d70d34;
            goto LAB_07d70e98;
          }
        }
        else {
LAB_07d70e98:
          if (uVar22 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
        }
        if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
        if (*(int *)(in_stack_00000140 + 100) == 6) {
          if ((uVar22 & 0xfffffffe) != 10) {
            if ((0x22 < uVar22 - 0x2007) ||
               ((1L << ((ulong)(uVar22 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
            goto LAB_07d71420;
          }
          fVar40 = 0.0;
          if ((0.0 < fVar34) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar40 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar34)) + fVar40 <=
              fStack00000000000000a8) goto LAB_07d71228;
          if (*(int *)(unaff_x22 + 0x35c) == -1) {
            *(uint *)(unaff_x22 + 0x35c) = uVar56;
          }
          in_stack_0000112c = FUN_07d79b5c();
          goto LAB_07d71040;
        }
LAB_07d71228:
        if ((int)uVar22 < 0x2007) {
          if (uVar22 != 10) {
LAB_07d713e4:
            if ((uVar22 != 0xb) && (uVar22 != 0xa0)) goto LAB_07d713f4;
            goto LAB_07d71420;
          }
LAB_07d71440:
          lVar25 = *(long *)(unaff_x19 + 0x48);
          if (lVar25 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
          lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
          *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
          *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
          uVar22 = *unaff_x21;
LAB_07d7147c:
          if (uVar22 == 0xa0) {
            lVar25 = *(long *)(unaff_x19 + 0x48);
            if (lVar25 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
            *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
          }
        }
        else {
          if ((0x22 < uVar22 - 0x2007) ||
             ((1L << ((ulong)(uVar22 - 0x2007) & 0x3f) & 0x600000001U) == 0)) {
LAB_07d713f4:
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar15 = FUN_066bcb80(uVar22,0);
            uVar22 = *unaff_x21;
            if ((uVar15 & 1) != 0) goto LAB_07d71420;
            goto LAB_07d7147c;
          }
LAB_07d71420:
          if (((uVar22 != 0xad) && (uVar22 != 0x200b)) && (uVar22 != 0x2060)) goto LAB_07d71440;
        }
      }
      if ((uVar55 == uVar12) && (*(int *)(in_stack_00000140 + 100) == 1)) {
        if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar47 = *(float *)(unaff_x22 + 0xf8);
          fVar40 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
          fVar33 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
          lVar25 = *(long *)(unaff_x22 + 0x19f8);
          if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_07d72adc;
          fVar37 = *(float *)(unaff_x22 + 0xf0);
          fVar49 = *(float *)(lVar25 + 0x2c);
          fVar34 = (float)FUN_07d5378c(*(long *)(lVar25 + 0x20),0);
          uVar13 = *(undefined8 *)in_stack_000000b8;
          fVar34 = (fVar47 / fVar40) * fVar33 * fVar37 * fVar49 * fVar34;
          if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
            lVar25 = *(long *)(unaff_x19 + 0x30);
            if (lVar25 == 0) goto LAB_07d72adc;
            uVar56 = *(int *)(unaff_x22 + 0x334) - 1;
            if (*(uint *)(lVar25 + 0x18) <= uVar56) goto LAB_07d72b20;
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar47 = *(float *)(lVar25 + (long)(int)uVar56 * (long)(int)unaff_w27 + 0x60);
            fVar40 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
            fVar33 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
            lVar25 = *(long *)(unaff_x22 + 0x19f8);
            if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_07d72adc;
            fVar37 = *(float *)(unaff_x22 + 0xf0);
            fVar49 = *(float *)(lVar25 + 0x2c);
            fVar34 = (float)FUN_07d5378c(*(long *)(lVar25 + 0x20),0);
            lVar25 = *(long *)(unaff_x19 + 0x48);
            if (lVar25 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
            uVar13 = *(undefined8 *)(lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
            fVar34 = (fVar47 / fVar40) * fVar33 * fVar37 * fVar49 * fVar34;
          }
          fVar40 = 0.0;
          fVar47 = *(float *)(unaff_x22 + 0x300);
          if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
            if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
               (lVar25 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar25 == 0))
            goto LAB_07d72adc;
            FUN_07d53750(&stack0x000011a0,lVar25,0);
            fVar40 = (float)FUN_07d53598(&stack0x000010e0,0);
          }
          fVar33 = (fStack00000000000000b4 - (float)uVar13) - (float)((ulong)uVar13 >> 0x20);
          fVar37 = *(float *)(unaff_x22 + 0x368);
          bVar3 = true;
          if ((fVar37 <= fVar33) && (bVar3 = false, !NAN(fVar37))) {
            bVar3 = fVar37 == -1.0;
          }
          if (!bVar3) {
            fVar33 = fVar37;
          }
          if (ABS(fVar47) + fVar34 * fVar40 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar33) {
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
      unaff_s12 = 1.0;
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
      uVar56 = *(uint *)(unaff_x22 + 0x350);
      *(uint *)(lVar25 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) =
           uVar56;
      if ((uVar55 == uVar12) ||
         ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
        lVar25 = *(long *)(unaff_x19 + 0x48);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= uVar56) goto LAB_07d72b20;
        if (*(int *)(lVar25 + (long)(int)uVar56 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
      }
      else {
        lVar25 = *(long *)(unaff_x19 + 0x48);
        if (lVar25 == 0) goto LAB_07d72adc;
LAB_07d71a94:
        if (*(uint *)(lVar25 + 0x18) <= uVar56) goto LAB_07d72b20;
        *(undefined4 *)(lVar25 + (long)(int)uVar56 * 0x60 + 0x6c) =
             *(undefined4 *)(unaff_x22 + 0x160);
      }
      uVar56 = *unaff_x21;
      if (uVar56 != 0x200b) {
        if (uVar56 == 9) {
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          fVar40 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
          if (*in_stack_00000148 == 0) goto LAB_07d72adc;
          bVar6 = FUN_07d617d8(*in_stack_00000148,0);
          fVar33 = *(float *)(unaff_x22 + 0x300);
          cVar20 = *(char *)(unaff_x22 + 0xf4);
          fVar47 = unaff_s14 * fVar40 * (float)bVar6;
          fVar40 = fVar47 * (float)(int)(fVar33 / fVar47);
          if (fVar40 <= fVar33) {
            fVar40 = fVar33 + fVar47;
          }
        }
        else {
          fVar40 = *(float *)(unaff_x22 + 0x2f8);
          if (fVar40 == 0.0) {
            fVar47 = *(float *)(unaff_x22 + 0x300);
            if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
              fVar40 = (float)FUN_07d57ad0(&stack0x00001100,0);
              if (*in_stack_00000148 != 0) {
                fVar33 = (float)FUN_07d61798(*in_stack_00000148,0);
                cVar20 = *(char *)(unaff_x22 + 0xf4);
                fVar47 = fVar47 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                                  (*(float *)(unaff_x22 + 0x2f4) +
                                  unaff_s14 * fVar40 +
                                  in_stack_000000d8._4_4_ *
                                  (fStack00000000000000d0 + fVar43 + fVar33));
                if (cVar20 != '\0') {
                  fVar47 = (float)(int)(fVar47 + unaff_s15);
                }
                *(float *)(unaff_x22 + 0x300) = fVar47;
                if (((bVar5 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
                fVar40 = fVar47 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
                goto FUN_07d71c94;
              }
              goto LAB_07d72adc;
            }
            fVar40 = (float)FUN_07d53598(&stack0x00001110,0);
            fVar34 = *(float *)(unaff_x22 + 0x19b0);
            fVar33 = (float)FUN_07d57ad0(&stack0x00001100,0);
            if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
            fVar37 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
            fVar47 = fVar47 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              unaff_s14 * (fVar40 * fVar34 + fVar33) +
                              in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar43 + fVar37));
          }
          else {
            if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar56 < 0x3b)) &&
               ((1L << ((ulong)uVar56 & 0x3f) & 0x400500000000000U) != 0)) {
              fVar40 = fVar40 * 0.5;
            }
            if (*in_stack_00000148 == 0) goto LAB_07d72adc;
            fVar47 = *(float *)(unaff_x22 + 0x300);
            fVar33 = (float)FUN_07d61798(*in_stack_00000148,0);
            fVar47 = fVar47 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              (fVar40 - fVar35) + in_stack_000000d8._4_4_ * (fVar43 + fVar33));
          }
          cVar20 = *(char *)(unaff_x22 + 0xf4);
          if (cVar20 != '\0') {
            fVar47 = (float)(int)(fVar47 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar47;
          if (((bVar5 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
          fVar40 = fVar47 + in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
        }
FUN_07d71c94:
        if (cVar20 != '\0') {
          fVar40 = (float)(int)(fVar40 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar40;
      }
LAB_07d71ca8:
      lVar25 = *(long *)(unaff_x19 + 0x30);
      if (lVar25 == 0) goto LAB_07d72adc;
      uVar56 = *unaff_x25;
      uVar22 = (uint)*(undefined8 *)(lVar25 + 0x18);
      if (uVar22 <= uVar56) goto LAB_07d72b20;
      *(undefined4 *)(lVar25 + (long)(int)uVar56 * (long)(int)unaff_w27 + 0x158) =
           *(undefined4 *)(unaff_x22 + 0x300);
      uVar32 = *unaff_x21;
      if ((int)uVar32 < 0xd) {
        if ((uVar32 - 10 < 2) || (uVar32 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
        if ((uVar32 == 0x2d && uVar55 == uVar12) || (uVar56 == uStack000000000000004c))
        goto LAB_07d71d54;
      }
      else {
        if (uVar32 != 0x2028) {
          if (uVar32 != 0xd) goto LAB_07d71d38;
          fVar40 = *(float *)(unaff_x22 + 0x308) + 0.0;
          if (*(char *)(unaff_x22 + 0xf4) != '\0') {
            fVar40 = (float)(int)(fVar40 + unaff_s15);
          }
          *(float *)(unaff_x22 + 0x300) = fVar40;
          if (uVar56 != uStack000000000000004c) {
            uVar32 = 0xd;
            goto LAB_07d72314;
          }
        }
LAB_07d71d54:
        if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
          fVar40 = *(float *)(unaff_x22 + 0x348);
          fVar47 = *(float *)(unaff_x22 + 0x15b8);
          if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          fVar40 = fVar40 - fVar47;
          if ((fStack0000000000000054 < ABS(fVar40)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            uVar38 = *(undefined4 *)(unaff_x22 + 0x338);
            uVar9 = *(undefined4 *)(unaff_x22 + 0x334);
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07d8f610(uVar38,uVar9);
            fVar47 = fVar40 + *(float *)(unaff_x22 + 0x2e8);
            *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar40;
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
              *(float *)(unaff_x22 + 0xb00) = fVar40 + *(float *)(unaff_x22 + 0xb00);
              *(float *)(unaff_x22 + 0xb34) = fVar40 + *(float *)(unaff_x22 + 0xb34);
              memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
              FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                          );
            }
          }
        }
        fVar47 = *(float *)(unaff_x22 + 0x2e8);
        fVar33 = *(float *)(unaff_x22 + 0x34c) - fVar47;
        fVar40 = *(float *)(unaff_x22 + 900);
        if (fVar33 <= *(float *)(unaff_x22 + 900)) {
          fVar40 = fVar33;
        }
        fVar34 = *(float *)(unaff_x22 + 0x348);
        *(float *)(unaff_x22 + 900) = fVar40;
        if (in_stack_0000119c == '\0') {
          *in_stack_00000040 = fVar40;
        }
        lVar25 = *(long *)(unaff_x19 + 0x48);
        if (lVar25 == 0) goto LAB_07d72adc;
        uVar12 = *(uint *)(unaff_x22 + 0x350);
        if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_07d72b20;
        lVar16 = lVar25 + 0x20 + (long)(int)uVar12 * 0x60;
        uVar55 = *(uint *)(unaff_x22 + 0x338);
        *(uint *)(lVar16 + 0x18) = uVar55;
        lVar29 = 0x338;
        if ((int)uVar55 <= *(int *)(unaff_x22 + 0x340)) {
          lVar29 = 0x340;
        }
        uVar32 = *(uint *)(unaff_x22 + lVar29);
        *(uint *)(unaff_x22 + 0x340) = uVar32;
        *(uint *)(lVar16 + 0x1c) = uVar32;
        uVar22 = *(uint *)(unaff_x22 + 0x334);
        *(uint *)(unaff_x22 + 0x33c) = uVar22;
        *(uint *)(lVar16 + 0x20) = uVar22;
        uVar56 = *(uint *)(unaff_x22 + 0x340);
        if ((int)uVar32 <= (int)*(uint *)(unaff_x22 + 0x344)) {
          uVar56 = *(uint *)(unaff_x22 + 0x344);
        }
        *(uint *)(unaff_x22 + 0x344) = uVar56;
        *(uint *)(lVar16 + 0x24) = uVar56;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        uVar23 = uVar56;
        if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
          if (lVar29 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_07d72b20;
          if (*(float *)(lVar29 + (long)(int)uVar22 * (long)(int)unaff_w27 + 0x158) != 0.0) {
            uVar32 = uVar55;
            uVar23 = uVar22;
          }
        }
        lVar25 = lVar25 + 0x20 + (long)(int)uVar12 * 0x60;
        *(uint *)(lVar25 + 4) = (uVar22 - uVar55) + 1;
        iVar8 = *(int *)(in_stack_00000068 + 0x60);
        *(int *)(lVar25 + 8) = iVar8;
        *(uint *)(lVar25 + 0xc) = (uVar56 - (uVar55 + iVar8)) + 1;
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= uVar32) goto LAB_07d72b20;
        *(undefined4 *)(lVar25 + 0x50) =
             *(undefined4 *)(lVar29 + (long)(int)uVar32 * (long)(int)unaff_w27 + 0x118);
        *(float *)(lVar25 + 0x54) = fVar33;
        lVar25 = *(long *)(unaff_x19 + 0x48);
        if (lVar25 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar29 = *(long *)(unaff_x19 + 0x30);
        if (lVar29 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar29 + 0x18) <= uVar23) goto LAB_07d72b20;
        fVar34 = fVar34 - fVar47;
        lVar25 = lVar25 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        uVar38 = *(undefined4 *)(lVar29 + (long)(int)uVar23 * (long)(int)unaff_w27 + 0x124);
        *(float *)(lVar25 + 0x5c) = fVar34;
        *(undefined4 *)(lVar25 + 0x58) = uVar38;
        lVar25 = *(long *)(unaff_x19 + 0x48);
        if (lVar25 == 0) goto LAB_07d72adc;
        uVar55 = *(uint *)(unaff_x22 + 0x350);
        uVar12 = *(uint *)(lVar25 + 0x18);
        if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
          if (uVar12 <= uVar55) goto LAB_07d72b20;
          lVar29 = lVar25 + (long)(int)uVar55 * 0x60;
          fVar40 = *(float *)(lVar29 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
        }
        else {
          if (uVar12 <= uVar55) goto LAB_07d72b20;
          lVar16 = *(long *)(unaff_x19 + 0x30);
          if (lVar16 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_07d72b20;
          lVar29 = lVar25 + (long)(int)uVar55 * 0x60;
          fVar40 = *(float *)(lVar16 + (long)(int)uVar23 * (long)(int)unaff_w27 + 0x158);
        }
        *(float *)(lVar29 + 0x48) = fVar40;
        if (uVar12 <= uVar55) goto LAB_07d72b20;
        lVar29 = lVar25 + 0x20 + (long)(int)uVar55 * 0x60;
        *(float *)(lVar29 + 0x40) = in_stack_00000100;
        if (*(int *)(lVar29 + 4) == 1) {
          *(undefined4 *)(lVar25 + 0x20 + (long)(int)uVar55 * 0x60 + 0x4c) =
               *(undefined4 *)(unaff_x22 + 0x160);
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar40 = (float)FUN_07d61798(*in_stack_00000148,0);
        lVar25 = *(long *)(unaff_x19 + 0x30);
        if (lVar25 == 0) goto LAB_07d72adc;
        uVar12 = *(uint *)(unaff_x22 + 0x344);
        uVar22 = (uint)*(undefined8 *)(lVar25 + 0x18);
        if (uVar22 <= uVar12) goto LAB_07d72b20;
        uVar55 = *(uint *)(unaff_x22 + 0x350);
        lVar29 = *(long *)(unaff_x19 + 0x48);
        fVar40 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                 (*(float *)(unaff_x22 + 0x2f4) +
                 in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar43 + fVar40));
        if (*(char *)(lVar25 + 0x20 + (long)(int)uVar12 * (long)(int)unaff_w27 + 0x174) == '\0') {
          if (lVar29 == 0) goto LAB_07d72adc;
          uVar12 = *(uint *)(unaff_x22 + 0x33c);
          if (uVar22 <= uVar12) goto LAB_07d72b20;
        }
        else if (lVar29 == 0) goto LAB_07d72adc;
        bVar3 = *(uint *)(lVar29 + 0x18) <= uVar55;
        if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
          if (bVar3) goto LAB_07d72b20;
          fVar40 = -fVar40;
        }
        else if (bVar3) goto LAB_07d72b20;
        *(float *)(lVar29 + (long)(int)uVar55 * 0x60 + 0x5c) =
             *(float *)(lVar25 + 0x20 + (long)(int)uVar12 * (long)(int)unaff_w27 + 0x138) + fVar40;
        if (*(uint *)(lVar29 + 0x18) <= uVar55) goto LAB_07d72b20;
        lVar29 = lVar29 + (long)(int)uVar55 * 0x60;
        *(float *)(lVar29 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
        *(float *)(lVar29 + 0x58) = fVar33;
        *(float *)(lVar29 + 0x4c) = fStack0000000000000048 + (fVar34 - fVar33);
        *(float *)(lVar29 + 0x50) = fVar34;
        uVar32 = *unaff_x21;
        if ((int)uVar32 < 0x2d) {
          if (uVar32 - 10 < 2) goto LAB_07d72208;
          if (uVar32 == 3) {
            if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
            uVar32 = 3;
            in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
          }
        }
        else if ((uVar32 - 0x2028 < 2) || (uVar32 == 0x2d)) goto LAB_07d72208;
      }
LAB_07d72314:
      uVar12 = *unaff_x25;
      if (uVar22 <= uVar12) goto LAB_07d72b20;
      lVar25 = lVar25 + 0x20;
      if (*(char *)(lVar25 + (long)(int)uVar12 * (long)(int)unaff_w27 + 0x174) != '\0') {
        lVar29 = lVar25 + (long)(int)uVar12 * (long)(int)unaff_w27;
        auVar42 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
        uVar13 = *(undefined8 *)(lVar29 + 0xf8);
        auVar45 = NEON_ext(auVar42,auVar42,8,1);
        uVar14 = *(undefined8 *)(lVar29 + 0x104);
        auVar46._0_4_ = -(uint)(auVar42._0_4_ < (float)uVar13);
        auVar46._4_4_ = -(uint)(auVar42._4_4_ < (float)((ulong)uVar13 >> 0x20));
        auVar46._8_4_ = -(uint)((float)uVar14 < auVar45._0_4_);
        auVar46._12_4_ = -(uint)((float)((ulong)uVar14 >> 0x20) < auVar45._4_4_);
        auVar45._8_8_ = uVar14;
        auVar45._0_8_ = uVar13;
        auVar42 = auVar42 ^ (auVar42 ^ auVar45) & ~auVar46;
        *(long *)(in_stack_00000068 + 0x80) = auVar42._8_8_;
        *(long *)(in_stack_00000068 + 0x78) = auVar42._0_8_;
      }
      if (((iStack00000000000000b0 == 3) || (iStack00000000000000b0 == 0)) &&
         ((6 < *(uint *)(in_stack_00000140 + 100) ||
          ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) == 0))))
      goto LAB_07d72940;
      if (((bVar5 & 1) == 0) && (uVar32 != 0x200b)) {
        if (uVar32 == 0x2d) {
          if (0 < (int)uVar12) {
            if (uVar12 - 1 < uVar22) {
              uVar38 = *(undefined4 *)(lVar25 + (ulong)(uVar12 - 1) * (ulong)unaff_w27);
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar15 = FUN_066b9610(uVar38,0);
              if ((uVar15 & 1) != 0) {
                uVar32 = *unaff_x21;
                goto LAB_07d72408;
              }
              goto LAB_07d72410;
            }
            goto LAB_07d72b20;
          }
          goto LAB_07d72410;
        }
LAB_07d72408:
        if (uVar32 == 0xad) goto LAB_07d72410;
        if (*(char *)(unaff_x22 + 0x388) == '\0') goto LAB_07d72644;
        if (bVar1 == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
          bVar1 = 0;
          goto LAB_07d72940;
        }
LAB_07d72618:
        if ((in_stack_00000038._4_4_ & 1) == 0 && *unaff_x21 == 0xad) {
LAB_07d72434:
          FUN_07d79804();
          bVar1 = 1;
        }
        else {
LAB_07d72630:
          bVar1 = 1;
        }
      }
      else {
LAB_07d72410:
        if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
        uVar32 = *unaff_x21;
        if ((int)uVar32 < 0x2007) {
          if (uVar32 == 0x2d) {
            uVar7 = *unaff_x25 - 1;
            if (0 < (int)*unaff_x25) {
              lVar25 = *(long *)(unaff_x19 + 0x30);
              if (lVar25 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
              uVar38 = *(undefined4 *)(lVar25 + (ulong)uVar7 * (ulong)unaff_w27 + 0x20);
              if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar15 = FUN_066b9610(uVar38,0);
              if ((uVar15 & 1) != 0) goto LAB_07d72940;
            }
          }
          else if (uVar32 == 0xa0) goto LAB_07d72644;
        }
        else if (((uVar32 - 0x2007 < 0x29) &&
                 ((1L << ((ulong)(uVar32 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                (uVar32 == 0x2060)) {
LAB_07d72644:
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar15 = FUN_07d90128(uVar32,0);
          if ((uVar15 & 1) == 0) {
LAB_07d7268c:
            uVar12 = *unaff_x21;
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar15 = FUN_07d901bc(uVar12,0);
            if ((uVar15 & 1) == 0) {
              if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
                 (uVar7 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar7)) {
LAB_07d72418:
                if (bVar1 != 0) {
                  if ((bVar5 & 1) == 0) goto LAB_07d72618;
                  if (*unaff_x21 != 0xa0) goto LAB_07d72434;
                  goto LAB_07d72630;
                }
                goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
              }
              lVar25 = *(long *)(unaff_x19 + 0x30);
              if (lVar25 == 0) goto LAB_07d72adc;
              if (*(uint *)(lVar25 + 0x18) <= uVar7) goto LAB_07d72b20;
              uVar38 = *(undefined4 *)(lVar25 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x20);
              if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo +
                          0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar15 = FUN_07d901bc(uVar38,0);
              if ((uVar15 & 1) == 0) goto LAB_07d72418;
              lVar25 = *(long *)(unaff_x19 + 0x30);
              if (lVar25 != 0) {
                if (*unaff_x25 + 1 < *(uint *)(lVar25 + 0x18)) {
                  if (in_stack_00000018 != 0) {
                    uVar38 = *(undefined4 *)
                              (lVar25 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
                    lVar25 = FUN_07d86e90(in_stack_00000018,0);
                    if ((lVar25 != 0) && (lVar25 = FUN_07d98b58(lVar25,0), lVar25 != 0)) {
                      uVar7 = FUN_049ddf40(lVar25,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                      lVar25 = FUN_07d86e90(in_stack_00000018,0);
                      if ((lVar25 != 0) && (lVar25 = FUN_07d98b58(lVar25,0), lVar25 != 0)) {
                        uVar12 = FUN_049ddf40(lVar25,uVar38,*(undefined8 *)PTR_DAT_084b5110);
                        if (((uVar7 | uVar12) & 1) != 0) goto LAB_07d72940;
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
               (lVar25 = FUN_07d86e90(in_stack_00000018,0), lVar25 == 0)) goto LAB_07d72adc;
            if (*(char *)(lVar25 + 0x28) != '\0') goto LAB_07d7268c;
          }
          lVar25 = FUN_07d86e90(in_stack_00000018,0);
          if ((lVar25 == 0) || (lVar25 = FUN_07d98b58(lVar25,0), lVar25 == 0)) goto LAB_07d72adc;
          uVar15 = FUN_049ddf40(lVar25,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
          if ((int)*unaff_x25 < (int)uStack000000000000004c) {
            lVar25 = FUN_07d86e90(in_stack_00000018,0);
            if (lVar25 == 0) goto LAB_07d72adc;
            lVar25 = FUN_07d98da0(lVar25,0);
            lVar29 = *(long *)(unaff_x19 + 0x30);
            if (lVar29 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar29 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
            if (lVar25 == 0) goto LAB_07d72adc;
            bVar6 = FUN_049ddf40(lVar25,*(undefined4 *)
                                         (lVar29 + (long)(int)(*unaff_x25 + 1) *
                                                   (long)(int)unaff_w27 + 0x20),
                                 *(undefined8 *)PTR_DAT_084b5110);
            if ((uVar15 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
            if ((bVar1 & uVar7 == uVar10) == 0) goto LAB_07d72940;
            bVar1 = 1;
LAB_07d728a8:
            FUN_07d79804();
            bVar5 = bVar5 & 1;
          }
          else {
            bVar6 = 0;
            if ((uVar15 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
            bVar1 = bVar6 & bVar1;
            bVar5 = bVar1 & bVar5;
            if ((bVar1 != 0) || (((bVar6 ^ 1) & 1) != 0)) goto LAB_07d728a8;
            bVar1 = 0;
          }
          if (bVar5 == 0) goto LAB_07d72940;
          goto LAB_07d72934;
        }
        bVar1 = 0;
        *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
      }
LAB_07d72934:
      FUN_07d79804();
LAB_07d72940:
      FUN_07d79804();
      *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
      unaff_x28 = in_stack_00000168;
      goto LAB_07d72ac8;
    }
  }
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_07d72208:
  FUN_07d79804();
  in_w3 = *(uint *)(unaff_x22 + 0x334);
  unaff_w20 = *(int *)(unaff_x22 + 0x350) + 1;
  in_w8 = in_w3 + 1;
  unaff_x28 = in_stack_00000168;
  goto code_r0x07d72230;
}


