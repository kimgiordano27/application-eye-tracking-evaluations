/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$TryCalculateSurfacePose
ENTRY_POINT: 04e1be2c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__TryCalculateSurfacePose
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_x20;
  int unaff_w24;
  long lVar4;
  long unaff_x25;
  long lVar5;
  
  if ((*(byte *)(unaff_x25 + 0xe0d) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9988);
    *(undefined1 *)(unaff_x25 + 0xe0d) = 1;
  }
  puVar1 = PTR_DAT_067c9988;
  if ((int)param_5 < (int)(unaff_w24 + param_5)) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = (long)(int)(unaff_w24 + param_5) - (long)(int)param_5;
    lVar4 = param_2 + (long)(int)param_5 * 0x10 + 0x20;
    do {
      uVar3 = *(uint *)(param_2 + 0x18);
      if (uVar3 <= param_5) {
LAB_04e1bef8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        uVar3 = *(uint *)(param_2 + 0x18);
      }
      if (uVar3 <= param_5) goto LAB_04e1bef8;
      uVar2 = FUN_050bab7c(lVar4,param_3,param_4,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
      if ((uVar2 & 1) != 0) {
        return param_5;
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + 0x10;
      param_5 = param_5 + 1;
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


