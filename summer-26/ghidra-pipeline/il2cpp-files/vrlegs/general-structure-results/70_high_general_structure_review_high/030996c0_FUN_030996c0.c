/*
FUNCTION_NAME: FUN_030996c0
ENTRY_POINT: 030996c0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_13;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


void FUN_030996c0(long param_1,long param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined1 local_70 [16];
  
  puVar7 = 
  Unity_Entities_Serialization_SerializeUtilityInterop_AllocAndQueueReadChunkCommands_000014EF_PostfixBurstDelegate_var
  ;
                    /* try { // try from 030996c0 to 031996d3 has its CatchHandler @ 030997b4 */
                    /* try { // try from 030996d4 to 0319979f has its CatchHandler @ 0309947c */
  if ((DAT_0412b53e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03ceb758);
    FUN_01ab69ac(
                Unity_Entities_Serialization_SerializeUtilityInterop_ImportChunks_000014F1_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000A2D_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Runtime_InteropServices_OutAttribute_var);
    FUN_01ab69ac(Unity_Entities_RuntimeApplication_UpdatePostFrame_var);
    FUN_01ab69ac(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_01ab69ac(PTR_DAT_03d0c9c0);
    FUN_01ab69ac(UnityEngine_InputSystem_Pen_var);
    FUN_01ab69ac(Unity_Entities_RuntimeApplication_UpdatePreFrame_var);
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000A39_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000A3A_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(System_Text_EncoderFallback_var);
    FUN_01ab69ac(UnityEngine_UI_ILayoutGroup_var);
                    /* try { // try from 030997a0 to 031997af has its CatchHandler @ 030997b0 */
    FUN_01ab69ac(System_Data_SqlTypes_SqlByte_var);
                    /* catch() { ... } // from try @ 030997a0 with catch @ 030997b0 */
    FUN_01ab69ac(System_Data_SqlTypes_SqlBytes_var);
                    /* catch() { ... } // from try @ 030996c0 with catch @ 030997b4 */
                    /* try { // try from 030997b8 to 031997bb has its CatchHandler @ 030997c4 */
                    /* try { // try from 030997bc to 031997c7 has its CatchHandler @ 0309947c */
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion___codegen__OnCreate_00000A68_PostfixBurstDelegate_var
                );
                    /* catch() { ... } // from try @ 030997b8 with catch @ 030997c4 */
    FUN_01ab69ac(
                Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion___codegen__OnUpdate_00000A69_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cc1790);
    FUN_01ab69ac(PTR_DAT_03cc1798);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(
                Unity_Physics_Systems_SolveAndIntegrateSystem___codegen__OnCreate_00000B94_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_Serialization_SerializeUtilityInterop_AllocAndQueueReadChunkCommands_000014EF_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_Systems_SolveAndIntegrateSystem___codegen__OnUpdate_00000B95_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Physics_Authoring_StaticOptimizeBakingSystem_GetUniqueRoots_000001C6_PostfixBurstDelegate_var
                );
    DAT_0412b53e = 1;
  }
  lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar7);
  FUN_03099e44(lVar8,0);
  if (lVar8 != 0) {
    plVar18 = (long *)(lVar8 + 0x10);
    *plVar18 = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar18,param_2);
    puVar7 = System_Data_SqlTypes_SqlBytes_var;
    if (*plVar18 != 0) {
      FUN_02215a88(*plVar18,param_3,local_70,*(undefined8 *)System_Data_SqlTypes_SqlBytes_var);
      uVar14 = local_70._0_8_;
      puVar6 = PTR_DAT_03cbdf88;
      auVar3._8_8_ = local_70._8_8_;
      auVar3._0_8_ = local_70._0_8_;
      if ((local_70._0_8_ != 0) && (local_70 = auVar3, *(long *)(local_70._0_8_ + 0x10) != 0)) {
        FUN_01f49730(*(long *)(local_70._0_8_ + 0x10),local_70,*(undefined8 *)PTR_DAT_03ceb758);
        uVar15 = local_70._0_8_;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar9 = FUN_036cee6c(uVar15,0,0);
        if ((uVar9 & 1) != 0) {
          if (uVar15 == 0) goto LAB_03099c60;
          lVar10 = FUN_036a0ed4(uVar15,0);
          lVar1 = uVar14 + 0x18;
          lVar11 = *(long *)(*(long *)PTR_DAT_03cc1790 + 0x20);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01a46ff8();
          }
          pcVar12 = (char *)thunk_FUN_01a59484(lVar1,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar11 + 0xc0) + 8) +
                                                      0x80));
          if (*pcVar12 != '\0') {
            if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar9 = FUN_036d35a8(lVar10,0,0);
            if ((uVar9 & 1) == 0) {
              if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar9 = FUN_036d35a8(uVar15,0,0);
              puVar6 = PTR_DAT_03cc1798;
              if ((uVar9 & 1) == 0) {
                FUN_022412e0(lVar1,local_70,*(undefined8 *)PTR_DAT_03cc1798);
                auVar5._8_8_ = local_70._8_8_;
                auVar5._0_8_ = local_70._0_8_;
                auVar4._8_8_ = local_70._8_8_;
                auVar4._0_8_ = local_70._0_8_;
                if (((param_1 != 0) && (local_70 = auVar4, *(long *)(param_1 + 0x28) != 0)) &&
                   (lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x60), local_70 = auVar5,
                   lVar11 != 0)) {
                  if (*(int *)(lVar11 + 0x18) <= (int)local_70._0_4_) {
                    return;
                  }
                  FUN_036a0f10(uVar15,0,0);
                  if (*(long *)(param_1 + 0x28) != 0) {
                    lVar11 = *(long *)(*(long *)(param_1 + 0x28) + 0x60);
                    FUN_022412e0(lVar1,local_70,*(undefined8 *)puVar6);
                    if (lVar11 != 0) {
                      FUN_02215a88(lVar11,local_70._0_8_ & 0xffffffff,local_70,
                                   *(undefined8 *)
                                    Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion___codegen__OnCreate_00000A68_PostfixBurstDelegate_var
                                  );
                      uVar14 = local_70._0_8_;
                      if (local_70._0_8_ != 0) {
                        uVar19 = *(undefined8 *)(local_70._0_8_ + 0x18);
                        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                          
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_ComputeNewTweenTarget_00000A39_PostfixBurstDelegate_var
                                                  );
                        FUN_021de1ac(uVar13,lVar8,
                                     *(undefined8 *)
                                      Unity_Physics_Systems_SolveAndIntegrateSystem___codegen__OnCreate_00000B94_PostfixBurstDelegate_var
                                     ,0);
                        uVar13 = FUN_01f6d39c(uVar19,uVar13,
                                              *(undefined8 *)
                                               UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000A2D_PostfixBurstDelegate_var
                                             );
                        uVar13 = FUN_01f70920(uVar13,*(undefined8 *)PTR_DAT_03d0c9c0);
                        uVar9 = FUN_01f649bc(uVar13,*(undefined8 *)
                                                                                                          
                                                  Unity_Entities_Serialization_SerializeUtilityInterop_ImportChunks_000014F1_PostfixBurstDelegate_var
                                            );
                        if ((uVar9 & 1) != 0) {
                          FUN_036a0e90(uVar15,uVar13,0);
                          iVar2 = *(int *)(uVar14 + 0x10);
                          if (iVar2 == -1) {
                            lVar8 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                                
                                                  Unity_Physics_Authoring_StaticOptimizeBakingSystem_GetUniqueRoots_000001C6_PostfixBurstDelegate_var
                                                  );
                            FUN_03099ec0(lVar8,0);
                            uVar19 = FUN_036cbb80(uVar15,0);
                            if (lVar8 == 0) goto LAB_03099c60;
                            *(undefined8 *)(lVar8 + 0x10) = uVar19;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            uVar19 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                                  
                                                  Unity_Entities_RuntimeApplication_UpdatePreFrame_var
                                                  );
                            FUN_021de1ac(uVar19,lVar8,
                                         *(undefined8 *)
                                          Unity_Physics_Systems_SolveAndIntegrateSystem___codegen__OnUpdate_00000B95_PostfixBurstDelegate_var
                                         ,0);
                            puVar16 = (undefined8 *)
                                      Unity_Entities_RuntimeApplication_UpdatePostFrame_var;
                          }
                          else {
                            local_70 = FUN_01f7f7e8(param_1,iVar2,
                                                    *(undefined8 *)
                                                                                                          
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Tweenables_SmartTweenableVariables_SmartFollowVector3TweenableVariable_IsNewTargetWithinThreshold_00000A3A_PostfixBurstDelegate_var
                                                  );
                            uVar13 = thunk_FUN_01a89a98(*(undefined8 *)
                                                                                                                  
                                                  Unity_Physics_GraphicsIntegration_SmoothRigidBodiesGraphicalMotion___codegen__OnUpdate_00000A69_PostfixBurstDelegate_var
                                                  ,local_70);
                            uVar19 = thunk_FUN_01a89e68(*(undefined8 *)
                                                         UnityEngine_InputSystem_Pen_var);
                            if (param_4 == (long *)0x0) goto LAB_03099c60;
                            lVar8 = *param_4;
                            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                            if (uVar9 != 0) {
                              piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar17 + -2) ==
                                    *(long *)System_Text_EncoderFallback_var) {
                                  lVar8 = lVar8 + (long)(*piVar17 + 3) * 0x10 + 0x138;
                                  goto LAB_03099ba0;
                                }
                                uVar9 = uVar9 - 1;
                                piVar17 = piVar17 + 4;
                              } while (uVar9 != 0);
                            }
                            lVar8 = FUN_01a472ec(param_4,*(long *)System_Text_EncoderFallback_var,3)
                            ;
LAB_03099ba0:
                            FUN_021de1ac(uVar19,param_4,*(undefined8 *)(lVar8 + 8),0);
                            puVar16 = (undefined8 *)System_Runtime_InteropServices_OutAttribute_var;
                          }
                          uVar13 = FUN_01f6d39c(uVar13,uVar19,*puVar16);
                          uVar13 = FUN_01f70920(uVar13,*(undefined8 *)
                                                        UnityEngine_UIElements_PanelRaycaster_var);
                          if (lVar10 == 0) goto LAB_03099c60;
                          FUN_036a3534(lVar10,uVar13,0);
                        }
                        FUN_036a0f10(uVar15,lVar10,0);
                        iVar2 = *(int *)(uVar14 + 0x20);
                        if (iVar2 < 0) {
                          return;
                        }
                        lVar8 = *plVar18;
                        if (lVar8 != 0) {
                          if (*(int *)(lVar8 + 0x18) <= iVar2) {
                            return;
                          }
                          FUN_02215a88(lVar8,iVar2,local_70,*(undefined8 *)puVar7);
                          if (local_70._0_8_ != 0) {
                            FUN_036a0e10(uVar15,*(undefined8 *)(local_70._0_8_ + 0x10),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_03099c60;
              }
            }
            thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
            uVar14 = thunk_FUN_01a89e68();
            FUN_027a7930(uVar14,0);
            uVar15 = thunk_FUN_01a6ca08(
                                       Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnCreate_000001C7_PostfixBurstDelegate_var
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar14,uVar15);
          }
        }
        return;
      }
    }
  }
LAB_03099c60:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


