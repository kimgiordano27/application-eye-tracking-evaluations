/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetMultimodalHandsControllersSupported
ENTRY_POINT: 01dbd304
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_86_0__ovrp_SetMultimodalHandsControllersSupported
               (long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0xa6c) & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    *(undefined1 *)(unaff_x22 + 0xa6c) = 1;
  }
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar3 = *(uint *)(param_2 + 0x38);
    thunk_FUN_00ffe618();
    if ((uVar3 & 0x1600000) == 0x1000000) {
      uVar3 = 0x10;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0x38);
      thunk_FUN_00ffe618();
      uVar3 = 0x11;
      if ((uVar2 & 0x600000) == 0x400000) {
        uVar3 = 0x12;
      }
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      if ((uVar1 >> (ulong)uVar3 & 1) != 0) {
        FUN_01db7214(lVar4,0);
        return;
      }
      uVar3 = *(uint *)(lVar4 + 0x38);
      thunk_FUN_00ffe618();
      if (((uVar3 & 0x600000) != 0x400000) && (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0)) {
        thunk_FUN_01022c14();
      }
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_1 + 0x20);
      thunk_FUN_0106e12c();
      if (((uVar1 >> 0x13 & 1) != 0) && ((param_3 & 1) != 0)) {
        FUN_01dbd1a8(lVar4,1);
        return;
      }
      FUN_01db7f40(lVar4,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


