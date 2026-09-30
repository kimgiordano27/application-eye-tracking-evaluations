/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol18$$WriteString
ENTRY_POINT: 028a9754
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


/* WARNING: Removing unreachable block (ram,0x028a9824) */

void ExitGames_Client_Photon_Protocol18__WriteString(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long lVar4;
  undefined8 in_stack_00000008;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (*(long *)(unaff_x22 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_02216b94(*(long *)(unaff_x22 + 0xb8),*unaff_x23,*(undefined8 *)PTR_DAT_03d01cd0);
  lVar4 = *(long *)(unaff_x22 + 0xb8);
  if (lVar4 != 0) {
    *unaff_x21 = *(undefined4 *)(lVar4 + 0x18);
    *unaff_x20 = *(undefined4 *)(unaff_x22 + 0xc0);
    lVar3 = *(long *)PTR_DAT_03cc0648;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
    }
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


