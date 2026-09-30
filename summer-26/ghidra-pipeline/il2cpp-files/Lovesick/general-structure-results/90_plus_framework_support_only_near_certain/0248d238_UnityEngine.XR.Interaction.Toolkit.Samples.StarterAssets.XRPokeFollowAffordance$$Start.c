/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance$$Start
ENTRY_POINT: 0248d238
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance__Start
               (undefined8 param_1,ulong param_2)

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
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
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
  undefined1 uVar23;
  char cVar24;
  undefined4 *puVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  float *pfVar29;
  long lVar30;
  code *pcVar31;
  uint uVar32;
  float *pfVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  byte unaff_w20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  long *plVar41;
  long *unaff_x25;
  uint unaff_w26;
  uint uVar42;
  long *unaff_x27;
  long *plVar43;
  undefined8 *unaff_x28;
  uint unaff_w29;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  ulong uVar50;
  double dVar51;
  ulong uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float unaff_s8;
  float fVar60;
  float fVar61;
  float unaff_s9;
  float fVar62;
  float unaff_s10;
  float fVar63;
  float unaff_s11;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float unaff_s13;
  undefined4 uVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
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
  
code_r0x0248d238:
  fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
  fVar49 = 0.0;
  fVar65 = 0.0;
  if ((0.0 < unaff_s13) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
    fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
  }
  fVar70 = *(float *)(unaff_x19 + 199);
  if ((char)unaff_x19[0x1d] == '\0') {
    if ((unaff_x19[0xc9] == 0) || (lVar21 = *(long *)(unaff_x19[0xc9] + 0x20), lVar21 == 0))
    goto LAB_02491464;
    FUN_026fd62c(&stack0x00000880,lVar21,0);
    unaff_x28[0x1cd] = unaff_x28[1];
    unaff_x28[0x1cc] = *unaff_x28;
    fVar49 = (float)FUN_026fd474(&stack0x000016e0,0);
    param_2 = extraout_x1_11;
  }
  puVar9 = System_Threading_Mutex_TypeInfo;
  fVar55 = *(float *)(unaff_x19 + 0x6b);
  fVar57 = (fStack0000000000000090 - unaff_s10) - unaff_s9;
  bVar10 = true;
  if ((fVar55 <= fVar57) && (bVar10 = false, !NAN(fVar55))) {
    bVar10 = fVar55 == -1.0;
  }
  if (!bVar10) {
    fVar57 = fVar55;
  }
  uVar19 = in_stack_00000118 & 0xffffffff;
  fVar55 = _DAT_0294c6e8;
  if (unaff_w26 == 0) {
    fVar55 = 1.0;
  }
  if (((unaff_s11 - (fVar69 - unaff_s13)) + fVar65 < in_stack_000000a0) &&
     (ABS(fVar70) + unaff_s8 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
      fVar55 * fVar57)) {
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024d69d4();
    lVar21 = *(long *)(*(long *)puVar9 + 0xb8);
    memcpy(&stack0x00000508,(void *)(lVar21 + 0x788),0x378);
    FUN_013b86dc(lVar21 + 0x11f0,&stack0x00000508,
                 *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    param_2 = extraout_x1_12;
  }
LAB_0248d38c:
  fVar49 = 1.0;
  lVar21 = *unaff_x25;
  if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x38), lVar30 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar13 = *(uint *)(unaff_x19 + 0x94);
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar30 + 100) = uVar13;
  *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x95];
  if (((unaff_w20 & 1) == 0) &&
     ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar21 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar21 + (long)(int)uVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar21 + (long)(int)uVar13 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  fVar65 = (float)uVar19;
                    /* catch() { ... } // from try @ 0248d4bc with catch @ 0248d450
                       catch() { ... } // from try @ 0248d530 with catch @ 0248d450
                       catch() { ... } // from try @ 0248d5dc with catch @ 0248d450
                       catch() { ... } // from try @ 0248d620 with catch @ 0248d450
                       catch() { ... } // from try @ 0248d65c with catch @ 0248d450 */
  if (in_stack_000017bc == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar49 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar57 = *(float *)(unaff_x19 + 199);
    fVar69 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar49 = fVar65 * fVar49 * fVar69;
                    /* try { // try from 0248d48c to 0258d49b has its CatchHandler @ 0248d540 */
    fVar70 = fVar49 * (float)(int)(fVar57 / fVar49);
    uVar50 = (ulong)(uint)fVar70;
    param_2 = extraout_x1_13;
    if (fVar70 <= fVar57) {
      fVar70 = fVar57 + fVar49;
    }
LAB_0248d614:
                    /* catch() { ... } // from try @ 0248d55c with catch @ 0248d614
                       catch() { ... } // from try @ 0248d5fc with catch @ 0248d614 */
    *(float *)(unaff_x19 + 199) = fVar70;
  }
  else {
                    /* try { // try from 0248d4ac to 0258d4bb has its CatchHandler @ 0248d53c */
    if (*(float *)(unaff_x19 + 0x55) == 0.0) {
      if ((char)unaff_x19[0x1d] == '\0') {
        if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                    /* try { // try from 0248d57c to 0258d57f has its CatchHandler @ 0248d610 */
                    /* try { // try from 0248d580 to 0258d5ab has its CatchHandler @ 0248d624 */
          fVar49 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
        }
        fVar70 = *(float *)(unaff_x19 + 199);
        fVar57 = (float)FUN_026fd474(&stack0x00001770,0);
        if (unaff_x19[0x1f] != 0) {
                    /* try { // try from 0248d5b8 to 0258d5db has its CatchHandler @ 0248d60c */
                    /* try { // try from 0248d5dc to 0258d5fb has its CatchHandler @ 0248d450 */
          fVar69 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
          fVar70 = fVar70 + fVar69 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                     fVar65 * (in_stack_000000b0 + fVar49 * fVar57) +
                                     fStack00000000000000c8 *
                                     (in_stack_000000c0._4_4_ +
                                     fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
          *(float *)(unaff_x19 + 199) = fVar70;
          param_2 = extraout_x1_14;
          goto joined_r0x0248d568;
        }
        goto LAB_02491464;
      }
                    /* try { // try from 0248d4bc to 0258d4d3 has its CatchHandler @ 0248d450 */
      if (*unaff_x27 == 0) goto LAB_02491464;
                    /* try { // try from 0248d4d4 to 0258d4d7 has its CatchHandler @ 0248d534 */
                    /* try { // try from 0248d4d8 to 0258d4f3 has its CatchHandler @ 0248d538 */
                    /* try { // try from 0248d4f4 to 0258d4f7 has its CatchHandler @ 0248d530 */
      fVar70 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
               (*(float *)((long)unaff_x19 + 0x2a4) +
               fVar65 * in_stack_000000b0 +
               fStack00000000000000c8 *
               (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
      uVar50 = (ulong)(uint)fVar70;
                    /* try { // try from 0248d4f8 to 0258d52b has its CatchHandler @ 0248d538 */
      fVar70 = *(float *)(unaff_x19 + 199) - fVar70;
      *(float *)(unaff_x19 + 199) = fVar70;
      if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
        fVar49 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        uVar50 = (ulong)(uint)fVar49;
        fVar70 = fVar70 - fVar49;
        goto LAB_0248d614;
      }
    }
    else {
      if (*unaff_x27 == 0) goto LAB_02491464;
                    /* try { // try from 0248d52c to 0258d52f has its CatchHandler @ 0248d53c */
                    /* catch() { ... } // from try @ 0248d4f4 with catch @ 0248d530
                       try { // try from 0248d530 to 0258d55b has its CatchHandler @ 0248d450 */
                    /* catch() { ... } // from try @ 0248d4d4 with catch @ 0248d534 */
                    /* catch() { ... } // from try @ 0248d4d8 with catch @ 0248d538
                       catch() { ... } // from try @ 0248d4f8 with catch @ 0248d538 */
                    /* catch() { ... } // from try @ 0248d4ac with catch @ 0248d53c
                       catch() { ... } // from try @ 0248d52c with catch @ 0248d53c */
                    /* catch() { ... } // from try @ 0248d48c with catch @ 0248d540 */
      fVar69 = *(float *)(unaff_x19 + 199);
                    /* try { // try from 0248d55c to 0258d573 has its CatchHandler @ 0248d614 */
      fVar70 = fVar69 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                        (*(float *)((long)unaff_x19 + 0x2a4) +
                        (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                        fStack00000000000000c8 *
                        (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar70;
joined_r0x0248d568:
                    /* try { // try from 0248d5fc to 0258d60b has its CatchHandler @ 0248d614 */
      if ((unaff_w29 != 0) || (uVar50 = (ulong)(uint)fVar69, in_stack_000017bc == 0x200b)) {
                    /* catch() { ... } // from try @ 0248d5b8 with catch @ 0248d60c */
        fVar49 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        uVar50 = (ulong)(uint)fVar49;
                    /* catch() { ... } // from try @ 0248d57c with catch @ 0248d610 */
        fVar70 = fVar70 + fVar49;
        goto LAB_0248d614;
      }
    }
  }
  lVar21 = *unaff_x25;
                    /* try { // try from 0248d61c to 0258d61f has its CatchHandler @ 0248d664 */
                    /* try { // try from 0248d620 to 0258d647 has its CatchHandler @ 0248d450 */
                    /* catch() { ... } // from try @ 0248d580 with catch @ 0248d624 */
  if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x38), lVar30 == 0)) goto LAB_02491464;
  uVar13 = *in_stack_00000148;
  uVar27 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar27 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar30 + (int)uVar13 * unaff_x21 + 0x144) = fVar70;
  iVar14 = (int)unaff_x21;
  uVar34 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) || ((float)uVar13 == in_stack_00000078._4_4_)
       ) goto LAB_0248d6b8;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
      uVar50 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar13 != in_stack_00000078._4_4_) goto LAB_0248dc08;
    }
LAB_0248d6b8:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar49 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)System_Threading_Timer_TimerComparer_TypeInfo,param_2);
      }
      if (((fStack000000000000004c < ABS(fVar49)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar49);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar49;
        *(float *)(unaff_x19 + 0x9a) = fVar49 + *(float *)(unaff_x19 + 0x9a);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar21 = *(long *)puVar9;
        }
        lVar30 = *(long *)(lVar21 + 0xb8);
        if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar30 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar30 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar21 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar21 = *(long *)(lVar21 + 0xb8);
          *(float *)(lVar21 + 0x7bc) = fVar49 + *(float *)(lVar21 + 0x7bc);
          *(float *)(lVar21 + 0x800) = fVar49 + *(float *)(lVar21 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar21 + 0x788),0x378);
          FUN_013b86dc(lVar21 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar70 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar69 = *(float *)((long)unaff_x19 + 0x4c4) - fVar70;
    fVar49 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar69 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar49 = fVar69;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar49;
    fVar57 = *(float *)(unaff_x19 + 0x98);
    if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
      in_stack_000017b8 = fVar49;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
    }
    lVar21 = *unaff_x25;
    if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x50), lVar30 == 0)) goto LAB_02491464;
    uVar13 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar30 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar37 = lVar30 + (long)(int)uVar13 * 0x5c;
    *(int *)(lVar37 + 0x34) = (int)unaff_x19[0x92];
    iVar12 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar12;
    *(int *)(lVar37 + 0x38) = iVar12;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar37 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar12 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar12 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar12;
    *(int *)(lVar37 + 0x40) = iVar12;
    *(int *)(lVar37 + 0x24) = (*(int *)(lVar37 + 0x3c) - *(int *)(lVar37 + 0x34)) + 1;
    *(undefined4 *)(lVar37 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar68 = *(undefined4 *)(lVar21 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
    lVar30 = lVar30 + (long)(int)uVar13 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar69;
    *(undefined4 *)(lVar30 + 0x6c) = uVar68;
    lVar21 = *unaff_x25;
    if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x50), lVar30 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar57 = fVar57 - fVar70;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(undefined4 *)(lVar30 + 0x74) =
         *(undefined4 *)(lVar21 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
    *(float *)(lVar30 + 0x78) = fVar57;
    lVar21 = *unaff_x25;
    if ((lVar21 == 0) || (lVar37 = *(long *)(lVar21 + 0x50), lVar37 == 0)) goto LAB_02491464;
    lVar38 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar37 + lVar38 * 0x5c;
    *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - fVar65 * in_stack_00000130._4_4_;
    *(float *)(lVar30 + 0x5c) = in_stack_000000d8._4_4_;
    if (*(int *)(lVar30 + 0x24) == 1) {
      *(int *)(lVar37 + lVar38 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*unaff_x27 == 0) || (lVar30 = *(long *)(lVar21 + 0x38), lVar30 == 0)) goto LAB_02491464;
    lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar27 = (uint)*(undefined8 *)(lVar30 + 0x18);
    if (uVar27 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(char *)(lVar30 + lVar39 * unaff_x21 + 0x194) == '\0') &&
       (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar27 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar65 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fStack00000000000000c8 *
              (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar49 = -fVar65;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar49 = fVar65;
    }
    lVar37 = lVar37 + lVar38 * 0x5c;
    *(float *)(lVar37 + 0x58) = *(float *)(lVar30 + lVar39 * unaff_x21 + 0x144) + fVar49;
    fVar49 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar37 + 0x48) = fStack0000000000000050 + (fVar57 - fVar69);
    *(float *)(lVar37 + 0x4c) = fVar57;
    uVar50 = (ulong)(uint)(0.0 - fVar49);
    *(float *)(lVar37 + 0x50) = 0.0 - fVar49;
    *(float *)(lVar37 + 0x54) = fVar69;
    plVar28 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar43 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar21 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar12 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar12;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar21 != 0) && (*(long *)(lVar21 + 0x50) != 0)) {
          if (*(int *)(*(long *)(lVar21 + 0x50) + 0x18) <= iVar12) {
            FUN_024d6e60();
            lVar21 = unaff_x19[0x6c];
            if (lVar21 == 0) goto LAB_02491464;
          }
          lVar21 = *(long *)(lVar21 + 0x38);
          if (lVar21 != 0) {
            if (*in_stack_00000148 < *(uint *)(lVar21 + 0x18)) {
              fVar49 = *(float *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
              if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                fVar65 = 0.0;
                if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                  fVar65 = *(float *)((long)unaff_x19 + 0x2c4);
                }
                uVar23 = 0;
                fVar65 = *(float *)(unaff_x19 + 0x9a) +
                         fVar49 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                         fStack0000000000000054 *
                         (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                         fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar65);
              }
              else {
                if ((in_stack_000017bc == 0x2029) || (fVar65 = 0.0, in_stack_000017bc == 10)) {
                  fVar65 = *(float *)((long)unaff_x19 + 0x2c4);
                }
                uVar23 = 1;
                fVar65 = *(float *)(unaff_x19 + 0x9a) +
                         *(float *)(unaff_x19 + 0x57) +
                         fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar65);
              }
              *(float *)(unaff_x19 + 0x9a) = fVar65;
              *(undefined1 *)((long)unaff_x19 + 700) = uVar23;
              lVar21 = *plVar28;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar21 = *plVar28;
              }
              uVar17 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 0x99) = fVar49;
              uVar50 = NEON_rev64(uVar17,4);
              unaff_x19[0x98] = uVar50;
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
        }
        goto LAB_02491464;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_02491464;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar34 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
  }
