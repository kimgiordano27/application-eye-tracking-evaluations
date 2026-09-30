/*
FUNCTION_NAME: UnityEngine.InputForUI.InputManagerProvider$$ScreenBottomLeftToPanelPosition
ENTRY_POINT: 0605d870
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_interaction_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_gaze_interaction
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;active_gaze_retrieval;active_gaze_interaction
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputForUI_InputManagerProvider__ScreenBottomLeftToPanelPosition
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int in_w10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  *(int *)(unaff_x23 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
    }
    else {
      FUN_03abf904();
    }
    puVar2 = 
    Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
    ;
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    lVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_03abf108(lVar3,*(undefined8 *)
                        Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__);
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                              );
    FUN_06051fb4(lVar4,0);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistrm_emulation<ushort>__;
      *(undefined8 *)(lVar4 + 0x10) = *unaff_x28;
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      if (lVar3 != 0) {
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar7 = *unaff_x26;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
          }
          else {
            FUN_03abf904(lVar3,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x22 + 0x28) = lVar3;
          lVar3 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            }
            else {
              FUN_03abf904();
            }
            lVar3 = thunk_FUN_02f45270(*unaff_x25);
            FUN_06051fbc(lVar3,0);
            if (lVar3 != 0) {
              uVar5 = *unaff_x29;
              uVar8 = *(undefined8 *)
                       Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_4__
              ;
              *(undefined8 *)(lVar3 + 0x10) =
                   *(undefined8 *)
                    Method_UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_TryAcquireEnvironmentDepthConfidenceCpuImage__
              ;
              *(undefined8 *)(lVar3 + 0x20) = uVar8;
              *(undefined4 *)(lVar3 + 0x18) = 4;
              lVar4 = thunk_FUN_02f45270(uVar5);
              FUN_03abf108(lVar4,*unaff_x27);
              if (lVar4 != 0) {
                lVar6 = *(long *)(lVar4 + 0x10);
                uVar5 = *(undefined8 *)
                         Method_Newtonsoft_Json_Schema_JsonSchemaNode_<>c_<GetId>b__26_1__;
                lVar7 = *unaff_x19;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar6 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                  }
                  else {
                    FUN_03abf904(lVar4,uVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                  puVar2 = 
                  Method_Unity_XRTemplate_VideoTimeScrubControl_<HideSliderAfterSeconds>d__18_System_Collections_IEnumerator_Reset__
                  ;
                  *(long *)(lVar3 + 0x30) = lVar4;
                  lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                  FUN_03abf108(lVar4,*(undefined8 *)
                                      Method_UnityEngine_UIElements_Vector4Field_<>c_<DescribeFields>b__0_7__
                              );
                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                              Method_UnityEngine_UIElements_Vector3IntField_<>c_<DescribeFields>b__0_5__
                                            );
                  FUN_06051fb4(lVar6,0);
                  if (lVar6 != 0) {
                    uVar5 = *(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_<>c_<_ctor>b__237_1__
                    ;
                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x28;
                    *(undefined8 *)(lVar6 + 0x18) = uVar5;
                    if (lVar4 != 0) {
                      lVar7 = *(long *)(lVar4 + 0x10);
                      lVar9 = *unaff_x26;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                        }
                        else {
                          FUN_03abf904(lVar4,lVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar3 + 0x28) = lVar4;
                        lVar4 = *(long *)(unaff_x21 + 0x10);
                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                            *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
                          }
                          else {
                            FUN_03abf904();
                          }
                          *(long *)(unaff_x20 + 0x28) = unaff_x21;
                          FUN_06051d9c(in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


