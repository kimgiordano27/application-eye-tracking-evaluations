/*
FUNCTION_NAME: Fusion.NetworkString<__Il2CppFullySharedGenericStructType>$$op_Equality
ENTRY_POINT: 0213a38c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Fusion_NetworkString<__Il2CppFullySharedGenericStructType>__op_Equality(void)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  undefined8 unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  pvVar1 = unaff_x22;
  if (-1 < *(int *)(*(long *)(*unaff_x28 + 0x30) + 0x28)) {
    pvVar1 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x23,pvVar1,unaff_x21);
  if (unaff_x27 != 0) {
    do {
      uVar2 = FUN_02139a8c(unaff_x27);
      if ((uVar2 & 1) != 0) {
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
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x18;
      FUN_027e0bd8();
      if (*unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar3 = FUN_02139510(*unaff_x26,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
      thunk_FUN_01a4b338(0);
      *unaff_x26 = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (*(char *)(unaff_x29 + -0x1c) != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(*(undefined8 *)(unaff_x29 + -0x18),0);
      }
      unaff_x27 = *unaff_x26;
      pvVar1 = unaff_x22;
      if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30) + 0x28)) {
        pvVar1 = (void *)(unaff_x29 + -0x10);
      }
      memcpy(unaff_x23,pvVar1,unaff_x21);
    } while (unaff_x27 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


