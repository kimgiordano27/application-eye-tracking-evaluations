/*
FUNCTION_NAME: FUN_068b4974
ENTRY_POINT: 068b4974
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068b4974(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_07559160 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVRPlugin_Vector3f_TypeInfo);
    FUN_03188a78(OVRPlugin_Vector4f_TypeInfo);
    DAT_07559160 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar1 = FUN_069d69b8(uVar3,uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = FUN_057c032c(*(undefined8 *)OVRPlugin_Vector4f_TypeInfo,param_1,
                         *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x10),0);
    uVar3 = FUN_057b27f0(*(undefined8 *)OVRPlugin_Vector3f_TypeInfo,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
    }
    FUN_0698f53c(uVar3,param_1,0);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x068b4a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_2,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
  return;
}


