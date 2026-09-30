/*
FUNCTION_NAME: Fusion.NetworkString<__Il2CppFullySharedGenericStructType>$$Get
ENTRY_POINT: 0213a3d0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Fusion_NetworkString<__Il2CppFullySharedGenericStructType>__Get(void)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  undefined8 unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  while( true ) {
    uVar1 = FUN_02139a8c(unaff_x27);
    if ((uVar1 & 1) != 0) {
      memcpy(unaff_x23,unaff_x25,unaff_x21);
      memcpy(*(void **)(unaff_x29 + -0x48),unaff_x23,unaff_x21);
      if (*(long *)(*(long *)(unaff_x29 + -0x40) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *(undefined8 *)(unaff_x29 + -0x18) = unaff_x24;
    *(undefined1 *)(unaff_x29 + -0x1c) = 0;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x1c;
    *(undefined8 *)(unaff_x29 + -0x28) = unaff_x19;
    FUN_027e0bd8();
    if (*unaff_x26 == 0) break;
    lVar2 = FUN_02139510(*unaff_x26,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
    thunk_FUN_01a4b338(0);
    *unaff_x26 = lVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (*(char *)(unaff_x29 + -0x1c) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x18),0);
    }
    unaff_x27 = *unaff_x26;
    __src = unaff_x22;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x23,__src,unaff_x21);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


