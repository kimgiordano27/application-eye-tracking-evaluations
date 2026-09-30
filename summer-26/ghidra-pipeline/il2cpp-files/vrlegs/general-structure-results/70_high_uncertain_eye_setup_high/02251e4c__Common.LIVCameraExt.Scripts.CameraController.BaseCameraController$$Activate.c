/*
FUNCTION_NAME: _Common.LIVCameraExt.Scripts.CameraController.BaseCameraController$$Activate
ENTRY_POINT: 02251e4c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


long _Common_LIVCameraExt_Scripts_CameraController_BaseCameraController__Activate(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  long lVar8;
  int iVar9;
  uint uVar10;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0x288));
  *(undefined1 *)(unaff_x21 + 0x2c3) = 1;
  lVar8 = *(long *)(unaff_x19 + 0x10);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  iVar4 = FUN_025bb698(0);
  if (lVar8 == 0) {
LAB_02251f44:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = *(uint *)(lVar8 + 0x18);
  if (0 < (int)uVar2) {
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = iVar4 / (int)uVar2;
    }
    iVar9 = 0;
    uVar10 = iVar4 - iVar3 * uVar2;
    do {
      if (uVar2 <= uVar10) {
LAB_02251f48:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar7 = *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_02251f44;
      thunk_FUN_01a4ad9c(lVar7,0);
      if (*(int *)(lVar7 + 0x18) < 1) {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
      }
      else {
        lVar6 = *(long *)(lVar7 + 0x10);
        uVar2 = *(int *)(lVar7 + 0x18) - 1;
        *(uint *)(lVar7 + 0x18) = uVar2;
        if (lVar6 == 0) goto LAB_02251f44;
        if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_02251f48;
        plVar5 = (long *)(lVar6 + (ulong)uVar2 * 8 + 0x20);
        lVar6 = *plVar5;
        *plVar5 = 0;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,0);
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar7,0);
        if (lVar6 != 0) {
          return lVar6;
        }
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      iVar9 = iVar9 + 1;
      uVar1 = 0;
      if (uVar10 + 1 != uVar2) {
        uVar1 = uVar10 + 1;
      }
      uVar10 = uVar1;
    } while (iVar9 < (int)uVar2);
  }
  return 0;
}


