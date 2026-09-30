/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingSupported
ENTRY_POINT: 03384588
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


void OVRPlugin__get_fixedFoveatedRenderingSupported(void)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  
  while (iVar1 = unaff_w22 + 1, iVar1 < *(int *)(unaff_x20 + 0x10)) {
    sVar3 = FUN_0314e438();
    if (sVar3 == 0x20) {
      bVar2 = unaff_w24 != 0;
      unaff_w24 = 0;
      unaff_w22 = iVar1;
      if (bVar2) {
        unaff_w24 = unaff_w25;
      }
    }
    else {
      uVar4 = FUN_0314e438();
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*unaff_x26);
      }
      uVar6 = FUN_0324ca78(uVar4,0);
      if ((uVar6 & 1) == 0) {
        uVar5 = FUN_0314e438();
        if ((uVar5 & 0xffff) == (unaff_w19 & 0xffff)) {
          if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
          FUN_0315aa9c();
          unaff_w24 = 0;
          unaff_w22 = iVar1;
        }
        else {
          if (unaff_w24 == 3) {
            if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
            FUN_0315aa9c();
            FUN_0314e438();
          }
          else {
            FUN_0314e438();
            if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
          }
          FUN_0315aa9c();
          unaff_w24 = 1;
          unaff_w22 = iVar1;
        }
      }
      else {
        if ((unaff_w24 == 1) || (unaff_w24 == 3)) {
LAB_033844cc:
          if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
          FUN_0315aa9c();
        }
        else if ((unaff_w24 == 2) && ((iVar1 != 0 && (unaff_w22 + 2 < *(int *)(unaff_x20 + 0x10)))))
        {
          uVar5 = FUN_0314e438();
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*unaff_x26);
          }
          uVar6 = FUN_0324ca78(uVar5,0);
          if (((uVar5 & 0xffff) != (unaff_w19 & 0xffff)) && ((uVar6 & 1) == 0)) goto LAB_033844cc;
        }
        uVar4 = FUN_0314e438();
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x27);
        }
        uVar7 = FUN_03295500(0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*unaff_x26);
        }
        FUN_0324cf0c(uVar4,uVar7,0);
        if (unaff_x21 == (long *)0x0) goto LAB_0338461c;
        FUN_0315aa9c();
        unaff_w24 = 2;
        unaff_w22 = iVar1;
      }
    }
  }
  if (unaff_x21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03384618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x21 + 0x168))();
    return;
  }
LAB_0338461c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


