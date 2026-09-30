/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_SuggestVirtualKeyboardLocation
ENTRY_POINT: 0281aa64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_74_0__ovrp_SuggestVirtualKeyboardLocation(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cfe630);
  FUN_01ab69ac(PTR_DAT_03cfe620);
  FUN_01ab69ac(PTR_DAT_03ce3c00);
  FUN_01ab69ac(PTR_DAT_03ce3c78);
  *(undefined1 *)(unaff_x19 + 0x39b) = 1;
  lVar1 = thunk_FUN_01a89e68(*unaff_x22);
  FUN_027b3d9c(lVar1,0);
  lVar2 = FUN_01ab6a94(*unaff_x23,1);
  if (lVar2 == 0) goto LAB_0281ac4c;
  if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_01a89d6c(), lVar3 == 0)) {
LAB_0281ac54:
    uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,0);
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0281ac50:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  *(long *)(lVar2 + 0x20) = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (unaff_x20 != 0) {
    lVar2 = FUN_0278a354();
    if (lVar2 == 0) {
      lVar2 = FUN_01ab6a94(*unaff_x23,1);
      if (lVar2 == 0) goto LAB_0281ac4c;
      if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_01a89d6c(), lVar3 == 0)) goto LAB_0281ac54;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0281ac50;
      *(long *)(lVar2 + 0x20) = unaff_x21;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar2 = FUN_0278a354();
    }
    uVar4 = FUN_02676f8c(lVar2,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_03cd8000 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    plVar5 = (long *)FUN_028553dc(0);
    if (plVar5 != (long *)0x0) {
      lVar3 = thunk_FUN_01a41d84(*(undefined8 *)
                                  (*plVar5 + (ulong)*(ushort *)(*(long *)PTR_DAT_03cfe628 + 0x50) *
                                             0x10 + 0x140));
      uVar6 = (**(code **)(lVar3 + 8))(plVar5,lVar2,lVar3);
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x10) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd9008);
        FUN_021de1ac(uVar6,lVar1,*(undefined8 *)PTR_DAT_03cfe630,0);
        return uVar6;
      }
    }
  }
LAB_0281ac4c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


