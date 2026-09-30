/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ToggleEffectMeshColliders
ENTRY_POINT: 04dd0620
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__ToggleEffectMeshColliders(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  void *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  void *unaff_x22;
  size_t unaff_x23;
  undefined4 unaff_w24;
  long unaff_x25;
  code *pcVar5;
  long unaff_x29;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar2 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02f41e9c(param_1);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar5 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar2);
  }
  (*pcVar5)();
  memcpy(unaff_x20,unaff_x22,unaff_x23);
  lVar3 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar2 = *(long *)(unaff_x21 + 0x20);
  }
  uVar4 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_02f41e9c(lVar2);
  }
  lVar2 = *(long *)(lVar2 + 0xc0);
  *(undefined4 *)(unaff_x29 + -0xc) = unaff_w24;
  lVar2 = *(long *)(lVar2 + 0xb0);
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(void **)(unaff_x29 + -0x18) = unaff_x20;
  (**(code **)(lVar2 + 0x10))(uVar4);
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


