/*
FUNCTION_NAME: FUN_021de720
ENTRY_POINT: 021de720
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 FUN_021de720(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03781754 & 1) == 0) {
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__);
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(StringLiteral_1941);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DialogueValue>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_2990);
    DAT_03781754 = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseEnterWindowEvent>_Init__;
  lVar3 = FUN_01780344(uVar5,0);
  if (lVar3 == param_1) {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = 0xc;
  }
  else {
    uVar5 = *(undefined8 *)StringLiteral_6673;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar3 = FUN_01780344(uVar5,0);
    if (lVar3 == param_1) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar1;
      }
      lVar4 = 0x10;
    }
    else {
      uVar5 = *(undefined8 *)StringLiteral_5228;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar3 = FUN_01780344(uVar5,0);
      if (lVar3 == param_1) {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar3 = *(long *)puVar1;
        }
        lVar4 = 0x14;
      }
      else {
        uVar5 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar3 = FUN_01780344(uVar5,0);
        if (lVar3 == param_1) {
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar3 = *(long *)puVar1;
          }
          lVar4 = 0x18;
        }
        else {
          uVar5 = *(undefined8 *)
                   Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_01780344(uVar5,0);
          if (lVar3 == param_1) {
            lVar3 = *(long *)puVar1;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar3 = *(long *)puVar1;
            }
            lVar4 = 0x1c;
          }
          else {
            uVar5 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar3 = FUN_01780344(uVar5,0);
            if (lVar3 == param_1) {
              lVar3 = *(long *)puVar1;
              if (*(int *)(lVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar3 = *(long *)puVar1;
              }
              lVar4 = 0x20;
            }
            else {
              uVar5 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar3 = FUN_01780344(uVar5,0);
              if (lVar3 == param_1) {
                lVar3 = *(long *)puVar1;
                if (*(int *)(lVar3 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar3 = *(long *)puVar1;
                }
                lVar4 = 0x24;
              }
              else {
                uVar5 = *(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                ;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar3 = FUN_01780344(uVar5,0);
                if (lVar3 == param_1) {
                  lVar3 = *(long *)puVar1;
                  if (*(int *)(lVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar3 = *(long *)puVar1;
                  }
                  lVar4 = 0x28;
                }
                else {
                  uVar5 = *(undefined8 *)
                           System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                  ;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar3 = FUN_01780344(uVar5,0);
                  if (lVar3 == param_1) {
                    lVar3 = *(long *)puVar1;
                    if (*(int *)(lVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar3 = *(long *)puVar1;
                    }
                    lVar4 = 0x2c;
                  }
                  else {
                    uVar5 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar3 = FUN_01780344(uVar5,0);
                    if (lVar3 == param_1) {
                      lVar3 = *(long *)puVar1;
                      if (*(int *)(lVar3 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar3 = *(long *)puVar1;
                      }
                      lVar4 = 0x30;
                    }
                    else {
                      uVar5 = *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<DialogueValue>_get_Current__
                      ;
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar3 = FUN_01780344(uVar5,0);
                      if (lVar3 == param_1) {
                        lVar3 = *(long *)puVar1;
                        if (*(int *)(lVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar3 = *(long *)puVar1;
                        }
                        lVar4 = 0x34;
                      }
                      else {
                        uVar5 = *(undefined8 *)StringLiteral_2990;
                        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar3 = FUN_01780344(uVar5,0);
                        if (lVar3 == param_1) {
                          lVar3 = *(long *)puVar1;
                          if (*(int *)(lVar3 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar3 = *(long *)puVar1;
                          }
                          lVar4 = 0x38;
                        }
                        else {
                          uVar5 = *(undefined8 *)StringLiteral_1941;
                          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar3 = FUN_01780344(uVar5,0);
                          if (lVar3 != param_1) {
                            return 0;
                          }
                          lVar3 = *(long *)puVar1;
                          if (*(int *)(lVar3 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar3 = *(long *)puVar1;
                          }
                          lVar4 = 0x3c;
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
  return *(undefined4 *)(*(long *)(lVar3 + 0xb8) + lVar4);
}


