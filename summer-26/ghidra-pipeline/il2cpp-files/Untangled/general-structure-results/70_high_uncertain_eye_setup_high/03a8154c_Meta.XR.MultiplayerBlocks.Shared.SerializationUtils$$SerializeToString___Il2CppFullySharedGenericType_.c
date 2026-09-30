/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$SerializeToString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 03a8154c
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__SerializeToString<__Il2CppFullySharedGenericType>
               (void)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  size_t unaff_x22;
  void *unaff_x24;
  int unaff_w26;
  void *unaff_x28;
  long unaff_x29;
  
  FUN_02f08988();
  if (*(int *)(unaff_x29 + -0x10) < unaff_w26) {
    bVar2 = false;
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x38);
    lVar4 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
      lVar5 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_02f08988(lVar4,*(undefined8 *)(lVar5 + 0x30));
    uVar1 = *(undefined8 *)(unaff_x29 + -0x10);
    memcpy(unaff_x28,*(void **)(unaff_x29 + -0x18),unaff_x22);
    memcpy(unaff_x24,unaff_x28,unaff_x22);
    lVar5 = *(long *)(unaff_x19 + 0x38);
    lVar4 = *(long *)(lVar5 + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02eea768();
      lVar5 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_02f08988(lVar4,*(undefined8 *)(lVar5 + 0x38));
    iVar3 = FUN_060a4f5c(uVar1,unaff_w26,*(undefined8 *)(unaff_x29 + -0x10),unaff_w26,0);
    bVar2 = iVar3 == 0;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


