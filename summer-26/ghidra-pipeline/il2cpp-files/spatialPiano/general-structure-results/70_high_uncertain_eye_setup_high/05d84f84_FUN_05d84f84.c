/*
FUNCTION_NAME: FUN_05d84f84
ENTRY_POINT: 05d84f84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d84f84(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_s3;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  
  if ((DAT_06bc3a4f & 1) == 0) {
    FUN_02f08768(Method_Unity_Collections_FixedStringMethods_Append<UnsafeText>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                );
    FUN_02f08768(
                Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimatorControllerPlayable>__
                );
    FUN_02f08768(
                Method_UnityEngine_Playables_PlayableOutputHandle_IsPlayableOutputOfType<DataPlayableOutput>__
                );
    FUN_02f08768(
                Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                );
    DAT_06bc3a4f = 1;
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if ((*(long *)(param_1 + 0x1d0) != 0) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0xb8), plVar7 != (long *)0x0)) {
    iVar5 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(param_1 + 0xb8) / iVar5;
    }
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = *(int *)(param_1 + 0xbc) / iVar5;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    FUN_05d834d8(&local_118,param_1,iVar1,iVar2,*(undefined4 *)(param_1 + 0x220),0);
    puVar3 = 
    Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
    ;
    uStack_d8 = uStack_110;
    local_e0 = local_118;
    uStack_c8 = uStack_100;
    local_d0 = local_108;
    uStack_b8 = uStack_f0;
    local_c0 = local_f8;
    local_b0 = local_e8;
    if (*(long *)(param_1 + 0x1d0) != 0) {
      uVar9 = local_108;
      uVar10 = local_f8;
      uVar8 = FUN_05d76610(*(long *)(param_1 + 0x1d0),0);
      uVar24 = (undefined4)uVar9;
      uVar26 = (undefined4)uVar10;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05daf224(0,param_1 + 400,&local_e0,1,1,1,
                     *(undefined8 *)
                      Method_UnityEngine_Networking_PlayerConnection_PlayerConnection_MessageCallbackInternal__
                     ,0);
        FUN_05daf224(0,param_1 + 0x198,&local_e0,1,1,1,
                     *(undefined8 *)
                      Method_UnityEngine_Playables_PlayableOutputHandle_IsPlayableOutputOfType<DataPlayableOutput>__
                     ,0);
      }
      puVar4 = 
      Method_UnityEngine_Playables_PlayableHandle_IsPlayableOfType<AnimatorControllerPlayable>__;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_05daf224(0,param_1 + 0x1a0,&local_e0,1,1,1,*(undefined8 *)puVar4,0);
      if (((*(long *)(param_1 + 0x1b0) != 0) && (*(long *)(param_1 + 0x1d0) != 0)) &&
         (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x40), plVar7 != (long *)0x0)) {
        uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x90);
        iVar1 = *(int *)(param_1 + 0xb8);
        iVar2 = *(int *)(param_1 + 0xbc);
        uVar16 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
        uVar25 = uVar24;
        uVar9 = FUN_05c9cd38(param_5,0);
        uVar10 = FUN_05c9cd38(param_6,0);
        uVar11 = FUN_05c9cd38(*(undefined8 *)(param_1 + 400),0);
        uVar12 = FUN_05c9cd38(*(undefined8 *)(param_1 + 0x198),0);
        if ((*(long *)(param_1 + 0x1d0) != 0) &&
           (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x38), plVar7 != (long *)0x0)) {
          uVar17 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
          if ((*(long *)(param_1 + 0x1d0) != 0) &&
             (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x50), plVar7 != (long *)0x0)) {
            (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
            if ((*(long *)(param_1 + 0x1d0) != 0) &&
               (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x58), plVar7 != (long *)0x0)) {
              uVar18 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
              if ((*(long *)(param_1 + 0x1d0) != 0) &&
                 (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x60), plVar7 != (long *)0x0)) {
                (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
                if ((*(long *)(param_1 + 0x1d0) != 0) &&
                   (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x80), plVar7 != (long *)0x0))
                {
                  uVar19 = (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
                  if (*(long *)(param_1 + 0x1d0) != 0) {
                    plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x88);
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 0x218))(plVar7,*(undefined8 *)(*plVar7 + 0x220));
                      if (*(long *)(param_1 + 0x1d0) != 0) {
                        plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x90);
                        if (plVar7 != (long *)0x0) {
                          uVar20 = (**(code **)(*plVar7 + 0x218))
                                             (plVar7,*(undefined8 *)(*plVar7 + 0x220));
                          if (*(long *)(param_1 + 0x1d0) != 0) {
                            plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x70);
                            if (plVar7 != (long *)0x0) {
                              iVar6 = (**(code **)(*plVar7 + 0x218))
                                                (plVar7,*(undefined8 *)(*plVar7 + 0x220));
                              if (*(long *)(param_1 + 0x1d0) != 0) {
                                plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x78);
                                if (plVar7 != (long *)0x0) {
                                  (**(code **)(*plVar7 + 0x218))
                                            (plVar7,*(undefined8 *)(*plVar7 + 0x220));
                                  if (*(long *)(param_1 + 0x1d0) != 0) {
                                    plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0xc0);
                                    if (plVar7 != (long *)0x0) {
                                      uVar21 = (**(code **)(*plVar7 + 0x218))
                                                         (plVar7,*(undefined8 *)(*plVar7 + 0x220));
                                      if (*(long *)(param_1 + 0x1d0) != 0) {
                                        plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x98);
                                        if (plVar7 != (long *)0x0) {
                                          uVar22 = (**(code **)(*plVar7 + 0x218))
                                                             (plVar7,*(undefined8 *)
                                                                      (*plVar7 + 0x220));
                                          if (*(long *)(param_1 + 0x1d0) != 0) {
                                            plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + 0xa0);
                                            if (plVar7 != (long *)0x0) {
                                              (**(code **)(*plVar7 + 0x218))
                                                        (plVar7,*(undefined8 *)(*plVar7 + 0x220));
                                              if (*(long *)(param_1 + 0x1d0) != 0) {
                                                plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) +
                                                                   0xa8);
                                                if (plVar7 != (long *)0x0) {
                                                  uVar23 = (**(code **)(*plVar7 + 0x218))
                                                                     (plVar7,*(undefined8 *)
                                                                              (*plVar7 + 0x220));
                                                  if (*(long *)(param_1 + 0x1d0) != 0) {
                                                    plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) +
                                                                       0xb0);
                                                    if (plVar7 != (long *)0x0) {
                                                      (**(code **)(*plVar7 + 0x218))
                                                                (plVar7,*(undefined8 *)
                                                                         (*plVar7 + 0x220));
                                                      if ((*(long *)(param_1 + 0x1d0) != 0) &&
                                                         (plVar7 = *(long **)(*(long *)(param_1 +
                                                                                       0x1d0) + 0x68
                                                                             ),
                                                         plVar7 != (long *)0x0)) {
                                                        (**(code **)(*plVar7 + 0x218))
                                                                  (plVar7,*(undefined8 *)
                                                                           (*plVar7 + 0x220));
                                                        puVar4 = 
                                                  Method_UnityEngine_XR_Interaction_Toolkit_AR_PinchGestureRecognizer_CreateEnhancedGesture__
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Collections_FixedStringMethods_Append<UnsafeText>__
                                                  ;
                                                  if ((*(long *)(param_1 + 0x1d0) != 0) &&
                                                     (plVar7 = *(long **)(*(long *)(param_1 + 0x1d0)
                                                                         + 0x68),
                                                     plVar7 != (long *)0x0)) {
                                                    (**(code **)(*plVar7 + 0x218))
                                                              (plVar7,*(undefined8 *)
                                                                       (*plVar7 + 0x220));
                                                    uVar14 = *(undefined8 *)(param_1 + 0x1a0);
                                                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                                      thunk_FUN_02f6670c();
                                                    }
                                                    FUN_05c8fefc((float)iVar1,(float)iVar2,uVar16,
                                                                 uVar24,uVar26,in_s3,uVar15,param_2,
                                                                 uVar9,uVar10,0,uVar11,uVar12,
                                                                 param_3,uVar17,uVar18,uVar19,uVar20
                                                                 ,(float)iVar6,uVar21,uVar22,uVar23,
                                                                 (float)iVar5,uVar25,uVar14,0,0);
                                                    lVar13 = *(long *)puVar4;
                                                    if (*(int *)(lVar13 + 0xe4) == 0) {
                                                      thunk_FUN_02f6670c();
                                                      lVar13 = *(long *)puVar4;
                                                    }
                                                    uVar24 = *(undefined4 *)
                                                              (*(long *)(lVar13 + 0xb8) + 0x54);
                                                    FUN_05c9ac9c(&local_118,param_5,0);
                                                    if (param_3 != 0) {
                                                      uStack_138 = uStack_110;
                                                      local_140 = local_118;
                                                      uStack_128 = uStack_100;
                                                      uStack_130 = local_108;
                                                      local_120 = local_f8;
                                                      FUN_0611f628(param_3,uVar24,&local_140,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


