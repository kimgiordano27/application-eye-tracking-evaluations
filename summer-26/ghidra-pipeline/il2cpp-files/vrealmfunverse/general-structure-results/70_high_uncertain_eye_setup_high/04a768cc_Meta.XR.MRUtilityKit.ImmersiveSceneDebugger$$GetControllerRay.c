/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetControllerRay
ENTRY_POINT: 04a768cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetControllerRay(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long in_x9;
  uint in_w10;
  long unaff_x20;
  long unaff_x21;
  
  if (((in_w10 < (uint)in_x9) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_2))
     || (uVar6 = FUN_04a78a58(), (uVar6 & 1) == 0)) {
    uVar6 = FUN_04a782fc();
    iVar1 = *(int *)(unaff_x20 + 0x20);
    bVar2 = false;
    bVar3 = true;
    bVar4 = false;
    if (uVar6 >> 0x20 == 0) {
      iVar5 = (int)uVar6;
      bVar4 = SBORROW4(iVar1,iVar5);
      bVar2 = iVar1 - iVar5 < 0;
      bVar3 = iVar1 == iVar5;
    }
    uVar6 = (ulong)(!bVar3 && bVar2 == bVar4);
  }
  else {
    if (*(int *)(unaff_x21 + 0x20) < *(int *)(unaff_x20 + 0x20)) {
      uVar6 = FUN_04a77c58();
      return uVar6;
    }
    uVar6 = 0;
  }
  return uVar6;
}


