/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$get_isUISelectActive
ENTRY_POINT: 02494e04
PROGRAM: Lovesick-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_isUISelectActive(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  double __x;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 uVar26;
  char cVar27;
  uint in_w8;
  undefined4 *puVar28;
  long lVar29;
  float *pfVar30;
  long lVar31;
  code *pcVar32;
  float *pfVar33;
  long in_x10;
  long lVar34;
  long lVar35;
  uint uVar36;
  long in_x11;
  long lVar37;
  long lVar38;
  long lVar39;
  long *unaff_x19;
  byte unaff_w20;
  uint uVar40;
  long unaff_x21;
  long *plVar41;
  uint uVar42;
  long *unaff_x22;
  uint unaff_w24;
  long lVar43;
  long *plVar44;
  long unaff_x25;
  long unaff_x27;
  long lVar45;
  long *plVar46;
  undefined1 *unaff_x28;
  uint unaff_w29;
  int iVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  ulong uVar56;
  double dVar57;
  float fVar58;
  ulong uVar59;
  float fVar60;
  uint uVar61;
  ulong uVar62;
  float in_s5;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float unaff_s10;
  float fVar68;
  float fVar69;
  float unaff_s12;
  float fVar70;
  float fVar71;
  ulong unaff_d13;
  undefined4 uVar72;
  float fVar73;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  uint uStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  uint uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float fStack0000000000000088;
  float in_stack_00000090;
  float fStack0000000000000098;
  uint uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  float in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f4;
  float in_stack_00000128;
  float fStack0000000000000134;
  long *in_stack_00000138;
  int in_stack_00000140;
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
  undefined8 in_stack_00000888;
  undefined4 in_stack_00000890;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x02494e04:
  *(uint *)(in_x11 + 100) = in_w8;
  *(int *)(in_x11 + 0x68) = (int)unaff_x19[0x95];
  if (((unaff_w20 & 1) == 0) &&
     ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
    lVar34 = *(long *)(in_x10 + 0x50);
    if (lVar34 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar34 + 0x18) <= in_w8)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    /* try { // try from 02494e74 to 02594e7b has its CatchHandler @ 0249541c */
    *(int *)(lVar34 + (int)in_w8 * unaff_x25 + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar34 = *(long *)(in_x10 + 0x50);
    if (lVar34 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= in_w8)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar34 + (int)in_w8 * unaff_x25 + 0x24) == 1) goto LAB_02494e68;
  }
  fVar64 = (float)unaff_d13;
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar55 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar60 = *(float *)(unaff_x19 + 199);
    fVar58 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar55 = fVar64 * fVar55 * fVar58;
    fVar58 = fVar55 * (float)(int)(fVar60 / fVar55);
    uVar56 = (ulong)(uint)fVar58;
    if (fVar58 <= fVar60) {
      fVar58 = fVar60 + fVar55;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar58;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar60 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar60 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar58 = *(float *)(unaff_x19 + 199);
      fVar69 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] != 0) {
        fVar55 = unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc);
        fVar58 = fVar58 + fVar55 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                   fVar64 * (unaff_s10 + fVar60 * fVar69) +
                                   fStack00000000000000c8 *
                                   (in_stack_000000c0 +
                                   fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar58;
        goto joined_r0x02494fac;
      }
      goto LAB_0249920c;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar58 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar64 * unaff_s10 +
             fStack00000000000000c8 *
             (in_stack_000000c0 + in_s5 + *(float *)(*in_stack_00000138 + 0x1ac)));
    uVar56 = (ulong)(uint)fVar58;
    fVar58 = *(float *)(unaff_x19 + 199) - fVar58;
    *(float *)(unaff_x19 + 199) = fVar58;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar55 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar56 = (ulong)(uint)fVar55;
      fVar58 = fVar58 - fVar55;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar55 = *(float *)(unaff_x19 + 199);
    fVar58 = fVar55 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                      fStack00000000000000c8 * (in_s5 + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar58;
joined_r0x02494fac:
    if ((unaff_w29 != 0) || (uVar56 = (ulong)(uint)fVar55, in_stack_000017bc == 0x200b)) {
      fVar55 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar56 = (ulong)(uint)fVar55;
      fVar58 = fVar58 + fVar55;
      goto LAB_02495058;
    }
  }
  lVar34 = *unaff_x22;
  if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  uVar19 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar19 <= uVar15) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar31 + (int)uVar15 * unaff_x27 + 0x144) = fVar58;
  iVar16 = (int)unaff_x27;
  uVar61 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) || ((float)uVar15 == in_stack_00000078._4_4_)
       ) goto LAB_024950bc;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto FUN_02495710;
      uVar56 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar15 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
