/*
FUNCTION_NAME: FUN_02768478
ENTRY_POINT: 02768478
PROGRAM: gunraiders-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_02768478(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0453093e & 1) == 0) {
    FUN_01c5d288(OVRExternalComposition_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(OVRFaceExpressions_TypeInfo);
    FUN_01c5d288(OVRGLTFAccessor_TypeInfo);
    FUN_01c5d288(VoxelBusters_CoreLibrary_Parser_JsonString_TypeInfo);
    DAT_0453093e = 1;
  }
  FUN_03e0f924(param_1,0);
  if (param_1 != 0) {
    VoxelBusters_EssentialKit_WebView__get_Progress(param_1,1,0);
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_03ed484c(param_1,1,0);
    FUN_03ed4838(param_1,1,0);
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    puVar1 = VoxelBusters_CoreLibrary_Parser_JsonString_TypeInfo;
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01c72394();
    }
    FUN_03f17740(param_1,**(undefined8 **)(lVar5 + 0xb8),0);
    lVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03e912c8(lVar5,0);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x20) = 1;
      *(undefined4 *)(lVar5 + 0x24) = 0xffffffff;
      lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      *(long *)(param_1 + 0x408) = lVar5;
      lVar7 = *(long *)(lVar7 + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01c72394();
      }
      puVar4 = OVRGLTFAccessor_TypeInfo;
      puVar3 = OVRFaceExpressions_TypeInfo;
      puVar2 = OVREyeGaze_TypeInfo;
      puVar1 = OVRExternalComposition_TypeInfo;
      FUN_03f17740(lVar5,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8),0);
      lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      if (param_2 == 0) {
        lVar5 = *(long *)(lVar5 + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01c72394();
        }
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01c72394();
        }
        FUN_03f17740(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),0);
      }
      else {
        FUN_0276818c(param_1,param_2,*(undefined8 *)(lVar5 + 0x80));
      }
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
      FUN_02b1ee9c(uVar6,param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88)
                   ,0);
      FUN_02305eac(param_1,uVar6,0,*(undefined8 *)puVar1);
      uVar6 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
      FUN_02b1ee9c(uVar6,param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90)
                   ,0);
      FUN_02305eac(param_1,uVar6,0,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 1000) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


