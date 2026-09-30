/*
FUNCTION_NAME: FluffyUnderware.Curvy.Shapes.CSPie$$cpPosition
ENTRY_POINT: 02ed3200
PROGRAM: vrlegs-libil2cpp.so
SCORE: 151
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_foveation_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_foveated_rendering
*/


long FluffyUnderware_Curvy_Shapes_CSPie__cpPosition
               (long param_1,undefined4 param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  long local_50 [2];
  
  puVar1 = PTR_DAT_03cc9e10;
  local_58 = param_6;
  if ((DAT_0412a766 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc9e10);
    DAT_0412a766 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = OVRManager__SetFoveatedRenderingLevel(&local_58,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_027dbebc(*(long *)(param_1 + 0x50),0,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_02ed3d5c(param_1,param_2,param_3 & 1,param_4,param_5);
      return lVar3;
    }
  }
  lVar3 = FUN_02ed425c(param_1,param_2,param_3 & 1,param_4,param_5,local_58);
  local_50[0] = 0;
  local_50[1] = 0;
  if (lVar3 != 0) {
    local_50[0] = lVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_50,lVar3);
    return local_50[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_0277ed90(0x26,0);
}


