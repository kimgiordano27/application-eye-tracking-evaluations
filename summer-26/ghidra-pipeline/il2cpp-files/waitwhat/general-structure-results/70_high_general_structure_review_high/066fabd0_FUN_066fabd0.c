/*
FUNCTION_NAME: FUN_066fabd0
ENTRY_POINT: 066fabd0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_066fabd0(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  uint local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_075582bf & 1) == 0) {
    FUN_03188a78(OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo);
    FUN_03188a78(System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1980);
    FUN_03188a78(System_Net_CloseExState_TypeInfo);
    FUN_03188a78(System_Net_ListenerPrefix_TypeInfo);
    FUN_03188a78(Sentry_Internal_MainSentryEventProcessor_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2ff8);
    FUN_03188a78(Best_HTTP_Request_Settings_OnCreateDownloadStreamDelegate_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_OnCullingCompleteCallback_TypeInfo);
    FUN_03188a78(UnityEngine_Rendering_OnDemandRendering_TypeInfo);
    FUN_03188a78(Best_HTTP_OnHeaderEnumerationDelegate_TypeInfo);
    FUN_03188a78(Best_HTTP_OnRequestFinishedDelegate_TypeInfo);
    FUN_03188a78(UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo);
                    /* try { // try from 066faca4 to 067fad33 has its CatchHandler @ 066faca4
                       catch() { ... } // from try @ 066faca4 with catch @ 066faca4
                       catch() { ... } // from try @ 066faea4 with catch @ 066faca4
                       catch() { ... } // from try @ 066faf60 with catch @ 066faca4
                       catch() { ... } // from try @ 066faf70 with catch @ 066faca4
                       catch() { ... } // from try @ 066faff4 with catch @ 066faca4 */
    FUN_03188a78(Oculus_Interaction_Input_OneEuroFilter_TypeInfo);
    FUN_03188a78(Oculus_Interaction_OneGrabPhysicsJointTransformer_TypeInfo);
    FUN_03188a78(System_Linq_Expressions_OpAssignMethodConversionBinaryExpression_TypeInfo);
    FUN_03188a78(System_Reflection_Emit_OpCode_TypeInfo);
    DAT_075582bf = 1;
  }
  local_80 = 0;
  local_b0 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (*param_3 == 0) goto LAB_066fb59c;
  lVar15 = FUN_066c5ab4(*param_3,*(undefined8 *)
                                  System_Net_NetworkInformation_MacOsNetworkInterface_TypeInfo);
                    /* try { // try from 066fad34 to 067fad3f has its CatchHandler @ 066faf84 */
  if ((((*(long *)(param_1 + 0x1a0) == 0) ||
       (lVar22 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x80), lVar22 == 0)) ||
      (thunk_FUN_069a5650(lVar22,0,0), lVar15 == 0)) || (*(long *)(lVar15 + 0x1d8) == 0))
  goto LAB_066fb59c;
                    /* try { // try from 066fad4c to 067fad53 has its CatchHandler @ 066faf74 */
  uVar16 = FUN_066d427c(*(long *)(lVar15 + 0x1d8),0);
  FUN_0670f6c4(param_2,uVar16,0);
  uVar16 = FUN_06758e68(param_3 + 1,0);
  FUN_067006cc(param_1,uVar16,lVar22);
  uVar16 = FUN_06758e68(param_3 + 1,0);
  FUN_0670077c(param_1,uVar16,lVar22);
  uVar17 = FUN_06759ce8(param_3 + 1,0);
  if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x246) != '\0')) {
                    /* try { // try from 066fadb0 to 067fadbb has its CatchHandler @ 066fafa4 */
    FUN_069a415c(lVar22,*(undefined8 *)Oculus_Interaction_OneGrabPhysicsJointTransformer_TypeInfo,0)
    ;
  }
  puVar7 = PTR_DAT_070f1980;
  uVar16 = FUN_06758e68(param_3 + 1,0);
  uVar11 = FUN_066fd00c(uVar16,uVar16);
                    /* try { // try from 066fade8 to 067fadf3 has its CatchHandler @ 066fafbc */
  if ((uVar11 & 1) == 0) {
    local_160 = 0;
  }
  else {
    local_160 = *(byte *)(lVar15 + 0x1ac) ^ 1 | (uint)*(byte *)(param_1 + 0x246) << 1;
                    /* try { // try from 066fae04 to 067fae0f has its CatchHandler @ 066faf9c */
    auVar26 = FUN_066e6b30(lVar15,0);
    uVar12 = FUN_066e6c28(lVar15,0);
    uVar13 = FUN_066e6cb8(lVar15,0);
    FUN_06700818(param_1,auVar26._0_8_,auVar26._8_8_,uVar12,lVar22,local_160,uVar13 & 1);
  }
  puVar9 = UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo;
  puVar8 = Sentry_Internal_MainSentryEventProcessor_TypeInfo;
  cVar3 = *(char *)(lVar15 + 399);
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_066337dc(lVar22,*(undefined8 *)puVar9,cVar3 != '\0',0);
                    /* try { // try from 066fae94 to 067faea3 has its CatchHandler @ 066fafa8 */
  if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
                    /* try { // try from 066faea4 to 067faf2b has its CatchHandler @ 066faca4 */
  lVar18 = FUN_066d38e4(lVar15,0);
  if (lVar18 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = thunk_FUN_066bd314(lVar18,*(undefined1 *)(lVar15 + 0x1e0),0);
    uVar13 = uVar13 & 1;
  }
  if (*(char *)(param_1 + 0x24b) == '\0') {
    uVar16 = *(undefined8 *)(param_1 + 0xf0);
  }
  else {
    plVar19 = *(long **)(lVar15 + 0x1d8);
    if (plVar19 == (long *)0x0) goto LAB_066fb59c;
    uVar16 = (**(code **)(*plVar19 + 0x1d8))(plVar19,param_2,*(undefined8 *)(*plVar19 + 0x1e0));
    *(undefined8 *)(param_1 + 0xf0) = uVar16;
  }
  bVar4 = *(byte *)(lVar15 + 0x18c);
  if (*(int *)(lVar15 + 0x170) == 1) {
    bVar10 = *(int *)(lVar15 + 0x174) == 2;
  }
  else {
    bVar10 = false;
  }
  iVar5 = (uint)bVar4 << 1;
                    /* try { // try from 066faf2c to 067faf2f has its CatchHandler @ 066fafb8 */
  iVar2 = *(int *)(lVar15 + 0x1cc);
                    /* try { // try from 066faf30 to 067faf33 has its CatchHandler @ 066fafb4 */
                    /* try { // try from 066faf34 to 067faf37 has its CatchHandler @ 066fafb0 */
                    /* try { // try from 066faf38 to 067faf3b has its CatchHandler @ 066fafac */
                    /* try { // try from 066faf3c to 067faf3f has its CatchHandler @ 066fafa0 */
  uVar17 = FUN_066e7044(lVar15,0);
  plVar19 = (long *)System_Net_ListenerPrefix_TypeInfo;
                    /* try { // try from 066faf40 to 067faf43 has its CatchHandler @ 066faf98 */
                    /* try { // try from 066faf44 to 067faf47 has its CatchHandler @ 066faf94 */
                    /* try { // try from 066faf48 to 067faf4b has its CatchHandler @ 066faf90 */
                    /* try { // try from 066faf4c to 067faf4f has its CatchHandler @ 066faf8c */
  if (((uVar17 & 1) == 0) || (*(float *)(lVar15 + 0x224) <= 0.0)) {
                    /* try { // try from 066faf58 to 067faf5b has its CatchHandler @ 066faf7c */
    bVar6 = false;
  }
  else {
                    /* try { // try from 066faf50 to 067faf53 has its CatchHandler @ 066faf88 */
    bVar6 = (bool)(bVar10 ^ 1);
                    /* try { // try from 066faf54 to 067faf57 has its CatchHandler @ 066faf80 */
  }
                    /* try { // try from 066faf5c to 067faf5f has its CatchHandler @ 066faf84 */
                    /* try { // try from 066faf60 to 067faf67 has its CatchHandler @ 066faca4 */
                    /* try { // try from 066faf68 to 067faf6b has its CatchHandler @ 066faf78 */
  if (*(int *)(lVar15 + 0x170) == 0) {
    if (iVar2 == 1) {
      FUN_069a415c(lVar22,*(undefined8 *)Best_HTTP_OnHeaderEnumerationDelegate_TypeInfo,0);
    }
    goto joined_r0x066fb594;
  }
                    /* try { // try from 066faf6c to 067faf6f has its CatchHandler @ 066faf70 */
                    /* catch() { ... } // from try @ 066faf6c with catch @ 066faf70
                       try { // try from 066faf70 to 067fafd7 has its CatchHandler @ 066faca4 */
                    /* catch() { ... } // from try @ 066fad4c with catch @ 066faf74 */
  local_b0 = *(undefined4 *)(lVar15 + 0x128);
                    /* catch() { ... } // from try @ 066faf68 with catch @ 066faf78 */
  local_d0 = *(undefined8 *)(lVar15 + 0x108);
  uStack_b8 = *(undefined8 *)(lVar15 + 0x120);
  local_c0 = *(undefined8 *)(lVar15 + 0x118);
                    /* catch() { ... } // from try @ 066faf58 with catch @ 066faf7c */
                    /* catch() { ... } // from try @ 066faf54 with catch @ 066faf80 */
  local_e0 = *(undefined8 *)(lVar15 + 0xf8);
                    /* catch() { ... } // from try @ 066fad34 with catch @ 066faf84
                       catch() { ... } // from try @ 066faf5c with catch @ 066faf84 */
                    /* catch() { ... } // from try @ 066faf50 with catch @ 066faf88 */
                    /* catch() { ... } // from try @ 066faf4c with catch @ 066faf8c */
                    /* catch() { ... } // from try @ 066faf48 with catch @ 066faf90 */
  cVar3 = *(char *)(lVar15 + 399);
  bVar1 = bVar10;
                    /* catch() { ... } // from try @ 066faf44 with catch @ 066faf94 */
  if (iVar2 == 1) {
    bVar1 = true;
  }
                    /* catch() { ... } // from try @ 066faf40 with catch @ 066faf98 */
                    /* catch() { ... } // from try @ 066fae04 with catch @ 066faf9c */
  uStack_d8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar15 + 0x100) >> 0x20),1);
                    /* catch() { ... } // from try @ 066faf3c with catch @ 066fafa0 */
                    /* catch() { ... } // from try @ 066fadb0 with catch @ 066fafa4 */
                    /* catch() { ... } // from try @ 066fae94 with catch @ 066fafa8 */
                    /* catch() { ... } // from try @ 066faf38 with catch @ 066fafac */
  uStack_c8 = *(ulong *)(lVar15 + 0x110) & 0xffffffff;
                    /* catch() { ... } // from try @ 066faf34 with catch @ 066fafb0 */
  if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 066faf30 with catch @ 066fafb4 */
                    /* catch() { ... } // from try @ 066faf2c with catch @ 066fafb8 */
                    /* catch() { ... } // from try @ 066fade8 with catch @ 066fafbc */
    if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar12 = FUN_06757348(0);
                    /* try { // try from 066fafd8 to 067fafdb has its CatchHandler @ 066fafe8 */
    FUN_069bba54(&local_e0,uVar12,0);
  }
                    /* catch() { ... } // from try @ 066fafd8 with catch @ 066fafe8 */
                    /* try { // try from 066fafec to 067faff3 has its CatchHandler @ 066faffc */
  if ((*(long *)(param_1 + 0x1a0) == 0) ||
     (lVar20 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x68), lVar20 == 0)) goto LAB_066fb59c;
                    /* try { // try from 066faff4 to 067fafff has its CatchHandler @ 066faca4 */
                    /* catch() { ... } // from try @ 066fafec with catch @ 066faffc */
  thunk_FUN_069a5650(lVar20,0,0);
  if (bVar1) {
    if ((uVar11 & 1) != 0) {
      auVar26 = FUN_066e6b30(lVar15,0);
      uVar12 = FUN_066e6c28(lVar15,0);
      if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_066fb59c;
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x68);
      uVar14 = FUN_066e6cb8(lVar15,0);
      FUN_06700818(param_1,auVar26._0_8_,auVar26._8_8_,uVar12,uVar16,local_160,uVar14 & 1);
    }
    puVar7 = System_Net_ListenerPrefix_TypeInfo;
    if (iVar2 == 1) {
      if ((*(long *)(param_1 + 0x1a0) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x68), lVar20 == 0)) goto LAB_066fb59c;
      FUN_069a415c(lVar20,*(undefined8 *)Best_HTTP_OnHeaderEnumerationDelegate_TypeInfo,0);
    }
    if (bVar10) {
      if ((*(long *)(param_1 + 0x1a0) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x68), lVar20 == 0)) goto LAB_066fb59c;
      puVar21 = (undefined8 *)UnityEngine_Rendering_OnDemandRendering_TypeInfo;
      if ((local_160 & 2) != 0) {
        puVar21 = (undefined8 *)
                  System_Linq_Expressions_OpAssignMethodConversionBinaryExpression_TypeInfo;
      }
      FUN_069a415c(lVar20,*puVar21,0);
    }
    if (cVar3 != '\0') {
      if ((*(long *)(param_1 + 0x1a0) == 0) ||
         (lVar20 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x68), lVar20 == 0)) goto LAB_066fb59c;
      FUN_069a415c(lVar20,*(undefined8 *)UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo,0
                  );
    }
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06728e50(0,(undefined8 *)(param_1 + 0x250),&local_e0,0,1,1,
                 *(undefined8 *)System_Reflection_Emit_OpCode_TypeInfo,0);
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_066fb59c;
    uVar23 = *(undefined8 *)(param_1 + 0xf0);
    uVar24 = *(undefined8 *)(param_1 + 0x250);
    uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x68);
    if (*(int *)(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0662dd0c(param_2,uVar23,uVar24,(ulong)bVar4 << 1,0,uVar16,0,0);
    uVar16 = *(undefined8 *)(param_1 + 0x250);
  }
  plVar19 = (long *)System_Net_ListenerPrefix_TypeInfo;
  if (*(int *)(lVar15 + 0x170) != 2) {
    if (*(int *)(lVar15 + 0x170) == 1) {
      if (*(int *)(lVar15 + 0x174) != 1) {
        if (*(int *)(lVar15 + 0x174) == 2) {
          if ((*(long *)(param_1 + 0x1a0) == 0) ||
             (lVar20 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x70), lVar20 == 0))
          goto LAB_066fb59c;
          thunk_FUN_069a5650(lVar20,0,0);
          local_110 = *(undefined8 *)(lVar15 + 0x108);
          local_f0 = *(undefined4 *)(lVar15 + 0x128);
          uStack_f8 = *(undefined8 *)(lVar15 + 0x120);
          local_100 = *(undefined8 *)(lVar15 + 0x118);
          local_120 = *(undefined8 *)(lVar15 + 0x160);
          uStack_118 = CONCAT44((int)((ulong)*(undefined8 *)(lVar15 + 0x100) >> 0x20),1);
          uStack_108 = *(ulong *)(lVar15 + 0x110) & 0xffffffff;
          if (*(int *)(*plVar19 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_06728e50(0,(undefined8 *)(param_1 + 600),&local_120,0,1,1,
                       *(undefined8 *)Oculus_Interaction_Input_OneEuroFilter_TypeInfo,0);
          FUN_06634534((float)*(int *)(lVar15 + 0xf8),(float)*(int *)(lVar15 + 0xfc),
                       (float)*(int *)(lVar15 + 0xf8),(float)*(int *)(lVar15 + 0xfc),
                       (float)*(int *)(lVar15 + 0x160),(float)*(int *)(lVar15 + 0x164),param_2,0);
          if (cVar3 != '\0') {
            if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_066fb59c;
            uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x70);
            if (*(int *)(*(long *)PTR_DAT_070f1980 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            FUN_066337dc(uVar23,*(undefined8 *)
                                 UnityEngine_InputSystem_OnScreen_OnScreenControl_TypeInfo,1,0);
          }
          if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_066fb59c;
          uVar24 = *(undefined8 *)(param_1 + 600);
          uVar23 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x70);
          if (*(int *)(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          FUN_0662dd0c(param_2,uVar16,uVar24,iVar5,0,uVar23,0,0);
          if (0.0 < *(float *)(lVar15 + 0x17c)) {
            fVar25 = DAT_012e3b84;
            if (*(char *)(lVar15 + 0x178) != '\0') {
              fVar25 = *(float *)(lVar15 + 0x17c);
            }
            puVar21 = (undefined8 *)Best_HTTP_OnRequestFinishedDelegate_TypeInfo;
            if ((uVar11 & 1) == 0) {
              puVar21 = (undefined8 *)
                        Best_HTTP_Request_Settings_OnCreateDownloadStreamDelegate_TypeInfo;
            }
            FUN_069a415c(lVar22,*puVar21,0);
            FUN_06634770(fVar25,param_2,0);
          }
          uVar16 = *(undefined8 *)(param_1 + 600);
          FUN_0670f6c4(param_2,uVar16,0);
          plVar19 = (long *)System_Net_ListenerPrefix_TypeInfo;
        }
        goto joined_r0x066fb594;
      }
      if (!bVar6) {
        FUN_069a415c(lVar22,*(undefined8 *)UnityEngine_Rendering_OnCullingCompleteCallback_TypeInfo,
                     0);
        goto LAB_066fb42c;
      }
    }
    else {
joined_r0x066fb594:
      if (!bVar6) goto LAB_066fb42c;
    }
    FUN_069a415c(lVar22,*(undefined8 *)
                         Best_HTTP_Request_Settings_OnCreateDownloadStreamDelegate_TypeInfo,0);
    FUN_06634770(*(undefined4 *)(lVar15 + 0x224),param_2,0);
  }
LAB_066fb42c:
  if (*(int *)(*plVar19 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_06727d8c(&local_a0,param_3,0);
  if (uVar13 == 0) {
    uStack_148 = uStack_98;
    local_150 = local_a0;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    local_130 = local_80;
    FUN_0661e448(&local_150,0);
    uVar23 = **(undefined8 **)(*(long *)System_Net_CloseExState_TypeInfo + 0xb8);
    if (*(int *)(*plVar19 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06725a8c(param_2,lVar15,uVar16,uVar23,iVar5,0,lVar22,0,0);
    return;
  }
  if (lVar18 != 0) {
    puVar21 = (undefined8 *)FUN_066bd2fc(lVar18,0);
    uVar23 = *puVar21;
    if (*(int *)(*(long *)OVR_OpenVR_CameraVideoStreamFrameHeader_t_TypeInfo + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0662dd0c(param_2,uVar16,uVar23,0,0,lVar22,0,0);
    lVar15 = *(long *)(lVar15 + 0x1d8);
    puVar21 = (undefined8 *)FUN_066bd2fc(lVar18,0);
    uVar16 = *puVar21;
    puVar21 = (undefined8 *)FUN_066bd304(lVar18,0);
    if (lVar15 != 0) {
      FUN_066dafd0(lVar15,uVar16,*puVar21,0);
      return;
    }
  }
LAB_066fb59c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


