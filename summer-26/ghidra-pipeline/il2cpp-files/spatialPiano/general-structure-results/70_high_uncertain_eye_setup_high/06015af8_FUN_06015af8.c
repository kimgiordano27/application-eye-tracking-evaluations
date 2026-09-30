/*
FUNCTION_NAME: FUN_06015af8
ENTRY_POINT: 06015af8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_06015af8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__837_146__;
  if ((DAT_06bc5340 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c8f48);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_146__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_147__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_151__);
    DAT_06bc5340 = 1;
  }
  lVar2 = thunk_FUN_02f45174(param_2,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    uVar3 = FUN_06015c34(param_1,lVar2);
    return uVar3;
  }
  lVar2 = thunk_FUN_02f45174(param_2,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_147__);
  if (lVar2 != 0) {
    uVar3 = FUN_06015c94(param_1,lVar2);
    return uVar3;
  }
  if (param_2 != 0) {
    plVar4 = (long *)thunk_FUN_02f1863c(param_2,0);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar3 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uVar3 = FUN_04f65260(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_151__,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
    }
    FUN_060a9cd8(uVar3,param_1,0);
  }
  return 0;
}


