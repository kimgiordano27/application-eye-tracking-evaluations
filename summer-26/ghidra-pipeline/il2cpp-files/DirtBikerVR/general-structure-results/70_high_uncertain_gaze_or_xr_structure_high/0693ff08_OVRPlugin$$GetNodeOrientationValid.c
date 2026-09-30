/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationValid
ENTRY_POINT: 0693ff08
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodeOrientationValid(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xf98) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08497840);
    FUN_03a8a718(PTR_DAT_08497850);
    FUN_03a8a718(PTR_DAT_084b6258);
    *(undefined1 *)(unaff_x21 + 0xf98) = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      FUN_04de8334(lVar3,0,param_2,*(undefined8 *)PTR_DAT_084b6258);
      return;
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *(long *)PTR_DAT_08497840;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_2;
        thunk_FUN_03afed3c(puVar2,param_2);
        return;
      }
      FUN_04de85b0(lVar3,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


