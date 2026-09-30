/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_66
ENTRY_POINT: 01dc3860
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__819_66(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  long unaff_x19;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x19 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar2 = *(uint *)(unaff_x19 + 0x20);
  iVar1 = *(int *)(param_2 + 0x10);
                    /* try { // try from 01dc3880 to 01ec394b has its CatchHandler @ 01dc3674 */
  if ((int)(iVar1 + uVar2) < *(int *)(lVar5 + 0x18)) {
    if (iVar1 < 3) {
      if (0 < iVar1) {
        uVar3 = FUN_01c49538(param_2,0,0);
        if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_01dc3948:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *(undefined2 *)(lVar5 + (long)(int)uVar2 * 2 + 0x20) = uVar3;
        if (1 < iVar1) {
          uVar3 = FUN_01c49538(param_2,1,0);
          if (*(uint *)(lVar5 + 0x18) <= uVar2 + 1) goto LAB_01dc3948;
          *(undefined2 *)(lVar5 + (long)(int)(uVar2 + 1) * 2 + 0x20) = uVar3;
        }
      }
    }
    else {
      iVar4 = thunk_FUN_00fda4e8(0);
      if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_01dc3948;
      FUN_01c512d0(lVar5 + (long)(int)uVar2 * 2 + 0x20,param_2 + iVar4,iVar1,0);
    }
    *(uint *)(unaff_x19 + 0x20) = iVar1 + uVar2;
  }
  else {
    FUN_01dca940();
  }
  return;
}


