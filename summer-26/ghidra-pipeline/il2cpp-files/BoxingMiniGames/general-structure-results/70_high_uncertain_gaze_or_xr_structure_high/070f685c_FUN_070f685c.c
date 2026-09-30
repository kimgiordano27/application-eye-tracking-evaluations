/*
FUNCTION_NAME: FUN_070f685c
ENTRY_POINT: 070f685c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction
*/


void FUN_070f685c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_079f4e28;
  if ((DAT_07eec36d & 1) == 0) {
    FUN_03642964(OVRPlugin_Media_InputVideoBufferType_TypeInfo);
    FUN_03642964(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo);
    FUN_03642964(OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0_TypeInfo);
    FUN_03642964(PTR_DAT_07a06bc8);
    FUN_03642964(UnityEngine_UIElements_TransformOrigin_PropertyBag_YProperty_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_TransformOrigin_PropertyBag_ZProperty_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_Translate_PropertyBag_XProperty_TypeInfo);
    FUN_03642964(UnityEngine_UIElements_Translate_PropertyBag_YProperty_TypeInfo);
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07eec36d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_071c24dc(param_2,0,0);
  puVar2 = OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo;
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = *(long *)OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData_TypeInfo;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    uVar3 = FUN_0422a924(lVar4,param_2,
                         *(undefined8 *)
                          UnityEngine_UIElements_Translate_PropertyBag_XProperty_TypeInfo);
    if ((uVar3 & 1) != 0) {
      return;
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
    if (lVar4 != 0) {
      FUN_0422b414(lVar4,param_2,
                   *(undefined8 *)
                    UnityEngine_UIElements_TransformOrigin_PropertyBag_ZProperty_TypeInfo);
      lVar4 = FUN_040cf674(param_1 + 0x18,param_2,
                           *(undefined8 *)
                            OVRVirtualKeyboard_HandInputSource_<>c__DisplayClass6_0_TypeInfo);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar6);
      }
      uVar3 = FUN_071c0684(lVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(char *)(param_1 + 0x30) != '\0') {
          if (lVar4 == 0) goto LAB_070f6b48;
          uVar5 = FUN_03d18e08(lVar4,1,*(undefined8 *)
                                        UnityEngine_UIElements_TransformOrigin_PropertyBag_YProperty_TypeInfo
                              );
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978(*(long *)puVar2);
          }
          FUN_070f6b50(param_3,uVar5);
        }
        if (*(char *)(param_1 + 0x3b) != '\0') {
          lVar6 = FUN_03642a4c(*(undefined8 *)PTR_DAT_07a06bc8,1);
          if (lVar6 == 0) goto LAB_070f6b48;
          if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          *(long *)(lVar6 + 0x20) = lVar4;
          thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar4);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_070f6f70(param_3,lVar6);
        }
        if (*(char *)(param_1 + 0x39) != '\0') {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar5 = FUN_070f5bfc(lVar4);
          FUN_070f72b4(param_3,param_2,uVar5);
        }
        if (*(char *)(param_1 + 0x38) != '\0') {
          uVar5 = FUN_03c3e428(param_1,lVar4,
                               *(undefined8 *)OVRPlugin_Media_InputVideoBufferType_TypeInfo);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_036a1978(*(long *)puVar2);
          }
          FUN_070f7698(param_3,uVar5);
        }
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar4 = *(long *)puVar2;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (lVar4 != 0) {
        FUN_0422aaf4(lVar4,param_2,
                     *(undefined8 *)UnityEngine_UIElements_Translate_PropertyBag_YProperty_TypeInfo)
        ;
        return;
      }
    }
  }
LAB_070f6b48:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


