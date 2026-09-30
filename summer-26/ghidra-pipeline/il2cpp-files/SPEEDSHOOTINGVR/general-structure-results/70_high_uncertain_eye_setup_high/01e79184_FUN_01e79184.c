/*
FUNCTION_NAME: FUN_01e79184
ENTRY_POINT: 01e79184
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01e79184(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_0234c2e8;
  if ((DAT_0247e1e7 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0235f1c8);
    FUN_00fdc2e4(PTR_DAT_0235f1d0);
    FUN_00fdc2e4(PTR_DAT_0235f1d8);
    FUN_00fdc2e4(PTR_DAT_0235f1e0);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_02353f50);
    DAT_0247e1e7 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = FUN_01d675a0(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_0235f1d8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar3 = FUN_01eb06cc(0);
    if (lVar3 == 0) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar3 = *(long *)puVar1;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8) =
           *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x23a8);
      thunk_FUN_0106e12c();
    }
    else {
      lVar3 = FUN_01c530dc(lVar3,0x2d,0,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      uVar9 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_02353f50);
      FUN_01d67334(uVar5,uVar9,0);
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar3 = *(long *)puVar1;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      *puVar6 = uVar5;
      thunk_FUN_0106e12c(puVar6,uVar5);
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_0235f1d0;
    lVar8 = *(long *)PTR_DAT_0235f1d0;
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar8);
      lVar8 = *(long *)puVar2;
    }
    uVar4 = FUN_01d675a0(uVar5,**(undefined8 **)(lVar8 + 0xb8),0);
    puVar2 = PTR_DAT_0235f1c8;
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)PTR_DAT_0235f1c8;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar3 = *(long *)puVar2;
      }
      lVar8 = *(long *)puVar1;
      uVar5 = **(undefined8 **)(lVar3 + 0xb8);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar8);
        lVar8 = *(long *)puVar1;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
      *puVar6 = uVar5;
      thunk_FUN_0106e12c(puVar6,uVar5);
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar1;
    }
    uVar4 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType
                      (*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),
                       *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x23a8),0);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar3 = *(long *)puVar1;
      }
      puVar2 = PTR_DAT_0235f1e0;
      lVar8 = *(long *)PTR_DAT_0235f1e0;
      uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar8);
        lVar8 = *(long *)puVar2;
      }
      uVar4 = OVRManager__OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency
                        (uVar5,**(undefined8 **)(lVar8 + 0xb8),0);
      if ((uVar4 & 1) != 0) {
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0234bc48);
        lVar3 = FUN_00fdc388(uVar5,5);
        if (lVar3 == 0) {
LAB_01e79434:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar5 = thunk_FUN_010303a8(PTR_DAT_0235f1e8);
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = uVar5;
          thunk_FUN_0106e12c();
          lVar8 = thunk_FUN_010303a8(PTR_DAT_0234c2e8);
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar8 = thunk_FUN_010303a8(PTR_DAT_0234c2e8);
          plVar7 = (long *)**(long **)(lVar8 + 0xb8);
          if (plVar7 == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          if (1 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x28) = uVar5;
            thunk_FUN_0106e12c((undefined8 *)(lVar3 + 0x28));
            uVar5 = thunk_FUN_010303a8(PTR_DAT_0235f1f0);
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) = uVar5;
              thunk_FUN_0106e12c();
              lVar8 = thunk_FUN_010303a8(PTR_DAT_0234c2e8);
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              lVar8 = thunk_FUN_010303a8(PTR_DAT_0234c2e8);
              plVar7 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
              if (plVar7 == (long *)0x0) goto LAB_01e79434;
              uVar5 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
              if (3 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x38) = uVar5;
                thunk_FUN_0106e12c();
                uVar5 = thunk_FUN_010303a8(PTR_DAT_0235f1f8);
                FUN_00e5e2dc(lVar3,4,uVar5);
                uVar5 = FUN_01c515a0(lVar3,0);
                thunk_FUN_010303a8(PTR_DAT_0234cf18);
                uVar9 = thunk_FUN_010400dc();
                FUN_01d592a0(uVar9,uVar5,0);
                uVar5 = thunk_FUN_010303a8(PTR_DAT_0235f200);
                    /* WARNING: Subroutine does not return */
                FUN_00fdc400(uVar9,uVar5);
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
    }
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar3 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
}


