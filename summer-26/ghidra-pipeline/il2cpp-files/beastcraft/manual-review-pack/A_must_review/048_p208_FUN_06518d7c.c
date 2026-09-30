/*
FUNCTION_NAME: FUN_06518d7c
ENTRY_POINT: 06518d7c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06518d7c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar4 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_AddCallback__;
  puVar3 = UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo;
  puVar2 = PTR_DAT_06a6e3d8;
  if ((bRam0000000006e9cdaf & 1) == 0) {
    FUN_02e3ca1c(UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a6e3d8);
    FUN_02e3ca1c(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_AddCallback__
                );
    bRam0000000006e9cdaf = 1;
  }
  uVar5 = FUN_06214e24(*(undefined8 *)puVar4,1,0,0,0);
  lVar7 = *(long *)puVar3;
  puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  iVar1 = *(int *)(lVar7 + 0xe4);
  *puVar6 = uVar5;
  if (iVar1 == 0) {
    thunk_FUN_02e9a04c(lVar7);
    lVar7 = *(long *)puVar3;
    puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  }
  puVar6[1] = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  thunk_FUN_02ee2be8(puVar6 + 1);
  *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) =
       *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
  thunk_FUN_02ee2be8();
  return;
}


