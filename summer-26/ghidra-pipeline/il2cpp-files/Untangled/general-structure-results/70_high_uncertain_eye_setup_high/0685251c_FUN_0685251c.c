/*
FUNCTION_NAME: FUN_0685251c
ENTRY_POINT: 0685251c
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0685251c(long *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_071d6b15 & 1) == 0) {
    FUN_02f07e70(OVRManager_EventListener_TypeInfo);
    FUN_02f07e70(OVRManager_MrcCameraType_TypeInfo);
    FUN_02f07e70(OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo);
    DAT_071d6b15 = 1;
  }
  if (param_2 == 0) {
LAB_06852610:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(char *)(param_2 + 0x85) == '\0') {
    return;
  }
  lVar4 = param_1[0x89];
  plVar3 = (long *)FUN_068747cc(param_2,0);
  if (lVar4 == 0) goto LAB_06852610;
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo + 0x130);
    if (bVar1 <= *(byte *)(*plVar3 + 0x130)) {
      if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVRGLTFLoader_<>c__DisplayClass26_0_TypeInfo) {
        plVar3 = (long *)0x0;
      }
      goto LAB_068525d8;
    }
  }
  plVar3 = (long *)0x0;
LAB_068525d8:
  uVar2 = FUN_03fd18a4(lVar4,plVar3,*(undefined8 *)OVRManager_MrcCameraType_TypeInfo);
  (**(code **)(*param_1 + 0x7f8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x800));
  FUN_0686a568(param_2,0);
  return;
}


