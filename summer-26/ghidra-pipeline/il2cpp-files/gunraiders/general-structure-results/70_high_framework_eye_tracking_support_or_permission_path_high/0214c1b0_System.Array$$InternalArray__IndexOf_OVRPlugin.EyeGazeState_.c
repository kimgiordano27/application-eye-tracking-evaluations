/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.EyeGazeState>
ENTRY_POINT: 0214c1b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_EyeGazeState>(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x23;
  
  FUN_01c5d288(PTR_DAT_0422fae0);
  FUN_01c5d288(System_Security_Cryptography_DSA_TypeInfo);
  FUN_01c5d288(System_Security_Cryptography_DSACryptoServiceProvider_TypeInfo);
  FUN_01c5d288(Mono_Security_Cryptography_DSAManaged_TypeInfo);
  FUN_01c5d288(System_Security_Cryptography_DSASignatureDeformatter_TypeInfo);
  FUN_01c5d288(System_Security_Cryptography_DSASignatureDescription_TypeInfo);
  FUN_01c5d288(System_Security_Cryptography_DSASignatureFormatter_TypeInfo);
  *(undefined1 *)(unaff_x23 + 0xb5c) = 1;
  uVar1 = FUN_0214c310();
  puVar3 = (undefined8 *)System_Security_Cryptography_DSASignatureFormatter_TypeInfo;
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_0214c378(),
     puVar3 = (undefined8 *)System_Security_Cryptography_DSASignatureDescription_TypeInfo,
     (uVar1 & 1) == 0)) {
    uVar2 = *puVar3;
  }
  else {
    uVar1 = FUN_0214c3d0();
    puVar3 = (undefined8 *)System_Security_Cryptography_DSA_TypeInfo;
    if (((uVar1 & 1) == 0) ||
       (uVar1 = FUN_0214c428(),
       puVar3 = (undefined8 *)Mono_Security_Cryptography_DSAManaged_TypeInfo, (uVar1 & 1) == 0)) {
      uVar2 = *puVar3;
    }
    else {
      uVar1 = FUN_0214c3d0();
      puVar3 = (undefined8 *)System_Security_Cryptography_DSACryptoServiceProvider_TypeInfo;
      if (((uVar1 & 1) != 0) &&
         (uVar1 = FUN_0214c428(),
         puVar3 = (undefined8 *)System_Security_Cryptography_DSASignatureDeformatter_TypeInfo,
         (uVar1 & 1) != 0)) {
        return 1;
      }
      uVar2 = *puVar3;
    }
  }
  uVar2 = FUN_03146988(uVar2);
  if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
  }
  FUN_03d03d14(uVar2,0);
  return 0;
}


