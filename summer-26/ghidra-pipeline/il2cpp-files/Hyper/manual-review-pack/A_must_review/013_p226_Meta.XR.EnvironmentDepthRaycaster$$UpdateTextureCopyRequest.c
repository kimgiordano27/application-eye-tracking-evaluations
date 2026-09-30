/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$UpdateTextureCopyRequest
ENTRY_POINT: 08a27608
PROGRAM: Hyper-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_EnvironmentDepthRaycaster__UpdateTextureCopyRequest
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar1 = PTR_DAT_0ac52570;
  if ((DAT_0b32c312 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09d30);
    FUN_04947ee4(PTR_DAT_0ac0a9b8);
    FUN_04947ee4(PTR_DAT_0ac395d8);
    FUN_04947ee4(PTR_DAT_0ac4e790);
    FUN_04947ee4(PTR_DAT_0ac4c948);
    FUN_04947ee4(PTR_DAT_0ac4c950);
    FUN_04947ee4(PTR_DAT_0ac52578);
    FUN_04947ee4(PTR_DAT_0ac52580);
    FUN_04947ee4(PTR_DAT_0ac52570);
    DAT_0b32c312 = 1;
  }
  lVar7 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_08dbf2f0(lVar7,0);
  puVar6 = PTR_DAT_0ac52580;
  puVar5 = PTR_DAT_0ac52578;
  puVar4 = PTR_DAT_0ac4e790;
  puVar3 = PTR_DAT_0ac4c950;
  puVar2 = PTR_DAT_0ac0a9b8;
  puVar1 = PTR_DAT_0ac09d30;
  if (lVar7 != 0) {
    puVar11 = (undefined8 *)(lVar7 + 0x18);
    *puVar11 = param_3;
    thunk_FUN_049ee3d8(puVar11,0);
    *(undefined8 *)(lVar7 + 0x20) = param_2;
    thunk_FUN_049ee3d8((undefined8 *)(lVar7 + 0x20),param_2);
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
    FUN_076858a8(lVar8,*(undefined8 *)puVar4);
    plVar10 = (long *)(lVar7 + 0x10);
    *plVar10 = lVar8;
    thunk_FUN_049ee3d8(plVar10,lVar8);
    uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_08cc3ad0(uVar9,lVar7,*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08de0604(&stack0x00000008,puVar11,uVar9,0);
    *(undefined8 *)(lVar7 + 0x30) = in_stack_00000010;
    *(undefined8 *)(lVar7 + 0x28) = in_stack_00000008;
    *(undefined8 *)(lVar7 + 0x38) = in_stack_00000018;
    thunk_FUN_049ee3d8(lVar7 + 0x28,0);
    lVar8 = *(long *)(param_1 + 0x18);
    uVar9 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_08cc3ad0(uVar9,lVar7,*(undefined8 *)puVar6,0);
    if (lVar8 != 0) {
      FUN_0845c8d4(lVar8,uVar9,*(undefined8 *)PTR_DAT_0ac395d8);
      if (*plVar10 != 0) {
        return *(undefined8 *)(*plVar10 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


