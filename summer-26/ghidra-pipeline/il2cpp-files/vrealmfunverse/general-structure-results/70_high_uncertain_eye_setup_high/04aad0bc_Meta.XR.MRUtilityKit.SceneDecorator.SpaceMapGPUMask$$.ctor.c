/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SpaceMapGPUMask$$.ctor
ENTRY_POINT: 04aad0bc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SpaceMapGPUMask___ctor(void)

{
  bool in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *puVar6;
  long unaff_x23;
  undefined8 *__dest;
  void *unaff_x24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  long lVar7;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  *(undefined4 *)(unaff_x29 + -0x28) = unaff_w26;
  *(undefined4 *)(unaff_x29 + -0x24) = unaff_w25;
  if (in_ZR) {
LAB_04aad2c8:
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 != 0) {
      puVar2 = *(undefined8 **)(unaff_x23 + 0xa0);
      *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
      uVar1 = *puVar2;
      pcVar4 = (code *)puVar2[2];
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(void **)(unaff_x29 + -0x18) = unaff_x24;
      (*pcVar4)(uVar1,puVar2,lVar3,unaff_x29 + -0x20);
      memcpy(unaff_x27,unaff_x24,unaff_x21);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      lVar7 = *(long *)(unaff_x29 + -0x38);
      if (lVar3 != 0) {
        puVar2 = *(undefined8 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0xa0);
        *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
        uVar1 = *puVar2;
        pcVar4 = (code *)puVar2[2];
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
        *(void **)(unaff_x29 + -0x18) = unaff_x22;
        (*pcVar4)(uVar1,puVar2,lVar3,unaff_x29 + -0x20);
        memcpy(unaff_x28,unaff_x22,unaff_x21);
        lVar3 = *(long *)(unaff_x20 + 0x10);
        memcpy(unaff_x19,unaff_x22,unaff_x21);
        if (lVar3 != 0) {
          puVar6 = *(undefined8 **)(unaff_x29 + -0x40);
          plVar5 = *(long **)(*(long *)(lVar7 + 0x20) + 0xc0);
          puVar2 = (undefined8 *)plVar5[0x17];
          uVar1 = *puVar2;
          if (-1 < *(int *)(*plVar5 + 0x28)) {
            unaff_x19 = (undefined8 *)*unaff_x19;
          }
          pcVar4 = (code *)puVar2[2];
          *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
          *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
          *(undefined8 **)(unaff_x29 + -0x18) = unaff_x19;
          (*pcVar4)(uVar1,puVar2,lVar3,unaff_x29 + -0x20,unaff_x19);
          lVar3 = *(long *)(unaff_x20 + 0x10);
          memcpy(puVar6,unaff_x27,unaff_x21);
          if (lVar3 != 0) {
            __dest = *(undefined8 **)(unaff_x29 + -0x48);
            plVar5 = *(long **)(*(long *)(lVar7 + 0x20) + 0xc0);
            puVar2 = (undefined8 *)plVar5[0x17];
            uVar1 = *puVar2;
            if (-1 < *(int *)(*plVar5 + 0x28)) {
              puVar6 = (undefined8 *)*puVar6;
            }
            pcVar4 = (code *)puVar2[2];
            *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
            *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
            *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
            (*pcVar4)(uVar1,puVar2,lVar3,unaff_x29 + -0x20,puVar6);
            lVar3 = *(long *)(unaff_x20 + 0x18);
            memcpy(__dest,unaff_x28,unaff_x21);
            if (lVar3 != 0) {
              puVar6 = *(undefined8 **)(unaff_x29 + -0x50);
              plVar5 = *(long **)(*(long *)(lVar7 + 0x20) + 0xc0);
              puVar2 = (undefined8 *)plVar5[0x18];
              uVar1 = *puVar2;
              if (-1 < *(int *)(*plVar5 + 0x28)) {
                __dest = (undefined8 *)*__dest;
              }
              pcVar4 = (code *)puVar2[2];
              *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x24);
              *(undefined8 **)(unaff_x29 + -0x20) = __dest;
              *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
              (*pcVar4)(uVar1,puVar2,lVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
              lVar3 = *(long *)(unaff_x20 + 0x18);
              memcpy(puVar6,unaff_x27,unaff_x21);
              if (lVar3 != 0) {
                plVar5 = *(long **)(*(long *)(lVar7 + 0x20) + 0xc0);
                puVar2 = (undefined8 *)plVar5[0x18];
                uVar1 = *puVar2;
                if (-1 < *(int *)(*plVar5 + 0x28)) {
                  puVar6 = (undefined8 *)*puVar6;
                }
                pcVar4 = (code *)puVar2[2];
                *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x28);
                *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
                *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0xc;
                (*pcVar4)(uVar1,puVar2,lVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
                goto LAB_04aad2c8;
              }
            }
          }
        }
      }
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


