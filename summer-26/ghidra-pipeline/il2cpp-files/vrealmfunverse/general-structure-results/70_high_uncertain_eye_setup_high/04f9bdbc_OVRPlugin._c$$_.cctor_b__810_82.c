/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_82
ENTRY_POINT: 04f9bdbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_82(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  
  puVar3 = System_Func<Collider,_Transform>_TypeInfo;
  puVar2 = PTR_DAT_0631e258;
  puVar1 = PTR_DAT_063122f8;
  if (unaff_x19 == 0) {
    return 0;
  }
  if (*(int *)(*(long *)System_Func<Collider,_Transform>_TypeInfo + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_04f9be7c();
  uVar5 = FUN_02b3c908(*(undefined8 *)puVar1,uVar4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar2);
  }
  FUN_04ca65f0();
  plVar6 = (long *)**(long **)(*(long *)puVar3 + 0xb8);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04f9be60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*plVar6 + 0x358))(plVar6,uVar5,*(undefined8 *)(*plVar6 + 0x360));
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


