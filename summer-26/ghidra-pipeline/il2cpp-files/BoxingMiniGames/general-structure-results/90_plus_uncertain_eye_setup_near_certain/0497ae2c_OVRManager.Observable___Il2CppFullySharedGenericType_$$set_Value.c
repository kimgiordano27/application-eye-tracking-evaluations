/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$set_Value
ENTRY_POINT: 0497ae2c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>__set_Value(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    uVar3 = FUN_055b992c(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x2a0));
    if ((uVar3 & 1) != 0) {
      thunk_FUN_036aa1c8(PTR_DAT_079fdb88);
      uVar4 = thunk_FUN_0367fa58();
      uVar5 = thunk_FUN_036aa1c8(PTR_DAT_07a00918);
      uVar4 = FUN_05c8e390(uVar5,uVar4,0);
      thunk_FUN_036aa1c8(PTR_DAT_079f7680);
      uVar5 = thunk_FUN_0367fe20();
      FUN_05e177c8(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar5);
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0367c9fc();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
    if (lVar1 != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *unaff_x20;
      uVar5 = unaff_x20[1];
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      uVar3 = FUN_055b992c(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x2a8));
      if ((uVar3 & 1) == 0) {
        return;
      }
      FUN_0753bfb8(&PTR_DAT_079fd000);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


