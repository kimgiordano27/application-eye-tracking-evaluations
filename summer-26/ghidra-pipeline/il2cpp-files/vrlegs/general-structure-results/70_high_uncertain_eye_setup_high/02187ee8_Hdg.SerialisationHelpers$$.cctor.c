/*
FUNCTION_NAME: Hdg.SerialisationHelpers$$.cctor
ENTRY_POINT: 02187ee8
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


void Hdg_SerialisationHelpers___cctor(long *param_1)

{
  void *__src;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  long lVar5;
  long lVar6;
  long unaff_x29;
  
  lVar6 = *param_1;
  __cxa_end_catch();
  bVar1 = true;
  while( true ) {
    if (*(char *)(unaff_x29 + -0x14) != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x25,0);
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar6);
    }
    if (bVar1) break;
    lVar6 = *unaff_x24;
    thunk_FUN_01a4b338();
    __src = unaff_x20;
    if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x10);
    }
    memcpy(unaff_x23,__src,unaff_x22);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar4 = FUN_02079734(lVar6);
    if ((uVar4 & 1) != 0) break;
    unaff_x25 = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined1 *)(unaff_x29 + -0x14) = 0;
    FUN_027e0bd8(unaff_x25,unaff_x29 + -0x14,0);
    lVar5 = *unaff_x24;
    thunk_FUN_01a4b338();
    if (lVar6 == lVar5) {
      FUN_0207909c(lVar6,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb8));
      if (*(char *)(lVar6 + 0x19c) == '\0') {
        iVar2 = FUN_02079060(lVar6,*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8));
        if (*(int *)(*(long *)PTR_DAT_03cbdee0 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar3 = FUN_0276c214(iVar2 << 1,0x100000,0);
      }
      else {
        uVar3 = 0x20;
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0
         ) {
        FUN_01a46ff8();
      }
      lVar5 = thunk_FUN_01a89e68();
      FUN_02078f9c(lVar5,uVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10)
                  );
      *(long *)(lVar6 + 0x1a0) = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar6 + 0x1a0,lVar5);
      thunk_FUN_01a4b338();
      *unaff_x24 = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    }
    lVar6 = 0;
    bVar1 = false;
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


