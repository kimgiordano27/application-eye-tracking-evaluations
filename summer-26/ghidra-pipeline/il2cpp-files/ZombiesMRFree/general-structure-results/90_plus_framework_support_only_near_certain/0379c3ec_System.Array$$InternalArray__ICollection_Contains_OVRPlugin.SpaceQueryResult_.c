/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0379c3ec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  if ((DAT_07391515 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f96840);
    FUN_02fe925c(PTR_DAT_06f96848);
    FUN_02fe925c(PTR_DAT_06f6d618);
    DAT_07391515 = 1;
  }
  puVar1 = PTR_DAT_06f6d618;
  if (param_1 != 0) {
    lVar2 = FUN_03c73394(param_1,*(undefined8 *)PTR_DAT_06f96848);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(lVar4);
    }
    uVar3 = FUN_068f8810(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      lVar2 = FUN_03c73974(param_1,*(undefined8 *)PTR_DAT_06f96840);
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(lVar4);
      }
      uVar3 = FUN_068f8810(lVar2,0,0);
      uVar5 = 0;
      if ((uVar3 & 1) != 0) {
        if (lVar2 != 0) {
          FUN_0697470c(0,lVar2,0);
          auVar6._4_4_ = extraout_var;
          auVar6._0_4_ = extraout_s0;
          auVar6._8_8_ = extraout_var_00;
          return auVar6;
        }
        goto LAB_0379c4e8;
      }
    }
    else {
      if (lVar2 == 0) goto LAB_0379c4e8;
      uVar5 = *(uint *)(lVar2 + 0x20);
    }
    return ZEXT416(uVar5);
  }
LAB_0379c4e8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


