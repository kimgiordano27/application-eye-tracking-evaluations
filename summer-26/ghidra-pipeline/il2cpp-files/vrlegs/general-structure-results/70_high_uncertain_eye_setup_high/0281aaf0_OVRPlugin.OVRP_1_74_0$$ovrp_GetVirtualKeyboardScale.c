/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetVirtualKeyboardScale
ENTRY_POINT: 0281aaf0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_GetVirtualKeyboardScale(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x20 != 0) {
    lVar1 = FUN_0278a354();
    if (lVar1 == 0) {
      lVar1 = FUN_01ab6a94(*unaff_x23,1);
      if (lVar1 == 0) goto LAB_0281ac4c;
      if ((unaff_x21 != 0) && (lVar2 = thunk_FUN_01a89d6c(), lVar2 == 0)) {
        uVar5 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,0);
      }
      if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(long *)(lVar1 + 0x20) = unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar1 = FUN_0278a354();
    }
    uVar3 = FUN_02676f8c(lVar1,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_03cd8000 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    plVar4 = (long *)FUN_028553dc(0);
    if (plVar4 != (long *)0x0) {
      lVar2 = thunk_FUN_01a41d84(*(undefined8 *)
                                  (*plVar4 + (ulong)*(ushort *)(*(long *)PTR_DAT_03cfe628 + 0x50) *
                                             0x10 + 0x140));
      uVar5 = (**(code **)(lVar2 + 8))(plVar4,lVar1,lVar2);
      if (unaff_x19 != 0) {
        *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar5 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9008);
        FUN_021de1ac();
        return uVar5;
      }
    }
  }
LAB_0281ac4c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


