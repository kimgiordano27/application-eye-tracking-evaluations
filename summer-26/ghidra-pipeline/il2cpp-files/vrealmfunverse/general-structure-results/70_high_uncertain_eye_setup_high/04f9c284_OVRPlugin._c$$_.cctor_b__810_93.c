/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_93
ENTRY_POINT: 04f9c284
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__810_93(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  
  puVar2 = System_Func<Collider,_Transform>_TypeInfo;
  if (unaff_x19 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06312bc0);
    uVar5 = thunk_FUN_02b79644();
    uVar6 = thunk_FUN_02ba3594(System_Func<IActiveState,_bool>_TypeInfo);
    FUN_04db2a6c(uVar5,uVar6,0);
    uVar6 = thunk_FUN_02ba3594(System_Func<IAsyncResult,_IPAddress[]>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5,uVar6);
  }
  lVar4 = *(long *)System_Func<Collider,_Transform>_TypeInfo;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_063122f8;
  if ((long *)**(long **)(lVar4 + 0xb8) != (long *)0x0) {
    iVar3 = (**(code **)(*(long *)**(long **)(lVar4 + 0xb8) + 0x1e8))();
    uVar5 = FUN_02b3c908(*(undefined8 *)puVar1,iVar3 + 1);
    puVar1 = PTR_DAT_0631e258;
    plVar7 = (long *)**(long **)(*(long *)puVar2 + 0xb8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 600))(plVar7);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar6 = thunk_FUN_02b48844(iVar3 + 1,0);
      FUN_04ca638c(uVar5,0,uVar6,iVar3 + 1,0);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