LAB_0248dc08:
  uVar13 = *in_stack_00000148;
  if (uVar27 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar30 + (int)uVar13 * unaff_x21 + 0x194) != '\0') {
    lVar30 = lVar30 + (int)uVar13 * unaff_x21;
    uVar52 = *(ulong *)(lVar30 + 0x11c);
    uVar50 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar52 ^ (uVar52 ^ uVar50) &
                  CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar52 >> 0x20)),
                           -(uint)((float)uVar50 < (float)uVar52));
    uVar52 = *(ulong *)(in_stack_00000070 + 0x238);
    uVar50 = *(ulong *)(lVar30 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         uVar50 ^ (uVar50 ^ uVar52) &
                  CONCAT44(-(uint)((float)(uVar50 >> 0x20) < (float)(uVar52 >> 0x20)),
                           -(uint)((float)uVar50 < (float)uVar52));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar21 + 0x58);
    if (lVar30 == 0) goto LAB_02491464;
    iVar12 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar30 + 0x18) < iVar12) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar21 + 0x58),iVar12,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar21 = *in_stack_00000150;
      if (lVar21 == 0) goto LAB_02491464;
    }
    lVar30 = *(long *)(lVar21 + 0x58);
    if (lVar30 == 0) goto LAB_02491464;
    uVar27 = *(uint *)(unaff_x19 + 0x95);
    lVar37 = (long)(int)uVar27;
    uVar13 = *(uint *)(lVar30 + 0x18);
    if (uVar13 <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar38 = lVar30 + lVar37 * 0x14;
    fVar65 = *(float *)(lVar38 + 0x30);
    uVar50 = (ulong)(uint)fVar65;
    *(undefined4 *)(lVar38 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar49 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar65 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar49 = fVar65;
    }
    *(float *)(lVar38 + 0x30) = fVar49;
    uVar34 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar34 == 0 && uVar27 == 0) {
      *(uint *)(lVar30 + lVar37 * 0x14 + 0x20) = uVar34;
      unaff_x25 = in_stack_00000150;
    }
    else {
      uVar4 = uVar34 - 1;
      if (0 < (int)uVar34) {
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= uVar4)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar27 != *(uint *)(lVar21 + (long)(int)uVar4 * (long)iVar14 + 0x68)) {
          if (uVar27 - 1 < uVar13) {
            *(uint *)(lVar30 + 0x20 + (long)(int)(uVar27 - 1) * 0x14 + 4) = uVar4;
            *(uint *)(lVar30 + 0x20 + lVar37 * 0x14) = uVar34;
            unaff_x25 = in_stack_00000150;
            goto LAB_0248dc84;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      unaff_x25 = in_stack_00000150;
      if ((float)uVar34 == in_stack_00000078._4_4_) {
        *(float *)(lVar30 + lVar37 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  plVar28 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] != '\0') ||
     ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
    if ((unaff_w29 == 0) &&
       (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)
        ))) {
      if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
        if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
             (0xfd < in_stack_000017bc - 0x1101)) || (uVar52 = FUN_024e95f0(0), (uVar52 & 1) != 0))
           && ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
        goto LAB_0248ded4;
        lVar21 = FUN_024e94b0(0);
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_02491464;
        uVar52 = FUN_0129aa60(*(long *)(lVar21 + 0x10),&stack0x00000880,
                              *(undefined8 *)
                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                             );
        if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
          lVar21 = FUN_024e94b0(0);
          if (((lVar21 == 0) || (*in_stack_00000150 == 0)) ||
             (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148 + 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (*(long *)(lVar21 + 0x18) == 0) goto LAB_02491464;
          in_stack_00000880 =
               (uint)*(ushort *)(lVar30 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar14 + 0x20)
          ;
          uVar22 = FUN_0129aa60(*(long *)(lVar21 + 0x18),&stack0x00000880,
                                *(undefined8 *)
                                 System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                               );
          if ((uVar52 & 1) != 0) goto LAB_0248e0dc;
          if ((uVar22 & 1) == 0) goto LAB_0248e1b0;
          unaff_x25 = in_stack_00000150;
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          if ((bStack000000000000005c & 1) == 0) {
            bStack000000000000005c = 0;
            goto LAB_0248e168;
          }
        }
        else {
          in_stack_00000880 = in_stack_000017bc;
          if ((uVar52 & 1) == 0) {
LAB_0248e1b0:
            plVar28 = (long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 0;
            unaff_x25 = in_stack_00000150;
            goto LAB_0248e168;
          }
LAB_0248e0dc:
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x25 = in_stack_00000150;
          if ((uint)unaff_x22 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
          goto LAB_0248e168;
        }
joined_r0x0248e0fc:
        System_Threading_Mutex_TypeInfo = (undefined *)plVar28;
        if (unaff_w29 != 0) {
LAB_0248e100:
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
        }
        if (*(int *)(*plVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 1;
      }
      else {
LAB_0248ded4:
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
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
      *(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0xe78) = 0xffffffff;
    }
  }
LAB_0248e168:
  if (*(int *)(*plVar28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar43 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
LAB_0248ab98:
  fVar49 = (float)uVar19;
  fVar65 = 1.0;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar21 = unaff_x19[0x8e];
  if (lVar21 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar21 + 0x18)) {
      if (*(uint *)(lVar21 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar13 = *(uint *)(lVar21 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar13 == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar17 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar18 = FUN_0176eb1c(&stack0x00001788,0);
        uVar17 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar17,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar18,0);
        if (*(int *)(*plVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar43);
        }
        FUN_026610e4(uVar17,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        unaff_x25 = in_stack_00000150;
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar13 == 0x3c)) goto code_r0x0248a9ac;
      if ((*unaff_x25 != 0) && (lVar21 = *(long *)(*unaff_x25 + 0x38), lVar21 != 0)) {
        if (*in_stack_00000148 < *(uint *)(lVar21 + 0x18)) {
          lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar21 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar21 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar21 + 0x38);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_0248e4dc:
    fVar49 = (float)uVar50;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar49 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar49 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar65 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar49 < fVar65) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar69 = (*(float *)((long)unaff_x19 + 0x234) - fVar49) * 0.5;
        if (fVar69 <= DAT_028aa298) {
          fVar69 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar49;
        fVar69 = (fVar49 + fVar69) * 20.0 + 0.5;
        fVar49 = DAT_02958220;
        if (fVar69 != INFINITY) {
          fVar49 = (float)(int)fVar69 / 20.0;
        }
        if (fVar65 <= fVar49) {
          fVar49 = fVar65;
        }
        goto LAB_0248e598;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar17 = FUN_0176eb1c(_fStack0000000000000038,0);
      uVar18 = FUN_017840ac(in_stack_00000040,0);
      uVar17 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar17,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar18,
                            0);
      if (*(int *)(*plVar43 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar43);
      }
      FUN_02660dac(uVar17,0);
    }
    puVar9 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x958))();
      lVar21 = *(long *)puVar9;
      goto LAB_02491474;
    }
    lVar21 = *plVar28;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar21 = *plVar28;
    }
    plVar28 = (long *)PTR_DAT_033ed410;
    lVar21 = **(long **)(lVar21 + 0xb8);
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    iVar14 = *(int *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*unaff_x25 == 0) || (lVar21 = *(long *)(*unaff_x25 + 0x60), lVar21 == 0))
    goto LAB_02491464;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar21 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7d94(lVar21 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    iVar12 = (int)unaff_x19[0x4d];
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
    lVar21 = unaff_x19[0xea];
    in_stack_00000088 = (float *)in_stack_000000b8;
    fStack0000000000000090 = in_stack_000000c0._4_4_;
    if (iVar12 < 0x401) {
      if (iVar12 == 0x100) {
        if (lVar21 == 0) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar17 = *(undefined8 *)(lVar21 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar30 = *(long *)(*unaff_x25 + 0x58), lVar30 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar49 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar49 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar21 + 0x2c);
        fVar49 = (0.0 - fVar49) - fStack0000000000000020;
      }
      else if (iVar12 == 0x200) {
        if (lVar21 == 0) goto LAB_02491464;
        if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fStack0000000000000090 = (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
        uVar17 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar21 + 0x24) +
                          (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar21 = *(long *)(*unaff_x25 + 0x58), lVar21 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar21 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar21 = lVar21 + (long)(int)uStack0000000000000030 * 0x14;
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar49 = ((fStack0000000000000020 + *(float *)(lVar21 + 0x28) + *(float *)(lVar21 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar49 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar12 != 0x400) goto LAB_0248eb64;
        if (lVar21 == 0) goto LAB_02491464;
        if (*(int *)(lVar21 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar17 = *(undefined8 *)(lVar21 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar30 = *(long *)(*unaff_x25 + 0x58), lVar30 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar30 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          in_stack_000017b8 = *(float *)(lVar30 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar21 + 0x20);
        fVar49 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      in_stack_00000088 =
           (float *)CONCAT44((float)((ulong)uVar17 >> 0x20) + 0.0,(float)uVar17 + fVar49);
    }
    else if (iVar12 == 0x800) {
      if (lVar21 == 0) goto LAB_02491464;
      if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar49 = ((float)*(undefined8 *)(lVar21 + 0x24) + (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5
      ;
      fStack0000000000000090 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5 + 0.0,
                             fVar49 + 0.0);
    }
    else {
      if (iVar12 == 0x1000) {
        if (lVar21 == 0) goto LAB_02491464;
        if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar49 = (float)*(undefined8 *)(lVar21 + 0x24) + (float)*(undefined8 *)(lVar21 + 0x30);
        fVar65 = (float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
      }
      else {
        if (iVar12 != 0x2000) goto LAB_0248eb64;
        if (lVar21 == 0) goto LAB_02491464;
        if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar49 = (float)*(undefined8 *)(lVar21 + 0x24) + (float)*(undefined8 *)(lVar21 + 0x30);
        fVar65 = (float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
      }
      fVar49 = fVar49 * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(fVar65 * 0.5 + 0.0,
                             fVar49 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5
                                      ));
    }
LAB_0248eb64:
    lVar21 = FUN_0249b7f8();
    if (lVar21 == 0) goto LAB_02491464;
    FUN_026a125c(lVar21,0);
    __x = DAT_028aa048;
    *(float *)((long)unaff_x19 + 0x6dc) = fVar49;
    dVar51 = modf(__x,(double *)&stack0x00000880);
    puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (dVar51 == 0.5) {
      fVar65 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar65 = fVar65 + 1.0;
      }
    }
    else {
      fVar65 = 255.0;
    }
    dVar51 = modf(__x,(double *)&stack0x00000880);
    if (dVar51 == 0.5) {
      fVar69 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar69 = fVar69 + 1.0;
      }
    }
    else {
      fVar69 = 255.0;
    }
    dVar51 = modf(__x,(double *)&stack0x00000880);
    if (dVar51 == 0.5) {
      fVar70 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar70 = fVar70 + 1.0;
      }
    }
    else {
      fVar70 = 255.0;
    }
    dVar51 = modf(__x,(double *)&stack0x00000880);
    if (dVar51 == 0.5) {
      fVar57 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar57 = fVar57 + 1.0;
      }
    }
    else {
      fVar57 = 255.0;
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
    lVar21 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar21 = *(long *)puVar9;
    }
    puVar25 = *(undefined4 **)(lVar21 + 0xb8);
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar25,puVar25[1],puVar25[2],puVar25[3],&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar21 = *in_stack_00000150;
    if (lVar21 == 0) goto LAB_02491464;
    uVar13 = *in_stack_00000148;
    if ((int)uVar13 < 1) {
      iStack00000000000000a4 = 0;
      iVar14 = 0;
      plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      goto LAB_02491068;
    }
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_02491464;
    iVar12 = 0;
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
         (int)fVar65 & 0xffU | ((int)fVar69 & 0xffU) << 8 | ((int)fVar70 & 0xffU) << 0x10 |
         (int)fVar57 << 0x18;
    fVar69 = 0.0;
    fVar65 = 0.0;
    lStack0000000000000128 = 0x2e0;
    fStack0000000000000098 = fStack00000000000000a8;
    in_stack_000000a0 = fStack00000000000000ac;
    fStack000000000000004c = fStack00000000000000ac;
    fStack0000000000000050 = (float)uStack0000000000000094;
    in_stack_00000078._4_4_ = fStack00000000000000a8;
    in_stack_00000068._4_4_ = fStack00000000000000ac;
    uStack0000000000000060 = uStack0000000000000094;
    uVar27 = 0;
    uVar34 = 1;
    goto LAB_0248ef74;
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar52 = FUN_024d0688();
  if (((uVar52 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar13,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
  goto LAB_02491464;
  uVar27 = *in_stack_00000148;
  if (*(uint *)(lVar21 + 0x18) <= uVar27)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = (long)(int)uVar27;
  cVar24 = *(char *)(lVar21 + lVar37 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar30 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar27) {
    uVar13 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar13 == 0x2026) {
      lVar38 = unaff_x19[0xc9];
      lVar21 = lVar21 + lVar37 * unaff_x21;
      *(undefined4 *)(lVar21 + 0x2c) = 0;
      *(long *)(lVar21 + 0x30) = lVar38;
      *(long *)(lVar21 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar21 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar21 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar27 + 1);
    }
    else if (uVar13 == 3) {
      if ((*unaff_x27 == 0) || (lVar38 = FUN_024b11ac(*unaff_x27,0), lVar38 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar38,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar21 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      unaff_w20 = 1;
      *(ulong *)(lVar21 + lVar37 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar27 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  plVar28 = (long *)System_Threading_Mutex_TypeInfo;
  in_stack_000017bc = uVar13;
  if (((int)uVar27 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar13 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (long)(int)uVar27 * (long)iVar14;
    *(undefined1 *)(lVar21 + 0x194) = 0;
    *(undefined2 *)(lVar21 + 0x20) = 0x200b;
    *(undefined4 *)(lVar21 + 100) = 0;
    *in_stack_00000148 = uVar27 + 1;
    unaff_x25 = in_stack_00000150;
    goto LAB_0248ab98;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x63c);
  fVar69 = fVar65;
  if (iVar12 == 0) {
    uVar27 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar27 >> 4 & 1) == 0) {
      if ((uVar27 >> 3 & 1) == 0) {
        if ((uVar27 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar52 = FUN_016f92d4(uVar13,0);
          if ((uVar52 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_016f95a8(uVar13,0);
            uVar13 = uVar13 & 0xffff;
            fVar69 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar52 = FUN_016f9218(uVar13,0);
        if ((uVar52 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_016f9724(uVar13,0);
          goto LAB_0248af70;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar52 = FUN_016f92d4(uVar13,0);
      fVar69 = 1.0;
      if ((uVar52 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016f95a8(uVar13,0);
LAB_0248af70:
        uVar13 = uVar13 & 0xffff;
        fVar69 = 1.0;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar13;
    if (iVar12 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar12 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
      lVar37 = *(long *)(lVar21 + 0x40);
      unaff_x19[0xd2] = lVar37;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar21 + 0x48);
      if ((lVar37 == 0) || (lVar21 = FUN_024ebfa0(lVar37,0), lVar21 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar37 = CONCAT44(in_stack_00000884,in_stack_00000880);
      plVar28 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      if (lVar37 == 0) goto LAB_0248ab98;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar21 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar21 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar49 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar12 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar57 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar70 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar70 = 1.0;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar70 = (fVar49 / (float)iVar12) * fVar57 * fVar70;
      iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar49 = *(float *)(unaff_x19 + 0x3c);
      if (iVar12 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar57 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar64 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar64 = fVar65;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar55 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar37 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar37 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar44 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar37 + 0x20) == 0) goto LAB_02491464;
        fVar45 = *(float *)(lVar37 + 0x2c);
        fVar66 = (float)FUN_026fd668(*(long *)(lVar37 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar65 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar62 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar59 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar46 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar46 = fVar70 * fVar62 * fVar59 * fVar46;
        fVar64 = (fVar49 / (float)iVar12) * fVar57 * fVar64;
        fVar49 = fVar64 * (fVar55 / fVar44) * fVar45 * fVar66;
        fVar64 = fVar64 / fVar49;
        fVar65 = fVar64 * fVar65;
        fVar70 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar64 = fVar64 * fVar70;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar57 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar37 + 0x20) == 0) goto LAB_02491464;
        fVar64 = *(float *)(lVar37 + 0x2c);
        fVar55 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar55 = 1.0;
        }
        fVar44 = (float)FUN_026fd668(*(long *)(lVar37 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar65 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar66 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar46 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar46 = fVar70 * fVar45 * fVar66 * fVar46;
        fVar49 = (fVar49 / (float)iVar12) * fVar57 * fVar55 * fVar64 * fVar44;
        fVar64 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar21 = unaff_x19[0x6c];
      unaff_x19[200] = lVar37;
      if ((lVar21 == 0) || (lVar37 = *(long *)(lVar21 + 0x38), lVar37 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar37 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar37 + 0x2c) = 1;
      *(float *)(lVar37 + 0x160) = fVar49;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar37 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar37 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar37 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar30;
      goto LAB_0248b384;
    }
    lVar21 = *in_stack_00000150;
    fVar70 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar70 = fVar49;
    }
    fVar46 = 0.0;
    if (lVar21 == 0) goto LAB_02491464;
    fVar65 = 0.0;
    fVar64 = 0.0;
  }
  else {
    if (iVar12 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    uVar27 = *in_stack_00000148;
    uVar13 = *(uint *)(lVar21 + 0x18);
    if (uVar13 <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = *(long *)(lVar21 + (int)uVar27 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar30;
    plVar28 = (long *)System_Threading_Mutex_TypeInfo;
    unaff_x25 = in_stack_00000150;
    if (lVar30 == 0) goto LAB_0248ab98;
    lVar37 = lVar21 + (int)uVar27 * unaff_x21;
    lVar30 = *(long *)(lVar37 + 0x38);
    unaff_x19[0x1f] = lVar30;
    unaff_x19[0x22] = *(long *)(lVar37 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar37 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar30 == 0) goto LAB_02491464;
      fVar70 = *(float *)(unaff_x19 + 0x3c);
      iVar12 = FUN_026fd110(lVar30 + 0x50,0);
      lVar21 = unaff_x19[0x1f];
    }
    else {
      lVar37 = unaff_x19[0x8e];
      if (lVar37 == 0) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar37 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar27 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar13 <= uVar27 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar30 == 0) goto LAB_02491464;
      fVar70 = *(float *)(lVar21 + (long)(int)(uVar27 - 1) * (long)iVar14 + 0x60);
      iVar12 = FUN_026fd110(lVar30 + 0x50,0);
      lVar21 = *unaff_x27;
    }
    if (lVar21 == 0) goto LAB_02491464;
    fVar55 = (float)FUN_026fd120(lVar21 + 0x50,0);
    fVar57 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar57 = fVar65;
    }
    fVar64 = 0.0;
    fVar65 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar65 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar64 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar21 = unaff_x19[200];
    if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_02491464;
    fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar45 = *(float *)(lVar21 + 0x2c);
    fVar49 = (float)FUN_026fd668(*(long *)(lVar21 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar66 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar46 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar21 = unaff_x19[0x6c];
    if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x38), lVar30 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar57 = ((fVar69 * fVar70) / (float)iVar12) * fVar55 * fVar57;
    fVar49 = fVar57 * fVar44 * fVar45 * fVar49;
    *(float *)(lVar30 + 0x160) = fVar49;
    uVar13 = *(uint *)(unaff_x19 + 0x23);
    fVar46 = fVar57 * fVar66 * fVar62 * fVar46;
    if (uVar13 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar30 = unaff_x19[0xe0];
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar30 + 0x4c);
    }
LAB_0248b384:
    fVar70 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar70 = fVar49;
    }
  }
  lVar21 = *(long *)(lVar21 + 0x38);
  if (lVar21 == 0) goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar21 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar21 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar21 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(int *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
  goto LAB_02491464;
  uVar13 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar18 = unaff_x28[1];
  uVar17 = *unaff_x28;
  lVar21 = lVar21 + (int)uVar13 * unaff_x21;
  *(undefined4 *)(lVar21 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar21 + 0x184) = uVar18;
  *(undefined8 *)(lVar21 + 0x17c) = uVar17;
  if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar21 = *(long *)(unaff_x19[200] + 0x20), lVar21 == 0))
  goto LAB_02491464;
  FUN_026fd62c(&stack0x00000bf8,lVar21,0);
  unaff_x28[0x1df] = in_stack_00000c00;
  unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_016f68bc(in_stack_000017bc,0);
    unaff_w29 = uVar13 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    in_stack_000000b0 = 0.0;
    fVar55 = 0.0;
    fVar57 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar27 = *in_stack_00000148;
    uVar13 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar27 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar21 + 0x18) <= uVar27 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar21 = *(long *)(lVar21 + (long)(int)(uVar27 + 1) * (long)iVar14 + 0x30);
      if ((((lVar21 == 0) || (*unaff_x27 == 0)) ||
          (lVar30 = *(long *)(*unaff_x27 + 0x128), lVar30 == 0)) ||
         (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar13 | *(int *)(lVar21 + 0x28) << 0x10;
      uVar19 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar68 = 0;
      if ((uVar19 & 1) == 0) {
        in_stack_000000b0 = 0.0;
        fVar55 = 0.0;
        fVar57 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar57 = *(float *)(in_stack_000016d8 + 0x14);
        fVar55 = *(float *)(in_stack_000016d8 + 0x18);
        in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar68 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar27 = *in_stack_00000148;
    }
    else {
      uVar68 = 0;
      in_stack_000000b0 = 0.0;
      fVar55 = 0.0;
      fVar57 = 0.0;
    }
    if (0 < (int)uVar27) {
      if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar21 + 0x18) <= (uint)((long)(int)uVar27 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar21 = *(long *)(lVar21 + ((long)(int)uVar27 + -1) * unaff_x21 + 0x30);
      if (((lVar21 == 0) || (*unaff_x27 == 0)) ||
         ((lVar30 = *(long *)(*unaff_x27 + 0x128), lVar30 == 0 ||
          (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar21 + 0x28) | uVar13 << 0x10;
      uVar19 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar19 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar57 = (float)FUN_024bb1bc(fVar57,fVar55,in_stack_000000b0,uVar68,
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
    fVar45 = *(float *)(unaff_x19 + 199);
    fVar44 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar45 = fVar45 - fVar70 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar45;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar45 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar44 = *(float *)(unaff_x19 + 0x55);
  fStack0000000000000080 = 0.0;
  if (fVar44 != 0.0) {
    fVar45 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar66 = (float)FUN_026fd464(&stack0x00001770,0);
    fStack0000000000000080 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
         (fVar44 * 0.5 - fVar70 * (fVar45 * 0.5 + fVar66));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
  }
  if (((cVar24 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar21 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_02681b9c(lVar21,0,0);
    fVar45 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar21 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar28 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar21 == 0) goto LAB_02491464;
      uVar19 = FUN_0267e1d8(lVar21,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar21 = unaff_x19[0x22];
        if (*(int *)(*plVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar28 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar21 == 0) goto LAB_02491464;
        fVar44 = (float)FUN_0267f610(lVar21,*(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0x54),0);
        if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
        fVar66 = *(float *)(*unaff_x27 + 0x1b0);
        fVar45 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
        fVar45 = fVar45 * fVar44 * fVar66 * 0.25;
        if (fVar44 < in_stack_00000130._4_4_ + fVar45) {
          in_stack_00000130._4_4_ = fVar44 - fVar45;
        }
      }
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    in_stack_000000c0._4_4_ = *(float *)(*unaff_x27 + 0x1b4);
  }
  else {
    lVar21 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_02681b9c(lVar21,0,0);
    in_stack_000000c0._4_4_ = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar21 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar28 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar21 == 0) goto LAB_02491464;
      uVar19 = FUN_0267e1d8(lVar21,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar21 = unaff_x19[0x22];
        if (*(int *)(*plVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar28 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar21 == 0) goto LAB_02491464;
        uVar19 = FUN_0267e1d8(lVar21,*(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar21 = unaff_x19[0x22];
          if (*(int *)(*plVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar28 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar21 == 0) goto LAB_02491464;
          fVar44 = (float)FUN_0267f610(lVar21,*(undefined4 *)(*(long *)(*plVar28 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar66 = *(float *)(*unaff_x27 + 0x1a8);
          fVar45 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
          fVar45 = fVar45 * fVar44 * fVar66 * 0.25;
          if (fVar44 < in_stack_00000130._4_4_ + fVar45) {
            in_stack_00000130._4_4_ = fVar44 - fVar45;
          }
          goto LAB_0248ba68;
        }
      }
    }
    fVar45 = 0.0;
  }
LAB_0248ba68:
  fVar59 = *(float *)(unaff_x19 + 199);
  fVar44 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar59 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar70 * (fVar57 + ((fVar44 - in_stack_00000130._4_4_) - fVar45));
  fVar57 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar66 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar46 + fVar70 * (fVar55 + in_stack_00000130._4_4_ + fVar57)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar57 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar62 = fVar66 - fVar70 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar57);
  fVar57 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar44 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar70 * (fVar45 + fVar45 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar57);
  param_2 = extraout_x1;
  fVar57 = fVar59;
  fVar55 = fVar44;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar24 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar61 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar57 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar48 = fVar61 * fVar70 * (fVar45 + in_stack_00000130._4_4_ + fVar57);
    fVar57 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar55 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar66 = fVar66 + 0.0;
    fVar62 = fVar62 + 0.0;
    fVar61 = fVar61 * fVar70 * (((fVar57 - fVar55) - in_stack_00000130._4_4_) - fVar45);
    fVar55 = fVar44 + fVar61;
    fVar57 = fVar59 + fVar48;
    fVar56 = (fVar48 - fVar61) * 0.5;
    fVar59 = (fVar59 + fVar61) - fVar56;
    fVar44 = (fVar44 + fVar48) - fVar56;
    param_2 = extraout_x1_04;
    fVar57 = fVar57 - fVar56;
    fVar55 = fVar55 - fVar56;
  }
  in_stack_00000118 = (ulong)(uint)fVar70;
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar48 = 0.0;
    fVar60 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar56 = fVar62;
    fVar61 = fVar66;
    fStack00000000000000e8 = fVar57;
    fStack00000000000000ec = fVar59;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar63 = (fVar44 + fVar59) * 0.5;
    fVar67 = (fVar62 + fVar66) * 0.5;
    fVar66 = fVar66 - fVar67;
    fVar53 = 0.0;
    fVar61 = fVar66;
    fVar47 = (float)FUN_02692df0(fVar57 - fVar63,_uStack0000000000000060,0);
    fVar62 = fVar62 - fVar67;
    fVar54 = 0.0;
    fVar57 = fVar62;
    fVar59 = (float)FUN_02692df0(fVar59 - fVar63,_uStack0000000000000060,0);
    fVar60 = 0.0;
    fVar44 = (float)FUN_02692df0(fVar44 - fVar63,_uStack0000000000000060,0);
    fVar44 = fVar63 + fVar44;
    fVar66 = fVar67 + fVar66;
    fVar60 = fVar60 + 0.0;
    fVar48 = 0.0;
    fVar55 = (float)FUN_02692df0(fVar55 - fVar63,_uStack0000000000000060,0);
    fVar55 = fVar63 + fVar55;
    fVar62 = fVar67 + fVar62;
    fVar48 = fVar48 + 0.0;
    param_2 = extraout_x1_00;
    fVar56 = fVar67 + fVar57;
    fVar61 = fVar67 + fVar61;
    fStack00000000000000e8 = fVar63 + fVar47;
    fStack00000000000000ec = fVar63 + fVar59;
    fStack00000000000000e0 = fVar54 + 0.0;
    fStack00000000000000e4 = fVar53 + 0.0;
  }
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar21 = *(long *)(*in_stack_00000150 + 0x38);
  uVar19 = (ulong)(uint)fVar70;
  if (lVar21 == 0) goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar21 + 0x120) = fVar56;
  *(float *)(lVar21 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar21 + 0x124) = fStack00000000000000e0;
  if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar21 + 0x114) = fVar61;
  *(float *)(lVar21 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar21 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar21 + 0x128) = fVar44;
  *(float *)(lVar21 + 300) = fVar66;
  *(float *)(lVar21 + 0x130) = fVar60;
  if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar21 + 0x134) = fVar55;
  *(float *)(lVar21 + 0x138) = fVar62;
  *(float *)(lVar21 + 0x13c) = fVar48;
  if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
  goto LAB_02491464;
  uVar13 = *in_stack_00000148;
  unaff_x22 = (long)(int)uVar13;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar21 + unaff_x22 * unaff_x21;
  *(int *)(lVar30 + 0x140) = (int)unaff_x19[199];
  fVar55 = *(float *)(unaff_x19 + 0x9a);
  uVar50 = (ulong)(uint)fVar55;
  fVar57 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar30 + 0x15c) = (fVar44 - fStack00000000000000ec) / (fVar61 - fVar56);
  *(float *)(lVar30 + 0x14c) = (fVar46 - fVar55) + fVar57;
  fVar65 = fVar65 * fVar70;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar65 = fVar65 / fVar69;
    fVar64 = (fVar64 * fVar70) / fVar69;
  }
  else {
    fVar64 = fVar64 * fVar70;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar10 = unaff_w29 != 0;
  fVar65 = fVar57 + fVar65;
  bVar11 = uVar13 != unaff_w24;
  if (bVar11 && bVar10) {
    fVar57 = *(float *)(unaff_x19 + 0x98);
    lVar21 = lVar21 + unaff_x22 * unaff_x21;
    *(float *)(lVar21 + 0x154) = fVar57;
    fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar21 + 0x148) = fVar57 - fVar55;
    *(float *)(lVar21 + 0x158) = fVar64;
    *(float *)(unaff_x19 + 0x97) = fVar57 - fVar55;
    fVar64 = fVar64 - fVar55;
    *(float *)(lVar21 + 0x150) = fVar64;
  }
  else {
    fVar64 = fVar57 + fVar64;
    fVar44 = fVar65;
    fVar66 = fVar64;
    if (fVar57 != 0.0) {
      fVar44 = (fVar65 - fVar57) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar66 = (fVar64 - fVar57) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar44 <= fVar65) {
        fVar44 = fVar65;
      }
      if (fVar64 <= fVar66) {
        fVar66 = fVar64;
      }
    }
    lVar21 = lVar21 + unaff_x22 * unaff_x21;
    fVar57 = fVar44;
    if (fVar44 <= *(float *)(unaff_x19 + 0x98)) {
      fVar57 = *(float *)(unaff_x19 + 0x98);
    }
    fVar46 = fVar66;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar66) {
      fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar46;
    fVar64 = fVar64 - fVar55;
    *(float *)(unaff_x19 + 0x98) = fVar57;
    *(float *)(lVar21 + 0x154) = fVar44;
    *(float *)(lVar21 + 0x158) = fVar66;
    *(float *)(lVar21 + 0x148) = fVar65 - fVar55;
    *(float *)(unaff_x19 + 0x97) = fVar65 - fVar55;
    *(float *)(lVar21 + 0x150) = fVar64;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar64;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar11 || !bVar10) {
      *(float *)(unaff_x19 + 0x96) = fVar57;
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar57 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar55 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fVar69 = (fVar70 * fVar55) / fVar69;
      uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar57 <= fVar69) {
        fVar57 = fVar69;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar57;
      param_2 = extraout_x1_01;
      goto LAB_0248bef4;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar11 || !bVar10) && (float)uVar50 == 0.0) {
      fVar69 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar65) {
        fVar69 = fVar65;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar69;
    }
  }
  lVar21 = *in_stack_00000150;
  if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x38), lVar30 == 0)) goto LAB_02491464;
  uVar13 = *in_stack_00000148;
  if (*(uint *)(lVar30 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + (int)uVar13 * unaff_x21;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  unaff_w26 = *(uint *)(unaff_x19 + 0x4e) & 0x18;
  if (((in_stack_000017bc != 9) &&
      ((((unaff_w29 != 0 || (in_stack_000017bc == 3)) || (in_stack_000017bc == 0x200b)) ||
       (in_stack_000017bc == 0xad)))) &&
     (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0 &&
      (*(int *)((long)unaff_x19 + 0x63c) != 1)))) {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar65 = (float)uVar50;
      fVar49 = 0.0;
      if ((0.0 < fVar65) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar49 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      uVar50 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar65)) + fVar49)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar13;
        }
        plVar43 = (long *)StringLiteral_302;
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar21 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar52 = FUN_02681b9c(lVar21,0,0);
        if ((uVar52 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5c];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar17,*(undefined8 *)(*plVar41 + 0x560));
          lVar21 = unaff_x19[0x5c];
          if (lVar21 == 0) goto LAB_02491464;
          *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar41 = (long *)unaff_x19[0x5c];
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        unaff_x25 = in_stack_00000150;
        in_stack_000017a8 = CONCAT44(3,uVar13);
        goto LAB_0248ab98;
      }
    }
    if ((((0x22 < in_stack_000017bc - 0x2007) ||
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) == 0)) &&
        (1 < in_stack_000017bc - 10)) && (in_stack_000017bc != 0xa0)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar71 = FUN_016fa418(in_stack_000017bc,0);
      param_2 = auVar71._8_8_;
      if ((auVar71._0_8_ & 1) == 0) goto LAB_0248cae0;
    }
    if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0x2060)) {
      lVar21 = *in_stack_00000150;
      if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x50), lVar30 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
      *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
    }
LAB_0248cae0:
    if (in_stack_000017bc != 0xa0) goto FUN_0248d088;
    if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x50), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    goto LAB_0248cf8c;
  }
  *(undefined1 *)(lVar30 + 0x194) = 1;
  pfVar29 = in_stack_00000088;
  pfVar33 = _fStack0000000000000098;
  if (unaff_w20 != 0) {
    lVar21 = *(long *)(lVar21 + 0x50);
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    pfVar33 = (float *)(lVar21 + 0x60);
    pfVar29 = (float *)(lVar21 + 100);
  }
  fVar69 = *pfVar33;
  fVar57 = *pfVar29;
  fVar65 = *(float *)(unaff_x19 + 0x6b);
  fVar55 = *(float *)(unaff_x19 + 199);
  in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar69) - fVar57;
  bVar10 = true;
  if ((fVar65 <= in_stack_000000d8._4_4_) && (bVar10 = false, !NAN(fVar65))) {
    bVar10 = fVar65 == -1.0;
  }
  if (!bVar10) {
    in_stack_000000d8._4_4_ = fVar65;
  }
  fVar65 = 0.0;
  if ((char)unaff_x19[0x1d] == '\0') {
    fVar65 = (float)FUN_026fd474(&stack0x00001770,0);
    uVar50 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    param_2 = extraout_x1_02;
  }
  fVar66 = *(float *)((long)unaff_x19 + 0x4c4);
  fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
  fVar44 = (float)uVar50;
  if (in_stack_000017bc != 0xad) {
    fVar49 = fVar70;
  }
  fVar70 = 0.0;
  if ((0.0 < fVar44) && (fVar70 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
    fVar70 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
  }
  fVar70 = (*(float *)(unaff_x19 + 0x96) - (fVar66 - fVar44)) + fVar70;
  uVar13 = *in_stack_00000148;
  if (in_stack_000000a0 < fVar70) {
    if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
      *(uint *)((long)unaff_x19 + 0x2dc) = uVar13;
    }
    plVar43 = (long *)StringLiteral_302;
    plVar28 = (long *)System_Threading_Mutex_TypeInfo;
    uVar17 = DAT_02941c08;
    if ((char)unaff_x19[0x46] != '\0') {
      fVar46 = *(float *)(unaff_x19 + 0x58);
      if (((fVar46 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar44)) &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar49 = *(float *)((long)unaff_x19 + 0x2b4) +
                 ((in_stack_00000018._4_4_ - fVar70) / (float)(int)unaff_x19[0x94]) /
                 fStack0000000000000054;
        if (fVar49 <= fVar46) {
          fVar49 = fVar46;
        }
        goto LAB_0248ea5c;
      }
      fVar44 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar70 = *(float *)(unaff_x19 + 0x49);
      uVar50 = (ulong)(uint)fVar70;
      if ((fVar70 < fVar44) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar49 = (fVar44 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar49 <= DAT_028aa298) {
          fVar49 = DAT_028aa298;
        }
        fVar65 = (fVar44 - fVar49) * 20.0 + 0.5;
        fVar49 = DAT_02958220;
        if (fVar65 != INFINITY) {
          fVar49 = (float)(int)fVar65 / 20.0;
        }
        if (fVar49 <= fVar70) {
          fVar49 = fVar70;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar44;
        goto LAB_0248e598;
      }
    }
    switch((int)unaff_x19[0x5b]) {
    case 1:
      lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *plVar28;
      }
      lVar30 = *(long *)(lVar21 + 0xb8);
      lVar21 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c(lVar21);
      }
      plVar43 = (long *)StringLiteral_302;
      lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c();
      }
      piVar20 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar21 + 0x80) + 0xa0);
      if (*piVar20 == 0) goto LAB_0248e4bc;
      lVar21 = *plVar28;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *plVar28;
      }
      FUN_013b8de4(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x00000880,
                   *(undefined8 *)
                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                  );
      memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
      iVar12 = FUN_024d66ec();
      goto LAB_0248c900;
    default:
      goto switchD_0248c274_caseD_2;
    case 3:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      goto LAB_0248c524;
    case 5:
      if ((uVar13 == 0) || ((int)in_stack_00001788 < 0)) {
        *in_stack_00000148 = 0;
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        unaff_x25 = in_stack_00000150;
        plVar43 = (long *)StringLiteral_302;
        in_stack_00001788 = 0xffffffff;
        in_stack_000017a8 = uVar17;
        goto LAB_0248ab98;
      }
      fVar49 = *(float *)(unaff_x19 + 0x98);
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (fVar49 - fVar66 <= in_stack_000000a0) {
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        uVar50 = *(ulong *)(*(long *)(*plVar28 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        lVar21 = NEON_rev64(uVar50,4);
        unaff_x19[0x98] = lVar21;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        unaff_x25 = in_stack_00000150;
        goto LAB_0248ab98;
      }
      break;
    case 6:
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      plVar43 = (long *)StringLiteral_302;
      lVar21 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar52 = FUN_02681b9c(lVar21,0,0);
      if ((uVar52 & 1) != 0) {
        plVar41 = (long *)unaff_x19[0x5c];
        uVar17 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar41 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar41 + 0x558))(plVar41,uVar17,*(undefined8 *)(*plVar41 + 0x560));
        lVar21 = unaff_x19[0x5c];
        if (lVar21 == 0) goto LAB_02491464;
        *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar41 = (long *)unaff_x19[0x5c];
        if (plVar41 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
    }
  }
  else {
switchD_0248c274_caseD_2:
    plVar28 = (long *)System_Threading_Mutex_TypeInfo;
    fVar70 = 1.0 - fVar64;
    uVar50 = (ulong)(uint)fVar70;
    fVar65 = ABS(fVar55) + fVar65 * fVar70 * fVar49;
    fVar49 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      fVar49 = 1.0;
    }
    if (fVar65 <= fVar49 * in_stack_000000d8._4_4_) goto LAB_0248cf18;
    if (((char)unaff_x19[0x5a] != '\0') && (uVar13 != *(uint *)(unaff_x19 + 0x92))) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar21 = *in_stack_00000150;
        if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x38), lVar30 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar70 = *(float *)(unaff_x19 + 0x9a);
        fVar55 = 0.0;
        if ((0.0 < fVar70) && (fVar55 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar55 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar55 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar30 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                 (fVar55 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar21 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar21 == 0) goto LAB_02491464;
        fVar70 = *(float *)(unaff_x19 + 0x9a);
        fVar55 = *(float *)(unaff_x19 + 0x57) +
                 fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar21 = *(long *)(lVar21 + 0x38);
      if (lVar21 == 0) goto LAB_02491464;
      uVar27 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar21 + 0x18) <= uVar27) ||
         (uVar34 = uVar27 - 1, *(uint *)(lVar21 + 0x18) <= uVar34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar50 = (ulong)(uint)(fVar55 + *(float *)(unaff_x19 + 0x96));
      fVar44 = (fVar55 + *(float *)(unaff_x19 + 0x96) + fVar70) -
               *(float *)(lVar21 + (int)uVar27 * unaff_x21 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) == 0 &&
           *(short *)(lVar21 + (long)(int)uVar34 * (long)iVar14 + 0x20) == 0xad) &&
         ((fVar44 < in_stack_000000a0 || ((int)unaff_x19[0x5b] == 0)))) {
        in_stack_00001788 = in_stack_00001788 - 1;
        in_stack_00000068._4_1_ = 0;
        in_stack_000017a8 = CONCAT44(0x2d,uVar34);
        *in_stack_00000148 = uVar34;
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        unaff_x25 = in_stack_00000150;
        plVar43 = (long *)StringLiteral_302;
        goto LAB_0248ab98;
      }
      if (*(short *)(lVar21 + (int)uVar27 * unaff_x21 + 0x20) == 0xad) {
        in_stack_00000068._4_1_ = 1;
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        unaff_x25 = in_stack_00000150;
        plVar43 = (long *)StringLiteral_302;
        goto LAB_0248ab98;
      }
      if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
        fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar55 <= fVar64) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
          fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
          uVar50 = (ulong)(uint)fVar55;
          fVar70 = *(float *)(unaff_x19 + 0x49);
          if ((fVar55 <= fVar70) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)))
          goto LAB_0248cc70;
