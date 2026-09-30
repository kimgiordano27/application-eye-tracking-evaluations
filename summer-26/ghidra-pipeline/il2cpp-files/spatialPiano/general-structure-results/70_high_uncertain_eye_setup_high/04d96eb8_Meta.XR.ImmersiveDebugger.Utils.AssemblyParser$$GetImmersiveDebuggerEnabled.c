/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$GetImmersiveDebuggerEnabled
ENTRY_POINT: 04d96eb8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__GetImmersiveDebuggerEnabled
               (undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long in_x9;
  code *pcVar5;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar6;
  long unaff_x29;
  
  while( true ) {
    puVar4 = unaff_x25;
    if (-1 < *(int *)(*(long *)(in_x9 + 0x38) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x25;
    }
    puVar3 = *(undefined8 **)(in_x9 + 0x40);
    uVar2 = *puVar3;
    pcVar5 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x18) = param_1;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
    (*pcVar5)(uVar2,puVar3,unaff_x27,unaff_x29 + -0x18);
    unaff_x26 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48))
                          (unaff_x26);
    if (unaff_x26 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
      goto LAB_04d96f54;
    }
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    (*(code *)puVar4[2])(*puVar4,puVar4,unaff_x26,0,unaff_x29 + -0x18);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    unaff_x27 = *(long *)(unaff_x29 + -0x18);
    pvVar1 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,pvVar1,unaff_x22);
    pvVar1 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x38) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,pvVar1,unaff_x23);
    if (unaff_x27 == 0) break;
    in_x9 = *(long *)(lVar6 + 0xc0);
    param_1 = unaff_x24;
    if (-1 < *(int *)(*(long *)(in_x9 + 0x30) + 0x28)) {
      param_1 = (undefined8 *)*unaff_x24;
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_04d96f54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


