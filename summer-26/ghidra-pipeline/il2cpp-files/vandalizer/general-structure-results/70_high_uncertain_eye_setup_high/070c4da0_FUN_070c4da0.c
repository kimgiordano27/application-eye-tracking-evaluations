/*
FUNCTION_NAME: FUN_070c4da0
ENTRY_POINT: 070c4da0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_070c4da0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = OVRManager_PassthroughCapabilities_TypeInfo;
  if ((DAT_07a5a939 & 1) == 0) {
    FUN_031f20f4(OVRManager_SystemHeadsetType_TypeInfo);
    FUN_031f20f4(OVRManager_XrApi_TypeInfo);
    FUN_031f20f4(OVRMesh_IOVRMeshDataProvider_TypeInfo);
    FUN_031f20f4(OVRManager_PassthroughCapabilities_TypeInfo);
    DAT_07a5a939 = 1;
  }
  lVar3 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05e44034(lVar3,0);
  puVar2 = OVRMesh_IOVRMeshDataProvider_TypeInfo;
  puVar1 = OVRManager_XrApi_TypeInfo;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    thunk_FUN_0329bf60((undefined8 *)(lVar3 + 0x10),param_2);
    lVar5 = *(long *)(param_1 + 0x4b8);
    uVar4 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
    FUN_04d1da94(uVar4,lVar3,*(undefined8 *)puVar2,0);
    if (lVar5 != 0) {
      FUN_047afb0c(lVar5,uVar4,*(undefined8 *)OVRManager_SystemHeadsetType_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


