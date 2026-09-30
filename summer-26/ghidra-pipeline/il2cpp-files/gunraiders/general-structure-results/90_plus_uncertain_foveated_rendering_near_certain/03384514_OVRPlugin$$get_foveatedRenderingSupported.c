/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingSupported
ENTRY_POINT: 03384514
PROGRAM: gunraiders-libil2cpp.so
SCORE: 100
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_foveatedRenderingSupported(long param_1,undefined8 param_2)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int iVar6;
  undefined4 unaff_w23;
  int iVar7;
  int unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(param_1);
    }
    FUN_0324cf0c(unaff_w23,param_2,0);
    if (unaff_x21 == (long *)0x0) break;
    FUN_0315aa9c();
    iVar7 = 2;
    iVar6 = unaff_w22;
    while( true ) {
      while( true ) {
        unaff_w22 = iVar6 + 1;
        if (*(int *)(unaff_x20 + 0x10) <= unaff_w22) {
          if (unaff_x21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03384618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x21 + 0x168))();
            return;
          }
          goto LAB_0338461c;
        }
        sVar2 = FUN_0314e438();
        if (sVar2 != 0x20) break;
        bVar1 = iVar7 != 0;
        iVar7 = 0;
        iVar6 = unaff_w22;
        if (bVar1) {
          iVar7 = unaff_w25;
        }
      }
      uVar3 = FUN_0314e438();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar5 = FUN_0324ca78(uVar3,0);
      if ((uVar5 & 1) != 0) break;
      uVar4 = FUN_0314e438();
      if ((uVar4 & 0xffff) == (unaff_w19 & 0xffff)) {
        if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
        FUN_0315aa9c();
        iVar7 = 0;
        iVar6 = unaff_w22;
      }
      else {
        if (iVar7 == 3) {
          if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
          FUN_0315aa9c();
          FUN_0314e438();
        }
        else {
          FUN_0314e438();
          if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
        }
        FUN_0315aa9c();
        iVar7 = 1;
        iVar6 = unaff_w22;
      }
    }
    if ((iVar7 == 1) || (iVar7 == 3)) {
LAB_033844cc:
      if (unaff_x21 == (long *)0x0) break;
      FUN_0315aa9c();
    }
    else if ((iVar7 == 2) && ((unaff_w22 != 0 && (iVar6 + 2 < *(int *)(unaff_x20 + 0x10))))) {
      uVar4 = FUN_0314e438();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar5 = FUN_0324ca78(uVar4,0);
      if (((uVar4 & 0xffff) != (unaff_w19 & 0xffff)) && ((uVar5 & 1) == 0)) goto LAB_033844cc;
    }
    unaff_w23 = FUN_0314e438();
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*unaff_x27);
    }
    param_2 = FUN_03295500(0);
    param_1 = *unaff_x26;
  }
LAB_0338461c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


