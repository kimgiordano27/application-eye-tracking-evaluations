/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$TryCalculateSurfacePose
ENTRY_POINT: 08a7ea48
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__TryCalculateSurfacePose(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xf48));
  *(undefined1 *)(unaff_x22 + 0x64f) = 1;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_0812768c(*unaff_x20);
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000028 = in_stack_00000000;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000038 = in_stack_00000010;
  thunk_FUN_049ee3d8((ulong)&stack0x00000020 | 8,0);
  thunk_FUN_049ee3d8(&stack0x00000048);
  lVar3 = *unaff_x21;
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  if (*(long *)(lVar3 + 0x38) == 0) {
    FUN_04980b90(lVar3);
  }
  lVar2 = *(long *)(lVar3 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  puVar1 = PTR_DAT_0ac4ef48;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_05335d00((ulong)&stack0x00000020 | 8,&stack0x00000020,
               *(undefined8 *)(*(long *)(lVar3 + 0x38) + 8));
  FUN_08127840((ulong)&stack0x00000020 | 8,*(undefined8 *)puVar1);
  return;
}