LAB_024914c0:
          fVar49 = (fVar55 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar49 <= DAT_028aa298) {
            fVar49 = DAT_028aa298;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar55;
          fVar65 = (fVar55 - fVar49) * 20.0 + 0.5;
          fVar49 = DAT_02958220;
          if (fVar65 != INFINITY) {
            fVar49 = (float)(int)fVar65 / 20.0;
          }
          if (fVar49 <= fVar70) {
            fVar49 = fVar70;
          }
LAB_0248e598:
          *(float *)((long)unaff_x19 + 0x1dc) = fVar49;
          return;
        }
LAB_0249155c:
        fVar69 = fVar65;
        if (0.0 < fVar64) {
          fVar69 = fVar65 / (1.0 - fVar64);
        }
        fVar64 = fVar64 + (fVar65 - fVar49 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar69;
LAB_0249154c:
        if (fVar55 <= fVar64) {
          fVar64 = fVar55;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = fVar64;
        return;
      }
LAB_0248cc70:
      lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
      param_2 = extraout_x1_03;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *(long *)puVar9;
        param_2 = extraout_x1_05;
      }
      iVar12 = *(int *)(*(long *)(lVar21 + 0xb8) + 0xe78);
      if ((((float)iVar12 != fStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack000000000000005c ^ 1) & 1) == 0)) {
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
        goto LAB_02491464;
        uVar27 = *in_stack_00000148 - 1;
        if (*(uint *)(lVar21 + 0x18) <= uVar27)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        param_2 = extraout_x1_06;
        fStack0000000000000034 = (float)iVar12;
        if (*(short *)(lVar21 + (long)(int)uVar27 * (long)iVar14 + 0x20) == 0xad) {
          in_stack_00001788 = in_stack_00001788 - 1;
          in_stack_00000068._4_1_ = 0;
          in_stack_000017a8 = CONCAT44(0x2d,uVar27);
          *in_stack_00000148 = uVar27;
          plVar28 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x25 = in_stack_00000150;
          plVar43 = (long *)StringLiteral_302;
          goto LAB_0248ab98;
        }
      }
      if (fVar44 <= in_stack_000000a0) {
        uVar50 = uVar19;
        FUN_024d7014(fStack0000000000000054,uVar19,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        bStack000000000000005c = 1;
        in_stack_00000068._4_1_ = 0;
        fStack0000000000000058 = 1.4013e-45;
        plVar28 = (long *)System_Threading_Mutex_TypeInfo;
        unaff_x25 = in_stack_00000150;
        plVar43 = (long *)StringLiteral_302;
        goto LAB_0248ab98;
      }
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      }
      plVar43 = (long *)StringLiteral_302;
      plVar28 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar70 = *(float *)(unaff_x19 + 0x58);
        if ((fVar70 < *(float *)((long)unaff_x19 + 0x2b4)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar49 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar44) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar49 <= fVar70) {
            fVar49 = fVar70;
          }
