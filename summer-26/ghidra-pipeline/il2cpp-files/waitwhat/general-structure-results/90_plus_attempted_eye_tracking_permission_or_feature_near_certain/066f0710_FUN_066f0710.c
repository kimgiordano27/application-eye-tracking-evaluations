/*
FUNCTION_NAME: FUN_066f0710
ENTRY_POINT: 066f0710
PROGRAM: waitwhat-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void FUN_066f0710(undefined1 param_1 [16],float param_2,float param_3,long *param_4,long param_5,
                 long param_6,long param_7)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  uint6 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ushort *puVar20;
  uint uVar21;
  long lVar22;
  ushort uVar23;
  ulong uVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  long local_98;
  undefined1 *puStack_90;
  uint local_84;
  undefined1 local_78 [4];
  int local_74;
  
  puVar8 = System_Net_ListenerPrefix_TypeInfo;
  if ((DAT_0755826c & 1) == 0) {
    FUN_03188a78(System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_03188a78(System_Xml_Schema_Numeric10FacetsChecker_TypeInfo);
    FUN_03188a78(System_Xml_Schema_Numeric2FacetsChecker_TypeInfo);
    FUN_03188a78(UnityEngine_NumericFieldDraggerUtility_TypeInfo);
    FUN_03188a78(System_Runtime_InteropServices_OSPlatform_TypeInfo);
    FUN_03188a78(System_Threading_OSSpecificSynchronizationContext_TypeInfo);
    FUN_03188a78(OVRAnchor_TypeInfo);
    FUN_03188a78(OVRAnchorContainer_TypeInfo);
    FUN_03188a78(OVRBody_TypeInfo);
    FUN_03188a78(OVRBone_TypeInfo);
    FUN_03188a78(OVRBoneCapsule_TypeInfo);
    FUN_03188a78(OVRBoundary_TypeInfo);
    FUN_03188a78(OVRBounded2D_TypeInfo);
    FUN_03188a78(PTR_DAT_070c24e0);
    FUN_03188a78(OVRBounded3D_TypeInfo);
    FUN_03188a78(OVRColocationSession_TypeInfo);
    FUN_03188a78(OVRControllerTest_TypeInfo);
    FUN_03188a78(OVRDisplay_TypeInfo);
    FUN_03188a78(OVRDynamicObject_TypeInfo);
    FUN_03188a78(PTR_DAT_070c22f8);
    FUN_03188a78(OVRExternalComposition_TypeInfo);
    FUN_03188a78(OVREyeGaze_TypeInfo);
    FUN_03188a78(PTR_DAT_070f7070);
    FUN_03188a78(OVRFaceExpressions_TypeInfo);
    FUN_03188a78(System_Net_ListenerPrefix_TypeInfo);
    FUN_03188a78(OVRGLTFAccessor_TypeInfo);
    FUN_03188a78(OVRGLTFAnimatinonNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070ce538);
    FUN_03188a78(OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2d38);
    FUN_03188a78(PTR_DAT_070f2ff8);
    DAT_0755826c = 1;
  }
  local_74 = 0;
  local_78[0] = 0;
  local_84 = 0;
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar13 = FUN_06724db8(0);
  puVar8 = System_Globalization_NumberFormatInfo_TypeInfo;
  if (param_5 == 0) goto LAB_066f1488;
  uVar16 = *(undefined8 *)(param_5 + 0x20);
  uVar29 = *(ulong *)(param_5 + 0x28);
  lVar17 = *(long *)System_Globalization_NumberFormatInfo_TypeInfo;
  plVar18 = *(long **)(lVar17 + 0xb8);
  if (*plVar18 == 0) {
    uVar14 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)OVRDynamicObject_TypeInfo);
    FUN_043158f0(uVar14,*(undefined8 *)OVRAnchorContainer_TypeInfo);
    **(undefined8 **)(*(long *)puVar8 + 0xb8) = uVar14;
    lVar17 = *(long *)puVar8;
    plVar18 = *(long **)(lVar17 + 0xb8);
  }
  if (plVar18[1] == 0) {
    lVar15 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                       (*(undefined8 *)OVRDisplay_TypeInfo);
    FUN_043bbe6c(lVar15,*(undefined8 *)OVRAnchor_TypeInfo);
    lVar17 = *(long *)puVar8;
    plVar18 = *(long **)(lVar17 + 0xb8);
    plVar18[1] = lVar15;
  }
  iVar25 = (int)uVar29;
  if ((plVar18[2] == 0) || (*(int *)(plVar18[2] + 0x18) < iVar25)) {
    lVar15 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070ce538,uVar29 & 0xffffffff);
    lVar17 = *(long *)puVar8;
    plVar18 = *(long **)(lVar17 + 0xb8);
    plVar18[2] = lVar15;
  }
  if (plVar18[3] == 0) {
    uVar14 = FUN_066f1538();
    lVar17 = *(long *)puVar8;
    *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x18) = uVar14;
  }
  if ((uVar13 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    iVar9 = FUN_0674c3f0(0);
    if (**(long **)(*(long *)puVar8 + 0xb8) == 0) goto LAB_066f1488;
    iVar10 = FUN_04315c88(**(long **)(*(long *)puVar8 + 0xb8),*(undefined8 *)OVRBody_TypeInfo);
    if (iVar10 < iVar9) {
      if (**(long **)(*(long *)puVar8 + 0xb8) == 0) goto LAB_066f1488;
      FUN_04315ca0(**(long **)(*(long *)puVar8 + 0xb8),iVar9,*(undefined8 *)OVRBounded3D_TypeInfo);
    }
    lVar17 = *(long *)puVar8;
    lVar15 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
    if (lVar15 == 0) goto LAB_066f1488;
    if (*(int *)(lVar15 + 0x18) < iVar25) {
      FUN_043bc21c(lVar15,uVar29 & 0xffffffff,*(undefined8 *)OVRColocationSession_TypeInfo);
      lVar17 = *(long *)puVar8;
      lVar15 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
      if (lVar15 == 0) goto LAB_066f1488;
      iVar9 = (iVar25 - *(int *)(lVar15 + 0x18)) + 1;
      if (0 < iVar9) {
        do {
          lVar17 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
          if (lVar17 == 0) goto LAB_066f1488;
          lVar15 = *(long *)(lVar17 + 0x10);
          lVar19 = *(long *)System_Xml_Schema_Numeric10FacetsChecker_TypeInfo;
          *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_066f1488;
          uVar11 = *(uint *)(lVar17 + 0x18);
          if (uVar11 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + (long)(int)uVar11 * 0xe;
            *(uint *)(lVar17 + 0x18) = uVar11 + 1;
            *(undefined8 *)(lVar15 + 0x20) = 0;
            *(undefined2 *)(lVar15 + 0x2c) = 0;
            *(undefined4 *)(lVar15 + 0x28) = 0;
          }
          else {
            FUN_043bc6f4(lVar17,0,0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        lVar17 = *(long *)puVar8;
      }
    }
  }
  plVar18 = *(long **)(lVar17 + 0xb8);
  lVar17 = *plVar18;
  if (lVar17 != 0) {
    *(undefined4 *)(lVar17 + 0x18) = 0;
    *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
    puVar7 = OVRControllerTest_TypeInfo;
    if (iVar25 < 1) {
      uVar23 = 0;
    }
    else {
      uVar28 = 0;
      uVar23 = 0;
      do {
        if (uVar28 == *(uint *)(param_5 + 0x10)) {
          lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
          if (lVar15 == 0) goto LAB_066f1488;
          if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_066f14dc;
LAB_066f0e68:
          fVar34 = 3.4028235e+38;
        }
        else {
          uVar14 = FUN_03b26540(uVar16,uVar29,uVar28 & 0xffffffff,*(undefined8 *)OVREyeGaze_TypeInfo
                               );
                    /* try { // try from 066f0bcc to 067f0c9f has its CatchHandler @ 066f0bcc
                       catch() { ... } // from try @ 066f0bcc with catch @ 066f0bcc
                       catch() { ... } // from try @ 066f0d2c with catch @ 066f0bcc
                       catch() { ... } // from try @ 066f0db4 with catch @ 066f0bcc
                       catch() { ... } // from try @ 066f0e28 with catch @ 066f0bcc
                       catch() { ... } // from try @ 066f0f70 with catch @ 066f0bcc
                       catch() { ... } // from try @ 066f0fd8 with catch @ 066f0bcc
                       catch() { ... } // from try @ 066f1028 with catch @ 066f0bcc
                       catch() { ... } // from try @ 066f10f4 with catch @ 066f0bcc */
          lVar17 = FUN_06a1536c(uVar14,0);
          local_74 = FUN_06a153f8(uVar14,0);
          if (lVar17 == 0) goto LAB_066f1488;
          iVar9 = FUN_069a958c(lVar17,0);
          uVar12 = FUN_069a9640(lVar17,0);
          iVar25 = local_74;
          if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar27 = FUN_06731b88(uVar12,param_5,uVar28 & 0xffffffff,iVar25,iVar9,0);
          iVar25 = local_74;
          if ((uVar27 & 1) == 0) {
            lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
            if (lVar15 != 0) {
              if (uVar28 < *(uint *)(lVar15 + 0x18)) goto LAB_066f0e68;
              goto LAB_066f14dc;
            }
            goto LAB_066f1488;
          }
          if ((param_6 == 0) || (*(long *)(param_6 + 0x50) == 0)) goto LAB_066f1488;
          uVar11 = FUN_04281f90(*(long *)(param_6 + 0x50),uVar28 & 0xffffffff,
                                *(undefined8 *)PTR_DAT_070c24e0);
          if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)OVRGLTFAnimatinonNode_TypeInfo);
          }
          iVar10 = FUN_0672f628(&local_74,0);
                    /* try { // try from 066f0ca0 to 067f0ca7 has its CatchHandler @ 066f1078 */
          if (0 < iVar10) {
            uVar27 = 0;
            do {
              lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
                    /* try { // try from 066f0cdc to 067f0ce7 has its CatchHandler @ 066f1064 */
              if (lVar15 == 0) goto LAB_066f1488;
              uVar30 = *(uint *)(lVar15 + 0x18);
              if ((int)uVar30 <= (int)(uint)uVar23) {
                lVar19 = *(long *)(lVar15 + 0x10);
                lVar22 = *(long *)System_Xml_Schema_Numeric10FacetsChecker_TypeInfo;
                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                if (lVar19 == 0) goto LAB_066f1488;
                if (uVar30 < *(uint *)(lVar19 + 0x18)) {
                    /* try { // try from 066f0d1c to 067f0d2b has its CatchHandler @ 066f10a8 */
                  lVar19 = lVar19 + (long)(int)uVar30 * 0xe;
                  *(uint *)(lVar15 + 0x18) = uVar30 + 1;
                  *(undefined8 *)(lVar19 + 0x20) = 0;
                    /* try { // try from 066f0d2c to 067f0d87 has its CatchHandler @ 066f0bcc */
                  *(undefined2 *)(lVar19 + 0x2c) = 0;
                  *(undefined4 *)(lVar19 + 0x28) = 0;
                }
                else {
                  FUN_043bc6f4(lVar15,0,0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
                }
              }
              lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
              if (lVar15 == 0) goto LAB_066f1488;
              auVar35 = FUN_043bc3a8(lVar15,uVar23,*(undefined8 *)OVRBounded2D_TypeInfo);
              lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
              if (lVar15 == 0) goto LAB_066f1488;
                    /* try { // try from 066f0d88 to 067f0db3 has its CatchHandler @ 066f10b0 */
                    /* try { // try from 066f0db4 to 067f0dd7 has its CatchHandler @ 066f0bcc */
              FUN_043bc40c(lVar15,uVar23,
                           auVar35._0_8_ & 0xffff000000000000 | (ulong)(uVar11 & 0xffff) << 0x20 |
                           (uVar27 & 0xffff) << 0x10 | uVar28 & 0xffff,
                           auVar35._8_8_ & 0xffffffff |
                           (ulong)(auVar35._12_4_ & 0xfffc |
                                  (uint)(iVar9 == 2) | (uint)(iVar25 == 2) << 1) << 0x20,
                           *(undefined8 *)puVar7);
              uVar30 = (int)uVar27 + 1;
              uVar27 = (ulong)uVar30;
              uVar23 = uVar23 + 1;
            } while ((int)(uVar30 & 0xffff) < iVar10);
          }
          if (param_7 == 0) goto LAB_066f1488;
                    /* try { // try from 066f0dd8 to 067f0e03 has its CatchHandler @ 066f10b4 */
          fVar34 = *(float *)(param_7 + 0x1e4);
          fVar32 = *(float *)(param_7 + 0x1e8);
          fVar33 = *(float *)(param_7 + 0x1ec);
          lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x10);
          lVar17 = FUN_069d3a80(lVar17,0);
          if ((lVar17 == 0) || (fVar31 = (float)FUN_069e6fbc(lVar17,0), lVar15 == 0))
          goto LAB_066f1488;
          if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_066f14dc;
                    /* try { // try from 066f0e20 to 067f0e27 has its CatchHandler @ 066f106c */
          fVar34 = fVar34 - fVar31;
          fVar32 = fVar32 - param_2;
                    /* try { // try from 066f0e28 to 067f0e77 has its CatchHandler @ 066f0bcc */
          fVar33 = fVar33 - param_3;
          param_2 = fVar32 * fVar32;
          param_3 = fVar33 * fVar33;
          fVar34 = param_3 + fVar34 * fVar34 + param_2;
        }
        lVar17 = uVar28 * 4;
        uVar28 = uVar28 + 1;
                    /* try { // try from 066f0e78 to 067f0ea3 has its CatchHandler @ 066f10a0 */
        *(float *)(lVar15 + lVar17 + 0x20) = fVar34;
      } while (uVar28 != (uVar29 & 0xffffffff));
      plVar18 = *(long **)(*(long *)puVar8 + 0xb8);
    }
    if ((plVar18[4] == 0) || (*(int *)(plVar18[4] + 0x18) < (int)(uint)uVar23)) {
                    /* try { // try from 066f0ebc to 067f0ec3 has its CatchHandler @ 066f1088 */
      uVar16 = FUN_03188b1c(*(undefined8 *)OVRGLTFAccessor_TypeInfo,uVar23);
      *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20) = uVar16;
    }
    uVar11 = (uint)uVar23;
                    /* try { // try from 066f0ed8 to 067f0edf has its CatchHandler @ 066f104c */
    if (uVar11 != 0) {
      uVar28 = 0;
      lVar17 = 0x20;
      do {
                    /* try { // try from 066f0ee8 to 067f0ef7 has its CatchHandler @ 066f1044 */
        lVar15 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
        if (lVar15 == 0) goto LAB_066f1488;
                    /* try { // try from 066f0ef8 to 067f0eff has its CatchHandler @ 066f103c */
        lVar19 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
                    /* try { // try from 066f0f08 to 067f0f17 has its CatchHandler @ 066f1034 */
        auVar35 = FUN_043bc3a8(lVar15,uVar28 & 0xffffffff,*(undefined8 *)OVRBounded2D_TypeInfo);
        if (lVar19 == 0) goto LAB_066f1488;
                    /* try { // try from 066f0f1c to 067f0f1f has its CatchHandler @ 066f1030 */
        if (*(uint *)(lVar19 + 0x18) <= uVar28) goto LAB_066f14dc;
        uVar28 = uVar28 + 1;
        puVar3 = (undefined8 *)(lVar19 + lVar17);
                    /* try { // try from 066f0f30 to 067f0f37 has its CatchHandler @ 066f1038 */
        lVar17 = lVar17 + 0xe;
        *puVar3 = auVar35._0_8_;
        *(int *)(puVar3 + 1) = auVar35._8_4_;
        *(short *)((long)puVar3 + 0xc) = auVar35._12_2_;
                    /* try { // try from 066f0f40 to 067f0f47 has its CatchHandler @ 066f102c */
      } while (uVar11 != uVar28);
    }
    puVar7 = PTR_DAT_070f2d38;
    lVar17 = *(long *)PTR_DAT_070f2d38;
                    /* try { // try from 066f0f50 to 067f0f5f has its CatchHandler @ 066f1028 */
    if (*(int *)(lVar17 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar17 = *(long *)puVar7;
    }
                    /* try { // try from 066f0f68 to 067f0f6f has its CatchHandler @ 066f1058 */
                    /* try { // try from 066f0f70 to 067f0fc3 has its CatchHandler @ 066f0bcc */
    FUN_065e0fa8(local_78,**(undefined8 **)(lVar17 + 0xb8),0);
    local_98 = 0;
    uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x18);
    uVar14 = *(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
    puStack_90 = local_78;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_03c34fd8(uVar14,0,uVar11 - 1,uVar16,
                 *(undefined8 *)OVRGLTFAnimationNodeMorphTargetHandler_TypeInfo);
    FUN_065e0fb4(local_78,0);
                    /* try { // try from 066f0fc4 to 067f0fc7 has its CatchHandler @ 066f10bc */
                    /* try { // try from 066f0fc8 to 067f0fcb has its CatchHandler @ 066f10b8 */
                    /* try { // try from 066f0fcc to 067f0fcf has its CatchHandler @ 066f10ac */
                    /* try { // try from 066f0fd0 to 067f0fd3 has its CatchHandler @ 066f10a4 */
                    /* try { // try from 066f0fd4 to 067f0fd7 has its CatchHandler @ 066f109c */
                    /* try { // try from 066f0fd8 to 067f0fdf has its CatchHandler @ 066f0bcc */
    local_98 = 0;
    puStack_90 = (undefined1 *)0x0;
                    /* try { // try from 066f0fe0 to 067f0fe3 has its CatchHandler @ 066f1098 */
                    /* try { // try from 066f0fe4 to 067f0fe7 has its CatchHandler @ 066f1094 */
                    /* try { // try from 066f0fe8 to 067f0feb has its CatchHandler @ 066f1090 */
                    /* try { // try from 066f0fec to 067f0fef has its CatchHandler @ 066f108c */
    FUN_045d9848(&local_98,*(undefined8 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20),2,
                 *(undefined8 *)OVRFaceExpressions_TypeInfo);
                    /* try { // try from 066f0ff0 to 067f0ff3 has its CatchHandler @ 066f1084 */
                    /* try { // try from 066f0ff4 to 067f0ff7 has its CatchHandler @ 066f1080 */
    uVar28 = (ulong)uVar11;
                    /* try { // try from 066f0ff8 to 067f0ffb has its CatchHandler @ 066f107c */
    param_4[1] = (long)puStack_90;
    *param_4 = local_98;
                    /* try { // try from 066f0ffc to 067f0fff has its CatchHandler @ 066f1074 */
    if ((uVar13 & 1) == 0) {
                    /* try { // try from 066f1000 to 067f1003 has its CatchHandler @ 066f1070 */
                    /* try { // try from 066f1004 to 067f1007 has its CatchHandler @ 066f1068 */
                    /* try { // try from 066f1008 to 067f100b has its CatchHandler @ 066f1088 */
                    /* try { // try from 066f100c to 067f100f has its CatchHandler @ 066f1060 */
                    /* try { // try from 066f1010 to 067f1013 has its CatchHandler @ 066f105c */
      if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
                    /* try { // try from 066f1014 to 067f1017 has its CatchHandler @ 066f1054 */
        thunk_FUN_031e5338();
      }
                    /* try { // try from 066f1018 to 067f101b has its CatchHandler @ 066f1050 */
                    /* try { // try from 066f101c to 067f101f has its CatchHandler @ 066f1048 */
      uVar12 = FUN_0674c3f0(0);
                    /* try { // try from 066f1020 to 067f1023 has its CatchHandler @ 066f1040 */
                    /* try { // try from 066f1024 to 067f1027 has its CatchHandler @ 066f1058 */
                    /* catch() { ... } // from try @ 066f0f50 with catch @ 066f1028
                       try { // try from 066f1028 to 067f10d7 has its CatchHandler @ 066f0bcc */
                    /* catch() { ... } // from try @ 066f0f40 with catch @ 066f102c */
                    /* catch() { ... } // from try @ 066f0f1c with catch @ 066f1030 */
                    /* catch() { ... } // from try @ 066f0f08 with catch @ 066f1034 */
      if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 066f0f30 with catch @ 066f1038 */
                    /* catch() { ... } // from try @ 066f0ef8 with catch @ 066f103c */
        thunk_FUN_031e5338(*(long *)PTR_DAT_070c22f8);
      }
                    /* catch() { ... } // from try @ 066f1020 with catch @ 066f1040 */
                    /* catch() { ... } // from try @ 066f0ee8 with catch @ 066f1044 */
                    /* catch() { ... } // from try @ 066f101c with catch @ 066f1048 */
                    /* catch() { ... } // from try @ 066f0ed8 with catch @ 066f104c */
      uVar28 = FUN_05930834(uVar11,uVar12,0);
                    /* catch() { ... } // from try @ 066f1018 with catch @ 066f1050 */
      uVar28 = uVar28 & 0xffffffff;
    }
                    /* catch() { ... } // from try @ 066f1014 with catch @ 066f1054 */
    if (param_6 != 0) {
                    /* catch() { ... } // from try @ 066f0f68 with catch @ 066f1058
                       catch() { ... } // from try @ 066f1024 with catch @ 066f1058 */
      iVar25 = *(int *)(param_6 + 0x34);
                    /* catch() { ... } // from try @ 066f1010 with catch @ 066f105c */
                    /* catch() { ... } // from try @ 066f100c with catch @ 066f1060 */
                    /* catch() { ... } // from try @ 066f0cdc with catch @ 066f1064 */
                    /* catch() { ... } // from try @ 066f1004 with catch @ 066f1068 */
      if ((int)uVar28 < 1) {
        uVar30 = 1;
      }
      else {
                    /* catch() { ... } // from try @ 066f0e20 with catch @ 066f106c */
                    /* catch() { ... } // from try @ 066f1000 with catch @ 066f1070 */
                    /* catch() { ... } // from try @ 066f0ffc with catch @ 066f1074 */
        do {
                    /* catch() { ... } // from try @ 066f0ca0 with catch @ 066f1078 */
                    /* catch() { ... } // from try @ 066f0ff8 with catch @ 066f107c */
                    /* catch() { ... } // from try @ 066f0ff4 with catch @ 066f1080 */
          lVar15 = *param_4 + uVar28 * 0xe;
                    /* catch() { ... } // from try @ 066f0ff0 with catch @ 066f1084 */
          lVar17 = 0;
                    /* catch() { ... } // from try @ 066f0ebc with catch @ 066f1088
                       catch() { ... } // from try @ 066f1008 with catch @ 066f1088 */
                    /* catch() { ... } // from try @ 066f0fec with catch @ 066f108c */
          uVar23 = *(ushort *)(lVar15 + -10);
                    /* catch() { ... } // from try @ 066f0fe8 with catch @ 066f1090 */
          uVar4 = *(ushort *)(lVar15 + -2);
                    /* catch() { ... } // from try @ 066f0fe4 with catch @ 066f1094 */
          uVar13 = uVar28;
          puVar20 = (ushort *)(*param_4 + 4);
          do {
                    /* catch() { ... } // from try @ 066f0fe0 with catch @ 066f1098 */
                    /* catch() { ... } // from try @ 066f0fd4 with catch @ 066f109c */
            uVar13 = uVar13 - 1;
                    /* catch() { ... } // from try @ 066f0e78 with catch @ 066f10a0 */
                    /* catch() { ... } // from try @ 066f0fd0 with catch @ 066f10a4 */
            lVar17 = lVar17 + (int)((uint)*puVar20 * (uint)*puVar20);
            puVar20 = puVar20 + 7;
                    /* catch() { ... } // from try @ 066f0d1c with catch @ 066f10a8 */
          } while (uVar13 != 0);
                    /* catch() { ... } // from try @ 066f0fcc with catch @ 066f10ac */
          uVar26 = 1;
          do {
                    /* catch() { ... } // from try @ 066f0d88 with catch @ 066f10b0 */
            uVar30 = uVar26;
                    /* catch() { ... } // from try @ 066f0dd8 with catch @ 066f10b4 */
                    /* catch() { ... } // from try @ 066f0fc8 with catch @ 066f10b8 */
                    /* catch() { ... } // from try @ 066f0fc4 with catch @ 066f10bc */
            uVar26 = uVar30 << 1;
          } while ((long)(iVar25 * iVar25) * (long)(int)uVar30 * (long)(int)uVar30 < lVar17);
                    /* try { // try from 066f10d8 to 067f10db has its CatchHandler @ 066f10e8 */
          if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar26 = (uint)uVar4;
                    /* catch() { ... } // from try @ 066f10d8 with catch @ 066f10e8 */
                    /* try { // try from 066f10ec to 067f10f3 has its CatchHandler @ 066f10fc */
          iVar9 = FUN_06731cc8(uVar26 & 1,0);
                    /* try { // try from 066f10f4 to 067f10ff has its CatchHandler @ 066f0bcc */
          if ((int)(iVar9 * uVar30) <= (int)(uint)uVar23) break;
                    /* catch() { ... } // from try @ 066f10ec with catch @ 066f10fc */
          local_84 = uVar26 & 2;
          if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          iVar9 = FUN_0672f628(&local_84,0);
          uVar26 = (int)uVar28 - iVar9;
          uVar28 = (ulong)uVar26;
        } while (0 < (int)uVar26);
      }
      puVar7 = PTR_DAT_070f7070;
      uVar26 = (uint)uVar28;
      if ((int)uVar26 < (int)param_4[1]) {
        lVar17 = (long)(int)uVar26;
        lVar15 = (-(uVar28 >> 0x1f) & 0xfffffff000000000 | uVar28 << 4) + (long)(int)uVar26 * -2;
        do {
          lVar17 = lVar17 + 1;
          puVar3 = (undefined8 *)(*param_4 + lVar15);
          lVar15 = lVar15 + 0xe;
          *puVar3 = 0;
          *(undefined2 *)((long)puVar3 + 0xc) = 0;
          *(undefined4 *)(puVar3 + 1) = 0;
        } while (lVar17 < (int)param_4[1]);
      }
      local_98 = 0;
      puStack_90 = (undefined1 *)0x0;
      FUN_0456d268(&local_98,uVar29,2,1,*(undefined8 *)puVar7);
      param_4[3] = (long)puStack_90;
      param_4[2] = local_98;
      if (0 < (int)param_4[3]) {
        lVar15 = param_4[2];
        lVar17 = 0;
        do {
          *(undefined4 *)(lVar15 + lVar17 * 4) = 0xffffffff;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)param_4[3]);
      }
      uVar13 = (ulong)(uVar26 - 1);
      if (-1 < (int)(uVar26 - 1)) {
        lVar17 = *(long *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x20);
        if (lVar17 == 0) goto LAB_066f1488;
        uVar21 = *(uint *)(lVar17 + 0x18);
        puVar20 = (ushort *)(lVar17 + uVar13 * 0xe + 0x20);
        uVar29 = uVar13;
        do {
          if (uVar21 <= uVar13) {
LAB_066f14dc:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          *(int *)(param_4[2] + (ulong)*puVar20 * 4) = (int)uVar29;
          bVar1 = 0 < (long)uVar29;
          puVar20 = puVar20 + -7;
          uVar29 = uVar29 - 1;
        } while (bVar1);
      }
      lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
      if (lVar17 != 0) {
LAB_066f1244:
        lVar15 = *(long *)(lVar17 + 0x10);
        lVar19 = *(long *)System_Xml_Schema_Numeric2FacetsChecker_TypeInfo;
        *(undefined4 *)(lVar17 + 0x18) = 0;
        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 2;
        if (lVar15 != 0) {
          if (*(int *)(lVar15 + 0x18) == 0) {
            FUN_0431612c(lVar17,0,CONCAT44(iVar25,iVar25),
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          else {
            *(undefined4 *)(lVar17 + 0x18) = 1;
            *(undefined8 *)(lVar15 + 0x20) = 0;
            *(ulong *)(lVar15 + 0x28) = CONCAT44(iVar25,iVar25);
          }
          if ((int)uVar26 < 1) {
            bVar1 = false;
          }
          else {
            uVar21 = 0;
            uVar29 = uVar13;
            do {
              lVar17 = *param_4 + (ulong)uVar21 * 0xe;
              uVar23 = *(ushort *)(lVar17 + 4);
              uVar6 = *(uint6 *)(lVar17 + 8);
              if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              uVar5 = 0;
              if (uVar30 != 0) {
                uVar5 = uVar23 / uVar30;
              }
              iVar9 = FUN_06731cc8((ulong)(uVar6 >> 0x20) & 1,0);
              puVar7 = OVRBoundary_TypeInfo;
              bVar1 = (int)uVar5 < iVar9;
              if ((int)uVar5 < iVar9) break;
              lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
              if (lVar17 == 0) goto LAB_066f1488;
              iVar9 = 0;
              while( true ) {
                if (*(int *)(lVar17 + 0x18) <= iVar9) {
                  uVar30 = uVar30 << 1;
                  lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
                  if (lVar17 != 0) goto LAB_066f1244;
                  goto LAB_066f1488;
                }
                auVar35 = FUN_04315e2c(lVar17,iVar9,*(undefined8 *)puVar7);
                uVar28 = auVar35._0_8_;
                if ((int)uVar5 <= auVar35._8_4_) break;
                iVar9 = iVar9 + 1;
                lVar17 = **(long **)(*(long *)puVar8 + 0xb8);
                if (lVar17 == 0) goto LAB_066f1488;
              }
              uVar27 = uVar28 >> 0x20;
              lVar17 = FUN_03b26670(*param_4,param_4[1],uVar21,
                                    *(undefined8 *)OVRExternalComposition_TypeInfo);
              *(short *)(lVar17 + 6) = auVar35._0_2_;
              lVar15 = *(long *)puVar8;
              *(short *)(lVar17 + 8) = auVar35._4_2_;
              *(short *)(lVar17 + 10) = (short)uVar5;
              if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_066f1488;
              FUN_0431788c(**(long **)(lVar15 + 0xb8),iVar9,
                           *(undefined8 *)System_Threading_OSSpecificSynchronizationContext_TypeInfo
                          );
              if ((int)(uVar21 - uVar26) < -1) {
                iVar10 = 0;
                uVar24 = uVar28 & 0xffffffff;
                do {
                  uVar2 = (int)uVar24 + uVar5;
                  uVar24 = (ulong)uVar2;
                  if (auVar35._8_4_ + auVar35._0_4_ < (int)(uVar2 + uVar5)) {
                    uVar2 = (int)uVar27 + uVar5;
                    uVar27 = (ulong)uVar2;
                    uVar24 = uVar28 & 0xffffffff;
                    if (auVar35._12_4_ + auVar35._4_4_ < (int)(uVar2 + uVar5)) break;
                  }
                  if (**(long **)(*(long *)puVar8 + 0xb8) == 0) goto LAB_066f1488;
                  FUN_04316e98(**(long **)(*(long *)puVar8 + 0xb8),iVar9 + iVar10,
                               uVar24 | uVar27 << 0x20,CONCAT44(uVar5,uVar5),
                               *(undefined8 *)System_Runtime_InteropServices_OSPlatform_TypeInfo);
                  iVar10 = iVar10 + 1;
                } while ((int)uVar29 != iVar10);
              }
              uVar29 = (ulong)((int)uVar29 - 1);
              uVar21 = uVar21 + 1;
            } while (uVar21 != uVar26);
          }
          *(bool *)(param_4 + 5) = bVar1;
          *(uint *)(param_4 + 4) = uVar26;
          *(uint *)((long)param_4 + 0x24) = uVar11;
          *(uint *)((long)param_4 + 0x2c) = uVar30;
          *(int *)(param_4 + 6) = iVar25;
          return;
        }
      }
    }
  }
LAB_066f1488:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


