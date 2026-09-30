/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$SelectCategoryButton
ENTRY_POINT: 04da4268
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__SelectCategoryButton(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  void *unaff_x23;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x29;
  
  iVar1 = *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18) + 0x28);
  if (-1 < iVar1) {
    unaff_x25 = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x22,unaff_x25,unaff_x21);
  puVar6 = unaff_x22;
  if (-1 < iVar1) {
    puVar6 = (undefined8 *)*unaff_x22;
  }
  lVar8 = *unaff_x19;
  *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
  *(void **)(unaff_x29 + -0x10) = unaff_x27;
  (**(code **)(*(long *)(lVar8 + 0x230) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 0x230) + 8));
  memcpy(unaff_x23,unaff_x27,unaff_x21);
  memcpy(unaff_x26,unaff_x27,unaff_x21);
  uVar2 = FUN_02f08978(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
  if ((uVar2 & 1) == 0) {
LAB_04da43a4:
    lVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48))();
    memcpy(unaff_x22,unaff_x23,unaff_x21);
    if (lVar8 == 0) {
LAB_04da4490:
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_04da44a8;
    }
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar5 = *(undefined8 **)(lVar9 + 0x58);
    uVar3 = *puVar5;
    puVar6 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar9 + 0x18) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x22;
    }
    pcVar7 = (code *)puVar5[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (*pcVar7)(uVar3,puVar5,lVar8,unaff_x29 + -0x18);
    lVar8 = unaff_x19[0xc];
    if (lVar8 != 0) {
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar6 = *(undefined8 **)(lVar9 + 0x68);
      uVar3 = *puVar6;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x18) + 0x28)) {
        unaff_x22 = (undefined8 *)*unaff_x22;
      }
      pcVar7 = (code *)puVar6[2];
      *(long **)(unaff_x29 + -0x18) = unaff_x19;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x22;
      (*pcVar7)(uVar3,puVar6,lVar8,unaff_x29 + -0x18,unaff_x22);
    }
  }
  else {
    lVar8 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30))();
    if (lVar8 == 0) goto LAB_04da4490;
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
    uVar3 = *puVar6;
    pcVar7 = (code *)puVar6[2];
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*pcVar7)(uVar3,puVar6,lVar8,unaff_x29 + -0x18);
    uVar3 = thunk_FUN_02f44ec4(*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18)
                              );
    lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    lVar8 = *(long *)(lVar9 + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
      lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    }
    uVar4 = *(undefined8 *)(lVar9 + 0x50);
    *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
    FUN_02f0939c(lVar8,uVar4);
    if (*(char *)(unaff_x29 + -0x1c) == '\0') goto LAB_04da43a4;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04da44a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


