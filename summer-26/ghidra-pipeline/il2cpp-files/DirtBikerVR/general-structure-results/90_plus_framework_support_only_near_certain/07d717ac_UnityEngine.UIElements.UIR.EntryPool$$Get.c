/*
FUNCTION_NAME: UnityEngine.UIElements.UIR.EntryPool$$Get
ENTRY_POINT: 07d717ac
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


void UnityEngine_UIElements_UIR_EntryPool__Get(long param_1)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  char cVar17;
  undefined1 uVar18;
  uint uVar19;
  float *pfVar20;
  long lVar21;
  uint in_w9;
  float *pfVar22;
  int *piVar23;
  long lVar24;
  int in_w10;
  uint uVar25;
  long *plVar26;
  long lVar27;
  long unaff_x19;
  long *plVar28;
  uint *unaff_x21;
  long unaff_x22;
  ulong uVar29;
  long unaff_x23;
  uint unaff_w24;
  uint uVar30;
  uint *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  char *unaff_x28;
  uint unaff_w29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  float unaff_s8;
  float unaff_s9;
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
  undefined8 in_stack_00000058;
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
  
  uVar3 = in_stack_00000060;
code_r0x07d717ac:
  bVar5 = false;
  param_1 = param_1 + (long)(int)in_w9 * (long)in_w10;
  *(float *)(param_1 + 100) = unaff_s8;
  *(float *)(param_1 + 0x68) = unaff_s9;
LAB_07d717bc:
  if ((in_stack_00000160._4_4_ == unaff_w26) && (*(int *)(unaff_x23 + 100) == 1)) {
    if (*unaff_x21 == 0x2d) {
LAB_07d717ec:
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar38 = *(float *)(unaff_x22 + 0xf8);
      fVar37 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
      fVar41 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
      lVar24 = *(long *)(unaff_x22 + 0x19f8);
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_07d72adc;
      fVar31 = *(float *)(unaff_x22 + 0xf0);
      fVar34 = *(float *)(lVar24 + 0x2c);
      fVar42 = (float)FUN_07d5378c(*(long *)(lVar24 + 0x20),0);
      uVar12 = *(undefined8 *)in_stack_000000b8;
      fVar42 = (fVar38 / fVar37) * fVar41 * fVar31 * fVar34 * fVar42;
      if ((*unaff_x21 == 10) && (*(int *)(unaff_x22 + 0x334) != *(int *)(unaff_x22 + 0x338))) {
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        uVar7 = *(int *)(unaff_x22 + 0x334) - 1;
        if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar38 = *(float *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x60);
        fVar37 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        if (*(long *)(unaff_x22 + 0x1a00) == 0) goto LAB_07d72adc;
        fVar41 = (float)FUN_07d53294(*(long *)(unaff_x22 + 0x1a00) + 0xb0,0);
        lVar24 = *(long *)(unaff_x22 + 0x19f8);
        if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_07d72adc;
        fVar31 = *(float *)(unaff_x22 + 0xf0);
        fVar34 = *(float *)(lVar24 + 0x2c);
        fVar42 = (float)FUN_07d5378c(*(long *)(lVar24 + 0x20),0);
        lVar24 = *(long *)(unaff_x19 + 0x48);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        uVar12 = *(undefined8 *)(lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60 + 100);
        unaff_s12 = 1.0;
        fVar42 = (fVar38 / fVar37) * fVar41 * fVar31 * fVar34 * fVar42;
      }
      fVar37 = 0.0;
      fVar38 = *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x23 + 0x82) == '\0') {
        if ((*(long *)(unaff_x22 + 0x19f8) == 0) ||
           (lVar24 = *(long *)(*(long *)(unaff_x22 + 0x19f8) + 0x20), lVar24 == 0))
        goto LAB_07d72adc;
        FUN_07d53750(&stack0x000011a0,lVar24,0);
        fVar37 = (float)FUN_07d53598(&stack0x000010e0,0);
      }
      fVar41 = (fStack00000000000000b4 - (float)uVar12) - (float)((ulong)uVar12 >> 0x20);
      fVar31 = *(float *)(unaff_x22 + 0x368);
      bVar4 = true;
      if ((fVar31 <= fVar41) && (bVar4 = false, !NAN(fVar31))) {
        bVar4 = fVar31 == -1.0;
      }
      if (!bVar4) {
        fVar41 = fVar31;
      }
      if (ABS(fVar38) + fVar42 * fVar37 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) < fVar41) {
        FUN_07d79804();
        memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
        FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo);
      }
    }
  }
  else if (*(int *)(unaff_x23 + 100) == 1) goto LAB_07d717ec;
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x334)) goto LAB_07d72b20;
  uVar7 = *(uint *)(unaff_x22 + 0x350);
  *(uint *)(lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x334) * (long)(int)unaff_w27 + 100) = uVar7;
  if ((in_stack_00000160._4_4_ == unaff_w26) ||
     ((*unaff_x21 < 0xe && ((1 << (ulong)(*unaff_x21 & 0x1f) & 0x2c00U) != 0)))) {
    lVar24 = *(long *)(unaff_x19 + 0x48);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
    if (*(int *)(lVar24 + (long)(int)uVar7 * 0x60 + 0x24) == 1) goto LAB_07d71a94;
  }
  else {
    lVar24 = *(long *)(unaff_x19 + 0x48);
    if (lVar24 == 0) goto LAB_07d72adc;
LAB_07d71a94:
    if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
    *(undefined4 *)(lVar24 + (long)(int)uVar7 * 0x60 + 0x6c) = *(undefined4 *)(unaff_x22 + 0x160);
  }
  uVar7 = *unaff_x21;
  if (uVar7 != 0x200b) {
    if (uVar7 == 9) {
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar37 = (float)FUN_07d53334(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      bVar6 = FUN_07d617d8(*in_stack_00000148,0);
      fVar41 = *(float *)(unaff_x22 + 0x300);
      cVar17 = *(char *)(unaff_x22 + 0xf4);
      fVar38 = unaff_s14 * fVar37 * (float)bVar6;
      fVar37 = fVar38 * (float)(int)(fVar41 / fVar38);
      if (fVar37 <= fVar41) {
        fVar37 = fVar41 + fVar38;
      }
    }
    else {
      fVar37 = *(float *)(unaff_x22 + 0x2f8);
      if (fVar37 == 0.0) {
        fVar38 = *(float *)(unaff_x22 + 0x300);
        if (*(char *)(unaff_x23 + 0x82) != '\0') {
          fVar37 = (float)FUN_07d57ad0(&stack0x00001100,0);
          if (*in_stack_00000148 != 0) {
            fVar41 = (float)FUN_07d61798(*in_stack_00000148,0);
            cVar17 = *(char *)(unaff_x22 + 0xf4);
            fVar38 = fVar38 - (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                              (*(float *)(unaff_x22 + 0x2f4) +
                              unaff_s14 * fVar37 +
                              in_stack_000000d8._4_4_ *
                              (fStack00000000000000d0 + fStack00000000000000d4 + fVar41));
            if (cVar17 != '\0') {
              fVar38 = (float)(int)(fVar38 + unaff_s15);
            }
            *(float *)(unaff_x22 + 0x300) = fVar38;
            if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
            fVar37 = fVar38 - in_stack_000000d8._4_4_ * *(float *)(unaff_x23 + 0x90);
            goto FUN_07d71c94;
          }
          goto LAB_07d72adc;
        }
        fVar37 = (float)FUN_07d53598(&stack0x00001110,0);
        fVar42 = *(float *)(unaff_x22 + 0x19b0);
        fVar41 = (float)FUN_07d57ad0(&stack0x00001100,0);
        if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
        fVar31 = (float)FUN_07d61798(*(long *)(unaff_x22 + 0x68),0);
        fVar38 = fVar38 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          unaff_s14 * (fVar37 * fVar42 + fVar41) +
                          in_stack_000000d8._4_4_ *
                          (fStack00000000000000d0 + fStack00000000000000d4 + fVar31));
      }
      else {
        if (((*(char *)(unaff_x22 + 0x2fc) != '\0') && (uVar7 < 0x3b)) &&
           ((1L << ((ulong)uVar7 & 0x3f) & 0x400500000000000U) != 0)) {
          fVar37 = fVar37 * 0.5;
        }
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        fVar38 = *(float *)(unaff_x22 + 0x300);
        fVar41 = (float)FUN_07d61798(*in_stack_00000148,0);
        fVar38 = fVar38 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                          (*(float *)(unaff_x22 + 0x2f4) +
                          (fVar37 - in_stack_00000098._4_4_) +
                          in_stack_000000d8._4_4_ * (fStack00000000000000d4 + fVar41));
      }
      cVar17 = *(char *)(unaff_x22 + 0xf4);
      if (cVar17 != '\0') {
        fVar38 = (float)(int)(fVar38 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar38;
      if (((unaff_w24 & 1) == 0) && (*unaff_x21 != 0x200b)) goto LAB_07d71ca8;
      fVar37 = fVar38 + in_stack_000000d8._4_4_ * *(float *)(unaff_x23 + 0x90);
    }
FUN_07d71c94:
    if (cVar17 != '\0') {
      fVar37 = (float)(int)(fVar37 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar37;
  }
LAB_07d71ca8:
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  uVar7 = *unaff_x25;
  uVar10 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar10 <= uVar7) goto LAB_07d72b20;
  *(undefined4 *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x158) =
       *(undefined4 *)(unaff_x22 + 0x300);
  uVar30 = *unaff_x21;
  if ((int)uVar30 < 0xd) {
    if ((uVar30 - 10 < 2) || (uVar30 == 3)) goto LAB_07d71d54;
LAB_07d71d38:
    if ((uVar30 == 0x2d && in_stack_00000160._4_4_ == unaff_w26) ||
       (uVar7 == uStack000000000000004c)) goto LAB_07d71d54;
  }
  else {
    if (uVar30 != 0x2028) {
      if (uVar30 != 0xd) goto LAB_07d71d38;
      fVar37 = *(float *)(unaff_x22 + 0x308) + unaff_s13;
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar37 = (float)(int)(fVar37 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar37;
      if (uVar7 != uStack000000000000004c) {
        uVar30 = 0xd;
        goto LAB_07d72314;
      }
    }
LAB_07d71d54:
    if (0.0 < *(float *)(unaff_x22 + 0x2e8)) {
      fVar37 = *(float *)(unaff_x22 + 0x348);
      fVar38 = *(float *)(unaff_x22 + 0x15b8);
      if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      fVar37 = fVar37 - fVar38;
      if ((fStack0000000000000054 < ABS(fVar37)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
        uVar35 = *(undefined4 *)(unaff_x22 + 0x338);
        uVar9 = *(undefined4 *)(unaff_x22 + 0x334);
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07d8f610(uVar35,uVar9);
        fVar38 = fVar37 + *(float *)(unaff_x22 + 0x2e8);
        *(float *)(unaff_x22 + 900) = *(float *)(unaff_x22 + 900) - fVar37;
        if (*(char *)(unaff_x22 + 0xf4) != '\0') {
          fVar38 = (float)(int)(fVar38 + unaff_s15);
        }
        *(float *)(unaff_x22 + 0x2e8) = fVar38;
        unaff_x28 = in_stack_00000168;
        if (*(int *)(unaff_x22 + 0xae8) == *(int *)(unaff_x22 + 0x350)) {
          Unity_Collections_LowLevel_Unsafe_UnsafeList<NetworkListEvent<NetcodeGameObjectsPlayer>>__ElementAt
                    (&stack0x00000170,unaff_x22 + 0x15f0,
                     *(undefined8 *)
                      Unity_Services_CloudSave_Internal_Data_GetPrivateCustomItemsRequest_<>c_TypeInfo
                    );
          memcpy((void *)(unaff_x22 + 0xac0),&stack0x00000170,0x398);
          thunk_FUN_03afed3c(unaff_x22 + 0xb38,0);
          *(float *)(unaff_x22 + 0xb00) = fVar37 + *(float *)(unaff_x22 + 0xb00);
          *(float *)(unaff_x22 + 0xb34) = fVar37 + *(float *)(unaff_x22 + 0xb34);
          memcpy(&stack0x000011a0,(void *)(unaff_x22 + 0xac0),0x398);
          FUN_05913b64(unaff_x22 + 0x15f0,&stack0x000011a0,
                       *(undefined8 *)
                        Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_<>c_TypeInfo
                      );
        }
      }
    }
    fVar38 = *(float *)(unaff_x22 + 0x2e8);
    fVar41 = *(float *)(unaff_x22 + 0x34c) - fVar38;
    fVar37 = *(float *)(unaff_x22 + 900);
    if (fVar41 <= *(float *)(unaff_x22 + 900)) {
      fVar37 = fVar41;
    }
    fVar42 = *(float *)(unaff_x22 + 0x348);
    *(float *)(unaff_x22 + 900) = fVar37;
    if (in_stack_0000119c == '\0') {
      *in_stack_00000040 = fVar37;
    }
    lVar24 = *(long *)(unaff_x19 + 0x48);
    if (lVar24 == 0) goto LAB_07d72adc;
    uVar7 = *(uint *)(unaff_x22 + 0x350);
    if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
    lVar21 = lVar24 + 0x20 + (long)(int)uVar7 * 0x60;
    uVar10 = *(uint *)(unaff_x22 + 0x338);
    *(uint *)(lVar21 + 0x18) = uVar10;
    lVar27 = 0x338;
    if ((int)uVar10 <= *(int *)(unaff_x22 + 0x340)) {
      lVar27 = 0x340;
    }
    uVar25 = *(uint *)(unaff_x22 + lVar27);
    *(uint *)(unaff_x22 + 0x340) = uVar25;
    *(uint *)(lVar21 + 0x1c) = uVar25;
    uVar1 = *(uint *)(unaff_x22 + 0x334);
    *(uint *)(unaff_x22 + 0x33c) = uVar1;
    *(uint *)(lVar21 + 0x20) = uVar1;
    uVar30 = *(uint *)(unaff_x22 + 0x340);
    if ((int)uVar25 <= (int)*(uint *)(unaff_x22 + 0x344)) {
      uVar30 = *(uint *)(unaff_x22 + 0x344);
    }
    *(uint *)(unaff_x22 + 0x344) = uVar30;
    *(uint *)(lVar21 + 0x24) = uVar30;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    uVar19 = uVar30;
    if ((*(uint *)(unaff_x23 + 0x98) & 0xfffffffe) == 2) {
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar27 + 0x18) <= uVar1) goto LAB_07d72b20;
      if (*(float *)(lVar27 + (long)(int)uVar1 * (long)(int)unaff_w27 + 0x158) != 0.0) {
        uVar25 = uVar10;
        uVar19 = uVar1;
      }
    }
    lVar24 = lVar24 + 0x20 + (long)(int)uVar7 * 0x60;
    *(uint *)(lVar24 + 4) = (uVar1 - uVar10) + 1;
    iVar8 = *(int *)(in_stack_00000068 + 0x60);
    *(int *)(lVar24 + 8) = iVar8;
    *(uint *)(lVar24 + 0xc) = (uVar30 - (uVar10 + iVar8)) + 1;
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar25) goto LAB_07d72b20;
    *(undefined4 *)(lVar24 + 0x50) =
         *(undefined4 *)(lVar27 + (long)(int)uVar25 * (long)(int)unaff_w27 + 0x118);
    *(float *)(lVar24 + 0x54) = fVar41;
    lVar24 = *(long *)(unaff_x19 + 0x48);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
    lVar27 = *(long *)(unaff_x19 + 0x30);
    if (lVar27 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar27 + 0x18) <= uVar19) goto LAB_07d72b20;
    fVar42 = fVar42 - fVar38;
    lVar24 = lVar24 + 0x20 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
    uVar35 = *(undefined4 *)(lVar27 + (long)(int)uVar19 * (long)(int)unaff_w27 + 0x124);
    *(float *)(lVar24 + 0x5c) = fVar42;
    *(undefined4 *)(lVar24 + 0x58) = uVar35;
    lVar24 = *(long *)(unaff_x19 + 0x48);
    if (lVar24 == 0) goto LAB_07d72adc;
    uVar10 = *(uint *)(unaff_x22 + 0x350);
    uVar7 = *(uint *)(lVar24 + 0x18);
    if (*(char *)(unaff_x23 + 0xa0) == '\0') {
      if (uVar7 <= uVar10) goto LAB_07d72b20;
      lVar27 = lVar24 + (long)(int)uVar10 * 0x60;
      fVar37 = *(float *)(lVar27 + 0x78) - unaff_s14 * in_stack_00000138._4_4_;
    }
    else {
      if (uVar7 <= uVar10) goto LAB_07d72b20;
      lVar21 = *(long *)(unaff_x19 + 0x30);
      if (lVar21 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_07d72b20;
      lVar27 = lVar24 + (long)(int)uVar10 * 0x60;
      fVar37 = *(float *)(lVar21 + (long)(int)uVar19 * (long)(int)unaff_w27 + 0x158);
    }
    *(float *)(lVar27 + 0x48) = fVar37;
    if (uVar7 <= uVar10) goto LAB_07d72b20;
    lVar27 = lVar24 + 0x20 + (long)(int)uVar10 * 0x60;
    *(float *)(lVar27 + 0x40) = fStack0000000000000100;
    if (*(int *)(lVar27 + 4) == 1) {
      *(undefined4 *)(lVar24 + 0x20 + (long)(int)uVar10 * 0x60 + 0x4c) =
           *(undefined4 *)(unaff_x22 + 0x160);
    }
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar37 = (float)FUN_07d61798(*in_stack_00000148,0);
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    uVar7 = *(uint *)(unaff_x22 + 0x344);
    uVar10 = (uint)*(undefined8 *)(lVar24 + 0x18);
    if (uVar10 <= uVar7) goto LAB_07d72b20;
    uVar30 = *(uint *)(unaff_x22 + 0x350);
    lVar27 = *(long *)(unaff_x19 + 0x48);
    fVar37 = (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
             (*(float *)(unaff_x22 + 0x2f4) +
             in_stack_000000d8._4_4_ * (fStack00000000000000d0 + fStack00000000000000d4 + fVar37));
    if (*(char *)(lVar24 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x174) == '\0') {
      if (lVar27 == 0) goto LAB_07d72adc;
      uVar7 = *(uint *)(unaff_x22 + 0x33c);
      if (uVar10 <= uVar7) goto LAB_07d72b20;
    }
    else if (lVar27 == 0) goto LAB_07d72adc;
    bVar4 = *(uint *)(lVar27 + 0x18) <= uVar30;
    if (*(char *)(unaff_x23 + 0x82) == '\0') {
      if (bVar4) goto LAB_07d72b20;
      fVar37 = -fVar37;
    }
    else if (bVar4) goto LAB_07d72b20;
    *(float *)(lVar27 + (long)(int)uVar30 * 0x60 + 0x5c) =
         *(float *)(lVar24 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x138) + fVar37;
    if (*(uint *)(lVar27 + 0x18) <= uVar30) goto LAB_07d72b20;
    lVar27 = lVar27 + (long)(int)uVar30 * 0x60;
    *(float *)(lVar27 + 0x54) = unaff_s13 - *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar27 + 0x58) = fVar41;
    *(float *)(lVar27 + 0x4c) = fStack0000000000000048 + (fVar42 - fVar41);
    *(float *)(lVar27 + 0x50) = fVar42;
    uVar30 = *unaff_x21;
    if (0x2c < (int)uVar30) {
      if ((uVar30 - 0x2028 < 2) || (uVar30 == 0x2d)) goto LAB_07d72208;
      goto LAB_07d72314;
    }
    if (uVar30 - 10 < 2) {
LAB_07d72208:
      FUN_07d79804();
      uVar7 = *(uint *)(unaff_x22 + 0x334);
      iVar8 = *(int *)(unaff_x22 + 0x350) + 1;
      *(uint *)(unaff_x22 + 0x338) = uVar7 + 1;
      *(int *)(unaff_x22 + 0x350) = iVar8;
      *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_07d72adc;
      if (*(int *)(*(long *)(unaff_x19 + 0x48) + 0x18) <= iVar8) {
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) ==
            0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07d8f790(iVar8);
        uVar7 = *unaff_x25;
      }
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
      fVar38 = *(float *)(unaff_x22 + 0x2ec);
      fVar37 = *(float *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x14c);
      if (fVar38 == DAT_015c55ac) {
        if ((*unaff_x21 == 0x2029) || (fVar41 = 0.0, *unaff_x21 == 10)) {
          fVar41 = *(float *)(unaff_x23 + 0x94);
        }
        uVar18 = 0;
        fVar38 = fVar37 + (0.0 - *(float *)(unaff_x22 + 0x34c)) +
                 in_stack_00000020._4_4_ * (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc))
        ;
      }
      else {
        if ((*unaff_x21 == 0x2029) || (fVar41 = 0.0, *unaff_x21 == 10)) {
          fVar41 = *(float *)(unaff_x23 + 0x94);
        }
        uVar18 = 1;
      }
      fVar38 = *(float *)(unaff_x22 + 0x2e8) +
               fVar38 + in_stack_000000d8._4_4_ * (fVar41 + unaff_s13);
      bVar5 = *(char *)(unaff_x22 + 0xf4) != '\0';
      *(undefined1 *)(unaff_x22 + 0x2f0) = uVar18;
      *(float *)(unaff_x22 + 0x15b8) = fVar37;
      fVar37 = *(float *)(unaff_x22 + 0x304) + unaff_s13 + *(float *)(unaff_x22 + 0x308);
      if (bVar5) {
        fVar38 = (float)(int)(fVar38 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x2e8) = fVar38;
      if (bVar5) {
        fVar37 = (float)(int)(fVar37 + unaff_s15);
      }
      *(undefined8 *)(unaff_x22 + 0x348) = in_stack_00000030;
      *(float *)(unaff_x22 + 0x300) = fVar37;
      FUN_07d79804();
      FUN_07d79804();
      *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
      in_stack_00000060._4_4_ = 1;
      bVar5 = true;
      goto LAB_07d72ac8;
    }
    if (uVar30 == 3) {
      if (*(long *)(unaff_x22 + 0x20) != 0) {
        uVar30 = 3;
        in_stack_0000112c = (uint)*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
        goto LAB_07d72314;
      }
      goto LAB_07d72adc;
    }
  }
LAB_07d72314:
  uVar7 = *unaff_x25;
  if (uVar10 <= uVar7) goto LAB_07d72b20;
  lVar24 = lVar24 + 0x20;
  if (*(char *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x174) != '\0') {
    lVar27 = lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27;
    auVar40 = *(undefined1 (*) [16])(in_stack_00000068 + 0x78);
    uVar12 = *(undefined8 *)(lVar27 + 0xf8);
    auVar44 = NEON_ext(auVar40,auVar40,8,1);
    uVar46 = *(undefined8 *)(lVar27 + 0x104);
    auVar45._0_4_ = -(uint)(auVar40._0_4_ < (float)uVar12);
    auVar45._4_4_ = -(uint)(auVar40._4_4_ < (float)((ulong)uVar12 >> 0x20));
    auVar45._8_4_ = -(uint)((float)uVar46 < auVar44._0_4_);
    auVar45._12_4_ = -(uint)((float)((ulong)uVar46 >> 0x20) < auVar44._4_4_);
    auVar44._8_8_ = uVar46;
    auVar44._0_8_ = uVar12;
    auVar40 = auVar40 ^ (auVar40 ^ auVar44) & ~auVar45;
    *(long *)(in_stack_00000068 + 0x80) = auVar40._8_8_;
    *(long *)(in_stack_00000068 + 0x78) = auVar40._0_8_;
  }
  if (((iStack00000000000000b0 != 3) && (iStack00000000000000b0 != 0)) ||
     ((*(uint *)(unaff_x23 + 100) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x23 + 100) & 0x1f) & 0x4aU) != 0)))) {
    if (((uStack0000000000000104 & 1) == 0) && (uVar30 != 0x200b)) {
      if (uVar30 == 0x2d) {
        if (0 < (int)uVar7) {
          if (uVar7 - 1 < uVar10) {
            uVar35 = *(undefined4 *)(lVar24 + (ulong)(uVar7 - 1) * (ulong)unaff_w27);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar16 = FUN_066b9610(uVar35,0);
            if ((uVar16 & 1) != 0) {
              uVar30 = *unaff_x21;
              goto LAB_07d72408;
            }
            goto LAB_07d72410;
          }
          goto LAB_07d72b20;
        }
        goto LAB_07d72410;
      }
LAB_07d72408:
      if (uVar30 == 0xad) goto LAB_07d72410;
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
      uVar30 = *unaff_x21;
      if ((int)uVar30 < 0x2007) {
        if (uVar30 == 0x2d) {
          uVar7 = *unaff_x25 - 1;
          if (0 < (int)*unaff_x25) {
            lVar24 = *(long *)(unaff_x19 + 0x30);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
            uVar35 = *(undefined4 *)(lVar24 + (ulong)uVar7 * (ulong)unaff_w27 + 0x20);
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar16 = FUN_066b9610(uVar35,0);
            if ((uVar16 & 1) != 0) goto LAB_07d72940;
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
        uVar16 = FUN_07d90128(uVar30,0);
        if ((uVar16 & 1) == 0) {
LAB_07d7268c:
          uVar7 = *unaff_x21;
          if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
              == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar16 = FUN_07d901bc(uVar7,0);
          if ((uVar16 & 1) == 0) {
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
            lVar24 = *(long *)(unaff_x19 + 0x30);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
            uVar35 = *(undefined4 *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x20);
            if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar16 = FUN_07d901bc(uVar35,0);
            if ((uVar16 & 1) == 0) goto LAB_07d72418;
            lVar24 = *(long *)(unaff_x19 + 0x30);
            if (lVar24 != 0) {
              if (*unaff_x25 + 1 < *(uint *)(lVar24 + 0x18)) {
                if (in_stack_00000018 != 0) {
                  uVar35 = *(undefined4 *)
                            (lVar24 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27 + 0x20);
                  lVar24 = FUN_07d86e90(in_stack_00000018,0);
                  if ((lVar24 != 0) && (lVar24 = FUN_07d98b58(lVar24,0), lVar24 != 0)) {
                    uVar7 = FUN_049ddf40(lVar24,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
                    lVar24 = FUN_07d86e90(in_stack_00000018,0);
                    if ((lVar24 != 0) && (lVar24 = FUN_07d98b58(lVar24,0), lVar24 != 0)) {
                      uVar10 = FUN_049ddf40(lVar24,uVar35,*(undefined8 *)PTR_DAT_084b5110);
                      if (((uVar7 | uVar10) & 1) != 0) goto LAB_07d72940;
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
          if ((in_stack_00000018 == 0) || (lVar24 = FUN_07d86e90(in_stack_00000018,0), lVar24 == 0))
          goto LAB_07d72adc;
          if (*(char *)(lVar24 + 0x28) != '\0') goto LAB_07d7268c;
        }
        lVar24 = FUN_07d86e90(in_stack_00000018,0);
        if ((lVar24 == 0) || (lVar24 = FUN_07d98b58(lVar24,0), lVar24 == 0)) goto LAB_07d72adc;
        uVar16 = FUN_049ddf40(lVar24,*unaff_x21,*(undefined8 *)PTR_DAT_084b5110);
        if ((int)*unaff_x25 < (int)uStack000000000000004c) {
          lVar24 = FUN_07d86e90(in_stack_00000018,0);
          if (lVar24 == 0) goto LAB_07d72adc;
          lVar24 = FUN_07d98da0(lVar24,0);
          lVar27 = *(long *)(unaff_x19 + 0x30);
          if (lVar27 == 0) goto LAB_07d72adc;
          if (*(uint *)(lVar27 + 0x18) <= *unaff_x25 + 1) goto LAB_07d72b20;
          if (lVar24 == 0) goto LAB_07d72adc;
          uVar7 = FUN_049ddf40(lVar24,*(undefined4 *)
                                       (lVar27 + (long)(int)(*unaff_x25 + 1) * (long)(int)unaff_w27
                                       + 0x20),*(undefined8 *)PTR_DAT_084b5110);
          if ((uVar16 & 1) == 0) goto LAB_07d72758;
LAB_07d72884:
          if ((in_stack_00000060._4_4_ & (float)unaff_w29 == in_stack_00000150) == 0)
          goto LAB_07d72940;
          in_stack_00000060._4_4_ = 1;
LAB_07d728a8:
          FUN_07d79804();
        }
        else {
          uVar7 = 0;
          if ((uVar16 & 1) != 0) goto LAB_07d72884;
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
  }
LAB_07d72940:
  FUN_07d79804();
  *(int *)(unaff_x22 + 0x334) = *(int *)(unaff_x22 + 0x334) + 1;
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
    uVar7 = *(uint *)(lVar24 + (long)(int)in_stack_0000112c * 0x10 + 0x24);
    if (uVar7 == 0) goto LAB_07d72ae0;
    *unaff_x21 = uVar7;
    if (5 < in_stack_00000108) {
      uVar12 = FUN_0676d8dc();
      uVar46 = FUN_0674e2a4(&stack0x0000112c,0);
      uVar12 = FUN_065ce354(*(undefined8 *)Unity_Hierarchy_HierarchyFlattenedNode_TypeInfo,uVar12,
                            *(undefined8 *)Unity_Hierarchy_HierarchyNode_TypeInfo,uVar46,0);
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
      }
      FUN_07c4fb40(uVar12,0);
      uVar7 = *unaff_x21;
      in_stack_00001190 = CONCAT44(3,*unaff_x25);
    }
  } while (uVar7 == 0x1a);
  if ((uVar7 == 0x3c) && (*(char *)(unaff_x23 + 0x81) != '\0')) {
    unaff_x28[0] = '\x01';
    unaff_x28[1] = '\x01';
    uVar16 = FUN_07d74ca8();
    if (((uVar16 & 1) != 0) && (in_stack_0000112c = in_stack_000010fc, *unaff_x28 == '\x01'))
    goto LAB_07d72ac8;
  }
  else {
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *unaff_x28 = *(char *)(lVar24 + 0x28);
    *(undefined4 *)(unaff_x22 + 0x78) = *(undefined4 *)(lVar24 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(lVar24 + 0x40);
    thunk_FUN_03afed3c(in_stack_00000148);
  }
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  unaff_w26 = *(uint *)(unaff_x22 + 0x334);
  uVar7 = *(uint *)(lVar24 + 0x18);
  if (uVar7 <= unaff_w26) goto LAB_07d72b20;
  lVar27 = lVar24 + 0x20;
  in_stack_00000160._4_4_ = (uint)in_stack_00001190;
  uVar35 = *(undefined4 *)(unaff_x22 + 0x78);
  cVar17 = *(char *)(lVar27 + (long)(int)unaff_w26 * (long)(int)unaff_w27 + 0x3c);
  unaff_x28[1] = '\0';
  if (in_stack_00000160._4_4_ == unaff_w26) {
    uVar10 = (uint)((ulong)in_stack_00001190 >> 0x20);
    *unaff_x21 = uVar10;
    *unaff_x28 = '\x01';
    if (uVar10 == 0x2026) {
      if (uVar7 <= *unaff_x25) goto LAB_07d72b20;
      *(undefined8 *)(lVar27 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x10) =
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
      uVar7 = *(uint *)(unaff_x22 + 0x334);
      *(undefined1 *)(unaff_x22 + 0x4d) = 1;
      in_stack_00001190 = CONCAT44(3,uVar7 + 1);
      goto joined_r0x07d6f120;
    }
    if (uVar10 == 3) {
      if (*in_stack_00000148 != 0) {
        uVar7 = *unaff_x25;
        lVar21 = FUN_07d61598(*in_stack_00000148,0);
        if (lVar21 != 0) {
          uVar12 = FUN_060344a4(lVar21,3,*(undefined8 *)
                                          System_Runtime_Serialization_GenericParameterDataContract_GenericParameterDataContractCriticalHelper_TypeInfo
                               );
          if (uVar7 < *(uint *)(lVar24 + 0x18)) {
            *(undefined8 *)(lVar27 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x10) = uVar12;
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
  uVar7 = *unaff_x25;
joined_r0x07d6f120:
  unaff_x23 = in_stack_00000140;
  if (((int)uVar7 < 0) && (*unaff_x21 != 3)) {
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
    lVar24 = lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined4 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *unaff_x25 = uVar7 + 1;
    goto LAB_07d72ac8;
  }
  cVar2 = *unaff_x28;
  if (cVar2 == '\x01') {
    uVar7 = *(uint *)(unaff_x22 + 300);
    if ((uVar7 >> 4 & 1) == 0) {
      if ((uVar7 >> 3 & 1) == 0) {
        fVar37 = 1.0;
        if ((uVar7 >> 5 & 1) != 0) {
          uVar7 = *unaff_x21;
          if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar16 = FUN_066bbc7c(uVar7,0);
          fVar37 = 1.0;
          if ((uVar16 & 1) != 0) {
            uVar7 = *unaff_x21;
            if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar7 = FUN_066bbf04(uVar7,0);
            fVar37 = fStack0000000000000010;
            goto LAB_07d6f260;
          }
        }
      }
      else {
                    /* try { // try from 07d6f204 to 07e6f277 has its CatchHandler @ 07d6f204
                       catch() { ... } // from try @ 07d6f204 with catch @ 07d6f204
                       catch() { ... } // from try @ 07d6f2c0 with catch @ 07d6f204
                       catch() { ... } // from try @ 07d6f31c with catch @ 07d6f204
                       catch() { ... } // from try @ 07d6f368 with catch @ 07d6f204 */
        uVar7 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar16 = FUN_066bbbdc(uVar7,0);
        fVar37 = 1.0;
        if ((uVar16 & 1) != 0) {
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
      uVar16 = FUN_066bbc7c(uVar7,0);
      fVar37 = 1.0;
      if ((uVar16 & 1) != 0) {
        uVar7 = *unaff_x21;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar7 = FUN_066bbf04(uVar7,0);
LAB_07d6f25c:
        fVar37 = 1.0;
LAB_07d6f260:
        *unaff_x21 = uVar7 & 0xffff;
      }
    }
    cVar2 = *unaff_x28;
  }
  else {
    fVar37 = 1.0;
  }
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (cVar2 == '\x01') {
    if (lVar24 == 0) goto LAB_07d72adc;
                    /* try { // try from 07d6f318 to 07e6f31b has its CatchHandler @ 07d6f328 */
                    /* try { // try from 07d6f31c to 07e6f347 has its CatchHandler @ 07d6f204 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f278 with catch @ 07d6f324
                        */
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f318 with catch @ 07d6f328
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f290 with catch @ 07d6f32c
                        */
    *(undefined8 *)(unaff_x22 + 0x1598) =
         *(undefined8 *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
    thunk_FUN_03afed3c(unaff_x22 + 0x1598);
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72ac8;
                    /* try { // try from 07d6f348 to 07e6f34b has its CatchHandler @ 07d6f35c */
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
                    /* catch() { ... } // from try @ 07d6f348 with catch @ 07d6f35c */
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
                    /* try { // try from 07d6f360 to 07e6f367 has its CatchHandler @ 07d6f370 */
                    /* try { // try from 07d6f368 to 07e6f373 has its CatchHandler @ 07d6f204 */
    *in_stack_00000148 = *(long *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07d6f360 with catch @ 07d6f370
                        */
    thunk_FUN_03afed3c(in_stack_00000148);
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    *in_stack_00000090 = *(long *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x50);
    thunk_FUN_03afed3c();
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    uVar10 = *unaff_x25;
    uVar7 = *(uint *)(lVar24 + 0x18);
    if (uVar7 <= uVar10) goto LAB_07d72b20;
    *(undefined4 *)(unaff_x22 + 0x78) =
         *(undefined4 *)(lVar24 + 0x20 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x38);
    if (in_stack_00000160._4_4_ == unaff_w26) {
      lVar27 = *(long *)(unaff_x22 + 0x20);
      if (lVar27 == 0) goto LAB_07d72adc;
                    /* try { // try from 07d6f3e0 to 07e6f453 has its CatchHandler @ 07d6f3e0
                       catch() { ... } // from try @ 07d6f3e0 with catch @ 07d6f3e0
                       catch() { ... } // from try @ 07d6f49c with catch @ 07d6f3e0
                       catch() { ... } // from try @ 07d6f4f8 with catch @ 07d6f3e0
                       catch() { ... } // from try @ 07d6f544 with catch @ 07d6f3e0 */
      if (*(uint *)(lVar27 + 0x18) <= in_stack_0000112c) goto LAB_07d72b20;
      if ((*(int *)(lVar27 + (long)(int)in_stack_0000112c * 0x10 + 0x24) != 10) ||
         (uVar10 == *(uint *)(unaff_x22 + 0x338))) goto LAB_07d6f408;
      if (uVar7 <= uVar10 - 1) goto LAB_07d72b20;
                    /* try { // try from 07d6f8c4 to 07e6f93f has its CatchHandler @ 07d6f8c4
                       catch() { ... } // from try @ 07d6f8c4 with catch @ 07d6f8c4
                       catch() { ... } // from try @ 07d6f9a4 with catch @ 07d6f8c4
                       catch() { ... } // from try @ 07d6f9d4 with catch @ 07d6f8c4
                       catch() { ... } // from try @ 07d6fa00 with catch @ 07d6f8c4
                       catch() { ... } // from try @ 07d6fa24 with catch @ 07d6f8c4 */
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar41 = *(float *)(lVar24 + 0x20 + (long)(int)(uVar10 - 1) * (long)(int)unaff_w27 + 0x40);
      fVar38 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar42 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar42 = ((fVar37 * fVar41) / fVar38) * fVar42;
LAB_07d6f900:
      fStack00000000000000f4 = 0.0;
      fStack00000000000000f8 = 0.0;
      if (*unaff_x21 != 0x2026) goto LAB_07d6f918;
    }
    else {
LAB_07d6f408:
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar41 = *(float *)(unaff_x22 + 0xf8);
      fVar38 = (float)FUN_07d5328c(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar42 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
      fVar42 = ((fVar37 * fVar41) / fVar38) * fVar42;
      if (in_stack_00000160._4_4_ == unaff_w26) goto LAB_07d6f900;
LAB_07d6f918:
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    /* try { // try from 07d6f940 to 07e6f94b has its CatchHandler @ 07d6f9d4 */
      fStack00000000000000f4 = (float)FUN_07d532ec(*in_stack_00000148 + 0xb0,0);
    }
    lVar24 = *(long *)(unaff_x22 + 0x1598);
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_07d72adc;
    fVar38 = *(float *)(unaff_x22 + 0xf0);
    fVar41 = *(float *)(lVar24 + 0x2c);
    fStack00000000000000e8 = (float)FUN_07d5378c(*(long *)(lVar24 + 0x20),0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                    /* try { // try from 07d6f978 to 07e6f9a3 has its CatchHandler @ 07d6f9e0 */
    fVar31 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar32 = *(float *)(unaff_x22 + 0xf0);
    fVar34 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                    /* try { // try from 07d6f9a4 to 07e6f9cb has its CatchHandler @ 07d6f8c4 */
    lVar24 = *(long *)(unaff_x19 + 0x30);
    fVar34 = fVar42 * fVar31 * fVar32 * fVar34;
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar34 = (float)(int)(fVar34 + unaff_s15);
    }
                    /* try { // try from 07d6f9cc to 07e6f9cf has its CatchHandler @ 07d6f9dc */
    if (lVar24 == 0) goto LAB_07d72adc;
                    /* try { // try from 07d6f9d0 to 07e6f9d3 has its CatchHandler @ 07d6f9d8 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f940 with catch @ 07d6f9d4
                       try { // try from 07d6f9d4 to 07e6f9fb has its CatchHandler @ 07d6f8c4 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f9d0 with catch @ 07d6f9d8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f9cc with catch @ 07d6f9dc
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f978 with catch @ 07d6f9e0
                        */
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    lVar27 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
    *(undefined1 *)(lVar27 + 0x28) = 1;
                    /* try { // try from 07d6f9fc to 07e6f9ff has its CatchHandler @ 07d6fa18 */
    fStack00000000000000e8 = fVar42 * fVar38 * fVar41 * fStack00000000000000e8;
                    /* try { // try from 07d6fa00 to 07e6fa1b has its CatchHandler @ 07d6f8c4 */
    *(float *)(lVar27 + 0x160) = fStack00000000000000e8;
    in_stack_00000138._4_4_ = *(float *)(unaff_x22 + 0xd8);
LAB_07d6fa0c:
    unaff_s12 = 1.0;
    unaff_s13 = 0.0;
    uVar7 = *unaff_x21;
                    /* catch() { ... } // from try @ 07d6f9fc with catch @ 07d6fa18 */
                    /* try { // try from 07d6fa1c to 07e6fa23 has its CatchHandler @ 07d6fa2c */
    fVar38 = 0.0;
    if (uVar7 != 3 && uVar7 != 0xad) {
      fVar38 = fStack00000000000000e8;
    }
  }
  else {
                    /* try { // try from 07d6f278 to 07e6f283 has its CatchHandler @ 07d6f324 */
    if (cVar2 == '\x02') {
      if (lVar24 != 0) {
                    /* try { // try from 07d6f290 to 07e6f2bf has its CatchHandler @ 07d6f32c */
        if (*unaff_x25 < *(uint *)(lVar24 + 0x18)) {
          plVar28 = *(long **)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x30);
          if (plVar28 != (long *)0x0) {
            bVar6 = *(byte *)(*(long *)
                               Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo
                             + 0x130);
                    /* try { // try from 07d6f2c0 to 07e6f317 has its CatchHandler @ 07d6f204 */
            if ((*(byte *)(*plVar28 + 0x130) < bVar6) ||
               (*(long *)(*(long *)(*plVar28 + 200) + (ulong)bVar6 * 8 + -8) !=
                *(long *)
                 Unity_Services_CloudSave_Internal_Models_GetDownloadUrl400OneOf_<>c_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar28);
            }
            plVar13 = (long *)FUN_07d8466c(plVar28,0);
            if (plVar13 == (long *)0x0) {
              plVar13 = (long *)0x0;
              *in_stack_000000e0 = 0;
            }
            else {
              lVar24 = *(long *)
                        Unity_Services_CloudSave_Internal_Data_GetCustomItemsRequest_<>c_TypeInfo;
              bVar6 = *(byte *)(lVar24 + 0x130);
              if (*(byte *)(*plVar13 + 0x130) < bVar6) {
                plVar26 = (long *)0x0;
              }
              else {
                    /* try { // try from 07d6f49c to 07e6f4f3 has its CatchHandler @ 07d6f3e0 */
                plVar26 = plVar13;
                if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar6 * 8 + -8) != lVar24) {
                  plVar26 = (long *)0x0;
                }
              }
              *in_stack_000000e0 = (long)plVar26;
              if (*(byte *)(*plVar13 + 0x130) < bVar6) {
                plVar13 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar6 * 8 + -8) != lVar24) {
                plVar13 = (long *)0x0;
              }
            }
            thunk_FUN_03afed3c(in_stack_000000e0,plVar13);
            iVar8 = FUN_07d85970(plVar28,0);
            *(int *)(unaff_x22 + 0x158c) = iVar8;
                    /* try { // try from 07d6f4f4 to 07e6f4f7 has its CatchHandler @ 07d6f504 */
                    /* try { // try from 07d6f4f8 to 07e6f523 has its CatchHandler @ 07d6f3e0 */
            if (*unaff_x21 == 0x3c) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f454 with catch @ 07d6f500
                        */
              *unaff_x21 = iVar8 + 0xe000;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f4f4 with catch @ 07d6f504
                        */
            }
            else {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 07d6f46c with catch @ 07d6f508
                        */
              uVar9 = FUN_03c4ea74(ZEXT816(0x3f800000),ZEXT816(0x3f800000),0x3f800000,0x3f800000,0);
              *(undefined4 *)(unaff_x22 + 0x1590) = uVar9;
            }
                    /* try { // try from 07d6f524 to 07e6f527 has its CatchHandler @ 07d6f538 */
            if (*(long *)(unaff_x22 + 0x68) != 0) {
              fVar41 = *(float *)(unaff_x22 + 0xf8);
                    /* catch() { ... } // from try @ 07d6f524 with catch @ 07d6f538 */
                    /* try { // try from 07d6f53c to 07e6f543 has its CatchHandler @ 07d6f54c */
              FUN_07d60d20(&stack0x000011a0,*(long *)(unaff_x22 + 0x68),0);
                    /* try { // try from 07d6f544 to 07e6f54f has its CatchHandler @ 07d6f3e0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07d6f53c with catch @ 07d6f54c
                        */
              memcpy(&stack0x00001130,&stack0x000011a0,0x60);
              fVar38 = (float)FUN_07d5328c(&stack0x00001130,0);
              if (*in_stack_00000148 != 0) {
                FUN_07d60d20(&stack0x00000170,*in_stack_00000148,0);
                memcpy(&stack0x00001130,&stack0x00000170,0x60);
                fVar42 = (float)FUN_07d53294(&stack0x00001130,0);
                if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                fVar42 = (fVar41 / fVar38) * fVar42;
                fVar38 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                fVar41 = *(float *)(unaff_x22 + 0xf8);
                if (fVar38 <= 0.0) {
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar38 = (float)FUN_07d5328c(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar31 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  FUN_07d53750(&stack0x000011a0,plVar28[4],0);
                  fVar32 = (float)FUN_07d53580(&stack0x000010e0,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar48 = *(float *)((long)plVar28 + 0x2c);
                  fVar33 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar50 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
                  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
                  fVar36 = *(float *)(unaff_x22 + 0xf0);
                  fVar34 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
                  if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
                  fStack00000000000000f4 = (fVar41 / fVar38) * fStack00000000000000f4;
                  fStack00000000000000e8 =
                       fStack00000000000000f4 * (fVar31 / fVar32) * fVar48 * fVar33;
                  fStack00000000000000f4 = fStack00000000000000f4 / fStack00000000000000e8;
                  fVar34 = fVar42 * fVar50 * fVar36 * fVar34;
                  fStack00000000000000f8 = fStack00000000000000f4 * fStack00000000000000f8;
                  fVar38 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
                  fStack00000000000000f4 = fStack00000000000000f4 * fVar38;
                }
                else {
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar38 = (float)FUN_07d5328c(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar31 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (plVar28[4] == 0) goto LAB_07d72adc;
                  fVar48 = *(float *)((long)plVar28 + 0x2c);
                  fVar32 = (float)FUN_07d5378c(plVar28[4],0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fStack00000000000000f8 = (float)FUN_07d532bc(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar33 = (float)FUN_07d532e4(*in_stack_000000e0 + 0x48,0);
                  if (*in_stack_000000e0 == 0) goto LAB_07d72adc;
                  fVar50 = *(float *)(unaff_x22 + 0xf0);
                  fVar34 = (float)FUN_07d53294(*in_stack_000000e0 + 0x48,0);
                  if (*(long *)(unaff_x22 + 0xe0) == 0) goto LAB_07d72adc;
                  fVar34 = fVar42 * fVar33 * fVar50 * fVar34;
                  fStack00000000000000e8 = (fVar41 / fVar38) * fVar31 * fVar48 * fVar32;
                  fStack00000000000000f4 = (float)FUN_07d532ec(*(long *)(unaff_x22 + 0xe0) + 0x48,0)
                  ;
                  unaff_x28 = in_stack_00000168;
                }
                *(long **)(unaff_x22 + 0x1598) = plVar28;
                thunk_FUN_03afed3c(unaff_x22 + 0x1598,plVar28);
                lVar24 = *(long *)(unaff_x19 + 0x30);
                if (lVar24 != 0) {
                  if (*unaff_x25 < *(uint *)(lVar24 + 0x18)) {
                    lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
                    *(long *)(lVar24 + 0x48) = *in_stack_000000e0;
                    *(undefined1 *)(lVar24 + 0x28) = 2;
                    *(float *)(lVar24 + 0x160) = fStack00000000000000e8;
                    thunk_FUN_03afed3c();
                    lVar24 = *(long *)(unaff_x19 + 0x30);
                    if (lVar24 != 0) {
                      if (*unaff_x25 < *(uint *)(lVar24 + 0x18)) {
                        *(long *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x40) =
                             *in_stack_00000148;
                        thunk_FUN_03afed3c();
                        lVar24 = *(long *)(unaff_x19 + 0x30);
                        if (lVar24 != 0) {
                          if (*unaff_x25 < *(uint *)(lVar24 + 0x18)) {
                            *(undefined4 *)
                             (lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 0x58) =
                                 *(undefined4 *)(unaff_x22 + 0x78);
                            in_stack_00000138._4_4_ = 0.0;
                            *(undefined4 *)(unaff_x22 + 0x78) = uVar35;
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
                    /* try { // try from 07d6f454 to 07e6f45f has its CatchHandler @ 07d6f500 */
    uVar7 = *unaff_x21;
                    /* try { // try from 07d6f46c to 07e6f49b has its CatchHandler @ 07d6f508 */
    fVar38 = 0.0;
    if (uVar7 != 3 && uVar7 != 0xad) {
      fVar38 = unaff_s14;
    }
    fVar34 = 0.0;
    fStack00000000000000f4 = 0.0;
    fStack00000000000000f8 = 0.0;
    fStack00000000000000e8 = unaff_s14;
    if (lVar24 == 0) goto LAB_07d72adc;
  }
  unaff_s14 = fVar38;
                    /* try { // try from 07d6fa24 to 07e6fa2f has its CatchHandler @ 07d6f8c4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07d6fa1c with catch @ 07d6fa2c
                        */
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(uint *)(lVar24 + 0x20) = uVar7;
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
  auVar44 = *(undefined1 (*) [16])(unaff_x22 + 0x38);
  *(undefined4 *)(lVar24 + 0x18c) = *(undefined4 *)(unaff_x22 + 0x48);
  *(long *)(lVar24 + 0x184) = auVar44._8_8_;
  *(long *)(lVar24 + 0x17c) = auVar44._0_8_;
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  uVar7 = *(uint *)(unaff_x22 + 0x334);
  uVar10 = *(uint *)(lVar24 + 0x18);
  if (uVar10 <= uVar7) goto LAB_07d72b20;
  lVar27 = lVar24 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27;
  uVar30 = *(uint *)(unaff_x22 + 300);
  *(uint *)(lVar27 + 0x170) = uVar30;
  if (*(int *)(unaff_x22 + 0x13c) == 700) {
    *(uint *)(lVar27 + 0x170) = uVar30 | 1;
    uVar7 = *unaff_x25;
  }
  if (uVar10 <= uVar7) goto LAB_07d72b20;
  lVar24 = *(long *)(lVar24 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x18);
  if (lVar24 == 0) {
    if ((*(long *)(unaff_x22 + 0x1598) == 0) ||
       (lVar24 = *(long *)(*(long *)(unaff_x22 + 0x1598) + 0x20), lVar24 == 0)) goto LAB_07d72adc;
    FUN_07d53750(&stack0x000011a0,lVar24,0);
  }
  else {
    FUN_07d53750(&stack0x00000510,lVar24,0);
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
  if (((_fStack00000000000000a8 & 0x100000000) != 0) && (*unaff_x28 == '\x01')) {
    if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
    uVar7 = *unaff_x25;
    uVar10 = *(uint *)(*(long *)(unaff_x22 + 0x1598) + 0x28);
    if ((int)uVar7 < (int)uStack000000000000004c) {
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      uVar7 = uVar7 + 1;
      if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
      if (*(char *)(lVar24 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 8) == '\x01') {
        lVar24 = *(long *)(lVar24 + 0x20 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x10);
        if ((((lVar24 == 0) || (*in_stack_00000148 == 0)) ||
            (lVar27 = *(long *)(*in_stack_00000148 + 0x170), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x40), lVar27 == 0)) goto LAB_07d72adc;
        uVar16 = FUN_05ffa6e0(lVar27,uVar10 | *(int *)(lVar24 + 0x28) << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar16 & 1) != 0) {
          FUN_07d57e40(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          uVar16 = FUN_07d57e7c(&stack0x000010b0,0);
          if ((uVar16 & 0x100) != 0) {
            fStack00000000000000d4 = unaff_s13;
          }
        }
      }
      uVar7 = *unaff_x25;
    }
    uVar30 = uVar7 - 1;
    if (0 < (int)uVar7) {
      lVar24 = *(long *)(unaff_x19 + 0x30);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= uVar30) goto LAB_07d72b20;
      lVar27 = *(long *)(lVar24 + 0x20 + (ulong)uVar30 * (ulong)unaff_w27 + 0x10);
      if (lVar27 == 0) goto LAB_07d72adc;
      if (*(char *)(lVar24 + 0x20 + (ulong)uVar30 * (ulong)unaff_w27 + 8) == '\x01') {
        if (((*in_stack_00000148 == 0) ||
            (lVar24 = *(long *)(*in_stack_00000148 + 0x170), lVar24 == 0)) ||
           (lVar24 = *(long *)(lVar24 + 0x40), lVar24 == 0)) goto LAB_07d72adc;
        uVar16 = FUN_05ffa6e0(lVar24,*(uint *)(lVar27 + 0x28) | uVar10 << 0x10,&stack0x000010b0,
                              *(undefined8 *)Unity_Netcode_HandlerNotRegisteredException_TypeInfo);
        if ((uVar16 & 1) != 0) {
          FUN_07d57e68(&stack0x000011a0,&stack0x000010b0,0);
          FUN_07d57c94(&stack0x00001090,0);
          FUN_07d57af4(0);
          uVar16 = FUN_07d57e7c(&stack0x000010b0,0);
          unaff_s15 = in_stack_000000c0._4_4_;
          if ((uVar16 & 0x100) != 0) {
            fStack00000000000000d4 = unaff_s13;
          }
        }
      }
    }
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    uVar7 = *unaff_x25;
    uVar35 = FUN_07d57ad0(&stack0x00001100,0);
    if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
    *(undefined4 *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x154) = uVar35;
  }
  uVar7 = *unaff_x21;
  if (*(int *)(*(long *)UnityEngine_Rendering_Universal_XRSystemUniversal_TypeInfo + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  bVar6 = FUN_07d8fcc4(uVar7,0);
  uVar7 = *unaff_x25;
  uVar16 = (ulong)uVar7;
  if ((bVar6 & 1) == 0) {
    if (0 < (int)uVar7) {
      if ((((uVar3 & 1) == 0) || (uVar10 = *(uint *)(unaff_x22 + 0x19cc), uVar10 == 0x80000000)) ||
         (uVar10 != uVar7 - 1)) {
        if ((_iStack0000000000000028 & 0x100000000) == 0) {
          bVar4 = false;
        }
        else {
          lVar24 = uVar16 * unaff_w27 + 0x144;
          uVar29 = uVar16;
          do {
            uVar29 = uVar29 - 1;
            iVar8 = (int)uVar16;
            uVar7 = iVar8 - 1;
            uVar16 = (ulong)uVar7;
            if ((iVar8 < 1) || (uVar29 == *(uint *)(unaff_x22 + 0x19cc))) {
              bVar4 = false;
              goto LAB_07d71064;
            }
            lVar27 = *(long *)(unaff_x19 + 0x30);
            if (lVar27 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar27 + 0x18) <= uVar29) goto LAB_07d72b20;
            lVar27 = *(long *)(lVar27 + lVar24 + -0x28c);
            if ((lVar27 == 0) || (lVar27 = FUN_07d88988(lVar27,0), lVar27 == 0)) goto LAB_07d72adc;
            uVar10 = FUN_07d53740(lVar27,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar27 = FUN_07d61740(*in_stack_00000148,0), lVar27 == 0)) ||
               (*(long *)(lVar27 + 0x50) == 0)) goto LAB_07d72adc;
            uVar14 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__MoveNext
                               (*(long *)(lVar27 + 0x50),uVar10 | iVar8 << 0x10,&stack0x00001050,
                                *(undefined8 *)UnityEngine_GUILayoutUtility_LayoutCache_TypeInfo);
            lVar24 = lVar24 + -0x178;
            unaff_x28 = in_stack_00000168;
          } while ((uVar14 & 1) == 0);
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
          bVar4 = true;
        }
LAB_07d71064:
        if ((uVar3 & 1) != 0) {
          uVar7 = *(uint *)(unaff_x22 + 0x19cc);
          if (uVar7 == 0x80000000) {
            bVar4 = true;
          }
          if (!bVar4) {
            lVar24 = *(long *)(unaff_x19 + 0x30);
            if (lVar24 == 0) goto LAB_07d72adc;
            if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
            lVar24 = *(long *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x30);
            if ((lVar24 == 0) || (lVar24 = FUN_07d88988(lVar24,0), lVar24 == 0)) goto LAB_07d72adc;
            uVar7 = FUN_07d53740(lVar24,0);
            if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
            iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
            if (((*in_stack_00000148 == 0) ||
                (lVar24 = FUN_07d61740(*in_stack_00000148,0), lVar24 == 0)) ||
               (*(long *)(lVar24 + 0x48) == 0)) goto LAB_07d72adc;
            uVar16 = FUN_06008730(*(long *)(lVar24 + 0x48),uVar7 | iVar8 << 0x10,&stack0x00001038,
                                  *(undefined8 *)
                                   UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
            unaff_x28 = in_stack_00000168;
            if ((uVar16 & 1) != 0) {
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
                  puVar15 = &stack0x00001038;
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
        lVar24 = *(long *)(unaff_x19 + 0x30);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_07d72b20;
        lVar24 = *(long *)(lVar24 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x30);
        if ((lVar24 == 0) || (lVar24 = FUN_07d88988(lVar24,0), lVar24 == 0)) goto LAB_07d72adc;
        uVar7 = FUN_07d53740(lVar24,0);
        if (*(long *)(unaff_x22 + 0x1598) == 0) goto LAB_07d72adc;
        iVar8 = FUN_07d85970(*(long *)(unaff_x22 + 0x1598),0);
        if (((*in_stack_00000148 == 0) || (lVar24 = FUN_07d61740(*in_stack_00000148,0), lVar24 == 0)
            ) || (*(long *)(lVar24 + 0x48) == 0)) goto LAB_07d72adc;
        uVar16 = FUN_06008730(*(long *)(lVar24 + 0x48),uVar7 | iVar8 << 0x10,&stack0x00001078,
                              *(undefined8 *)
                               UnityEngine_UIElements_GenericDropdownMenu_MenuItem_TypeInfo);
        unaff_x28 = in_stack_00000168;
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
          puVar15 = &stack0x00001078;
LAB_07d711ec:
          FUN_07d580a8(puVar15,0);
          FUN_07d58068(&stack0x00001068,0);
          FUN_07d57ac8(&stack0x00001100,0);
          fStack00000000000000d4 = 0.0;
          unaff_x28 = in_stack_00000168;
        }
      }
    }
  }
  else {
    *(uint *)(unaff_x22 + 0x19cc) = uVar7;
  }
  fVar38 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar41 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(char *)(in_stack_00000140 + 0x82) != '\0') {
    fVar42 = *(float *)(unaff_x22 + 0x300);
    fVar31 = (float)FUN_07d53598(&stack0x00001110,0);
    fVar42 = fVar42 - unaff_s14 * fVar31 * (unaff_s12 - *(float *)(unaff_x22 + 0x15a4));
    if (*(char *)(unaff_x22 + 0xf4) != '\0') {
      fVar42 = (float)(int)(fVar42 + unaff_s15);
    }
    *(float *)(unaff_x22 + 0x300) = fVar42;
    if (((unaff_w24 & 1) != 0) || (*unaff_x21 == 0x200b)) {
      fVar42 = fVar42 - in_stack_000000d8._4_4_ * *(float *)(in_stack_00000140 + 0x90);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar42 = (float)(int)(fVar42 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar42;
    }
  }
  fVar42 = *(float *)(unaff_x22 + 0x2f8);
  in_stack_00000098._4_4_ = 0.0;
  if (fVar42 != 0.0) {
    uVar7 = *unaff_x21;
    if (uVar7 != 0x200b) {
      if (((*(char *)(unaff_x22 + 0x2fc) == '\0') || (0x3a < uVar7)) ||
         (fVar31 = 0.25, (1L << ((ulong)uVar7 & 0x3f) & 0x400500000000000U) == 0)) {
        fVar31 = 0.5;
      }
      fVar32 = (float)FUN_07d53578(&stack0x00001110,0);
      fVar48 = (float)FUN_07d53588(&stack0x00001110,0);
      in_stack_00000098._4_4_ =
           (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
           (fVar42 * fVar31 - unaff_s14 * (fVar32 * 0.5 + fVar48));
      fVar42 = in_stack_00000098._4_4_ + *(float *)(unaff_x22 + 0x300);
      if (*(char *)(unaff_x22 + 0xf4) != '\0') {
        fVar42 = (float)(int)(fVar42 + unaff_s15);
      }
      *(float *)(unaff_x22 + 0x300) = fVar42;
    }
  }
  if (*in_stack_00000148 == 0) goto LAB_07d72adc;
  iVar8 = FUN_07d616d4(*in_stack_00000148,0);
  if (iVar8 == 0x1015) {
    bVar4 = false;
  }
  else {
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    iVar8 = FUN_07d616d4(*in_stack_00000148,0);
    bVar4 = iVar8 != 0x11014;
  }
  if ((cVar17 == '\0') && (*unaff_x28 == '\x01')) {
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
    if ((*(byte *)(lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27 + 400) & 1) == 0)
    goto LAB_07d701e4;
    if (bVar4) {
      if (*(char *)(in_stack_00000140 + 0xa0) == '\0') {
LAB_07d70594:
        if (*in_stack_00000148 == 0) goto LAB_07d72adc;
        iVar8 = FUN_07d616c4(*in_stack_00000148,0);
        fVar31 = (float)(iVar8 + 1);
      }
      else {
        lVar24 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar24 == 0) goto LAB_07d72adc;
        uVar16 = thunk_FUN_07c662cc(lVar24,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar16 & 1) == 0) goto LAB_07d70594;
        lVar24 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar24 == 0) goto LAB_07d72adc;
        fVar31 = (float)thunk_FUN_07c69050(lVar24,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar42 = (float)FUN_07d617a8(*in_stack_00000148,0);
      fVar42 = fVar31 * fVar42 * 0.25;
      if (fVar31 < in_stack_00000138._4_4_ + fVar42) {
        in_stack_00000138._4_4_ = fVar31 - fVar42;
      }
    }
    else {
      fVar42 = 0.0;
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
        iVar8 = FUN_07d616c4(*in_stack_00000148,0);
        fVar31 = (float)(iVar8 + 1);
      }
      else {
        lVar24 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar24 == 0) goto LAB_07d72adc;
        uVar16 = thunk_FUN_07c662cc(lVar24,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
        unaff_x28 = in_stack_00000168;
        if ((uVar16 & 1) == 0) goto LAB_07d70290;
        lVar24 = *in_stack_00000090;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        if (lVar24 == 0) goto LAB_07d72adc;
        fVar31 = (float)thunk_FUN_07c69050(lVar24,*(undefined4 *)
                                                   (*(long *)(*(long *)
                                                  UnityEngine_Rendering_Universal_EdgeDictionary_EdgeComparer_TypeInfo
                                                  + 0xb8) + 0x6c),0);
      }
      if (*in_stack_00000148 == 0) goto LAB_07d72adc;
      fVar42 = fVar31 * *(float *)(*in_stack_00000148 + 400) * 0.25;
      if (fVar31 < in_stack_00000138._4_4_ + fVar42) {
        in_stack_00000138._4_4_ = fVar31 - fVar42;
      }
    }
    else {
      fVar42 = 0.0;
    }
  }
  fVar48 = *(float *)(unaff_x22 + 0x300);
  fVar31 = (float)FUN_07d53588(&stack0x00001110,0);
  fVar33 = *(float *)(unaff_x22 + 0x19b0);
  fVar32 = (float)FUN_07d57ab0(&stack0x00001100,0);
  fVar48 = fVar48 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 * (fVar32 + ((fVar31 * fVar33 - in_stack_00000138._4_4_) - fVar42));
  fVar31 = (float)FUN_07d53590(&stack0x00001110,0);
  fVar32 = (float)FUN_07d57ac0(&stack0x00001100,0);
  fVar31 = unaff_s14 * (in_stack_00000138._4_4_ + fVar31 + fVar32);
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar31 = (float)(int)(fVar31 + unaff_s15);
  }
  in_stack_00000150 =
       *(float *)(unaff_x22 + 0x188) + ((fVar34 + fVar31) - *(float *)(unaff_x22 + 0x2e8));
  fVar31 = (float)FUN_07d53580(&stack0x00001110,0);
  fVar33 = in_stack_00000150 -
           unaff_s14 * (in_stack_00000138._4_4_ + in_stack_00000138._4_4_ + fVar31);
  fVar31 = (float)FUN_07d53578(&stack0x00001110,0);
  fVar31 = fVar48 + (unaff_s12 - *(float *)(unaff_x22 + 0x15a4)) *
                    unaff_s14 *
                    (fVar42 + fVar42 +
                    in_stack_00000138._4_4_ + in_stack_00000138._4_4_ +
                    fVar31 * *(float *)(unaff_x22 + 0x19b0));
  fVar50 = fVar31;
  fVar32 = fVar48;
  if (((cVar17 == '\0') && (*unaff_x28 == '\x01')) && ((*(byte *)(unaff_x22 + 300) >> 1 & 1) != 0))
  {
    if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
    iVar8 = *(int *)(unaff_x22 + 0x19ac);
    fVar32 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar36 = (float)FUN_07d532e4(*in_stack_00000148 + 0xb0,0);
    if (*in_stack_00000148 == 0) goto LAB_07d72adc;
    fVar49 = *(float *)(unaff_x22 + 0xf0);
    fVar51 = *(float *)(unaff_x22 + 0x188);
    fVar50 = (float)iVar8 * fStack0000000000000054;
    fVar47 = (float)FUN_07d53294(*in_stack_00000148 + 0xb0,0);
    fVar47 = fVar47 * fVar49 * (fVar32 - (fVar36 + fVar51)) * 0.5;
    fVar32 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar51 = fVar50 * unaff_s14 * ((fVar42 + in_stack_00000138._4_4_ + fVar32) - fVar47);
    fVar36 = (float)FUN_07d53590(&stack0x00001110,0);
    fVar49 = (float)FUN_07d53580(&stack0x00001110,0);
    in_stack_00000150 = in_stack_00000150 + 0.0;
    fVar32 = fVar48 + fVar51;
    fVar33 = fVar33 + 0.0;
    fVar50 = fVar50 * unaff_s14 *
                      ((((fVar36 - fVar49) - in_stack_00000138._4_4_) - fVar42) - fVar47);
    fVar48 = fVar48 + fVar50;
    fVar50 = fVar31 + fVar50;
    unaff_s15 = in_stack_000000c0._4_4_;
    fVar31 = fVar31 + fVar51;
  }
  uVar46 = *in_stack_000000c8;
  uVar12 = in_stack_000000c8[1];
  if (DAT_08974d8a == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  uVar39 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  uVar43 = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  if (DAT_015c5bb4 <
      (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar43 >> 0x20) +
      (float)uVar12 * (float)uVar43 +
      (float)uVar46 * (float)uVar39 +
      (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar39 >> 0x20)) {
    fVar42 = 0.0;
    auVar40._4_12_ = SUB1612(ZEXT816(0),4);
    auVar40._0_4_ = fVar33;
    uVar46 = auVar40._0_8_;
    uVar16 = (ulong)(uint)in_stack_00000150;
    uVar12 = uVar46;
  }
  else {
    FUN_07c889bc(&stack0x000011a0,*(undefined4 *)(unaff_x22 + 0x19bc),
                 *(undefined4 *)(unaff_x22 + 0x19c0),*(undefined4 *)(unaff_x22 + 0x19c4),
                 *(undefined4 *)(unaff_x22 + 0x19c8),0);
    fVar50 = (fVar31 + fVar48) * 0.5;
    fVar47 = (fVar33 + in_stack_00000150) * 0.5;
    fVar42 = 0.0;
    auVar44 = ZEXT416((uint)(in_stack_00000150 - fVar47));
    fVar32 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar32 = fVar50 + fVar32;
    fVar31 = 0.0;
    uVar16 = CONCAT44(fVar42 + 0.0,fVar47 + auVar44._0_4_);
    auVar44 = ZEXT416((uint)(fVar33 - fVar47));
    fVar48 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar48 = fVar50 + fVar48;
    fVar42 = 0.0;
    uVar46 = CONCAT44(fVar31 + 0.0,fVar47 + auVar44._0_4_);
    auVar44 = ZEXT416((uint)(in_stack_00000150 - fVar47));
    fVar31 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar31 = fVar50 + fVar31;
    fVar36 = 0.0;
    in_stack_00000150 = fVar47 + auVar44._0_4_;
    fVar42 = fVar42 + 0.0;
    auVar44 = ZEXT416((uint)(fVar33 - fVar47));
    fVar33 = (float)FUN_07c888bc(&stack0x00000ff0,0);
    fVar50 = fVar50 + fVar33;
    unaff_s15 = in_stack_000000c0._4_4_;
    uVar12 = CONCAT44(fVar36 + 0.0,fVar47 + auVar44._0_4_);
  }
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar24 + 0x118) = fVar48;
  *(undefined8 *)(lVar24 + 0x11c) = uVar46;
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar24 + 0x10c) = fVar32;
  *(ulong *)(lVar24 + 0x110) = uVar16;
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar24 + 0x124) = fVar31;
  *(ulong *)(lVar24 + 0x128) = CONCAT44(fVar42,in_stack_00000150);
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  if (*(uint *)(lVar24 + 0x18) <= *unaff_x25) goto LAB_07d72b20;
  lVar24 = lVar24 + (long)(int)*unaff_x25 * (long)(int)unaff_w27;
  *(float *)(lVar24 + 0x130) = fVar50;
  *(undefined8 *)(lVar24 + 0x134) = uVar12;
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  uVar7 = *(uint *)(unaff_x22 + 0x334);
  fVar42 = *(float *)(unaff_x22 + 0x300);
  fVar32 = (float)FUN_07d57ab0(&stack0x00001100,0);
  if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
  fVar42 = fVar42 + unaff_s14 * fVar32;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar42 = (float)(int)(fVar42 + unaff_s15);
  }
  *(float *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x13c) = fVar42;
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  uVar7 = *(uint *)(unaff_x22 + 0x334);
  fVar32 = *(float *)(unaff_x22 + 0x2e8);
  fVar33 = *(float *)(unaff_x22 + 0x188);
  fVar42 = (float)FUN_07d57ac0(&stack0x00001100,0);
  if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
  fVar42 = (fVar34 - fVar32) + fVar33 + unaff_s14 * fVar42;
  if (*(char *)(unaff_x22 + 0xf4) != '\0') {
    fVar42 = (float)(int)(fVar42 + unaff_s15);
  }
  *(float *)(lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27 + 0x144) = fVar42;
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  unaff_w29 = *(uint *)(unaff_x22 + 0x334);
  if (*(uint *)(lVar24 + 0x18) <= unaff_w29) goto LAB_07d72b20;
  lVar24 = lVar24 + 0x20;
  *(float *)(lVar24 + (long)(int)unaff_w29 * (long)(int)unaff_w27 + 0x13c) =
       (fVar31 - fVar48) / ((float)uVar16 - (float)uVar46);
  fVar38 = unaff_s14 * (fStack00000000000000f8 + fVar38);
  if (*unaff_x28 == '\x01') {
    fVar38 = fVar38 / fVar37;
    fVar41 = (unaff_s14 * (fStack00000000000000f4 + fVar41)) / fVar37;
  }
  else {
    fVar41 = unaff_s14 * (fStack00000000000000f4 + fVar41);
  }
  in_stack_00000150 = *(float *)(unaff_x22 + 0x338);
  unaff_s13 = 0.0;
  unaff_s12 = 1.0;
  fVar42 = 1.0;
  if (((float)unaff_w29 != in_stack_00000150 & unaff_w24) == 0) {
    fVar32 = *(float *)(unaff_x22 + 0x188);
    fVar38 = fVar38 + fVar32;
    fVar41 = fVar41 + fVar32;
    fVar31 = fVar38;
    fVar34 = fVar41;
    if (fVar32 != 0.0) {
      fVar31 = (fVar38 - fVar32) / *(float *)(unaff_x22 + 0xf0);
      fVar34 = (fVar41 - fVar32) / *(float *)(unaff_x22 + 0xf0);
      if (fVar31 <= fVar38) {
        fVar31 = fVar38;
      }
      if (fVar41 <= fVar34) {
        fVar34 = fVar41;
      }
    }
    lVar24 = lVar24 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
    fVar32 = fVar31;
    if (fVar31 <= *(float *)(unaff_x22 + 0x348)) {
      fVar32 = *(float *)(unaff_x22 + 0x348);
    }
    fVar48 = fVar34;
    if (*(float *)(unaff_x22 + 0x34c) <= fVar34) {
      fVar48 = *(float *)(unaff_x22 + 0x34c);
    }
    *(float *)(unaff_x22 + 0x348) = fVar32;
    *(float *)(unaff_x22 + 0x34c) = fVar48;
    *(float *)(lVar24 + 300) = fVar31;
    *(float *)(lVar24 + 0x130) = fVar34;
    fVar31 = *(float *)(unaff_x22 + 0x2e8);
    *(float *)(lVar24 + 0x120) = fVar38 - fVar31;
    *(float *)(lVar24 + 0x128) = fVar41 - fVar31;
    *(float *)(unaff_x22 + 900) = fVar41 - fVar31;
    if (*(int *)(unaff_x22 + 0x350) == 0) {
      *(float *)(unaff_x22 + 0x380) = fVar32;
      if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_07d72adc;
      fVar41 = *(float *)(unaff_x22 + 0x37c);
      fVar31 = (float)FUN_07d532c4(*(long *)(unaff_x22 + 0x68) + 0xb0,0);
      fVar37 = (unaff_s14 * fVar31) / fVar37;
      if (fVar41 <= fVar37) {
        fVar41 = fVar37;
      }
      fVar31 = *(float *)(unaff_x22 + 0x2e8);
      *(float *)(unaff_x22 + 0x37c) = fVar41;
    }
    if (fVar31 == 0.0) {
      fVar37 = *(float *)(unaff_x22 + 0x19d0);
      if (*(float *)(unaff_x22 + 0x19d0) <= fVar38) {
        fVar37 = fVar38;
      }
      *(float *)(unaff_x22 + 0x19d0) = fVar37;
    }
  }
  else {
    lVar24 = lVar24 + (long)(int)unaff_w29 * (long)(int)unaff_w27;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x348);
    *(undefined8 *)(lVar24 + 300) = uVar12;
    fVar31 = *(float *)(unaff_x22 + 0x2e8);
    fVar37 = (float)((ulong)uVar12 >> 0x20) - fVar31;
    *(float *)(lVar24 + 0x120) = (float)uVar12 - fVar31;
    *(float *)(lVar24 + 0x128) = fVar37;
    *(float *)(unaff_x22 + 900) = fVar37;
  }
  lVar24 = *(long *)(unaff_x19 + 0x30);
  if (lVar24 == 0) goto LAB_07d72adc;
  uVar7 = *unaff_x25;
  if (*(uint *)(lVar24 + 0x18) <= uVar7) goto LAB_07d72b20;
  lVar24 = lVar24 + (long)(int)uVar7 * (long)(int)unaff_w27;
  *(undefined1 *)(lVar24 + 0x194) = 0;
  uVar10 = *unaff_x21;
  uStack0000000000000104 = unaff_w24;
  if (uVar10 == 9) {
LAB_07d70d34:
    *(undefined1 *)(lVar24 + 0x194) = 1;
    pfVar20 = in_stack_000000a0;
    pfVar22 = in_stack_000000b8;
    if (in_stack_00000160._4_4_ == unaff_w26) {
      lVar24 = *(long *)(unaff_x19 + 0x48);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      pfVar22 = (float *)(lVar24 + 100);
      pfVar20 = (float *)(lVar24 + 0x68);
    }
    unaff_s8 = *pfVar22;
    unaff_s9 = *pfVar20;
    fVar37 = *(float *)(unaff_x22 + 0x368);
    fVar41 = 0.0;
    fVar38 = *(float *)(unaff_x22 + 0x300);
    fStack0000000000000100 = (fStack00000000000000b4 - unaff_s8) - unaff_s9;
    bVar4 = true;
    if ((fVar37 <= fStack0000000000000100) && (bVar4 = false, !NAN(fVar37))) {
      bVar4 = fVar37 == -1.0;
    }
    if (!bVar4) {
      fStack0000000000000100 = fVar37;
    }
    fVar37 = 0.0;
    if (*(char *)(in_stack_00000140 + 0x82) == '\0') {
      fVar37 = (float)FUN_07d53598(&stack0x00001110,0);
      uVar10 = *unaff_x21;
    }
    if (uVar10 != 0xad) {
      fStack00000000000000e8 = unaff_s14;
    }
    if ((0.0 < *(float *)(unaff_x22 + 0x2e8)) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar41 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    uVar7 = *unaff_x25;
    if (fStack00000000000000a8 <
        (*(float *)(unaff_x22 + 0x380) -
        (*(float *)(unaff_x22 + 0x34c) - *(float *)(unaff_x22 + 0x2e8))) + fVar41) {
      if (*(int *)(unaff_x22 + 0x35c) == -1) {
        *(uint *)(unaff_x22 + 0x35c) = uVar7;
      }
      iVar8 = *(int *)(in_stack_00000140 + 100);
      if (iVar8 == 1) {
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
          unaff_s12 = fVar42;
          in_stack_0000112c = iVar11 - 1;
        }
        goto LAB_07d72ac8;
      }
      if ((iVar8 != 6) && (iVar8 != 3)) goto LAB_07d70fbc;
LAB_07d7102c:
      in_stack_0000112c = FUN_07d79b5c();
    }
    else {
LAB_07d70fbc:
      uVar10 = uVar7;
      if ((bVar6 & fStack0000000000000100 <
                   ABS(fVar38) +
                   fVar37 * (1.0 - *(float *)(unaff_x22 + 0x15a4)) * fStack00000000000000e8) != 1)
      goto LAB_07d7166c;
      if (((iStack00000000000000b0 == 0) || (iStack00000000000000b0 == 3)) ||
         (uVar7 == *(uint *)(unaff_x22 + 0x338))) {
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
        if (iVar8 != 6) {
          if (iVar8 == 3) goto LAB_07d7102c;
          goto LAB_07d7166c;
        }
        in_stack_0000112c = FUN_07d79b5c();
        uVar7 = *(uint *)(unaff_x22 + 0x334);
      }
      else {
        in_stack_0000112c = FUN_07d79b5c();
        fVar37 = *(float *)(unaff_x22 + 0x2ec);
        if (fVar37 == DAT_015c55ac) {
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          uVar10 = *unaff_x25;
          if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_07d72b20;
          fVar38 = *(float *)(unaff_x22 + 0x2e8);
          fVar37 = 0.0;
          if ((0.0 < fVar38) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
            fVar37 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
          }
          fVar37 = *(float *)(lVar24 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x14c) +
                   (fVar37 - *(float *)(unaff_x22 + 0x34c)) +
                   in_stack_00000020._4_4_ *
                   (fStack0000000000000050 + *(float *)(unaff_x22 + 0x15bc));
        }
        else {
          *(undefined1 *)(unaff_x22 + 0x2f0) = 1;
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          fVar38 = *(float *)(unaff_x22 + 0x2e8);
          uVar10 = *(uint *)(unaff_x22 + 0x334);
        }
        if ((*(uint *)(lVar24 + 0x18) <= uVar10) ||
           (uVar30 = uVar10 - 1, *(uint *)(lVar24 + 0x18) <= uVar30)) goto LAB_07d72b20;
        piVar23 = (int *)(lVar24 + 0x20 + (long)(int)uVar10 * (long)(int)unaff_w27);
        fVar37 = (fStack0000000000000014 + fVar37 + *(float *)(unaff_x22 + 0x380) + fVar38) -
                 (float)piVar23[0x4c];
        if ((*(int *)(lVar24 + 0x20 + (long)(int)uVar30 * (long)(int)unaff_w27) == 0xad &&
             (in_stack_00000038._4_4_ & 1) == 0) &&
           ((*(int *)(in_stack_00000140 + 100) == 0 || (fVar37 < fStack00000000000000a8)))) {
          in_stack_00000038._4_4_ = 0;
          in_stack_0000112c = in_stack_0000112c - 1;
          in_stack_00001190 = CONCAT44(0x2d,uVar30);
          *unaff_x25 = uVar30;
          unaff_x28 = in_stack_00000168;
          goto LAB_07d72ac8;
        }
        if (*piVar23 == 0xad) {
          in_stack_00000038._4_4_ = 1;
          unaff_x28 = in_stack_00000168;
          goto LAB_07d72ac8;
        }
        if ((((in_stack_00000060._4_4_ & 1) != 0) &&
            (iVar8 = *(int *)(unaff_x22 + 0x11f0), iVar8 != -1)) &&
           (iVar8 != in_stack_00000008._4_4_)) {
          in_stack_0000112c = FUN_07d79b5c();
          lVar24 = *(long *)(unaff_x19 + 0x30);
          if (lVar24 == 0) goto LAB_07d72adc;
          uVar10 = *unaff_x25;
          uVar30 = uVar10 - 1;
          if (*(uint *)(lVar24 + 0x18) <= uVar30) goto LAB_07d72b20;
          in_stack_00000008._4_4_ = iVar8;
          if (*(int *)(lVar24 + (long)(int)uVar30 * (long)(int)unaff_w27 + 0x20) == 0xad) {
            in_stack_00000038._4_4_ = 0;
            in_stack_0000112c = in_stack_0000112c - 1;
            in_stack_00001190 = CONCAT44(0x2d,uVar30);
            *unaff_x25 = uVar30;
            unaff_x28 = in_stack_00000168;
            goto LAB_07d72ac8;
          }
        }
        if (fVar37 <= fStack00000000000000a8) {
          FUN_07d7bce4();
          in_stack_00000038._4_4_ = 0;
          in_stack_00000060._4_4_ = 1;
          bVar5 = true;
          unaff_x28 = in_stack_00000168;
          goto LAB_07d72ac8;
        }
        if (*(int *)(unaff_x22 + 0x35c) == -1) {
          *(uint *)(unaff_x22 + 0x35c) = uVar10;
        }
        iVar8 = *(int *)(in_stack_00000140 + 100);
        in_stack_00000038._4_4_ = 0;
        if (iVar8 < 3) {
          if (iVar8 != 0) {
            if (iVar8 == 1) {
              iVar8 = FUN_059137dc(unaff_x22 + 0x15f0,
                                   *(undefined8 *)
                                    Meta_XR_ImmersiveDebugger_Gizmo_GizmoTypesRegistry_<>c_TypeInfo)
              ;
              if (iVar8 == 0) {
                in_stack_00000038._4_4_ = 0;
                goto LAB_07d72aac;
              }
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
            if (iVar8 != 2) goto LAB_07d7166c;
          }
LAB_07d729d0:
          FUN_07d7bce4();
          in_stack_00000038._4_4_ = 0;
          in_stack_00000060._4_4_ = 1;
          bVar5 = true;
          unaff_x28 = in_stack_00000168;
          unaff_s12 = fVar42;
          goto LAB_07d72ac8;
        }
        if (iVar8 == 3) {
          in_stack_0000112c = FUN_07d79b5c();
          in_stack_00000038._4_4_ = 0;
        }
        else {
          if (iVar8 != 6) {
            if (iVar8 == 4) goto LAB_07d729d0;
            goto LAB_07d7166c;
          }
          in_stack_00000038._4_4_ = 0;
          uVar7 = uVar10;
        }
      }
    }
  }
  else {
    if (in_stack_00000058._4_4_ == 2) {
      if ((unaff_w24 & 1) == 0 && uVar10 != 0x200b) goto LAB_07d70e7c;
      goto LAB_07d70d34;
    }
    if ((unaff_w24 & 1) == 0) {
LAB_07d70e7c:
      if ((uVar10 != 3) && (uVar10 != 0x200b)) {
        if (uVar10 != 0xad) goto LAB_07d70d34;
        goto LAB_07d70e98;
      }
    }
    else {
LAB_07d70e98:
      if (uVar10 == 0xad && (in_stack_00000038._4_4_ & 1) == 0) goto LAB_07d70d34;
    }
    if (*in_stack_00000168 == '\x02') goto LAB_07d70d34;
    if (*(int *)(in_stack_00000140 + 100) != 6) {
LAB_07d71228:
      if ((int)uVar10 < 0x2007) {
        if (uVar10 != 10) {
LAB_07d713e4:
          if ((uVar10 != 0xb) && (uVar10 != 0xa0)) goto LAB_07d713f4;
          goto LAB_07d71420;
        }
LAB_07d71440:
        lVar24 = *(long *)(unaff_x19 + 0x48);
        if (lVar24 == 0) goto LAB_07d72adc;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
        *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
        *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
        uVar10 = *unaff_x21;
      }
      else {
        if ((uVar10 - 0x2007 < 0x23) &&
           ((1L << ((ulong)(uVar10 - 0x2007) & 0x3f) & 0x600000001U) != 0)) {
LAB_07d71420:
          unaff_x28 = in_stack_00000168;
          unaff_s12 = fVar42;
          if (((uVar10 != 0xad) && (uVar10 != 0x200b)) && (uVar10 != 0x2060)) goto LAB_07d71440;
          goto LAB_07d717bc;
        }
LAB_07d713f4:
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0x88) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar16 = FUN_066bcb80(uVar10,0);
        uVar10 = *unaff_x21;
        if ((uVar16 & 1) != 0) goto LAB_07d71420;
      }
      unaff_x28 = in_stack_00000168;
      unaff_s12 = fVar42;
      if (uVar10 != 0xa0) goto LAB_07d717bc;
      lVar24 = *(long *)(unaff_x19 + 0x48);
      if (lVar24 == 0) goto LAB_07d72adc;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      goto LAB_07d717bc;
    }
    if ((uVar10 & 0xfffffffe) != 10) {
      if ((0x22 < uVar10 - 0x2007) ||
         ((1L << ((ulong)(uVar10 - 0x2007) & 0x3f) & 0x600000001U) == 0)) goto LAB_07d713e4;
      goto LAB_07d71420;
    }
    fVar37 = 0.0;
    if ((0.0 < fVar31) && (*(char *)(unaff_x22 + 0x2f0) == '\0')) {
      fVar37 = *(float *)(unaff_x22 + 0x348) - *(float *)(unaff_x22 + 0x15b8);
    }
    if ((*(float *)(unaff_x22 + 0x380) - (*(float *)(unaff_x22 + 0x34c) - fVar31)) + fVar37 <=
        fStack00000000000000a8) goto LAB_07d71228;
    if (*(int *)(unaff_x22 + 0x35c) == -1) {
      *(uint *)(unaff_x22 + 0x35c) = uVar7;
    }
    in_stack_0000112c = FUN_07d79b5c();
  }
  in_stack_00001190 = CONCAT44(3,uVar7);
  unaff_x28 = in_stack_00000168;
  goto LAB_07d72ac8;
LAB_07d7166c:
  if ((unaff_w24 & 1) != 0) {
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_07d72b20;
    *(undefined1 *)(lVar24 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x194) = 0;
    lVar24 = *(long *)(unaff_x19 + 0x48);
    if (lVar24 == 0) goto LAB_07d72adc;
    uVar7 = *(uint *)(lVar24 + 0x18);
    if (uVar7 <= *(uint *)(unaff_x22 + 0x350)) goto LAB_07d72b20;
    lVar24 = lVar24 + 0x20;
    lVar27 = lVar24 + (long)(int)*(uint *)(unaff_x22 + 0x350) * 0x60;
    iVar8 = *(int *)(lVar27 + 0x10) + 1;
    *(int *)(lVar27 + 0x10) = iVar8;
    uVar10 = *(uint *)(unaff_x22 + 0x350);
    *(int *)(unaff_x22 + 0x358) = iVar8;
    if (uVar7 <= uVar10) goto LAB_07d72b20;
    lVar27 = lVar24 + (long)(int)uVar10 * 0x60;
    *(float *)(lVar27 + 0x44) = unaff_s8;
    *(float *)(lVar27 + 0x48) = unaff_s9;
    *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + 1;
    unaff_x28 = in_stack_00000168;
    if (*unaff_x21 == 0xa0) {
      *(int *)(lVar24 + (long)(int)uVar10 * 0x60) = *(int *)(lVar24 + (long)(int)uVar10 * 0x60) + 1;
      unaff_s12 = fVar42;
    }
    goto LAB_07d717bc;
  }
  if (*unaff_x21 == 0xad) {
    lVar24 = *(long *)(unaff_x19 + 0x30);
    if (lVar24 == 0) goto LAB_07d72adc;
    if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_07d72b20;
    *(undefined1 *)(lVar24 + (long)(int)uVar10 * (long)(int)unaff_w27 + 0x194) = 0;
    unaff_x28 = in_stack_00000168;
    unaff_s12 = fVar42;
    goto LAB_07d717bc;
  }
  if (*in_stack_00000168 == '\x02') {
    FUN_07d7a738();
  }
  else if (*in_stack_00000168 == '\x01') {
    FUN_07d79ee4();
  }
  uVar7 = *unaff_x25;
  if (bVar5) {
    *(uint *)(unaff_x22 + 0x340) = uVar7;
  }
  *(uint *)(unaff_x22 + 0x344) = uVar7;
  *(int *)(unaff_x22 + 0x354) = *(int *)(unaff_x22 + 0x354) + 1;
  param_1 = *(long *)(unaff_x19 + 0x48);
  if (param_1 == 0) {
LAB_07d72adc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_w9 = *(uint *)(unaff_x22 + 0x350);
  if (*(uint *)(param_1 + 0x18) <= in_w9) {
LAB_07d72b20:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c8();
  }
  in_w10 = 0x60;
  unaff_x28 = in_stack_00000168;
  goto code_r0x07d717ac;
}


