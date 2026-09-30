/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilLevel
ENTRY_POINT: 06946904
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_gpuUtilLevel(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084b6560);
  FUN_03a8a718(PTR_DAT_084b6558);
  *(undefined1 *)(unaff_x21 + 0xfcb) = 1;
  lVar3 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_04de7d48(lVar3,*unaff_x20);
  puVar2 = PTR_DAT_084b6570;
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)PTR_DAT_084b6570;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = 0;
        thunk_FUN_03afed3c(puVar4,0);
      }
      else {
        FUN_04de85b0(lVar3,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(lVar3 + 0x10);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x40);
      lVar7 = *(long *)puVar2;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_03afed3c();
        }
        else {
          FUN_04de85b0(lVar3,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar6 = *(long *)(lVar3 + 0x10);
        uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_03afed3c();
          }
          else {
            FUN_04de85b0(lVar3,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *(long *)(lVar3 + 0x10);
          uVar5 = *(undefined8 *)(unaff_x19 + 0x48);
          lVar7 = *(long *)puVar2;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          puVar2 = PTR_DAT_084b6568;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_03afed3c();
            }
            else {
              FUN_04de85b0(lVar3,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            }
            FUN_04de87c0(lVar3,*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)puVar2);
            FUN_04de87c0(lVar3,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)puVar2);
            return lVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


