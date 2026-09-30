/*
FUNCTION_NAME: FUN_0248d088
ENTRY_POINT: 0248d088
PROGRAM: Lovesick-libil2cpp.so
SCORE: 161
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0248d088(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  double __x;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong uVar19;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  undefined1 uVar20;
  char cVar21;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  uint uVar25;
  float *pfVar26;
  long lVar27;
  code *pcVar28;
  uint uVar29;
  float *pfVar30;
  uint uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long *unaff_x19;
  uint unaff_w20;
  int iVar38;
  long unaff_x21;
  long *plVar39;
  long unaff_x22;
  uint unaff_w24;
  long *plVar40;
  long *unaff_x25;
  uint unaff_w26;
  uint uVar41;
  long *unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
  long *plVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  ulong uVar48;
  double dVar49;
  ulong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float unaff_s12;
  float fVar66;
  float fVar67;
  ulong unaff_d13;
  undefined4 uVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float *in_stack_00000088;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  float fStack0000000000000098;
  float in_stack_000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  undefined8 in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  uint uStack0000000000000114;
  ulong in_stack_00000118;
  long lStack0000000000000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000140;
  uint *in_stack_00000148;
  long *in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  uint in_stack_00000880;
  undefined4 in_stack_00000884;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000bf8;
  undefined4 in_stack_00000bfc;
  undefined8 in_stack_00000c00;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
  plVar40 = unaff_x25;
code_r0x0248d088:
  iVar38 = (int)unaff_x21;
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar57 = *(float *)(unaff_x19 + 0x3c);
    iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar46 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar22 = unaff_x19[0xc9];
    fVar60 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar60 = unaff_s12;
    }
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
    fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar65 = *(float *)(lVar22 + 0x2c);
    fVar47 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
    fVar63 = *_fStack0000000000000098;
    fVar47 = fVar62 * (fVar57 / (float)iVar13) * fVar46 * fVar60 * fVar65 * fVar47;
    fVar57 = *in_stack_00000088;
    param_2 = extraout_x1_09;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      uVar12 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar22 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar60 = *(float *)(lVar22 + (long)(int)uVar12 * (long)iVar38 + 0x60);
      iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar62 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar22 = unaff_x19[0xc9];
      fVar46 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar46 = 1.0;
      }
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
      fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar66 = *(float *)(lVar22 + 0x2c);
      fVar47 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar63 = *(float *)(lVar22 + 0x60);
      fVar57 = *(float *)(lVar22 + 100);
      fVar47 = fVar65 * (fVar60 / (float)iVar13) * fVar62 * fVar46 * fVar66 * fVar47;
      param_2 = extraout_x1_10;
    }
    fVar65 = *(float *)(unaff_x19 + 0x9a);
    fVar46 = *(float *)(unaff_x19 + 0x96);
    fVar66 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar60 = 0.0;
    fVar62 = 0.0;
    if ((0.0 < fVar65) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar62 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar69 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
      goto LAB_02491464;
      FUN_026fd62c(&stack0x00000880,lVar22,0);
      unaff_x28[0x1cd] = unaff_x28[1];
      unaff_x28[0x1cc] = *unaff_x28;
      fVar60 = (float)FUN_026fd474(&stack0x000016e0,0);
      param_2 = extraout_x1_11;
    }
    puVar9 = System_Threading_Mutex_TypeInfo;
    fVar53 = *(float *)(unaff_x19 + 0x6b);
    fVar57 = (fStack0000000000000090 - fVar63) - fVar57;
    bVar10 = true;
    if ((fVar53 <= fVar57) && (bVar10 = false, !NAN(fVar53))) {
      bVar10 = fVar53 == -1.0;
    }
    if (!bVar10) {
      fVar57 = fVar53;
    }
    unaff_d13 = in_stack_00000118 & 0xffffffff;
    unaff_s12 = 1.0;
    fVar63 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      fVar63 = 1.0;
    }
    plVar40 = in_stack_00000150;
    if (((fVar46 - (fVar66 - fVar65)) + fVar62 < in_stack_000000a0) &&
       (ABS(fVar69) + fVar47 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar63 * fVar57)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar22 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar22 + 0x788),0x378);
      FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
      param_2 = extraout_x1_12;
    }
  }
  lVar22 = *plVar40;
  if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x38), lVar27 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar12 = *(uint *)(unaff_x19 + 0x94);
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar27 + 100) = uVar12;
  *(int *)(lVar27 + 0x68) = (int)unaff_x19[0x95];
  if (((unaff_w20 & 1) == 0) &&
     ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar22 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar22 + (long)(int)uVar12 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar22 + (long)(int)uVar12 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  fVar57 = (float)unaff_d13;
  if (in_stack_000017bc == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar60 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar47 = *(float *)(unaff_x19 + 199);
    fVar46 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar60 = fVar57 * fVar60 * fVar46;
    fVar46 = fVar60 * (float)(int)(fVar47 / fVar60);
    uVar48 = (ulong)(uint)fVar46;
    param_2 = extraout_x1_13;
    if (fVar46 <= fVar47) {
      fVar46 = fVar47 + fVar60;
    }
LAB_0248d614:
    *(float *)(unaff_x19 + 199) = fVar46;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar47 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar47 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar46 = *(float *)(unaff_x19 + 199);
      fVar62 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] != 0) {
        fVar60 = unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc);
        fVar46 = fVar46 + fVar60 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                   fVar57 * (in_stack_000000b0 + fVar47 * fVar62) +
                                   fStack00000000000000c8 *
                                   (in_stack_000000c0._4_4_ +
                                   fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar46;
        param_2 = extraout_x1_14;
        goto joined_r0x0248d568;
      }
      goto LAB_02491464;
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar46 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar57 * in_stack_000000b0 +
             fStack00000000000000c8 *
             (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    uVar48 = (ulong)(uint)fVar46;
    fVar46 = *(float *)(unaff_x19 + 199) - fVar46;
    *(float *)(unaff_x19 + 199) = fVar46;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar60 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar48 = (ulong)(uint)fVar60;
      fVar46 = fVar46 - fVar60;
      goto LAB_0248d614;
    }
  }
  else {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar60 = *(float *)(unaff_x19 + 199);
    fVar46 = fVar60 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                      fStack00000000000000c8 *
                      (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar46;
joined_r0x0248d568:
    if ((unaff_w29 != 0) || (uVar48 = (ulong)(uint)fVar60, in_stack_000017bc == 0x200b)) {
      fVar60 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar48 = (ulong)(uint)fVar60;
      fVar46 = fVar46 + fVar60;
      goto LAB_0248d614;
    }
  }
  lVar22 = *plVar40;
  if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x38), lVar27 == 0)) goto LAB_02491464;
  uVar12 = *in_stack_00000148;
  uVar25 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar25 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar27 + (int)uVar12 * unaff_x21 + 0x144) = fVar46;
  uVar31 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) || ((float)uVar12 == in_stack_00000078._4_4_)
       ) goto LAB_0248d6b8;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
      uVar48 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar12 != in_stack_00000078._4_4_) goto LAB_0248dc08;
    }
LAB_0248d6b8:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar60 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)System_Threading_Timer_TimerComparer_TypeInfo,param_2);
      }
      if (((fStack000000000000004c < ABS(fVar60)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar60);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar60;
        *(float *)(unaff_x19 + 0x9a) = fVar60 + *(float *)(unaff_x19 + 0x9a);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar9;
        }
        lVar27 = *(long *)(lVar22 + 0xb8);
        if (*(int *)(lVar27 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar27 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar27 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar22 = *(long *)(lVar22 + 0xb8);
          *(float *)(lVar22 + 0x7bc) = fVar60 + *(float *)(lVar22 + 0x7bc);
          *(float *)(lVar22 + 0x800) = fVar60 + *(float *)(lVar22 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar22 + 0x788),0x378);
          FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar47 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar46 = *(float *)((long)unaff_x19 + 0x4c4) - fVar47;
    fVar60 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar46 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar60 = fVar46;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar60;
    fVar62 = *(float *)(unaff_x19 + 0x98);
    if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
      in_stack_000017b8 = fVar60;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
    }
    lVar22 = *plVar40;
    if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x50), lVar27 == 0)) goto LAB_02491464;
    uVar12 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar27 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar34 = lVar27 + (long)(int)uVar12 * 0x5c;
    *(int *)(lVar34 + 0x34) = (int)unaff_x19[0x92];
    iVar13 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar13;
    *(int *)(lVar34 + 0x38) = iVar13;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar34 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar13 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar13;
    *(int *)(lVar34 + 0x40) = iVar13;
    *(int *)(lVar34 + 0x24) = (*(int *)(lVar34 + 0x3c) - *(int *)(lVar34 + 0x34)) + 1;
    *(undefined4 *)(lVar34 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar68 = *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
    lVar27 = lVar27 + (long)(int)uVar12 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar46;
    *(undefined4 *)(lVar27 + 0x6c) = uVar68;
    lVar22 = *plVar40;
    if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x50), lVar27 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar62 = fVar62 - fVar47;
    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) =
         *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
    *(float *)(lVar27 + 0x78) = fVar62;
    lVar22 = *plVar40;
    if ((lVar22 == 0) || (lVar34 = *(long *)(lVar22 + 0x50), lVar34 == 0)) goto LAB_02491464;
    lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar34 + lVar35 * 0x5c;
    *(float *)(lVar27 + 0x44) = *(float *)(lVar27 + 0x74) - fVar57 * in_stack_00000130._4_4_;
    *(float *)(lVar27 + 0x5c) = in_stack_000000d8._4_4_;
    if (*(int *)(lVar27 + 0x24) == 1) {
      *(int *)(lVar34 + lVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*unaff_x27 == 0) || (lVar27 = *(long *)(lVar22 + 0x38), lVar27 == 0)) goto LAB_02491464;
    lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar25 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar25 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(char *)(lVar27 + lVar36 * unaff_x21 + 0x194) == '\0') &&
       (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar25 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar60 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fStack00000000000000c8 *
              (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar57 = -fVar60;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar57 = fVar60;
    }
    lVar34 = lVar34 + lVar35 * 0x5c;
    *(float *)(lVar34 + 0x58) = *(float *)(lVar27 + lVar36 * unaff_x21 + 0x144) + fVar57;
    fVar57 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar34 + 0x48) = fStack0000000000000050 + (fVar62 - fVar46);
    *(float *)(lVar34 + 0x4c) = fVar62;
    uVar48 = (ulong)(uint)(0.0 - fVar57);
    *(float *)(lVar34 + 0x50) = 0.0 - fVar57;
    *(float *)(lVar34 + 0x54) = fVar46;
    plVar39 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar42 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar22 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar13 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar13;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x50) == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar13) {
          FUN_024d6e60();
          lVar22 = unaff_x19[0x6c];
          if (lVar22 == 0) goto LAB_02491464;
        }
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_02491464;
        if (*in_stack_00000148 < *(uint *)(lVar22 + 0x18)) {
          fVar57 = *(float *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
            fVar60 = 0.0;
            if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
              fVar60 = *(float *)((long)unaff_x19 + 0x2c4);
            }
            uVar20 = 0;
            fVar60 = *(float *)(unaff_x19 + 0x9a) +
                     fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                     fStack0000000000000054 *
                     (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                     fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar60);
          }
          else {
            if ((in_stack_000017bc == 0x2029) || (fVar60 = 0.0, in_stack_000017bc == 10)) {
              fVar60 = *(float *)((long)unaff_x19 + 0x2c4);
            }
            uVar20 = 1;
            fVar60 = *(float *)(unaff_x19 + 0x9a) +
                     *(float *)(unaff_x19 + 0x57) +
                     fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar60);
          }
          *(float *)(unaff_x19 + 0x9a) = fVar60;
          *(undefined1 *)((long)unaff_x19 + 700) = uVar20;
          lVar22 = *plVar39;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *plVar39;
          }
          uVar16 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x99) = fVar57;
          uVar48 = NEON_rev64(uVar16,4);
          unaff_x19[0x98] = uVar48;
          *(float *)(unaff_x19 + 199) =
               *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
          FUN_024d69d4();
          FUN_024d69d4();
          *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
          fStack0000000000000058 = 1.4013e-45;
          bStack000000000000005c = 1;
          goto LAB_0248ab98;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_02491464;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar31 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
  }
LAB_0248dc08:
  uVar12 = *in_stack_00000148;
  if (uVar25 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar27 + (int)uVar12 * unaff_x21 + 0x194) != '\0') {
    lVar27 = lVar27 + (int)uVar12 * unaff_x21;
    uVar50 = *(ulong *)(lVar27 + 0x11c);
    uVar48 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar50 ^ (uVar50 ^ uVar48) &
                  CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar50 >> 0x20)),
                           -(uint)((float)uVar48 < (float)uVar50));
    uVar50 = *(ulong *)(in_stack_00000070 + 0x238);
    uVar48 = *(ulong *)(lVar27 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         uVar48 ^ (uVar48 ^ uVar50) &
                  CONCAT44(-(uint)((float)(uVar48 >> 0x20) < (float)(uVar50 >> 0x20)),
                           -(uint)((float)uVar48 < (float)uVar50));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar31 || ((1 << (ulong)(uVar31 & 0x1f) & 0x2c00U) == 0)))) {
    lVar27 = *(long *)(lVar22 + 0x58);
    if (lVar27 == 0) goto LAB_02491464;
    iVar13 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar27 + 0x18) < iVar13) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar22 + 0x58),iVar13,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar22 = *in_stack_00000150;
      if (lVar22 == 0) goto LAB_02491464;
    }
    lVar27 = *(long *)(lVar22 + 0x58);
    if (lVar27 == 0) goto LAB_02491464;
    uVar25 = *(uint *)(unaff_x19 + 0x95);
    lVar34 = (long)(int)uVar25;
    uVar12 = *(uint *)(lVar27 + 0x18);
    if (uVar12 <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar27 + lVar34 * 0x14;
    fVar60 = *(float *)(lVar35 + 0x30);
    uVar48 = (ulong)(uint)fVar60;
    *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar60 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar57 = fVar60;
    }
    *(float *)(lVar35 + 0x30) = fVar57;
    uVar31 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar31 == 0 && uVar25 == 0) {
      *(uint *)(lVar27 + lVar34 * 0x14 + 0x20) = uVar31;
      plVar40 = in_stack_00000150;
    }
    else {
      uVar4 = uVar31 - 1;
      if (0 < (int)uVar31) {
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_02491464;
        if (*(uint *)(lVar22 + 0x18) <= uVar4)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar25 != *(uint *)(lVar22 + (long)(int)uVar4 * (long)iVar38 + 0x68)) {
          if (uVar25 - 1 < uVar12) {
            *(uint *)(lVar27 + 0x20 + (long)(int)(uVar25 - 1) * 0x14 + 4) = uVar4;
            *(uint *)(lVar27 + 0x20 + lVar34 * 0x14) = uVar31;
            plVar40 = in_stack_00000150;
            goto LAB_0248dc84;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      plVar40 = in_stack_00000150;
      if ((float)uVar31 == in_stack_00000078._4_4_) {
        *(float *)(lVar27 + lVar34 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  plVar39 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] != '\0') ||
     ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
    if ((unaff_w29 == 0) &&
       (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
        if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
             (0xfd < in_stack_000017bc - 0x1101)) || (uVar50 = FUN_024e95f0(0), (uVar50 & 1) != 0))
           && ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
        goto LAB_0248ded4;
        lVar22 = FUN_024e94b0(0);
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_02491464;
        uVar50 = FUN_0129aa60(*(long *)(lVar22 + 0x10),&stack0x00000880,
                              *(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                             );
        if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
          lVar22 = FUN_024e94b0(0);
          if (((lVar22 == 0) || (*in_stack_00000150 == 0)) ||
             (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148 + 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02491464;
          in_stack_00000880 =
               (uint)*(ushort *)(lVar27 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar38 + 0x20)
          ;
          uVar19 = FUN_0129aa60(*(long *)(lVar22 + 0x18),&stack0x00000880,
                                *(undefined8 *)
                                 System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                               );
          if ((uVar50 & 1) != 0) goto LAB_0248e0dc;
          if ((uVar19 & 1) == 0) goto LAB_0248e1b0;
          plVar40 = in_stack_00000150;
          plVar39 = (long *)System_Threading_Mutex_TypeInfo;
          if ((bStack000000000000005c & 1) == 0) {
            bStack000000000000005c = 0;
            goto LAB_0248e168;
          }
        }
        else {
          in_stack_00000880 = in_stack_000017bc;
          if ((uVar50 & 1) == 0) {
LAB_0248e1b0:
            plVar39 = (long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 0;
            plVar40 = in_stack_00000150;
            goto LAB_0248e168;
          }
LAB_0248e0dc:
          plVar39 = (long *)System_Threading_Mutex_TypeInfo;
          plVar40 = in_stack_00000150;
          if ((uint)unaff_x22 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
          goto LAB_0248e168;
        }
joined_r0x0248e0fc:
        System_Threading_Mutex_TypeInfo = (undefined *)plVar39;
        if (unaff_w29 != 0) {
LAB_0248e100:
          plVar39 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
        }
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 1;
      }
      else {
LAB_0248ded4:
        plVar39 = (long *)System_Threading_Mutex_TypeInfo;
        if ((bStack000000000000005c & 1) != 0) {
          if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
          goto joined_r0x0248e0fc;
          goto LAB_0248e100;
        }
        bStack000000000000005c = 0;
      }
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_0248ded4;
      if (((in_stack_000017bc - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_0248de4c;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      bStack000000000000005c = 0;
      *(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0xe78) = 0xffffffff;
    }
  }
LAB_0248e168:
  if (*(int *)(*plVar39 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar42 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
LAB_0248ab98:
  fVar57 = (float)unaff_d13;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar22 = unaff_x19[0x8e];
  if (lVar22 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar22 + 0x18)) {
      if (*(uint *)(lVar22 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar12 = *(uint *)(lVar22 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar12 == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar16 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar17 = FUN_0176eb1c(&stack0x00001788,0);
        uVar16 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar16,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar17,0);
        if (*(int *)(*plVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar42);
        }
        FUN_026610e4(uVar16,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        plVar40 = in_stack_00000150;
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar12 == 0x3c)) goto code_r0x0248a9ac;
      if ((*plVar40 != 0) && (lVar22 = *(long *)(*plVar40 + 0x38), lVar22 != 0)) {
        if (*in_stack_00000148 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar22 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar22 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar22 + 0x38);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_0248e4dc:
    fVar57 = (float)uVar48;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar57 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar60 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar57 < fVar60) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar46 = (*(float *)((long)unaff_x19 + 0x234) - fVar57) * 0.5;
        if (fVar46 <= DAT_028aa298) {
          fVar46 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar57;
        fVar46 = (fVar57 + fVar46) * 20.0 + 0.5;
        fVar57 = DAT_02958220;
        if (fVar46 != INFINITY) {
          fVar57 = (float)(int)fVar46 / 20.0;
        }
        if (fVar60 <= fVar57) {
          fVar57 = fVar60;
        }
        goto LAB_0248e598;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar16 = FUN_0176eb1c(_fStack0000000000000038,0);
      uVar17 = FUN_017840ac(in_stack_00000040,0);
      uVar16 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar16,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar17,
                            0);
      if (*(int *)(*plVar42 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar42);
      }
      FUN_02660dac(uVar16,0);
    }
    puVar9 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x958))();
      lVar22 = *(long *)puVar9;
      goto LAB_02491474;
    }
    lVar22 = *plVar39;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *plVar39;
    }
    plVar39 = (long *)PTR_DAT_033ed410;
    lVar22 = **(long **)(lVar22 + 0xb8);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    iVar38 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*plVar40 == 0) || (lVar22 = *(long *)(*plVar40 + 0x60), lVar22 == 0)) goto LAB_02491464;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar22 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7d94(lVar22 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    iVar13 = (int)unaff_x19[0x4d];
    in_stack_000000c0._4_4_ =
         **(float **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    in_stack_000000b8 =
         *(undefined8 *)
          (*(float **)
            (*(long *)
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ + 0xb8
            ) + 1);
    lVar22 = unaff_x19[0xea];
    in_stack_00000088 = (float *)in_stack_000000b8;
    fStack0000000000000090 = in_stack_000000c0._4_4_;
    if (iVar13 < 0x401) {
      if (iVar13 == 0x100) {
        if (lVar22 == 0) goto LAB_02491464;
        if (*(uint *)(lVar22 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar16 = *(undefined8 *)(lVar22 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*plVar40 == 0) || (lVar27 = *(long *)(*plVar40 + 0x58), lVar27 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar57 = *(float *)(lVar27 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar57 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x2c);
        fVar57 = (0.0 - fVar57) - fStack0000000000000020;
      }
      else if (iVar13 == 0x200) {
        if (lVar22 == 0) goto LAB_02491464;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fStack0000000000000090 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar22 + 0x24) +
                          (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*plVar40 == 0) || (lVar22 = *(long *)(*plVar40 + 0x58), lVar22 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar22 = lVar22 + (long)(int)uStack0000000000000030 * 0x14;
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar57 = ((fStack0000000000000020 + *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar13 != 0x400) goto LAB_0248eb64;
        if (lVar22 == 0) goto LAB_02491464;
        if (*(int *)(lVar22 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar16 = *(undefined8 *)(lVar22 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*plVar40 == 0) || (lVar27 = *(long *)(*plVar40 + 0x58), lVar27 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar27 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          in_stack_000017b8 = *(float *)(lVar27 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x20);
        fVar57 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      in_stack_00000088 =
           (float *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar57);
    }
    else if (iVar13 == 0x800) {
      if (lVar22 == 0) goto LAB_02491464;
      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar57 = ((float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5
      ;
      fStack0000000000000090 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                             fVar57 + 0.0);
    }
    else {
      if (iVar13 == 0x1000) {
        if (lVar22 == 0) goto LAB_02491464;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar57 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30);
        fVar60 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      }
      else {
        if (iVar13 != 0x2000) goto LAB_0248eb64;
        if (lVar22 == 0) goto LAB_02491464;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar57 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30);
        fVar60 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
      }
      fVar57 = fVar57 * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(fVar60 * 0.5 + 0.0,
                             fVar57 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5
                                      ));
    }
LAB_0248eb64:
    lVar22 = FUN_0249b7f8();
    if (lVar22 == 0) goto LAB_02491464;
    FUN_026a125c(lVar22,0);
    __x = DAT_028aa048;
    *(float *)((long)unaff_x19 + 0x6dc) = fVar57;
    dVar49 = modf(__x,(double *)&stack0x00000880);
    puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (dVar49 == 0.5) {
      fVar60 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar60 = fVar60 + 1.0;
      }
    }
    else {
      fVar60 = 255.0;
    }
    dVar49 = modf(__x,(double *)&stack0x00000880);
    if (dVar49 == 0.5) {
      fVar46 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar46 = fVar46 + 1.0;
      }
    }
    else {
      fVar46 = 255.0;
    }
    dVar49 = modf(__x,(double *)&stack0x00000880);
    if (dVar49 == 0.5) {
      fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar47 = fVar47 + 1.0;
      }
    }
    else {
      fVar47 = 255.0;
    }
    dVar49 = modf(__x,(double *)&stack0x00000880);
    if (dVar49 == 0.5) {
      fVar62 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar62 = fVar62 + 1.0;
      }
    }
    else {
      fVar62 = 255.0;
    }
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037825d3 == '\0') {
      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
      DAT_037825d3 = '\x01';
    }
    puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    lVar22 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *(long *)puVar9;
    }
    puVar23 = *(undefined4 **)(lVar22 + 0xb8);
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar23,puVar23[1],puVar23[2],puVar23[3],&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar22 = *in_stack_00000150;
    if (lVar22 == 0) goto LAB_02491464;
    uVar12 = *in_stack_00000148;
    if ((int)uVar12 < 1) {
      iStack00000000000000a4 = 0;
      iVar38 = 0;
      plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      goto LAB_02491068;
    }
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_02491464;
    iVar13 = 0;
    bVar8 = false;
    bVar7 = false;
    bVar11 = false;
    iStack00000000000000a4 = 0;
    fStack0000000000000024 = 0.0;
    bVar10 = false;
    uStack0000000000000114 = 0;
    fStack0000000000000048 = 0.0;
    fStack00000000000000cc =
         *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8) + 0x15a8);
    fStack00000000000000c8 = 0.0;
    fStack0000000000000054 = fStack00000000000000a8;
    fStack0000000000000058 = 0.0;
    fStack0000000000000038 = 0.0;
    fStack0000000000000084 = 0.0;
    fStack0000000000000034 = 0.0;
    _bStack000000000000005c =
         (int)fVar60 & 0xffU | ((int)fVar46 & 0xffU) << 8 | ((int)fVar47 & 0xffU) << 0x10 |
         (int)fVar62 << 0x18;
    fVar46 = 0.0;
    fVar60 = 0.0;
    lStack0000000000000128 = 0x2e0;
    fStack0000000000000098 = fStack00000000000000a8;
    in_stack_000000a0 = fStack00000000000000ac;
    fStack000000000000004c = fStack00000000000000ac;
    fStack0000000000000050 = (float)uStack0000000000000094;
    in_stack_00000078._4_4_ = fStack00000000000000a8;
    in_stack_00000068._4_4_ = fStack00000000000000ac;
    uStack0000000000000060 = uStack0000000000000094;
    uVar25 = 0;
    uVar31 = 1;
    goto LAB_0248ef74;
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar50 = FUN_024d0688();
  if (((uVar50 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar12,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar25 = *in_stack_00000148;
  if (*(uint *)(lVar22 + 0x18) <= uVar25)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar34 = (long)(int)uVar25;
  cVar21 = *(char *)(lVar22 + lVar34 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar27 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar25) {
    uVar12 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar12 == 0x2026) {
      lVar35 = unaff_x19[0xc9];
      lVar22 = lVar22 + lVar34 * unaff_x21;
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      *(long *)(lVar22 + 0x30) = lVar35;
      *(long *)(lVar22 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar22 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar22 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar25 + 1);
    }
    else if (uVar12 == 3) {
      if ((*unaff_x27 == 0) || (lVar35 = FUN_024b11ac(*unaff_x27,0), lVar35 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar35,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar22 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      unaff_w20 = 1;
      *(ulong *)(lVar22 + lVar34 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar25 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  plVar39 = (long *)System_Threading_Mutex_TypeInfo;
  in_stack_000017bc = uVar12;
  if (((int)uVar25 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar12 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (long)(int)uVar25 * (long)iVar38;
    *(undefined1 *)(lVar22 + 0x194) = 0;
    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
    *(undefined4 *)(lVar22 + 100) = 0;
    *in_stack_00000148 = uVar25 + 1;
    plVar40 = in_stack_00000150;
    goto LAB_0248ab98;
  }
  iVar13 = *(int *)((long)unaff_x19 + 0x63c);
  fVar60 = unaff_s12;
  if (iVar13 == 0) {
    uVar25 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar25 >> 4 & 1) == 0) {
      if ((uVar25 >> 3 & 1) == 0) {
        if ((uVar25 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar50 = FUN_016f92d4(uVar12,0);
          if ((uVar50 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016f95a8(uVar12,0);
            uVar12 = uVar12 & 0xffff;
            fVar60 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar50 = FUN_016f9218(uVar12,0);
        if ((uVar50 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_016f9724(uVar12,0);
          goto LAB_0248af70;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar50 = FUN_016f92d4(uVar12,0);
      if ((uVar50 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016f95a8(uVar12,0);
LAB_0248af70:
        uVar12 = uVar12 & 0xffff;
      }
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar12;
    if (iVar13 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar13 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
      lVar34 = *(long *)(lVar22 + 0x40);
      unaff_x19[0xd2] = lVar34;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar22 + 0x48);
      if ((lVar34 == 0) || (lVar22 = FUN_024ebfa0(lVar34,0), lVar22 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar34 = CONCAT44(in_stack_00000884,in_stack_00000880);
      plVar39 = (long *)System_Threading_Mutex_TypeInfo;
      plVar40 = in_stack_00000150;
      if (lVar34 == 0) goto LAB_0248ab98;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar57 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar13 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar47 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar46 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar46 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar46 = (fVar57 / (float)iVar13) * fVar47 * fVar46;
      iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3c);
      if (iVar13 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar13 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar63 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar63 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar62 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar34 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar34 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar66 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar34 + 0x20) == 0) goto LAB_02491464;
        fVar69 = *(float *)(lVar34 + 0x2c);
        fVar53 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar65 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar61 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar56 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar43 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar43 = fVar46 * fVar61 * fVar56 * fVar43;
        fVar63 = (fVar57 / (float)iVar13) * fVar47 * fVar63;
        fVar57 = fVar63 * (fVar62 / fVar66) * fVar69 * fVar53;
        fVar63 = fVar63 / fVar57;
        fVar65 = fVar63 * fVar65;
        fVar46 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar63 = fVar63 * fVar46;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar47 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar34 + 0x20) == 0) goto LAB_02491464;
        fVar63 = *(float *)(lVar34 + 0x2c);
        fVar62 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar62 = 1.0;
        }
        fVar66 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar65 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar69 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar43 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar43 = fVar46 * fVar69 * fVar53 * fVar43;
        fVar57 = (fVar57 / (float)iVar13) * fVar47 * fVar62 * fVar63 * fVar66;
        fVar63 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar22 = unaff_x19[0x6c];
      unaff_x19[200] = lVar34;
      if ((lVar22 == 0) || (lVar34 = *(long *)(lVar22 + 0x38), lVar34 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar34 + 0x2c) = 1;
      *(float *)(lVar34 + 0x160) = fVar57;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar34 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar34 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar34 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar27;
      goto LAB_0248b384;
    }
    lVar22 = *in_stack_00000150;
    fVar46 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar46 = fVar57;
    }
    fVar43 = 0.0;
    if (lVar22 == 0) goto LAB_02491464;
    fVar65 = 0.0;
    fVar63 = 0.0;
  }
  else {
    if (iVar13 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    uVar25 = *in_stack_00000148;
    uVar12 = *(uint *)(lVar22 + 0x18);
    if (uVar12 <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = *(long *)(lVar22 + (int)uVar25 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar27;
    plVar39 = (long *)System_Threading_Mutex_TypeInfo;
    plVar40 = in_stack_00000150;
    if (lVar27 == 0) goto LAB_0248ab98;
    lVar34 = lVar22 + (int)uVar25 * unaff_x21;
    lVar27 = *(long *)(lVar34 + 0x38);
    unaff_x19[0x1f] = lVar27;
    unaff_x19[0x22] = *(long *)(lVar34 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar34 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar27 == 0) goto LAB_02491464;
      fVar46 = *(float *)(unaff_x19 + 0x3c);
      iVar13 = FUN_026fd110(lVar27 + 0x50,0);
      lVar22 = unaff_x19[0x1f];
    }
    else {
      lVar34 = unaff_x19[0x8e];
      if (lVar34 == 0) goto LAB_02491464;
      if (*(uint *)(lVar34 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar34 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar25 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar12 <= uVar25 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar27 == 0) goto LAB_02491464;
      fVar46 = *(float *)(lVar22 + (long)(int)(uVar25 - 1) * (long)iVar38 + 0x60);
      iVar13 = FUN_026fd110(lVar27 + 0x50,0);
      lVar22 = *unaff_x27;
    }
    if (lVar22 == 0) goto LAB_02491464;
    fVar62 = (float)FUN_026fd120(lVar22 + 0x50,0);
    fVar47 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar47 = unaff_s12;
    }
    fVar63 = 0.0;
    fVar65 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar65 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar63 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar22 = unaff_x19[200];
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
    fVar66 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar69 = *(float *)(lVar22 + 0x2c);
    fVar57 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar53 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar43 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar22 = unaff_x19[0x6c];
    if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x38), lVar27 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar27 + 0x2c) = 0;
    fVar47 = ((fVar60 * fVar46) / (float)iVar13) * fVar62 * fVar47;
    fVar57 = fVar47 * fVar66 * fVar69 * fVar57;
    *(float *)(lVar27 + 0x160) = fVar57;
    uVar12 = *(uint *)(unaff_x19 + 0x23);
    fVar43 = fVar47 * fVar53 * fVar61 * fVar43;
    if (uVar12 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar27 = unaff_x19[0xe0];
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = *(long *)(lVar27 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar27 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar27 + 0x4c);
    }
LAB_0248b384:
    unaff_s12 = 1.0;
    fVar46 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar46 = fVar57;
    }
  }
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar22 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(int *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar12 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar17 = unaff_x28[1];
  uVar16 = *unaff_x28;
  lVar22 = lVar22 + (int)uVar12 * unaff_x21;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar22 + 0x184) = uVar17;
  *(undefined8 *)(lVar22 + 0x17c) = uVar16;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar22 = *(long *)(unaff_x19[200] + 0x20), lVar22 == 0))
  goto LAB_02491464;
  FUN_026fd62c(&stack0x00000bf8,lVar22,0);
  unaff_x28[0x1df] = in_stack_00000c00;
  unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_016f68bc(in_stack_000017bc,0);
    unaff_w29 = uVar12 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    in_stack_000000b0 = 0.0;
    fVar62 = 0.0;
    fVar47 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar25 = *in_stack_00000148;
    uVar12 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar25 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar25 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar25 + 1) * (long)iVar38 + 0x30);
      if ((((lVar22 == 0) || (*unaff_x27 == 0)) ||
          (lVar27 = *(long *)(*unaff_x27 + 0x128), lVar27 == 0)) ||
         (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar12 | *(int *)(lVar22 + 0x28) << 0x10;
      uVar48 = FUN_0129eff4(lVar27,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar68 = 0;
      if ((uVar48 & 1) == 0) {
        in_stack_000000b0 = 0.0;
        fVar62 = 0.0;
        fVar47 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar47 = *(float *)(in_stack_000016d8 + 0x14);
        fVar62 = *(float *)(in_stack_000016d8 + 0x18);
        in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar68 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar25 = *in_stack_00000148;
    }
    else {
      uVar68 = 0;
      in_stack_000000b0 = 0.0;
      fVar62 = 0.0;
      fVar47 = 0.0;
    }
    if (0 < (int)uVar25) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= (uint)((long)(int)uVar25 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = *(long *)(lVar22 + ((long)(int)uVar25 + -1) * unaff_x21 + 0x30);
      if (((lVar22 == 0) || (*unaff_x27 == 0)) ||
         ((lVar27 = *(long *)(*unaff_x27 + 0x128), lVar27 == 0 ||
          (lVar27 = *(long *)(lVar27 + 0x18), lVar27 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar22 + 0x28) | uVar12 << 0x10;
      uVar48 = FUN_0129eff4(lVar27,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar48 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar47 = (float)FUN_024bb1bc(fVar47,fVar62,in_stack_000000b0,uVar68,
                                         *(undefined4 *)(in_stack_000016d8 + 0x28),
                                         *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016d8 + 0x30),
                                         *(undefined4 *)(in_stack_000016d8 + 0x34),0),
           in_stack_000016d8 == 0)) goto LAB_02491464;
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2f4) = in_stack_000000b0;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar69 = *(float *)(unaff_x19 + 199);
    fVar66 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar69 = fVar69 - fVar46 * fVar66 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar69;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar69 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar66 = *(float *)(unaff_x19 + 0x55);
  fStack0000000000000080 = 0.0;
  if (fVar66 != 0.0) {
    fVar69 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar53 = (float)FUN_026fd464(&stack0x00001770,0);
    fStack0000000000000080 =
         (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
         (fVar66 * 0.5 - fVar46 * (fVar69 * 0.5 + fVar53));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
  }
  if (((cVar21 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar48 = FUN_02681b9c(lVar22,0,0);
    fVar69 = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar22 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar40 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar22 == 0) goto LAB_02491464;
      uVar48 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar48 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*plVar40 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar40 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar22 == 0) goto LAB_02491464;
        fVar66 = (float)FUN_0267f610(lVar22,*(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0x54),0);
        if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
        fVar53 = *(float *)(*unaff_x27 + 0x1b0);
        fVar69 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
        fVar69 = fVar69 * fVar66 * fVar53 * 0.25;
        if (fVar66 < in_stack_00000130._4_4_ + fVar69) {
          in_stack_00000130._4_4_ = fVar66 - fVar69;
        }
      }
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    in_stack_000000c0._4_4_ = *(float *)(*unaff_x27 + 0x1b4);
  }
  else {
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar48 = FUN_02681b9c(lVar22,0,0);
    in_stack_000000c0._4_4_ = 0.0;
    if ((uVar48 & 1) != 0) {
      lVar22 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar40 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar22 == 0) goto LAB_02491464;
      uVar48 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar48 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*plVar40 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar40 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar22 == 0) goto LAB_02491464;
        uVar48 = FUN_0267e1d8(lVar22,*(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0xcc),0);
        if ((uVar48 & 1) != 0) {
          lVar22 = unaff_x19[0x22];
          if (*(int *)(*plVar40 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar40 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar22 == 0) goto LAB_02491464;
          fVar66 = (float)FUN_0267f610(lVar22,*(undefined4 *)(*(long *)(*plVar40 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar53 = *(float *)(*unaff_x27 + 0x1a8);
          fVar69 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
          fVar69 = fVar69 * fVar66 * fVar53 * 0.25;
          if (fVar66 < in_stack_00000130._4_4_ + fVar69) {
            in_stack_00000130._4_4_ = fVar66 - fVar69;
          }
          goto LAB_0248ba68;
        }
      }
    }
    fVar69 = 0.0;
  }
LAB_0248ba68:
  fVar56 = *(float *)(unaff_x19 + 199);
  fVar66 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar56 = fVar56 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar46 * (fVar47 + ((fVar66 - in_stack_00000130._4_4_) - fVar69));
  fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar53 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar43 + fVar46 * (fVar62 + in_stack_00000130._4_4_ + fVar47)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar47 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar61 = fVar53 - fVar46 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar47);
  fVar47 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar66 = fVar56 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar46 * (fVar69 + fVar69 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar47);
  param_2 = extraout_x1;
  fVar47 = fVar56;
  fVar62 = fVar66;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar59 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar45 = fVar59 * fVar46 * (fVar69 + in_stack_00000130._4_4_ + fVar47);
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar62 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar53 = fVar53 + 0.0;
    fVar61 = fVar61 + 0.0;
    fVar59 = fVar59 * fVar46 * (((fVar47 - fVar62) - in_stack_00000130._4_4_) - fVar69);
    fVar62 = fVar66 + fVar59;
    fVar47 = fVar56 + fVar45;
    fVar54 = (fVar45 - fVar59) * 0.5;
    fVar56 = (fVar56 + fVar59) - fVar54;
    fVar66 = (fVar66 + fVar45) - fVar54;
    param_2 = extraout_x1_04;
    fVar47 = fVar47 - fVar54;
    fVar62 = fVar62 - fVar54;
  }
  in_stack_00000118 = (ulong)(uint)fVar46;
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar45 = 0.0;
    fVar58 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar54 = fVar61;
    fVar59 = fVar53;
    fStack00000000000000e8 = fVar47;
    fStack00000000000000ec = fVar56;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar64 = (fVar66 + fVar56) * 0.5;
    fVar67 = (fVar61 + fVar53) * 0.5;
    fVar53 = fVar53 - fVar67;
    fVar51 = 0.0;
    fVar59 = fVar53;
    fVar44 = (float)FUN_02692df0(fVar47 - fVar64,_uStack0000000000000060,0);
    fVar61 = fVar61 - fVar67;
    fVar52 = 0.0;
    fVar47 = fVar61;
    fVar56 = (float)FUN_02692df0(fVar56 - fVar64,_uStack0000000000000060,0);
    fVar58 = 0.0;
    fVar66 = (float)FUN_02692df0(fVar66 - fVar64,_uStack0000000000000060,0);
    fVar66 = fVar64 + fVar66;
    fVar53 = fVar67 + fVar53;
    fVar58 = fVar58 + 0.0;
    fVar45 = 0.0;
    fVar62 = (float)FUN_02692df0(fVar62 - fVar64,_uStack0000000000000060,0);
    fVar62 = fVar64 + fVar62;
    fVar61 = fVar67 + fVar61;
    fVar45 = fVar45 + 0.0;
    param_2 = extraout_x1_00;
    fVar54 = fVar67 + fVar47;
    fVar59 = fVar67 + fVar59;
    fStack00000000000000e8 = fVar64 + fVar44;
    fStack00000000000000ec = fVar64 + fVar56;
    fStack00000000000000e0 = fVar52 + 0.0;
    fStack00000000000000e4 = fVar51 + 0.0;
  }
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar46;
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x120) = fVar54;
  *(float *)(lVar22 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar22 + 0x124) = fStack00000000000000e0;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x114) = fVar59;
  *(float *)(lVar22 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar22 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x128) = fVar66;
  *(float *)(lVar22 + 300) = fVar53;
  *(float *)(lVar22 + 0x130) = fVar58;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x134) = fVar62;
  *(float *)(lVar22 + 0x138) = fVar61;
  *(float *)(lVar22 + 0x13c) = fVar45;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar12 = *in_stack_00000148;
  unaff_x22 = (long)(int)uVar12;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar22 + unaff_x22 * unaff_x21;
  *(int *)(lVar27 + 0x140) = (int)unaff_x19[199];
  fVar62 = *(float *)(unaff_x19 + 0x9a);
  uVar48 = (ulong)(uint)fVar62;
  fVar47 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar27 + 0x15c) = (fVar66 - fStack00000000000000ec) / (fVar59 - fVar54);
  *(float *)(lVar27 + 0x14c) = (fVar43 - fVar62) + fVar47;
  fVar65 = fVar65 * fVar46;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar65 = fVar65 / fVar60;
    fVar63 = (fVar63 * fVar46) / fVar60;
  }
  else {
    fVar63 = fVar63 * fVar46;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar10 = unaff_w29 != 0;
  fVar65 = fVar47 + fVar65;
  bVar11 = uVar12 != unaff_w24;
  if (bVar11 && bVar10) {
    fVar47 = *(float *)(unaff_x19 + 0x98);
    lVar22 = lVar22 + unaff_x22 * unaff_x21;
    *(float *)(lVar22 + 0x154) = fVar47;
    fVar63 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar22 + 0x148) = fVar47 - fVar62;
    *(float *)(lVar22 + 0x158) = fVar63;
    *(float *)(unaff_x19 + 0x97) = fVar47 - fVar62;
    fVar63 = fVar63 - fVar62;
    *(float *)(lVar22 + 0x150) = fVar63;
  }
  else {
    fVar63 = fVar47 + fVar63;
    fVar66 = fVar65;
    fVar53 = fVar63;
    if (fVar47 != 0.0) {
      fVar66 = (fVar65 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar53 = (fVar63 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar66 <= fVar65) {
        fVar66 = fVar65;
      }
      if (fVar63 <= fVar53) {
        fVar53 = fVar63;
      }
    }
    lVar22 = lVar22 + unaff_x22 * unaff_x21;
    fVar47 = fVar66;
    if (fVar66 <= *(float *)(unaff_x19 + 0x98)) {
      fVar47 = *(float *)(unaff_x19 + 0x98);
    }
    fVar43 = fVar53;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar53) {
      fVar43 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
    fVar63 = fVar63 - fVar62;
    *(float *)(unaff_x19 + 0x98) = fVar47;
    *(float *)(lVar22 + 0x154) = fVar66;
    *(float *)(lVar22 + 0x158) = fVar53;
    *(float *)(lVar22 + 0x148) = fVar65 - fVar62;
    *(float *)(unaff_x19 + 0x97) = fVar65 - fVar62;
    *(float *)(lVar22 + 0x150) = fVar63;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar63;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar11 || !bVar10) {
      *(float *)(unaff_x19 + 0x96) = fVar47;
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar47 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar62 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fVar60 = (fVar46 * fVar62) / fVar60;
      uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar47 <= fVar60) {
        fVar47 = fVar60;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar47;
      param_2 = extraout_x1_01;
      goto LAB_0248bef4;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar11 || !bVar10) && (float)uVar48 == 0.0) {
      fVar60 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar65) {
        fVar60 = fVar65;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar60;
    }
  }
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x38), lVar27 == 0)) goto LAB_02491464;
  uVar12 = *in_stack_00000148;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + (int)uVar12 * unaff_x21;
  *(undefined1 *)(lVar27 + 0x194) = 0;
  unaff_w26 = *(uint *)(unaff_x19 + 0x4e) & 0x18;
  if (((in_stack_000017bc != 9) &&
      ((((unaff_w29 != 0 || (in_stack_000017bc == 3)) || (in_stack_000017bc == 0x200b)) ||
       (in_stack_000017bc == 0xad)))) &&
     (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x63c) != 1)))) {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar60 = (float)uVar48;
      fVar57 = 0.0;
      if ((0.0 < fVar60) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      uVar48 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar60)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar12;
        }
        plVar42 = (long *)StringLiteral_302;
        plVar39 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar22 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar50 = FUN_02681b9c(lVar22,0,0);
        if ((uVar50 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5c];
          uVar16 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_02491464;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar40 = (long *)unaff_x19[0x5c];
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        plVar40 = in_stack_00000150;
        in_stack_000017a8 = CONCAT44(3,uVar12);
        goto LAB_0248ab98;
      }
    }
    if ((((0x22 < in_stack_000017bc - 0x2007) ||
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
        (1 < in_stack_000017bc - 10)) && (in_stack_000017bc != 0xa0)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar70 = FUN_016fa418(in_stack_000017bc,0);
      param_2 = auVar70._8_8_;
      if ((auVar70._0_8_ & 1) == 0) goto LAB_0248cae0;
    }
    if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0x2060)) {
      lVar22 = *in_stack_00000150;
      if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x50), lVar27 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    }
LAB_0248cae0:
    plVar40 = in_stack_00000150;
    if (in_stack_000017bc != 0xa0) goto code_r0x0248d088;
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    goto LAB_0248cf8c;
  }
  *(undefined1 *)(lVar27 + 0x194) = 1;
  pfVar26 = in_stack_00000088;
  pfVar30 = _fStack0000000000000098;
  if (unaff_w20 != 0) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    pfVar30 = (float *)(lVar22 + 0x60);
    pfVar26 = (float *)(lVar22 + 100);
  }
  fVar47 = *pfVar30;
  fVar62 = *pfVar26;
  fVar60 = *(float *)(unaff_x19 + 0x6b);
  fVar63 = *(float *)(unaff_x19 + 199);
  in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar47) - fVar62;
  bVar10 = true;
  if ((fVar60 <= in_stack_000000d8._4_4_) && (bVar10 = false, !NAN(fVar60))) {
    bVar10 = fVar60 == -1.0;
  }
  if (!bVar10) {
    in_stack_000000d8._4_4_ = fVar60;
  }
  fVar60 = 0.0;
  if ((char)unaff_x19[0x1d] == '\0') {
    fVar60 = (float)FUN_026fd474(&stack0x00001770,0);
    uVar48 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    param_2 = extraout_x1_02;
  }
  fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
  fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
  fVar66 = (float)uVar48;
  if (in_stack_000017bc != 0xad) {
    fVar57 = fVar46;
  }
  fVar46 = 0.0;
  if ((0.0 < fVar66) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
    fVar46 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
  }
  fVar46 = (*(float *)(unaff_x19 + 0x96) - (fVar53 - fVar66)) + fVar46;
  uVar12 = *in_stack_00000148;
  if (in_stack_000000a0 < fVar46) {
    if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
      *(uint *)((long)unaff_x19 + 0x2dc) = uVar12;
    }
    plVar42 = (long *)StringLiteral_302;
    plVar39 = (long *)System_Threading_Mutex_TypeInfo;
    uVar16 = DAT_02941c08;
    if ((char)unaff_x19[0x46] != '\0') {
      fVar43 = *(float *)(unaff_x19 + 0x58);
      if (((fVar43 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar66)) &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
                 ((in_stack_00000018._4_4_ - fVar46) / (float)(int)unaff_x19[0x94]) /
                 fStack0000000000000054;
        if (fVar57 <= fVar43) {
          fVar57 = fVar43;
        }
        goto LAB_0248ea5c;
      }
      fVar66 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar46 = *(float *)(unaff_x19 + 0x49);
      uVar48 = (ulong)(uint)fVar46;
      if ((fVar46 < fVar66) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar57 = (fVar66 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar57 <= DAT_028aa298) {
          fVar57 = DAT_028aa298;
        }
        fVar60 = (fVar66 - fVar57) * 20.0 + 0.5;
        fVar57 = DAT_02958220;
        if (fVar60 != INFINITY) {
          fVar57 = (float)(int)fVar60 / 20.0;
        }
        if (fVar57 <= fVar46) {
          fVar57 = fVar46;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar66;
        goto LAB_0248e598;
      }
    }
    switch((int)unaff_x19[0x5b]) {
    case 1:
      lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *plVar39;
      }
      lVar27 = *(long *)(lVar22 + 0xb8);
      lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
      if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
        lVar22 = FUN_00d5941c(lVar22);
      }
      plVar42 = (long *)StringLiteral_302;
      lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
      if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
        lVar22 = FUN_00d5941c();
      }
      piVar18 = (int *)thunk_FUN_00d32ed4(lVar27 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
      if (*piVar18 == 0) goto LAB_0248e4bc;
      lVar22 = *plVar39;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *plVar39;
      }
      FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                   *(undefined8 *)
                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                  );
      memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
      iVar13 = FUN_024d66ec();
      goto LAB_0248c900;
    default:
      goto switchD_0248c274_caseD_2;
    case 3:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
LAB_0248c524:
      plVar42 = (long *)StringLiteral_302;
      in_stack_00001788 = FUN_024d66ec();
      break;
    case 5:
      if ((uVar12 == 0) || ((int)in_stack_00001788 < 0)) {
        *in_stack_00000148 = 0;
        plVar39 = (long *)System_Threading_Mutex_TypeInfo;
        plVar40 = in_stack_00000150;
        plVar42 = (long *)StringLiteral_302;
        in_stack_00001788 = 0xffffffff;
        in_stack_000017a8 = uVar16;
        goto LAB_0248ab98;
      }
      fVar57 = *(float *)(unaff_x19 + 0x98);
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (fVar57 - fVar53 <= in_stack_000000a0) {
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        uVar48 = *(ulong *)(*(long *)(*plVar39 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        lVar22 = NEON_rev64(uVar48,4);
        unaff_x19[0x98] = lVar22;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        plVar40 = in_stack_00000150;
        goto LAB_0248ab98;
      }
      break;
    case 6:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      plVar42 = (long *)StringLiteral_302;
      lVar22 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar50 = FUN_02681b9c(lVar22,0,0);
      if ((uVar50 & 1) != 0) {
        plVar40 = (long *)unaff_x19[0x5c];
        uVar16 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar40 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
        lVar22 = unaff_x19[0x5c];
        if (lVar22 == 0) goto LAB_02491464;
        *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar40 = (long *)unaff_x19[0x5c];
        if (plVar40 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
    }
    goto LAB_0248c628;
  }
switchD_0248c274_caseD_2:
  plVar39 = (long *)System_Threading_Mutex_TypeInfo;
  fVar46 = 1.0 - fVar65;
  uVar48 = (ulong)(uint)fVar46;
  fVar60 = ABS(fVar63) + fVar60 * fVar46 * fVar57;
  fVar57 = _DAT_0294c6e8;
  if (unaff_w26 == 0) {
    fVar57 = 1.0;
  }
  if (fVar60 <= fVar57 * in_stack_000000d8._4_4_) goto LAB_0248cf18;
  if (((char)unaff_x19[0x5a] == '\0') || (uVar12 == *(uint *)(unaff_x19 + 0x92))) {
    if (((char)unaff_x19[0x46] == '\0') ||
       ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_0248c3dc:
      iVar13 = (int)unaff_x19[0x5b];
      if (iVar13 == 1) {
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar39;
        }
        plVar42 = (long *)StringLiteral_302;
        lVar27 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c(lVar22);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c();
        }
        piVar18 = (int *)thunk_FUN_00d32ed4(lVar27 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
        if (*piVar18 == 0) goto LAB_0248e4bc;
        lVar22 = *plVar39;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar39;
        }
        FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000c70,&stack0x00000880,0x378);
        goto LAB_0248c8f4;
      }
      if (iVar13 == 6) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar42 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        lVar22 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar50 = FUN_02681b9c(lVar22,0,0);
        if ((uVar50 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5c];
          uVar16 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_02491464;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar40 = (long *)unaff_x19[0x5c];
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        goto LAB_0248ca1c;
      }
      if (iVar13 != 3) goto LAB_0248cf18;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      goto LAB_0248c524;
    }
    fVar63 = *(float *)(unaff_x19 + 0x59) / 100.0;
    if (fVar65 < fVar63) {
      fVar46 = fVar60 / fVar46;
      if (fVar65 <= 0.0) {
        fVar46 = fVar60;
      }
      fVar65 = fVar65 + (fVar60 - fVar57 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar46;
      goto LAB_0249154c;
    }
    fVar63 = *(float *)((long)unaff_x19 + 0x1dc);
    uVar48 = (ulong)(uint)fVar63;
    fVar46 = *(float *)(unaff_x19 + 0x49);
    if (fVar63 <= fVar46) goto LAB_0248c3dc;
LAB_024914c0:
    fVar57 = (fVar63 - *(float *)(unaff_x19 + 0x47)) * 0.5;
    if (fVar57 <= DAT_028aa298) {
      fVar57 = DAT_028aa298;
    }
    *(float *)((long)unaff_x19 + 0x234) = fVar63;
    fVar60 = (fVar63 - fVar57) * 20.0 + 0.5;
    fVar57 = DAT_02958220;
    if (fVar60 != INFINITY) {
      fVar57 = (float)(int)fVar60 / 20.0;
    }
    if (fVar57 <= fVar46) {
      fVar57 = fVar46;
    }
LAB_0248e598:
    *(float *)((long)unaff_x19 + 0x1dc) = fVar57;
    return;
  }
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  in_stack_00001788 = FUN_024d66ec();
  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
    lVar22 = *in_stack_00000150;
    if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x38), lVar27 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar46 = *(float *)(unaff_x19 + 0x9a);
    fVar63 = 0.0;
    if ((0.0 < fVar46) && (fVar63 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar63 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar63 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
             *(float *)(lVar27 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
             (fVar63 - *(float *)((long)unaff_x19 + 0x4c4)) +
             fStack0000000000000054 * (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4))
    ;
  }
  else {
    lVar22 = unaff_x19[0x6c];
    *(undefined1 *)((long)unaff_x19 + 700) = 1;
    if (lVar22 == 0) goto LAB_02491464;
    fVar46 = *(float *)(unaff_x19 + 0x9a);
    fVar63 = *(float *)(unaff_x19 + 0x57) + fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
  }
  puVar9 = System_Threading_Mutex_TypeInfo;
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_02491464;
  uVar25 = *(uint *)((long)unaff_x19 + 0x48c);
  if ((*(uint *)(lVar22 + 0x18) <= uVar25) ||
     (uVar31 = uVar25 - 1, *(uint *)(lVar22 + 0x18) <= uVar31))
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar48 = (ulong)(uint)(fVar63 + *(float *)(unaff_x19 + 0x96));
  fVar66 = (fVar63 + *(float *)(unaff_x19 + 0x96) + fVar46) -
           *(float *)(lVar22 + (int)uVar25 * unaff_x21 + 0x158);
  if (((in_stack_00000068._4_1_ & 1) == 0 &&
       *(short *)(lVar22 + (long)(int)uVar31 * (long)iVar38 + 0x20) == 0xad) &&
     ((fVar66 < in_stack_000000a0 || ((int)unaff_x19[0x5b] == 0)))) {
    in_stack_00001788 = in_stack_00001788 - 1;
    in_stack_00000068._4_1_ = 0;
    in_stack_000017a8 = CONCAT44(0x2d,uVar31);
    *in_stack_00000148 = uVar31;
    goto LAB_0248cf04;
  }
  if (*(short *)(lVar22 + (int)uVar25 * unaff_x21 + 0x20) == 0xad) {
    in_stack_00000068._4_1_ = 1;
    goto LAB_0248cf04;
  }
  if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
    fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar63 = *(float *)(unaff_x19 + 0x59) / 100.0;
    if ((fVar63 <= fVar65) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
      fVar63 = *(float *)((long)unaff_x19 + 0x1dc);
      uVar48 = (ulong)(uint)fVar63;
      fVar46 = *(float *)(unaff_x19 + 0x49);
      if ((fVar46 < fVar63) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
      goto LAB_024914c0;
      goto LAB_0248cc70;
    }
LAB_0249155c:
    fVar46 = fVar60;
    if (0.0 < fVar65) {
      fVar46 = fVar60 / (1.0 - fVar65);
    }
    fVar65 = fVar65 + (fVar60 - fVar57 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar46;
LAB_0249154c:
    if (fVar63 <= fVar65) {
      fVar65 = fVar63;
    }
    *(float *)((long)unaff_x19 + 0x2cc) = fVar65;
    return;
  }
LAB_0248cc70:
  lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
  param_2 = extraout_x1_03;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar22 = *(long *)puVar9;
    param_2 = extraout_x1_05;
  }
  iVar13 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
  if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
     (((bStack000000000000005c ^ 1) & 1) == 0)) {
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00001788 = FUN_024d66ec();
    if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
    goto LAB_02491464;
    uVar25 = *in_stack_00000148 - 1;
    if (*(uint *)(lVar22 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    param_2 = extraout_x1_06;
    fStack0000000000000034 = (float)iVar13;
    if (*(short *)(lVar22 + (long)(int)uVar25 * (long)iVar38 + 0x20) == 0xad) {
      in_stack_00001788 = in_stack_00001788 - 1;
      in_stack_00000068._4_1_ = 0;
      in_stack_000017a8 = CONCAT44(0x2d,uVar25);
      *in_stack_00000148 = uVar25;
      goto LAB_0248cf04;
    }
  }
  if (fVar66 <= in_stack_000000a0) {
    uVar48 = unaff_d13;
    FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                 fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
    bStack000000000000005c = 1;
    in_stack_00000068._4_1_ = 0;
    fStack0000000000000058 = 1.4013e-45;
LAB_0248cf04:
    unaff_s12 = 1.0;
    plVar39 = (long *)System_Threading_Mutex_TypeInfo;
    plVar40 = in_stack_00000150;
    plVar42 = (long *)StringLiteral_302;
    goto LAB_0248ab98;
  }
  if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
    *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  }
  plVar42 = (long *)StringLiteral_302;
  plVar39 = (long *)System_Threading_Mutex_TypeInfo;
  if ((char)unaff_x19[0x46] != '\0') {
    fVar46 = *(float *)(unaff_x19 + 0x58);
    if ((fVar46 < *(float *)((long)unaff_x19 + 0x2b4)) &&
       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
      fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
               ((in_stack_00000018._4_4_ - fVar66) / (float)((int)unaff_x19[0x94] + 1)) /
               fStack0000000000000054;
      if (fVar57 <= fVar46) {
        fVar57 = fVar46;
      }
LAB_0248ea5c:
      *(float *)((long)unaff_x19 + 0x2b4) = fVar57;
      return;
    }
    fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar63 = *(float *)(unaff_x19 + 0x59) / 100.0;
    if ((fVar65 < fVar63) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
    goto LAB_0249155c;
    fVar63 = *(float *)((long)unaff_x19 + 0x1dc);
    uVar48 = (ulong)(uint)fVar63;
    fVar46 = *(float *)(unaff_x19 + 0x49);
    if ((fVar46 < fVar63) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
    goto LAB_024914c0;
  }
  unaff_s12 = 1.0;
  switch((int)unaff_x19[0x5b]) {
  case 0:
  case 2:
  case 4:
    uVar48 = unaff_d13;
    FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                 fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
    break;
  case 1:
    lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *plVar39;
    }
    lVar27 = *(long *)(lVar22 + 0xb8);
    lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
      lVar22 = FUN_00d5941c(lVar22);
    }
    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
      lVar22 = FUN_00d5941c();
    }
    piVar18 = (int *)thunk_FUN_00d32ed4(lVar27 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
    if (*piVar18 == 0) {
      in_stack_00000068._4_1_ = 0;
LAB_0248e4bc:
      in_stack_000017a8 = DAT_02941c08;
      unaff_s12 = 1.0;
      in_stack_00000148[0] = 0;
      in_stack_00000148[1] = 0;
      plVar40 = in_stack_00000150;
      in_stack_00001788 = 0xffffffff;
      goto LAB_0248ab98;
    }
    lVar22 = *plVar39;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *plVar39;
    }
    FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                 *(undefined8 *)
                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                );
    memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
    iVar13 = FUN_024d66ec();
    in_stack_00000068._4_1_ = 0;
LAB_0248c900:
    unaff_s12 = 1.0;
    iVar14 = *(int *)((long)unaff_x19 + 0x48c) + -1;
    *(int *)((long)unaff_x19 + 0x48c) = iVar14;
    in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
    plVar40 = in_stack_00000150;
    in_stack_00001788 = iVar13 - 1;
    in_stack_000017a8 = CONCAT44(0x2026,iVar14);
    goto LAB_0248ab98;
  case 3:
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00001788 = FUN_024d66ec();
    in_stack_00000068._4_1_ = 0;
LAB_0248c628:
    unaff_s12 = 1.0;
    plVar40 = in_stack_00000150;
    in_stack_000017a8 = CONCAT44(3,uVar12);
    goto LAB_0248ab98;
  case 5:
    *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
    uVar48 = unaff_d13;
    FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                 fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
    *(undefined4 *)(unaff_x19 + 0x99) = 0;
    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
    *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
    *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
    break;
  case 6:
    lVar22 = unaff_x19[0x5c];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar50 = FUN_02681b9c(lVar22,0,0);
    if ((uVar50 & 1) != 0) {
      plVar40 = (long *)unaff_x19[0x5c];
      uVar16 = (**(code **)(*unaff_x19 + 0x548))();
      if (plVar40 == (long *)0x0) goto LAB_02491464;
      (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
      lVar22 = unaff_x19[0x5c];
      if (lVar22 == 0) goto LAB_02491464;
      *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
      FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
      plVar40 = (long *)unaff_x19[0x5c];
      if (plVar40 == (long *)0x0) goto LAB_02491464;
      (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
    in_stack_00000068._4_1_ = 0;
LAB_0248ca1c:
    unaff_s12 = 1.0;
    plVar40 = in_stack_00000150;
    in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
    goto LAB_0248ab98;
  default:
    goto switchD_0248ce4c_default;
  }
  in_stack_00000068._4_1_ = 0;
  bStack000000000000005c = 1;
  fStack0000000000000058 = 1.4013e-45;
  plVar39 = (long *)System_Threading_Mutex_TypeInfo;
  plVar40 = in_stack_00000150;
  plVar42 = (long *)StringLiteral_302;
  goto LAB_0248ab98;
switchD_0248ce4c_default:
  in_stack_00000068._4_1_ = 0;
LAB_0248cf18:
  unaff_s12 = 1.0;
  if (in_stack_000017bc == 0xad) {
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
    plVar40 = in_stack_00000150;
  }
  else if (in_stack_000017bc == 9) {
    lVar22 = *in_stack_00000150;
    if ((lVar22 == 0) || (lVar27 = *(long *)(lVar22 + 0x38), lVar27 == 0)) goto LAB_02491464;
    uVar12 = *in_stack_00000148;
    if (*(uint *)(lVar27 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar27 + (int)uVar12 * unaff_x21 + 0x194) = 0;
    *(uint *)((long)unaff_x19 + 0x49c) = uVar12;
    lVar27 = *(long *)(lVar22 + 0x50);
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(int *)(lVar27 + 0x2c) = *(int *)(lVar27 + 0x2c) + 1;
LAB_0248cf8c:
    unaff_s12 = 1.0;
    *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    plVar40 = in_stack_00000150;
  }
  else {
    lVar22 = 0x4e4;
    if (*(char *)((long)unaff_x19 + 0x1cc) != '\0') {
      lVar22 = 0x13c;
    }
    param_2 = (ulong)*(uint *)((long)unaff_x19 + lVar22);
    if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
      (**(code **)(*unaff_x19 + 0x8c8))();
      param_2 = extraout_x1_08;
    }
    else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar69);
      param_2 = extraout_x1_07;
    }
    uVar12 = *in_stack_00000148;
    if (((uint)fStack0000000000000058 & 1) != 0) {
      *(uint *)(in_stack_00000070 + 0x1f0) = uVar12;
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar12;
    *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
    if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x50), lVar22 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    fStack0000000000000058 = 0.0;
    *(float *)(lVar22 + 0x60) = fVar47;
    *(float *)(lVar22 + 100) = fVar62;
    plVar40 = in_stack_00000150;
  }
  goto code_r0x0248d088;
LAB_0248ef74:
  uVar12 = uVar31 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0))
  goto LAB_02491464;
  lVar35 = (long)(int)uVar12;
  lVar34 = lVar22 + lVar35 * 0x178;
  uVar4 = *(uint *)(lVar34 + 100);
  if (*(uint *)(lVar27 + 0x18) <= uVar4)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar32 = *(long *)(lVar34 + 0x38);
  uVar29 = (uint)*(ushort *)(lVar34 + 0x20);
  lVar36 = (long)(int)uVar4;
  lVar27 = lVar27 + lVar36 * 0x5c;
  uVar2 = *(uint *)(lVar27 + 0x3c);
  uVar3 = *(uint *)(lVar27 + 0x40);
  lVar34 = (long)(int)uVar3;
  iVar14 = *(int *)(lVar27 + 0x28);
  iVar15 = *(int *)(lVar27 + 0x2c);
  uVar41 = *(uint *)(lVar27 + 0x68);
  fVar43 = *(float *)(lVar27 + 0x5c);
  fVar61 = *(float *)(lVar27 + 0x60);
  iVar5 = *(int *)(lVar27 + 0x20);
  fVar63 = *(float *)(lVar27 + 0x4c);
  fVar66 = *(float *)(lVar27 + 0x54);
  fVar47 = *(float *)(lVar27 + 0x58);
  fVar53 = *(float *)(lVar27 + 0x6c);
  fVar69 = *(float *)(lVar27 + 0x70);
  fVar62 = *(float *)(lVar27 + 0x74);
  fVar65 = *(float *)(lVar27 + 0x78);
  fVar56 = fVar43 + fVar61;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar61 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar47;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar61 + fVar43 * 0.5) - fVar47 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar56 - fVar47;
      if ((char)unaff_x19[0x1d] != '\0') {
        in_stack_000000c0._4_4_ = fVar56;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar41 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar29 < 0xad) {
      if ((uVar29 != 3) && (uVar29 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar29 != 0xad) && ((uVar29 != 0x200b && (uVar29 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar22 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar6 = *(undefined2 *)(lVar22 + (long)(int)uVar2 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar48 = FUN_016f9f84(uVar6,0);
      if ((uVar48 & 1) == 0) {
        bVar1 = (int)uVar4 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar47 <= fVar43) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar61;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar56;
        }
        goto LAB_0248f194;
      }
      if (((uVar31 == 1) || (uVar4 != uVar25)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar61;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar56;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar29,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar21 = (char)unaff_x19[0x1d];
        fVar61 = -fVar47;
        if (cVar21 != '\0') {
          fVar61 = fVar47;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar47 = 1.0;
        iVar15 = (int)*(char *)(lVar22 + (long)(int)uVar2 * 0x178 + 0x194) +
                 (-iVar5 - ((uint)fStack0000000000000024 & 1)) + iVar15 + -1;
        if (0 < iVar15) {
          fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar15 < 1) {
          iVar15 = 1;
        }
        if (uVar29 == 9) {
LAB_02490fe0:
          fVar47 = 1.0 - fVar47;
        }
        else {
          if (uVar29 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar48 = FUN_016fa418(uVar29,0);
            cVar21 = (char)unaff_x19[0x1d];
            if ((uVar48 & 1) != 0) goto LAB_02490fe0;
          }
          iVar15 = (iVar5 - (~(uint)fStack0000000000000024 & 1)) + iVar14;
        }
        fVar47 = ((fVar43 + fVar61) * fVar47) / (float)iVar15;
        if (cVar21 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar47;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar47;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar47 = fVar53 + fVar62;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar22 + lVar35 * 0x178;
  fVar61 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar47 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar43 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar27 + 0x194) == '\0') goto LAB_0248fabc;
  iVar14 = *(int *)(lVar22 + lVar35 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0248f808;
  fVar46 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar4,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar24 = lVar22 + lVar35 * 0x178;
    *(undefined4 *)(lVar24 + 0x84) = 0;
    *(undefined4 *)(lVar24 + 0xac) = 0;
    *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
    fVar46 = 1.0;
    break;
  case 1:
    fVar65 = *(float *)(lVar22 + lVar35 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar62 = (in_stack_000000c0._4_4_ + fVar65) - *(float *)(in_stack_00000070 + 0x230);
      fVar65 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar24 = lVar22 + lVar35 * 0x178;
    fVar62 = fVar62 - fVar53;
    *(float *)(lVar24 + 0x84) = fVar46 + (fVar65 - fVar53) / fVar62;
    *(float *)(lVar24 + 0xac) = fVar46 + (*(float *)(lVar24 + 0x98) - fVar53) / fVar62;
    *(float *)(lVar24 + 0xd4) = fVar46 + (*(float *)(lVar24 + 0xc0) - fVar53) / fVar62;
    fVar46 = fVar46 + (*(float *)(lVar24 + 0xe8) - fVar53) / fVar62;
    break;
  case 2:
    lVar24 = lVar22 + lVar35 * 0x178;
    fVar65 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar62 = (in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar24 + 0x84) = fVar46 + fVar62 / fVar65;
    *(float *)(lVar24 + 0xac) =
         fVar46 + ((in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar24 + 0xd4) =
         fVar46 + ((in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar46 = fVar46 + ((in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar24 = lVar22 + lVar35 * 0x178;
      *(undefined4 *)(lVar24 + 0x88) = 0;
      *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0xd8) = 0;
      *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar65 = fVar65 - fVar69;
      fVar62 = fVar46 + (*(float *)(lVar24 + 0x74) - fVar69) / fVar65;
      fVar65 = fVar46 + (*(float *)(lVar24 + 0x9c) - fVar69) / fVar65;
      *(float *)(lVar24 + 0x88) = fVar62;
      *(float *)(lVar24 + 0xb0) = fVar65;
      *(float *)(lVar24 + 0xd8) = fVar62;
      *(float *)(lVar24 + 0x100) = fVar65;
      break;
    case 2:
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar62 = fVar46 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar24 + 0x88) = fVar62;
      fVar65 = *(float *)(unaff_x19 + 0x9b);
      fVar69 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar24 + 0xd8) = fVar62;
      fVar62 = fVar46 + (*(float *)(lVar24 + 0x9c) - fVar65) / (fVar69 - fVar65);
      *(float *)(lVar24 + 0xb0) = fVar62;
      *(float *)(lVar24 + 0x100) = fVar62;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar35 * 0x178;
    fVar62 = *(float *)(lVar24 + 0x15c);
    fVar65 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar62) * 0.5;
    fVar69 = fVar46 + *(float *)(lVar24 + 0x88) * fVar62 + fVar65;
    fVar46 = fVar46 + fVar65 + *(float *)(lVar24 + 0xb0) * fVar62;
    *(float *)(lVar24 + 0x84) = fVar69;
    *(float *)(lVar24 + 0xac) = fVar69;
    *(float *)(lVar24 + 0xd4) = fVar46;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar22 + lVar35 * 0x178 + 0xfc) = fVar46;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar35 * 0x178;
    *(undefined4 *)(lVar24 + 0x88) = 0;
    *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar41) {
      lVar24 = lVar22 + lVar35 * 0x178;
      fVar63 = fVar63 - fVar66;
      fVar46 = (*(float *)(lVar24 + 0x74) - fVar66) / fVar63;
      fVar63 = (*(float *)(lVar24 + 0x9c) - fVar66) / fVar63;
      *(float *)(lVar24 + 0x88) = fVar46;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar35 * 0x178;
    fVar46 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar24 + 0x88) = fVar46;
    fVar63 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar24 + 0xb0) = fVar63;
    *(float *)(lVar24 + 0xd8) = fVar63;
    *(float *)(lVar24 + 0x100) = fVar46;
    break;
  case 3:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar35 * 0x178;
    fVar63 = *(float *)(lVar24 + 0x15c);
    fVar62 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar63) * 0.5;
    fVar46 = *(float *)(lVar24 + 0x84) / fVar63 + fVar62;
    fVar62 = fVar62 + *(float *)(lVar24 + 0xd4) / fVar63;
    *(float *)(lVar24 + 0x88) = fVar46;
    *(float *)(lVar24 + 0xb0) = fVar62;
    *(float *)(lVar24 + 0x100) = fVar46;
    *(float *)(lVar24 + 0xd8) = fVar62;
  }
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar35 * 0x178;
  fVar46 = ABS(fVar57) * *(float *)(lVar24 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar24 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar35 * 0x178 + 400) & 1) != 0)) {
    fVar46 = -fVar46;
  }
  lVar24 = lVar22 + lVar35 * 0x178;
  fVar63 = *(float *)(lVar24 + 0x88);
  fVar65 = *(float *)(lVar24 + 0x84);
  fVar62 = -2.1474836e+09;
  if (fVar65 != INFINITY) {
    fVar62 = (float)(int)fVar65;
  }
  fVar69 = *(float *)(lVar24 + 0xd4);
  fVar53 = *(float *)(lVar24 + 0xd8);
  fVar66 = -2.1474836e+09;
  if (fVar63 != INFINITY) {
    fVar66 = (float)(int)fVar63;
  }
  uVar68 = FUN_024e0374(fVar65 - fVar62,fVar63 - fVar66);
  *(undefined4 *)(lVar24 + 0x84) = uVar68;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar53 = fVar53 - fVar66;
  *(float *)(lVar24 + 0x88) = fVar46;
  uVar68 = FUN_024e0374(fVar65 - fVar62,fVar53);
  *(undefined4 *)(lVar22 + lVar35 * 0x178 + 0xac) = uVar68;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar69 = fVar69 - fVar62;
  *(float *)(lVar22 + lVar35 * 0x178 + 0xb0) = fVar46;
  fVar62 = (float)FUN_024e0374(fVar69,fVar53);
  *(float *)(lVar24 + 0xd4) = fVar62;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar24 + 0xd8) = fVar46;
  uVar68 = FUN_024e0374(fVar69,fVar63 - fVar66);
  *(undefined4 *)(lVar22 + lVar35 * 0x178 + 0xfc) = uVar68;
  uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar22 + lVar35 * 0x178 + 0x100) = fVar46;
LAB_0248f808:
  if (((int)uVar12 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar4 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar22 + lVar35 * 0x178;
      *(ulong *)(lVar27 + 0x70) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar27 + 0x70));
      *(float *)(lVar27 + 0x78) = fVar43 + *(float *)(lVar27 + 0x78);
      plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar22 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar22 + lVar35 * 0x178;
      *(ulong *)(lVar27 + 0x98) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar27 + 0x98));
      *(float *)(lVar27 + 0xa0) = fVar43 + *(float *)(lVar27 + 0xa0);
      uVar41 = *(uint *)(lVar22 + 0x18);
LAB_0248fa4c:
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar22 + lVar35 * 0x178;
      *(ulong *)(lVar27 + 0xc0) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar27 + 0xc0));
      *(float *)(lVar27 + 200) = fVar43 + *(float *)(lVar27 + 200);
      if (*(uint *)(lVar22 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar22 + lVar35 * 0x178;
      *(ulong *)(lVar27 + 0xe8) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0xe8) >> 0x20),
                    fVar61 + (float)*(undefined8 *)(lVar27 + 0xe8));
      *(float *)(lVar27 + 0xf0) = fVar43 + *(float *)(lVar27 + 0xf0);
      if (iVar14 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar28)();
      goto LAB_0248fabc;
    }
    if (((int)uVar4 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar12 < uVar41) {
        if (*(uint *)(lVar22 + lVar35 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar27 = lVar22 + lVar35 * 0x178;
        *(ulong *)(lVar27 + 0x70) =
             CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20),
                      fVar61 + (float)*(undefined8 *)(lVar27 + 0x70));
        *(float *)(lVar27 + 0x78) = fVar43 + *(float *)(lVar27 + 0x78);
        if (uVar12 < *(uint *)(lVar22 + 0x18)) {
          lVar27 = lVar22 + lVar35 * 0x178;
          *(ulong *)(lVar27 + 0x98) =
               CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0x98) >> 0x20),
                        fVar61 + (float)*(undefined8 *)(lVar27 + 0x98));
          *(float *)(lVar27 + 0xa0) = fVar43 + *(float *)(lVar27 + 0xa0);
          uVar41 = *(uint *)(lVar22 + 0x18);
          plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar24 = lVar22 + lVar35 * 0x178;
  uVar68 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar24 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar24 + 0x78) = uVar68;
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar35 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar24 + 0xa0) = uVar68;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar35 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar24 + 200) = uVar68;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar35 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar24 + 0xf0) = uVar68;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar27 + 0x194) = 0;
  if (iVar14 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar14 == 1) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + lVar35 * 0x178;
  uVar16 = *(undefined8 *)(lVar27 + 0x11c);
  *(undefined8 *)(lVar27 + 0x11c) =
       CONCAT44(fVar47 + (float)((ulong)uVar16 >> 0x20),fVar61 + (float)uVar16);
  *(float *)(lVar27 + 0x124) = fVar43 + *(float *)(lVar27 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + lVar35 * 0x178;
  *(ulong *)(lVar27 + 0x110) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0x110) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar27 + 0x110));
  *(float *)(lVar27 + 0x118) = fVar43 + *(float *)(lVar27 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + lVar35 * 0x178;
  *(ulong *)(lVar27 + 0x128) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar27 + 0x128) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar27 + 0x128));
  *(float *)(lVar27 + 0x130) = fVar43 + *(float *)(lVar27 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + lVar35 * 0x178;
  *(float *)(lVar27 + 0x134) = fVar61 + *(float *)(lVar27 + 0x134);
  *(ulong *)(lVar27 + 0x138) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar27 + 0x138) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar27 + 0x138));
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
  uVar41 = *(uint *)(lVar24 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar33 = lVar24 + lVar35 * 0x178;
  *(ulong *)(lVar33 + 0x140) =
       CONCAT44(fVar61 + (float)((ulong)*(undefined8 *)(lVar33 + 0x140) >> 0x20),
                fVar61 + (float)*(undefined8 *)(lVar33 + 0x140));
  *(ulong *)(lVar33 + 0x148) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar33 + 0x148) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar33 + 0x148));
  *(float *)(lVar33 + 0x150) = fVar47 + *(float *)(lVar33 + 0x150);
  if (uVar4 == uVar25) {
    uVar25 = *in_stack_00000148 - 1;
    if (uVar12 == uVar25) goto LAB_0248fccc;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar33 = (long)(int)uVar25;
    lVar37 = lVar27 + lVar33 * 0x5c;
    fVar62 = fVar47 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar62;
    *(float *)(lVar37 + 0x58) = fVar61 + *(float *)(lVar37 + 0x58);
    if (uVar41 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar68 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar27 = lVar27 + lVar33 * 0x5c;
    *(float *)(lVar27 + 0x70) = fVar62;
    *(undefined4 *)(lVar27 + 0x6c) = uVar68;
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x50), lVar24 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_02491464;
    uVar25 = *(uint *)(lVar24 + lVar33 * 0x5c + 0x40);
    if (*(uint *)(lVar27 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + lVar33 * 0x5c;
    *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar25 * 0x178 + 0x128);
    *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    uVar25 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar12 == uVar25) {
      lVar27 = *in_stack_00000150;
      if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x50), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar33 = lVar24 + lVar36 * 0x5c;
      fVar62 = fVar47 + *(float *)(lVar33 + 0x54);
      *(ulong *)(lVar33 + 0x4c) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar33 + 0x4c) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar33 + 0x4c));
      *(float *)(lVar33 + 0x54) = fVar62;
      *(float *)(lVar33 + 0x58) = fVar61 + *(float *)(lVar33 + 0x58);
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(lVar33 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar33 + 0x34) * 0x178 + 0x11c);
      lVar24 = lVar24 + lVar36 * 0x5c;
      *(float *)(lVar24 + 0x70) = fVar62;
      *(undefined4 *)(lVar24 + 0x6c) = uVar68;
      lVar27 = *in_stack_00000150;
      if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x50), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_02491464;
      uVar25 = *(uint *)(lVar24 + lVar36 * 0x5c + 0x40);
      if (*(uint *)(lVar27 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar36 * 0x5c;
      *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar27 + (long)(int)uVar25 * 0x178 + 0x128);
      *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar48 = FUN_016f9468(uVar29,0);
  if (((((uVar48 & 1) == 0) && (1 < uVar29 - 0x2010)) && (uVar29 != 0xad)) && (uVar29 != 0x2d)) {
    if (bVar10) {
      if (((uVar31 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*in_stack_00000148 && ((uVar29 == 0x2019 || (uVar29 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar31 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar6 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar48 = FUN_016f9468(uVar6,0);
        if ((uVar48 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar31)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar6 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar48 = FUN_016f9468(uVar6,0);
          if ((uVar48 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar31 != 1) {
LAB_024909a0:
        bVar10 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar48 = FUN_016f93a0(uVar29,0);
      if ((uVar48 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar48 = FUN_016f68bc(uVar29,0);
        if (((uVar29 != 0x200b) && ((uVar48 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar48 = FUN_016f9468(uVar29,0);
      iVar14 = iVar13;
      if ((uVar48 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar14 = uVar31 - 2;
    }
    lVar27 = *in_stack_00000150;
    if (lVar27 == 0) goto LAB_02491464;
    lVar24 = *(long *)(lVar27 + 0x40);
    if (lVar24 == 0) goto LAB_02491464;
    uVar25 = *(uint *)(lVar27 + 0x24);
    iVar15 = *(int *)(lVar24 + 0x18);
    if (iVar15 < (int)(uVar25 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar27 + 0x40),iVar15 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar27 = *in_stack_00000150;
      if (lVar27 == 0) goto LAB_02491464;
    }
    lVar24 = *(long *)(lVar27 + 0x40);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + (long)(int)uVar25 * 0x18;
    *(long **)(lVar24 + 0x20) = unaff_x19;
    *(uint *)(lVar24 + 0x28) = uStack0000000000000114;
    *(int *)(lVar24 + 0x2c) = iVar14;
    *(uint *)(lVar24 + 0x30) = (iVar14 - uStack0000000000000114) + 1;
    lVar24 = *(long *)(lVar27 + 0x50);
    *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar4)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + lVar36 * 0x5c;
    bVar10 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      uStack0000000000000114 = uVar12;
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      lVar27 = *in_stack_00000150;
      if (lVar27 == 0) goto LAB_02491464;
      lVar24 = *(long *)(lVar27 + 0x40);
      if (lVar24 == 0) goto LAB_02491464;
      uVar25 = *(uint *)(lVar27 + 0x24);
      iVar14 = *(int *)(lVar24 + 0x18);
      if (iVar14 < (int)(uVar25 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar27 + 0x40),iVar14 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar27 = *in_stack_00000150;
        if (lVar27 == 0) goto LAB_02491464;
      }
      lVar24 = *(long *)(lVar27 + 0x40);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + (long)(int)uVar25 * 0x18;
      *(long **)(lVar24 + 0x20) = unaff_x19;
      *(uint *)(lVar24 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar24 + 0x2c) = uVar12;
      *(uint *)(lVar24 + 0x30) = uVar31 - uStack0000000000000114;
      lVar24 = *(long *)(lVar27 + 0x50);
      *(int *)(lVar27 + 0x24) = *(int *)(lVar27 + 0x24) + 1;
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar36 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar10 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  uVar25 = *(uint *)(lVar27 + 0x18);
  if (uVar25 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar27 + lVar35 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_0248ff18:
      if (uVar25 <= uVar31 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = *unaff_x19;
      uVar68 = *(undefined4 *)(lVar27 + lStack0000000000000128 + -0x330);
      uVar55 = *(undefined4 *)(lVar27 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar28 = *(code **)(lVar36 + 0x908);
LAB_0249047c:
      (*pcVar28)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar68,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar55);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar27 = *(long *)puVar9;
      }
LAB_024904cc:
      bVar11 = false;
      fVar60 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar11 = false;
    }
  }
  else {
    lVar27 = lVar27 + lVar35 * 0x178;
    iVar14 = *(int *)(lVar27 + 0x68);
    *(int *)(lVar27 + 0x16c) = iVar38;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar14 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar48 = FUN_016f68bc(uVar29,0);
    if ((uVar29 != 0x200b) && ((uVar48 & 1) == 0)) {
      lVar27 = *in_stack_00000150;
      if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar62 = *(float *)(lVar36 + lVar35 * 0x178 + 0x160);
      if (fVar60 <= fVar62) {
        fVar60 = fVar62;
      }
      if (fStack00000000000000c8 <= ABS(fVar46)) {
        fStack00000000000000c8 = ABS(fVar46);
      }
      if ((float)iVar14 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *in_stack_00000150;
          if (lVar27 == 0) goto LAB_02491464;
          lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar36 + 0x15a8);
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar63 = *(float *)(lVar27 + lVar35 * 0x178 + 0x14c);
      fVar62 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar63 = fVar63 + fVar60 * fVar62;
      fStack0000000000000048 = (float)iVar14;
      if (fVar63 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar63;
      }
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar3 < (int)uVar12)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar12 == uVar3) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar48 = FUN_016fa418(uVar29,0);
        if ((uVar48 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + lVar35 * 0x178;
      fStack0000000000000058 = *(float *)(lVar27 + 0x160);
      fStack0000000000000054 = *(float *)(lVar27 + 0x11c);
      bVar11 = fVar60 != 0.0;
      fVar62 = fStack0000000000000058;
      if (bVar11) {
        fVar62 = fVar60;
      }
      fVar60 = fVar62;
      _bStack000000000000005c = *(uint *)(lVar27 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar62 = fVar46;
      if (bVar11) {
        fVar62 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar62;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0))
      {
        if (uVar12 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + lVar35 * 0x178;
          lVar36 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar27 + 0x128);
          uVar55 = *(undefined4 *)(lVar27 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar12 == uVar2) || ((int)uVar3 <= (int)uVar12)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar48 = FUN_016f68bc(uVar29,0);
      if ((*in_stack_00000150 != 0) && (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0))
      {
        if (uVar29 == 0x200b || (uVar48 & 1) != 0) {
          lVar36 = lVar34;
          if (*(uint *)(lVar27 + 0x18) <= uVar3)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar36 = lVar35;
          if (*(uint *)(lVar27 + 0x18) <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar27 = lVar27 + lVar36 * 0x178;
        uVar68 = *(undefined4 *)(lVar27 + 0x128);
        uVar55 = *(undefined4 *)(lVar27 + 0x160);
        pcVar28 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0))
      {
        uVar25 = *(uint *)(lVar27 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar31)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar48 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar27 + lStack0000000000000128)
                            ,0);
      if ((uVar48 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0)) {
          if (uVar12 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + lVar35 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar27 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar27 + 0x160));
            puVar9 = System_Threading_Mutex_TypeInfo;
            lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar27 = *(long *)puVar9;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar11 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar32 == 0) goto LAB_02491464;
  uVar25 = *(uint *)(lVar27 + lVar35 * 0x178 + 400);
  fVar62 = (float)FUN_026fd1f0(lVar32 + 0x50,0);
  if ((uVar25 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar31 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar27 + lStack0000000000000128 + -0x330);
      pcVar28 = *(code **)(*unaff_x19 + 0x908);
      fVar47 = fStack0000000000000084 * fVar62 +
               *(float *)(lVar27 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar28)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar68,
                 fVar47,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    bVar7 = false;
  }
  else {
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar36 = *(long *)(lVar27 + 0x38), lVar36 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar36 + lVar35 * 0x178 + 0x174) = iVar38;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar36 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar3 < (int)uVar12)) ||
       (bVar7 || !bVar1)) {
LAB_02490668:
      if (!bVar7) goto LAB_02490a9c;
    }
    else {
      if (uVar12 == uVar3) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar48 = FUN_016fa418(uVar29,0);
        if ((uVar48 & 1) != 0) goto LAB_02490668;
        lVar27 = *in_stack_00000150;
        if (lVar27 == 0) goto LAB_02491464;
      }
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + lVar35 * 0x178;
      fStack0000000000000038 = *(float *)(lVar27 + 0x60);
      fStack0000000000000084 = *(float *)(lVar27 + 0x160);
      fStack0000000000000034 = *(float *)(lVar27 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar27 + 0x11c);
      in_stack_00000068._4_4_ = fVar62 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar25 = *in_stack_00000148;
    if (uVar25 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar27 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar27 != 0) {
          if (uVar12 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + lVar35 * 0x178;
            lVar34 = *unaff_x19;
            uVar68 = *(undefined4 *)(lVar27 + 0x128);
            fVar47 = *(float *)(lVar27 + 0x14c);
LAB_024907e8:
            pcVar28 = *(code **)(lVar34 + 0x908);
LAB_02490a64:
            fVar47 = fVar62 * fStack0000000000000084 + fVar47;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar12 == uVar2) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar48 = FUN_016f68bc(uVar29,0);
      if ((*in_stack_00000150 != 0) && (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0))
      {
        uVar25 = *(uint *)(lVar27 + 0x18);
        if (uVar29 == 0x200b || (uVar48 & 1) != 0) {
          if (uVar25 <= uVar3)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar34 = lVar35;
          if (uVar25 <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar27 = lVar27 + lVar34 * 0x178;
        fVar47 = *(float *)(lVar27 + 0x14c);
        uVar68 = *(undefined4 *)(lVar27 + 0x128);
        pcVar28 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)uVar25) {
      lVar27 = *in_stack_00000150;
      if ((lVar27 != 0) && (lVar36 = *(long *)(lVar27 + 0x38), lVar36 != 0)) {
        if (uVar31 < *(uint *)(lVar36 + 0x18)) {
          if (*(float *)(lVar36 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar63 = *(float *)(lVar36 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar48 = FUN_024aa280(fVar47 + fVar63,fStack0000000000000034,0);
            if ((uVar48 & 1) != 0) {
              uVar25 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar27 = *in_stack_00000150;
            if (lVar27 == 0) goto LAB_02491464;
          }
          lVar27 = *(long *)(lVar27 + 0x38);
          if (lVar27 != 0) {
            uVar25 = *(uint *)(lVar27 + 0x18);
            if ((int)uVar12 <= (int)uVar3) goto LAB_02490a40;
            if (uVar3 < uVar25) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar12 < (int)uVar25) {
      iVar14 = FUN_02681c0c(lVar32,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar31)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = *(long *)(lVar22 + lStack0000000000000128 + -0x130);
      if (lVar27 == 0) goto LAB_02491464;
      iVar15 = FUN_02681c0c(lVar27,0);
      if (iVar14 != iVar15) {
        if (*in_stack_00000150 != 0) {
          lVar27 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0))
      {
        if (uVar31 - 2 < *(uint *)(lVar27 + 0x18)) {
          lVar34 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar27 + lStack0000000000000128 + -0x330);
          fVar47 = *(float *)(lVar27 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar7 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  uVar25 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar25 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar27 + lVar35 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar27 + lVar35 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar3 < (int)uVar12)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar12 == uVar3) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar48 = FUN_016fa418(uVar29,0);
        if ((uVar48 & 1) != 0) goto LAB_02490b04;
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar34 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar34 = *(long *)puVar9;
      }
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      uVar25 = (uint)*(undefined8 *)(lVar27 + 0x18);
      if (uVar25 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar34 = *(long *)(lVar34 + 0xb8);
      lVar36 = lVar27 + lVar35 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar36 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar36 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar34 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar36 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar34 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar34 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar34 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar25 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + lVar35 * 0x178;
    fVar62 = *(float *)(lVar27 + 0x128);
    fVar66 = *(float *)(lVar27 + 0x188);
    uVar17 = *(undefined8 *)(lVar27 + 0x17c);
    fVar53 = *(float *)(lVar27 + 0x184);
    uVar16 = *(undefined8 *)(lVar27 + 0x184);
    fVar69 = *(float *)(lVar27 + 0x18c);
    fVar47 = *(float *)(lVar27 + 0x11c);
    fVar63 = *(float *)(lVar27 + 0x148);
    fVar65 = *(float *)(lVar27 + 0x150);
    in_stack_00000158 = uVar17;
    fStack0000000000000160 = fVar53;
    fStack0000000000000164 = fVar66;
    in_stack_00000168 = fVar69;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar48 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar27 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar48 & 1) == 0) {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar27);
      }
      fVar62 = fVar62 + (float)in_stack_00001798;
      fVar47 = fVar47 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar63 = fVar63 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar47 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar47;
      }
      if (fVar65 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar65 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar62) {
        fStack0000000000000098 = fVar62;
      }
      if (in_stack_000000a0 <= fVar63) {
        in_stack_000000a0 = fVar63;
      }
    }
    else {
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar27);
      }
      fVar47 = (fVar47 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar65 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar65;
      }
      if (in_stack_000000a0 <= fVar63) {
        in_stack_000000a0 = fVar63;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar47,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar65 - fVar69;
      fStack0000000000000098 = fVar62 + fVar53;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar63 + fVar66;
      fStack00000000000000a8 = fVar47;
      in_stack_00001790 = uVar17;
      in_stack_00001798 = uVar16;
      in_stack_000017a0 = fVar69;
    }
    if (((*in_stack_00000148 == 1) || (uVar12 == uVar2)) ||
       (((int)uVar3 <= (int)uVar12 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar12 = *in_stack_00000148;
  iVar13 = iVar13 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar12 <= (int)uVar31;
  uVar25 = uVar4;
  uVar31 = uVar31 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar22 = *in_stack_00000150;
  if (lVar22 != 0) {
    iVar38 = uVar4 + 1;
    plVar39 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar22 + 0x18) = uVar12;
    lVar27 = unaff_x19[0xd3];
    *(int *)(lVar22 + 0x2c) = iVar38;
    iVar38 = iStack00000000000000a4;
    if ((int)uVar12 < 1) {
      iVar38 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar38 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar27;
    *(int *)(lVar22 + 0x24) = iVar38;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar48 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar48 & 1) == 0)) {
LAB_02491468:
      lVar22 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar22 = unaff_x19[0xda];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar22 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar22 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar22 = *in_stack_00000150;
                        if (lVar22 != 0) {
                          lVar34 = 0;
                          lVar27 = 0;
                          do {
                            uVar48 = lVar27 + 1;
                            if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar48) goto LAB_02491468;
                            lVar22 = *(long *)(lVar22 + 0x60);
                            if (lVar22 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar48)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar22 + lVar34 + 0x70,0);
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar48)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar16 = *(undefined8 *)(lVar22 + lVar27 * 8 + 0x28);
                            if (*(int *)(*plVar40 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar50 = FUN_0268b4e0(uVar16,0,0);
                            if ((uVar50 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar22 + 0x18) <= uVar48)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar22 + lVar34 + 0x70,1,0);
                              }
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar27 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                              break;
                              if (*(uint *)(lVar35 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266b9c4(lVar22,*(undefined8 *)(lVar35 + lVar34 + 0x80),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar27 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                              break;
                              if (*(uint *)(lVar35 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266bbc8(lVar22,*(undefined8 *)(lVar35 + lVar34 + 0x98),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar27 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                              break;
                              if (*(uint *)(lVar35 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266bc74(lVar22,*(undefined8 *)(lVar35 + lVar34 + 0xa0),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar27 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar35 = *(long *)(*in_stack_00000150 + 0x60), lVar35 == 0))
                              break;
                              if (*(uint *)(lVar35 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266c1dc(lVar22,*(undefined8 *)(lVar35 + lVar34 + 0xa8),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar48)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar27 * 8 + 0x28);
                              if ((lVar22 == 0) || (lVar22 = FUN_024eefa0(lVar22,0), lVar22 == 0))
                              break;
                              FUN_0266ed90(lVar22,0);
                            }
                            lVar22 = *in_stack_00000150;
                            lVar27 = lVar27 + 1;
                            lVar34 = lVar34 + 0x50;
                          } while (lVar22 != 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


