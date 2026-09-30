/*
FUNCTION_NAME: FUN_035621cc
ENTRY_POINT: 035621cc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_035621cc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_0412df81 & 1) == 0) {
    FUN_01ab69ac(OVRSkeletonRenderer_CapsuleVisualization_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03d06248);
    FUN_01ab69ac(System_Xml_Schema_LeafRangeNode_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_82_0_TypeInfo);
    DAT_0412df81 = 1;
  }
  puVar1 = OVRSkeletonRenderer_CapsuleVisualization_TypeInfo;
  if (*(char *)((long)param_1 + 0x3fd) != '\0') {
    lVar4 = param_1[0xe5];
    if (*(int *)(*(long *)PTR_DAT_03d06248 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    puVar2 = OVRPlugin_OVRP_1_82_0_TypeInfo;
    FUN_037b4b30(lVar4,param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    puVar1 = PTR_DAT_03cbdf88;
    FUN_037aeeb8(param_1,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_035a25a0(param_1,0);
    lVar4 = param_1[0xe4];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar3 = FUN_036cee6c(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (param_1[0xe4] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0390f424(param_1[0xe4],0);
    }
    puVar1 = System_Xml_Schema_LeafRangeNode_TypeInfo;
    (**(code **)(*param_1 + 0x8f8))(param_1,0,*(undefined8 *)(*param_1 + 0x900));
    lVar4 = param_1[0x70];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_039133d0(lVar4,0);
    (**(code **)(*param_1 + 0x4f8))(param_1,*(undefined8 *)(*param_1 + 0x500));
                    /* WARNING: Could not recover jumptable at 0x03562358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x508))(param_1,*(undefined8 *)(*param_1 + 0x510));
    return;
  }
  return;
}


