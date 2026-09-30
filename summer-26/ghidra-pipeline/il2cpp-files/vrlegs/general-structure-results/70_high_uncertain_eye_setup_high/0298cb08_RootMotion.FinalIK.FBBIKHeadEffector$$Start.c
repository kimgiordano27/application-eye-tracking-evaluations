/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector$$Start
ENTRY_POINT: 0298cb08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298cbcc) */
/* WARNING: Removing unreachable block (ram,0x0298cc38) */

void RootMotion_FinalIK_FBBIKHeadEffector__Start(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  long lVar5;
  char cStack0000000000000008;
  char cStack000000000000000c;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  uVar4 = *(undefined8 *)(unaff_x19 + 0x128);
  cStack0000000000000008 = '\0';
  FUN_027e0bd8(uVar4,&stack0x00000008,0);
  lVar5 = *(long *)(unaff_x19 + 0x128);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar3 = *(long *)PTR_DAT_03d07968;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(lVar5 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    if (0 < iVar1) {
      FUN_02793a34(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
  }
  if (cStack0000000000000008 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar4,0);
  }
  uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ccaef8);
  FUN_029b3e24(uVar4,0,0);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x138,uVar4);
  return;
}


