/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$.ctor
ENTRY_POINT: 04cfaee0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_BuildingBlock___ctor(undefined8 *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  size_t unaff_x24;
  size_t unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *(long *)(unaff_x22 + 0xc0);
    puVar6 = unaff_x26;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x70) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x26;
    }
    puVar7 = unaff_x27;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x78) + 0x28)) {
      puVar7 = (undefined8 *)*unaff_x27;
    }
    puVar4 = unaff_x28;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x80) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x28;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0x88);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
    (*(code *)puVar3[2])(uVar2,puVar3,unaff_x21,unaff_x29 + -0x20);
    unaff_x20 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90))
                          (unaff_x20);
    if (unaff_x20 == 0) break;
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    (*(code *)puVar6[2])(*puVar6,puVar6,unaff_x20,0,unaff_x29 + -0x20);
    unaff_x22 = *(long *)(unaff_x19 + 0x20);
    unaff_x21 = *(long *)(unaff_x29 + -0x20);
    pvVar1 = *(void **)(unaff_x29 + -0x50);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0xc0) + 0x70) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x26,pvVar1,unaff_x23);
    pvVar1 = *(void **)(unaff_x29 + -0x48);
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0xc0) + 0x78) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x30);
    }
    memcpy(unaff_x27,pvVar1,unaff_x24);
    param_1 = unaff_x28;
    param_2 = *(void **)(unaff_x29 + -0x40);
    param_3 = unaff_x25;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0xc0) + 0x80) + 0x28)) {
      param_2 = (void *)(unaff_x29 + -0x38);
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x58) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


