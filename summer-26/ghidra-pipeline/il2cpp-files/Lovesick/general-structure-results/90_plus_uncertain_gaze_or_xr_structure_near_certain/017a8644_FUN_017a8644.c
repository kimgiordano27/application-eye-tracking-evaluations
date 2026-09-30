/*
FUNCTION_NAME: FUN_017a8644
ENTRY_POINT: 017a8644
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_017a8644(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = 
  Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
  ;
  if ((DAT_03778f6d & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_PlayableExtensions_IsValid<ScriptPlayable<ActivationControlPlayable>>__
                      );
    thunk_FUN_00d48444(StringLiteral_5228);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(Method_System_Data_DataSet_ReadXmlDiffgram__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_50_0_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__);
    thunk_FUN_00d48444(StringLiteral_6673);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    DAT_03778f6d = 1;
  }
  puVar3 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar4 = thunk_FUN_00d93c64(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar4 = FUN_017a5e58(uVar4);
  uVar6 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar6 = FUN_01780344(uVar6,0);
  uVar5 = FUN_01789ac0(uVar4,uVar6,0);
  if ((uVar5 & 1) == 0) {
    uVar6 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01780344(uVar6,0);
    uVar5 = FUN_01789ac0(uVar4,uVar6,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)StringLiteral_5228;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01780344(uVar6,0);
      uVar5 = FUN_01789ac0(uVar4,uVar6,0);
      if ((uVar5 & 1) == 0) {
        uVar6 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_01780344(uVar6,0);
        uVar5 = FUN_01789ac0(uVar4,uVar6,0);
        if ((uVar5 & 1) == 0) {
          uVar6 = *(undefined8 *)StringLiteral_6673;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_01780344(uVar6,0);
          uVar5 = FUN_01789ac0(uVar4,uVar6,0);
          if ((uVar5 & 1) == 0) {
            uVar6 = *(undefined8 *)
                     Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_01780344(uVar6,0);
            uVar5 = FUN_01789ac0(uVar4,uVar6,0);
            if ((uVar5 & 1) == 0) {
              uVar6 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar6 = FUN_01780344(uVar6,0);
              uVar5 = FUN_01789ac0(uVar4,uVar6,0);
              if ((uVar5 & 1) == 0) {
                uVar6 = *(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = FUN_01780344(uVar6,0);
                uVar5 = FUN_01789ac0(uVar4,uVar6,0);
                if ((uVar5 & 1) == 0) {
                  uVar6 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar6 = FUN_01780344(uVar6,0);
                  uVar5 = FUN_01789ac0(uVar4,uVar6,0);
                  if ((uVar5 & 1) == 0) {
                    uVar6 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar6 = FUN_01780344(uVar6,0);
                    uVar5 = FUN_01789ac0(uVar4,uVar6,0);
                    if ((uVar5 & 1) == 0) {
                      uVar4 = thunk_FUN_00d48444(StringLiteral_14365);
                      uVar4 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar4,0);
                      thunk_FUN_00d48444(System_Data_ConstraintTable_TypeInfo);
                      uVar6 = thunk_FUN_00d62348();
                      FUN_00ac2be8();
                      FUN_017713a8(uVar6,uVar4,0);
                      uVar4 = thunk_FUN_00d48444(
                                                Method_OVRVirtualKeyboardSampleControls_MoveKeyboardNear__
                                                );
                    /* WARNING: Subroutine does not return */
                      FUN_00da5038(uVar6,uVar4);
                    }
                    uVar4 = 4;
                  }
                  else {
                    uVar4 = 3;
                  }
                }
                else {
                  uVar4 = 0xc;
                }
              }
              else {
                uVar4 = 8;
              }
            }
            else {
              uVar4 = 6;
            }
          }
          else {
            uVar4 = 10;
          }
        }
        else {
          uVar4 = 0xb;
        }
      }
      else {
        uVar4 = 7;
      }
    }
    else {
      uVar4 = 5;
    }
  }
  else {
    uVar4 = 9;
  }
  return uVar4;
}


