/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$CustomPrefabSelection
ENTRY_POINT: 057c730c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__CustomPrefabSelection(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  void *unaff_x23;
  long unaff_x29;
  
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x38);
  uVar1 = *puVar2;
  *(undefined8 **)(unaff_x29 + -0x20) = unaff_x22;
  (*(code *)puVar2[2])(uVar1);
  uVar1 = thunk_FUN_0301043c(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  lVar5 = *(long *)(lVar6 + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02feb2c4(lVar5);
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x48);
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  FUN_02fe9dc8(lVar5,uVar3);
  if (*(char *)(unaff_x29 + -0xc) == '\0') {
    lVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50))();
    memcpy(unaff_x22,unaff_x23,unaff_x21);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar4 = *(undefined8 **)(lVar6 + 0x58);
    uVar1 = *puVar4;
    puVar2 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x22;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = puVar2;
    (*(code *)puVar4[2])(uVar1,puVar4,lVar5,unaff_x29 + -0x20);
    lVar5 = *(long *)(unaff_x19 + 0x58);
    if (lVar5 != 0) {
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar2 = *(undefined8 **)(lVar6 + 0x68);
      uVar1 = *puVar2;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x18) + 0x28)) {
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      *(long *)(unaff_x29 + -0x20) = unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
      (*(code *)puVar2[2])(uVar1,puVar2,lVar5,unaff_x29 + -0x20,unaff_x22);
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


