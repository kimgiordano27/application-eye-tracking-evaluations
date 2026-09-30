/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.SerializationUtils$$DeserializeFromString<__Il2CppFullySharedGenericType>
ENTRY_POINT: 04ffe850
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_SerializationUtils__DeserializeFromString<__Il2CppFullySharedGenericType>
               (void)

{
  undefined8 uVar1;
  void *__src;
  long lVar2;
  void *unaff_x19;
  long unaff_x20;
  ulong __n;
  long unaff_x25;
  long unaff_x29;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x38);
  __n = (ulong)*(uint *)((*(undefined8 **)(unaff_x20 + 0x38))[1] + 0xfc);
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar1 = FUN_07186ef4(uVar1,0);
  if (*(int *)(*(long *)PTR_DAT_091addc0 + 0xe0) == 0) {
    thunk_FUN_03db619c(*(long *)PTR_DAT_091addc0);
  }
  uVar1 = FUN_041255e0(uVar1);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03d8f26c(lVar2);
  }
  __src = (void *)FUN_03d2d438(uVar1,lVar2,(long)&stack0x00000000 - (__n + 0xf & 0x1fffffff0));
  memcpy(unaff_x19,__src,__n);
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


