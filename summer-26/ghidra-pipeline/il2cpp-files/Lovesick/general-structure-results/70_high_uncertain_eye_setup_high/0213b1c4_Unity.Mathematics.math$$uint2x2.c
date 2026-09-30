/*
FUNCTION_NAME: Unity.Mathematics.math$$uint2x2
ENTRY_POINT: 0213b1c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Unity_Mathematics_math__uint2x2(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_6673);
  thunk_FUN_00d48444(
                    Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                    );
  thunk_FUN_00d48444(StringLiteral_238);
  thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__)
  ;
  thunk_FUN_00d48444(Method_Messenger<SetList>_RemoveListener__);
  thunk_FUN_00d48444(Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass23_0_TypeInfo);
  thunk_FUN_00d48444(System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_4884);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_s32__);
  thunk_FUN_00d48444(StringLiteral_9872);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                    );
  *(undefined1 *)(unaff_x20 + 0x18e) = 1;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = FUN_0178c0dc();
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((uVar2 & 1) == 0) {
LAB_0213b5ac:
                    /* WARNING: Could not recover jumptable at 0x0213b5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*unaff_x19 + 0x1b8))();
    return uVar4;
  }
  uVar4 = *(undefined8 *)Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar4,0);
  uVar2 = FUN_01789ac0();
  puVar3 = (undefined8 *)Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__;
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)
             System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar4,0);
    uVar2 = FUN_01789ac0();
    puVar3 = (undefined8 *)
             Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
    ;
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01780344(uVar4,0);
      uVar2 = FUN_01789ac0();
      puVar3 = (undefined8 *)Method_Messenger<SetList>_RemoveListener__;
      if ((uVar2 & 1) == 0) {
        uVar4 = *(undefined8 *)
                 Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01780344(uVar4,0);
        uVar2 = FUN_01789ac0();
        puVar3 = (undefined8 *)StringLiteral_4884;
        if ((uVar2 & 1) == 0) {
          uVar4 = *(undefined8 *)StringLiteral_5228;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01780344(uVar4,0);
          uVar2 = FUN_01789ac0();
          puVar3 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__;
          if ((uVar2 & 1) == 0) {
            uVar4 = *(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01780344(uVar4,0);
            uVar2 = FUN_01789ac0();
            puVar3 = (undefined8 *)System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo;
            if ((uVar2 & 1) == 0) {
              uVar4 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_01780344(uVar4,0);
              uVar2 = FUN_01789ac0();
              puVar3 = (undefined8 *)StringLiteral_238;
              if ((uVar2 & 1) == 0) {
                uVar4 = *(undefined8 *)StringLiteral_6673;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01780344(uVar4,0);
                uVar2 = FUN_01789ac0();
                puVar3 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_s32__;
                if ((uVar2 & 1) == 0) {
                  uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_01780344(uVar4,0);
                  uVar2 = FUN_01789ac0();
                  puVar3 = (undefined8 *)
                           Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass23_0_TypeInfo
                  ;
                  if ((uVar2 & 1) == 0) {
                    uVar4 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    FUN_01780344(uVar4,0);
                    uVar2 = FUN_01789ac0();
                    puVar3 = (undefined8 *)
                             Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__
                    ;
                    if ((uVar2 & 1) == 0) {
                      uVar4 = *(undefined8 *)
                               Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      ;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_01780344(uVar4,0);
                      uVar2 = FUN_01789ac0();
                      puVar3 = (undefined8 *)StringLiteral_9872;
                      if ((uVar2 & 1) == 0) goto LAB_0213b5ac;
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
  return *puVar3;
}


