/*
FUNCTION_NAME: OVRPlugin$$SetExternalLayerDynresEnabled
ENTRY_POINT: 01d967d0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetExternalLayerDynresEnabled(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0xce0));
  FUN_00fdc2e4(PTR_DAT_0234bc58);
  FUN_00fdc2e4(PTR_DAT_02359a70);
  *(undefined1 *)(unaff_x21 + 0x89b) = 1;
  if (unaff_x20 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_0234d108);
    FUN_01c5e120(uVar3,uVar5,0);
  }
  else {
    uVar5 = *(undefined8 *)PTR_DAT_02352a88;
    if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01d5e86c(uVar5,0);
    plVar2 = (long *)FUN_01c9f7dc();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar4 = *plVar2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_0234bce0 + 0x130);
    if ((*(byte *)(lVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0234bce0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
    lVar4 = (**(code **)(lVar4 + 0x7d8))(plVar2,*(undefined8 *)(lVar4 + 0x7e0));
    *unaff_x19 = lVar4;
    if (lVar4 != 0) {
      return;
    }
    thunk_FUN_010303a8(PTR_DAT_0234d110);
    uVar3 = thunk_FUN_010400dc();
    uVar5 = thunk_FUN_010303a8(PTR_DAT_02359a20);
    FUN_01c96740(uVar3,uVar5,0);
  }
  uVar5 = thunk_FUN_010303a8(PTR_DAT_02359a78);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar5);
}


