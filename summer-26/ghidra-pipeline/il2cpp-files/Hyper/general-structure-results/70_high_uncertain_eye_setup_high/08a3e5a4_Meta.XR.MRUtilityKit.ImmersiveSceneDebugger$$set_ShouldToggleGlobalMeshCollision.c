/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$set_ShouldToggleGlobalMeshCollision
ENTRY_POINT: 08a3e5a4
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__set_ShouldToggleGlobalMeshCollision(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 *puVar6;
  undefined8 in_stack_00000008;
  
  puVar6 = *(undefined8 **)(unaff_x21 + 0xa0);
  uVar1 = *(ulong *)(unaff_x19 + 0x10);
  uVar2 = FUN_08bd8f34(*(undefined8 *)(unaff_x19 + 0x18));
  uVar3 = FUN_08bd8f34(*(undefined8 *)(unaff_x19 + 0x20),0);
  if ((uVar1 >> 0x20 == 0) || ((uVar1 & 0xff) == 0)) {
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x19 + 0x18);
      if ((uVar3 & 1) == 0) {
        FUN_08bda228(*(undefined8 *)PTR_DAT_0ac52050,uVar4,*(undefined8 *)PTR_DAT_0ac09c10,
                     *(undefined8 *)(unaff_x19 + 0x20),0);
        goto LAB_08a3e714;
      }
    }
    else {
      if ((uVar3 & 1) != 0) goto LAB_08a3e714;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x20);
    }
    FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac52038,uVar4,0);
  }
  else {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    if ((uVar2 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        uVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000008);
        FUN_08bda66c(*(undefined8 *)PTR_DAT_0ac52030,uVar4,*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)(unaff_x19 + 0x20),0);
        goto LAB_08a3e714;
      }
      uVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000008);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x18);
    }
    else {
      if ((uVar3 & 1) != 0) {
        uVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000008);
        FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac52028,uVar4,0);
        goto LAB_08a3e714;
      }
      uVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac14a68,&stack0x00000008);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x20);
    }
    FUN_08bda628(*(undefined8 *)PTR_DAT_0ac52048,uVar4,uVar5,0);
  }
LAB_08a3e714:
  uVar4 = thunk_FUN_04983f60(*puVar6);
  FUN_08a3f470();
  return uVar4;
}


