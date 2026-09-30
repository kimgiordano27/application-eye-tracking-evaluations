/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$SetupGrain
ENTRY_POINT: 0663fd5c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Universal_PostProcessPass__SetupGrain(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long in_stack_00000018;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_06f7b348 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_03dbda3c(uVar4,*(undefined8 *)
                      System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
              );
  lVar2 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    FUN_04430ce4(&stack0x00000008,lVar2,*(undefined8 *)PTR_DAT_06f8ac50);
    puVar1 = PTR_DAT_06f8ac40;
    while( true ) {
      uVar3 = FUN_05506d10(&stack0x00000008,*(undefined8 *)puVar1);
      lVar2 = in_stack_00000018;
      if ((uVar3 & 1) == 0) {
        FUN_05506d0c(&stack0x00000008,*(undefined8 *)PTR_DAT_06f8ac38);
        return;
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      if (lVar2 == 0) break;
      FUN_06b763a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20),0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


