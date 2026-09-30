/*
FUNCTION_NAME: FUN_06913c8c
ENTRY_POINT: 06913c8c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


int FUN_06913c8c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0897ce1c & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b4e70);
    DAT_0897ce1c = 1;
  }
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  uStack_88 = param_2[5];
  local_90 = param_2[4];
  local_80 = param_2[6];
  iVar2 = FUN_068e3bc4(param_1,&local_b0,0);
  puVar1 = PTR_DAT_084b4e70;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uStack_48 = param_2[5];
    local_50 = param_2[4];
    local_40 = param_2[6];
    iVar3 = Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>___ctor
                      (*(long *)(param_1 + 0xe8),&local_70,*(undefined8 *)PTR_DAT_084b4e70);
    if (*(long *)(param_1 + 0xf0) != 0) {
      uStack_68 = param_2[1];
      local_70 = *param_2;
      uStack_58 = param_2[3];
      uStack_60 = param_2[2];
      uStack_48 = param_2[5];
      local_50 = param_2[4];
      local_40 = param_2[6];
      iVar4 = Unity_Collections_NativeArray<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>___ctor
                        (*(long *)(param_1 + 0xf0),&local_70,*(undefined8 *)puVar1);
                    /* try { // try from 06913d5c to 06a13d83 has its CatchHandler @ 06914190 */
      return iVar3 + iVar2 + iVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


