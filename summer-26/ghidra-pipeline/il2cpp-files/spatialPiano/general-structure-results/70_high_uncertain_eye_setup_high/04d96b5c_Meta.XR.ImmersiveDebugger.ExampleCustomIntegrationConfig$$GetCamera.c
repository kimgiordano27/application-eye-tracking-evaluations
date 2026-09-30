/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.ExampleCustomIntegrationConfig$$GetCamera
ENTRY_POINT: 04d96b5c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_ExampleCustomIntegrationConfig__GetCamera
               (undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *in_x9;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar4;
  long unaff_x29;
  
  do {
    (*in_x9)(param_1,param_2,param_3,param_4);
    unaff_x26 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88))
                          (unaff_x26);
    if (unaff_x26 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Init:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    (*(code *)puVar2[2])(*puVar2,puVar2,unaff_x26,0,unaff_x29 + -0x18);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    param_3 = *(long *)(unaff_x29 + -0x18);
    pvVar1 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x70) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,pvVar1,unaff_x22);
    pvVar1 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x78) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,pvVar1,unaff_x23);
    if (param_3 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__Init;
    }
    lVar4 = *(long *)(lVar4 + 0xc0);
    puVar2 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x70) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x24;
    }
    puVar3 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar4 + 0x78) + 0x28)) {
      puVar3 = (undefined8 *)*unaff_x25;
    }
    param_2 = *(undefined8 **)(lVar4 + 0x80);
    param_4 = unaff_x29 + -0x18;
    param_1 = *param_2;
    in_x9 = (code *)param_2[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar3;
  } while( true );
}


