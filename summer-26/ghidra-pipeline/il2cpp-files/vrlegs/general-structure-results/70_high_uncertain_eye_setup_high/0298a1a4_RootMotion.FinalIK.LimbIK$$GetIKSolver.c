/*
FUNCTION_NAME: RootMotion.FinalIK.LimbIK$$GetIKSolver
ENTRY_POINT: 0298a1a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298a2d0) */
/* WARNING: Removing unreachable block (ram,0x0298a2ec) */

bool RootMotion_FinalIK_LimbIK__GetIKSolver(ulong param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  char in_stack_00000008;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03d077f8);
    *(undefined1 *)(unaff_x19 + 0xcb5) = 1;
  }
  in_stack_00000008 = 0;
  if (param_3 != 0 && -1 < (int)param_4) {
    if (param_4 == 0) {
      *(undefined8 *)(param_3 + 0x10) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(param_3 + 0x10),0);
    }
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar2,&stack0x0000000c,0);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar3 = *(undefined8 *)(lVar1 + (ulong)param_4 * 8 + 0x20);
    in_stack_00000008 = '\0';
    FUN_027e0bd8(uVar3,&stack0x00000008,0);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(lVar1 + 0x18) <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar1 = *(long *)(lVar1 + (ulong)param_4 * 8 + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02093610(lVar1,param_3,*(undefined8 *)PTR_DAT_03d077f8);
    if (in_stack_00000008 != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
    }
  }
  return param_3 != 0 && -1 < (int)param_4;
}


