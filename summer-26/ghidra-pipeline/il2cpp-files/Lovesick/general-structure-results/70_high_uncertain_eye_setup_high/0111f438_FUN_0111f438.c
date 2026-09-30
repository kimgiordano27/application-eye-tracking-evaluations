/*
FUNCTION_NAME: FUN_0111f438
ENTRY_POINT: 0111f438
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_0111f438(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (puVar5 == (undefined8 *)0x0) {
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
    puVar5 = *(undefined8 **)(param_2 + 0x38);
    if (puVar5 == (undefined8 *)0x0) {
      FUN_00d59478(param_2);
      puVar5 = *(undefined8 **)(param_2 + 0x38);
    }
  }
  puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  uVar6 = *puVar5;
  if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_01780344(uVar6,0);
  uVar3 = FUN_01780344(*(undefined8 *)
                        Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__,0);
  uVar4 = FUN_01789ac0(uVar6,uVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = **(undefined8 **)(param_2 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01780344(uVar6,0);
    uVar3 = FUN_01780344(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo,0);
    uVar4 = FUN_01789ac0(uVar6,uVar3,0);
    if ((uVar4 & 1) == 0) {
      uVar6 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar6 = FUN_01780344(uVar6,0);
      uVar3 = FUN_01780344(*(undefined8 *)Method_System_Linq_Enumerable_ToList<EdgeLookup>__,0);
      uVar4 = FUN_01789ac0(uVar6,uVar3,0);
      if ((uVar4 & 1) == 0) {
        uVar6 = **(undefined8 **)(param_2 + 0x38);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_01780344(uVar6,0);
        uVar3 = FUN_01780344(*(undefined8 *)StringLiteral_5228,0);
        uVar4 = FUN_01789ac0(uVar6,uVar3,0);
        if ((uVar4 & 1) == 0) {
          uVar6 = **(undefined8 **)(param_2 + 0x38);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_01780344(uVar6,0);
          uVar3 = FUN_01780344(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,0);
          uVar4 = FUN_01789ac0(uVar6,uVar3,0);
          if ((uVar4 & 1) == 0) {
            uVar6 = **(undefined8 **)(param_2 + 0x38);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_01780344(uVar6,0);
            uVar3 = FUN_01780344(*(undefined8 *)
                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                 ,0);
            uVar4 = FUN_01789ac0(uVar6,uVar3,0);
            if ((uVar4 & 1) == 0) {
              uVar6 = **(undefined8 **)(param_2 + 0x38);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar6 = FUN_01780344(uVar6,0);
              uVar3 = FUN_01780344(*(undefined8 *)StringLiteral_6673,0);
              uVar4 = FUN_01789ac0(uVar6,uVar3,0);
              if ((uVar4 & 1) == 0) {
                uVar6 = **(undefined8 **)(param_2 + 0x38);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar6 = FUN_01780344(uVar6,0);
                uVar3 = FUN_01780344(*(undefined8 *)Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                uVar4 = FUN_01789ac0(uVar6,uVar3,0);
                if ((uVar4 & 1) == 0) {
                  uVar6 = **(undefined8 **)(param_2 + 0x38);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar6 = FUN_01780344(uVar6,0);
                  uVar3 = FUN_01780344(*(undefined8 *)
                                        Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                       ,0);
                  uVar2 = FUN_01789ac0(uVar6,uVar3,0);
                  uVar6 = 8;
                  if ((uVar2 & 1) == 0) {
                    uVar6 = 0;
                  }
                }
                else {
                  uVar2 = 1;
                  uVar6 = 8;
                }
                goto LAB_0111f69c;
              }
            }
            uVar2 = 1;
            uVar6 = 4;
            goto LAB_0111f69c;
          }
        }
      }
      uVar2 = 1;
      uVar6 = 2;
      goto LAB_0111f69c;
    }
  }
  uVar6 = 1;
  uVar2 = 1;
LAB_0111f69c:
  *param_1 = uVar6;
                    /* try { // try from 0111f6ac to 0121f88f has its CatchHandler @ 0111f6ac
                       catch() { ... } // from try @ 0111f6ac with catch @ 0111f6ac
                       catch() { ... } // from try @ 0111f8e8 with catch @ 0111f6ac
                       catch() { ... } // from try @ 0111f920 with catch @ 0111f6ac
                       catch() { ... } // from try @ 0111f948 with catch @ 0111f6ac
                       catch() { ... } // from try @ 0111f97c with catch @ 0111f6ac */
  return uVar2 & 1;
}