LAB_0248ea5c:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar49;
          return;
        }
        fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar64 < fVar55) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_0249155c;
        fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
        uVar50 = (ulong)(uint)fVar55;
        fVar70 = *(float *)(unaff_x19 + 0x49);
        if ((fVar70 < fVar55) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_024914c0;
      }
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        uVar50 = uVar19;
        FUN_024d7014(fStack0000000000000054,uVar19,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        break;
      case 1:
        lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar21 = *plVar28;
        }
        lVar30 = *(long *)(lVar21 + 0xb8);
        lVar21 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
          lVar21 = FUN_00d5941c(lVar21);
        }
        lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
        if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
          lVar21 = FUN_00d5941c();
        }
        piVar20 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar21 + 0x80) + 0xa0);
        if (*piVar20 == 0) {
          in_stack_00000068._4_1_ = 0;
LAB_0248e4bc:
          in_stack_000017a8 = DAT_02941c08;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          unaff_x25 = in_stack_00000150;
          in_stack_00001788 = 0xffffffff;
          goto LAB_0248ab98;
        }
        lVar21 = *plVar28;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar21 = *plVar28;
        }
        FUN_013b8de4(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
        iVar12 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_0248c900:
        iVar15 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar15;
        in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
        unaff_x25 = in_stack_00000150;
        in_stack_00001788 = iVar12 - 1;
        in_stack_000017a8 = CONCAT44(0x2026,iVar15);
        goto LAB_0248ab98;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
        goto LAB_0248c628;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        uVar50 = uVar19;
        FUN_024d7014(fStack0000000000000054,uVar19,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        break;
      case 6:
        lVar21 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar52 = FUN_02681b9c(lVar21,0,0);
        if ((uVar52 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5c];
          uVar17 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar17,*(undefined8 *)(*plVar41 + 0x560));
          lVar21 = unaff_x19[0x5c];
          if (lVar21 == 0) goto LAB_02491464;
          *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar41 = (long *)unaff_x19[0x5c];
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_00000068._4_1_ = 0;
LAB_0248ca1c:
        unaff_x25 = in_stack_00000150;
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        goto LAB_0248ab98;
      default:
        goto switchD_0248ce4c_default;
      }
      in_stack_00000068._4_1_ = 0;
      bStack000000000000005c = 1;
      fStack0000000000000058 = 1.4013e-45;
      plVar28 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      plVar43 = (long *)StringLiteral_302;
      goto LAB_0248ab98;
    }
    if (((char)unaff_x19[0x46] != '\0') &&
       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
      fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
      if (fVar64 < fVar55) {
        fVar69 = fVar65 / fVar70;
        if (fVar64 <= 0.0) {
          fVar69 = fVar65;
        }
        fVar64 = fVar64 + (fVar65 - fVar49 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar69;
        goto LAB_0249154c;
      }
      fVar55 = *(float *)((long)unaff_x19 + 0x1dc);
      uVar50 = (ulong)(uint)fVar55;
      fVar70 = *(float *)(unaff_x19 + 0x49);
      if (fVar70 < fVar55) goto LAB_024914c0;
    }
    iVar12 = (int)unaff_x19[0x5b];
    if (iVar12 == 1) {
      lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *plVar28;
      }
      plVar43 = (long *)StringLiteral_302;
      lVar30 = *(long *)(lVar21 + 0xb8);
      lVar21 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c(lVar21);
      }
      lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
      if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
        lVar21 = FUN_00d5941c();
      }
      piVar20 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar21 + 0x80) + 0xa0);
      if (*piVar20 == 0) goto LAB_0248e4bc;
      lVar21 = *plVar28;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *plVar28;
      }
      FUN_013b8de4(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x00000880,
                   *(undefined8 *)
                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                  );
      memcpy(&stack0x00000c70,&stack0x00000880,0x378);
      goto LAB_0248c8f4;
    }
    if (iVar12 == 6) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar43 = (long *)StringLiteral_302;
      in_stack_00001788 = FUN_024d66ec();
      lVar21 = unaff_x19[0x5c];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar52 = FUN_02681b9c(lVar21,0,0);
      if ((uVar52 & 1) != 0) {
        plVar41 = (long *)unaff_x19[0x5c];
        uVar17 = (**(code **)(*unaff_x19 + 0x548))();
        if (plVar41 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar41 + 0x558))(plVar41,uVar17,*(undefined8 *)(*plVar41 + 0x560));
        lVar21 = unaff_x19[0x5c];
        if (lVar21 == 0) goto LAB_02491464;
        *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar41 = (long *)unaff_x19[0x5c];
        if (plVar41 == (long *)0x0) goto LAB_02491464;
        (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      }
      goto LAB_0248ca1c;
    }
    if (iVar12 != 3) goto LAB_0248cf18;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
