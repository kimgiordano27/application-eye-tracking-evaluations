/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.CustomMatchmaking$$get_SupportsRoomPassword
ENTRY_POINT: 0647a1b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking__get_SupportsRoomPassword(void)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_x9;
  code *pcVar6;
  long unaff_x19;
  void *unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar7;
  long unaff_x29;
  
  while( true ) {
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(in_x9 + 0x70) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    puVar4 = unaff_x25;
    if (-1 < *(int *)(*(long *)(in_x9 + 0x78) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x25;
    }
    puVar3 = *(undefined8 **)(in_x9 + 0x80);
    uVar2 = *puVar3;
    pcVar6 = (code *)puVar3[2];
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
    (*pcVar6)(uVar2,puVar3,unaff_x27,unaff_x29 + -0x18);
    unaff_x26 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88))
                          (unaff_x26);
    if (unaff_x26 == 0) break;
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    (*(code *)puVar5[2])(*puVar5,puVar5,unaff_x26,0,unaff_x29 + -0x18);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    unaff_x27 = *(long *)(unaff_x29 + -0x18);
    pvVar1 = unaff_x21;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x70) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x24,pvVar1,unaff_x22);
    pvVar1 = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x78) + 0x28)) {
      pvVar1 = (void *)(unaff_x29 + -0x28);
    }
    memcpy(unaff_x25,pvVar1,unaff_x23);
    if (unaff_x27 == 0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking___ctor:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    in_x9 = *(long *)(lVar7 + 0xc0);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
  goto Meta_XR_MultiplayerBlocks_Shared_CustomMatchmaking___ctor;
}


