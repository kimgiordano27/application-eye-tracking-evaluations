/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.PlaceWithAnchor$$RequestMove
ENTRY_POINT: 0581b120
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_PlaceWithAnchor__RequestMove
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,int param_5,
               long param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((DAT_073952ee & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f72dd8);
    DAT_073952ee = 1;
  }
  puVar2 = PTR_DAT_06f72dd8;
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      uVar4 = *(uint *)(param_2 + 0x18);
      if (uVar4 <= param_4) {
LAB_0581b1e4:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        uVar4 = *(uint *)(param_2 + 0x18);
      }
      if (uVar4 <= param_4) goto LAB_0581b1e4;
      uVar3 = FUN_05daa1bc(param_2 + (long)(int)param_4 * 8 + 0x20,param_3,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
      if ((uVar3 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


