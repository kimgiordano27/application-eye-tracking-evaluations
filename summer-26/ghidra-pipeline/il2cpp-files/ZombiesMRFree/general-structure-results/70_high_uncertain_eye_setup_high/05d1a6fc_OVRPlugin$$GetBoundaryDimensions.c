/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryDimensions
ENTRY_POINT: 05d1a6fc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryDimensions(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8748);
    FUN_02fe925c(PTR_DAT_06fb89a0);
    *(undefined1 *)(unaff_x20 + 0x8b3) = 1;
  }
  lVar1 = thunk_FUN_0301080c(*unaff_x21);
  FUN_05d123a4();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x138);
    thunk_FUN_03048534();
    if (*(long *)(param_2 + 0xd0) != 0) {
      lVar3 = *(long *)(param_2 + 0x170);
      uVar2 = FUN_068f5d7c(*(long *)(param_2 + 0xd0),0);
      if (lVar3 != 0) {
        FUN_05d17444(lVar3,uVar2,1,0,lVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


