/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.KeepUprightWithSurfaceModifier$$.ctor
ENTRY_POINT: 04aad4ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_KeepUprightWithSurfaceModifier___ctor
               (void *param_1,void *param_2,size_t param_3)

{
  void *__src;
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 unaff_w19;
  void *unaff_x20;
  long lVar6;
  undefined8 *unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long lVar7;
  long unaff_x28;
  long unaff_x29;
  
  memcpy(param_1,param_2,param_3);
  if (unaff_x28 != 0) {
    plVar4 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0xc0);
    puVar3 = (undefined8 *)plVar4[0x16];
    uVar2 = *puVar3;
    if (-1 < *(int *)(*plVar4 + 0x28)) {
      unaff_x26 = (undefined8 *)*unaff_x26;
    }
    pcVar5 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x26;
    (*pcVar5)(uVar2);
    lVar7 = *(long *)(unaff_x22 + 0x10);
    plVar4 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0xc0);
    iVar1 = *(int *)(*plVar4 + 0x28);
    __src = unaff_x20;
    if (-1 < iVar1) {
      __src = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,__src,unaff_x23);
    if (lVar7 != 0) {
      puVar3 = (undefined8 *)plVar4[0x17];
      uVar2 = *puVar3;
      if (-1 < iVar1) {
        unaff_x25 = (undefined8 *)*unaff_x25;
      }
      pcVar5 = (code *)puVar3[2];
      *(undefined4 *)(unaff_x29 + -0xc) = unaff_w19;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
      (*pcVar5)(uVar2,puVar3,lVar7,unaff_x29 + -0x20,unaff_x25);
      lVar7 = *(long *)(unaff_x22 + 0x18);
      plVar4 = *(long **)(*(long *)(unaff_x24 + 0x20) + 0xc0);
      iVar1 = *(int *)(*plVar4 + 0x28);
      if (-1 < iVar1) {
        unaff_x20 = (void *)(unaff_x29 + -0x28);
      }
      memcpy(unaff_x21,unaff_x20,unaff_x23);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)plVar4[7];
        uVar2 = *puVar3;
        if (-1 < iVar1) {
          unaff_x21 = (undefined8 *)*unaff_x21;
        }
        pcVar5 = (code *)puVar3[2];
        lVar6 = *(long *)(unaff_x29 + -0x30);
        *(undefined4 *)(unaff_x29 + -0xc) = unaff_w19;
        *(undefined8 **)(unaff_x29 + -0x20) = unaff_x21;
        *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
        (*pcVar5)(uVar2,puVar3,lVar7,unaff_x29 + -0x20,unaff_x29 + -0xc);
        if (*(long *)(lVar6 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
        goto LAB_04aad638;
      }
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_04aad638:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


