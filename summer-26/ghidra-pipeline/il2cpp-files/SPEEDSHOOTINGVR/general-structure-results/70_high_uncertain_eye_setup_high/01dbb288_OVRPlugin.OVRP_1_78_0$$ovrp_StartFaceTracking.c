/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartFaceTracking
ENTRY_POINT: 01dbb288
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_78_0__ovrp_StartFaceTracking(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  int in_stack_00000008;
  
  if ((DAT_0247da4b & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_023578f8);
    DAT_0247da4b = 1;
  }
  uVar3 = FUN_01db86c8(param_1);
  puVar2 = PTR_DAT_023578f8;
  if ((uVar3 & 1) == 0) {
    bVar5 = false;
    if (param_2 != 0) {
      lVar4 = *(long *)PTR_DAT_023578f8;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar4 = *(long *)puVar2;
      }
      iVar1 = **(int **)(lVar4 + 0xb8);
      in_stack_00000008 = 0;
      while( true ) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        bVar5 = in_stack_00000008 < iVar1;
        if (iVar1 <= in_stack_00000008) break;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        FUN_01da7d60(&stack0x00000008,0xffffffff);
        uVar3 = FUN_01db86c8(param_1);
        if ((uVar3 & 1) != 0) {
          return bVar5;
        }
        lVar4 = *(long *)puVar2;
      }
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}


