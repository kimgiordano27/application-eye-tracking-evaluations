/*
FUNCTION_NAME: UnityEngine.SystemInfo$$GetFoveatedRenderingCaps
ENTRY_POINT: 074b5534
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_11;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_SystemInfo__GetFoveatedRenderingCaps
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_049ceef4(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(unaff_x21 + 0x28) = unaff_x22;
  thunk_FUN_037aeb94();
  if (unaff_x20 != 0) {
                    /* catch() { ... } // from try @ 074b5524 with catch @ 074b5550 */
                    /* try { // try from 074b5558 to 075b555f has its CatchHandler @ 074b5574 */
    lVar8 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4();
      }
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
      FUN_062855bc(lVar8,0);
      puVar2 = PTR_DAT_07da3598;
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)PTR_DAT_07da35b0;
        thunk_FUN_037aeb94();
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
        *(undefined4 *)(lVar8 + 0x18) = 3;
        lVar5 = thunk_FUN_037788cc(*unaff_x24);
        FUN_049ce6c0(lVar5,*unaff_x29);
        if (lVar5 != 0) {
          lVar10 = *unaff_x25;
          uVar7 = *(undefined8 *)PTR_DAT_07da3640;
          lVar9 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
              thunk_FUN_037aeb94();
            }
            else {
              FUN_049ceef4(lVar5,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar8 + 0x30) = lVar5;
            thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
            lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
            FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0);
            lVar9 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
            FUN_062855bc(lVar9,0);
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)PTR_DAT_07da35f0;
              thunk_FUN_037aeb94();
              *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
              thunk_FUN_037aeb94();
              if (lVar5 != 0) {
                lVar10 = *(long *)(lVar5 + 0x10);
                lVar11 = *unaff_x26;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar6 = lVar9;
                    thunk_FUN_037aeb94(plVar6,lVar9);
                  }
                  else {
                    FUN_049ceef4(lVar5,lVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar8 + 0x28) = lVar5;
                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                  lVar5 = *(long *)(unaff_x20 + 0x10);
                  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                  if (lVar5 != 0) {
                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar6 = lVar8;
                      thunk_FUN_037aeb94(plVar6,lVar8);
                    }
                    else {
                      FUN_049ceef4();
                    }
                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                    FUN_062855bc(lVar8,0);
                    puVar2 = System_Dynamic_BindingRestrictions_MergedRestriction_TypeInfo;
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x10) =
                           *(undefined8 *)
                            Unity_TLS_LowLevel_Binding_unitytls_client_log_callback_TypeInfo;
                      thunk_FUN_037aeb94();
                      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
                      thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                      *(undefined4 *)(lVar8 + 0x18) = 3;
                      lVar5 = thunk_FUN_037788cc(*unaff_x24);
                      FUN_049ce6c0(lVar5,*unaff_x29);
                      if (lVar5 != 0) {
                        lVar10 = *unaff_x25;
                        uVar7 = *(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034D_PostfixBurstDelegate_TypeInfo
                        ;
                        lVar9 = *(long *)(lVar5 + 0x10);
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                            thunk_FUN_037aeb94();
                          }
                          else {
                            FUN_049ceef4(lVar5,uVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar8 + 0x30) = lVar5;
                          thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                          lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                          FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0);
                          lVar9 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                          FUN_062855bc(lVar9,0);
                          if (lVar9 != 0) {
                            *(undefined8 *)(lVar9 + 0x18) =
                                 *(undefined8 *)
                                  System_Dynamic_BindingRestrictions_CustomRestriction_TypeInfo;
                            thunk_FUN_037aeb94();
                            *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                            thunk_FUN_037aeb94();
                            if (lVar5 != 0) {
                              lVar10 = *(long *)(lVar5 + 0x10);
                              lVar11 = *unaff_x26;
                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                              if (lVar10 != 0) {
                                uVar1 = *(uint *)(lVar5 + 0x18);
                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                  plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar6 = lVar9;
                                  thunk_FUN_037aeb94(plVar6,lVar9);
                                }
                                else {
                                  FUN_049ceef4(lVar5,lVar9,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(lVar8 + 0x28) = lVar5;
                                thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                lVar5 = *(long *)(unaff_x20 + 0x10);
                                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                if (lVar5 != 0) {
                                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                    plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar6 = lVar8;
                                    thunk_FUN_037aeb94(plVar6,lVar8);
                                  }
                                  else {
                                    FUN_049ceef4();
                                  }
                                  lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b8);
                                  FUN_062855bc(lVar8,0);
                                  puVar2 = 
                                  System_Dynamic_BindingRestrictions_InstanceRestriction_TypeInfo;
                                  if (lVar8 != 0) {
                                    *(undefined8 *)(lVar8 + 0x10) =
                                         *(undefined8 *)
                                          Unity_TLS_LowLevel_Binding_unitytls_client_data_send_callback_TypeInfo
                                    ;
                                    thunk_FUN_037aeb94();
                                    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
                                    thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                    *(undefined4 *)(lVar8 + 0x18) = 3;
                                    lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                    FUN_049ce6c0(lVar5,*unaff_x29);
                                    if (lVar5 != 0) {
                                      lVar10 = *unaff_x25;
                                      uVar7 = *(undefined8 *)
                                               UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000349_BurstDirectCall_TypeInfo
                                      ;
                                      lVar9 = *(long *)(lVar5 + 0x10);
                                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                      if (lVar9 != 0) {
                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar7;
                                          thunk_FUN_037aeb94();
                                        }
                                        else {
                                          FUN_049ceef4(lVar5,uVar7,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar8 + 0x30) = lVar5;
                                        thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                        lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c608);
                                        FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0);
                                        lVar9 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d8c5b0);
                                        FUN_062855bc(lVar9,0);
                                        if (lVar9 != 0) {
                                          *(undefined8 *)(lVar9 + 0x18) =
                                               *(undefined8 *)
                                                System_Dynamic_BindingRestrictions_TypeRestriction_TypeInfo
                                          ;
                                          thunk_FUN_037aeb94();
                                          *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                          thunk_FUN_037aeb94();
                                          if (lVar5 != 0) {
                                            lVar10 = *(long *)(lVar5 + 0x10);
                                            lVar11 = *unaff_x26;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            if (lVar10 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar6 = lVar9;
                                                thunk_FUN_037aeb94(plVar6,lVar9);
                                              }
                                              else {
                                                FUN_049ceef4(lVar5,lVar9,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar8 + 0x28) = lVar5;
                                              thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                              lVar5 = *(long *)(unaff_x20 + 0x10);
                                              *(int *)(unaff_x20 + 0x1c) =
                                                   *(int *)(unaff_x20 + 0x1c) + 1;
                                              if (lVar5 != 0) {
                                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                  plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar6 = lVar8;
                                                  thunk_FUN_037aeb94(plVar6,lVar8);
                                                }
                                                else {
                                                  FUN_049ceef4();
                                                }
                                                lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                            PTR_DAT_07d8c5b8);
                                                FUN_062855bc(lVar8,0);
                                                puVar3 = 
                                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000348_BurstDirectCall_TypeInfo
                                                ;
                                                puVar2 = System_IO_BufferedStream_<>c_TypeInfo;
                                                if (lVar8 != 0) {
                                                  *(undefined8 *)(lVar8 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000348_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  puVar2 = 
                                                  Unity_Burst_BurstCompiler_StaticTypeReinitAttribute_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Burst_BurstCompiler_StaticTypeReinitAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035C_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000357_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000357_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94();
                                                    puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035B_BurstDirectCall_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034C_BurstDirectCall_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034C_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035B_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar3 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000358_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000357_BurstDirectCall_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000358_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  puVar2 = 
                                                  Newtonsoft_Json_Bson_BsonReader_ContainerContext_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Bson_BsonReader_ContainerContext_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000346_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  UnityEngine_UIElements_Box_UxmlFactory_TypeInfo;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_Box_UxmlFactory_TypeInfo;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94();
                                                    puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000358_BurstDirectCall_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  Unity_Burst_BurstCompiler_CommandBuilder_TypeInfo;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000358_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar4;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000349_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar3 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034D_BurstDirectCall_TypeInfo
                                                  ;
                                                  puVar2 = 
                                                  Newtonsoft_Json_Bson_BsonReader_BsonReaderState_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Bson_BsonReader_BsonReaderState_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar2;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  puVar2 = 
                                                  Unity_Burst_BurstCompiler_FakeDelegate_TypeInfo;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Burst_BurstCompiler_FakeDelegate_TypeInfo;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035C_BurstDirectCall_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000346_BurstDirectCall_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000346_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar3;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_037aeb94();
                                                    puVar2 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000345_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    lVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                                                                PTR_DAT_07d8c5b8);
                                                    FUN_062855bc(lVar8,0);
                                                    puVar4 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  puVar3 = Unity_Burst_BurstCompiler_<>c_TypeInfo;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20));
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_037788cc(*unaff_x24);
                                                  FUN_049ce6c0(lVar5,*unaff_x29);
                                                  if (lVar5 != 0) {
                                                    uVar7 = *(undefined8 *)puVar4;
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x25;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_037aeb94();
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c608);
                                                  FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d8c5f0
                                                              );
                                                  lVar9 = thunk_FUN_037788cc(*(undefined8 *)
                                                                              PTR_DAT_07d8c5b0);
                                                  FUN_062855bc(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Burst_BurstCompiler_BurstCompilerHelper_TypeInfo
                                                  ;
                                                  thunk_FUN_037aeb94();
                                                  *(undefined8 *)(lVar9 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_037aeb94();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar11 = *unaff_x26;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_037aeb94(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_049ceef4(lVar5,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar5;
                                                  thunk_FUN_037aeb94((long *)(lVar8 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_037aeb94(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_049ceef4();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_037aeb94();
                                                    FUN_074afbf4();
                                                    return;
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


