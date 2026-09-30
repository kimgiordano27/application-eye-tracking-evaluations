/*
FUNCTION_NAME: FUN_01789acc
ENTRY_POINT: 01789acc
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


bool FUN_01789acc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_03778e57 & 1) == 0) {
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<EdgeLookup>__);
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
    DAT_03778e57 = 1;
  }
  uVar4 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = FUN_01780344(uVar4);
  if (lVar3 != param_1) {
    uVar4 = *(undefined8 *)StringLiteral_5228;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar3 = FUN_01780344(uVar4);
    if (lVar3 != param_1) {
      uVar4 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar3 = FUN_01780344(uVar4);
      if (lVar3 != param_1) {
        uVar4 = *(undefined8 *)
                 Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar3 = FUN_01780344(uVar4);
        if (lVar3 != param_1) {
          uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar3 = FUN_01780344(uVar4);
          if (lVar3 != param_1) {
            uVar4 = *(undefined8 *)StringLiteral_6673;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar3 = FUN_01780344(uVar4);
            if (lVar3 != param_1) {
              uVar4 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              lVar3 = FUN_01780344(uVar4);
              if (lVar3 != param_1) {
                uVar4 = *(undefined8 *)
                         Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                ;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                lVar3 = FUN_01780344(uVar4);
                if (lVar3 != param_1) {
                  uVar4 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar3 = FUN_01780344(uVar4);
                  if (lVar3 != param_1) {
                    uVar4 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar3 = FUN_01780344(uVar4);
                    return lVar3 == param_1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


