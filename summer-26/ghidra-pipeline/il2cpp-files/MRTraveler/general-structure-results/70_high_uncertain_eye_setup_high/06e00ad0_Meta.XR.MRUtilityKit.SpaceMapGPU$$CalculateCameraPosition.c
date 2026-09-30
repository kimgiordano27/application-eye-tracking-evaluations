/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$CalculateCameraPosition
ENTRY_POINT: 06e00ad0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__CalculateCameraPosition(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x580));
  *(undefined1 *)(unaff_x20 + 0xee2) = 1;
  plVar4 = *(long **)(*unaff_x19 + 0xb8);
  if (*plVar4 == 0) {
    uVar2 = FUN_085e6d84(0);
    **(undefined8 **)(*unaff_x19 + 0xb8) = uVar2;
    thunk_FUN_03d233cc(*(undefined8 *)(*unaff_x19 + 0xb8),uVar2);
    plVar4 = *(long **)(*unaff_x19 + 0xb8);
  }
  if (plVar4[1] == 0) {
    uVar2 = FUN_085e6fb4(0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8);
    *puVar5 = uVar2;
    thunk_FUN_03d233cc(puVar5,uVar2);
    plVar4 = *(long **)(*unaff_x19 + 0xb8);
  }
  if (plVar4[2] == 0) {
    if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_0859d5ac(0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x10);
    *puVar5 = uVar2;
    thunk_FUN_03d233cc(puVar5,uVar2);
    plVar4 = *(long **)(*unaff_x19 + 0xb8);
  }
  if (plVar4[3] == 0) {
    if (*(int *)(*(long *)PTR_DAT_08e69810 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar2 = FUN_0859d55c(0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18);
    *puVar5 = uVar2;
    thunk_FUN_03d233cc(puVar5,uVar2);
    plVar4 = *(long **)(*unaff_x19 + 0xb8);
  }
  uVar3 = FUN_06f74e14(plVar4[7],0);
  puVar1 = PTR_DAT_08e92580;
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_085d8b4c(*(undefined8 *)PTR_DAT_08e92580,0);
    puVar5 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38);
    *puVar5 = uVar2;
    thunk_FUN_03d233cc(puVar5,uVar2);
    uVar3 = FUN_06f74e14(*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38),0);
    if ((uVar3 & 1) != 0) {
      FUN_070f85dc(0);
      uVar2 = FUN_070fa770();
      puVar5 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38);
      *puVar5 = uVar2;
      thunk_FUN_03d233cc(puVar5,uVar2);
      FUN_085d8a78(*(undefined8 *)puVar1,*(undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38),0);
      FUN_085d8c58(0);
    }
  }
  return;
}


