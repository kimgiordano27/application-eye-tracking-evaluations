/*
FUNCTION_NAME: VoxelBusters.CoreLibrary.NativePlugins.Android.NativeRect$$ToShortString
ENTRY_POINT: 03ea1530
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_possible_biometrics_hits_2
*/


void VoxelBusters_CoreLibrary_NativePlugins_Android_NativeRect__ToShortString(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_01c5d288();
  FUN_01c5d288(StringLiteral_9416);
  FUN_01c5d288(OVRExternalComposition_TypeInfo);
  FUN_01c5d288(OVREyeGaze_TypeInfo);
  FUN_01c5d288(OVRFaceExpressions_TypeInfo);
  FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
  FUN_01c5d288(StringLiteral_11624);
  FUN_01c5d288(StringLiteral_11625);
  FUN_01c5d288(StringLiteral_11622);
  FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xdc9) = 1;
  FUN_03e1efa4();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03f17740();
  lVar3 = FUN_0275e0f8();
  if (lVar3 != 0) {
    FUN_03f17740(lVar3,*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x10),0);
    if (*(long *)(unaff_x19 + 0x400) != 0) {
      FUN_03f17740(*(long *)(unaff_x19 + 0x400),*(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 8),0)
      ;
      puVar1 = UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo;
      if (*(long *)(unaff_x19 + 0x448) != 0) {
        FUN_03f1c418(*(long *)(unaff_x19 + 0x448),0);
        lVar3 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
        FUN_03f15048(lVar3,0);
        if (lVar3 != 0) {
          FUN_03f14d08(lVar3,1,0);
          *(long *)(unaff_x19 + 0x460) = lVar3;
          FUN_03f1bbb8(lVar3,*(undefined8 *)(unaff_x19 + 0x448),0);
          if (*(long *)(unaff_x19 + 0x460) != 0) {
            FUN_03f17740(*(long *)(unaff_x19 + 0x460),
                         *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x18),0);
            if (*(long *)(unaff_x19 + 0x448) != 0) {
              FUN_03f17740(*(long *)(unaff_x19 + 0x448),
                           *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x20),0);
              lVar3 = FUN_0275e0f8();
              puVar2 = OVRGLTFAccessor_TypeInfo;
              puVar1 = OVRFaceExpressions_TypeInfo;
              if (lVar3 != 0) {
                FUN_03f1bbb8(lVar3,*(undefined8 *)(unaff_x19 + 0x460),0);
                FUN_03ea1400();
                thunk_FUN_01c496e0(*(undefined8 *)puVar1);
                FUN_02b1ee9c();
                FUN_02305eac();
                thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                FUN_02b1ee9c();
                FUN_02305eac();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


