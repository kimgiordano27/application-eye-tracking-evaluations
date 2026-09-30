/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 0693cf58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_positionTracked(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xf7a) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b6160);
    FUN_03a8a718(PTR_DAT_084b6168);
    FUN_03a8a718(PTR_DAT_084b6170);
    FUN_03a8a718(PTR_DAT_084b6178);
    FUN_03a8a718(PTR_DAT_084883a0);
    *(undefined1 *)(unaff_x21 + 0xf7a) = 1;
  }
  uVar2 = FUN_0693d17c(param_1,param_2 & 1);
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if ((((lVar4 == 0) || (*(long *)(lVar4 + 200) == 0)) ||
        (lVar5 = *(long *)(*(long *)(lVar4 + 200) + 0x40), lVar5 == 0)) ||
       ((lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0 ||
        (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)))) goto LAB_0693d178;
    if (0 < *(int *)(lVar5 + 0x18)) {
      lVar4 = FUN_04de82e0(lVar5,0,*(undefined8 *)PTR_DAT_084b6178);
      puVar1 = PTR_DAT_084883a0;
      if (lVar4 == 0) goto LAB_0693d178;
      lVar5 = *(long *)(lVar4 + 0x38);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0(uVar3,param_1,*(undefined8 *)PTR_DAT_084b6168,0);
      if (lVar5 == 0) goto LAB_0693d178;
      FUN_07cb2770(lVar5,uVar3,0);
      lVar4 = *(long *)(lVar4 + 0x40);
      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
      FUN_07cb26a0(uVar3,param_1,*(undefined8 *)PTR_DAT_084b6160,0);
      if (lVar4 == 0) goto LAB_0693d178;
      FUN_07cb2770(lVar4,uVar3,0);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_0693d178;
    }
    if (((*(long *)(lVar4 + 200) != 0) &&
        (lVar4 = *(long *)(*(long *)(lVar4 + 200) + 0x40), lVar4 != 0)) &&
       ((lVar4 = *(long *)(lVar4 + 0x58), lVar4 != 0 &&
        (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)))) {
      if (*(int *)(lVar4 + 0x18) < 1) goto LAB_0693d160;
      lVar4 = FUN_04de82e0(lVar4,0,*(undefined8 *)PTR_DAT_084b6178);
      puVar1 = PTR_DAT_084883a0;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x38);
        uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
        FUN_07cb26a0(uVar3,param_1,*(undefined8 *)PTR_DAT_084b6168,0);
        if (lVar5 != 0) {
          FUN_07cb2770(lVar5,uVar3,0);
          lVar4 = *(long *)(lVar4 + 0x40);
          uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
          FUN_07cb26a0(uVar3,param_1,*(undefined8 *)PTR_DAT_084b6160,0);
          if (lVar4 != 0) {
            FUN_07cb2770(lVar4,uVar3,0);
            goto LAB_0693d160;
          }
        }
      }
    }
LAB_0693d178:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_0693d160:
  return uVar2 & 1;
}


