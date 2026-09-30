/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetPixelFromWorldPosition
ENTRY_POINT: 05b2f578
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_SpaceMap__GetPixelFromWorldPosition
          (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    FUN_0367c9fc(lVar3);
  }
  lVar3 = thunk_FUN_0367fd24();
  if (lVar3 == 0) {
    FUN_05e390e4(2,0);
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084();
    }
    puVar1 = (undefined8 *)thunk_FUN_0367ff68();
    in_stack_00000028 = puVar1[1];
    in_stack_00000020 = *puVar1;
    in_stack_00000038 = puVar1[3];
    in_stack_00000030 = puVar1[2];
    uVar2 = (**(code **)(*param_2 + 0x1c8))
                      (param_2,&stack0x00000020,*(undefined8 *)(*param_2 + 0x1d0));
  }
  return uVar2;
}