LAB_0248c524:
    plVar43 = (long *)StringLiteral_302;
    in_stack_00001788 = FUN_024d66ec();
  }
LAB_0248c628:
  unaff_x25 = in_stack_00000150;
  in_stack_000017a8 = CONCAT44(3,uVar13);
  goto LAB_0248ab98;
switchD_0248ce4c_default:
  in_stack_00000068._4_1_ = 0;
LAB_0248cf18:
  if (in_stack_000017bc == 0xad) {
    if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
  }
  else if (in_stack_000017bc == 9) {
    lVar21 = *in_stack_00000150;
    if ((lVar21 == 0) || (lVar30 = *(long *)(lVar21 + 0x38), lVar30 == 0)) goto LAB_02491464;
    uVar13 = *in_stack_00000148;
    if (*(uint *)(lVar30 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar30 + (int)uVar13 * unaff_x21 + 0x194) = 0;
    *(uint *)((long)unaff_x19 + 0x49c) = uVar13;
    lVar30 = *(long *)(lVar21 + 0x50);
    if (lVar30 == 0) goto LAB_02491464;
    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
LAB_0248cf8c:
    *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
  }
  else {
    lVar21 = 0x4e4;
    if (*(char *)((long)unaff_x19 + 0x1cc) != '\0') {
      lVar21 = 0x13c;
    }
    param_2 = (ulong)*(uint *)((long)unaff_x19 + lVar21);
    if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
      (**(code **)(*unaff_x19 + 0x8c8))();
      param_2 = extraout_x1_08;
    }
    else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar45);
      param_2 = extraout_x1_07;
    }
    uVar13 = *in_stack_00000148;
    if (((uint)fStack0000000000000058 & 1) != 0) {
      *(uint *)(in_stack_00000070 + 0x1f0) = uVar13;
    }
    *(uint *)((long)unaff_x19 + 0x49c) = uVar13;
    *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
    if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x50), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    fStack0000000000000058 = 0.0;
    *(float *)(lVar21 + 0x60) = fVar69;
    *(float *)(lVar21 + 100) = fVar57;
  }
