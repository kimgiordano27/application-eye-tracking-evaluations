/*
FUNCTION_NAME: FUN_0685287c
ENTRY_POINT: 0685287c
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0685287c(long *param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_071d6b19 & 1) == 0) {
    FUN_02f07e70(ExitGames_Client_Photon_Version_TypeInfo);
    FUN_02f07e70(OVRManager_MrcCameraType_TypeInfo);
    FUN_02f07e70(OVRMeshRenderer_IOVRMeshRendererDataProvider_TypeInfo);
    FUN_02f07e70(OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
    DAT_071d6b19 = 1;
  }
  puVar2 = ExitGames_Client_Photon_Version_TypeInfo;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo)) {
      if (param_1[0x89] != 0) {
        iVar3 = FUN_03fd18a4(param_1[0x89],param_2,*(undefined8 *)OVRManager_MrcCameraType_TypeInfo)
        ;
        FUN_03abf504(param_2,param_1[0x8a],*(undefined8 *)puVar2);
        if (param_1[0x89] != 0) {
          FUN_03fd212c(param_1[0x89],param_2,
                       *(undefined8 *)OVRMeshRenderer_IOVRMeshRendererDataProvider_TypeInfo);
          iVar4 = (**(code **)(*param_1 + 0x7e8))(param_1,*(undefined8 *)(*param_1 + 0x7f0));
          if (iVar4 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x06852994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x7f8))(param_1,0xffffffff,*(undefined8 *)(*param_1 + 0x800));
            return;
          }
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  thunk_FUN_02f239f0(PTR_DAT_06d02080);
  uVar5 = thunk_FUN_02ef1808();
  uVar6 = thunk_FUN_02f239f0(OVRManager_XrApi_TypeInfo);
  FUN_0555e840(uVar5,uVar6,0);
  uVar6 = thunk_FUN_02f239f0(OVRMicrogestureEventSource_<>c_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar5,uVar6);
}