LAB_024950bc:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar55 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar55)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar55);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar55;
        *(float *)(unaff_x19 + 0x9a) = fVar55 + *(float *)(unaff_x19 + 0x9a);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar34 = *(long *)puVar10;
        }
        lVar31 = *(long *)(lVar34 + 0xb8);
        if (*(int *)(lVar31 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar34 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar31 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar31 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar34 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar34 = *(long *)(lVar34 + 0xb8);
          *(float *)(lVar34 + 0x7bc) = fVar55 + *(float *)(lVar34 + 0x7bc);
          *(float *)(lVar34 + 0x800) = fVar55 + *(float *)(lVar34 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar34 + 0x788),0x378);
          FUN_013b86dc(lVar34 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar60 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar58 = *(float *)((long)unaff_x19 + 0x4c4) - fVar60;
    fVar55 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar58 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar55 = fVar58;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar55;
    fVar69 = *(float *)(unaff_x19 + 0x98);
    if (unaff_x28[0xf34] == '\0') {
      in_stack_000017b8 = fVar55;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      unaff_x28[0xf34] = 1;
    }
    lVar34 = *unaff_x22;
    if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x50), lVar31 == 0)) goto LAB_0249920c;
    uVar15 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar31 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar31 + (int)uVar15 * unaff_x25;
    *(int *)(lVar43 + 0x34) = (int)unaff_x19[0x92];
    iVar14 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar14;
    *(int *)(lVar43 + 0x38) = iVar14;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar43 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar14 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar14;
    *(int *)(lVar43 + 0x40) = iVar14;
    *(int *)(lVar43 + 0x24) = (*(int *)(lVar43 + 0x3c) - *(int *)(lVar43 + 0x34)) + 1;
    *(undefined4 *)(lVar43 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar34 = *(long *)(lVar34 + 0x38);
    if (lVar34 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar72 = *(undefined4 *)(lVar34 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
    lVar31 = lVar31 + (int)uVar15 * unaff_x25;
    *(float *)(lVar31 + 0x70) = fVar58;
    *(undefined4 *)(lVar31 + 0x6c) = uVar72;
    lVar34 = *unaff_x22;
    if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x50), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = *(long *)(lVar34 + 0x38);
    if (lVar34 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar72 = *(undefined4 *)(lVar34 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
    fVar69 = fVar69 - fVar60;
    lVar31 = lVar31 + (int)*(uint *)(unaff_x19 + 0x94) * unaff_x25;
    *(float *)(lVar31 + 0x78) = fVar69;
    *(undefined4 *)(lVar31 + 0x74) = uVar72;
    lVar34 = *unaff_x22;
    if ((lVar34 == 0) || (lVar43 = *(long *)(lVar34 + 0x50), lVar43 == 0)) goto LAB_0249920c;
    lVar22 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar43 + lVar22 * unaff_x25;
    *(float *)(lVar31 + 0x44) = *(float *)(lVar31 + 0x74) - fVar64 * in_stack_00000128;
    *(float *)(lVar31 + 0x5c) = fStack00000000000000d4;
    if (*(int *)(lVar31 + 0x24) == 1) {
      *(int *)(lVar43 + lVar22 * unaff_x25 + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*in_stack_00000138 == 0) || (lVar31 = *(long *)(lVar34 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    lVar45 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar19 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar19 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(char *)(lVar31 + lVar45 * unaff_x27 + 0x194) == '\0') &&
       (lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar19 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar55 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fStack00000000000000c8 *
              (in_stack_000000c0 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac))
             - *(float *)((long)unaff_x19 + 0x2a4));
    fVar64 = -fVar55;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar64 = fVar55;
    }
    lVar43 = lVar43 + lVar22 * unaff_x25;
    *(float *)(lVar43 + 0x58) = *(float *)(lVar31 + lVar45 * unaff_x27 + 0x144) + fVar64;
    fVar64 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar43 + 0x48) = fStack0000000000000050 + (fVar69 - fVar58);
    *(float *)(lVar43 + 0x4c) = fVar69;
    uVar56 = (ulong)(uint)(0.0 - fVar64);
    *(float *)(lVar43 + 0x50) = 0.0 - fVar64;
    *(float *)(lVar43 + 0x54) = fVar58;
    plVar41 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar46 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar34 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar14 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar14;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar34 == 0) || (*(long *)(lVar34 + 0x50) == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)(lVar34 + 0x50) + 0x18) <= iVar14) {
          FUN_024d6e60();
          lVar34 = unaff_x19[0x6c];
          if (lVar34 == 0) goto LAB_0249920c;
        }
        lVar34 = *(long *)(lVar34 + 0x38);
        if (lVar34 == 0) goto LAB_0249920c;
        if (*in_stack_00000148 < *(uint *)(lVar34 + 0x18)) {
          fVar64 = *(float *)(lVar34 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
            fVar55 = 0.0;
            if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
              fVar55 = *(float *)((long)unaff_x19 + 0x2c4);
            }
            uVar26 = 0;
            fVar55 = *(float *)(unaff_x19 + 0x9a) +
                     fVar64 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                     fStack0000000000000054 *
                     (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                     fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar55);
          }
          else {
            if ((in_stack_000017bc == 0x2029) || (fVar55 = 0.0, in_stack_000017bc == 10)) {
              fVar55 = *(float *)((long)unaff_x19 + 0x2c4);
            }
            uVar26 = 1;
            fVar55 = *(float *)(unaff_x19 + 0x9a) +
                     *(float *)(unaff_x19 + 0x57) +
                     fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar55);
          }
          *(float *)(unaff_x19 + 0x9a) = fVar55;
          *(undefined1 *)((long)unaff_x19 + 700) = uVar26;
          lVar34 = *plVar41;
          if (*(int *)(lVar34 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar34 = *plVar41;
          }
          uVar20 = *(undefined8 *)(*(long *)(lVar34 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x99) = fVar64;
          uVar56 = NEON_rev64(uVar20,4);
          unaff_x19[0x98] = uVar56;
          *(float *)(unaff_x19 + 199) =
               *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
          FUN_024d69d4();
          FUN_024d69d4();
          *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
          fStack0000000000000058 = 1.4013e-45;
          bStack000000000000005c = 1;
          goto LAB_02492630;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar61 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
  }
LAB_0249572c:
  uVar15 = *in_stack_00000148;
  if (uVar19 <= uVar15) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar31 + (int)uVar15 * unaff_x27 + 0x194) != '\0') {
    lVar31 = lVar31 + (int)uVar15 * unaff_x27;
    uVar59 = *(ulong *)(lVar31 + 0x11c);
    uVar56 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar59 ^ (uVar59 ^ uVar56) &
                  CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar59 >> 0x20)),
                           -(uint)((float)uVar56 < (float)uVar59));
    uVar59 = *(ulong *)(in_stack_00000070 + 0x238);
    uVar56 = *(ulong *)(lVar31 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         uVar56 ^ (uVar56 ^ uVar59) &
                  CONCAT44(-(uint)((float)(uVar56 >> 0x20) < (float)(uVar59 >> 0x20)),
                           -(uint)((float)uVar56 < (float)uVar59));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar61 || ((1 << (ulong)(uVar61 & 0x1f) & 0x2c00U) == 0)))) {
    lVar31 = *(long *)(lVar34 + 0x58);
    if (lVar31 == 0) goto LAB_0249920c;
    iVar14 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar31 + 0x18) < iVar14) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar34 + 0x58),iVar14,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar34 = *in_stack_00000150;
      if (lVar34 == 0) goto LAB_0249920c;
    }
    lVar31 = *(long *)(lVar34 + 0x58);
    if (lVar31 == 0) goto LAB_0249920c;
    uVar19 = *(uint *)(unaff_x19 + 0x95);
    lVar43 = (long)(int)uVar19;
    uVar15 = *(uint *)(lVar31 + 0x18);
    if (uVar15 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar22 = lVar31 + lVar43 * 0x14;
    fVar55 = *(float *)(lVar22 + 0x30);
    uVar56 = (ulong)(uint)fVar55;
    *(undefined4 *)(lVar22 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar64 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar55 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar64 = fVar55;
    }
    *(float *)(lVar22 + 0x30) = fVar64;
    uVar61 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar61 == 0 && uVar19 == 0) {
      *(uint *)(lVar31 + lVar43 * 0x14 + 0x20) = uVar61;
      unaff_x22 = in_stack_00000150;
    }
    else {
      uVar36 = uVar61 - 1;
      if (0 < (int)uVar61) {
        lVar34 = *(long *)(lVar34 + 0x38);
        if (lVar34 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar19 != *(uint *)(lVar34 + (long)(int)uVar36 * (long)iVar16 + 0x68)) {
          if (uVar19 - 1 < uVar15) {
            *(uint *)(lVar31 + 0x20 + (long)(int)(uVar19 - 1) * 0x14 + 4) = uVar36;
            *(uint *)(lVar31 + 0x20 + lVar43 * 0x14) = uVar61;
            unaff_x22 = in_stack_00000150;
            goto LAB_024957b0;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
      }
      unaff_x22 = in_stack_00000150;
      if ((float)uVar61 == in_stack_00000078._4_4_) {
        *(float *)(lVar31 + lVar43 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_024957b0:
  puVar10 = System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] != '\0') ||
     ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
    if ((unaff_w29 == 0) &&
       (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
        if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
             (0xfd < in_stack_000017bc - 0x1101)) || (uVar59 = FUN_024e95f0(0), (uVar59 & 1) != 0))
           && ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
        goto LAB_024958f0;
        lVar34 = FUN_024e94b0(0);
        if ((lVar34 == 0) || (*(long *)(lVar34 + 0x10) == 0)) goto LAB_0249920c;
        uVar59 = FUN_0129aa60(*(long *)(lVar34 + 0x10),&stack0x00000880,
                              *(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                             );
        if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
          lVar34 = FUN_024e94b0(0);
          if (((lVar34 == 0) || (*unaff_x22 == 0)) ||
             (lVar31 = *(long *)(*unaff_x22 + 0x38), lVar31 == 0)) goto LAB_0249920c;
          if (*in_stack_00000148 + 1 < *(uint *)(lVar31 + 0x18)) {
            if (*(long *)(lVar34 + 0x18) != 0) {
              in_stack_00000880 =
                   (uint)*(ushort *)
                          (lVar31 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar16 + 0x20);
              uVar24 = FUN_0129aa60(*(long *)(lVar34 + 0x18),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((uVar59 & 1) != 0) goto LAB_02495adc;
              if ((uVar24 & 1) == 0) goto LAB_02495bc4;
              if ((bStack000000000000005c & 1) != 0) goto joined_r0x02495af4;
              goto LAB_024959d4;
            }
            goto LAB_0249920c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        in_stack_00000880 = in_stack_000017bc;
        if ((uVar59 & 1) == 0) {
LAB_02495bc4:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          bStack000000000000005c = 0;
          goto LAB_02495b70;
        }
LAB_02495adc:
        if ((uint)unaff_x21 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
        goto LAB_02495b70;
joined_r0x02495af4:
        if (unaff_w29 != 0) goto LAB_02495af8;
      }
      else {
LAB_024958f0:
        if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
          bStack000000000000005c = 0;
          goto LAB_02495b70;
        }
        if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
        goto joined_r0x02495af4;
LAB_02495af8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      bStack000000000000005c = 1;
    }
    else {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_024958f0;
      if (((in_stack_000017bc - 0x2007 < 0x29) &&
          ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
         ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_02495868;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      bStack000000000000005c = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe78) = 0xffffffff;
    }
  }
LAB_02495b70:
  plVar41 = (long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar46 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
LAB_02492630:
  fVar64 = (float)unaff_d13;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar34 = unaff_x19[0x8e];
  if (lVar34 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar34 + 0x18)) {
      if (*(uint *)(lVar34 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar15 = *(uint *)(lVar34 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar15 == 0) goto LAB_02495f1c;
      if (5 < in_stack_00000140) {
        uVar20 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar21 = FUN_0176eb1c(&stack0x00001788,0);
        uVar20 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar20,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar21,0);
        if (*(int *)(*plVar46 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar46);
        }
        FUN_026610e4(uVar20,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar15 == 0x3c)) goto code_r0x02492440;
      if ((*in_stack_00000150 != 0) && (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 != 0))
      {
        if (*in_stack_00000148 < *(uint *)(lVar34 + 0x18)) {
          lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar34 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar34 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar34 + 0x38);
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      goto LAB_0249920c;
    }
LAB_02495f1c:
    fVar64 = (float)uVar56;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar64 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar55 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar64 < fVar55) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar58 = (*(float *)((long)unaff_x19 + 0x234) - fVar64) * 0.5;
        if (fVar58 <= DAT_028aa298) {
          fVar58 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar64;
        fVar58 = (fVar64 + fVar58) * 20.0 + 0.5;
        fVar64 = DAT_02958220;
        if (fVar58 != INFINITY) {
          fVar64 = (float)(int)fVar58 / 20.0;
        }
        if (fVar55 <= fVar64) {
          fVar64 = fVar55;
        }
        goto LAB_02495fd8;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar20 = FUN_0176eb1c(in_stack_00000038,0);
      uVar21 = FUN_017840ac(in_stack_00000040,0);
      uVar20 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar20,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar21,
                            0);
      if (*(int *)(*plVar46 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar46);
      }
      FUN_02660dac(uVar20,0);
    }
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_02496098;
    }
    lVar34 = *plVar41;
    if (*(int *)(lVar34 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar34 = *plVar41;
    }
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    lVar34 = **(long **)(lVar34 + 0xb8);
    if (lVar34 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    iVar16 = *(int *)(lVar34 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
    goto LAB_0249920c;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar34 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7d94(lVar34 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar11 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    iVar14 = (int)unaff_x19[0x4d];
    fStack00000000000000c8 =
         **(float **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    _in_stack_000000c0 =
         *(undefined8 *)
          (*(float **)
            (*(long *)
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ + 0xb8
            ) + 1);
    lVar34 = unaff_x19[0xe2];
    _in_stack_00000090 = _in_stack_000000c0;
    fStack0000000000000098 = fStack00000000000000c8;
    if (iVar14 < 0x401) {
      if (iVar14 == 0x100) {
        if (lVar34 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar20 = *(undefined8 *)(lVar34 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar31 = *(long *)(*in_stack_00000150 + 0x58), lVar31 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar31 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar64 = *(float *)(lVar31 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
        }
        else {
          fVar64 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar34 + 0x2c);
        fVar64 = (0.0 - fVar64) - fStack0000000000000020;
      }
      else if (iVar14 == 0x200) {
        if (lVar34 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar34 + 0x18) == 1) || (*(int *)(lVar34 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000098 = (*(float *)(lVar34 + 0x20) + *(float *)(lVar34 + 0x2c)) * 0.5;
        uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar34 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar34 + 0x24) +
                          (float)*(undefined8 *)(lVar34 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar34 = *(long *)(*in_stack_00000150 + 0x58), lVar34 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar34 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar34 = lVar34 + (long)(int)uStack000000000000002c * 0x14;
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar64 = ((fStack0000000000000020 + *(float *)(lVar34 + 0x28) + *(float *)(lVar34 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar64 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar14 != 0x400) goto LAB_024965d0;
        if (lVar34 == 0) goto LAB_0249920c;
        if (*(int *)(lVar34 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar20 = *(undefined8 *)(lVar34 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar31 = *(long *)(*in_stack_00000150 + 0x58), lVar31 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar31 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          in_stack_000017b8 = *(float *)(lVar31 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar34 + 0x20);
        fVar64 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      _in_stack_00000090 = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar64);
    }
    else if (iVar14 == 0x800) {
      if (lVar34 == 0) goto LAB_0249920c;
      if ((*(int *)(lVar34 + 0x18) == 1) || (*(int *)(lVar34 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar64 = ((float)*(undefined8 *)(lVar34 + 0x24) + (float)*(undefined8 *)(lVar34 + 0x30)) * 0.5
      ;
      fStack0000000000000098 =
           fStack0000000000000030 + 0.0 +
           (*(float *)(lVar34 + 0x20) + *(float *)(lVar34 + 0x2c)) * 0.5;
      _in_stack_00000090 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar34 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20)) * 0.5 + 0.0,fVar64 + 0.0
                   );
    }
    else {
      if (iVar14 == 0x1000) {
        if (lVar34 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar34 + 0x18) == 1) || (*(int *)(lVar34 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar64 = (float)*(undefined8 *)(lVar34 + 0x24) + (float)*(undefined8 *)(lVar34 + 0x30);
        fVar55 = (float)((ulong)*(undefined8 *)(lVar34 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar34 + 0x20) + *(float *)(lVar34 + 0x2c)) * 0.5;
      }
      else {
        if (iVar14 != 0x2000) goto LAB_024965d0;
        if (lVar34 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar34 + 0x18) == 1) || (*(int *)(lVar34 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar64 = (float)*(undefined8 *)(lVar34 + 0x24) + (float)*(undefined8 *)(lVar34 + 0x30);
        fVar55 = (float)((ulong)*(undefined8 *)(lVar34 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar34 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar34 + 0x20) + *(float *)(lVar34 + 0x2c)) * 0.5;
      }
      fVar64 = fVar64 * 0.5;
      _in_stack_00000090 =
           CONCAT44(fVar55 * 0.5 + 0.0,
                    fVar64 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
    }
LAB_024965d0:
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    uVar20 = FUN_0285a188(unaff_x19[0xe4],0);
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar10);
    }
    uVar56 = FUN_0268b4e0(uVar20,0,0);
    lVar34 = FUN_024c933c();
    if (lVar34 == 0) goto LAB_0249920c;
    FUN_026a125c(lVar34,0);
    *(float *)(unaff_x19 + 0xe1) = fVar64;
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar14 = FUN_02859798(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    fVar55 = (float)FUN_028598f0(unaff_x19[0xe4],0);
    __x = DAT_028aa048;
    dVar57 = modf(DAT_028aa048,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar58 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar58 = fVar58 + 1.0;
      }
    }
    else {
      fVar58 = 255.0;
    }
    dVar57 = modf(__x,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar60 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar60 = fVar60 + 1.0;
      }
    }
    else {
      fVar60 = 255.0;
    }
    dVar57 = modf(__x,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar69 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar69 = fVar69 + 1.0;
      }
    }
    else {
      fVar69 = 255.0;
    }
    dVar57 = modf(__x,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar49 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar49 = fVar49 + 1.0;
      }
    }
    else {
      fVar49 = 255.0;
    }
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    modf(__x,(double *)&stack0x00000880);
    if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037825d3 == '\0') {
      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
      DAT_037825d3 = '\x01';
    }
    lVar34 = *(long *)puVar11;
    if (*(int *)(lVar34 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar34 = *(long *)puVar11;
    }
    puVar28 = *(undefined4 **)(lVar34 + 0xb8);
    uVar59 = (ulong)(uint)puVar28[1];
    uVar24 = (ulong)(uint)puVar28[2];
    uVar62 = (ulong)(uint)puVar28[3];
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar28,uVar59,uVar24,uVar62,&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*plVar41 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar34 = *in_stack_00000150;
    if (lVar34 == 0) goto LAB_0249920c;
    uVar15 = *in_stack_00000148;
    if ((int)uVar15 < 1) {
      iStack00000000000000ac = 0;
      iVar16 = 0;
      goto LAB_02498c58;
    }
    lVar34 = *(long *)(lVar34 + 0x38);
    fVar64 = ABS(fVar64);
    fVar48 = 1.0;
    if ((uVar56 & 1) == 0) {
      fVar48 = fVar64;
    }
    if (lVar34 == 0) goto LAB_0249920c;
    bVar9 = false;
    bVar12 = false;
    bVar8 = false;
    bVar13 = false;
    uStack0000000000000060 =
         (int)fVar58 & 0xffU | ((int)fVar60 & 0xffU) << 8 | ((int)fVar69 & 0xffU) << 0x10 |
         (int)fVar49 << 0x18;
    fStack00000000000000d0 = *(float *)(*(long *)(*plVar41 + 0xb8) + 0x15a8);
    fStack00000000000000cc = 0.0;
    fStack0000000000000058 = fStack00000000000000b0;
    _bStack000000000000005c = 0.0;
    fStack0000000000000034 = 0.0;
    fStack0000000000000088 = 0.0;
    fStack0000000000000030 = 0.0;
    uVar19 = 0;
    iVar47 = 0;
    lVar31 = 0x2e0;
    fVar60 = 0.0;
    fVar58 = 0.0;
    iStack00000000000000ac = 0;
    fStack0000000000000020 = 0.0;
    fStack000000000000004c = 0.0;
    fStack00000000000000a4 = fStack00000000000000b0;
    fStack00000000000000a8 = fStack00000000000000b4;
    fStack0000000000000050 = fStack00000000000000b4;
    fStack0000000000000054 = (float)uStack00000000000000a0;
    in_stack_00000078._4_4_ = fStack00000000000000b4;
    fStack0000000000000080 = fStack00000000000000b0;
    in_stack_00000068._4_4_ = uStack00000000000000a0;
    uVar61 = 0;
    uVar36 = 1;
    goto LAB_02496a50;
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar59 = FUN_024d0688();
  if (((uVar59 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar15,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar34 = *(long *)(unaff_x19[0x6c] + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  if (*(uint *)(lVar34 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = (long)(int)uVar19;
  cVar27 = *(char *)(lVar34 + lVar43 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar31 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar19) {
    uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar15 == 0x2026) {
      lVar22 = unaff_x19[0xc9];
      lVar34 = lVar34 + lVar43 * unaff_x27;
      *(undefined4 *)(lVar34 + 0x2c) = 0;
      *(long *)(lVar34 + 0x30) = lVar22;
      *(long *)(lVar34 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar34 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar34 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar19 + 1);
    }
    else if (uVar15 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar22 = FUN_024b11ac(*in_stack_00000138,0), lVar22 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar22,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar34 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      unaff_w20 = 1;
      *(ulong *)(lVar34 + lVar43 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar19 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  in_stack_000017bc = uVar15;
  if (((int)uVar19 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar15 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar34 + (long)(int)uVar19 * (long)iVar16;
    *(undefined1 *)(lVar34 + 0x194) = 0;
    *(undefined2 *)(lVar34 + 0x20) = 0x200b;
    *(undefined4 *)(lVar34 + 100) = 0;
    *in_stack_00000148 = uVar19 + 1;
    goto LAB_02492630;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = unaff_s12;
  if (iVar14 == 0) {
    uVar19 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar19 >> 4 & 1) == 0) {
      if ((uVar19 >> 3 & 1) == 0) {
        if ((uVar19 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar59 = FUN_016f92d4(uVar15,0);
          if ((uVar59 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_016f95a8(uVar15,0);
            uVar15 = uVar15 & 0xffff;
            fStack00000000000000f4 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar59 = FUN_016f9218(uVar15,0);
        if ((uVar59 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_016f9724(uVar15,0);
          goto LAB_02492a0c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar59 = FUN_016f92d4(uVar15,0);
      if ((uVar59 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_016f95a8(uVar15,0);
LAB_02492a0c:
        uVar15 = uVar15 & 0xffff;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar15;
    if (iVar14 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar14 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
      lVar43 = *(long *)(lVar34 + 0x40);
      unaff_x19[0xd2] = lVar43;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar34 + 0x48);
      if ((lVar43 == 0) || (lVar34 = FUN_024ebfa0(lVar43,0), lVar34 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar34,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar43 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar43 == 0) goto LAB_02492630;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar34 = *plVar41;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar34 = *plVar41;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar34 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar64 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar14 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar58 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar55 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar55 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar55 = (fVar64 / (float)iVar14) * fVar58 * fVar55;
      iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar64 = *(float *)(unaff_x19 + 0x3c);
      if (iVar14 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar58 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar69 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar69 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar60 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar43 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar43 + 0x20),0);
        fVar48 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar43 + 0x20) == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar43 + 0x2c);
        fVar70 = (float)FUN_026fd668(*(long *)(lVar43 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar67 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar55 * fVar67 * fVar65 * fStack0000000000000134;
        fVar69 = (fVar64 / (float)iVar14) * fVar58 * fVar69;
        fVar64 = fVar69 * (fVar60 / fVar48) * fVar50 * fVar70;
        fVar69 = fVar69 / fVar64;
        fVar49 = fVar69 * fVar49;
        fVar55 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar69 = fVar69 * fVar55;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar58 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar43 + 0x20) == 0) goto LAB_0249920c;
        fVar69 = *(float *)(lVar43 + 0x2c);
        fVar60 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar60 = 1.0;
        }
        fVar48 = (float)FUN_026fd668(*(long *)(lVar43 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar70 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar55 * fVar50 * fVar70 * fStack0000000000000134;
        fVar64 = (fVar64 / (float)iVar14) * fVar58 * fVar60 * fVar69 * fVar48;
        fVar69 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar34 = unaff_x19[0x6c];
      unaff_x19[200] = lVar43;
      if ((lVar34 == 0) || (lVar43 = *(long *)(lVar34 + 0x38), lVar43 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar43 + 0x2c) = 1;
      *(float *)(lVar43 + 0x160) = fVar64;
      in_stack_00000128 = 0.0;
      *(long *)(lVar43 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar43 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar43 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar31;
      goto LAB_02492e14;
    }
    lVar34 = *in_stack_00000150;
    fVar55 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar55 = fVar64;
    }
    fStack0000000000000134 = 0.0;
    if (lVar34 == 0) goto LAB_0249920c;
    fVar49 = 0.0;
    fVar69 = 0.0;
  }
  else {
    if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(lVar34 + 0x18);
    if (uVar15 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = *(long *)(lVar34 + (int)uVar19 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar31;
    if (lVar31 == 0) goto LAB_02492630;
    lVar43 = lVar34 + (int)uVar19 * unaff_x27;
    lVar31 = *(long *)(lVar43 + 0x38);
    unaff_x19[0x1f] = lVar31;
    unaff_x19[0x22] = *(long *)(lVar43 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar43 + 0x58);
    if (unaff_w20 == 0) {
LAB_02492ab4:
      if (lVar31 == 0) goto LAB_0249920c;
      fVar55 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar31 + 0x50,0);
      lVar34 = unaff_x19[0x1f];
    }
    else {
      lVar43 = unaff_x19[0x8e];
      if (lVar43 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar43 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar19 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar15 <= uVar19 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar31 == 0) goto LAB_0249920c;
      fVar55 = *(float *)(lVar34 + (long)(int)(uVar19 - 1) * (long)iVar16 + 0x60);
      iVar14 = FUN_026fd110(lVar31 + 0x50,0);
      lVar34 = *in_stack_00000138;
    }
    if (lVar34 == 0) goto LAB_0249920c;
    fVar60 = (float)FUN_026fd120(lVar34 + 0x50,0);
    fVar58 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar58 = unaff_s12;
    }
    fVar69 = 0.0;
    fVar49 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar69 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar34 = unaff_x19[200];
    if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0)) goto LAB_0249920c;
    fVar48 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar50 = *(float *)(lVar34 + 0x2c);
    fVar64 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar70 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar67 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar34 = unaff_x19[0x6c];
    if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar31 + 0x2c) = 0;
    fVar58 = ((fStack00000000000000f4 * fVar55) / (float)iVar14) * fVar60 * fVar58;
    fVar64 = fVar58 * fVar48 * fVar50 * fVar64;
    *(float *)(lVar31 + 0x160) = fVar64;
    uVar15 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar58 * fVar70 * fVar67 * fStack0000000000000134;
    if (uVar15 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar31 = unaff_x19[0xe0];
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = *(long *)(lVar31 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar31 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar55 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar55 = fVar64;
    }
  }
  lVar34 = *(long *)(lVar34 + 0x38);
  if (lVar34 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar34 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar34 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar34 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar34 = *(long *)(unaff_x19[0x6c] + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar34 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar34 = *(long *)(unaff_x19[0x6c] + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar34 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar34 = *(long *)(unaff_x19[0x6c] + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar34 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar34 = lVar34 + (int)uVar15 * unaff_x27;
  *(undefined4 *)(lVar34 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar34 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar34 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar34 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar34 = *(long *)(unaff_x19[200] + 0x20), lVar34 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar34,0);
  puVar10 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_016f68bc(in_stack_000017bc,0);
    unaff_w29 = uVar15 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    unaff_s10 = 0.0;
    fVar60 = 0.0;
    fVar58 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar19 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= uVar19 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = *(long *)(lVar34 + (long)(int)(uVar19 + 1) * (long)iVar16 + 0x30);
      if ((((lVar34 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar31 = *(long *)(*in_stack_00000138 + 0x128), lVar31 == 0)) ||
         (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar15 | *(int *)(lVar34 + 0x28) << 0x10;
      uVar56 = FUN_0129eff4(lVar31,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar72 = 0;
      if ((uVar56 & 1) == 0) {
        unaff_s10 = 0.0;
        fVar60 = 0.0;
        fVar58 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar58 = *(float *)(in_stack_000016d8 + 0x14);
        fVar60 = *(float *)(in_stack_000016d8 + 0x18);
        unaff_s10 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar72 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar19 = *in_stack_00000148;
    }
    else {
      uVar72 = 0;
      unaff_s10 = 0.0;
      fVar60 = 0.0;
      fVar58 = 0.0;
    }
    if (0 < (int)uVar19) {
      if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= (uint)((long)(int)uVar19 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = *(long *)(lVar34 + ((long)(int)uVar19 + -1) * unaff_x27 + 0x30);
      if (((lVar34 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar31 = *(long *)(*in_stack_00000138 + 0x128), lVar31 == 0 ||
          (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar34 + 0x28) | uVar15 << 0x10;
      uVar56 = FUN_0129eff4(lVar31,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar56 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar58 = (float)FUN_024bb1bc(fVar58,fVar60,unaff_s10,uVar72,
                                         *(undefined4 *)(in_stack_000016d8 + 0x28),
                                         *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                         *(undefined4 *)(in_stack_000016d8 + 0x30),
                                         *(undefined4 *)(in_stack_000016d8 + 0x34),0),
           in_stack_000016d8 == 0)) goto LAB_0249920c;
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
    }
    *(float *)((long)unaff_x19 + 0x2f4) = unaff_s10;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar50 = *(float *)(unaff_x19 + 199);
    fVar48 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar50 = fVar50 - fVar55 * fVar48 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar50;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar50 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar48 = *(float *)(unaff_x19 + 0x55);
  fStack0000000000000080 = 0.0;
  if (fVar48 != 0.0) {
    fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar70 = (float)FUN_026fd464(&stack0x00001770,0);
    fStack0000000000000080 =
         (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
         (fVar48 * 0.5 - fVar55 * (fVar50 * 0.5 + fVar70));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
  }
  if (((cVar27 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar34 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar56 = FUN_02681b9c(lVar34,0,0);
    fVar50 = 0.0;
    if ((uVar56 & 1) != 0) {
      lVar34 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar34 == 0) goto LAB_0249920c;
      uVar56 = FUN_0267e1d8(lVar34,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      fVar50 = 0.0;
      if ((uVar56 & 1) != 0) {
        lVar34 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar34 == 0) goto LAB_0249920c;
        fVar48 = (float)FUN_0267f610(lVar34,*(undefined4 *)
                                             (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar70 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar50 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        fVar50 = fVar50 * fVar48 * fVar70 * 0.25;
        if (fVar48 < in_stack_00000128 + fVar50) {
          in_stack_00000128 = fVar48 - fVar50;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    in_stack_000000c0 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar34 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar56 = FUN_02681b9c(lVar34,0,0);
    in_stack_000000c0 = 0.0;
    if ((uVar56 & 1) != 0) {
      lVar34 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar34 == 0) goto LAB_0249920c;
      uVar56 = FUN_0267e1d8(lVar34,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      if ((uVar56 & 1) != 0) {
        lVar34 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar34 == 0) goto LAB_0249920c;
        uVar56 = FUN_0267e1d8(lVar34,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        if ((uVar56 & 1) != 0) {
          lVar34 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar34 == 0) goto LAB_0249920c;
          fVar48 = (float)FUN_0267f610(lVar34,*(undefined4 *)
                                               (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar70 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar50 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0)
          ;
          fVar50 = fVar50 * fVar48 * fVar70 * 0.25;
          if (fVar48 < in_stack_00000128 + fVar50) {
            in_stack_00000128 = fVar48 - fVar50;
          }
          goto LAB_024934bc;
        }
      }
    }
    fVar50 = 0.0;
  }
LAB_024934bc:
  fVar65 = *(float *)(unaff_x19 + 199);
  fVar48 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar65 = fVar65 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar55 * (fVar58 + ((fVar48 - in_stack_00000128) - fVar50));
  fVar58 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar70 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar55 * (fVar60 + in_stack_00000128 + fVar58)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar58 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar67 = fVar70 - fVar55 * (in_stack_00000128 + in_stack_00000128 + fVar58);
  fVar58 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar48 = fVar65 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar55 * (fVar50 + fVar50 + in_stack_00000128 + in_stack_00000128 + fVar58);
  fVar58 = fVar65;
  fVar60 = fVar48;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar27 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar63 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar58 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar53 = fVar63 * fVar55 * (fVar50 + in_stack_00000128 + fVar58);
    fVar58 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar60 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar70 = fVar70 + 0.0;
    fVar67 = fVar67 + 0.0;
    fVar63 = fVar63 * fVar55 * (((fVar58 - fVar60) - in_stack_00000128) - fVar50);
    fVar60 = fVar48 + fVar63;
    fVar58 = fVar65 + fVar53;
    fVar52 = (fVar53 - fVar63) * 0.5;
    fVar65 = (fVar65 + fVar63) - fVar52;
    fVar48 = (fVar48 + fVar53) - fVar52;
    fVar58 = fVar58 - fVar52;
    fVar60 = fVar60 - fVar52;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar53 = 0.0;
    fVar54 = 0.0;
    fVar66 = 0.0;
    fVar52 = 0.0;
    fVar73 = fVar67;
    fVar63 = fVar70;
    fStack00000000000000e8 = fVar58;
    fStack00000000000000ec = fVar65;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar68 = (fVar48 + fVar65) * 0.5;
    fVar71 = (fVar67 + fVar70) * 0.5;
    fVar70 = fVar70 - fVar71;
    fVar52 = 0.0;
    fVar63 = fVar70;
    fVar51 = (float)FUN_02692df0(fVar58 - fVar68,_uStack0000000000000060,0);
    fVar52 = fVar52 + 0.0;
    fVar67 = fVar67 - fVar71;
    fVar53 = 0.0;
    fVar58 = fVar67;
    fVar65 = (float)FUN_02692df0(fVar65 - fVar68,_uStack0000000000000060,0);
    fVar53 = fVar53 + 0.0;
    fVar66 = 0.0;
    fVar48 = (float)FUN_02692df0(fVar48 - fVar68,_uStack0000000000000060,0);
    fVar48 = fVar68 + fVar48;
    fVar70 = fVar71 + fVar70;
    fVar66 = fVar66 + 0.0;
    fVar54 = 0.0;
    fVar60 = (float)FUN_02692df0(fVar60 - fVar68,_uStack0000000000000060,0);
    fVar60 = fVar68 + fVar60;
    fVar67 = fVar71 + fVar67;
    fVar54 = fVar54 + 0.0;
    fVar73 = fVar71 + fVar58;
    fVar63 = fVar71 + fVar63;
    fStack00000000000000e8 = fVar68 + fVar51;
    fStack00000000000000ec = fVar68 + fVar65;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar34 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar55;
  if (lVar34 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar34 + 0x120) = fVar73;
  *(float *)(lVar34 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar34 + 0x124) = fVar53;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar34 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar34 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar34 + 0x114) = fVar63;
  *(float *)(lVar34 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar34 + 0x118) = fVar52;
  if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar34 + 0x128) = fVar48;
  *(float *)(lVar34 + 300) = fVar70;
  *(float *)(lVar34 + 0x130) = fVar66;
  if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar34 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar34 + 0x134) = fVar60;
  *(float *)(lVar34 + 0x138) = fVar67;
  *(float *)(lVar34 + 0x13c) = fVar54;
  if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  unaff_x21 = (long)(int)uVar15;
  if (*(uint *)(lVar34 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar34 + unaff_x21 * unaff_x27;
  *(int *)(lVar31 + 0x140) = (int)unaff_x19[199];
  fVar60 = *(float *)(unaff_x19 + 0x9a);
  uVar56 = (ulong)(uint)fVar60;
  fVar58 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar31 + 0x15c) = (fVar48 - fStack00000000000000ec) / (fVar63 - fVar73);
  *(float *)(lVar31 + 0x14c) = (fStack0000000000000134 - fVar60) + fVar58;
  fVar49 = fVar49 * fVar55;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar49 = fVar49 / fStack00000000000000f4;
    fVar69 = (fVar69 * fVar55) / fStack00000000000000f4;
  }
  else {
    fVar69 = fVar69 * fVar55;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar12 = unaff_w29 != 0;
  fVar49 = fVar58 + fVar49;
  bVar13 = uVar15 != unaff_w24;
  if (bVar13 && bVar12) {
    fVar58 = *(float *)(unaff_x19 + 0x98);
    lVar34 = lVar34 + unaff_x21 * unaff_x27;
    *(float *)(lVar34 + 0x154) = fVar58;
    fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar34 + 0x148) = fVar58 - fVar60;
    *(float *)(lVar34 + 0x158) = fVar69;
    *(float *)(unaff_x19 + 0x97) = fVar58 - fVar60;
    fVar69 = fVar69 - fVar60;
    *(float *)(lVar34 + 0x150) = fVar69;
  }
  else {
    fVar69 = fVar58 + fVar69;
    fVar48 = fVar49;
    fVar70 = fVar69;
    if (fVar58 != 0.0) {
      fVar48 = (fVar49 - fVar58) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar70 = (fVar69 - fVar58) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar48 <= fVar49) {
        fVar48 = fVar49;
      }
      if (fVar69 <= fVar70) {
        fVar70 = fVar69;
      }
    }
    lVar34 = lVar34 + unaff_x21 * unaff_x27;
    fVar58 = fVar48;
    if (fVar48 <= *(float *)(unaff_x19 + 0x98)) {
      fVar58 = *(float *)(unaff_x19 + 0x98);
    }
    fVar67 = fVar70;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar70) {
      fVar67 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar67;
    fVar69 = fVar69 - fVar60;
    *(float *)(unaff_x19 + 0x98) = fVar58;
    *(float *)(lVar34 + 0x154) = fVar48;
    *(float *)(lVar34 + 0x158) = fVar70;
    *(float *)(lVar34 + 0x148) = fVar49 - fVar60;
    *(float *)(unaff_x19 + 0x97) = fVar49 - fVar60;
    *(float *)(lVar34 + 0x150) = fVar69;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar69;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar13 || !bVar12) {
      *(float *)(unaff_x19 + 0x96) = fVar58;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar58 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar60 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar55 * fVar60) / fStack00000000000000f4;
      uVar56 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar58 <= fStack00000000000000f4) {
        fVar58 = fStack00000000000000f4;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar58;
      goto LAB_02493948;
    }
  }
  else {
LAB_02493948:
    if ((!bVar13 || !bVar12) && (float)uVar56 == 0.0) {
      fVar58 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar49) {
        fVar58 = fVar49;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar58;
    }
  }
  lVar34 = *in_stack_00000150;
  if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  if (*(uint *)(lVar31 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)uVar15 * unaff_x27;
  *(undefined1 *)(lVar31 + 0x194) = 0;
  uVar19 = *(uint *)(unaff_x19 + 0x4e);
  if (((in_stack_000017bc != 9) &&
      ((((unaff_w29 != 0 || (in_stack_000017bc == 3)) || (in_stack_000017bc == 0x200b)) ||
       (in_stack_000017bc == 0xad)))) &&
     (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x63c) != 1)))) {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar58 = (float)uVar56;
      fVar64 = 0.0;
      if ((0.0 < fVar58) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      uVar56 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar58)) + fVar64)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar15;
        }
        plVar46 = (long *)StringLiteral_302;
        plVar41 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar34 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar59 = FUN_02681b9c(lVar34,0,0);
        if ((uVar59 & 1) != 0) {
          plVar44 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar20,*(undefined8 *)(*plVar44 + 0x560));
          lVar34 = unaff_x19[0x5c];
          if (lVar34 == 0) goto LAB_0249920c;
          *(int *)(lVar34 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar34,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar44 = (long *)unaff_x19[0x5c];
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar15);
        goto LAB_02492630;
      }
    }
    if ((((0x22 < in_stack_000017bc - 0x2007) ||
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
        (1 < in_stack_000017bc - 10)) && (in_stack_000017bc != 0xa0)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar56 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar56 & 1) == 0) goto LAB_02494548;
    }
    if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0x2060)) {
      lVar34 = *in_stack_00000150;
      if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x50), lVar31 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
      *(int *)(lVar34 + 0x20) = *(int *)(lVar34 + 0x20) + 1;
    }
LAB_02494548:
    if (in_stack_000017bc != 0xa0) goto LAB_02494abc;
    if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x50), lVar34 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    goto LAB_024949c4;
  }
  *(undefined1 *)(lVar31 + 0x194) = 1;
  pfVar30 = _fStack0000000000000088;
  pfVar33 = _fStack0000000000000098;
  if (unaff_w20 != 0) {
    lVar34 = *(long *)(lVar34 + 0x50);
    if (lVar34 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    pfVar33 = (float *)(lVar34 + 0x60);
    pfVar30 = (float *)(lVar34 + 100);
  }
  fVar60 = *pfVar33;
  fVar69 = *pfVar30;
  fVar58 = *(float *)(unaff_x19 + 0x6b);
  fVar49 = *(float *)(unaff_x19 + 199);
  fStack00000000000000d4 = (in_stack_00000090 - fVar60) - fVar69;
  bVar12 = true;
  if ((fVar58 <= fStack00000000000000d4) && (bVar12 = false, !NAN(fVar58))) {
    bVar12 = fVar58 == -1.0;
  }
  if (!bVar12) {
    fStack00000000000000d4 = fVar58;
  }
  fVar58 = 0.0;
  if ((char)unaff_x19[0x1d] == '\0') {
    fVar58 = (float)FUN_026fd474(&stack0x00001770,0);
    uVar56 = (ulong)*(uint *)(unaff_x19 + 0x9a);
  }
  fVar67 = *(float *)((long)unaff_x19 + 0x4c4);
  fVar48 = *(float *)((long)unaff_x19 + 0x2cc);
  fVar70 = (float)uVar56;
  if (in_stack_000017bc != 0xad) {
    fVar64 = fVar55;
  }
  fVar65 = 0.0;
  if ((0.0 < fVar70) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
    fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
  }
  fVar65 = (*(float *)(unaff_x19 + 0x96) - (fVar67 - fVar70)) + fVar65;
  uVar15 = *in_stack_00000148;
  if (fStack00000000000000a4 < fVar65) {
    if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
      *(uint *)((long)unaff_x19 + 0x2dc) = uVar15;
    }
    plVar46 = (long *)StringLiteral_302;
    plVar41 = (long *)System_Threading_Mutex_TypeInfo;
    uVar20 = DAT_02941c08;
    if ((char)unaff_x19[0x46] != '\0') {
      fVar63 = *(float *)(unaff_x19 + 0x58);
      if (((fVar63 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar70)) &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar64 = *(float *)((long)unaff_x19 + 0x2b4) +
                 ((in_stack_00000018._4_4_ - fVar65) / (float)(int)unaff_x19[0x94]) /
                 fStack0000000000000054;
        if (fVar64 <= fVar63) {
          fVar64 = fVar63;
        }
        goto LAB_024964c8;
      }
      fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar70 = *(float *)(unaff_x19 + 0x49);
      uVar56 = (ulong)(uint)fVar70;
      if ((fVar70 < fVar65) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar64 = (fVar65 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar64 <= DAT_028aa298) {
          fVar64 = DAT_028aa298;
        }
        fVar55 = (fVar65 - fVar64) * 20.0 + 0.5;
        fVar64 = DAT_02958220;
        if (fVar55 != INFINITY) {
          fVar64 = (float)(int)fVar55 / 20.0;
        }
        if (fVar64 <= fVar70) {
          fVar64 = fVar70;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar65;
        goto LAB_02495fd8;
      }
    }
    switch((int)unaff_x19[0x5b]) {
    case 1:
      lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar34 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar34 = *plVar41;
      }
      lVar31 = *(long *)(lVar34 + 0xb8);
      lVar34 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
      if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
        lVar34 = FUN_00d5941c(lVar34);
      }
      plVar46 = (long *)StringLiteral_302;
      lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
      if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
        lVar34 = FUN_00d5941c();
      }
      piVar23 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar34 + 0x80) + 0xa0);
      if (*piVar23 == 0) goto LAB_02495f00;
      lVar34 = *plVar41;
      if (*(int *)(lVar34 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar34 = *plVar41;
      }
      FUN_013b8de4(*(long *)(lVar34 + 0xb8) + 0x11f0,&stack0x00000880,
                   *(undefined8 *)
                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                  );
      memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
      iVar14 = FUN_024d66ec();
      goto LAB_02494364;
    default:
      goto 
      UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited;
    case 3:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      break;
    case 5:
      if ((uVar15 != 0) && (-1 < (int)in_stack_00001788)) {
        fVar64 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar64 - fVar67 <= fStack00000000000000a4) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          uVar56 = *(ulong *)(*(long *)(*plVar41 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar34 = NEON_rev64(uVar56,4);
          unaff_x19[0x98] = lVar34;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          goto LAB_02492630;
        }
        goto LAB_0249408c;
      }
      in_stack_00001788 = 0xffffffff;
      *in_stack_00000148 = 0;
      in_stack_000017a8 = uVar20;
      goto LAB_024944c4;
    case 6:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      plVar46 = (long *)StringLiteral_302;
      lVar34 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar59 = FUN_02681b9c(lVar34,0,0);
      if ((uVar59 & 1) != 0) {
        plVar44 = (long *)unaff_x19[0x5c];
        uVar20 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar44 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar44 + 0x558))(plVar44,uVar20,*(undefined8 *)(*plVar44 + 0x560));
        lVar34 = unaff_x19[0x5c];
        if (lVar34 == 0) goto LAB_0249920c;
        *(int *)(lVar34 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar34,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar44 = (long *)unaff_x19[0x5c];
        if (plVar44 == (long *)0x0) goto LAB_0249920c;
        (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
      goto LAB_0249408c;
    }
LAB_02493ec0:
    plVar46 = (long *)StringLiteral_302;
    in_stack_00001788 = FUN_024d66ec();
    goto LAB_0249408c;
  }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
  plVar41 = (long *)System_Threading_Mutex_TypeInfo;
  fVar70 = 1.0 - fVar48;
  uVar56 = (ulong)(uint)fVar70;
  fVar58 = ABS(fVar49) + fVar58 * fVar70 * fVar64;
  fVar64 = _DAT_0294c6e8;
  if ((uVar19 & 0x18) == 0) {
    fVar64 = 1.0;
  }
  if (fVar58 <= fVar64 * fStack00000000000000d4) goto LAB_02494950;
  if (((char)unaff_x19[0x5a] == '\0') || (uVar15 == *(uint *)(unaff_x19 + 0x92))) {
    if (((char)unaff_x19[0x46] == '\0') ||
       ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_02493e34:
      iVar14 = (int)unaff_x19[0x5b];
      if (iVar14 == 1) {
        lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar34 = *plVar41;
        }
        plVar46 = (long *)StringLiteral_302;
        lVar31 = *(long *)(lVar34 + 0xb8);
        lVar34 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
          lVar34 = FUN_00d5941c(lVar34);
        }
        lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
        if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
          lVar34 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar34 + 0x80) + 0xa0);
        if (*piVar23 == 0) goto LAB_02495f00;
        lVar34 = *plVar41;
        if (*(int *)(lVar34 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar34 = *plVar41;
        }
        FUN_013b8de4(*(long *)(lVar34 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000c70,&stack0x00000880,0x378);
        goto LAB_02494358;
      }
      if (iVar14 == 6) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar46 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        lVar34 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar59 = FUN_02681b9c(lVar34,0,0);
        if ((uVar59 & 1) != 0) {
          plVar44 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar20,*(undefined8 *)(*plVar44 + 0x560));
          lVar34 = unaff_x19[0x5c];
          if (lVar34 == 0) goto LAB_0249920c;
          *(int *)(lVar34 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar34,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar44 = (long *)unaff_x19[0x5c];
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        goto LAB_02494484;
      }
      if (iVar14 != 3) goto LAB_02494950;
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      goto LAB_02493ec0;
    }
    fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
    if (fVar48 < fVar49) {
      fVar55 = fVar58 / fVar70;
      if (fVar48 <= 0.0) {
        fVar55 = fVar58;
      }
      fVar48 = fVar48 + (fVar58 - fVar64 * (fStack00000000000000d4 + DAT_02958218)) / fVar55;
      goto LAB_0249929c;
    }
    fVar48 = *(float *)((long)unaff_x19 + 0x1dc);
    uVar56 = (ulong)(uint)fVar48;
    fVar49 = *(float *)(unaff_x19 + 0x49);
    if (fVar48 <= fVar49) goto LAB_02493e34;
LAB_02499210:
    fVar64 = (fVar48 - *(float *)(unaff_x19 + 0x47)) * 0.5;
    if (fVar64 <= DAT_028aa298) {
      fVar64 = DAT_028aa298;
    }
    *(float *)((long)unaff_x19 + 0x234) = fVar48;
    fVar55 = (fVar48 - fVar64) * 20.0 + 0.5;
    fVar64 = DAT_02958220;
    if (fVar55 != INFINITY) {
      fVar64 = (float)(int)fVar55 / 20.0;
    }
    if (fVar64 <= fVar49) {
      fVar64 = fVar49;
    }
LAB_02495fd8:
    *(float *)((long)unaff_x19 + 0x1dc) = fVar64;
    return;
  }
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  in_stack_00001788 = FUN_024d66ec();
  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
    lVar34 = *in_stack_00000150;
    if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar49 = *(float *)(unaff_x19 + 0x9a);
    fVar48 = 0.0;
    if ((0.0 < fVar49) && (fVar48 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar48 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar48 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
             *(float *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
             (fVar48 - *(float *)((long)unaff_x19 + 0x4c4)) +
             fStack0000000000000054 * (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4))
    ;
  }
  else {
    lVar34 = unaff_x19[0x6c];
    *(undefined1 *)((long)unaff_x19 + 700) = 1;
    if (lVar34 == 0) goto LAB_0249920c;
    fVar49 = *(float *)(unaff_x19 + 0x9a);
    fVar48 = *(float *)(unaff_x19 + 0x57) + fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
  }
  puVar10 = System_Threading_Mutex_TypeInfo;
  lVar34 = *(long *)(lVar34 + 0x38);
  if (lVar34 == 0) goto LAB_0249920c;
  uVar61 = *(uint *)((long)unaff_x19 + 0x48c);
  if ((*(uint *)(lVar34 + 0x18) <= uVar61) ||
     (uVar36 = uVar61 - 1, *(uint *)(lVar34 + 0x18) <= uVar36))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar56 = (ulong)(uint)(fVar48 + *(float *)(unaff_x19 + 0x96));
  fVar70 = (fVar48 + *(float *)(unaff_x19 + 0x96) + fVar49) -
           *(float *)(lVar34 + (int)uVar61 * unaff_x27 + 0x158);
  if (((in_stack_00000068._4_1_ & 1) == 0 &&
       *(short *)(lVar34 + (long)(int)uVar36 * (long)iVar16 + 0x20) == 0xad) &&
     ((fVar70 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
    *in_stack_00000148 = uVar36;
LAB_024947b4:
    in_stack_000017a8 = CONCAT44(0x2d,uVar36);
    in_stack_00001788 = in_stack_00001788 - 1;
    in_stack_00000068._4_1_ = 0;
LAB_02494938:
    unaff_s12 = 1.0;
    plVar46 = (long *)StringLiteral_302;
    plVar41 = (long *)System_Threading_Mutex_TypeInfo;
    goto LAB_02492630;
  }
  if (*(short *)(lVar34 + (int)uVar61 * unaff_x27 + 0x20) == 0xad) {
    in_stack_00000068._4_1_ = 1;
    goto LAB_02494938;
  }
  if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
    fVar48 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
    if ((fVar49 <= fVar48) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
      fVar48 = *(float *)((long)unaff_x19 + 0x1dc);
      uVar56 = (ulong)(uint)fVar48;
      fVar49 = *(float *)(unaff_x19 + 0x49);
      if ((fVar49 < fVar48) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
      goto LAB_02499210;
      goto LAB_024946c0;
    }
LAB_024992ac:
    fVar55 = fVar58;
    if (0.0 < fVar48) {
      fVar55 = fVar58 / (1.0 - fVar48);
    }
    fVar48 = fVar48 + (fVar58 - fVar64 * (fStack00000000000000d4 + DAT_02958218)) / fVar55;
LAB_0249929c:
    if (fVar49 <= fVar48) {
      fVar48 = fVar49;
    }
    *(float *)((long)unaff_x19 + 0x2cc) = fVar48;
    return;
  }
LAB_024946c0:
  lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(lVar34 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar34 = *(long *)puVar10;
  }
  iVar14 = *(int *)(*(long *)(lVar34 + 0xb8) + 0xe78);
  if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) &&
     (((bStack000000000000005c ^ 1) & 1) == 0)) {
    if (*(int *)(lVar34 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00001788 = FUN_024d66ec();
    if ((unaff_x19[0x6c] == 0) || (lVar34 = *(long *)(unaff_x19[0x6c] + 0x38), lVar34 == 0))
    goto LAB_0249920c;
    uVar36 = *in_stack_00000148 - 1;
    if (*(uint *)(lVar34 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fStack0000000000000034 = (float)iVar14;
    if (*(short *)(lVar34 + (long)(int)uVar36 * (long)iVar16 + 0x20) == 0xad) {
      *in_stack_00000148 = uVar36;
      goto LAB_024947b4;
    }
  }
  if (fVar70 <= fStack00000000000000a4) {
    uVar56 = unaff_d13;
    FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,fStack00000000000000cc,
                 fStack00000000000000d4,fStack0000000000000048);
    bStack000000000000005c = 1;
    in_stack_00000068._4_1_ = 0;
    fStack0000000000000058 = 1.4013e-45;
    goto LAB_02494938;
  }
  if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
    *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  }
  plVar46 = (long *)StringLiteral_302;
  plVar41 = (long *)System_Threading_Mutex_TypeInfo;
  if ((char)unaff_x19[0x46] != '\0') {
    fVar49 = *(float *)(unaff_x19 + 0x58);
    if ((fVar49 < *(float *)((long)unaff_x19 + 0x2b4)) &&
       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
      fVar64 = *(float *)((long)unaff_x19 + 0x2b4) +
               ((in_stack_00000018._4_4_ - fVar70) / (float)((int)unaff_x19[0x94] + 1)) /
               fStack0000000000000054;
      if (fVar64 <= fVar49) {
        fVar64 = fVar49;
      }
LAB_024964c8:
      *(float *)((long)unaff_x19 + 0x2b4) = fVar64;
      return;
    }
    fVar48 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
    if ((fVar48 < fVar49) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
    goto LAB_024992ac;
    fVar48 = *(float *)((long)unaff_x19 + 0x1dc);
    uVar56 = (ulong)(uint)fVar48;
    fVar49 = *(float *)(unaff_x19 + 0x49);
    if ((fVar49 < fVar48) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
    goto LAB_02499210;
  }
  switch((int)unaff_x19[0x5b]) {
  case 0:
  case 2:
  case 4:
    uVar56 = unaff_d13;
    FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,fStack00000000000000cc,
                 fStack00000000000000d4,fStack0000000000000048);
    break;
  case 1:
    lVar34 = *(long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(lVar34 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar34 = *plVar41;
    }
    lVar31 = *(long *)(lVar34 + 0xb8);
    lVar34 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
    if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
      lVar34 = FUN_00d5941c(lVar34);
    }
    lVar34 = *(long *)(*(long *)(lVar34 + 0xc0) + 8);
    if ((*(byte *)(lVar34 + 0x132) & 1) == 0) {
      lVar34 = FUN_00d5941c();
    }
    piVar23 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar34 + 0x80) + 0xa0);
    if (*piVar23 == 0) {
      in_stack_00000068._4_1_ = 0;
LAB_02495f00:
      in_stack_000017a8 = DAT_02941c08;
      unaff_s12 = 1.0;
      in_stack_00000148[0] = 0;
      in_stack_00000148[1] = 0;
      in_stack_00001788 = 0xffffffff;
      goto LAB_02492630;
    }
    lVar34 = *plVar41;
    if (*(int *)(lVar34 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar34 = *plVar41;
    }
    FUN_013b8de4(*(long *)(lVar34 + 0xb8) + 0x11f0,&stack0x00000880,
                 *(undefined8 *)
                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                );
    memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
    iVar14 = FUN_024d66ec();
    in_stack_00000068._4_1_ = 0;
LAB_02494364:
    unaff_s12 = 1.0;
    iVar47 = *(int *)((long)unaff_x19 + 0x48c) + -1;
    *(int *)((long)unaff_x19 + 0x48c) = iVar47;
    in_stack_000017a8 = CONCAT44(0x2026,iVar47);
    in_stack_00000140 = in_stack_00000140 + 1;
    in_stack_00001788 = iVar14 - 1;
    goto LAB_02492630;
  case 3:
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00001788 = FUN_024d66ec();
    in_stack_00000068._4_1_ = 0;
LAB_0249408c:
    unaff_s12 = 1.0;
    in_stack_000017a8 = CONCAT44(3,uVar15);
    goto LAB_02492630;
  case 5:
    *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
    uVar56 = unaff_d13;
    FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,fStack00000000000000cc,
                 fStack00000000000000d4,fStack0000000000000048);
    *(undefined4 *)(unaff_x19 + 0x99) = 0;
    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
    *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
    *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
    break;
  case 6:
    lVar34 = unaff_x19[0x5c];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar59 = FUN_02681b9c(lVar34,0,0);
    if ((uVar59 & 1) != 0) {
      plVar44 = (long *)unaff_x19[0x5c];
      uVar20 = (**(code **)(*unaff_x19 + 0x548))();
      if (plVar44 == (long *)0x0) goto LAB_0249920c;
      (**(code **)(*plVar44 + 0x558))(plVar44,uVar20,*(undefined8 *)(*plVar44 + 0x560));
      lVar34 = unaff_x19[0x5c];
      if (lVar34 == 0) goto LAB_0249920c;
      *(int *)(lVar34 + 0x3f8) = (int)unaff_x19[0x7f];
      FUN_024c910c(lVar34,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
      plVar44 = (long *)unaff_x19[0x5c];
      if (plVar44 == (long *)0x0) goto LAB_0249920c;
      (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
    in_stack_00000068._4_1_ = 0;
LAB_02494484:
    unaff_s12 = 1.0;
    in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
    goto LAB_02492630;
  default:
    in_stack_00000068._4_1_ = 0;
LAB_02494950:
    if (in_stack_000017bc == 0xad) {
      if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar34 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
    }
    else if (in_stack_000017bc == 9) {
      lVar34 = *in_stack_00000150;
      if ((lVar34 == 0) || (lVar31 = *(long *)(lVar34 + 0x38), lVar31 == 0)) goto LAB_0249920c;
      uVar15 = *in_stack_00000148;
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar31 + (int)uVar15 * unaff_x27 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar15;
      lVar31 = *(long *)(lVar34 + 0x50);
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
LAB_024949c4:
      *(int *)(lVar34 + 0x20) = *(int *)(lVar34 + 0x20) + 1;
    }
    else {
      if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar50);
      }
      uVar15 = *in_stack_00000148;
      if (((uint)fStack0000000000000058 & 1) != 0) {
        *(uint *)(in_stack_00000070 + 0x1f0) = uVar15;
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar15;
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      if ((unaff_x19[0x6c] == 0) || (lVar34 = *(long *)(unaff_x19[0x6c] + 0x50), lVar34 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fStack0000000000000058 = 0.0;
      *(float *)(lVar34 + 0x60) = fVar60;
      *(float *)(lVar34 + 100) = fVar69;
    }
LAB_02494abc:
    if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar64 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar60 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar34 = unaff_x19[0xc9];
      fVar58 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar58 = 1.0;
      }
      if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0)) goto LAB_0249920c;
      fVar49 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar50 = *(float *)(lVar34 + 0x2c);
      fVar69 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
      fVar48 = *_fStack0000000000000098;
      fVar69 = fVar49 * (fVar64 / (float)iVar14) * fVar60 * fVar58 * fVar50 * fVar69;
      fVar64 = *_fStack0000000000000088;
      if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92]))
      {
        if ((*in_stack_00000150 == 0) ||
           (lVar34 = *(long *)(*in_stack_00000150 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        uVar15 = *(int *)((long)unaff_x19 + 0x48c) - 1;
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0xca] == 0) goto LAB_0249920c;
        fVar58 = *(float *)(lVar34 + (long)(int)uVar15 * (long)iVar16 + 0x60);
        iVar16 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
        if (unaff_x19[0xca] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
        lVar34 = unaff_x19[0xc9];
        fVar60 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar60 = 1.0;
        }
        if ((lVar34 == 0) || (*(long *)(lVar34 + 0x20) == 0)) goto LAB_0249920c;
        fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar70 = *(float *)(lVar34 + 0x2c);
        fVar69 = (float)FUN_026fd668(*(long *)(lVar34 + 0x20),0);
        if ((*in_stack_00000150 == 0) ||
           (lVar34 = *(long *)(*in_stack_00000150 + 0x50), lVar34 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = lVar34 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        fVar48 = *(float *)(lVar34 + 0x60);
        fVar64 = *(float *)(lVar34 + 100);
        fVar69 = fVar50 * (fVar58 / (float)iVar16) * fVar49 * fVar60 * fVar70 * fVar69;
      }
      fVar50 = *(float *)(unaff_x19 + 0x9a);
      fVar60 = *(float *)(unaff_x19 + 0x96);
      fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
      fVar58 = 0.0;
      fVar49 = 0.0;
      if ((0.0 < fVar50) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar49 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      fVar67 = *(float *)(unaff_x19 + 199);
      if ((char)unaff_x19[0x1d] == '\0') {
        if ((unaff_x19[0xc9] == 0) || (lVar34 = *(long *)(unaff_x19[0xc9] + 0x20), lVar34 == 0))
        goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,lVar34,0);
        fVar58 = (float)FUN_026fd474(&stack0x000016e0,0);
      }
      puVar10 = System_Threading_Mutex_TypeInfo;
      fVar65 = *(float *)(unaff_x19 + 0x6b);
      fVar64 = (in_stack_00000090 - fVar48) - fVar64;
      bVar12 = true;
      if ((fVar65 <= fVar64) && (bVar12 = false, !NAN(fVar65))) {
        bVar12 = fVar65 == -1.0;
      }
      if (!bVar12) {
        fVar64 = fVar65;
      }
      fVar48 = _DAT_0294c6e8;
      if ((uVar19 & 0x18) == 0) {
        fVar48 = 1.0;
      }
      if (((fVar60 - (fVar70 - fVar50)) + fVar49 < fStack00000000000000a4) &&
         (ABS(fVar67) + fVar69 * fVar58 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
          fVar48 * fVar64)) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        lVar34 = *(long *)(*(long *)puVar10 + 0xb8);
        memcpy(&stack0x00000508,(void *)(lVar34 + 0x788),0x378);
        FUN_013b86dc(lVar34 + 0x11f0,&stack0x00000508,
                     *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
      }
    }
    unaff_d13 = (ulong)(uint)fVar55;
    unaff_s12 = 1.0;
    unaff_x28 = &stack0x00000880;
    in_x10 = *in_stack_00000150;
    if (in_x10 == 0) goto LAB_0249920c;
    lVar34 = *(long *)(in_x10 + 0x38);
    unaff_x25 = 0x5c;
    if (lVar34 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar34 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    in_w8 = *(uint *)(unaff_x19 + 0x94);
    in_x11 = lVar34 + (int)*in_stack_00000148 * unaff_x27;
    unaff_x22 = in_stack_00000150;
    in_s5 = fStack00000000000000cc;
    goto code_r0x02494e04;
  }
  in_stack_00000068._4_1_ = 0;
  bStack000000000000005c = 1;
  fStack0000000000000058 = 1.4013e-45;
LAB_024944c4:
  unaff_s12 = 1.0;
  plVar46 = (long *)StringLiteral_302;
  plVar41 = (long *)System_Threading_Mutex_TypeInfo;
  goto LAB_02492630;
LAB_02496a50:
  do {
    uVar15 = uVar36 - 1;
    if (*(uint *)(lVar34 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x50), lVar43 == 0))
    goto LAB_0249920c;
    lVar45 = (long)(int)uVar15;
    lVar22 = lVar34 + lVar45 * 0x178;
    uVar2 = *(uint *)(lVar22 + 100);
    if (*(uint *)(lVar43 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = *(long *)(lVar22 + 0x38);
    uVar4 = *(ushort *)(lVar22 + 0x20);
    lVar35 = (long)(int)uVar2;
    lVar43 = lVar43 + lVar35 * 0x5c;
    uVar6 = *(uint *)(lVar43 + 0x3c);
    iVar17 = *(int *)(lVar43 + 0x28);
    iVar18 = *(int *)(lVar43 + 0x2c);
    uVar7 = *(uint *)(lVar43 + 0x40);
    lVar22 = (long)(int)uVar7;
    uVar42 = *(uint *)(lVar43 + 0x68);
    fVar52 = *(float *)(lVar43 + 0x5c);
    fVar73 = *(float *)(lVar43 + 0x60);
    iVar3 = *(int *)(lVar43 + 0x20);
    fVar50 = *(float *)(lVar43 + 0x4c);
    fVar67 = *(float *)(lVar43 + 0x54);
    fVar69 = *(float *)(lVar43 + 0x58);
    fVar63 = *(float *)(lVar43 + 0x6c);
    fVar65 = *(float *)(lVar43 + 0x70);
    fVar49 = *(float *)(lVar43 + 0x74);
    fVar70 = *(float *)(lVar43 + 0x78);
    fVar53 = fVar52 + fVar73;
    uVar40 = (uint)uVar4;
    if ((int)uVar42 < 9) {
      switch(uVar42) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar73 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar69;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar73 + fVar52 * 0.5) - fVar69 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar53 - fVar69;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar53;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      _in_stack_000000c0 = 0;
    }
    else if (uVar42 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar4 < 0xad) {
        if ((uVar40 != 3) && (uVar40 != 10)) goto LAB_02496bac;
      }
      else if ((uVar40 != 0xad) && ((uVar40 != 0x200b && (uVar40 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar34 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar5 = *(undefined2 *)(lVar34 + (long)(int)uVar6 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f9f84(uVar5,0);
        if ((uVar56 & 1) == 0) {
          bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar69 <= fVar52) && (!bVar1 && (uVar42 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar73;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar53;
          }
          goto LAB_02496c90;
        }
        if (((uVar36 == 1) || (uVar2 != uVar61)) || (uVar15 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar73;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar53;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar4,0);
          _in_stack_000000c0 = 0;
        }
        else {
          cVar27 = (char)unaff_x19[0x1d];
          fVar53 = -fVar69;
          if (cVar27 != '\0') {
            fVar53 = fVar69;
          }
          if (*(uint *)(lVar34 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar69 = 1.0;
          iVar18 = (int)*(char *)(lVar34 + (long)(int)uVar6 * 0x178 + 0x194) +
                   (-iVar3 - ((uint)fStack0000000000000020 & 1)) + iVar18 + -1;
          if (0 < iVar18) {
            fVar69 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar18 < 1) {
            iVar18 = 1;
          }
          if (uVar40 == 9) {
LAB_02498bb8:
            fVar69 = 1.0 - fVar69;
          }
          else {
            if (uVar40 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar56 = FUN_016fa418(uVar4,0);
              cVar27 = (char)unaff_x19[0x1d];
              if ((uVar56 & 1) != 0) goto LAB_02498bb8;
            }
            iVar18 = (iVar3 - (~(uint)fStack0000000000000020 & 1)) + iVar17;
          }
          fVar69 = ((fVar52 + fVar53) * fVar69) / (float)iVar18;
          if (cVar27 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar69;
            _in_stack_000000c0 =
                 CONCAT44((float)((ulong)_in_stack_000000c0 >> 0x20) + 0.0,
                          (float)_in_stack_000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar69;
          }
        }
      }
    }
    else if (uVar42 == 0x20) {
      fVar69 = fVar63 + fVar49;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar42 = (uint)*(undefined8 *)(lVar34 + 0x18);
    if (uVar42 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar34 + lVar45 * 0x178;
    fVar53 = fStack0000000000000098 + fStack00000000000000c8;
    fVar69 = (float)_in_stack_00000090 + (float)_in_stack_000000c0;
    fVar52 = (float)((ulong)_in_stack_00000090 >> 0x20) + (float)((ulong)_in_stack_000000c0 >> 0x20)
    ;
    if (*(char *)(lVar43 + 0x194) == '\0') goto LAB_02497688;
    iVar17 = *(int *)(lVar34 + lVar45 * 0x178 + 0x2c);
    if (iVar17 != 0) goto LAB_02497374;
    fVar60 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar29 = lVar34 + lVar45 * 0x178;
      *(undefined4 *)(lVar29 + 0x84) = 0;
      *(undefined4 *)(lVar29 + 0xac) = 0;
      *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
      fVar60 = 1.0;
      break;
    case 1:
      fVar70 = *(float *)(lVar34 + lVar45 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar29 = lVar34 + lVar45 * 0x178;
        fVar49 = (fStack00000000000000c8 + fVar70) - *(float *)(in_stack_00000070 + 0x230);
        fVar70 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar29 = lVar34 + lVar45 * 0x178;
      fVar49 = fVar49 - fVar63;
      *(float *)(lVar29 + 0x84) = fVar60 + (fVar70 - fVar63) / fVar49;
      *(float *)(lVar29 + 0xac) = fVar60 + (*(float *)(lVar29 + 0x98) - fVar63) / fVar49;
      *(float *)(lVar29 + 0xd4) = fVar60 + (*(float *)(lVar29 + 0xc0) - fVar63) / fVar49;
      fVar60 = fVar60 + (*(float *)(lVar29 + 0xe8) - fVar63) / fVar49;
      break;
    case 2:
      lVar29 = lVar34 + lVar45 * 0x178;
      fVar70 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar49 = (fStack00000000000000c8 + *(float *)(lVar29 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar29 + 0x84) = fVar60 + fVar49 / fVar70;
      *(float *)(lVar29 + 0xac) =
           fVar60 + ((fStack00000000000000c8 + *(float *)(lVar29 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar29 + 0xd4) =
           fVar60 + ((fStack00000000000000c8 + *(float *)(lVar29 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar60 = fVar60 + ((fStack00000000000000c8 + *(float *)(lVar29 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar29 = lVar34 + lVar45 * 0x178;
        *(undefined4 *)(lVar29 + 0x88) = 0;
        *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar29 + 0xd8) = 0;
        *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar29 = lVar34 + lVar45 * 0x178;
        fVar70 = fVar70 - fVar65;
        fVar49 = fVar60 + (*(float *)(lVar29 + 0x74) - fVar65) / fVar70;
        fVar70 = fVar60 + (*(float *)(lVar29 + 0x9c) - fVar65) / fVar70;
        *(float *)(lVar29 + 0x88) = fVar49;
        *(float *)(lVar29 + 0xb0) = fVar70;
        *(float *)(lVar29 + 0xd8) = fVar49;
        *(float *)(lVar29 + 0x100) = fVar70;
        break;
      case 2:
        lVar29 = lVar34 + lVar45 * 0x178;
        fVar49 = fVar60 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar29 + 0x88) = fVar49;
        fVar70 = *(float *)(unaff_x19 + 0x9b);
        fVar65 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar29 + 0xd8) = fVar49;
        fVar49 = fVar60 + (*(float *)(lVar29 + 0x9c) - fVar70) / (fVar65 - fVar70);
        *(float *)(lVar29 + 0xb0) = fVar49;
        *(float *)(lVar29 + 0x100) = fVar49;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar42 = (uint)*(undefined8 *)(lVar34 + 0x18);
      }
      if (uVar42 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar34 + lVar45 * 0x178;
      fVar49 = *(float *)(lVar29 + 0x15c);
      fVar70 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar49) * 0.5;
      fVar65 = fVar60 + *(float *)(lVar29 + 0x88) * fVar49 + fVar70;
      fVar60 = fVar60 + fVar70 + *(float *)(lVar29 + 0xb0) * fVar49;
      *(float *)(lVar29 + 0x84) = fVar65;
      *(float *)(lVar29 + 0xac) = fVar65;
      *(float *)(lVar29 + 0xd4) = fVar60;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar34 + lVar45 * 0x178 + 0xfc) = fVar60;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar42 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar34 + lVar45 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0x100) = 0;
      break;
    case 1:
      if (uVar15 < uVar42) {
        lVar29 = lVar34 + lVar45 * 0x178;
        fVar50 = fVar50 - fVar67;
        fVar60 = (*(float *)(lVar29 + 0x74) - fVar67) / fVar50;
        fVar50 = (*(float *)(lVar29 + 0x9c) - fVar67) / fVar50;
        *(float *)(lVar29 + 0x88) = fVar60;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar42 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar34 + lVar45 * 0x178;
      fVar60 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar29 + 0x88) = fVar60;
      fVar50 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar29 + 0xb0) = fVar50;
      *(float *)(lVar29 + 0xd8) = fVar50;
      *(float *)(lVar29 + 0x100) = fVar60;
      break;
    case 3:
      if (uVar42 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar34 + lVar45 * 0x178;
      fVar50 = *(float *)(lVar29 + 0x15c);
      fVar49 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar50) * 0.5;
      fVar60 = *(float *)(lVar29 + 0x84) / fVar50 + fVar49;
      fVar49 = fVar49 + *(float *)(lVar29 + 0xd4) / fVar50;
      *(float *)(lVar29 + 0x88) = fVar60;
      *(float *)(lVar29 + 0xb0) = fVar49;
      *(float *)(lVar29 + 0x100) = fVar60;
      *(float *)(lVar29 + 0xd8) = fVar49;
    }
    if (uVar42 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar34 + lVar45 * 0x178;
    fVar60 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar34 + lVar45 * 0x178 + 400) & 1) != 0))
    {
      fVar60 = -fVar60;
    }
    fVar49 = fVar64;
    if (((iVar14 == 2) || (fVar49 = fVar48, iVar14 == 1)) || (fVar49 = fVar64 / fVar55, iVar14 == 0)
       ) {
      fVar60 = fVar49 * fVar60;
    }
    lVar29 = lVar34 + lVar45 * 0x178;
    fVar50 = *(float *)(lVar29 + 0x88);
    fVar70 = *(float *)(lVar29 + 0x84);
    fVar49 = -2.1474836e+09;
    if (fVar70 != INFINITY) {
      fVar49 = (float)(int)fVar70;
    }
    fVar65 = *(float *)(lVar29 + 0xd4);
    fVar63 = *(float *)(lVar29 + 0xd8);
    fVar67 = -2.1474836e+09;
    if (fVar50 != INFINITY) {
      fVar67 = (float)(int)fVar50;
    }
    uVar72 = FUN_024e0374(fVar70 - fVar49,fVar50 - fVar67);
    *(undefined4 *)(lVar29 + 0x84) = uVar72;
    if (*(uint *)(lVar34 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar63 = fVar63 - fVar67;
    *(float *)(lVar29 + 0x88) = fVar60;
    uVar72 = FUN_024e0374(fVar70 - fVar49,fVar63);
    *(undefined4 *)(lVar34 + lVar45 * 0x178 + 0xac) = uVar72;
    if (*(uint *)(lVar34 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar49;
    *(float *)(lVar34 + lVar45 * 0x178 + 0xb0) = fVar60;
    fVar49 = (float)FUN_024e0374(fVar65,fVar63);
    *(float *)(lVar29 + 0xd4) = fVar49;
    if (*(uint *)(lVar34 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar29 + 0xd8) = fVar60;
    uVar72 = FUN_024e0374(fVar65,fVar50 - fVar67);
    *(undefined4 *)(lVar34 + lVar45 * 0x178 + 0xfc) = uVar72;
    uVar42 = (uint)*(undefined8 *)(lVar34 + 0x18);
    if (uVar42 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar34 + lVar45 * 0x178 + 0x100) = fVar60;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar15) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar42 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar34 + lVar45 * 0x178;
      *(ulong *)(lVar43 + 0x70) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar43 + 0x70));
      *(float *)(lVar43 + 0x78) = fVar52 + *(float *)(lVar43 + 0x78);
      if (*(uint *)(lVar34 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar34 + lVar45 * 0x178;
      *(ulong *)(lVar43 + 0x98) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar43 + 0x98));
      *(float *)(lVar43 + 0xa0) = fVar52 + *(float *)(lVar43 + 0xa0);
      if (*(uint *)(lVar34 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar34 + lVar45 * 0x178;
      *(ulong *)(lVar43 + 0xc0) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar43 + 0xc0));
      *(float *)(lVar43 + 200) = fVar52 + *(float *)(lVar43 + 200);
      if (*(uint *)(lVar34 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar34 + lVar45 * 0x178;
      *(ulong *)(lVar43 + 0xe8) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar43 + 0xe8));
      *(float *)(lVar43 + 0xf0) = fVar52 + *(float *)(lVar43 + 0xf0);
      if (iVar17 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar17 == 1) {
        pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar42 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar34 + lVar45 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar43 = lVar34 + lVar45 * 0x178;
        *(ulong *)(lVar43 + 0x70) =
             CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar43 + 0x70));
        *(float *)(lVar43 + 0x78) = fVar52 + *(float *)(lVar43 + 0x78);
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar34 + lVar45 * 0x178;
        *(ulong *)(lVar43 + 0x98) =
             CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar43 + 0x98));
        *(float *)(lVar43 + 0xa0) = fVar52 + *(float *)(lVar43 + 0xa0);
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar34 + lVar45 * 0x178;
        *(ulong *)(lVar43 + 0xc0) =
             CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar43 + 0xc0));
        *(float *)(lVar43 + 200) = fVar52 + *(float *)(lVar43 + 200);
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar34 + lVar45 * 0x178;
        *(ulong *)(lVar43 + 0xe8) =
             CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar43 + 0xe8));
        *(float *)(lVar43 + 0xf0) = fVar52 + *(float *)(lVar43 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar42 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar29 = lVar34 + lVar45 * 0x178;
        uVar72 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar29 + 0x78) = uVar72;
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar34 + lVar45 * 0x178;
        uVar72 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar29 + 0xa0) = uVar72;
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar34 + lVar45 * 0x178;
        uVar72 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar29 + 200) = uVar72;
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar34 + lVar45 * 0x178;
        uVar72 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar29 + 0xf0) = uVar72;
        if (*(uint *)(lVar34 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar43 + 0x194) = 0;
      }
      if (iVar17 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar32)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar45 * 0x178;
    uVar20 = *(undefined8 *)(lVar43 + 0x11c);
    *(undefined8 *)(lVar43 + 0x11c) =
         CONCAT44(fVar69 + (float)((ulong)uVar20 >> 0x20),fVar53 + (float)uVar20);
    *(float *)(lVar43 + 0x124) = fVar52 + *(float *)(lVar43 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar45 * 0x178;
    *(ulong *)(lVar43 + 0x110) =
         CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0x110) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar43 + 0x110));
    *(float *)(lVar43 + 0x118) = fVar52 + *(float *)(lVar43 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar45 * 0x178;
    *(ulong *)(lVar43 + 0x128) =
         CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0x128) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar43 + 0x128));
    *(float *)(lVar43 + 0x130) = fVar52 + *(float *)(lVar43 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar45 * 0x178;
    *(float *)(lVar43 + 0x134) = fVar53 + *(float *)(lVar43 + 0x134);
    *(ulong *)(lVar43 + 0x138) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar43 + 0x138) >> 0x20),
                  fVar69 + (float)*(undefined8 *)(lVar43 + 0x138));
    lVar43 = *in_stack_00000150;
    if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    uVar42 = *(uint *)(lVar29 + 0x18);
    if (uVar42 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar29 + lVar45 * 0x178;
    uVar59 = CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                      fVar53 + (float)*(undefined8 *)(lVar38 + 0x140));
    fVar49 = fVar69 + *(float *)(lVar38 + 0x150);
    uVar24 = (ulong)(uint)fVar49;
    uVar62 = CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                      fVar69 + (float)*(undefined8 *)(lVar38 + 0x148));
    *(ulong *)(lVar38 + 0x140) = uVar59;
    *(ulong *)(lVar38 + 0x148) = uVar62;
    *(float *)(lVar38 + 0x150) = fVar49;
    if (uVar2 == uVar61) {
      uVar61 = *in_stack_00000148 - 1;
      if (uVar15 == uVar61) goto LAB_0249788c;
    }
    else {
      lVar43 = *(long *)(lVar43 + 0x50);
      if (lVar43 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = (long)(int)uVar61;
      lVar39 = lVar43 + lVar38 * 0x5c;
      uVar62 = (ulong)(uint)*(float *)(lVar39 + 0x58);
      fVar49 = fVar69 + *(float *)(lVar39 + 0x54);
      uVar59 = (ulong)(uint)fVar49;
      fVar50 = fVar53 + *(float *)(lVar39 + 0x58);
      uVar24 = (ulong)(uint)fVar50;
      *(ulong *)(lVar39 + 0x4c) =
           CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                    fVar69 + (float)*(undefined8 *)(lVar39 + 0x4c));
      *(float *)(lVar39 + 0x54) = fVar49;
      *(float *)(lVar39 + 0x58) = fVar50;
      if (uVar42 <= *(uint *)(lVar39 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar72 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
      lVar43 = lVar43 + lVar38 * 0x5c;
      *(float *)(lVar43 + 0x70) = fVar49;
      *(undefined4 *)(lVar43 + 0x6c) = uVar72;
      lVar43 = *in_stack_00000150;
      if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar29 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar43 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar38 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar61 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      uVar61 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar15 == uVar61) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar29 + lVar35 * 0x5c;
        uVar62 = (ulong)(uint)*(float *)(lVar38 + 0x58);
        uVar59 = CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                          fVar69 + (float)*(undefined8 *)(lVar38 + 0x4c));
        fVar49 = fVar69 + *(float *)(lVar38 + 0x54);
        fVar53 = fVar53 + *(float *)(lVar38 + 0x58);
        uVar24 = (ulong)(uint)fVar53;
        *(ulong *)(lVar38 + 0x4c) = uVar59;
        *(float *)(lVar38 + 0x54) = fVar49;
        *(float *)(lVar38 + 0x58) = fVar53;
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= *(uint *)(lVar38 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar72 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
        lVar29 = lVar29 + lVar35 * 0x5c;
        *(float *)(lVar29 + 0x70) = fVar49;
        *(undefined4 *)(lVar29 + 0x6c) = uVar72;
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar29 + lVar35 * 0x5c + 0x40);
        if (*(uint *)(lVar43 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar35 * 0x5c;
        *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar61 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar56 = FUN_016f9468(uVar40,0);
    if (((((uVar56 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
      if (bVar12) {
        if (((uVar36 != 1) && ((int)uVar15 < (int)(*(uint *)(lVar34 + 0x18) - 1))) &&
           (((int)uVar15 < (int)*in_stack_00000148 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
          if (*(uint *)(lVar34 + 0x18) <= uVar36 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar5 = *(undefined2 *)(lVar34 + lVar31 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016f9468(uVar5,0);
          if ((uVar56 & 1) != 0) {
            if (*(uint *)(lVar34 + 0x18) <= uVar36)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar5 = *(undefined2 *)(lVar34 + lVar31 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar56 = FUN_016f9468(uVar5,0);
            if ((uVar56 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar36 != 1) {
LAB_024985a0:
          bVar12 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f93a0(uVar40,0);
        if ((uVar56 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016f68bc(uVar40,0);
          if (((uVar40 != 0x200b) && ((uVar56 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f9468(uVar40,0);
        iVar17 = iVar47;
        if ((uVar56 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar17 = uVar36 - 2;
      }
      lVar43 = *in_stack_00000150;
      if (lVar43 == 0) goto LAB_0249920c;
      lVar29 = *(long *)(lVar43 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar43 + 0x24);
      iVar18 = *(int *)(lVar29 + 0x18);
      if (iVar18 < (int)(uVar61 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar43 + 0x40),iVar18 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar43 = *in_stack_00000150;
        if (lVar43 == 0) goto LAB_0249920c;
      }
      lVar29 = *(long *)(lVar43 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (long)(int)uVar61 * 0x18;
      *(uint *)(lVar29 + 0x28) = uVar19;
      *(int *)(lVar29 + 0x2c) = iVar17;
      *(uint *)(lVar29 + 0x30) = (iVar17 - uVar19) + 1;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      lVar29 = *(long *)(lVar43 + 0x50);
      *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar35 * 0x5c;
      bVar12 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
    else {
      if (!bVar12) {
        uVar19 = uVar15;
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        lVar43 = *in_stack_00000150;
        if (lVar43 == 0) goto LAB_0249920c;
        lVar29 = *(long *)(lVar43 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar43 + 0x24);
        iVar17 = *(int *)(lVar29 + 0x18);
        if (iVar17 < (int)(uVar61 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar43 + 0x40),iVar17 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar43 = *in_stack_00000150;
          if (lVar43 == 0) goto LAB_0249920c;
        }
        lVar29 = *(long *)(lVar43 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)uVar61 * 0x18;
        *(uint *)(lVar29 + 0x28) = uVar19;
        *(uint *)(lVar29 + 0x2c) = uVar15;
        *(long **)(lVar29 + 0x20) = unaff_x19;
        *(uint *)(lVar29 + 0x30) = uVar36 - uVar19;
        lVar29 = *(long *)(lVar43 + 0x50);
        *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar35 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar12 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    uVar61 = *(uint *)(lVar43 + 0x18);
    if (uVar61 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar43 + lVar45 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar13) {
LAB_02497adc:
        if (uVar61 <= uVar36 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *unaff_x19;
        uVar61 = *(uint *)(lVar43 + lVar31 + -0x330);
        uVar72 = *(undefined4 *)(lVar43 + lVar31 + -0x2f8);
LAB_0249805c:
        pcVar32 = *(code **)(lVar35 + 0x908);
LAB_02498064:
        uVar62 = (ulong)uVar61;
        uVar59 = (ulong)(uint)fStack0000000000000050;
        uVar24 = (ulong)(uint)fStack0000000000000054;
        (*pcVar32)(fStack0000000000000058,uVar59,uVar24,uVar62,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar72);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar13 = false;
        fVar58 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar43 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar13 = false;
      }
    }
    else {
      lVar43 = lVar43 + lVar45 * 0x178;
      iVar17 = *(int *)(lVar43 + 0x68);
      *(int *)(lVar43 + 0x16c) = iVar16;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar17 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar56 = FUN_016f68bc(uVar40,0);
      if ((uVar40 != 0x200b) && ((uVar56 & 1) == 0)) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar35 = *(long *)(lVar43 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar49 = *(float *)(lVar35 + lVar45 * 0x178 + 0x160);
        if (fVar58 <= fVar49) {
          fVar58 = fVar49;
        }
        if (fStack00000000000000cc <= ABS(fVar60)) {
          fStack00000000000000cc = ABS(fVar60);
        }
        if ((float)iVar17 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar43 = *in_stack_00000150;
            if (lVar43 == 0) goto LAB_0249920c;
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar35 + 0x15a8);
        }
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar43 + lVar45 * 0x178 + 0x14c);
        fVar49 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar50 = fVar50 + fVar58 * fVar49;
        if (fVar50 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar50;
        }
        uVar59 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar17;
      }
      if (!bVar13) {
        bVar13 = false;
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016fa418(uVar40,0);
          if ((uVar56 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar43 + lVar45 * 0x178;
        _bStack000000000000005c = *(float *)(lVar43 + 0x160);
        fStack0000000000000058 = *(float *)(lVar43 + 0x11c);
        bVar13 = fVar58 != 0.0;
        fVar49 = _bStack000000000000005c;
        if (bVar13) {
          fVar49 = fVar58;
        }
        fVar58 = fVar49;
        uStack0000000000000060 = *(uint *)(lVar43 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar49 = fVar60;
        if (bVar13) {
          fVar49 = fStack00000000000000cc;
        }
        uVar59 = (ulong)(uint)fVar49;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar49;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar15 < *(uint *)(lVar43 + 0x18)) {
            lVar43 = lVar43 + lVar45 * 0x178;
            lVar35 = *unaff_x19;
            uVar61 = *(uint *)(lVar43 + 0x128);
            uVar72 = *(undefined4 *)(lVar43 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar15 == uVar6) || ((int)uVar7 <= (int)uVar15)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar40 == 0x200b || (uVar56 & 1) != 0) {
            lVar35 = lVar22;
            if (*(uint *)(lVar43 + 0x18) <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar35 = lVar45;
            if (*(uint *)(lVar43 + 0x18) <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar43 = lVar43 + lVar35 * 0x178;
          uVar61 = *(uint *)(lVar43 + 0x128);
          uVar72 = *(undefined4 *)(lVar43 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          uVar61 = *(uint *)(lVar43 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar56 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar43 + lVar31),0);
        if ((uVar56 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
            if (uVar15 < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + lVar45 * 0x178;
              uVar62 = (ulong)*(uint *)(lVar43 + 0x128);
              uVar24 = (ulong)(uint)fStack0000000000000054;
              uVar59 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar59,uVar24,uVar62,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar43 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar43 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar43 = *(long *)puVar10;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar13 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar37 == 0) goto LAB_0249920c;
    uVar61 = *(uint *)(lVar43 + lVar45 * 0x178 + 400);
    fVar49 = (float)FUN_026fd1f0(lVar37 + 0x50,0);
    if ((uVar61 >> 6 & 1) == 0) {
      if (bVar8) {
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar36 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar61 = *(uint *)(lVar43 + lVar31 + -0x330);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        fVar69 = fStack0000000000000088 * fVar49 + *(float *)(lVar43 + lVar31 + -0x30c);
LAB_02498648:
        uVar62 = (ulong)uVar61;
        uVar59 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar24 = (ulong)in_stack_00000068._4_4_;
        (*pcVar32)(fStack0000000000000080,uVar59,uVar24,uVar62,fVar69,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar8 = false;
    }
    else {
      lVar43 = *in_stack_00000150;
      if ((lVar43 == 0) || (lVar35 = *(long *)(lVar43 + 0x38), lVar35 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar35 + lVar45 * 0x178 + 0x174) = iVar16;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar35 + lVar45 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) ||
         (bVar8 || !bVar1)) {
LAB_02498228:
        if (!bVar8) goto LAB_0249867c;
      }
      else {
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016fa418(uVar40,0);
          if ((uVar56 & 1) != 0) goto LAB_02498228;
          lVar43 = *in_stack_00000150;
          if (lVar43 == 0) goto LAB_0249920c;
        }
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar43 + lVar45 * 0x178;
        fStack0000000000000034 = *(float *)(lVar43 + 0x60);
        fStack0000000000000088 = *(float *)(lVar43 + 0x160);
        fStack0000000000000030 = *(float *)(lVar43 + 0x14c);
        uVar59 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar43 + 0x11c);
        in_stack_00000078._4_4_ = fVar49 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar61 = *in_stack_00000148;
      if (uVar61 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar15 < *(uint *)(lVar43 + 0x18)) {
            lVar43 = lVar43 + lVar45 * 0x178;
            lVar22 = *unaff_x19;
            uVar61 = *(uint *)(lVar43 + 0x128);
            fVar69 = *(float *)(lVar43 + 0x14c);
LAB_024983d8:
            pcVar32 = *(code **)(lVar22 + 0x908);
FUN_02498644:
            fVar69 = fVar49 * fStack0000000000000088 + fVar69;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar15 == uVar6) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar56 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          uVar61 = *(uint *)(lVar43 + 0x18);
          if (uVar40 == 0x200b || (uVar56 & 1) != 0) {
            if (uVar61 <= uVar7)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar22 = lVar45;
            if (uVar61 <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar43 = lVar43 + lVar22 * 0x178;
          fVar69 = *(float *)(lVar43 + 0x14c);
          uVar61 = *(uint *)(lVar43 + 0x128);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)uVar61) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 != 0) && (lVar35 = *(long *)(lVar43 + 0x38), lVar35 != 0)) {
          if (uVar36 < *(uint *)(lVar35 + 0x18)) {
            if (*(float *)(lVar35 + lVar31 + -0x108) == fStack0000000000000034) {
              fVar50 = *(float *)(lVar35 + lVar31 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar59 = (ulong)(uint)fStack0000000000000030;
              uVar56 = FUN_024aa280(fVar69 + fVar50,uVar59,0);
              if ((uVar56 & 1) != 0) {
                uVar61 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar43 = *in_stack_00000150;
              if (lVar43 == 0) goto LAB_0249920c;
            }
            lVar43 = *(long *)(lVar43 + 0x38);
            if (lVar43 != 0) {
              uVar61 = *(uint *)(lVar43 + 0x18);
              if ((int)uVar15 <= (int)uVar7) goto LAB_02498620;
              if (uVar7 < uVar61) goto LAB_02498628;
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            }
            goto LAB_0249920c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }

      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
      :
      if ((int)uVar15 < (int)uVar61) {
        iVar17 = FUN_02681c0c(lVar37,0);
        if (*(uint *)(lVar34 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = *(long *)(lVar34 + lVar31 + -0x130);
        if (lVar43 == 0) goto LAB_0249920c;
        iVar18 = FUN_02681c0c(lVar43,0);
        if (iVar17 != iVar18) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar36 - 2 < *(uint *)(lVar43 + 0x18)) {
            lVar22 = *unaff_x19;
            uVar61 = *(uint *)(lVar43 + lVar31 + -0x330);
            fVar69 = *(float *)(lVar43 + lVar31 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar8 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    uVar61 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar61 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar43 + lVar45 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar24 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar24,uVar62,fStack00000000000000a8,uVar24);
      }
LAB_024986e8:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar43 + lVar45 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar7 < (int)uVar15)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar15 == uVar7) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar56 = FUN_016fa418(uVar40,0);
          if ((uVar56 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar10;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        uVar61 = (uint)*(undefined8 *)(lVar43 + 0x18);
        if (uVar61 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = *(long *)(lVar22 + 0xb8);
        lVar35 = lVar43 + lVar45 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar22 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar22 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar22 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar22 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar61 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + lVar45 * 0x178;
      fVar67 = *(float *)(lVar43 + 0x188);
      uVar21 = *(undefined8 *)(lVar43 + 0x17c);
      fVar63 = *(float *)(lVar43 + 0x184);
      uVar20 = *(undefined8 *)(lVar43 + 0x184);
      fVar65 = *(float *)(lVar43 + 0x18c);
      fVar69 = *(float *)(lVar43 + 0x11c);
      fVar50 = *(float *)(lVar43 + 0x128);
      fVar70 = *(float *)(lVar43 + 0x148);
      fVar49 = *(float *)(lVar43 + 0x150);
      in_stack_00000158 = uVar21;
      fStack0000000000000160 = fVar63;
      fStack0000000000000164 = fVar67;
      in_stack_00000168 = fVar65;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar56 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar43 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar56 & 1) == 0) {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar43);
        }
        fVar69 = fVar69 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar69 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar69;
        }
        fVar49 = fVar49 - in_stack_000017a0;
        uVar59 = (ulong)(uint)fVar49;
        fVar50 = fVar50 + (float)in_stack_00001798;
        uVar24 = (ulong)(uint)fVar50;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        fVar70 = fVar70 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar62 = (ulong)(uint)fVar70;
        if (fStack00000000000000a4 <= fVar50) {
          fStack00000000000000a4 = fVar50;
        }
        if (fStack00000000000000a8 <= fVar70) {
          fStack00000000000000a8 = fVar70;
        }
      }
      else {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar43);
        }
        fVar69 = (fVar69 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar62 = (ulong)(uint)fVar69;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        uVar24 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar70) {
          fStack00000000000000a8 = fVar70;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar24,uVar62,fStack00000000000000a8,uVar24);
        fStack00000000000000b4 = fVar49 - fVar65;
        fStack00000000000000a4 = fVar50 + fVar63;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar70 + fVar67;
        fStack00000000000000b0 = fVar69;
        in_stack_00001790 = uVar21;
        in_stack_00001798 = uVar20;
        in_stack_000017a0 = fVar65;
      }
      if (((*in_stack_00000148 == 1) || (uVar15 == uVar6)) ||
         (((int)uVar7 <= (int)uVar15 || (!bVar1)))) {
        uVar24 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar24,uVar62,fStack00000000000000a8,uVar24);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar15 = *in_stack_00000148;
    iVar47 = iVar47 + 1;
    lVar31 = lVar31 + 0x178;
    bVar1 = (int)uVar36 < (int)uVar15;
    uVar61 = uVar2;
    uVar36 = uVar36 + 1;
  } while (bVar1);
  lVar34 = *in_stack_00000150;
  if (lVar34 != 0) {
    iVar16 = uVar2 + 1;
LAB_02498c58:
    puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = PTR_DAT_033ed410;
    *(uint *)(lVar34 + 0x18) = uVar15;
    lVar31 = unaff_x19[0xd3];
    *(int *)(lVar34 + 0x2c) = iVar16;
    iVar16 = iStack00000000000000ac;
    if ((int)uVar15 < 1) {
      iVar16 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar16 = 1;
    }
    *(int *)(lVar34 + 0x1c) = (int)lVar31;
    *(int *)(lVar34 + 0x24) = iVar16;
    *(int *)(lVar34 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar56 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar56 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar34 = unaff_x19[0xde];
    if (lVar34 != 0) {
      (**(code **)(lVar34 + 0x18))
                (*(undefined8 *)(lVar34 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar34 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar16 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar16 != 0x19) {
      lVar34 = unaff_x19[0xe4];
      if (lVar34 == 0) goto LAB_0249920c;
      uVar15 = FUN_02859dc4(lVar34,0);
      FUN_02859e00(lVar34,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar34 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar34 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar34 = *(long *)(unaff_x19[0x6c] + 0x60), lVar34 != 0)) {
        if (*(int *)(lVar34 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar34 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar34 = *(long *)(unaff_x19[0x6c] + 0x60), lVar34 != 0)) {
            if (*(int *)(lVar34 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar34 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar34 = *(long *)(unaff_x19[0x6c] + 0x60), lVar34 != 0)) {
                if (*(int *)(lVar34 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar34 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar34 = *(long *)(unaff_x19[0x6c] + 0x60), lVar34 != 0)) {
                    if (*(int *)(lVar34 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar34 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar20 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar15 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar34 = *in_stack_00000150;
                              if (lVar34 != 0) {
                                lVar43 = 0;
                                lVar31 = 0;
                                do {
                                  uVar56 = lVar31 + 1;
                                  if ((long)*(int *)(lVar34 + 0x34) <= (long)uVar56)
                                  goto LAB_02496098;
                                  lVar34 = *(long *)(lVar34 + 0x60);
                                  if (lVar34 == 0) break;
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar34 + lVar43 + 0x70,0);
                                  lVar34 = unaff_x19[0xe0];
                                  if (lVar34 == 0) break;
                                  if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar21 = *(undefined8 *)(lVar34 + lVar31 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar25 = FUN_0268b4e0(uVar21,0,0);
                                  if ((uVar25 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar34 = *(long *)(*in_stack_00000150 + 0x60), lVar34 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar34 + lVar43 + 0x70,1,0);
                                    }
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if (lVar34 == 0) break;
                                    lVar34 = FUN_024f0144(lVar34,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar34 == 0) break;
                                    FUN_0266b9c4(lVar34,*(undefined8 *)(lVar22 + lVar43 + 0x80),0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if (lVar34 == 0) break;
                                    lVar34 = FUN_024f0144(lVar34,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar34 == 0) break;
                                    FUN_0266bbc8(lVar34,*(undefined8 *)(lVar22 + lVar43 + 0x98),0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if (lVar34 == 0) break;
                                    lVar34 = FUN_024f0144(lVar34,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar34 == 0) break;
                                    FUN_0266bc74(lVar34,*(undefined8 *)(lVar22 + lVar43 + 0xa0),0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if (lVar34 == 0) break;
                                    lVar34 = FUN_024f0144(lVar34,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar34 == 0) break;
                                    FUN_0266c1dc(lVar34,*(undefined8 *)(lVar22 + lVar43 + 0xa8),0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if ((lVar34 == 0) ||
                                       (lVar34 = FUN_024f0144(lVar34,0), lVar34 == 0)) break;
                                    FUN_0266ed90(lVar34,0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if (lVar34 == 0) break;
                                    lVar34 = FUN_02738ef4(lVar34,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar31 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (uVar21 = FUN_024f0144(lVar22,0), lVar34 == 0)) break;
                                    FUN_02858f1c(lVar34,uVar21,0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if ((lVar34 == 0) ||
                                       (lVar34 = FUN_02738ef4(lVar34,0), lVar34 == 0)) break;
                                    FUN_02858b14(uVar20,uVar59,uVar24,uVar62,lVar34,0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar34 = *(long *)(lVar34 + lVar31 * 8 + 0x28);
                                    if ((lVar34 == 0) ||
                                       (lVar34 = FUN_02738ef4(lVar34,0), lVar34 == 0)) break;
                                    FUN_02858a50(lVar34,uVar15 & 1,0);
                                    lVar34 = unaff_x19[0xe0];
                                    if (lVar34 == 0) break;
                                    if (*(uint *)(lVar34 + 0x18) <= uVar56)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar41 = *(long **)(lVar34 + lVar31 * 8 + 0x28);
                                    uVar19 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar41 == (long *)0x0) break;
                                    (**(code **)(*plVar41 + 0x2c8))
                                              (plVar41,uVar19 & 1,*(undefined8 *)(*plVar41 + 0x2d0))
                                    ;
                                  }
                                  lVar34 = *in_stack_00000150;
                                  lVar31 = lVar31 + 1;
                                  lVar43 = lVar43 + 0x50;
                                } while (lVar34 != 0);
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
      }
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


