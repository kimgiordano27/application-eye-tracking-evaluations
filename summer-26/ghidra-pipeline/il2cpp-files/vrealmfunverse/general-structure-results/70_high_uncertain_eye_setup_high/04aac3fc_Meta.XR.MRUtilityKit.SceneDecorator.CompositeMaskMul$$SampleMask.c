/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.CompositeMaskMul$$SampleMask
ENTRY_POINT: 04aac3fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_CompositeMaskMul__SampleMask(void)

{
  void *__src;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  void *unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  long *plVar5;
  undefined8 *unaff_x25;
  long lVar6;
  long unaff_x27;
  long unaff_x29;
  
  lVar6 = *(long *)(unaff_x19 + 0x18);
  plVar5 = *(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
  __src = unaff_x21;
  if (-1 < *(int *)(*plVar5 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x28);
  }
  memcpy(unaff_x25,__src,unaff_x23);
  if ((*(long *)(unaff_x19 + 0x10) == 0) || (iVar1 = (**(code **)plVar5[6])(), lVar6 == 0)) {
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else {
    plVar5 = *(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0);
    puVar3 = (undefined8 *)plVar5[7];
    uVar2 = *puVar3;
    if (-1 < *(int *)(*plVar5 + 0x28)) {
      unaff_x25 = (undefined8 *)*unaff_x25;
    }
    pcVar4 = (code *)puVar3[2];
    *(int *)(unaff_x29 + -0xc) = iVar1 + -1;
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x25;
    *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
    (*pcVar4)(uVar2,puVar3,lVar6,unaff_x29 + -0x20,unaff_x29 + -0xc);
    if ((*(uint *)(unaff_x29 + -0x2c) & 1) != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x20);
      if (-1 < *(int *)(**(long **)(lVar6 + 0xc0) + 0x28)) {
        unaff_x21 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x20,unaff_x21,unaff_x23);
      plVar5 = *(long **)(lVar6 + 0xc0);
      puVar3 = (undefined8 *)plVar5[8];
      uVar2 = *puVar3;
      if (-1 < *(int *)(*plVar5 + 0x28)) {
        unaff_x20 = (undefined8 *)*unaff_x20;
      }
      pcVar4 = (code *)puVar3[2];
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x20;
      (*pcVar4)(uVar2);
    }
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


