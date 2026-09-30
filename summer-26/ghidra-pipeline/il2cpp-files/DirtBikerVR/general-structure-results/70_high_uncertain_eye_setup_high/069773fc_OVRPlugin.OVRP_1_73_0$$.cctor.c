/*
FUNCTION_NAME: OVRPlugin.OVRP_1_73_0$$.cctor
ENTRY_POINT: 069773fc
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


void OVRPlugin_OVRP_1_73_0___cctor(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long unaff_x19;
  undefined8 *puVar6;
  undefined8 *unaff_x21;
  
  uVar1 = FUN_07c9e200();
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
  FUN_07c9d2fc(lVar2,*unaff_x21,0);
  if (lVar2 != 0) {
    lVar3 = FUN_07c9c69c(lVar2,0);
    uVar4 = FUN_07c98f88();
    if (lVar3 != 0) {
      FUN_07cacc78(lVar3,uVar4,0);
      lVar3 = FUN_07c9c69c(lVar2,0);
      if (lVar3 != 0) {
        FUN_07cab7ec(0,lVar3,0);
        lVar3 = FUN_07c9c69c(lVar2,0);
        if (DAT_08974d8a == '\0') {
          FUN_03a8a718(PTR_DAT_08486860);
          DAT_08974d8a = '\x01';
        }
        if (lVar3 != 0) {
          puVar5 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
          FUN_07cac71c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar3,0);
          lVar3 = *(long *)(unaff_x19 + 0x30);
          uVar4 = FUN_07c9c69c(lVar2,0);
          if (lVar3 != 0) {
            puVar6 = (undefined8 *)(lVar3 + 0x28);
            *puVar6 = uVar4;
            thunk_FUN_03afed3c(puVar6,uVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