FUN_0248d088:
  unaff_x25 = in_stack_00000150;
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1))))
  goto LAB_0248d0a8;
  goto LAB_0248d38c;
LAB_0248d0a8:
  if (unaff_x19[0xca] == 0) goto LAB_02491464;
  fVar49 = *(float *)(unaff_x19 + 0x3c);
  iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
  if (unaff_x19[0xca] == 0) goto LAB_02491464;
  fVar69 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
  lVar21 = unaff_x19[0xc9];
  fVar65 = fStack0000000000000084;
  if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
    fVar65 = 1.0;
  }
  if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_02491464;
  fVar57 = *(float *)((long)unaff_x19 + 0x3fc);
  fVar55 = *(float *)(lVar21 + 0x2c);
  fVar70 = (float)FUN_026fd668(*(long *)(lVar21 + 0x20),0);
  unaff_s10 = *_fStack0000000000000098;
  unaff_s8 = fVar57 * (fVar49 / (float)iVar12) * fVar69 * fVar65 * fVar55 * fVar70;
  unaff_s9 = *in_stack_00000088;
  param_2 = extraout_x1_09;
  if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
    if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    uVar13 = *(int *)((long)unaff_x19 + 0x48c) - 1;
    if (*(uint *)(lVar21 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar49 = *(float *)(lVar21 + (long)(int)uVar13 * (long)iVar14 + 0x60);
    iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar69 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar21 = unaff_x19[0xc9];
    fVar65 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar65 = 1.0;
    }
    if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_02491464;
    fVar57 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar55 = *(float *)(lVar21 + 0x2c);
    fVar70 = (float)FUN_026fd668(*(long *)(lVar21 + 0x20),0);
    if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x50), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    unaff_s10 = *(float *)(lVar21 + 0x60);
    unaff_s9 = *(float *)(lVar21 + 100);
    unaff_s8 = fVar57 * (fVar49 / (float)iVar14) * fVar69 * fVar65 * fVar55 * fVar70;
    param_2 = extraout_x1_10;
  }
  unaff_s13 = *(float *)(unaff_x19 + 0x9a);
  unaff_s11 = *(float *)(unaff_x19 + 0x96);
  goto code_r0x0248d238;
LAB_0248ef74:
  uVar13 = uVar34 - 1;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x50), lVar30 == 0))
  goto LAB_02491464;
  lVar38 = (long)(int)uVar13;
  lVar37 = lVar21 + lVar38 * 0x178;
  uVar4 = *(uint *)(lVar37 + 100);
  if (*(uint *)(lVar30 + 0x18) <= uVar4)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = *(long *)(lVar37 + 0x38);
  uVar32 = (uint)*(ushort *)(lVar37 + 0x20);
  lVar39 = (long)(int)uVar4;
  lVar30 = lVar30 + lVar39 * 0x5c;
  uVar2 = *(uint *)(lVar30 + 0x3c);
  uVar3 = *(uint *)(lVar30 + 0x40);
  lVar37 = (long)(int)uVar3;
  iVar15 = *(int *)(lVar30 + 0x28);
  iVar16 = *(int *)(lVar30 + 0x2c);
  uVar42 = *(uint *)(lVar30 + 0x68);
  fVar46 = *(float *)(lVar30 + 0x5c);
  fVar62 = *(float *)(lVar30 + 0x60);
  iVar5 = *(int *)(lVar30 + 0x20);
  fVar55 = *(float *)(lVar30 + 0x4c);
  fVar44 = *(float *)(lVar30 + 0x54);
  fVar70 = *(float *)(lVar30 + 0x58);
  fVar66 = *(float *)(lVar30 + 0x6c);
  fVar45 = *(float *)(lVar30 + 0x70);
  fVar57 = *(float *)(lVar30 + 0x74);
  fVar64 = *(float *)(lVar30 + 0x78);
  fVar59 = fVar46 + fVar62;
  if ((int)uVar42 < 9) {
    switch(uVar42) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar62 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar70;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar62 + fVar46 * 0.5) - fVar70 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar59 - fVar70;
      if ((char)unaff_x19[0x1d] != '\0') {
        in_stack_000000c0._4_4_ = fVar59;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar42 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar32 < 0xad) {
      if ((uVar32 != 3) && (uVar32 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar32 != 0xad) && ((uVar32 != 0x200b && (uVar32 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar21 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar6 = *(undefined2 *)(lVar21 + (long)(int)uVar2 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f9f84(uVar6,0);
      if ((uVar19 & 1) == 0) {
        bVar1 = (int)uVar4 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar70 <= fVar46) && (!bVar1 && (uVar42 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar62;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar59;
        }
        goto LAB_0248f194;
      }
      if (((uVar34 == 1) || (uVar4 != uVar27)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar62;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar59;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar32,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar24 = (char)unaff_x19[0x1d];
        fVar62 = -fVar70;
        if (cVar24 != '\0') {
          fVar62 = fVar70;
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar70 = 1.0;
        iVar16 = (int)*(char *)(lVar21 + (long)(int)uVar2 * 0x178 + 0x194) +
                 (-iVar5 - ((uint)fStack0000000000000024 & 1)) + iVar16 + -1;
        if (0 < iVar16) {
          fVar70 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar16 < 1) {
          iVar16 = 1;
        }
        if (uVar32 == 9) {
LAB_02490fe0:
          fVar70 = 1.0 - fVar70;
        }
        else {
          if (uVar32 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_016fa418(uVar32,0);
            cVar24 = (char)unaff_x19[0x1d];
            if ((uVar19 & 1) != 0) goto LAB_02490fe0;
          }
          iVar16 = (iVar5 - (~(uint)fStack0000000000000024 & 1)) + iVar15;
        }
        fVar70 = ((fVar46 + fVar62) * fVar70) / (float)iVar16;
        if (cVar24 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar70;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar70;
        }
      }
    }
  }
  else if (uVar42 == 0x20) {
    fVar70 = fVar66 + fVar57;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar42 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar42 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar21 + lVar38 * 0x178;
  fVar62 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar70 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar46 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar30 + 0x194) == '\0') goto LAB_0248fabc;
  iVar15 = *(int *)(lVar21 + lVar38 * 0x178 + 0x2c);
  if (iVar15 != 0) goto LAB_0248f808;
  fVar69 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar4,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar26 = lVar21 + lVar38 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar69 = 1.0;
    break;
  case 1:
    fVar64 = *(float *)(lVar21 + lVar38 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar26 = lVar21 + lVar38 * 0x178;
      fVar57 = (in_stack_000000c0._4_4_ + fVar64) - *(float *)(in_stack_00000070 + 0x230);
      fVar64 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar26 = lVar21 + lVar38 * 0x178;
    fVar57 = fVar57 - fVar66;
    *(float *)(lVar26 + 0x84) = fVar69 + (fVar64 - fVar66) / fVar57;
    *(float *)(lVar26 + 0xac) = fVar69 + (*(float *)(lVar26 + 0x98) - fVar66) / fVar57;
    *(float *)(lVar26 + 0xd4) = fVar69 + (*(float *)(lVar26 + 0xc0) - fVar66) / fVar57;
    fVar69 = fVar69 + (*(float *)(lVar26 + 0xe8) - fVar66) / fVar57;
    break;
  case 2:
    lVar26 = lVar21 + lVar38 * 0x178;
    fVar64 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar57 = (in_stack_000000c0._4_4_ + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar26 + 0x84) = fVar69 + fVar57 / fVar64;
    *(float *)(lVar26 + 0xac) =
         fVar69 + ((in_stack_000000c0._4_4_ + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar69 + ((in_stack_000000c0._4_4_ + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar69 = fVar69 + ((in_stack_000000c0._4_4_ + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar26 = lVar21 + lVar38 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar21 + lVar38 * 0x178;
      fVar64 = fVar64 - fVar45;
      fVar57 = fVar69 + (*(float *)(lVar26 + 0x74) - fVar45) / fVar64;
      fVar64 = fVar69 + (*(float *)(lVar26 + 0x9c) - fVar45) / fVar64;
      *(float *)(lVar26 + 0x88) = fVar57;
      *(float *)(lVar26 + 0xb0) = fVar64;
      *(float *)(lVar26 + 0xd8) = fVar57;
      *(float *)(lVar26 + 0x100) = fVar64;
      break;
    case 2:
      lVar26 = lVar21 + lVar38 * 0x178;
      fVar57 = fVar69 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar26 + 0x88) = fVar57;
      fVar64 = *(float *)(unaff_x19 + 0x9b);
      fVar45 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar26 + 0xd8) = fVar57;
      fVar57 = fVar69 + (*(float *)(lVar26 + 0x9c) - fVar64) / (fVar45 - fVar64);
      *(float *)(lVar26 + 0xb0) = fVar57;
      *(float *)(lVar26 + 0x100) = fVar57;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar42 = (uint)*(undefined8 *)(lVar21 + 0x18);
    }
    if (uVar42 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar21 + lVar38 * 0x178;
    fVar57 = *(float *)(lVar26 + 0x15c);
    fVar64 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar57) * 0.5;
    fVar45 = fVar69 + *(float *)(lVar26 + 0x88) * fVar57 + fVar64;
    fVar69 = fVar69 + fVar64 + *(float *)(lVar26 + 0xb0) * fVar57;
    *(float *)(lVar26 + 0x84) = fVar45;
    *(float *)(lVar26 + 0xac) = fVar45;
    *(float *)(lVar26 + 0xd4) = fVar69;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar21 + lVar38 * 0x178 + 0xfc) = fVar69;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar42 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar21 + lVar38 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar42) {
      lVar26 = lVar21 + lVar38 * 0x178;
      fVar55 = fVar55 - fVar44;
      fVar69 = (*(float *)(lVar26 + 0x74) - fVar44) / fVar55;
      fVar55 = (*(float *)(lVar26 + 0x9c) - fVar44) / fVar55;
      *(float *)(lVar26 + 0x88) = fVar69;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar42 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar21 + lVar38 * 0x178;
    fVar69 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar26 + 0x88) = fVar69;
    fVar55 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar26 + 0xb0) = fVar55;
    *(float *)(lVar26 + 0xd8) = fVar55;
    *(float *)(lVar26 + 0x100) = fVar69;
    break;
  case 3:
    if (uVar42 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar21 + lVar38 * 0x178;
    fVar55 = *(float *)(lVar26 + 0x15c);
    fVar57 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar55) * 0.5;
    fVar69 = *(float *)(lVar26 + 0x84) / fVar55 + fVar57;
    fVar57 = fVar57 + *(float *)(lVar26 + 0xd4) / fVar55;
    *(float *)(lVar26 + 0x88) = fVar69;
    *(float *)(lVar26 + 0xb0) = fVar57;
    *(float *)(lVar26 + 0x100) = fVar69;
    *(float *)(lVar26 + 0xd8) = fVar57;
  }
  if (uVar42 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar21 + lVar38 * 0x178;
  fVar69 = ABS(fVar49) * *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar21 + lVar38 * 0x178 + 400) & 1) != 0)) {
    fVar69 = -fVar69;
  }
  lVar26 = lVar21 + lVar38 * 0x178;
  fVar55 = *(float *)(lVar26 + 0x88);
  fVar64 = *(float *)(lVar26 + 0x84);
  fVar57 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar57 = (float)(int)fVar64;
  }
  fVar45 = *(float *)(lVar26 + 0xd4);
  fVar66 = *(float *)(lVar26 + 0xd8);
  fVar44 = -2.1474836e+09;
  if (fVar55 != INFINITY) {
    fVar44 = (float)(int)fVar55;
  }
  uVar68 = FUN_024e0374(fVar64 - fVar57,fVar55 - fVar44);
  *(undefined4 *)(lVar26 + 0x84) = uVar68;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar66 = fVar66 - fVar44;
  *(float *)(lVar26 + 0x88) = fVar69;
  uVar68 = FUN_024e0374(fVar64 - fVar57,fVar66);
  *(undefined4 *)(lVar21 + lVar38 * 0x178 + 0xac) = uVar68;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar45 = fVar45 - fVar57;
  *(float *)(lVar21 + lVar38 * 0x178 + 0xb0) = fVar69;
  fVar57 = (float)FUN_024e0374(fVar45,fVar66);
  *(float *)(lVar26 + 0xd4) = fVar57;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar26 + 0xd8) = fVar69;
  uVar68 = FUN_024e0374(fVar45,fVar55 - fVar44);
  *(undefined4 *)(lVar21 + lVar38 * 0x178 + 0xfc) = uVar68;
  uVar42 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar42 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar21 + lVar38 * 0x178 + 0x100) = fVar69;
