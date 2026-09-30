/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.EntryProcessor$$get_firstTailCommand
ENTRY_POINT: 07d7264c
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


void UnityEngine_UIElements_UIR_EntryProcessor__get_firstTailCommand(long *param_1)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  char cVar19;
  undefined1 uVar20;
  uint uVar21;
  float *pfVar22;
  long lVar23;
  float *pfVar24;
  int *piVar25;
  uint uVar26;
  long *plVar27;
  long unaff_x19;
  long *plVar28;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar29;
  long unaff_x23;
  uint unaff_w24;
  uint *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  char *unaff_x28;
  uint unaff_w29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float unaff_s12;
  float fVar50;
  float fVar51;
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
  float fStack0000000000000100;
  uint uStack0000000000000104;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  long *in_stack_00000148;
  float in_stack_00000150;
  char *in_stack_00000168;
  uint in_stack_000010fc;
  uint in_stack_0000112c;
  uint uVar52;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
  uVar2 = in_stack_00000060;
code_r0x07d7264c:
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar17 = FUN_07d90128(unaff_w24,0);
  if ((uVar17 & 1) == 0) {
LAB_07d7268c:
    uVar9 = *unaff_x21;
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar17 = FUN_07d901bc(uVar9,0);
    if ((uVar17 & 1) == 0) {
      if (*(char *)(unaff_x22 + 0x388) != '\0') goto LAB_07d72418;
      uVar9 = *unaff_x25 + 1;
      if (iStack0000000000000028 <= (int)uVar9) goto LAB_07d72418;
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (uVar9 < *(uint *)(lVar18 + 0x18)) {
        uVar36 = *(undefined4 *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x20);
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_07d901bc(uVar36,0);
        if ((uVar17 & 1) == 0) goto LAB_07d72418;
        lVar18 = *(long *)(unaff_x19 + 0x30);
        if (lVar18 == 0) goto LAB_07d72adc;
        if (*unaff_x25 + 1 < *(uint *)(lVar18 + 0x18)) {
          if (in_stack_00000018 == 0) goto LAB_07d72adc;
          uVar36 = *(undefined4 *)
                    (lVar18 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
          lVar18 = FUN_07d86e90(in_stack_00000018,0);
          if ((lVar18 == 0) || (lVar18 = FUN_07d98b58(lVar18,0), lVar18 == 0)) goto LAB_07d72adc;
          uVar9 = FUN_049ddf40(lVar18,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
          lVar18 = FUN_07d86e90(in_stack_00000018,0);
          if ((lVar18 == 0) || (lVar18 = FUN_07d98b58(lVar18,0), lVar18 == 0)) goto LAB_07d72adc;
          uVar10 = FUN_049ddf40(lVar18,uVar36,*(undefined8 *)PTR_DAT_084b5110);
          if (((uVar9 | uVar10) & 1) == 0) goto LAB_07d72934;
          goto LAB_07d72940;
        }
      }
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    if (in_stack_00000018 == 0) goto LAB_07d72adc;
  }
  else {
    if ((in_stack_00000018 == 0) || (lVar18 = FUN_07d86e90(in_stack_00000018,0), lVar18 == 0))
    goto LAB_07d72adc;
    if (*(char *)(lVar18 + 0x28) != '\0') goto LAB_07d7268c;
  }
  lVar18 = FUN_07d86e90(in_stack_00000018,0);
  if ((lVar18 == 0) || (lVar18 = FUN_07d98b58(lVar18,0), lVar18 == 0)) goto LAB_07d72adc;
  uVar17 = FUN_049ddf40(lVar18,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
  if ((int)*unaff_x25 < (int)uStack000000000000004c) {
    lVar18 = FUN_07d86e90(in_stack_00000018,0);
    if (lVar18 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar18 = FUN_07d98da0(lVar18,0);
    lVar23 = *(long *)(unaff_x19 + 0x30);
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
    if (lVar18 == 0) goto LAB_07d72adc;
    uVar9 = FUN_049ddf40(lVar18,*(undefined4 *)
                                 (lVar23 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20
                                 ),*(undefined8 *)PTR_DAT_084b5110);
    if ((uVar17 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
    in_stack_00000060._4_4_ = uVar9 & in_stack_00000060._4_4_;
    uStack0000000000000104 = in_stack_00000060._4_4_ & uStack0000000000000104;
    if (((in_stack_00000060._4_4_ & 1) != 0) || (((uVar9 ^ 1) & 1) != 0)) goto LAB_07d728a8;
    in_stack_00000060._4_4_ = 0;
  }
  else {
    uVar9 = 0;
    if ((uVar17 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
    if ((in_stack_00000060._4_4_ & (float)unaff_w29 == in_stack_00000150) == 0) goto LAB_07d72940;
    in_stack_00000060._4_4_ = 1;
LAB_07d728a8:
    FUN_07d79804();
  }
  if ((uStack0000000000000104 & 1) != 0) goto LAB_07d72934;
LAB_07d72940:
  FUN_07d79804();
  *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
LAB_07d72ac8:
  do {
    lVar18 = *(long *)(unaff_x22 + 0x20);
    in_stack_0000112c = in_stack_0000112c + 1;
    if (lVar18 == 0) goto LAB_07d72adc;
    if ((int)*(uint *)(lVar18 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
      FUN_07d797b8();
      return;
    }
    if (*(uint *)(lVar18 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
    uVar9 = *(uint *)(lVar18 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
    if (uVar9 == 0) goto LAB_07d72ae0;
    *unaff_x21 = uVar9;
    if (5 < unaff_w26) {
      uVar11 = FUN_0676d8dc();
      uVar12 = FUN_0674e2a4(&stack0x0000112c,0);
      uVar11 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar11,
                            *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4fb40(uVar11,0);
      uVar9 = *unaff_x21;
      in_stack_00001190 = CONCAT44(3,*unaff_x25);
    }
  } while (uVar9 == 0x1a);
  if ((uVar9 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
    unaff_x28[0] = '\x01';
    unaff_x28[1] = '\x01';
    uVar17 = FUN_07d74ca8();
    if (((uVar17 & 1) != 0) && (in_stack_0000112c = in_stack_000010fc, *unaff_x28 == '\x01'))
    goto LAB_07d72ac8;
  }
  else {
    lVar18 = *(long *)(unaff_x19 + 0x30);
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *unaff_x28 = *(char *)(lVar18 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar18 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar18 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
  }
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar10 = *(uint *)(unaff_x22 + 0x334);
  uVar9 = *(uint *)(lVar18 + 0x18);
  if (uVar9 <= uVar10) goto LAB_07d72b20;
  lVar23 = lVar18 + 0x20;
  uVar52 = (uint)in_stack_00001190;
  uVar36 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar19 = *(char *)(lVar23 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x3c);
  unaff_x28[1] = '\0';
  if (uVar52 == uVar10) {
    uVar7 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar7;
    *unaff_x28 = '\x01';
    if (uVar7 == 0x2026) {
      if (uVar9 <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar23 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
           *(undefined8 *)(unaff_x22 + 0x19f8);
      thunk_FUN_03afed3c();
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
      *(undefined1 *)(lVar18 + 0x28) = 1;
      thunk_FUN_03afed3c();
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
           *(undefined8 *)(unaff_x22 + 0x1a08);
      thunk_FUN_03afed3c();
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
           *(undefined4 *)(unaff_x22 + 0x1a10);
      lVar18 = *(long *)(unaff_x22 + 0x15c0);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
      lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
      *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
      uVar9 = *(uint *)(unaff_x22 + 0x334);
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      in_stack_00001190 = CONCAT44(3,uVar9 + 1);
      goto joined_r0x07d6f120;
    }
    if (uVar7 != 3) goto LAB_07d6efec;
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    uVar9 = *unaff_x25;
    lVar13 = FUN_07d61598(*in_stack_00000148,0);
    if (lVar13 == 0) goto LAB_07d72adc;
    uVar11 = FUN_060344a4(lVar13,3,*(undefined8 *)
                                    System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                         );
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
    *(undefined8 *)(lVar23 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x10) = uVar11;
    thunk_FUN_03afed3c();
    *(undefined1 *)(unaff_x22 + 0x4d) = 1;
    unaff_x28 = in_stack_00000168;
  }
LAB_07d6efec:
  uVar9 = *unaff_x25;
joined_r0x07d6f120:
  unaff_x23 = in_stack_00000140;
  if (((int)uVar9 < 0) && (*unaff_x21 != 3)) {
    lVar18 = *(long *)(unaff_x19 + 0x30);
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
    lVar18 = lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar18 + 0x194) = 0;
    *(undefined4 *)(lVar18 + 0x20) = 0x200b;
    *(undefined4 *)(lVar18 + 100) = 0;
    *unaff_x25 = uVar9 + 1;
    goto LAB_07d72ac8;
  }
  cVar1 = *unaff_x28;
  if (cVar1 == '\x01') {
    uVar9 = *(uint *)(unaff_x22 + 300);
    if ((uVar9 >> 4 & 1) == 0) {
      if ((uVar9 >> 3 & 1) == 0) {
        fVar43 = 1.0;
        if ((uVar9 >> 5 & 1) != 0) {
          uVar9 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar17 = FUN_066bbc7c(uVar9,0);
          fVar43 = 1.0;
          if ((uVar17 & 1) != 0) {
            uVar9 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar9 = FUN_066bbf04(uVar9,0);
            fVar43 = fStack0000000000000010;
            goto LAB_07d6f260;
          }
        }
      }
      else {
        uVar9 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_066bbbdc(uVar9,0);
        fVar43 = 1.0;
        if ((uVar17 & 1) != 0) {
          uVar9 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar9 = FUN_066bc07c(uVar9,0);
          goto LAB_07d6f25c;
        }
      }
    }
    else {
      uVar9 = *unaff_x21;
      if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar17 = FUN_066bbc7c(uVar9,0);
      fVar43 = 1.0;
      if ((uVar17 & 1) != 0) {
        uVar9 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar9 = FUN_066bbf04(uVar9,0);
LAB_07d6f25c:
        fVar43 = 1.0;
LAB_07d6f260:
        *unaff_x21 = uVar9 & 0xffff;
      }
    }
    cVar1 = *unaff_x28;
  }
  else {
    fVar43 = 1.0;
  }
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (cVar1 == '\x01') {
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(unaff_x22 + 0x1598) =
         *(undefined8 *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
    thunk_FUN_03afed3c(unaff_x22 + 0x1598);
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
    lVar18 = *(long *)(unaff_x19 + 0x30);
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000148 = *(long *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
    lVar18 = *(long *)(unaff_x19 + 0x30);
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000090 = *(long *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50);
    thunk_FUN_03afed3c();
    lVar18 = *(long *)(unaff_x19 + 0x30);
    if (lVar18 == 0) goto LAB_07d72adc;
    uVar7 = *unaff_x25;
    uVar9 = *(uint *)(lVar18 + 0x18);
    if (uVar9 <= uVar7) goto LAB_07d72b20;
    *(undefined4 *)(unaff_x22 + 0x78) =
         *(undefined4 *)(lVar18 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x38);
    if (uVar52 == uVar10) {
      lVar23 = *(long *)(unaff_x22 + 0x20);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar23 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
      if ((*(int *)(lVar23 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
         (uVar7 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
      if (uVar9 <= uVar7 - 1) goto LAB_07d72b20;
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar46 = *(float *)(lVar18 + 0x20 + (long)(int)(uVar7 - 1) * (long)(int)unaff_w27 + 0x40);
      fVar30 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar31 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar31 = ((fVar43 * fVar46) / fVar30) * fVar31;
LAB_07d6f900:
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
    }
    else {
LAB_07d6f408:
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar46 = *(float *)(unaff_x22 + 0xf8);
      fVar30 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar31 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar31 = ((fVar43 * fVar46) / fVar30) * fVar31;
      if (uVar52 == uVar10) goto LAB_07d6f900;
LAB_07d6f918:
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
    }
    lVar18 = *(long *)(unaff_x22 + 0x1598);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_07d72adc;
    fVar30 = *(float *)(unaff_x22 + 0xf0);
    fVar46 = *(float *)(lVar18 + 0x2c);
    fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar18 + 0x20),0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar32 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar33 = *(float *)(unaff_x22 + 0xf0);
    fVar35 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    lVar18 = *(long *)(unaff_x19 + 0x30);
    fVar35 = fVar31 * fVar32 * fVar33 * fVar35;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar35 = (float)(int)(fVar35 + unaff_s15);
    }
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar23 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar23 + 0x28) = 1;
    fStack00000000000000e8 = fVar31 * fVar30 * fVar46 * fStack00000000000000e8;
    *(float *)(lVar23 + 0x160) = fStack00000000000000e8;
    in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
    unaff_s12 = 1.0;
    unaff_s13 = 0.0;
    uVar9 = *unaff_x21;
    fVar30 = 0.0;
    if (uVar9 != 3 && uVar9 != 0xad) {
      fVar30 = fStack00000000000000e8;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (lVar18 != 0) {
        if (*unaff_x25 < *(uint *)(lVar18 + 0x18)) {
          plVar28 = *(long **)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
          if (plVar28 != (long *)0x0) {
            bVar4 = *(byte *)(*(long *)
                               Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                             + 0x130);
            if ((*(byte *)(*plVar28 + 0x130) < bVar4) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)
                 Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar28);
            }
            plVar14 = (long *)FUN_07d8466c(plVar28,0);
            if (plVar14 == (long *)0x0) {
              plVar14 = (long *)0x0;
              *in_stack_000000e0 = 0;
            }
            else {
              lVar18 = *(long *)
                        Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
              bVar4 = *(byte *)(lVar18 + 0x130);
              if (*(byte *)(*plVar14 + 0x130) < bVar4) {
                plVar27 = (long *)0x0;
              }
              else {
                plVar27 = plVar14;
                if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar4 * 8 + -8) != lVar18) {
                  plVar27 = (long *)0x0;
                }
              }
              *in_stack_000000e0 = (long)plVar27;
              if (*(byte *)(*plVar14 + 0x130) < bVar4) {
                plVar14 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar4 * 8 + -8) != lVar18) {
                plVar14 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(in_stack_000000e0,plVar14);
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
              fVar46 = *(float *)(unaff_x22 + 0xf8);
              FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
              memcpy(&stack0x00001130,&stack0x000011a0,0x60);
              fVar30 = (float)FUN_07d5328c(&stack0x00001130,0);
              if (*in_stack_00000148 != 0) {
                FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
                memcpy(&stack0x00001130,&stack0x00000170,0x60);
                fVar31 = (float)FUN_07d53294(&stack0x00001130,0);
                if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                fVar31 = (fVar46 / fVar30) * fVar31;
                fVar30 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                fVar46 = *(float *)(unaff_x22 + 0xf8);
                if (fVar30 <= 0.0) {
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar30 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar32 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  FUN_07d53750(&stack0x000011a0,plVar28[4],0);
                  fVar33 = (float)FUN_07d53580(&stack0x000010e0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar45 = *(float *)((long)plVar28 + 0x2c);
                  fVar34 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar50 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar47 = *(float *)(unaff_x22 + 0xf0);
                  fVar35 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (fVar46 / fVar30) * fStack00000000000000f4;
                  fStack00000000000000e8 =
                       fStack00000000000000f4 * (fVar32 / fVar33) * fVar45 * fVar34;
                  fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                  fVar35 = fVar31 * fVar50 * fVar47 * fVar35;
                  fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                  fVar30 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                  fStack00000000000000f4 = fStack00000000000000f4 * fVar30;
                }
                else {
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar30 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar32 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar45 = *(float *)((long)plVar28 + 0x2c);
                  fVar33 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar34 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar50 = *(float *)(unaff_x22 + 0xf0);
                  fVar35 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                  fVar35 = fVar31 * fVar34 * fVar50 * fVar35;
                  fStack00000000000000e8 = (fVar46 / fVar30) * fVar32 * fVar45 * fVar33;
                  fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0)
                  ;
                  unaff_x28 = in_stack_00000168;
                }
                *(long **)(unaff_x22 + 0x1598) = plVar28;
                thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar28);
                lVar18 = *(long *)(unaff_x19 + 0x30);
                if (lVar18 != 0) {
                  if (*unaff_x25 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
                    *(long *)(lVar18 + 0x48) = *in_stack_000000e0;
                    *(undefined1 *)(lVar18 + 0x28) = 2;
                    *(float *)(lVar18 + 0x160) = fStack00000000000000e8;
                    thunk_FUN_03afed3c();
                    lVar18 = *(long *)(unaff_x19 + 0x30);
                    if (lVar18 != 0) {
                      if (*unaff_x25 < *(uint *)(lVar18 + 0x18)) {
                        *(long *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) =
                             *in_stack_00000148;
                        thunk_FUN_03afed3c();
                        lVar18 = *(long *)(unaff_x19 + 0x30);
                        if (lVar18 != 0) {
                          if (*unaff_x25 < *(uint *)(lVar18 + 0x18)) {
                            *(undefined4 *)
                             (lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
                                 *(undefined4 *)(unaff_x22 + 0x78);
                            in_stack_00000138._4_4_ = 0.0;
                            *(undefined4 *)(unaff_x22 + 0x78) = uVar36;
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
    uVar9 = *unaff_x21;
    fVar30 = 0.0;
    if (uVar9 != 3 && uVar9 != 0xad) {
      fVar30 = unaff_s14;
    }
    fVar35 = 0.0;
    fStack00000000000000f4 = 0.0;
    fStack00000000000000f8 = 0.0;
    fStack00000000000000e8 = unaff_s14;
    if (lVar18 == 0) goto LAB_07d72adc;
  }
  unaff_s14 = fVar30;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(uint *)(lVar18 + 0x20) = uVar9;
  *(undefined4 *)(lVar18 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
  *(undefined4 *)(lVar18 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
       *(undefined4 *)(unaff_x22 + 0x1b8);
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
       *(undefined4 *)(unaff_x22 + 0x1bc);
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  auVar39 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
  *(undefined4 *)(lVar18 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
  *(long *)(lVar18 + 0x184) = auVar39._8_8_;
  *(long *)(lVar18 + 0x17c) = auVar39._0_8_;
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar9 = *(uint *)(unaff_x22 + 0x334);
  uVar7 = *(uint *)(lVar18 + 0x18);
  if (uVar7 <= uVar9) goto LAB_07d72b20;
  lVar23 = lVar18 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27;
  uVar26 = *(uint *)(unaff_x22 + 300);
  *(uint *)(lVar23 + 0x170) = uVar26;
  if (*(int *)(unaff_x22 + 0x13c) == 700) {
    *(uint *)(lVar23 + 0x170) = uVar26 | 1;
    uVar9 = *unaff_x25;
  }
  if (uVar7 <= uVar9) goto LAB_07d72b20;
  lVar18 = *(long *)(lVar18 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x18);
  if (lVar18 == 0) {
    if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
       (lVar18 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar18 == 0)) goto LAB_07d72adc;
    FUN_07d53750(&stack0x000011a0,lVar18,0);
  }
  else {
    FUN_07d53750(&stack0x00000510,lVar18,0);
  }
  uVar9 = *unaff_x21;
  if (uVar9 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uStack0000000000000104 = FUN_066b9610(uVar9,0);
  }
  else {
    uStack0000000000000104 = 0;
  }
  fVar30 = *(float *)(in_stack_00000140 + 0x8c);
  if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*unaff_x28 == '\x01')) {
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
    uVar9 = *unaff_x25;
    uVar7 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
    if ((int)uVar9 < (int)uStack000000000000004c) {
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (lVar18 == 0) goto LAB_07d72adc;
      uVar9 = uVar9 + 1;
      if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
      if (*(char *)(lVar18 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27 + 8) == '\x01') {
        lVar18 = *(long *)(lVar18 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x10);
        if ((((lVar18 == 0) || (*in_stack_00000148 == 0)) ||
            (lVar23 = *(long *)(*in_stack_00000148 + 0x170), lVar23 == 0)) ||
           (lVar23 = *(long *)(lVar23 + 0x40), lVar23 == 0)) goto LAB_07d72adc;
        uVar17 = FUN_05ffa6e0(lVar23,uVar7 | *(int *)(lVar18 + 0x28) << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar17 & 1) != 0) {
          FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          uVar17 = FUN_07d57e7c(&stack0x000010b0,0);
          if ((uVar17 & 0x100) != 0) {
            fVar30 = unaff_s13;
          }
        }
      }
      uVar9 = *unaff_x25;
    }
    uVar26 = uVar9 - 1;
    if (0 < (int)uVar9) {
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_07d72b20;
      lVar23 = *(long *)(lVar18 + 0x20 + (ulong)uVar26 * (ulong)unaff_w27 + 0x10);
      if (lVar23 == 0) goto LAB_07d72adc;
      if (*(char *)(lVar18 + 0x20 + (ulong)uVar26 * (ulong)unaff_w27 + 8) == '\x01') {
        if (((*in_stack_00000148 == 0) ||
            (lVar18 = *(long *)(*in_stack_00000148 + 0x170), lVar18 == 0)) ||
           (lVar18 = *(long *)(lVar18 + 0x40), lVar18 == 0)) goto LAB_07d72adc;
        uVar17 = FUN_05ffa6e0(lVar18,*(uint *)(lVar23 + 0x28) | uVar7 << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar17 & 1) != 0) {
          FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          FUN_07d57af4(0);
          uVar17 = FUN_07d57e7c(&stack0x000010b0,0);
          unaff_s15 = in_stack_000000c0._4_4_;
          if ((uVar17 & 0x100) != 0) {
            fVar30 = unaff_s13;
          }
        }
      }
    }
    lVar18 = *(long *)(unaff_x19 + 0x30);
    if (lVar18 == 0) goto LAB_07d72adc;
    uVar9 = *unaff_x25;
    uVar36 = FUN_07d57ad0(&stack0x00001100,0);
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
    *(undefined4 *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x154) = uVar36;
  }
  uVar9 = *unaff_x21;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar4 = FUN_07d8fcc4(uVar9,0);
  uVar9 = *unaff_x25;
  uVar17 = (ulong)uVar9;
  if ((bVar4 & 1) == 0) {
    if (0 < (int)uVar9) {
      if ((((uVar2 & 1) == 0) || (uVar7 = *(uint *)(unaff_x22 + 0x19cc), uVar7 == 0x80000000)) ||
         (uVar7 != uVar9 - 1)) {
        if ((_iStack0000000000000028 & 0x100000000) == 0) {
          bVar3 = false;
        }
        else {
          lVar18 = uVar17 * unaff_w27 + 0x144;
          uVar29 = uVar17;
          do {
            uVar29 = uVar29 - 1;
            iVar5 = (int)uVar17;
            uVar9 = iVar5 - 1;
            uVar17 = (ulong)uVar9;
            if ((iVar5 < 1) || (uVar29 == *(uint *)(unaff_x22 + 0x19cc))) {
              bVar3 = false;
              goto LAB_07d71064;
            }
            lVar23 = *(long *)(unaff_x19 + 0x30);
            if (lVar23 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_07d72b20;
            lVar23 = *(long *)(lVar23 + lVar18 + -0x28c);
            if ((lVar23 == 0) || (lVar23 = FUN_07d88988(lVar23,0), lVar23 == 0)) goto LAB_07d72adc;
            uVar7 = FUN_07d53740(lVar23,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar5 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar23 = FUN_07d61740(*in_stack_00000148,0), lVar23 == 0)) ||
               (*(long *)(lVar23 + 0x50) == 0)) goto LAB_07d72adc;
            uVar15 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                               (*(long *)(lVar23 + 0x50),uVar7 | iVar5 << 0x10,&stack0x00001050,
                                *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
            lVar18 = lVar18 + -0x178;
            unaff_x28 = in_stack_00000168;
          } while ((uVar15 & 1) == 0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar9) goto LAB_07d72b20;
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
          fVar30 = 0.0;
          bVar3 = true;
        }
LAB_07d71064:
        if ((uVar2 & 1) != 0) {
          uVar9 = *(uint *)(unaff_x22 + 0x19cc);
          if (uVar9 == 0x80000000) {
            bVar3 = true;
          }
          if (!bVar3) {
            lVar18 = *(long *)(unaff_x19 + 0x30);
            if (lVar18 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
            lVar18 = *(long *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x30);
            if ((lVar18 == 0) || (lVar18 = FUN_07d88988(lVar18,0), lVar18 == 0)) goto LAB_07d72adc;
            uVar9 = FUN_07d53740(lVar18,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar5 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar18 = FUN_07d61740(*in_stack_00000148,0), lVar18 == 0)) ||
               (*(long *)(lVar18 + 0x48) == 0)) goto LAB_07d72adc;
            uVar17 = FUN_06008730(*(long *)(lVar18 + 0x48),uVar9 | iVar5 << 0x10,&stack0x00001038,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            unaff_x28 = in_stack_00000168;
            if ((uVar17 & 1) != 0) {
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
                  puVar16 = &stack0x00001038;
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
        lVar18 = *(long *)(unaff_x19 + 0x30);
        if (lVar18 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_07d72b20;
        lVar18 = *(long *)(lVar18 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x30);
        if ((lVar18 == 0) || (lVar18 = FUN_07d88988(lVar18,0), lVar18 == 0)) goto LAB_07d72adc;
        uVar9 = FUN_07d53740(lVar18,0);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        iVar5 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
        if (((*in_stack_00000148 == 0) || (lVar18 = FUN_07d61740(*in_stack_00000148,0), lVar18 == 0)
            ) || (*(long *)(lVar18 + 0x48) == 0)) goto LAB_07d72adc;
        uVar17 = FUN_06008730(*(long *)(lVar18 + 0x48),uVar9 | iVar5 << 0x10,&stack0x00001078,
                              *(undefined8 *)
                               UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
        unaff_x28 = in_stack_00000168;
        if ((uVar17 & 1) != 0) {
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
          puVar16 = &stack0x00001078;
LAB_07d711ec:
          FUN_07d580a8(puVar16,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fVar30 = 0.0;
          unaff_x28 = in_stack_00000168;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x22 + 0x19cc) = uVar9;
  }
  fVar46 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar31 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
    fVar32 = *(float *)(unaff_x22 + 0x300);
    fVar33 = (float)FUN_07d53598(&stack0x00001110,0);
    fVar32 = fVar32 - unaff_s14 * fVar33 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4));
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar32 = (float)(int)(fVar32 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar32;
    if (((uStack0000000000000104 & 1) != 0) || (*unaff_x21 == 0x200b)) {
      fVar32 = fVar32 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar32 = (float)(int)(fVar32 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar32;
    }
  }
  fVar32 = *(float *)(unaff_x22 + 0x2f8);
  fVar33 = 0.0;
  if (fVar32 != 0.0) {
    uVar9 = *unaff_x21;
    if (uVar9 != 0x200b) {
      if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar9)) ||
         (fVar33 = 0.25, (1L << ((ulong)uVar9 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar33 = 0.5;
      }
      fVar45 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar34 = (float)FUN_07d53588(&stack0x00001110,0);
      fVar33 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
               (fVar32 * fVar33 - unaff_s14 * (fVar45 * 0.5 + fVar34));
      fVar32 = fVar33 + *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar32 = (float)(int)(fVar32 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar32;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar5 = FUN_07d616d4(*in_stack_00000148,0);
  if (iVar5 == 0x1015) {
    bVar3 = false;
  }
  else {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar5 = FUN_07d616d4(*in_stack_00000148,0);
    bVar3 = iVar5 != 0x11014;
  }
  if ((cVar19 == '\0') && (*unaff_x28 == '\x01')) {
    lVar18 = *(long *)(unaff_x19 + 0x30);
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    if ((*(byte *)(lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
    goto LAB_07d701e4;
    if (bVar3) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar5 = FUN_07d616c4(*in_stack_00000148,0);
        fVar45 = (float)(iVar5 + 1);
      }
      else {
        lVar18 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar18 == 0) goto LAB_07d72adc;
        uVar17 = thunk_FUN_07c662cc(lVar18,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar17 & 1) == 0) goto LAB_07d70594;
        lVar18 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar18 == 0) goto LAB_07d72adc;
        fVar45 = (float)thunk_FUN_07c69050(lVar18,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar32 = (float)FUN_07d617a8(*in_stack_00000148,0);
      fVar32 = fVar45 * fVar32 * 0.25;
      if (fVar45 < in_stack_00000138._4_4_ + fVar32) {
        in_stack_00000138._4_4_ = fVar45 - fVar32;
      }
    }
    else {
      fVar32 = 0.0;
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
        iVar5 = FUN_07d616c4(*in_stack_00000148,0);
        fVar45 = (float)(iVar5 + 1);
      }
      else {
        lVar18 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar18 == 0) goto LAB_07d72adc;
        uVar17 = thunk_FUN_07c662cc(lVar18,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar17 & 1) == 0) goto LAB_07d70290;
        lVar18 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar18 == 0) goto LAB_07d72adc;
        fVar45 = (float)thunk_FUN_07c69050(lVar18,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar32 = fVar45 * *(float *)(*in_stack_00000148 + 400) * 0.25;
      if (fVar45 < in_stack_00000138._4_4_ + fVar32) {
        in_stack_00000138._4_4_ = fVar45 - fVar32;
      }
    }
    else {
      fVar32 = 0.0;
    }
  }
  fVar50 = *(float *)(unaff_x22 + 0x300);
  fVar45 = (float)FUN_07d53588(&stack0x00001110,0);
  fVar47 = *(float *)(unaff_x22 + 0x19b0);
  fVar34 = (float)FUN_07d57ab0(&stack0x00001100,0);
  fVar50 = fVar50 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 * (fVar34 + ((fVar45 * fVar47 - in_stack_00000138._4_4_) - fVar32));
  fVar45 = (float)FUN_07d53590(&stack0x00001110,0);
  fVar34 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar45 = unaff_s14 * (in_stack_00000138._4_4_ + fVar45 + fVar34);
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar45 = (float)(int)(fVar45 + unaff_s15);
  }
  in_stack_00000150 =
       *(float *)(unaff_x22 + 0x188) + ((fVar35 + fVar45) - *(float *)(unaff_x22 + 0x2e8));
  fVar45 = (float)FUN_07d53580(&stack0x00001110,0);
  fVar47 = in_stack_00000150 -
           unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar45);
  fVar45 = (float)FUN_07d53578(&stack0x00001110,0);
  fVar45 = fVar50 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 *
                    (fVar32 + fVar32 +
                    in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                    fVar45 * *(float *)(unaff_x22 + 0x19b0));
  fVar48 = fVar45;
  fVar34 = fVar50;
  if (((cVar19 == '\0') && (*unaff_x28 == '\x01')) && ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0))
  {
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    iVar5 = *(int *)(unaff_x22 + 0x19ac);
    fVar34 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar37 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar49 = *(float *)(unaff_x22 + 0xf0);
    fVar51 = *(float *)(unaff_x22 + 0x188);
    fVar48 = (float)iVar5 * fStack0000000000000054;
    fVar44 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar44 = fVar44 * fVar49 * (fVar34 - (fVar37 + fVar51)) * 0.5;
    fVar34 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar51 = fVar48 * unaff_s14 * ((fVar32 + in_stack_00000138._4_4_ + fVar34) - fVar44);
    fVar37 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar49 = (float)FUN_07d53580(&stack0x00001110,0);
    in_stack_00000150 = in_stack_00000150 + 0.0;
    fVar34 = fVar50 + fVar51;
    fVar47 = fVar47 + 0.0;
    fVar48 = fVar48 * unaff_s14 *
                      ((((fVar37 - fVar49) - in_stack_00000138._4_4_) - fVar32) - fVar44);
    fVar50 = fVar50 + fVar48;
    fVar48 = fVar45 + fVar48;
    unaff_s15 = in_stack_000000c0._4_4_;
    fVar45 = fVar45 + fVar51;
  }
  uVar12 = *in_stack_000000c8;
  uVar11 = in_stack_000000c8[1];
  if (DAT_08974d8a == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  uVar38 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  uVar40 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  if (DAT_015c5bb4 <
      (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar40 >> 0x20) +
      (float)uVar11 * (float)uVar40 +
      (float)uVar12 * (float)uVar38 +
      (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar38 >> 0x20)) {
    fVar32 = 0.0;
    auVar39._4_12_ = SUB1612(ZEXT816(0),4);
    auVar39._0_4_ = fVar47;
    uVar12 = auVar39._0_8_;
    uVar17 = (ulong)(uint)in_stack_00000150;
    uVar11 = uVar12;
  }
  else {
    FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                 *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                 *(undefined4 *)(unaff_x22 + 0x19c8),0);
    fVar48 = (fVar45 + fVar50) * 0.5;
    fVar44 = (fVar47 + in_stack_00000150) * 0.5;
    fVar32 = 0.0;
    auVar39 = ZEXT416((uint)(in_stack_00000150 - fVar44));
    fVar34 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar34 = fVar48 + fVar34;
    fVar45 = 0.0;
    uVar17 = CONCAT44(fVar32 + 0.0,fVar44 + auVar39._0_4_);
    auVar39 = ZEXT416((uint)(fVar47 - fVar44));
    fVar50 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar50 = fVar48 + fVar50;
    fVar32 = 0.0;
    uVar12 = CONCAT44(fVar45 + 0.0,fVar44 + auVar39._0_4_);
    auVar39 = ZEXT416((uint)(in_stack_00000150 - fVar44));
    fVar45 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar45 = fVar48 + fVar45;
    fVar37 = 0.0;
    in_stack_00000150 = fVar44 + auVar39._0_4_;
    fVar32 = fVar32 + 0.0;
    auVar39 = ZEXT416((uint)(fVar47 - fVar44));
    fVar47 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar48 = fVar48 + fVar47;
    unaff_s15 = in_stack_000000c0._4_4_;
    uVar11 = CONCAT44(fVar37 + 0.0,fVar44 + auVar39._0_4_);
  }
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar18 + 0x118) = fVar50;
  *(undefined8 *)(lVar18 + 0x11c) = uVar12;
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar18 + 0x10c) = fVar34;
  *(ulong *)(lVar18 + 0x110) = uVar17;
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar18 + 0x124) = fVar45;
  *(ulong *)(lVar18 + 0x128) = CONCAT44(fVar32,in_stack_00000150);
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar18 = lVar18 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar18 + 0x130) = fVar48;
  *(undefined8 *)(lVar18 + 0x134) = uVar11;
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar9 = *(uint *)(unaff_x22 + 0x334);
  fVar32 = *(float *)(unaff_x22 + 0x300);
  fVar34 = (float)FUN_07d57ab0(&stack0x00001100,0);
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
  fVar32 = fVar32 + unaff_s14 * fVar34;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar32 = (float)(int)(fVar32 + unaff_s15);
  }
  *(float *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x13c) = fVar32;
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar9 = *(uint *)(unaff_x22 + 0x334);
  fVar34 = *(float *)(unaff_x22 + 0x2e8);
  fVar47 = *(float *)(unaff_x22 + 0x188);
  fVar32 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
  fVar32 = (fVar35 - fVar34) + fVar47 + unaff_s14 * fVar32;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar32 = (float)(int)(fVar32 + unaff_s15);
  }
  *(float *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x144) = fVar32;
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  unaff_w29 = *(uint *)(unaff_x22 + 0x334);
  if (*(uint *)(lVar18 + 0x18) <= unaff_w29) goto LAB_07d72b20;
  lVar18 = lVar18 + 0x20;
  *(float *)(lVar18 + (long)(int)unaff_w29 * (long)(int)unaff_w27 + 0x13c) =
       (fVar45 - fVar50) / ((float)uVar17 - (float)uVar12);
  fVar46 = unaff_s14 * (fStack00000000000000f8 + fVar46);
  if (*unaff_x28 == '\x01') {
    fVar46 = fVar46 / fVar43;
    fVar31 = (unaff_s14 * (fStack00000000000000f4 + fVar31)) / fVar43;
  }
  else {
    fVar31 = unaff_s14 * (fStack00000000000000f4 + fVar31);
  }
  in_stack_00000150 = *(float *)(unaff_x22 + 0x338);
  unaff_s13 = 0.0;
  unaff_s12 = 1.0;
  if (((float)unaff_w29 != in_stack_00000150 & uStack0000000000000104) == 0) {
    fVar45 = *(float *)(unaff_x22 + 0x188);
    fVar46 = fVar46 + fVar45;
    fVar31 = fVar31 + fVar45;
    fVar32 = fVar46;
    fVar35 = fVar31;
    if (fVar45 != 0.0) {
      fVar32 = (fVar46 - fVar45) / *(float *)(unaff_x22 + 0xf0);
      fVar35 = (fVar31 - fVar45) / *(float *)(unaff_x22 + 0xf0);
      if (fVar32 <= fVar46) {
        fVar32 = fVar46;
      }
      if (fVar31 <= fVar35) {
        fVar35 = fVar31;
      }
    }
    lVar18 = lVar18 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
    fVar45 = fVar32;
    if (fVar32 <= *(float *)(unaff_x22 + 0x348)) {
      fVar45 = *(float *)(unaff_x22 + 0x348);
    }
    fVar34 = fVar35;
    if (*(float *)(unaff_x22 + 0x34c) <= fVar35) {
      fVar34 = *(float *)(unaff_x22 + 0x34c);
    }
    *(float *)(unaff_x22 + 0x348) = fVar45;
    *(float *)(unaff_x22 + 0x34c) = fVar34;
    *(float *)(lVar18 + 300) = fVar32;
    *(float *)(lVar18 + 0x130) = fVar35;
    fVar32 = *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar18 + 0x120) = fVar46 - fVar32;
    *(float *)(lVar18 + 0x128) = fVar31 - fVar32;
    *(float *)(unaff_x22 + 900) = fVar31 - fVar32;
    if (*(int *)(unaff_x22 + 0x350) == 0) {
      *(float *)(unaff_x22 + 0x380) = fVar45;
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar31 = *(float *)(unaff_x22 + 0x37c);
      fVar32 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      fVar43 = (unaff_s14 * fVar32) / fVar43;
      if (fVar31 <= fVar43) {
        fVar31 = fVar43;
      }
      fVar32 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 0x37c) = fVar31;
    }
    if (fVar32 == 0.0) {
      fVar43 = *(float *)(unaff_x22 + 0x19d0);
      if (*(float *)(unaff_x22 + 0x19d0) <= fVar46) {
        fVar43 = fVar46;
      }
      *(float *)(unaff_x22 + 0x19d0) = fVar43;
    }
  }
  else {
    lVar18 = lVar18 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x348);
    *(undefined8 *)(lVar18 + 300) = uVar11;
    fVar32 = *(float *)(unaff_x22 + 0x2e8);
    fVar43 = (float)((ulong)uVar11 >> 0x20) - fVar32;
    *(float *)(lVar18 + 0x120) = (float)uVar11 - fVar32;
    *(float *)(lVar18 + 0x128) = fVar43;
    *(float *)(unaff_x22 + 900) = fVar43;
  }
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar9 = *unaff_x25;
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
  lVar18 = lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar18 + 0x194) = 0;
  uVar7 = *unaff_x21;
  if (uVar7 == 9) {
LAB_07d70d34:
    *(undefined1 *)(lVar18 + 0x194) = 1;
    pfVar22 = in_stack_000000a0;
    pfVar24 = in_stack_000000b8;
    if (uVar52 == uVar10) {
      lVar18 = *(long *)(unaff_x19 + 0x48);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      pfVar24 = (float *)(lVar18 + 100);
      pfVar22 = (float *)(lVar18 + 0x68);
    }
    fVar46 = *pfVar24;
    fVar31 = *pfVar22;
    fVar43 = *(float *)(unaff_x22 + 0x368);
    fVar35 = 0.0;
    fVar32 = *(float *)(unaff_x22 + 0x300);
    fStack0000000000000100 = (fStack00000000000000b4 - fVar46) - fVar31;
    bVar3 = true;
    if ((fVar43 <= fStack0000000000000100) && (bVar3 = false, !NAN(fVar43))) {
      bVar3 = fVar43 == -1.0;
    }
    if (!bVar3) {
      fStack0000000000000100 = fVar43;
    }
    fVar43 = 0.0;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      fVar43 = (float)FUN_07d53598(&stack0x00001110,0);
      uVar7 = *unaff_x21;
    }
    if (uVar7 != 0xad) {
      fStack00000000000000e8 = unaff_s14;
    }
    if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar35 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    uVar9 = *unaff_x25;
    if (fStack00000000000000a8 <
        (*(float *)(unaff_x22 + 0x380) -
        (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar35) {
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar9;
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
        iVar8 = FUN_07d79b5c();
        iVar5 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
        unaff_w26 = unaff_w26 + 1;
        *(int *)(unaff_x22 + 0x334) = iVar5 + -1;
        unaff_x28 = in_stack_00000168;
        unaff_s12 = 1.0;
        in_stack_0000112c = iVar8 - 1;
        in_stack_00001190 = CONCAT44(0x2026,iVar5 + -1);
      }
      goto LAB_07d72ac8;
    }
LAB_07d70fbc:
    uVar7 = uVar9;
    if ((bVar4 & fStack0000000000000100 <
                 ABS(fVar32) +
                 fVar43 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) == 1) {
      if (((iStack00000000000000b0 != 0) && (iStack00000000000000b0 != 3)) &&
         (uVar9 != *(uint *)(unaff_x22 + 0x338))) {
        in_stack_0000112c = FUN_07d79b5c();
        fVar43 = *(float *)(unaff_x22 + 0x2ec);
        if (fVar43 == DAT_015c55ac) {
          lVar18 = *(long *)(unaff_x19 + 0x30);
          if (lVar18 == 0) goto LAB_07d72adc;
          uVar7 = *unaff_x25;
          if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_07d72b20;
          fVar32 = *(float *)(unaff_x22 + 0x2e8);
          fVar43 = 0.0;
          if ((0.0 < fVar32) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar43 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          fVar43 = *(float *)(lVar18 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x14c) +
                   (fVar43 - *(float *)(unaff_x22 + 0x34c)) +
                   in_stack_00000020._4_4_ *
                   (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
        }
        else {
          *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
          lVar18 = *(long *)(unaff_x19 + 0x30);
          if (lVar18 == 0) goto LAB_07d72adc;
          fVar32 = *(float *)(unaff_x22 + 0x2e8);
          uVar7 = *(uint *)(unaff_x22 + 0x334);
        }
        if ((*(uint *)(lVar18 + 0x18) <= uVar7) ||
           (uVar26 = uVar7 - 1, *(uint *)(lVar18 + 0x18) <= uVar26)) goto LAB_07d72b20;
        piVar25 = (int *)(lVar18 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27);
        fVar43 = (fStack0000000000000014 + fVar43 + *(float *)(unaff_x22 + 0x380) + fVar32) -
                 (float)piVar25[0x4c];
        if ((*(int *)(lVar18 + 0x20 + (long)(int)uVar26 * (long)(int)unaff_w27) != 0xad ||
             (in_stack_00000038._4_4_ & 1) != 0) ||
           ((*(int *)(in_stack_00000140 + 100) != 0 && (fStack00000000000000a8 <= fVar43)))) {
          if (*piVar25 != 0xad) {
            if ((((in_stack_00000060._4_4_ & 1) != 0) &&
                (iVar5 = *(int *)(unaff_x22 + 0x11f0), iVar5 != -1)) &&
               (iVar5 != in_stack_00000008._4_4_)) {
              in_stack_0000112c = FUN_07d79b5c();
              lVar18 = *(long *)(unaff_x19 + 0x30);
              if (lVar18 == 0) goto LAB_07d72adc;
              uVar7 = *unaff_x25;
              uVar26 = uVar7 - 1;
              if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_07d72b20;
              in_stack_00000008._4_4_ = iVar5;
              if (*(int *)(lVar18 + (long)(int)uVar26 * (long)(int)unaff_w27 + 0x20) == 0xad) {
                in_stack_00000038._4_4_ = 0;
                in_stack_0000112c = in_stack_0000112c - 1;
                *unaff_x25 = uVar26;
                unaff_x28 = in_stack_00000168;
                in_stack_00001190 = CONCAT44(0x2d,uVar26);
                goto LAB_07d72ac8;
              }
            }
            if (fStack00000000000000a8 < fVar43) {
              if (*(int *)(unaff_x22 + 0x35c) == -1) {
                *(uint *)(unaff_x22 + 0x35c) = uVar7;
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
                      iVar8 = FUN_07d79b5c();
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
                in_stack_00000060._4_4_ = 1;
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
                  uVar9 = uVar7;
                }
LAB_07d71040:
                unaff_x28 = in_stack_00000168;
                in_stack_00001190 = CONCAT44(3,uVar9);
              }
            }
            else {
              FUN_07d7bce4();
              in_stack_00000038._4_4_ = 0;
              in_stack_00000060._4_4_ = 1;
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
          *unaff_x25 = uVar26;
          unaff_x28 = in_stack_00000168;
          in_stack_00001190 = CONCAT44(0x2d,uVar26);
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
          iVar8 = FUN_07d79b5c();
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
        uVar9 = *(uint *)(unaff_x22 + 0x334);
        goto LAB_07d71040;
      }
      if (iVar5 == 3) goto LAB_07d7102c;
    }
LAB_07d7166c:
    if ((uStack0000000000000104 & 1) == 0) {
      if (*unaff_x21 == 0xad) {
        lVar18 = *(long *)(unaff_x19 + 0x30);
        if (lVar18 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_07d72b20;
        *(undefined1 *)(lVar18 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x194) = 0;
      }
      else {
        if (*in_stack_00000168 == '\x02') {
          FUN_07d7a738();
        }
        else if (*in_stack_00000168 == '\x01') {
          FUN_07d79ee4();
        }
        uVar9 = *unaff_x25;
        if ((uStack0000000000000058 & 1) != 0) {
          *(uint *)(unaff_x22 + 0x340) = uVar9;
        }
        *(uint *)(unaff_x22 + 0x344) = uVar9;
        *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
        lVar18 = *(long *)(unaff_x19 + 0x48);
        if (lVar18 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uStack0000000000000058 = 0;
        lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(float *)(lVar18 + 100) = fVar46;
        *(float *)(lVar18 + 0x68) = fVar31;
      }
    }
    else {
      lVar18 = *(long *)(unaff_x19 + 0x30);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_07d72b20;
      *(undefined1 *)(lVar18 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x194) = 0;
      lVar18 = *(long *)(unaff_x19 + 0x48);
      if (lVar18 == 0) goto LAB_07d72adc;
      uVar9 = *(uint *)(lVar18 + 0x18);
      if (uVar9 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar18 = lVar18 + 0x20;
      lVar23 = lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      iVar5 = *(int *)(lVar23 + 0x10) + 1;
      *(int *)(lVar23 + 0x10) = iVar5;
      uVar7 = *(uint *)(unaff_x22 + 0x350);
      *(int *)(unaff_x22 + 0x358) = iVar5;
      if (uVar9 <= uVar7) goto LAB_07d72b20;
      lVar23 = lVar18 + (long)(int)uVar7 * 0x60;
      *(float *)(lVar23 + 0x44) = fVar46;
      *(float *)(lVar23 + 0x48) = fVar31;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      if (*unaff_x21 == 0xa0) {
        *(int *)(lVar18 + (long)(int)uVar7 * 0x60) = *(int *)(lVar18 + (long)(int)uVar7 * 0x60) + 1;
      }
    }
  }
  else {
    if (iStack000000000000005c == 2) {
      if ((uStack0000000000000104 & 1) == 0 && uVar7 != 0x200b) goto LAB_07d70e7c;
      goto LAB_07d70d34;
    }
    if ((uStack0000000000000104 & 1) == 0) {
LAB_07d70e7c:
      if ((uVar7 != 3) && (uVar7 != 0x200b)) {
        if (uVar7 != 0xad) goto LAB_07d70d34;
        goto LAB_07d70e98;
      }
    }
    else {
LAB_07d70e98:
      if (uVar7 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
    }
    if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
    if (*(int *)(in_stack_00000140 + 100) == 6) {
      if ((uVar7 & 0xfffffffe) != 10) {
        if ((0x22 < uVar7 - 0x2007) ||
           ((1L << ((ulong)(uVar7 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
        goto LAB_07d71420;
      }
      fVar43 = 0.0;
      if ((0.0 < fVar32) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        fVar43 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
      }
      if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar32)) + fVar43 <=
          fStack00000000000000a8) goto LAB_07d71228;
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar9;
      }
      in_stack_0000112c = FUN_07d79b5c();
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
      lVar18 = *(long *)(unaff_x19 + 0x48);
      if (lVar18 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(int *)(lVar18 + 0x30) = *(int *)(lVar18 + 0x30) + 1;
      *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
      uVar7 = *unaff_x21;
LAB_07d7147c:
      if (uVar7 == 0xa0) {
        lVar18 = *(long *)(unaff_x19 + 0x48);
        if (lVar18 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar18 + 0x20) = *(int *)(lVar18 + 0x20) + 1;
      }
    }
    else {
      if ((0x22 < uVar7 - 0x2007) || ((1L << ((ulong)(uVar7 - 0x2007) & 0x3f) & 0x600000001U) == 0))
      {
LAB_07d713f4:
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_066bcb80(uVar7,0);
        uVar7 = *unaff_x21;
        if ((uVar17 & 1) != 0) goto LAB_07d71420;
        goto LAB_07d7147c;
      }
LAB_07d71420:
      if (((uVar7 != 0xad) && (uVar7 != 0x200b)) && (uVar7 != 0x2060)) goto LAB_07d71440;
    }
  }
  if ((uVar52 == uVar10) && (*(int *)(in_stack_00000140 + 100) == 1)) {
    if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar46 = *(float *)(unaff_x22 + 0xf8);
      fVar43 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar31 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      lVar18 = *(long *)(unaff_x22 + 0x19f8);
      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_07d72adc;
      fVar35 = *(float *)(unaff_x22 + 0xf0);
      fVar45 = *(float *)(lVar18 + 0x2c);
      fVar32 = (float)FUN_07d5378c(*(long *)(lVar18 + 0x20),0);
      uVar11 = *(undefined8 *)in_stack_000000b8;
      fVar32 = (fVar46 / fVar43) * fVar31 * fVar35 * fVar45 * fVar32;
      if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
        lVar18 = *(long *)(unaff_x19 + 0x30);
        if (lVar18 == 0) goto LAB_07d72adc;
        uVar9 = *(int *)(unaff_x22 + 0x334) - 1;
        if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar46 = *(float *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x60);
        fVar43 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar31 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar18 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_07d72adc;
        fVar35 = *(float *)(unaff_x22 + 0xf0);
        fVar45 = *(float *)(lVar18 + 0x2c);
        fVar32 = (float)FUN_07d5378c(*(long *)(lVar18 + 0x20),0);
        lVar18 = *(long *)(unaff_x19 + 0x48);
        if (lVar18 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uVar11 = *(undefined8 *)(lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
        fVar32 = (fVar46 / fVar43) * fVar31 * fVar35 * fVar45 * fVar32;
      }
      fVar43 = 0.0;
      fVar46 = *(float *)(unaff_x22 + 0x300);
      if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
        if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
           (lVar18 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar18 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar18,0);
        fVar43 = (float)FUN_07d53598(&stack0x000010e0,0);
      }
      fVar31 = (fStack00000000000000b4 - (float)uVar11) - (float)((ulong)uVar11 >> 0x20);
      fVar35 = *(float *)(unaff_x22 + 0x368);
      bVar3 = true;
      if ((fVar35 <= fVar31) && (bVar3 = false, !NAN(fVar35))) {
        bVar3 = fVar35 == -1.0;
      }
      if (!bVar3) {
        fVar31 = fVar35;
      }
      if (ABS(fVar46) + fVar32 * fVar43 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar31) {
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
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
  uVar9 = *(uint *)(unaff_x22 + 0x350);
  *(uint *)(lVar18 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) = uVar9;
  if ((uVar52 == uVar10) ||
     ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar18 = *(long *)(unaff_x19 + 0x48);
    if (lVar18 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
    if (*(int *)(lVar18 + (long)(int)uVar9 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
  }
  else {
    lVar18 = *(long *)(unaff_x19 + 0x48);
    if (lVar18 == 0) goto LAB_07d72adc;
LAB_07d71a94:
    if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
    *(undefined4 *)(lVar18 + (long)(int)uVar9 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160);
  }
  uVar9 = *unaff_x21;
  if (uVar9 != 0x200b) {
    if (uVar9 == 9) {
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar43 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      bVar4 = FUN_07d617d8(*in_stack_00000148,0);
      fVar31 = *(float *)(unaff_x22 + 0x300);
      cVar19 = *(char *)(unaff_x22 + 0xf4);
      fVar46 = unaff_s14 * fVar43 * (float)bVar4;
      fVar43 = fVar46 * (float)(int)(fVar31 / fVar46);
      if (fVar43 <= fVar31) {
        fVar43 = fVar31 + fVar46;
      }
    }
    else {
      fVar43 = *(float *)(unaff_x22 + 0x2f8);
      if (fVar43 == 0.0) {
        fVar46 = *(float *)(unaff_x22 + 0x300);
        if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
          fVar43 = (float)FUN_07d57ad0(&stack0x00001100,0);
          if (*in_stack_00000148 != 0) {
            fVar31 = (float)FUN_07d61798(*in_stack_00000148,0);
            cVar19 = *(char *)(unaff_x22 + 0xf4);
            fVar46 = fVar46 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              unaff_s14 * fVar43 +
                              in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar30 + fVar31));
            if (cVar19 != '\0') {
              fVar46 = (float)(int)(fVar46 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x300) = fVar46;
            if (((uStack0000000000000104 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
            fVar43 = fVar46 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
            goto FUN_07d71c94;
          }
          goto LAB_07d72adc;
        }
        fVar43 = (float)FUN_07d53598(&stack0x00001110,0);
        fVar32 = *(float *)(unaff_x22 + 0x19b0);
        fVar31 = (float)FUN_07d57ad0(&stack0x00001100,0);
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar35 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
        fVar46 = fVar46 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          unaff_s14 * (fVar43 * fVar32 + fVar31) +
                          in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar30 + fVar35));
      }
      else {
        if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar9 < 0x3b)) &&
           ((1L << ((ulong)uVar9 & 0x3f) & 0x400500000000000U) != 0)) {
          fVar43 = fVar43 * 0.5;
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar46 = *(float *)(unaff_x22 + 0x300);
        fVar31 = (float)FUN_07d61798(*in_stack_00000148,0);
        fVar46 = fVar46 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          (fVar43 - fVar33) + in_stack_000000d8._4_4_ * (fVar30 + fVar31));
      }
      cVar19 = *(char *)(unaff_x22 + 0xf4);
      if (cVar19 != '\0') {
        fVar46 = (float)(int)(fVar46 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar46;
      if (((uStack0000000000000104 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
      fVar43 = fVar46 + in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
    }
FUN_07d71c94:
    if (cVar19 != '\0') {
      fVar43 = (float)(int)(fVar43 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar43;
  }
LAB_07d71ca8:
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar9 = *unaff_x25;
  uVar7 = (uint)*(undefined8 *)(lVar18 + 0x18);
  if (uVar7 <= uVar9) goto LAB_07d72b20;
  *(undefined4 *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x158) =
       *(undefined4 *)(unaff_x22 + 0x300);
  unaff_w24 = *unaff_x21;
  if ((int)unaff_w24 < 0xd) {
    if ((1 < unaff_w24 - 10) && (unaff_w24 != 3)) {
LAB_07d71d38:
      if ((unaff_w24 != 0x2d || uVar52 != uVar10) && (uVar9 != uStack000000000000004c))
      goto LAB_07d72314;
    }
  }
  else if (unaff_w24 != 0x2028) {
    if (unaff_w24 != 0xd) goto LAB_07d71d38;
    fVar43 = *(float *)(unaff_x22 + 0x308) + 0.0;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar43 = (float)(int)(fVar43 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar43;
    if (uVar9 != uStack000000000000004c) {
      unaff_w24 = 0xd;
      goto LAB_07d72314;
    }
  }
  if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
    fVar43 = *(float *)(unaff_x22 + 0x348);
    fVar46 = *(float *)(unaff_x22 + 0x15b8);
    if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar43 = fVar43 - fVar46;
    if ((fStack0000000000000054 < ABS(fVar43)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      uVar36 = *(undefined4 *)(unaff_x22 + 0x338);
      uVar6 = *(undefined4 *)(unaff_x22 + 0x334);
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      FUN_07d8f610(uVar36,uVar6);
      fVar46 = fVar43 + *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar43;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar46 = (float)(int)(fVar46 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x2e8) = fVar46;
      if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
        Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                  (&stack0x00000170,unaff_x22 + 0x15f0,
                   *(undefined8 *)
                    Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                  );
        memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
        thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
        *(float *)(unaff_x22 + 0xb00) = fVar43 + *(float *)(unaff_x22 + 0xb00);
        *(float *)(unaff_x22 + 0xb34) = fVar43 + *(float *)(unaff_x22 + 0xb34);
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  fVar46 = *(float *)(unaff_x22 + 0x2e8);
  fVar31 = *(float *)(unaff_x22 + 0x34c) - fVar46;
  fVar43 = *(float *)(unaff_x22 + 900);
  if (fVar31 <= *(float *)(unaff_x22 + 900)) {
    fVar43 = fVar31;
  }
  fVar32 = *(float *)(unaff_x22 + 0x348);
  *(float *)(unaff_x22 + 900) = fVar43;
  if (in_stack_0000119c == '\0') {
    *in_stack_00000040 = fVar43;
  }
  lVar18 = *(long *)(unaff_x19 + 0x48);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar9 = *(uint *)(unaff_x22 + 0x350);
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
  lVar13 = lVar18 + 0x20 + (long)(int)uVar9 * 0x60;
  uVar10 = *(uint *)(unaff_x22 + 0x338);
  *(uint *)(lVar13 + 0x18) = uVar10;
  lVar23 = 0x338;
  if ((int)uVar10 <= *(int *)(unaff_x22 + 0x340)) {
    lVar23 = 0x340;
  }
  uVar26 = *(uint *)(unaff_x22 + lVar23);
  *(uint *)(unaff_x22 + 0x340) = uVar26;
  *(uint *)(lVar13 + 0x1c) = uVar26;
  uVar7 = *(uint *)(unaff_x22 + 0x334);
  *(uint *)(unaff_x22 + 0x33c) = uVar7;
  *(uint *)(lVar13 + 0x20) = uVar7;
  uVar52 = *(uint *)(unaff_x22 + 0x340);
  if ((int)uVar26 <= (int)*(uint *)(unaff_x22 + 0x344)) {
    uVar52 = *(uint *)(unaff_x22 + 0x344);
  }
  *(uint *)(unaff_x22 + 0x344) = uVar52;
  *(uint *)(lVar13 + 0x24) = uVar52;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  uVar21 = uVar52;
  if ((*(uint *)(in_stack_00000140 + 0x98) & 0xfffffffe) == 2) {
    if (lVar23 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_07d72b20;
    if (*(float *)(lVar23 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x158) != 0.0) {
      uVar26 = uVar10;
      uVar21 = uVar7;
    }
  }
  lVar18 = lVar18 + 0x20 + (long)(int)uVar9 * 0x60;
  *(uint *)(lVar18 + 4) = (uVar7 - uVar10) + 1;
  iVar5 = *(int *)(in_stack_00000068 + 0x60);
  *(int *)(lVar18 + 8) = iVar5;
  *(uint *)(lVar18 + 0xc) = (uVar52 - (uVar10 + iVar5)) + 1;
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= uVar26) goto LAB_07d72b20;
  *(undefined4 *)(lVar18 + 0x50) =
       *(undefined4 *)(lVar23 + (long)(int)uVar26 * (long)(int)unaff_w27 + 0x118);
  *(float *)(lVar18 + 0x54) = fVar31;
  lVar18 = *(long *)(unaff_x19 + 0x48);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
  lVar23 = *(long *)(unaff_x19 + 0x30);
  if (lVar23 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar23 + 0x18) <= uVar21) goto LAB_07d72b20;
  fVar32 = fVar32 - fVar46;
  lVar18 = lVar18 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
  uVar36 = *(undefined4 *)(lVar23 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x124);
  *(float *)(lVar18 + 0x5c) = fVar32;
  *(undefined4 *)(lVar18 + 0x58) = uVar36;
  lVar18 = *(long *)(unaff_x19 + 0x48);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar10 = *(uint *)(unaff_x22 + 0x350);
  uVar9 = *(uint *)(lVar18 + 0x18);
  if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
    if (uVar9 <= uVar10) goto LAB_07d72b20;
    lVar23 = lVar18 + (long)(int)uVar10 * 0x60;
    fVar43 = *(float *)(lVar23 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
  }
  else {
    if (uVar9 <= uVar10) goto LAB_07d72b20;
    lVar13 = *(long *)(unaff_x19 + 0x30);
    if (lVar13 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar13 + 0x18) <= uVar21) goto LAB_07d72b20;
    lVar23 = lVar18 + (long)(int)uVar10 * 0x60;
    fVar43 = *(float *)(lVar13 + (long)(int)uVar21 * (long)(int)unaff_w27 + 0x158);
  }
  *(float *)(lVar23 + 0x48) = fVar43;
  if (uVar9 <= uVar10) goto LAB_07d72b20;
  lVar23 = lVar18 + 0x20 + (long)(int)uVar10 * 0x60;
  *(float *)(lVar23 + 0x40) = fStack0000000000000100;
  if (*(int *)(lVar23 + 4) == 1) {
    *(undefined4 *)(lVar18 + 0x20 + (long)(int)uVar10 * 0x60 + 0x4c) =
         *(undefined4 *)(unaff_x22 + 0x160);
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar43 = (float)FUN_07d61798(*in_stack_00000148,0);
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  uVar9 = *(uint *)(unaff_x22 + 0x344);
  uVar7 = (uint)*(undefined8 *)(lVar18 + 0x18);
  if (uVar7 <= uVar9) goto LAB_07d72b20;
  uVar10 = *(uint *)(unaff_x22 + 0x350);
  lVar23 = *(long *)(unaff_x19 + 0x48);
  fVar43 = (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
           (*(float *)(unaff_x22 + 0x2f4) +
           in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fVar30 + fVar43));
  if (*(char *)(lVar18 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x174) == '\0') {
    if (lVar23 == 0) goto LAB_07d72adc;
    uVar9 = *(uint *)(unaff_x22 + 0x33c);
    if (uVar7 <= uVar9) goto LAB_07d72b20;
  }
  else if (lVar23 == 0) goto LAB_07d72adc;
  bVar3 = *(uint *)(lVar23 + 0x18) <= uVar10;
  if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
    if (bVar3) goto LAB_07d72b20;
    fVar43 = -fVar43;
  }
  else if (bVar3) goto LAB_07d72b20;
  *(float *)(lVar23 + (long)(int)uVar10 * 0x60 + 0x5c) =
       *(float *)(lVar18 + 0x20 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x138) + fVar43;
  if (*(uint *)(lVar23 + 0x18) <= uVar10) goto LAB_07d72b20;
  lVar23 = lVar23 + (long)(int)uVar10 * 0x60;
  *(float *)(lVar23 + 0x54) = 0.0 - *(float *)(unaff_x22 + 0x2e8);
  *(float *)(lVar23 + 0x58) = fVar31;
  *(float *)(lVar23 + 0x4c) = fStack0000000000000048 + (fVar32 - fVar31);
  *(float *)(lVar23 + 0x50) = fVar32;
  unaff_w24 = *unaff_x21;
  if ((int)unaff_w24 < 0x2d) {
    if (1 < unaff_w24 - 10) goto code_r0x07d721d0;
  }
  else if ((1 < unaff_w24 - 0x2028) && (unaff_w24 != 0x2d)) goto LAB_07d72314;
  FUN_07d79804();
  uVar9 = *(uint *)(unaff_x22 + 0x334);
  iVar5 = *(int *)(unaff_x22 + 0x350) + 1;
  *(uint *)(unaff_x22 + 0x338) = uVar9 + 1;
  *(int *)(unaff_x22 + 0x350) = iVar5;
  *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
  if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07d72adc;
  if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar5) {
    if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07d8f790(iVar5);
    uVar9 = *unaff_x25;
  }
  lVar18 = *(long *)(unaff_x19 + 0x30);
  if (lVar18 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
  fVar30 = *(float *)(unaff_x22 + 0x2ec);
  fVar43 = *(float *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x14c);
  if (fVar30 == DAT_015c55ac) {
    if ((*unaff_x21 == 0x2029) || (fVar46 = 0.0, *unaff_x21 == 10)) {
      fVar46 = *(float *)(in_stack_00000140 + 0x94);
    }
    uVar20 = 0;
    fVar30 = fVar43 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
             in_stack_00000020._4_4_ * (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
  }
  else {
    if ((*unaff_x21 == 0x2029) || (fVar46 = 0.0, *unaff_x21 == 10)) {
      fVar46 = *(float *)(in_stack_00000140 + 0x94);
    }
    uVar20 = 1;
  }
  fVar30 = *(float *)(unaff_x22 + 0x2e8) + fVar30 + in_stack_000000d8._4_4_ * (fVar46 + 0.0);
  bVar3 = *(char *)(unaff_x22 + 0xf4) != '\0';
  *(undefined1 *)(unaff_x22 + 0x2f0) = uVar20;
  *(float *)(unaff_x22 + 0x15b8) = fVar43;
  fVar43 = *(float *)(unaff_x22 + 0x304) + 0.0 + *(float *)(unaff_x22 + 0x308);
  if (bVar3) {
    fVar30 = (float)(int)(fVar30 + unaff_s15);
  }
  *(float *)(unaff_x22 + 0x2e8) = fVar30;
  if (bVar3) {
    fVar43 = (float)(int)(fVar43 + unaff_s15);
  }
  *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
  *(float *)(unaff_x22 + 0x300) = fVar43;
  FUN_07d79804();
  FUN_07d79804();
  *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
  in_stack_00000060._4_4_ = 1;
  uStack0000000000000058 = 1;
  unaff_x28 = in_stack_00000168;
  goto LAB_07d72ac8;
code_r0x07d721d0:
  if (unaff_w24 == 3) {
    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
    unaff_w24 = 3;
    in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
  }
LAB_07d72314:
  uVar9 = *unaff_x25;
  if (uVar7 <= uVar9) goto LAB_07d72b20;
  lVar18 = lVar18 + 0x20;
  if (*(char *)(lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27 + 0x174) != '\0') {
    lVar23 = lVar18 + (long)(int)uVar9 * (long)(int)unaff_w27;
    auVar39 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
    uVar11 = *(undefined8 *)(lVar23 + 0xf8);
    auVar41 = NEON_ext(auVar39,auVar39,8,1);
    uVar12 = *(undefined8 *)(lVar23 + 0x104);
    auVar42._0_4_ = -(uint)(auVar39._0_4_ < (float)uVar11);
    auVar42._4_4_ = -(uint)(auVar39._4_4_ < (float)((ulong)uVar11 >> 0x20));
    auVar42._8_4_ = -(uint)((float)uVar12 < auVar41._0_4_);
    auVar42._12_4_ = -(uint)((float)((ulong)uVar12 >> 0x20) < auVar41._4_4_);
    auVar41._8_8_ = uVar12;
    auVar41._0_8_ = uVar11;
    auVar39 = auVar39 ^ (auVar39 ^ auVar41) & ~auVar42;
    *(long *)(in_stack_00000068 + 0x80) = auVar39._8_8_;
    *(long *)(in_stack_00000068 + 0x78) = auVar39._0_8_;
  }
  if (((iStack00000000000000b0 == 3) || (iStack00000000000000b0 == 0)) &&
     ((unaff_x28 = in_stack_00000168, 6 < *(uint *)(in_stack_00000140 + 100) ||
      ((1 << (ulong)(*(uint *)(in_stack_00000140 + 100) & 0x1f) & 0x4aU) == 0)))) goto LAB_07d72940;
  if (((uStack0000000000000104 & 1) == 0) && (unaff_w24 != 0x200b)) {
    if (unaff_w24 == 0x2d) {
      if (0 < (int)uVar9) {
        if (uVar7 <= uVar9 - 1) goto LAB_07d72b20;
        uVar36 = *(undefined4 *)(lVar18 + (ulong)(uVar9 - 1) * (ulong)unaff_w27);
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar17 = FUN_066b9610(uVar36,0);
        if ((uVar17 & 1) != 0) {
          unaff_w24 = *unaff_x21;
          goto LAB_07d72408;
        }
      }
      goto LAB_07d72410;
    }
LAB_07d72408:
    if (unaff_w24 == 0xad) goto LAB_07d72410;
    param_1 = (long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo;
    unaff_x28 = in_stack_00000168;
    if (*(char *)(unaff_x22 + 0x388) == '\0') goto code_r0x07d7264c;
    if ((in_stack_00000060._4_4_ & 1) == 0)
    goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
LAB_07d72618:
    if ((in_stack_00000038._4_4_ & 1) != 0 || *unaff_x21 != 0xad) {
LAB_07d72630:
      in_stack_00000060._4_4_ = 1;
      goto LAB_07d72934;
    }
  }
  else {
LAB_07d72410:
    unaff_x28 = in_stack_00000168;
    if (*(char *)(unaff_x22 + 0x388) == '\0') {
      unaff_w24 = *unaff_x21;
      param_1 = (long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo;
      if ((int)unaff_w24 < 0x2007) {
        if (unaff_w24 == 0x2d) {
          uVar9 = *unaff_x25 - 1;
          if (0 < (int)*unaff_x25) {
            lVar18 = *(long *)(unaff_x19 + 0x30);
            if (lVar18 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar18 + 0x18) <= uVar9) goto LAB_07d72b20;
            uVar36 = *(undefined4 *)(lVar18 + (ulong)uVar9 * (ulong)unaff_w27 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar17 = FUN_066b9610(uVar36,0);
            if ((uVar17 & 1) != 0) goto LAB_07d72940;
          }
        }
        else if (unaff_w24 == 0xa0) goto code_r0x07d7264c;
      }
      else if (((unaff_w24 - 0x2007 < 0x29) &&
               ((1L << ((ulong)(unaff_w24 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
              (unaff_w24 == 0x2060)) goto code_r0x07d7264c;
      in_stack_00000060._4_4_ = 0;
      *(undefined4 *)(unaff_x22 + 0x11f0) = 0xffffffff;
      goto LAB_07d72934;
    }
LAB_07d72418:
    if ((in_stack_00000060._4_4_ & 1) == 0) {
UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand:
      in_stack_00000060._4_4_ = 0;
      goto LAB_07d72940;
    }
    if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72618;
    if (*unaff_x21 == 0xa0) goto LAB_07d72630;
  }
  FUN_07d79804();
  in_stack_00000060._4_4_ = 1;
LAB_07d72934:
  FUN_07d79804();
  goto LAB_07d72940;
}


