/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockVariantInfo
ENTRY_POINT: 024698dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_03ce6f20;
  if ((*(byte *)(param_3 + 0x130) <= *(byte *)(param_1 + 0x130)) &&
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) == param_3))
  {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_03ce1840 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_024abfc0(uVar4,0,0);
    uVar2 = FUN_024a0e54();
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_02430478(uVar3,uVar4,uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x140,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6ee0();
}


