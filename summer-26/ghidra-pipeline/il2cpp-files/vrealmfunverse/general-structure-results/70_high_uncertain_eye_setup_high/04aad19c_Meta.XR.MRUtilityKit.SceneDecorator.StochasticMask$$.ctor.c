/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.StochasticMask$$.ctor
ENTRY_POINT: 04aad19c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_StochasticMask___ctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 in_w8;
  long *plVar3;
  code *in_x9;
  code *pcVar4;
  undefined8 unaff_x19;
  long lVar5;
  long unaff_x20;
  size_t unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *__dest;
  undefined8 *__dest_00;
  long unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0xc) = in_w8;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  *(undefined8 *)(unaff_x29 + -0x18) = unaff_x19;
  (*in_x9)();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  memcpy(unaff_x22,unaff_x27,unaff_x21);
  if (lVar5 != 0) {
    __dest_00 = *(undefined8 **)(unaff_x29 + -0x48);
    plVar3 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
    puVar2 = (undefined8 *)plVar3[0x17];
    uVar1 = *puVar2;
    if (-1 < *(int *)(*plVar3 + 0x28)) {
      unaff_x22 = (undefined8 *)*unaff_x22;
    }
    pcVar4 = (code *)puVar2[2];
    *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
    *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*pcVar4)(uVar1,puVar2,lVar5,unaff_x29 + -0x20,unaff_x22);
    lVar5 = *(long *)(unaff_x20 + 0x18);
    memcpy(__dest_00,unaff_x28,unaff_x21);
    if (lVar5 != 0) {
      __dest = *(undefined8 **)(unaff_x29 + -0x50);
      plVar3 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
      puVar2 = (undefined8 *)plVar3[0x18];
      uVar1 = *puVar2;
      if (-1 < *(int *)(*plVar3 + 0x28)) {
        __dest_00 = (undefined8 *)*__dest_00;
      }
      pcVar4 = (code *)puVar2[2];
      *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
      *(undefined8 **)(unaff_x29 + -0x20) = __dest_00;
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
      (*pcVar4)(uVar1,puVar2,lVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
      lVar5 = *(long *)(unaff_x20 + 0x18);
      memcpy(__dest,unaff_x27,unaff_x21);
      if (lVar5 != 0) {
        plVar3 = *(long **)(*(long *)(unaff_x26 + 0x20) + 0xc0);
        puVar2 = (undefined8 *)plVar3[0x18];
        uVar1 = *puVar2;
        if (-1 < *(int *)(*plVar3 + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        pcVar4 = (code *)puVar2[2];
        *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
        *(undefined8 **)(unaff_x29 + -0x20) = __dest;
        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
        (*pcVar4)(uVar1,puVar2,lVar5,unaff_x29 + -0x20,unaff_x29 + -0xc);
        if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
        goto LAB_04aad314;
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_04aad314:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