LAB_0248f808:
  if (((int)uVar13 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar4 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar42 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar21 + lVar38 * 0x178;
      *(ulong *)(lVar30 + 0x70) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar30 + 0x70));
      *(float *)(lVar30 + 0x78) = fVar46 + *(float *)(lVar30 + 0x78);
      plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar21 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar21 + lVar38 * 0x178;
      *(ulong *)(lVar30 + 0x98) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar30 + 0x98));
      *(float *)(lVar30 + 0xa0) = fVar46 + *(float *)(lVar30 + 0xa0);
      uVar42 = *(uint *)(lVar21 + 0x18);
LAB_0248fa4c:
      if (uVar42 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar21 + lVar38 * 0x178;
      *(ulong *)(lVar30 + 0xc0) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0xc0) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar30 + 0xc0));
      *(float *)(lVar30 + 200) = fVar46 + *(float *)(lVar30 + 200);
      if (*(uint *)(lVar21 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar21 + lVar38 * 0x178;
      *(ulong *)(lVar30 + 0xe8) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0xe8) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar30 + 0xe8));
      *(float *)(lVar30 + 0xf0) = fVar46 + *(float *)(lVar30 + 0xf0);
      if (iVar15 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar31)();
      goto LAB_0248fabc;
    }
    if (((int)uVar4 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar13 < uVar42) {
        if (*(uint *)(lVar21 + lVar38 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar30 = lVar21 + lVar38 * 0x178;
        *(ulong *)(lVar30 + 0x70) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0x70) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar30 + 0x70));
        *(float *)(lVar30 + 0x78) = fVar46 + *(float *)(lVar30 + 0x78);
        if (uVar13 < *(uint *)(lVar21 + 0x18)) {
          lVar30 = lVar21 + lVar38 * 0x178;
          *(ulong *)(lVar30 + 0x98) =
               CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0x98) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar30 + 0x98));
          *(float *)(lVar30 + 0xa0) = fVar46 + *(float *)(lVar30 + 0xa0);
          uVar42 = *(uint *)(lVar21 + 0x18);
          plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar42 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar26 = lVar21 + lVar38 * 0x178;
  uVar68 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar26 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar68;
  plVar43 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar21 + lVar38 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar68;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar21 + lVar38 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar68;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar21 + lVar38 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar68;
  if (*(uint *)(lVar21 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  if (iVar15 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar15 == 1) {
    pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar38 * 0x178;
  uVar17 = *(undefined8 *)(lVar30 + 0x11c);
  *(undefined8 *)(lVar30 + 0x11c) =
       CONCAT44(fVar70 + (float)((ulong)uVar17 >> 0x20),fVar62 + (float)uVar17);
  *(float *)(lVar30 + 0x124) = fVar46 + *(float *)(lVar30 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar38 * 0x178;
  *(ulong *)(lVar30 + 0x110) =
       CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0x110) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar30 + 0x110));
  *(float *)(lVar30 + 0x118) = fVar46 + *(float *)(lVar30 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar38 * 0x178;
  *(ulong *)(lVar30 + 0x128) =
       CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar30 + 0x128) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar30 + 0x128));
  *(float *)(lVar30 + 0x130) = fVar46 + *(float *)(lVar30 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar30 = lVar30 + lVar38 * 0x178;
  *(float *)(lVar30 + 0x134) = fVar62 + *(float *)(lVar30 + 0x134);
  *(ulong *)(lVar30 + 0x138) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar30 + 0x138) >> 0x20),
                fVar70 + (float)*(undefined8 *)(lVar30 + 0x138));
  lVar30 = *in_stack_00000150;
  if ((lVar30 == 0) || (lVar26 = *(long *)(lVar30 + 0x38), lVar26 == 0)) goto LAB_02491464;
  uVar42 = *(uint *)(lVar26 + 0x18);
  if (uVar42 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar26 + lVar38 * 0x178;
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar36 + 0x140));
  *(ulong *)(lVar36 + 0x148) =
       CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                fVar70 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar70 + *(float *)(lVar36 + 0x150);
  if (uVar4 == uVar27) {
    uVar27 = *in_stack_00000148 - 1;
    if (uVar13 == uVar27) goto LAB_0248fccc;
  }
  else {
    lVar30 = *(long *)(lVar30 + 0x50);
    if (lVar30 == 0) goto LAB_02491464;
    if (*(uint *)(lVar30 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = (long)(int)uVar27;
    lVar40 = lVar30 + lVar36 * 0x5c;
    fVar57 = fVar70 + *(float *)(lVar40 + 0x54);
    *(ulong *)(lVar40 + 0x4c) =
         CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                  fVar70 + (float)*(undefined8 *)(lVar40 + 0x4c));
    *(float *)(lVar40 + 0x54) = fVar57;
    *(float *)(lVar40 + 0x58) = fVar62 + *(float *)(lVar40 + 0x58);
    if (uVar42 <= *(uint *)(lVar40 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar68 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
    lVar30 = lVar30 + lVar36 * 0x5c;
    *(float *)(lVar30 + 0x70) = fVar57;
    *(undefined4 *)(lVar30 + 0x6c) = uVar68;
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar26 = *(long *)(lVar30 + 0x50), lVar26 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = *(long *)(lVar30 + 0x38);
    if (lVar30 == 0) goto LAB_02491464;
    uVar27 = *(uint *)(lVar26 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar30 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + lVar36 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar27 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar27 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar13 == uVar27) {
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar26 = *(long *)(lVar30 + 0x50), lVar26 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar26 + lVar39 * 0x5c;
      fVar57 = fVar70 + *(float *)(lVar36 + 0x54);
      *(ulong *)(lVar36 + 0x4c) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar36 + 0x4c));
      *(float *)(lVar36 + 0x54) = fVar57;
      *(float *)(lVar36 + 0x58) = fVar62 + *(float *)(lVar36 + 0x58);
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(lVar36 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar57;
      *(undefined4 *)(lVar26 + 0x6c) = uVar68;
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar26 = *(long *)(lVar30 + 0x50), lVar26 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      uVar27 = *(uint *)(lVar26 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar30 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar39 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar30 + (long)(int)uVar27 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar19 = FUN_016f9468(uVar32,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar32 - 0x2010)) && (uVar32 != 0xad)) && (uVar32 != 0x2d)) {
    if (bVar10) {
      if (((uVar34 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar21 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*in_stack_00000148 && ((uVar32 == 0x2019 || (uVar32 == 0x27)))))) {
        if (*(uint *)(lVar21 + 0x18) <= uVar34 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar6 = *(undefined2 *)(lVar21 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f9468(uVar6,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar6 = *(undefined2 *)(lVar21 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016f9468(uVar6,0);
          if ((uVar19 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar34 != 1) {
LAB_024909a0:
        bVar10 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f93a0(uVar32,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f68bc(uVar32,0);
        if (((uVar32 != 0x200b) && ((uVar19 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar13 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f9468(uVar32,0);
      iVar15 = iVar12;
      if ((uVar19 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar15 = uVar34 - 2;
    }
    lVar30 = *in_stack_00000150;
    if (lVar30 == 0) goto LAB_02491464;
    lVar26 = *(long *)(lVar30 + 0x40);
    if (lVar26 == 0) goto LAB_02491464;
    uVar27 = *(uint *)(lVar30 + 0x24);
    iVar16 = *(int *)(lVar26 + 0x18);
    if (iVar16 < (int)(uVar27 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar30 + 0x40),iVar16 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar30 = *in_stack_00000150;
      if (lVar30 == 0) goto LAB_02491464;
    }
    lVar26 = *(long *)(lVar30 + 0x40);
    if (lVar26 == 0) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + (long)(int)uVar27 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(uint *)(lVar26 + 0x28) = uStack0000000000000114;
    *(int *)(lVar26 + 0x2c) = iVar15;
    *(uint *)(lVar26 + 0x30) = (iVar15 - uStack0000000000000114) + 1;
    lVar26 = *(long *)(lVar30 + 0x50);
    *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar4)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + lVar39 * 0x5c;
    bVar10 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      uStack0000000000000114 = uVar13;
    }
    if (uVar13 == *in_stack_00000148 - 1) {
      lVar30 = *in_stack_00000150;
      if (lVar30 == 0) goto LAB_02491464;
      lVar26 = *(long *)(lVar30 + 0x40);
      if (lVar26 == 0) goto LAB_02491464;
      uVar27 = *(uint *)(lVar30 + 0x24);
      iVar15 = *(int *)(lVar26 + 0x18);
      if (iVar15 < (int)(uVar27 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar30 + 0x40),iVar15 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar30 = *in_stack_00000150;
        if (lVar30 == 0) goto LAB_02491464;
      }
      lVar26 = *(long *)(lVar30 + 0x40);
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + (long)(int)uVar27 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(uint *)(lVar26 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar26 + 0x2c) = uVar13;
      *(uint *)(lVar26 + 0x30) = uVar34 - uStack0000000000000114;
      lVar26 = *(long *)(lVar30 + 0x50);
      *(int *)(lVar30 + 0x24) = *(int *)(lVar30 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar39 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar10 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  uVar27 = *(uint *)(lVar30 + 0x18);
  if (uVar27 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar30 + lVar38 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar11) {
LAB_0248ff18:
      if (uVar27 <= uVar34 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *unaff_x19;
      uVar68 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x330);
      uVar58 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar31 = *(code **)(lVar39 + 0x908);
LAB_0249047c:
      (*pcVar31)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar68,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar58);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar30 = *(long *)puVar9;
      }
LAB_024904cc:
      bVar11 = false;
      fVar65 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar30 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar11 = false;
    }
  }
  else {
    lVar30 = lVar30 + lVar38 * 0x178;
    iVar15 = *(int *)(lVar30 + 0x68);
    *(int *)(lVar30 + 0x16c) = iVar14;
    if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar15 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_016f68bc(uVar32,0);
    if ((uVar32 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar30 = *in_stack_00000150;
      if ((lVar30 == 0) || (lVar39 = *(long *)(lVar30 + 0x38), lVar39 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar57 = *(float *)(lVar39 + lVar38 * 0x178 + 0x160);
      if (fVar65 <= fVar57) {
        fVar65 = fVar57;
      }
      if (fStack00000000000000c8 <= ABS(fVar69)) {
        fStack00000000000000c8 = ABS(fVar69);
      }
      if ((float)iVar15 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *in_stack_00000150;
          if (lVar30 == 0) goto LAB_02491464;
          lVar39 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar39 + 0x15a8);
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar55 = *(float *)(lVar30 + lVar38 * 0x178 + 0x14c);
      fVar57 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar55 = fVar55 + fVar65 * fVar57;
      fStack0000000000000048 = (float)iVar15;
      if (fVar55 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar55;
      }
    }
    if (!bVar11) {
      bVar11 = false;
      if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar3 < (int)uVar13)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar13 == uVar3) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar32,0);
        if ((uVar19 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar30 + lVar38 * 0x178;
      fStack0000000000000058 = *(float *)(lVar30 + 0x160);
      fStack0000000000000054 = *(float *)(lVar30 + 0x11c);
      bVar11 = fVar65 != 0.0;
      fVar57 = fStack0000000000000058;
      if (bVar11) {
        fVar57 = fVar65;
      }
      fVar65 = fVar57;
      _bStack000000000000005c = *(uint *)(lVar30 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar57 = fVar69;
      if (bVar11) {
        fVar57 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar57;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        if (uVar13 < *(uint *)(lVar30 + 0x18)) {
          lVar30 = lVar30 + lVar38 * 0x178;
          lVar39 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar30 + 0x128);
          uVar58 = *(undefined4 *)(lVar30 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar13 == uVar2) || ((int)uVar3 <= (int)uVar13)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f68bc(uVar32,0);
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        if (uVar32 == 0x200b || (uVar19 & 1) != 0) {
          lVar39 = lVar37;
          if (*(uint *)(lVar30 + 0x18) <= uVar3)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar39 = lVar38;
          if (*(uint *)(lVar30 + 0x18) <= uVar13)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar30 = lVar30 + lVar39 * 0x178;
        uVar68 = *(undefined4 *)(lVar30 + 0x128);
        uVar58 = *(undefined4 *)(lVar30 + 0x160);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        uVar27 = *(uint *)(lVar30 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar13 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar34)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar19 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar30 + lStack0000000000000128)
                            ,0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0)) {
          if (uVar13 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar38 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar30 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar30 + 0x160));
            puVar9 = System_Threading_Mutex_TypeInfo;
            lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar30 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar30 = *(long *)puVar9;
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
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar30 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar35 == 0) goto LAB_02491464;
  uVar27 = *(uint *)(lVar30 + lVar38 * 0x178 + 400);
  fVar57 = (float)FUN_026fd1f0(lVar35 + 0x50,0);
  if ((uVar27 >> 6 & 1) == 0) {
    if (bVar7) {
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar34 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x330);
      pcVar31 = *(code **)(*unaff_x19 + 0x908);
      fVar70 = fStack0000000000000084 * fVar57 +
               *(float *)(lVar30 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar31)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar68,
                 fVar70,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    bVar7 = false;
  }
  else {
    lVar30 = *in_stack_00000150;
    if ((lVar30 == 0) || (lVar39 = *(long *)(lVar30 + 0x38), lVar39 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar39 + lVar38 * 0x178 + 0x174) = iVar14;
    if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar39 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar3 < (int)uVar13)) ||
       (bVar7 || !bVar1)) {
LAB_02490668:
      if (!bVar7) goto LAB_02490a9c;
    }
    else {
      if (uVar13 == uVar3) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar32,0);
        if ((uVar19 & 1) != 0) goto LAB_02490668;
        lVar30 = *in_stack_00000150;
        if (lVar30 == 0) goto LAB_02491464;
      }
      lVar30 = *(long *)(lVar30 + 0x38);
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = lVar30 + lVar38 * 0x178;
      fStack0000000000000038 = *(float *)(lVar30 + 0x60);
      fStack0000000000000084 = *(float *)(lVar30 + 0x160);
      fStack0000000000000034 = *(float *)(lVar30 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar30 + 0x11c);
      in_stack_00000068._4_4_ = fVar57 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar27 = *in_stack_00000148;
    if (uVar27 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar30 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar30 != 0) {
          if (uVar13 < *(uint *)(lVar30 + 0x18)) {
            lVar30 = lVar30 + lVar38 * 0x178;
            lVar37 = *unaff_x19;
            uVar68 = *(undefined4 *)(lVar30 + 0x128);
            fVar70 = *(float *)(lVar30 + 0x14c);
LAB_024907e8:
            pcVar31 = *(code **)(lVar37 + 0x908);
LAB_02490a64:
            fVar70 = fVar57 * fStack0000000000000084 + fVar70;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar13 == uVar2) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f68bc(uVar32,0);
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        uVar27 = *(uint *)(lVar30 + 0x18);
        if (uVar32 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar27 <= uVar3)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar37 = lVar38;
          if (uVar27 <= uVar13)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar30 = lVar30 + lVar37 * 0x178;
        fVar70 = *(float *)(lVar30 + 0x14c);
        uVar68 = *(undefined4 *)(lVar30 + 0x128);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar13 < (int)uVar27) {
      lVar30 = *in_stack_00000150;
      if ((lVar30 != 0) && (lVar39 = *(long *)(lVar30 + 0x38), lVar39 != 0)) {
        if (uVar34 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar55 = *(float *)(lVar39 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_024aa280(fVar70 + fVar55,fStack0000000000000034,0);
            if ((uVar19 & 1) != 0) {
              uVar27 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar30 = *in_stack_00000150;
            if (lVar30 == 0) goto LAB_02491464;
          }
          lVar30 = *(long *)(lVar30 + 0x38);
          if (lVar30 != 0) {
            uVar27 = *(uint *)(lVar30 + 0x18);
            if ((int)uVar13 <= (int)uVar3) goto LAB_02490a40;
            if (uVar3 < uVar27) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar13 < (int)uVar27) {
      iVar15 = FUN_02681c0c(lVar35,0);
      if (*(uint *)(lVar21 + 0x18) <= uVar34)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = *(long *)(lVar21 + lStack0000000000000128 + -0x130);
      if (lVar30 == 0) goto LAB_02491464;
      iVar16 = FUN_02681c0c(lVar30,0);
      if (iVar15 != iVar16) {
        if (*in_stack_00000150 != 0) {
          lVar30 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 != 0))
      {
        if (uVar34 - 2 < *(uint *)(lVar30 + 0x18)) {
          lVar37 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar30 + lStack0000000000000128 + -0x330);
          fVar70 = *(float *)(lVar30 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar7 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
  goto LAB_02491464;
  uVar27 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar27 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar30 + lVar38 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar4)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar30 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar3 < (int)uVar13)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar13 == uVar3) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar32,0);
        if ((uVar19 & 1) != 0) goto LAB_02490b04;
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar37 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar37 = *(long *)puVar9;
      }
      if ((*in_stack_00000150 == 0) || (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0))
      goto LAB_02491464;
      uVar27 = (uint)*(undefined8 *)(lVar30 + 0x18);
      if (uVar27 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *(long *)(lVar37 + 0xb8);
      lVar39 = lVar30 + lVar38 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar39 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar39 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar37 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar39 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar37 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar37 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar37 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar27 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar30 + lVar38 * 0x178;
    fVar57 = *(float *)(lVar30 + 0x128);
    fVar44 = *(float *)(lVar30 + 0x188);
    uVar18 = *(undefined8 *)(lVar30 + 0x17c);
    fVar66 = *(float *)(lVar30 + 0x184);
    uVar17 = *(undefined8 *)(lVar30 + 0x184);
    fVar45 = *(float *)(lVar30 + 0x18c);
    fVar70 = *(float *)(lVar30 + 0x11c);
    fVar55 = *(float *)(lVar30 + 0x148);
    fVar64 = *(float *)(lVar30 + 0x150);
    in_stack_00000158 = uVar18;
    fStack0000000000000160 = fVar66;
    fStack0000000000000164 = fVar44;
    in_stack_00000168 = fVar45;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar19 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar30 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar30);
      }
      fVar57 = fVar57 + (float)in_stack_00001798;
      fVar70 = fVar70 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar55 = fVar55 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar70 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar70;
      }
      if (fVar64 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar64 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar57) {
        fStack0000000000000098 = fVar57;
      }
      if (in_stack_000000a0 <= fVar55) {
        in_stack_000000a0 = fVar55;
      }
    }
    else {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar30);
      }
      fVar70 = (fVar70 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar64 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar64;
      }
      if (in_stack_000000a0 <= fVar55) {
        in_stack_000000a0 = fVar55;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar70,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar64 - fVar45;
      fStack0000000000000098 = fVar57 + fVar66;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar55 + fVar44;
      fStack00000000000000a8 = fVar70;
      in_stack_00001790 = uVar18;
      in_stack_00001798 = uVar17;
      in_stack_000017a0 = fVar45;
    }
    if (((*in_stack_00000148 == 1) || (uVar13 == uVar2)) ||
       (((int)uVar3 <= (int)uVar13 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar13 = *in_stack_00000148;
  iVar12 = iVar12 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar13 <= (int)uVar34;
  uVar27 = uVar4;
  uVar34 = uVar34 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar21 = *in_stack_00000150;
  if (lVar21 != 0) {
    iVar14 = uVar4 + 1;
    plVar28 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar21 + 0x18) = uVar13;
    lVar30 = unaff_x19[0xd3];
    *(int *)(lVar21 + 0x2c) = iVar14;
    iVar14 = iStack00000000000000a4;
    if ((int)uVar13 < 1) {
      iVar14 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar14 = 1;
    }
    *(int *)(lVar21 + 0x1c) = (int)lVar30;
    *(int *)(lVar21 + 0x24) = iVar14;
    *(int *)(lVar21 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_02491468:
      lVar21 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar21 = unaff_x19[0xda];
    if (lVar21 != 0) {
      (**(code **)(lVar21 + 0x18))
                (*(undefined8 *)(lVar21 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar21 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar21 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar21 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
        if (*(int *)(lVar21 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
            if (*(int *)(lVar21 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
                if (*(int *)(lVar21 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
                    if (*(int *)(lVar21 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar21 = *in_stack_00000150;
                        if (lVar21 != 0) {
                          lVar37 = 0;
                          lVar30 = 0;
                          do {
                            uVar19 = lVar30 + 1;
                            if ((long)*(int *)(lVar21 + 0x34) <= (long)uVar19) goto LAB_02491468;
                            lVar21 = *(long *)(lVar21 + 0x60);
                            if (lVar21 == 0) break;
                            if (*(int *)(*plVar28 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar21 + 0x18) <= uVar19)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar21 + lVar37 + 0x70,0);
                            lVar21 = unaff_x19[0xe0];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar19)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar17 = *(undefined8 *)(lVar21 + lVar30 * 8 + 0x28);
                            if (*(int *)(*plVar43 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar50 = FUN_0268b4e0(uVar17,0,0);
                            if ((uVar50 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
                                break;
                                if (*(int *)(*plVar28 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar21 + 0x18) <= uVar19)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar21 + lVar37 + 0x70,1,0);
                              }
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar38 = *(long *)(*in_stack_00000150 + 0x60), lVar38 == 0))
                              break;
                              if (*(uint *)(lVar38 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266b9c4(lVar21,*(undefined8 *)(lVar38 + lVar37 + 0x80),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar38 = *(long *)(*in_stack_00000150 + 0x60), lVar38 == 0))
                              break;
                              if (*(uint *)(lVar38 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266bbc8(lVar21,*(undefined8 *)(lVar38 + lVar37 + 0x98),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar38 = *(long *)(*in_stack_00000150 + 0x60), lVar38 == 0))
                              break;
                              if (*(uint *)(lVar38 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266bc74(lVar21,*(undefined8 *)(lVar38 + lVar37 + 0xa0),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar38 = *(long *)(*in_stack_00000150 + 0x60), lVar38 == 0))
                              break;
                              if (*(uint *)(lVar38 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266c1dc(lVar21,*(undefined8 *)(lVar38 + lVar37 + 0xa8),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar30 * 8 + 0x28);
                              if ((lVar21 == 0) || (lVar21 = FUN_024eefa0(lVar21,0), lVar21 == 0))
                              break;
                              FUN_0266ed90(lVar21,0);
                            }
                            lVar21 = *in_stack_00000150;
                            lVar30 = lVar30 + 1;
                            lVar37 = lVar37 + 0x50;
                          } while (lVar21 != 0);
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


