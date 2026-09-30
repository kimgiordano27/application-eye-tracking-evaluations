/*
FUNCTION_NAME: FUN_05ca4de0
ENTRY_POINT: 05ca4de0
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_2;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1
*/


void FUN_05ca4de0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  local_24 = param_2;
  if ((DAT_06a7a0fd & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Api_Loot_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_var);
    DAT_06a7a0fd = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_045d9648(*(long *)(param_1 + 0x20),param_2,
                         *(undefined8 *)Niantic_Peridot_Api_Loot_var);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_04f2e660(&local_24,0);
      uVar3 = thunk_FUN_02c7737c(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_var);
      uVar4 = thunk_FUN_02c7737c(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_var)
      ;
      uVar2 = FUN_04db9398(uVar3,uVar2,uVar4,0);
      thunk_FUN_02c7737c(PTR_DAT_065cfdb8);
      uVar3 = thunk_FUN_02cea894();
      FUN_04f30dfc(uVar3,uVar2,0);
      uVar2 = thunk_FUN_02c7737c(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_02ce7b54(uVar3,uVar2);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_045d93b4(*(long *)(param_1 + 0x20),param_2,
                   *(undefined8 *)UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_var)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


