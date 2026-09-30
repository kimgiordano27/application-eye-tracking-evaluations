/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$get_ToggleColliders
ENTRY_POINT: 04dd05e4
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


void Meta_XR_MRUtilityKit_EffectMesh__get_ToggleColliders(undefined8 param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ulong in_x9;
  void *unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  void *unaff_x22;
  size_t unaff_x23;
  code *pcVar6;
  long unaff_x25;
  long unaff_x29;
  
  pcVar6 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x38);
  if ((in_x9 & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  uVar2 = (*pcVar6)();
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x21 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xa8);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar3);
  }
  (*pcVar6)();
  memcpy(unaff_x20,unaff_x22,unaff_x23);
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x21 + 0x20);
  }
  uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xb0);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02f41e9c(lVar3);
  }
  lVar3 = *(long *)(lVar3 + 0xc0);
  *(undefined4 *)(unaff_x29 + -0xc) = uVar2;
  lVar3 = *(long *)(lVar3 + 0xb0);
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(void **)(unaff_x29 + -0x18) = unaff_x20;
  (**(code **)(lVar3 + 0x10))(uVar5);
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


