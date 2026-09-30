/*
FUNCTION_NAME: OVRManager$$get_vsyncCount
ENTRY_POINT: 069267b8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_vsyncCount(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03a8a718(PTR_DAT_084b58f8);
  FUN_03a8a718(PTR_DAT_084b5900);
  FUN_03a8a718(PTR_DAT_084b58d8);
  *(undefined1 *)(unaff_x20 + 0xec7) = 1;
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_07cb2910(*(long *)(unaff_x19 + 0x50),0);
    puVar2 = PTR_DAT_084b58d8;
    if (*(char *)(unaff_x19 + 0x30) == '\0') {
      return;
    }
    lVar3 = *(long *)PTR_DAT_084b58d8;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar3 = *(long *)puVar2;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar4 = FUN_04de894c();
      if ((uVar4 & 1) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_06926324();
      lVar3 = **(long **)(*(long *)puVar2 + 0xb8);
      if (lVar3 != 0) {
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x19;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar3);
          }
          uVar6 = FUN_06926324();
          lVar3 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          if (lVar3 != 0) {
            FUN_059fbb6c(lVar3,uVar5,uVar6,*(undefined8 *)PTR_DAT_084b5900);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


