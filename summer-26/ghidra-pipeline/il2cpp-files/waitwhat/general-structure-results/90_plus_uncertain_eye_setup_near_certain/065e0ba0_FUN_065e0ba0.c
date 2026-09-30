/*
FUNCTION_NAME: FUN_065e0ba0
ENTRY_POINT: 065e0ba0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_065e0ba0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = OVRPlugin_Bone___TypeInfo;
  if ((DAT_07557872 & 1) == 0) {
    FUN_03188a78(OVRPlugin_Bone___TypeInfo);
    FUN_03188a78(OVRPlugin_BoneCapsule___TypeInfo);
    DAT_07557872 = 1;
  }
  puVar2 = OVRPlugin_BoneCapsule___TypeInfo;
  FUN_05971910(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_069ea8cc(param_2,1,0);
  uVar5 = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_057b27f0(uVar5,param_2,0);
  uVar3 = FUN_069ea8cc(uVar3,0,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = FUN_069ea728(*(long *)(param_1 + 0x10),0);
    *(long *)(param_1 + 0x28) = lVar4;
    if (lVar4 != 0) {
      thunk_FUN_069ea504(lVar4,0,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar4 = FUN_069ea728(*(long *)(param_1 + 0x18),0);
        *(long *)(param_1 + 0x30) = lVar4;
        if (lVar4 != 0) {
          thunk_FUN_069ea504(lVar4,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


