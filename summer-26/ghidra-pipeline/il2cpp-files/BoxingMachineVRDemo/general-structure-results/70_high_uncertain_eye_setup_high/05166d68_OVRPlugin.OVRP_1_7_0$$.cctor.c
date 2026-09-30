/*
FUNCTION_NAME: OVRPlugin.OVRP_1_7_0$$.cctor
ENTRY_POINT: 05166d68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_7_0___cctor(void)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06782550);
  FUN_02d6084c(PTR_DAT_06780450);
  FUN_02d6084c(PTR_DAT_06780308);
  FUN_02d6084c(PTR_DAT_06780458);
  *(undefined1 *)(unaff_x25 + 0xe6f) = 1;
  uVar2 = FUN_050f0eb8();
  if ((uVar2 & 1) != 0) {
    thunk_FUN_02dc61f4(PTR_DAT_067826a8);
    uVar3 = FUN_050924a8();
    uVar4 = thunk_FUN_02dc61f4(PTR_DAT_067826b0);
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar3,uVar4);
  }
  cVar1 = *(char *)(unaff_x24 + 0x1a);
  uVar2 = FUN_051690ec();
  if (cVar1 == '\0') {
    if ((uVar2 & 1) != 0) {
      FUN_05169138();
    }
    FUN_050eb21c();
    uVar2 = FUN_050f1be4();
    if ((uVar2 & 1) != 0) {
      if (unaff_x23 != 0) {
        uVar3 = FUN_04e9195c();
        FUN_050eb21c(uVar3,0);
LAB_05166e84:
        if (*(int *)(*(long *)PTR_DAT_0677d900 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d900);
        }
        FUN_05169768();
        return;
      }
      goto LAB_05167050;
    }
    uVar2 = FUN_050f1be4();
    if ((uVar2 & 1) != 0) {
      uVar2 = thunk_FUN_04e8bd3c();
      if ((uVar2 & 1) == 0) {
        uVar2 = thunk_FUN_04e8bd3c();
        if (((((uVar2 & 1) != 0) || (uVar2 = thunk_FUN_04e8bd3c(), (uVar2 & 1) != 0)) ||
            (uVar2 = thunk_FUN_04e8bd3c(), (uVar2 & 1) != 0)) ||
           (uVar2 = thunk_FUN_04e8bd3c(), (uVar2 & 1) != 0)) {
          if ((unaff_x23 != 0) && (FUN_04e9195c(), unaff_x19 != (long *)0x0)) {
            (**(code **)(*unaff_x19 + 0x248))();
            goto LAB_05166e84;
          }
LAB_05167050:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
      }
      else {
        if ((unaff_x23 == 0) || (FUN_04e9195c(), unaff_x19 == (long *)0x0)) goto LAB_05167050;
        (**(code **)(*unaff_x19 + 0x248))();
      }
    }
  }
  else if ((uVar2 & 1) != 0) {
    if (unaff_x21 == 0) goto LAB_05167050;
    FUN_0509917c();
  }
  FUN_05169ae4();
  return;
}


