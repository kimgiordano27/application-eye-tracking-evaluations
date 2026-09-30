/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.EntryPreProcessor$$DoEvaluate
ENTRY_POINT: 07d71e38
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


void UnityEngine_UIElements_UIR_EntryPreProcessor__DoEvaluate(undefined8 *param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  char cVar16;
  undefined1 uVar17;
  uint uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  float *pfVar23;
  int *piVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long unaff_x19;
  long *plVar28;
  long unaff_x20;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar29;
  long unaff_x23;
  uint *unaff_x25;
  uint unaff_w27;
  char *unaff_x28;
  uint unaff_w29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float unaff_s9;
  float fVar47;
  float fVar48;
  float unaff_s12;
  float fVar49;
  float fVar50;
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
  char *in_stack_00000168;
  uint in_stack_000010fc;
  uint in_stack_0000112c;
  uint uVar51;
  undefined8 in_stack_00001190;
  char in_stack_0000119c;
  
  uVar2 = in_stack_00000060;
code_r0x07d71e38:
  Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
            (&stack0x00000170,param_2,*param_1);
  memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
  thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
  *(float *)(unaff_x22 + 0xb00) = unaff_s9 + *(float *)(unaff_x22 + 0xb00);
  *(float *)(unaff_x22 + 0xb34) = unaff_s9 + *(float *)(unaff_x22 + 0xb34);
  memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
  FUN_05913b64(unaff_x22 + unaff_x20,&stack0x000011a0,
               *(undefined8 *)
                Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
LAB_07d71ea8:
  fVar36 = *(float *)(unaff_x22 + 0x2e8);
  fVar46 = *(float *)(unaff_x22 + 0x34c) - fVar36;
  fVar37 = *(float *)(unaff_x22 + 900);
  if (fVar46 <= *(float *)(unaff_x22 + 900)) {
    fVar37 = fVar46;
  }
  fVar39 = *(float *)(unaff_x22 + 0x348);
  *(float *)(unaff_x22 + 900) = fVar37;
  if (in_stack_0000119c == '\0') {
    *in_stack_00000040 = fVar37;
  }
  lVar20 = *(long *)(unaff_x19 + 0x48);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar5 = *(uint *)(unaff_x22 + 0x350);
  if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
  lVar21 = lVar20 + 0x20 + (long)(int)uVar5 * 0x60;
  uVar10 = *(uint *)(unaff_x22 + 0x338);
  *(uint *)(lVar21 + 0x18) = uVar10;
  lVar27 = 0x338;
  if ((int)uVar10 <= *(int *)(unaff_x22 + 0x340)) {
    lVar27 = 0x340;
  }
  uVar25 = *(uint *)(unaff_x22 + lVar27);
  *(uint *)(unaff_x22 + 0x340) = uVar25;
  *(uint *)(lVar21 + 0x1c) = uVar25;
  uVar8 = *(uint *)(unaff_x22 + 0x334);
  *(uint *)(unaff_x22 + 0x33c) = uVar8;
  *(uint *)(lVar21 + 0x20) = uVar8;
  uVar51 = *(uint *)(unaff_x22 + 0x340);
  if ((int)uVar25 <= (int)*(uint *)(unaff_x22 + 0x344)) {
    uVar51 = *(uint *)(unaff_x22 + 0x344);
  }
  *(uint *)(unaff_x22 + 0x344) = uVar51;
  *(uint *)(lVar21 + 0x24) = uVar51;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  uVar18 = uVar51;
  if ((*(uint *)(unaff_x23 + 0x98) & 0xfffffffe) == 2) {
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_07d72b20;
    if (*(float *)(lVar27 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x158) != 0.0) {
      uVar25 = uVar10;
      uVar18 = uVar8;
    }
  }
  lVar20 = lVar20 + 0x20 + (long)(int)uVar5 * 0x60;
  *(uint *)(lVar20 + 4) = (uVar8 - uVar10) + 1;
  iVar6 = *(int *)(in_stack_00000068 + 0x60);
  *(int *)(lVar20 + 8) = iVar6;
  *(uint *)(lVar20 + 0xc) = (uVar51 - (uVar10 + iVar6)) + 1;
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_07d72b20;
  *(undefined4 *)(lVar20 + 0x50) =
       *(undefined4 *)(lVar27 + (long)(int)uVar25 * (long)(int)unaff_w27 + 0x118);
  *(float *)(lVar20 + 0x54) = fVar46;
  lVar20 = *(long *)(unaff_x19 + 0x48);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
  lVar27 = *(long *)(unaff_x19 + 0x30);
  if (lVar27 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_07d72b20;
  fVar39 = fVar39 - fVar36;
  lVar20 = lVar20 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
  uVar34 = *(undefined4 *)(lVar27 + (long)(int)uVar18 * (long)(int)unaff_w27 + 0x124);
  *(float *)(lVar20 + 0x5c) = fVar39;
  *(undefined4 *)(lVar20 + 0x58) = uVar34;
  lVar20 = *(long *)(unaff_x19 + 0x48);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar10 = *(uint *)(unaff_x22 + 0x350);
  uVar5 = *(uint *)(lVar20 + 0x18);
  if (*(char *)(unaff_x23 + 0xa0) == '\0') {
    if (uVar5 <= uVar10) goto LAB_07d72b20;
    lVar27 = lVar20 + (long)(int)uVar10 * 0x60;
    fVar37 = *(float *)(lVar27 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
  }
  else {
    if (uVar5 <= uVar10) goto LAB_07d72b20;
    lVar21 = *(long *)(unaff_x19 + 0x30);
    if (lVar21 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar21 + 0x18) <= uVar18) goto LAB_07d72b20;
    lVar27 = lVar20 + (long)(int)uVar10 * 0x60;
    fVar37 = *(float *)(lVar21 + (long)(int)uVar18 * (long)(int)unaff_w27 + 0x158);
  }
  *(float *)(lVar27 + 0x48) = fVar37;
  if (uVar5 <= uVar10) goto LAB_07d72b20;
  lVar27 = lVar20 + 0x20 + (long)(int)uVar10 * 0x60;
  *(float *)(lVar27 + 0x40) = fStack0000000000000100;
  if (*(int *)(lVar27 + 4) == 1) {
    *(undefined4 *)(lVar20 + 0x20 + (long)(int)uVar10 * 0x60 + 0x4c) =
         *(undefined4 *)(unaff_x22 + 0x160);
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  fVar37 = (float)FUN_07d61798(*in_stack_00000148,0);
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar5 = *(uint *)(unaff_x22 + 0x344);
  uVar22 = *(undefined8 *)(lVar20 + 0x18);
  if ((uint)uVar22 <= uVar5) goto LAB_07d72b20;
  uVar10 = *(uint *)(unaff_x22 + 0x350);
  lVar27 = *(long *)(unaff_x19 + 0x48);
  fVar37 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
           (*(float *)(unaff_x22 + 0x2f4) +
           in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fStack00000000000000d4 + fVar37));
  if (*(char *)(lVar20 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x174) == '\0') {
    if (lVar27 == 0) goto LAB_07d72adc;
    uVar5 = *(uint *)(unaff_x22 + 0x33c);
    if ((uint)uVar22 <= uVar5) goto LAB_07d72b20;
  }
  else if (lVar27 == 0) goto LAB_07d72adc;
  bVar3 = *(uint *)(lVar27 + 0x18) <= uVar10;
  if (*(char *)(unaff_x23 + 0x82) == '\0') {
    if (bVar3) goto LAB_07d72b20;
    fVar37 = -fVar37;
  }
  else if (bVar3) goto LAB_07d72b20;
  *(float *)(lVar27 + (long)(int)uVar10 * 0x60 + 0x5c) =
       *(float *)(lVar20 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x138) + fVar37;
  if (*(uint *)(lVar27 + 0x18) <= uVar10) goto LAB_07d72b20;
  lVar27 = lVar27 + (long)(int)uVar10 * 0x60;
  *(float *)(lVar27 + 0x54) = unaff_s13 - *(float *)(unaff_x22 + 0x2e8);
  *(float *)(lVar27 + 0x58) = fVar46;
  *(float *)(lVar27 + 0x4c) = fStack0000000000000048 + (fVar39 - fVar46);
  *(float *)(lVar27 + 0x50) = fVar39;
  uVar5 = *unaff_x21;
  if ((int)uVar5 < 0x2d) {
    if (uVar5 - 10 < 2) {
LAB_07d72208:
      FUN_07d79804();
      uVar5 = *(uint *)(unaff_x22 + 0x334);
      iVar6 = *(int *)(unaff_x22 + 0x350) + 1;
      *(uint *)(unaff_x22 + 0x338) = uVar5 + 1;
      *(int *)(unaff_x22 + 0x350) = iVar6;
      *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar6) {
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07d8f790(iVar6);
          uVar5 = *unaff_x25;
        }
        lVar20 = *(long *)(unaff_x19 + 0x30);
        if (lVar20 != 0) {
          if (uVar5 < *(uint *)(lVar20 + 0x18)) {
            fVar36 = *(float *)(unaff_x22 + 0x2ec);
            fVar37 = *(float *)(lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x14c);
            if (fVar36 == DAT_015c55ac) {
              if ((*unaff_x21 == 0x2029) || (fVar46 = 0.0, *unaff_x21 == 10)) {
                fVar46 = *(float *)(unaff_x23 + 0x94);
              }
              uVar17 = 0;
              fVar36 = fVar37 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                       in_stack_00000020._4_4_ *
                       (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
            }
            else {
              if ((*unaff_x21 == 0x2029) || (fVar46 = 0.0, *unaff_x21 == 10)) {
                fVar46 = *(float *)(unaff_x23 + 0x94);
              }
              uVar17 = 1;
            }
            fVar36 = *(float *)(unaff_x22 + 0x2e8) +
                     fVar36 + in_stack_000000d8._4_4_ * (fVar46 + unaff_s13);
            bVar3 = *(char *)(unaff_x22 + 0xf4) != '\0';
            *(undefined1 *)(unaff_x22 + 0x2f0) = uVar17;
            *(float *)(unaff_x22 + 0x15b8) = fVar37;
            fVar37 = *(float *)(unaff_x22 + 0x304) + unaff_s13 + *(float *)(unaff_x22 + 0x308);
            if (bVar3) {
              fVar36 = (float)(int)(fVar36 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x2e8) = fVar36;
            if (bVar3) {
              fVar37 = (float)(int)(fVar37 + unaff_s15);
            }
            *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
            *(float *)(unaff_x22 + 0x300) = fVar37;
            FUN_07d79804();
            FUN_07d79804();
            *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
            in_stack_00000060._4_4_ = 1;
            uStack0000000000000058 = 1;
            goto LAB_07d72ac8;
          }
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
      }
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (uVar5 == 3) {
      if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_07d72adc;
      uVar5 = 3;
      in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
    }
  }
  else if ((uVar5 - 0x2028 < 2) || (uVar5 == 0x2d)) goto LAB_07d72208;
LAB_07d72314:
  uVar10 = *unaff_x25;
  if ((uint)uVar22 <= uVar10) goto LAB_07d72b20;
  lVar20 = lVar20 + 0x20;
  if (*(char *)(lVar20 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x174) != '\0') {
    lVar27 = lVar20 + (long)(int)uVar10 * (long)(int)unaff_w27;
    auVar38 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
    uVar11 = *(undefined8 *)(lVar27 + 0xf8);
    auVar41 = NEON_ext(auVar38,auVar38,8,1);
    uVar43 = *(undefined8 *)(lVar27 + 0x104);
    auVar42._0_4_ = -(uint)(auVar38._0_4_ < (float)uVar11);
    auVar42._4_4_ = -(uint)(auVar38._4_4_ < (float)((ulong)uVar11 >> 0x20));
    auVar42._8_4_ = -(uint)((float)uVar43 < auVar41._0_4_);
    auVar42._12_4_ = -(uint)((float)((ulong)uVar43 >> 0x20) < auVar41._4_4_);
    auVar41._8_8_ = uVar43;
    auVar41._0_8_ = uVar11;
    auVar38 = auVar38 ^ (auVar38 ^ auVar41) & ~auVar42;
    *(long *)(in_stack_00000068 + 0x80) = auVar38._8_8_;
    *(long *)(in_stack_00000068 + 0x78) = auVar38._0_8_;
  }
  if (((iStack00000000000000b0 == 3) || (iStack00000000000000b0 == 0)) &&
     ((6 < *(uint *)(unaff_x23 + 100) ||
      ((1 << (ulong)(*(uint *)(unaff_x23 + 100) & 0x1f) & 0x4aU) == 0)))) goto LAB_07d72940;
  if (((uStack0000000000000104 & 1) == 0) && (uVar5 != 0x200b)) {
    if (uVar5 == 0x2d) {
      if (0 < (int)uVar10) {
        if (uVar10 - 1 < (uint)uVar22) {
          uVar34 = *(undefined4 *)(lVar20 + (ulong)(uVar10 - 1) * (ulong)unaff_w27);
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar15 = FUN_066b9610(uVar34,0);
          if ((uVar15 & 1) != 0) {
            uVar5 = *unaff_x21;
            goto LAB_07d72408;
          }
          goto LAB_07d72410;
        }
        goto LAB_07d72b20;
      }
      goto LAB_07d72410;
    }
LAB_07d72408:
    if (uVar5 == 0xad) goto LAB_07d72410;
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
    uVar5 = *unaff_x21;
    if ((int)uVar5 < 0x2007) {
      if (uVar5 == 0x2d) {
        uVar5 = *unaff_x25 - 1;
        if (0 < (int)*unaff_x25) {
          lVar20 = *(long *)(unaff_x19 + 0x30);
          if (lVar20 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
          uVar34 = *(undefined4 *)(lVar20 + (ulong)uVar5 * (ulong)unaff_w27 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar15 = FUN_066b9610(uVar34,0);
          if ((uVar15 & 1) != 0) goto LAB_07d72940;
        }
      }
      else if (uVar5 == 0xa0) goto LAB_07d72644;
    }
    else if (((uVar5 - 0x2007 < 0x29) &&
             ((1L << ((ulong)(uVar5 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) || (uVar5 == 0x2060))
    {
LAB_07d72644:
      if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_03ae8be4();
      }
      uVar15 = FUN_07d90128(uVar5,0);
      if ((uVar15 & 1) == 0) {
LAB_07d7268c:
        uVar5 = *unaff_x21;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        uVar15 = FUN_07d901bc(uVar5,0);
        if ((uVar15 & 1) == 0) {
          if ((*(char *)(unaff_x22 + 0x388) != '\0') ||
             (uVar5 = *unaff_x25 + 1, iStack0000000000000028 <= (int)uVar5)) {
LAB_07d72418:
            if ((in_stack_00000060._4_4_ & 1) != 0) {
              if ((uStack0000000000000104 & 1) == 0) goto LAB_07d72618;
              if (*unaff_x21 != 0xa0) goto LAB_07d72434;
              goto LAB_07d72630;
            }
            goto UnityEngine_UIElements_UIR_EntryProcessor__set_lastHeadCommand;
          }
          lVar20 = *(long *)(unaff_x19 + 0x30);
          if (lVar20 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
          uVar34 = *(undefined4 *)(lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x20);
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar15 = FUN_07d901bc(uVar34,0);
          if ((uVar15 & 1) == 0) goto LAB_07d72418;
          lVar20 = *(long *)(unaff_x19 + 0x30);
          if (lVar20 != 0) {
            if (*unaff_x25 + 1 < *(uint *)(lVar20 + 0x18)) {
              if (in_stack_00000018 != 0) {
                uVar34 = *(undefined4 *)
                          (lVar20 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
                lVar20 = FUN_07d86e90(in_stack_00000018,0);
                if ((lVar20 != 0) && (lVar20 = FUN_07d98b58(lVar20,0), lVar20 != 0)) {
                  uVar5 = FUN_049ddf40(lVar20,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                  lVar20 = FUN_07d86e90(in_stack_00000018,0);
                  if ((lVar20 != 0) && (lVar20 = FUN_07d98b58(lVar20,0), lVar20 != 0)) {
                    uVar10 = FUN_049ddf40(lVar20,uVar34,*(undefined8 *)PTR_DAT_084b5110);
                    if (((uVar5 | uVar10) & 1) != 0) goto LAB_07d72940;
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
        if ((in_stack_00000018 == 0) || (lVar20 = FUN_07d86e90(in_stack_00000018,0), lVar20 == 0))
        goto LAB_07d72adc;
        if (*(char *)(lVar20 + 0x28) != '\0') goto LAB_07d7268c;
      }
      lVar20 = FUN_07d86e90(in_stack_00000018,0);
      if ((lVar20 == 0) || (lVar20 = FUN_07d98b58(lVar20,0), lVar20 == 0)) goto LAB_07d72adc;
      uVar15 = FUN_049ddf40(lVar20,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
      if ((int)*unaff_x25 < (int)uStack000000000000004c) {
        lVar20 = FUN_07d86e90(in_stack_00000018,0);
        if (lVar20 == 0) goto LAB_07d72adc;
        lVar20 = FUN_07d98da0(lVar20,0);
        lVar27 = *(long *)(unaff_x19 + 0x30);
        if (lVar27 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar27 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
        if (lVar20 == 0) goto LAB_07d72adc;
        uVar5 = FUN_049ddf40(lVar20,*(undefined4 *)
                                     (lVar27 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 +
                                     0x20),*(undefined8 *)PTR_DAT_084b5110);
        if ((uVar15 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
        if ((in_stack_00000060._4_4_ & (float)unaff_w29 == in_stack_00000150) == 0)
        goto LAB_07d72940;
        in_stack_00000060._4_4_ = 1;
LAB_07d728a8:
        FUN_07d79804();
      }
      else {
        uVar5 = 0;
        if ((uVar15 & 1) != 0) goto LAB_07d72884;
LAB_07d72758:
        in_stack_00000060._4_4_ = uVar5 & in_stack_00000060._4_4_;
        uStack0000000000000104 = in_stack_00000060._4_4_ & uStack0000000000000104;
        if (((in_stack_00000060._4_4_ & 1) != 0) || (((uVar5 ^ 1) & 1) != 0)) goto LAB_07d728a8;
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
LAB_07d72ac8:
  do {
    lVar20 = *(long *)(unaff_x22 + 0x20);
    in_stack_0000112c = in_stack_0000112c + 1;
    if (lVar20 == 0) goto LAB_07d72adc;
    if ((int)*(uint *)(lVar20 + 0x18) <= (int)in_stack_0000112c) {
LAB_07d72ae0:
      FUN_07d797b8();
      return;
    }
    if (*(uint *)(lVar20 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
    uVar5 = *(uint *)(lVar20 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
    if (uVar5 == 0) goto LAB_07d72ae0;
    *unaff_x21 = uVar5;
    if (5 < in_stack_00000108) {
      uVar22 = FUN_0676d8dc();
      uVar11 = FUN_0674e2a4(&stack0x0000112c,0);
      uVar22 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar22,
                            *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar11,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4fb40(uVar22,0);
      uVar5 = *unaff_x21;
      in_stack_00001190 = CONCAT44(3,*unaff_x25);
    }
  } while (uVar5 == 0x1a);
  if ((uVar5 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
    unaff_x28[0] = '\x01';
    unaff_x28[1] = '\x01';
    uVar15 = FUN_07d74ca8();
    if (((uVar15 & 1) != 0) && (in_stack_0000112c = in_stack_000010fc, *unaff_x28 == '\x01'))
    goto LAB_07d72ac8;
  }
  else {
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *unaff_x28 = *(char *)(lVar20 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar20 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar20 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
  }
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar10 = *(uint *)(unaff_x22 + 0x334);
  uVar5 = *(uint *)(lVar20 + 0x18);
  if (uVar5 <= uVar10) goto LAB_07d72b20;
  lVar27 = lVar20 + 0x20;
  uVar51 = (uint)in_stack_00001190;
  uVar34 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar16 = *(char *)(lVar27 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x3c);
  unaff_x28[1] = '\0';
  if (uVar51 == uVar10) {
    uVar8 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar8;
    *unaff_x28 = '\x01';
    if (uVar8 == 0x2026) {
      if (uVar5 <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
           *(undefined8 *)(unaff_x22 + 0x19f8);
      thunk_FUN_03afed3c();
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
      *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1a00);
      *(undefined1 *)(lVar20 + 0x28) = 1;
      thunk_FUN_03afed3c();
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50) =
           *(undefined8 *)(unaff_x22 + 0x1a08);
      thunk_FUN_03afed3c();
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
      *(undefined4 *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
           *(undefined4 *)(unaff_x22 + 0x1a10);
      lVar20 = *(long *)(unaff_x22 + 0x15c0);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x1a30)) goto LAB_07d72b20;
      lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x1a30) * 0x38;
      *(int *)(lVar20 + 0x54) = *(int *)(lVar20 + 0x54) + 1;
      uVar5 = *(uint *)(unaff_x22 + 0x334);
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      in_stack_00001190 = CONCAT44(3,uVar5 + 1);
      goto joined_r0x07d6f120;
    }
    if (uVar8 == 3) {
      if (*in_stack_00000148 != 0) {
        uVar5 = *unaff_x25;
        lVar21 = FUN_07d61598(*in_stack_00000148,0);
        if (lVar21 != 0) {
          uVar22 = FUN_060344a4(lVar21,3,*(undefined8 *)
                                          System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                               );
          if (uVar5 < *(uint *)(lVar20 + 0x18)) {
            *(undefined8 *)(lVar27 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x10) = uVar22;
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
  }
LAB_07d6efec:
  uVar5 = *unaff_x25;
joined_r0x07d6f120:
  unaff_x23 = in_stack_00000140;
  if (((int)uVar5 < 0) && (*unaff_x21 != 3)) {
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
    lVar20 = lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar20 + 0x194) = 0;
    *(undefined4 *)(lVar20 + 0x20) = 0x200b;
    *(undefined4 *)(lVar20 + 100) = 0;
    *unaff_x25 = uVar5 + 1;
    goto LAB_07d72ac8;
  }
  cVar1 = *unaff_x28;
  if (cVar1 == '\x01') {
    uVar5 = *(uint *)(unaff_x22 + 300);
    if ((uVar5 >> 4 & 1) == 0) {
      if ((uVar5 >> 3 & 1) == 0) {
        fVar37 = 1.0;
        if ((uVar5 >> 5 & 1) != 0) {
          uVar5 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar15 = FUN_066bbc7c(uVar5,0);
          fVar37 = 1.0;
          if ((uVar15 & 1) != 0) {
            uVar5 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar5 = FUN_066bbf04(uVar5,0);
            fVar37 = fStack0000000000000010;
            goto LAB_07d6f260;
          }
        }
      }
      else {
        uVar5 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar15 = FUN_066bbbdc(uVar5,0);
        fVar37 = 1.0;
        if ((uVar15 & 1) != 0) {
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
      uVar15 = FUN_066bbc7c(uVar5,0);
      fVar37 = 1.0;
      if ((uVar15 & 1) != 0) {
        uVar5 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar5 = FUN_066bbf04(uVar5,0);
LAB_07d6f25c:
        fVar37 = 1.0;
LAB_07d6f260:
        *unaff_x21 = uVar5 & 0xffff;
      }
    }
    cVar1 = *unaff_x28;
  }
  else {
    fVar37 = 1.0;
  }
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (cVar1 == '\x01') {
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *(undefined8 *)(unaff_x22 + 0x1598) =
         *(undefined8 *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
    thunk_FUN_03afed3c(unaff_x22 + 0x1598);
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000148 = *(long *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000090 = *(long *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50);
    thunk_FUN_03afed3c();
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    uVar8 = *unaff_x25;
    uVar5 = *(uint *)(lVar20 + 0x18);
    if (uVar5 <= uVar8) goto LAB_07d72b20;
    *(undefined4 *)(unaff_x22 + 0x78) =
         *(undefined4 *)(lVar20 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x38);
    if (uVar51 == uVar10) {
      lVar27 = *(long *)(unaff_x22 + 0x20);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
      if ((*(int *)(lVar27 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
         (uVar8 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
      if (uVar5 <= uVar8 - 1) goto LAB_07d72b20;
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar46 = *(float *)(lVar20 + 0x20 + (long)(int)(uVar8 - 1) * (long)(int)unaff_w27 + 0x40);
      fVar36 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar39 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar39 = ((fVar37 * fVar46) / fVar36) * fVar39;
LAB_07d6f900:
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
    }
    else {
LAB_07d6f408:
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar46 = *(float *)(unaff_x22 + 0xf8);
      fVar36 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar39 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar39 = ((fVar37 * fVar46) / fVar36) * fVar39;
      if (uVar51 == uVar10) goto LAB_07d6f900;
LAB_07d6f918:
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
    }
    lVar20 = *(long *)(unaff_x22 + 0x1598);
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_07d72adc;
    fVar36 = *(float *)(unaff_x22 + 0xf0);
    fVar46 = *(float *)(lVar20 + 0x2c);
    fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar20 + 0x20),0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar30 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar31 = *(float *)(unaff_x22 + 0xf0);
    fVar33 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    lVar20 = *(long *)(unaff_x19 + 0x30);
    fVar33 = fVar39 * fVar30 * fVar31 * fVar33;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar33 = (float)(int)(fVar33 + unaff_s15);
    }
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar27 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar27 + 0x28) = 1;
    fStack00000000000000e8 = fVar39 * fVar36 * fVar46 * fStack00000000000000e8;
    *(float *)(lVar27 + 0x160) = fStack00000000000000e8;
    in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
    unaff_s12 = 1.0;
    unaff_s13 = 0.0;
    uVar5 = *unaff_x21;
    fVar36 = 0.0;
    if (uVar5 != 3 && uVar5 != 0xad) {
      fVar36 = fStack00000000000000e8;
    }
  }
  else {
    if (cVar1 == '\x02') {
      if (lVar20 != 0) {
        if (*unaff_x25 < *(uint *)(lVar20 + 0x18)) {
          plVar28 = *(long **)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
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
            plVar12 = (long *)FUN_07d8466c(plVar28,0);
            if (plVar12 == (long *)0x0) {
              plVar12 = (long *)0x0;
              *in_stack_000000e0 = 0;
            }
            else {
              lVar20 = *(long *)
                        Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
              bVar4 = *(byte *)(lVar20 + 0x130);
              if (*(byte *)(*plVar12 + 0x130) < bVar4) {
                plVar26 = (long *)0x0;
              }
              else {
                plVar26 = plVar12;
                if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != lVar20) {
                  plVar26 = (long *)0x0;
                }
              }
              *in_stack_000000e0 = (long)plVar26;
              if (*(byte *)(*plVar12 + 0x130) < bVar4) {
                plVar12 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar4 * 8 + -8) != lVar20) {
                plVar12 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(in_stack_000000e0,plVar12);
            iVar6 = FUN_07d85970(plVar28,0);
            *(int *)(unaff_x22 + 0x158c) = iVar6;
            if (*unaff_x21 == 0x3c) {
              *unaff_x21 = iVar6 + 0xe000;
            }
            else {
              uVar7 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
              *(undefined4 *)(unaff_x22 + 0x1590) = uVar7;
            }
            if (*(long *)(unaff_x22 + 0x68) != 0) {
              fVar46 = *(float *)(unaff_x22 + 0xf8);
              FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
              memcpy(&stack0x00001130,&stack0x000011a0,0x60);
              fVar36 = (float)FUN_07d5328c(&stack0x00001130,0);
              if (*in_stack_00000148 != 0) {
                FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
                memcpy(&stack0x00001130,&stack0x00000170,0x60);
                fVar39 = (float)FUN_07d53294(&stack0x00001130,0);
                if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                fVar39 = (fVar46 / fVar36) * fVar39;
                fVar36 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                fVar46 = *(float *)(unaff_x22 + 0xf8);
                if (fVar36 <= 0.0) {
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar36 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar30 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  FUN_07d53750(&stack0x000011a0,plVar28[4],0);
                  fVar31 = (float)FUN_07d53580(&stack0x000010e0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar45 = *(float *)((long)plVar28 + 0x2c);
                  fVar32 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar49 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar47 = *(float *)(unaff_x22 + 0xf0);
                  fVar33 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (fVar46 / fVar36) * fStack00000000000000f4;
                  fStack00000000000000e8 =
                       fStack00000000000000f4 * (fVar30 / fVar31) * fVar45 * fVar32;
                  fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                  fVar33 = fVar39 * fVar49 * fVar47 * fVar33;
                  fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                  fVar36 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                  fStack00000000000000f4 = fStack00000000000000f4 * fVar36;
                }
                else {
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar36 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar30 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar45 = *(float *)((long)plVar28 + 0x2c);
                  fVar31 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar32 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar49 = *(float *)(unaff_x22 + 0xf0);
                  fVar33 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                  fVar33 = fVar39 * fVar32 * fVar49 * fVar33;
                  fStack00000000000000e8 = (fVar46 / fVar36) * fVar30 * fVar45 * fVar31;
                  fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0)
                  ;
                  unaff_x28 = in_stack_00000168;
                }
                *(long **)(unaff_x22 + 0x1598) = plVar28;
                thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar28);
                lVar20 = *(long *)(unaff_x19 + 0x30);
                if (lVar20 != 0) {
                  if (*unaff_x25 < *(uint *)(lVar20 + 0x18)) {
                    lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
                    *(long *)(lVar20 + 0x48) = *in_stack_000000e0;
                    *(undefined1 *)(lVar20 + 0x28) = 2;
                    *(float *)(lVar20 + 0x160) = fStack00000000000000e8;
                    thunk_FUN_03afed3c();
                    lVar20 = *(long *)(unaff_x19 + 0x30);
                    if (lVar20 != 0) {
                      if (*unaff_x25 < *(uint *)(lVar20 + 0x18)) {
                        *(long *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) =
                             *in_stack_00000148;
                        thunk_FUN_03afed3c();
                        lVar20 = *(long *)(unaff_x19 + 0x30);
                        if (lVar20 != 0) {
                          if (*unaff_x25 < *(uint *)(lVar20 + 0x18)) {
                            *(undefined4 *)
                             (lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
                                 *(undefined4 *)(unaff_x22 + 0x78);
                            in_stack_00000138._4_4_ = 0.0;
                            *(undefined4 *)(unaff_x22 + 0x78) = uVar34;
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
    uVar5 = *unaff_x21;
    fVar36 = 0.0;
    if (uVar5 != 3 && uVar5 != 0xad) {
      fVar36 = unaff_s14;
    }
    fVar33 = 0.0;
    fStack00000000000000f4 = 0.0;
    fStack00000000000000f8 = 0.0;
    fStack00000000000000e8 = unaff_s14;
    if (lVar20 == 0) goto LAB_07d72adc;
  }
  unaff_s14 = fVar36;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(uint *)(lVar20 + 0x20) = uVar5;
  *(undefined4 *)(lVar20 + 0x60) = *(undefined4 *)(unaff_x22 + 0xf8);
  *(undefined4 *)(lVar20 + 0x164) = *(undefined4 *)(unaff_x22 + 0x1b4);
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x168) =
       *(undefined4 *)(unaff_x22 + 0x1b8);
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  *(undefined4 *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x170) =
       *(undefined4 *)(unaff_x22 + 0x1bc);
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  auVar41 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
  *(undefined4 *)(lVar20 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
  *(long *)(lVar20 + 0x184) = auVar41._8_8_;
  *(long *)(lVar20 + 0x17c) = auVar41._0_8_;
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar5 = *(uint *)(unaff_x22 + 0x334);
  uVar8 = *(uint *)(lVar20 + 0x18);
  if (uVar8 <= uVar5) goto LAB_07d72b20;
  lVar27 = lVar20 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27;
  uVar25 = *(uint *)(unaff_x22 + 300);
  *(uint *)(lVar27 + 0x170) = uVar25;
  if (*(int *)(unaff_x22 + 0x13c) == 700) {
    *(uint *)(lVar27 + 0x170) = uVar25 | 1;
    uVar5 = *unaff_x25;
  }
  if (uVar8 <= uVar5) goto LAB_07d72b20;
  lVar20 = *(long *)(lVar20 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x18);
  if (lVar20 == 0) {
    if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
       (lVar20 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar20 == 0)) goto LAB_07d72adc;
    FUN_07d53750(&stack0x000011a0,lVar20,0);
  }
  else {
    FUN_07d53750(&stack0x00000510,lVar20,0);
  }
  uVar5 = *unaff_x21;
  if (uVar5 >> 0x10 == 0) {
    if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uStack0000000000000104 = FUN_066b9610(uVar5,0);
  }
  else {
    uStack0000000000000104 = 0;
  }
  fStack00000000000000d4 = *(float *)(in_stack_00000140 + 0x8c);
  if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*unaff_x28 == '\x01')) {
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
    uVar5 = *unaff_x25;
    uVar8 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
    if ((int)uVar5 < (int)uStack000000000000004c) {
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (lVar20 == 0) goto LAB_07d72adc;
      uVar5 = uVar5 + 1;
      if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
      if (*(char *)(lVar20 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 8) == '\x01') {
        lVar20 = *(long *)(lVar20 + 0x20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x10);
        if ((((lVar20 == 0) || (*in_stack_00000148 == 0)) ||
            (lVar27 = *(long *)(*in_stack_00000148 + 0x170), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_07d72adc;
        uVar15 = FUN_05ffa6e0(lVar27,uVar8 | *(int *)(lVar20 + 0x28) << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar15 & 1) != 0) {
          FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          uVar15 = FUN_07d57e7c(&stack0x000010b0,0);
          if ((uVar15 & 0x100) != 0) {
            fStack00000000000000d4 = unaff_s13;
          }
        }
      }
      uVar5 = *unaff_x25;
    }
    uVar25 = uVar5 - 1;
    if (0 < (int)uVar5) {
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_07d72b20;
      lVar27 = *(long *)(lVar20 + 0x20 + (ulong)uVar25 * (ulong)unaff_w27 + 0x10);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(char *)(lVar20 + 0x20 + (ulong)uVar25 * (ulong)unaff_w27 + 8) == '\x01') {
        if (((*in_stack_00000148 == 0) ||
            (lVar20 = *(long *)(*in_stack_00000148 + 0x170), lVar20 == 0)) ||
           (lVar20 = *(long *)(lVar20 + 0x40), lVar20 == 0)) goto LAB_07d72adc;
        uVar15 = FUN_05ffa6e0(lVar20,*(uint *)(lVar27 + 0x28) | uVar8 << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar15 & 1) != 0) {
          FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          FUN_07d57af4(0);
          uVar15 = FUN_07d57e7c(&stack0x000010b0,0);
          unaff_s15 = in_stack_000000c0._4_4_;
          if ((uVar15 & 0x100) != 0) {
            fStack00000000000000d4 = unaff_s13;
          }
        }
      }
    }
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    uVar5 = *unaff_x25;
    uVar34 = FUN_07d57ad0(&stack0x00001100,0);
    if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
    *(undefined4 *)(lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x154) = uVar34;
  }
  uVar5 = *unaff_x21;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar4 = FUN_07d8fcc4(uVar5,0);
  uVar5 = *unaff_x25;
  uVar15 = (ulong)uVar5;
  if ((bVar4 & 1) == 0) {
    if (0 < (int)uVar5) {
      if ((((uVar2 & 1) == 0) || (uVar8 = *(uint *)(unaff_x22 + 0x19cc), uVar8 == 0x80000000)) ||
         (uVar8 != uVar5 - 1)) {
        if ((_iStack0000000000000028 & 0x100000000) == 0) {
          bVar3 = false;
        }
        else {
          lVar20 = uVar15 * unaff_w27 + 0x144;
          uVar29 = uVar15;
          do {
            uVar29 = uVar29 - 1;
            iVar6 = (int)uVar15;
            uVar5 = iVar6 - 1;
            uVar15 = (ulong)uVar5;
            if ((iVar6 < 1) || (uVar29 == *(uint *)(unaff_x22 + 0x19cc))) {
              bVar3 = false;
              goto LAB_07d71064;
            }
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= uVar29) goto LAB_07d72b20;
            lVar27 = *(long *)(lVar27 + lVar20 + -0x28c);
            if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
            uVar8 = FUN_07d53740(lVar27,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar27 = FUN_07d61740(*in_stack_00000148,0), lVar27 == 0)) ||
               (*(long *)(lVar27 + 0x50) == 0)) goto LAB_07d72adc;
            uVar13 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                               (*(long *)(lVar27 + 0x50),uVar8 | iVar6 << 0x10,&stack0x00001050,
                                *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
            lVar20 = lVar20 + -0x178;
            unaff_x28 = in_stack_00000168;
          } while ((uVar13 & 1) == 0);
          if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_07d72adc;
          if (*(uint *)(*(long *)(unaff_x19 + 0x30) + 0x18) <= uVar5) goto LAB_07d72b20;
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
          bVar3 = true;
        }
LAB_07d71064:
        if ((uVar2 & 1) != 0) {
          uVar5 = *(uint *)(unaff_x22 + 0x19cc);
          if (uVar5 == 0x80000000) {
            bVar3 = true;
          }
          if (!bVar3) {
            lVar20 = *(long *)(unaff_x19 + 0x30);
            if (lVar20 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
            lVar20 = *(long *)(lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x30);
            if ((lVar20 == 0) || (lVar20 = FUN_07d88988(lVar20,0), lVar20 == 0)) goto LAB_07d72adc;
            uVar5 = FUN_07d53740(lVar20,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar20 = FUN_07d61740(*in_stack_00000148,0), lVar20 == 0)) ||
               (*(long *)(lVar20 + 0x48) == 0)) goto LAB_07d72adc;
            uVar15 = FUN_06008730(*(long *)(lVar20 + 0x48),uVar5 | iVar6 << 0x10,&stack0x00001038,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            unaff_x28 = in_stack_00000168;
            if ((uVar15 & 1) != 0) {
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
                  puVar14 = &stack0x00001038;
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
        lVar20 = *(long *)(unaff_x19 + 0x30);
        if (lVar20 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_07d72b20;
        lVar20 = *(long *)(lVar20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x30);
        if ((lVar20 == 0) || (lVar20 = FUN_07d88988(lVar20,0), lVar20 == 0)) goto LAB_07d72adc;
        uVar5 = FUN_07d53740(lVar20,0);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        iVar6 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
        if (((*in_stack_00000148 == 0) || (lVar20 = FUN_07d61740(*in_stack_00000148,0), lVar20 == 0)
            ) || (*(long *)(lVar20 + 0x48) == 0)) goto LAB_07d72adc;
        uVar15 = FUN_06008730(*(long *)(lVar20 + 0x48),uVar5 | iVar6 << 0x10,&stack0x00001078,
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
          puVar14 = &stack0x00001078;
LAB_07d711ec:
          FUN_07d580a8(puVar14,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fStack00000000000000d4 = 0.0;
          unaff_x28 = in_stack_00000168;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x22 + 0x19cc) = uVar5;
  }
  fVar36 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar46 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
    fVar39 = *(float *)(unaff_x22 + 0x300);
    fVar30 = (float)FUN_07d53598(&stack0x00001110,0);
    fVar39 = fVar39 - unaff_s14 * fVar30 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4));
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar39 = (float)(int)(fVar39 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar39;
    if (((uStack0000000000000104 & 1) != 0) || (*unaff_x21 == 0x200b)) {
      fVar39 = fVar39 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar39 = (float)(int)(fVar39 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar39;
    }
  }
  fVar39 = *(float *)(unaff_x22 + 0x2f8);
  fVar30 = 0.0;
  if (fVar39 != 0.0) {
    uVar5 = *unaff_x21;
    if (uVar5 != 0x200b) {
      if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar5)) ||
         (fVar30 = 0.25, (1L << ((ulong)uVar5 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar30 = 0.5;
      }
      fVar31 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar45 = (float)FUN_07d53588(&stack0x00001110,0);
      fVar30 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
               (fVar39 * fVar30 - unaff_s14 * (fVar31 * 0.5 + fVar45));
      fVar39 = fVar30 + *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar39 = (float)(int)(fVar39 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar39;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar6 = FUN_07d616d4(*in_stack_00000148,0);
  if (iVar6 == 0x1015) {
    bVar3 = false;
  }
  else {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar6 = FUN_07d616d4(*in_stack_00000148,0);
    bVar3 = iVar6 != 0x11014;
  }
  if ((cVar16 == '\0') && (*unaff_x28 == '\x01')) {
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    if ((*(byte *)(lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
    goto LAB_07d701e4;
    if (bVar3) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar6 = FUN_07d616c4(*in_stack_00000148,0);
        fVar31 = (float)(iVar6 + 1);
      }
      else {
        lVar20 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar20 == 0) goto LAB_07d72adc;
        uVar15 = thunk_FUN_07c662cc(lVar20,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar15 & 1) == 0) goto LAB_07d70594;
        lVar20 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar20 == 0) goto LAB_07d72adc;
        fVar31 = (float)thunk_FUN_07c69050(lVar20,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar39 = (float)FUN_07d617a8(*in_stack_00000148,0);
      fVar39 = fVar31 * fVar39 * 0.25;
      if (fVar31 < in_stack_00000138._4_4_ + fVar39) {
        in_stack_00000138._4_4_ = fVar31 - fVar39;
      }
    }
    else {
      fVar39 = 0.0;
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
        iVar6 = FUN_07d616c4(*in_stack_00000148,0);
        fVar31 = (float)(iVar6 + 1);
      }
      else {
        lVar20 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar20 == 0) goto LAB_07d72adc;
        uVar15 = thunk_FUN_07c662cc(lVar20,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar15 & 1) == 0) goto LAB_07d70290;
        lVar20 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar20 == 0) goto LAB_07d72adc;
        fVar31 = (float)thunk_FUN_07c69050(lVar20,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar39 = fVar31 * *(float *)(*in_stack_00000148 + 400) * 0.25;
      if (fVar31 < in_stack_00000138._4_4_ + fVar39) {
        in_stack_00000138._4_4_ = fVar31 - fVar39;
      }
    }
    else {
      fVar39 = 0.0;
    }
  }
  fVar32 = *(float *)(unaff_x22 + 0x300);
  fVar31 = (float)FUN_07d53588(&stack0x00001110,0);
  fVar49 = *(float *)(unaff_x22 + 0x19b0);
  fVar45 = (float)FUN_07d57ab0(&stack0x00001100,0);
  fVar32 = fVar32 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 * (fVar45 + ((fVar31 * fVar49 - in_stack_00000138._4_4_) - fVar39));
  fVar31 = (float)FUN_07d53590(&stack0x00001110,0);
  fVar45 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar31 = unaff_s14 * (in_stack_00000138._4_4_ + fVar31 + fVar45);
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar31 = (float)(int)(fVar31 + unaff_s15);
  }
  in_stack_00000150 =
       *(float *)(unaff_x22 + 0x188) + ((fVar33 + fVar31) - *(float *)(unaff_x22 + 0x2e8));
  fVar31 = (float)FUN_07d53580(&stack0x00001110,0);
  fVar49 = in_stack_00000150 -
           unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar31);
  fVar31 = (float)FUN_07d53578(&stack0x00001110,0);
  fVar31 = fVar32 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 *
                    (fVar39 + fVar39 +
                    in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                    fVar31 * *(float *)(unaff_x22 + 0x19b0));
  fVar47 = fVar31;
  fVar45 = fVar32;
  if (((cVar16 == '\0') && (*unaff_x28 == '\x01')) && ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0))
  {
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    iVar6 = *(int *)(unaff_x22 + 0x19ac);
    fVar45 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar35 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar48 = *(float *)(unaff_x22 + 0xf0);
    fVar50 = *(float *)(unaff_x22 + 0x188);
    fVar47 = (float)iVar6 * fStack0000000000000054;
    fVar44 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar44 = fVar44 * fVar48 * (fVar45 - (fVar35 + fVar50)) * 0.5;
    fVar45 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar50 = fVar47 * unaff_s14 * ((fVar39 + in_stack_00000138._4_4_ + fVar45) - fVar44);
    fVar35 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar48 = (float)FUN_07d53580(&stack0x00001110,0);
    in_stack_00000150 = in_stack_00000150 + 0.0;
    fVar45 = fVar32 + fVar50;
    fVar49 = fVar49 + 0.0;
    fVar47 = fVar47 * unaff_s14 *
                      ((((fVar35 - fVar48) - in_stack_00000138._4_4_) - fVar39) - fVar44);
    fVar32 = fVar32 + fVar47;
    fVar47 = fVar31 + fVar47;
    unaff_s15 = in_stack_000000c0._4_4_;
    fVar31 = fVar31 + fVar50;
  }
  uVar11 = *in_stack_000000c8;
  uVar22 = in_stack_000000c8[1];
  if (DAT_08974d8a == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  uVar43 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  uVar40 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  if (DAT_015c5bb4 <
      (float)((ulong)uVar22 >> 0x20) * (float)((ulong)uVar40 >> 0x20) +
      (float)uVar22 * (float)uVar40 +
      (float)uVar11 * (float)uVar43 +
      (float)((ulong)uVar11 >> 0x20) * (float)((ulong)uVar43 >> 0x20)) {
    fVar39 = 0.0;
    auVar38._4_12_ = SUB1612(ZEXT816(0),4);
    auVar38._0_4_ = fVar49;
    uVar11 = auVar38._0_8_;
    uVar15 = (ulong)(uint)in_stack_00000150;
    uVar22 = uVar11;
  }
  else {
    FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                 *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                 *(undefined4 *)(unaff_x22 + 0x19c8),0);
    fVar47 = (fVar31 + fVar32) * 0.5;
    fVar44 = (fVar49 + in_stack_00000150) * 0.5;
    fVar39 = 0.0;
    auVar41 = ZEXT416((uint)(in_stack_00000150 - fVar44));
    fVar45 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar45 = fVar47 + fVar45;
    fVar31 = 0.0;
    uVar15 = CONCAT44(fVar39 + 0.0,fVar44 + auVar41._0_4_);
    auVar41 = ZEXT416((uint)(fVar49 - fVar44));
    fVar32 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar32 = fVar47 + fVar32;
    fVar39 = 0.0;
    uVar11 = CONCAT44(fVar31 + 0.0,fVar44 + auVar41._0_4_);
    auVar41 = ZEXT416((uint)(in_stack_00000150 - fVar44));
    fVar31 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar31 = fVar47 + fVar31;
    fVar35 = 0.0;
    in_stack_00000150 = fVar44 + auVar41._0_4_;
    fVar39 = fVar39 + 0.0;
    auVar41 = ZEXT416((uint)(fVar49 - fVar44));
    fVar49 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar47 = fVar47 + fVar49;
    unaff_s15 = in_stack_000000c0._4_4_;
    uVar22 = CONCAT44(fVar35 + 0.0,fVar44 + auVar41._0_4_);
  }
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar20 + 0x118) = fVar32;
  *(undefined8 *)(lVar20 + 0x11c) = uVar11;
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar20 + 0x10c) = fVar45;
  *(ulong *)(lVar20 + 0x110) = uVar15;
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar20 + 0x124) = fVar31;
  *(ulong *)(lVar20 + 0x128) = CONCAT44(fVar39,in_stack_00000150);
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar20 = lVar20 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar20 + 0x130) = fVar47;
  *(undefined8 *)(lVar20 + 0x134) = uVar22;
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar5 = *(uint *)(unaff_x22 + 0x334);
  fVar39 = *(float *)(unaff_x22 + 0x300);
  fVar45 = (float)FUN_07d57ab0(&stack0x00001100,0);
  if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
  fVar39 = fVar39 + unaff_s14 * fVar45;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar39 = (float)(int)(fVar39 + unaff_s15);
  }
  *(float *)(lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x13c) = fVar39;
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar5 = *(uint *)(unaff_x22 + 0x334);
  fVar45 = *(float *)(unaff_x22 + 0x2e8);
  fVar49 = *(float *)(unaff_x22 + 0x188);
  fVar39 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
  fVar39 = (fVar33 - fVar45) + fVar49 + unaff_s14 * fVar39;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar39 = (float)(int)(fVar39 + unaff_s15);
  }
  *(float *)(lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x144) = fVar39;
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  unaff_w29 = *(uint *)(unaff_x22 + 0x334);
  if (*(uint *)(lVar20 + 0x18) <= unaff_w29) goto LAB_07d72b20;
  lVar20 = lVar20 + 0x20;
  *(float *)(lVar20 + (long)(int)unaff_w29 * (long)(int)unaff_w27 + 0x13c) =
       (fVar31 - fVar32) / ((float)uVar15 - (float)uVar11);
  fVar36 = unaff_s14 * (fStack00000000000000f8 + fVar36);
  if (*unaff_x28 == '\x01') {
    fVar36 = fVar36 / fVar37;
    fVar46 = (unaff_s14 * (fStack00000000000000f4 + fVar46)) / fVar37;
  }
  else {
    fVar46 = unaff_s14 * (fStack00000000000000f4 + fVar46);
  }
  in_stack_00000150 = *(float *)(unaff_x22 + 0x338);
  unaff_s13 = 0.0;
  unaff_s12 = 1.0;
  if (((float)unaff_w29 != in_stack_00000150 & uStack0000000000000104) == 0) {
    fVar31 = *(float *)(unaff_x22 + 0x188);
    fVar36 = fVar36 + fVar31;
    fVar46 = fVar46 + fVar31;
    fVar39 = fVar36;
    fVar33 = fVar46;
    if (fVar31 != 0.0) {
      fVar39 = (fVar36 - fVar31) / *(float *)(unaff_x22 + 0xf0);
      fVar33 = (fVar46 - fVar31) / *(float *)(unaff_x22 + 0xf0);
      if (fVar39 <= fVar36) {
        fVar39 = fVar36;
      }
      if (fVar46 <= fVar33) {
        fVar33 = fVar46;
      }
    }
    lVar20 = lVar20 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
    fVar31 = fVar39;
    if (fVar39 <= *(float *)(unaff_x22 + 0x348)) {
      fVar31 = *(float *)(unaff_x22 + 0x348);
    }
    fVar45 = fVar33;
    if (*(float *)(unaff_x22 + 0x34c) <= fVar33) {
      fVar45 = *(float *)(unaff_x22 + 0x34c);
    }
    *(float *)(unaff_x22 + 0x348) = fVar31;
    *(float *)(unaff_x22 + 0x34c) = fVar45;
    *(float *)(lVar20 + 300) = fVar39;
    *(float *)(lVar20 + 0x130) = fVar33;
    fVar39 = *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar20 + 0x120) = fVar36 - fVar39;
    *(float *)(lVar20 + 0x128) = fVar46 - fVar39;
    *(float *)(unaff_x22 + 900) = fVar46 - fVar39;
    if (*(int *)(unaff_x22 + 0x350) == 0) {
      *(float *)(unaff_x22 + 0x380) = fVar31;
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar46 = *(float *)(unaff_x22 + 0x37c);
      fVar39 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      fVar37 = (unaff_s14 * fVar39) / fVar37;
      if (fVar46 <= fVar37) {
        fVar46 = fVar37;
      }
      fVar39 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 0x37c) = fVar46;
    }
    if (fVar39 == 0.0) {
      fVar37 = *(float *)(unaff_x22 + 0x19d0);
      if (*(float *)(unaff_x22 + 0x19d0) <= fVar36) {
        fVar37 = fVar36;
      }
      *(float *)(unaff_x22 + 0x19d0) = fVar37;
    }
  }
  else {
    lVar20 = lVar20 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
    uVar22 = *(undefined8 *)(unaff_x22 + 0x348);
    *(undefined8 *)(lVar20 + 300) = uVar22;
    fVar39 = *(float *)(unaff_x22 + 0x2e8);
    fVar37 = (float)((ulong)uVar22 >> 0x20) - fVar39;
    *(float *)(lVar20 + 0x120) = (float)uVar22 - fVar39;
    *(float *)(lVar20 + 0x128) = fVar37;
    *(float *)(unaff_x22 + 900) = fVar37;
  }
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar5 = *unaff_x25;
  if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
  lVar20 = lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar20 + 0x194) = 0;
  uVar8 = *unaff_x21;
  if (uVar8 == 9) {
LAB_07d70d34:
    *(undefined1 *)(lVar20 + 0x194) = 1;
    pfVar19 = in_stack_000000a0;
    pfVar23 = in_stack_000000b8;
    if (uVar51 == uVar10) {
      lVar20 = *(long *)(unaff_x19 + 0x48);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      pfVar23 = (float *)(lVar20 + 100);
      pfVar19 = (float *)(lVar20 + 0x68);
    }
    fVar36 = *pfVar23;
    fVar46 = *pfVar19;
    fVar37 = *(float *)(unaff_x22 + 0x368);
    fVar33 = 0.0;
    fVar39 = *(float *)(unaff_x22 + 0x300);
    fStack0000000000000100 = (fStack00000000000000b4 - fVar36) - fVar46;
    bVar3 = true;
    if ((fVar37 <= fStack0000000000000100) && (bVar3 = false, !NAN(fVar37))) {
      bVar3 = fVar37 == -1.0;
    }
    if (!bVar3) {
      fStack0000000000000100 = fVar37;
    }
    fVar37 = 0.0;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      fVar37 = (float)FUN_07d53598(&stack0x00001110,0);
      uVar8 = *unaff_x21;
    }
    if (uVar8 != 0xad) {
      fStack00000000000000e8 = unaff_s14;
    }
    if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar33 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    uVar5 = *unaff_x25;
    if (fStack00000000000000a8 <
        (*(float *)(unaff_x22 + 0x380) -
        (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar33) {
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar5;
      }
      iVar6 = *(int *)(in_stack_00000140 + 100);
      if (iVar6 == 1) {
        if (*(int *)(unaff_x22 + 0x350) < 1) goto LAB_07d70fbc;
        iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                             *(undefined8 *)
                              Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo);
        if (iVar6 == 0) {
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
          iVar6 = *(int *)(unaff_x22 + 0x334);
LAB_07d712d0:
          in_stack_00000108 = in_stack_00000108 + 1;
          *(int *)(unaff_x22 + 0x334) = iVar6 + -1;
          in_stack_00001190 = CONCAT44(0x2026,iVar6 + -1);
          unaff_x28 = in_stack_00000168;
          unaff_s12 = 1.0;
          in_stack_0000112c = iVar9 - 1;
        }
        goto LAB_07d72ac8;
      }
      if ((iVar6 != 6) && (iVar6 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
      in_stack_0000112c = FUN_07d79b5c();
    }
    else {
LAB_07d70fbc:
      uVar8 = uVar5;
      if ((bVar4 & fStack0000000000000100 <
                   ABS(fVar39) +
                   fVar37 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) != 1)
      goto LAB_07d7166c;
      if (((iStack00000000000000b0 == 0) || (iStack00000000000000b0 == 3)) ||
         (uVar5 == *(uint *)(unaff_x22 + 0x338))) {
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
            iVar9 = FUN_07d79b5c();
LAB_07d712c4:
            iVar6 = *(int *)(unaff_x22 + 0x334);
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
        if (iVar6 != 6) {
          if (iVar6 == 3) goto LAB_07d7102c;
          goto LAB_07d7166c;
        }
        in_stack_0000112c = FUN_07d79b5c();
        uVar5 = *(uint *)(unaff_x22 + 0x334);
      }
      else {
        in_stack_0000112c = FUN_07d79b5c();
        fVar37 = *(float *)(unaff_x22 + 0x2ec);
        if (fVar37 == DAT_015c55ac) {
          lVar20 = *(long *)(unaff_x19 + 0x30);
          if (lVar20 == 0) goto LAB_07d72adc;
          uVar8 = *unaff_x25;
          if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_07d72b20;
          fVar39 = *(float *)(unaff_x22 + 0x2e8);
          fVar37 = 0.0;
          if ((0.0 < fVar39) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar37 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          fVar37 = *(float *)(lVar20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x14c) +
                   (fVar37 - *(float *)(unaff_x22 + 0x34c)) +
                   in_stack_00000020._4_4_ *
                   (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
        }
        else {
          *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
          lVar20 = *(long *)(unaff_x19 + 0x30);
          if (lVar20 == 0) goto LAB_07d72adc;
          fVar39 = *(float *)(unaff_x22 + 0x2e8);
          uVar8 = *(uint *)(unaff_x22 + 0x334);
        }
        if ((*(uint *)(lVar20 + 0x18) <= uVar8) ||
           (uVar25 = uVar8 - 1, *(uint *)(lVar20 + 0x18) <= uVar25)) goto LAB_07d72b20;
        piVar24 = (int *)(lVar20 + 0x20 + (long)(int)uVar8 * (long)(int)unaff_w27);
        fVar37 = (fStack0000000000000014 + fVar37 + *(float *)(unaff_x22 + 0x380) + fVar39) -
                 (float)piVar24[0x4c];
        if ((*(int *)(lVar20 + 0x20 + (long)(int)uVar25 * (long)(int)unaff_w27) == 0xad &&
             (in_stack_00000038._4_4_ & 1) == 0) &&
           ((*(int *)(in_stack_00000140 + 100) == 0 || (fVar37 < fStack00000000000000a8)))) {
          in_stack_00000038._4_4_ = 0;
          in_stack_0000112c = in_stack_0000112c - 1;
          in_stack_00001190 = CONCAT44(0x2d,uVar25);
          *unaff_x25 = uVar25;
          unaff_x28 = in_stack_00000168;
          goto LAB_07d72ac8;
        }
        if (*piVar24 == 0xad) {
          in_stack_00000038._4_4_ = 1;
          unaff_x28 = in_stack_00000168;
          goto LAB_07d72ac8;
        }
        if ((((in_stack_00000060._4_4_ & 1) != 0) &&
            (iVar6 = *(int *)(unaff_x22 + 0x11f0), iVar6 != -1)) &&
           (iVar6 != in_stack_00000008._4_4_)) {
          in_stack_0000112c = FUN_07d79b5c();
          lVar20 = *(long *)(unaff_x19 + 0x30);
          if (lVar20 == 0) goto LAB_07d72adc;
          uVar8 = *unaff_x25;
          uVar25 = uVar8 - 1;
          if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_07d72b20;
          in_stack_00000008._4_4_ = iVar6;
          if (*(int *)(lVar20 + (long)(int)uVar25 * (long)(int)unaff_w27 + 0x20) == 0xad) {
            in_stack_00000038._4_4_ = 0;
            in_stack_0000112c = in_stack_0000112c - 1;
            in_stack_00001190 = CONCAT44(0x2d,uVar25);
            *unaff_x25 = uVar25;
            unaff_x28 = in_stack_00000168;
            goto LAB_07d72ac8;
          }
        }
        if (fVar37 <= fStack00000000000000a8) {
          FUN_07d7bce4();
          in_stack_00000038._4_4_ = 0;
          in_stack_00000060._4_4_ = 1;
          uStack0000000000000058 = 1;
          unaff_x28 = in_stack_00000168;
          goto LAB_07d72ac8;
        }
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = uVar8;
        }
        iVar6 = *(int *)(in_stack_00000140 + 100);
        in_stack_00000038._4_4_ = 0;
        if (iVar6 < 3) {
          if (iVar6 != 0) {
            if (iVar6 == 1) {
              iVar6 = FUN_059137dc(unaff_x22 + 0x15f0,
                                   *(undefined8 *)
                                    Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo)
              ;
              if (iVar6 == 0) {
                in_stack_00000038._4_4_ = 0;
                goto LAB_07d72aac;
              }
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
            if (iVar6 != 2) goto LAB_07d7166c;
          }
LAB_07d729d0:
          FUN_07d7bce4();
          in_stack_00000038._4_4_ = 0;
          in_stack_00000060._4_4_ = 1;
          uStack0000000000000058 = 1;
          unaff_x28 = in_stack_00000168;
          unaff_s12 = 1.0;
          goto LAB_07d72ac8;
        }
        if (iVar6 == 3) {
          in_stack_0000112c = FUN_07d79b5c();
          in_stack_00000038._4_4_ = 0;
        }
        else {
          if (iVar6 != 6) {
            if (iVar6 == 4) goto LAB_07d729d0;
            goto LAB_07d7166c;
          }
          in_stack_00000038._4_4_ = 0;
          uVar5 = uVar8;
        }
      }
    }
  }
  else {
    if (iStack000000000000005c == 2) {
      if ((uStack0000000000000104 & 1) == 0 && uVar8 != 0x200b) goto LAB_07d70e7c;
      goto LAB_07d70d34;
    }
    if ((uStack0000000000000104 & 1) == 0) {
LAB_07d70e7c:
      if ((uVar8 != 3) && (uVar8 != 0x200b)) {
        if (uVar8 != 0xad) goto LAB_07d70d34;
        goto LAB_07d70e98;
      }
    }
    else {
LAB_07d70e98:
      if (uVar8 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
    }
    if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
    if (*(int *)(in_stack_00000140 + 100) != 6) {
LAB_07d71228:
      if ((int)uVar8 < 0x2007) {
        if (uVar8 != 10) {
LAB_07d713e4:
          if ((uVar8 != 0xb) && (uVar8 != 0xa0)) goto LAB_07d713f4;
          goto LAB_07d71420;
        }
LAB_07d71440:
        lVar20 = *(long *)(unaff_x19 + 0x48);
        if (lVar20 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar20 + 0x30) = *(int *)(lVar20 + 0x30) + 1;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        uVar8 = *unaff_x21;
      }
      else {
        if ((uVar8 - 0x2007 < 0x23) &&
           ((1L << ((ulong)(uVar8 - 0x2007) & 0x3f) & 0x600000001U) != 0)) {
LAB_07d71420:
          if (((uVar8 != 0xad) && (uVar8 != 0x200b)) && (uVar8 != 0x2060)) goto LAB_07d71440;
          goto LAB_07d717bc;
        }
LAB_07d713f4:
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar15 = FUN_066bcb80(uVar8,0);
        uVar8 = *unaff_x21;
        if ((uVar15 & 1) != 0) goto LAB_07d71420;
      }
      if (uVar8 != 0xa0) goto LAB_07d717bc;
      lVar20 = *(long *)(unaff_x19 + 0x48);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(int *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + 1;
      goto LAB_07d717bc;
    }
    if ((uVar8 & 0xfffffffe) != 10) {
      if ((0x22 < uVar8 - 0x2007) || ((1L << ((ulong)(uVar8 - 0x2007) & 0x3f) & 0x600000001U) == 0))
      goto LAB_07d713e4;
      goto LAB_07d71420;
    }
    fVar37 = 0.0;
    if ((0.0 < fVar39) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar37 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar39)) + fVar37 <=
        fStack00000000000000a8) goto LAB_07d71228;
    if (*(int *)(unaff_x22 + 0x35c) == -1) {
      *(uint *)(unaff_x22 + 0x35c) = uVar5;
    }
    in_stack_0000112c = FUN_07d79b5c();
  }
  in_stack_00001190 = CONCAT44(3,uVar5);
  unaff_x28 = in_stack_00000168;
  goto LAB_07d72ac8;
LAB_07d7166c:
  if ((uStack0000000000000104 & 1) == 0) {
    if (*unaff_x21 == 0xad) {
      lVar20 = *(long *)(unaff_x19 + 0x30);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_07d72b20;
      *(undefined1 *)(lVar20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x194) = 0;
    }
    else {
      if (*in_stack_00000168 == '\x02') {
        FUN_07d7a738();
      }
      else if (*in_stack_00000168 == '\x01') {
        FUN_07d79ee4();
      }
      uVar5 = *unaff_x25;
      if ((uStack0000000000000058 & 1) != 0) {
        *(uint *)(unaff_x22 + 0x340) = uVar5;
      }
      *(uint *)(unaff_x22 + 0x344) = uVar5;
      *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
      lVar20 = *(long *)(unaff_x19 + 0x48);
      if (lVar20 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      uStack0000000000000058 = 0;
      lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(float *)(lVar20 + 100) = fVar36;
      *(float *)(lVar20 + 0x68) = fVar46;
    }
  }
  else {
    lVar20 = *(long *)(unaff_x19 + 0x30);
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= uVar8) goto LAB_07d72b20;
    *(undefined1 *)(lVar20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x194) = 0;
    lVar20 = *(long *)(unaff_x19 + 0x48);
    if (lVar20 == 0) goto LAB_07d72adc;
    uVar5 = *(uint *)(lVar20 + 0x18);
    if (uVar5 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
    lVar20 = lVar20 + 0x20;
    lVar27 = lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
    iVar6 = *(int *)(lVar27 + 0x10) + 1;
    *(int *)(lVar27 + 0x10) = iVar6;
    uVar8 = *(uint *)(unaff_x22 + 0x350);
    *(int *)(unaff_x22 + 0x358) = iVar6;
    if (uVar5 <= uVar8) goto LAB_07d72b20;
    lVar27 = lVar20 + (long)(int)uVar8 * 0x60;
    *(float *)(lVar27 + 0x44) = fVar36;
    *(float *)(lVar27 + 0x48) = fVar46;
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
    if (*unaff_x21 == 0xa0) {
      *(int *)(lVar20 + (long)(int)uVar8 * 0x60) = *(int *)(lVar20 + (long)(int)uVar8 * 0x60) + 1;
    }
  }
LAB_07d717bc:
  if ((uVar51 == uVar10) && (*(int *)(in_stack_00000140 + 100) == 1)) {
    if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar36 = *(float *)(unaff_x22 + 0xf8);
      fVar37 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar46 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      lVar20 = *(long *)(unaff_x22 + 0x19f8);
      if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_07d72adc;
      fVar33 = *(float *)(unaff_x22 + 0xf0);
      fVar31 = *(float *)(lVar20 + 0x2c);
      fVar39 = (float)FUN_07d5378c(*(long *)(lVar20 + 0x20),0);
      uVar22 = *(undefined8 *)in_stack_000000b8;
      fVar39 = (fVar36 / fVar37) * fVar46 * fVar33 * fVar31 * fVar39;
      if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
        lVar20 = *(long *)(unaff_x19 + 0x30);
        if (lVar20 == 0) goto LAB_07d72adc;
        uVar5 = *(int *)(unaff_x22 + 0x334) - 1;
        if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar36 = *(float *)(lVar20 + (long)(int)uVar5 * (long)(int)unaff_w27 + 0x60);
        fVar37 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar46 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar20 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_07d72adc;
        fVar33 = *(float *)(unaff_x22 + 0xf0);
        fVar31 = *(float *)(lVar20 + 0x2c);
        fVar39 = (float)FUN_07d5378c(*(long *)(lVar20 + 0x20),0);
        lVar20 = *(long *)(unaff_x19 + 0x48);
        if (lVar20 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uVar22 = *(undefined8 *)(lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
        fVar39 = (fVar36 / fVar37) * fVar46 * fVar33 * fVar31 * fVar39;
      }
      fVar37 = 0.0;
      fVar36 = *(float *)(unaff_x22 + 0x300);
      if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
        if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
           (lVar20 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar20 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar20,0);
        fVar37 = (float)FUN_07d53598(&stack0x000010e0,0);
      }
      fVar46 = (fStack00000000000000b4 - (float)uVar22) - (float)((ulong)uVar22 >> 0x20);
      fVar33 = *(float *)(unaff_x22 + 0x368);
      bVar3 = true;
      if ((fVar33 <= fVar46) && (bVar3 = false, !NAN(fVar33))) {
        bVar3 = fVar33 == -1.0;
      }
      if (!bVar3) {
        fVar46 = fVar33;
      }
      if (ABS(fVar36) + fVar39 * fVar37 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) < fVar46) {
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
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
  uVar5 = *(uint *)(unaff_x22 + 0x350);
  *(uint *)(lVar20 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) = uVar5;
  if ((uVar51 == uVar10) ||
     ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar20 = *(long *)(unaff_x19 + 0x48);
    if (lVar20 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
    if (*(int *)(lVar20 + (long)(int)uVar5 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
  }
  else {
    lVar20 = *(long *)(unaff_x19 + 0x48);
    if (lVar20 == 0) goto LAB_07d72adc;
LAB_07d71a94:
    if (*(uint *)(lVar20 + 0x18) <= uVar5) goto LAB_07d72b20;
    *(undefined4 *)(lVar20 + (long)(int)uVar5 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160);
  }
  uVar5 = *unaff_x21;
  if (uVar5 == 0x200b) goto LAB_07d71ca8;
  if (uVar5 == 9) {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar37 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    bVar4 = FUN_07d617d8(*in_stack_00000148,0);
    fVar46 = *(float *)(unaff_x22 + 0x300);
    cVar16 = *(char *)(unaff_x22 + 0xf4);
    fVar36 = unaff_s14 * fVar37 * (float)bVar4;
    fVar37 = fVar36 * (float)(int)(fVar46 / fVar36);
    if (fVar37 <= fVar46) {
      fVar37 = fVar46 + fVar36;
    }
  }
  else {
    fVar37 = *(float *)(unaff_x22 + 0x2f8);
    if (fVar37 == 0.0) {
      fVar36 = *(float *)(unaff_x22 + 0x300);
      if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
        fVar37 = (float)FUN_07d57ad0(&stack0x00001100,0);
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar46 = (float)FUN_07d61798(*in_stack_00000148,0);
        cVar16 = *(char *)(unaff_x22 + 0xf4);
        fVar36 = fVar36 - (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          unaff_s14 * fVar37 +
                          in_stack_000000d8._4_4_ *
                          (fStack00000000000000d0 + fStack00000000000000d4 + fVar46));
        if (cVar16 != '\0') {
          fVar36 = (float)(int)(fVar36 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x300) = fVar36;
        if (((uStack0000000000000104 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
        fVar37 = fVar36 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
        goto FUN_07d71c94;
      }
      fVar37 = (float)FUN_07d53598(&stack0x00001110,0);
      fVar39 = *(float *)(unaff_x22 + 0x19b0);
      fVar46 = (float)FUN_07d57ad0(&stack0x00001100,0);
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar30 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
      fVar36 = fVar36 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                        (*(float *)(unaff_x22 + 0x2f4) +
                        unaff_s14 * (fVar37 * fVar39 + fVar46) +
                        in_stack_000000d8._4_4_ *
                        (fStack00000000000000d0 + fStack00000000000000d4 + fVar30));
    }
    else {
      if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar5 < 0x3b)) &&
         ((1L << ((ulong)uVar5 & 0x3f) & 0x400500000000000U) != 0)) {
        fVar37 = fVar37 * 0.5;
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar36 = *(float *)(unaff_x22 + 0x300);
      fVar46 = (float)FUN_07d61798(*in_stack_00000148,0);
      fVar36 = fVar36 + (1.0 - *(float *)(unaff_x22 + 0x15a4)) *
                        (*(float *)(unaff_x22 + 0x2f4) +
                        (fVar37 - fVar30) +
                        in_stack_000000d8._4_4_ * (fStack00000000000000d4 + fVar46));
    }
    cVar16 = *(char *)(unaff_x22 + 0xf4);
    if (cVar16 != '\0') {
      fVar36 = (float)(int)(fVar36 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar36;
    if (((uStack0000000000000104 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
    fVar37 = fVar36 + in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
  }
FUN_07d71c94:
  if (cVar16 != '\0') {
    fVar37 = (float)(int)(fVar37 + unaff_s15);
  }
  *(float *)(unaff_x22 + 0x300) = fVar37;
LAB_07d71ca8:
  lVar20 = *(long *)(unaff_x19 + 0x30);
  if (lVar20 == 0) goto LAB_07d72adc;
  uVar8 = *unaff_x25;
  uVar22 = *(undefined8 *)(lVar20 + 0x18);
  if ((uint)uVar22 <= uVar8) goto LAB_07d72b20;
  *(undefined4 *)(lVar20 + (long)(int)uVar8 * (long)(int)unaff_w27 + 0x158) =
       *(undefined4 *)(unaff_x22 + 0x300);
  uVar5 = *unaff_x21;
  if ((int)uVar5 < 0xd) {
    if ((uVar5 - 10 < 2) || (uVar5 == 3)) goto LAB_07d71d54;
  }
  else {
    if (uVar5 == 0x2028) goto LAB_07d71d54;
    if (uVar5 == 0xd) {
      fVar37 = *(float *)(unaff_x22 + 0x308) + 0.0;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar37 = (float)(int)(fVar37 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar37;
      if (uVar8 == uStack000000000000004c) goto LAB_07d71d54;
      uVar5 = 0xd;
      unaff_x28 = in_stack_00000168;
      goto LAB_07d72314;
    }
  }
  if ((uVar5 == 0x2d && uVar51 == uVar10) ||
     (unaff_x28 = in_stack_00000168, uVar8 == uStack000000000000004c)) goto LAB_07d71d54;
  goto LAB_07d72314;
LAB_07d71d54:
  unaff_x28 = in_stack_00000168;
  if (*(float *)(unaff_x22 + 0x2e8) <= 0.0) goto LAB_07d71ea8;
  fVar37 = *(float *)(unaff_x22 + 0x348);
  fVar36 = *(float *)(unaff_x22 + 0x15b8);
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  unaff_s9 = fVar37 - fVar36;
  if ((ABS(unaff_s9) <= fStack0000000000000054) || (*(char *)(unaff_x22 + 0x2f0) != '\0'))
  goto LAB_07d71ea8;
  uVar34 = *(undefined4 *)(unaff_x22 + 0x338);
  uVar7 = *(undefined4 *)(unaff_x22 + 0x334);
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07d8f610(uVar34,uVar7);
  fVar37 = unaff_s9 + *(float *)(unaff_x22 + 0x2e8);
  *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - unaff_s9;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar37 = (float)(int)(fVar37 + unaff_s15);
  }
  *(float *)(unaff_x22 + 0x2e8) = fVar37;
  if (*(int *)(unaff_x22 + 0xae8) != *(int *)(unaff_x22 + 0x350)) goto LAB_07d71ea8;
  unaff_x20 = 0x15f0;
  param_2 = unaff_x22 + 0x15f0;
  param_1 = (undefined8 *)
            Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo;
  goto code_r0x07d71e38;
}


