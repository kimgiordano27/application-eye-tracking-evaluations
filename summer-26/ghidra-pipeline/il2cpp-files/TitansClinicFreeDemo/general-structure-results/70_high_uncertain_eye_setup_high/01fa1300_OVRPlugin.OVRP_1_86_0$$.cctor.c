/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$.cctor
ENTRY_POINT: 01fa1300
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_86_0___cctor(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint unaff_w21;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if ((int)uVar1 < 1) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar12 = 0;
    uVar11 = 0;
    plVar9 = (long *)0x0;
    do {
      if (uVar1 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar10 = *(long **)(param_1 + (long)(int)uVar12 * 8 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_01fa14c4;
      uVar1 = FUN_01ef07cc(plVar10,0);
      uVar2 = FUN_01ef07cc(plVar10,0);
      if ((uVar1 & (unaff_w21 ^ 2)) == uVar2) {
        uVar3 = FUN_01ee3bf4(plVar9,0,0);
        if ((uVar3 & 1) != 0) {
          lVar4 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
          if (plVar9 == (long *)0x0) goto LAB_01fa14c4;
          lVar5 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          if (lVar4 == lVar5) goto LAB_01fa14cc;
          lVar4 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
          if (lVar4 == 0) goto LAB_01fa14c4;
          uVar3 = FUN_01f805b8(lVar4,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (lVar4 == 0) goto LAB_01fa14c4;
            uVar1 = FUN_01f805b8(lVar4,0);
            uVar11 = uVar11 | uVar1;
          }
        }
        uVar3 = FUN_01ee3bc8(plVar9,0,0);
        if ((uVar3 & 1) == 0) {
          plVar6 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
          if ((plVar9 == (long *)0x0) ||
             (uVar7 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0)),
             plVar6 == (long *)0x0)) goto LAB_01fa14c4;
          uVar3 = (**(code **)(*plVar6 + 0x278))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x280));
          if ((uVar3 & 1) == 0) {
            lVar4 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
            if (lVar4 == 0) goto LAB_01fa14c4;
            uVar3 = FUN_01f805b8(lVar4,0);
            if ((uVar3 & 1) == 0) goto LAB_01fa1460;
          }
        }
        plVar9 = plVar10;
      }
LAB_01fa1460:
      uVar1 = *(uint *)(param_1 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar1);
    if ((uVar11 & 1) != 0) {
      if ((plVar9 == (long *)0x0) ||
         (lVar4 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0)),
         lVar4 == 0)) {
LAB_01fa14c4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      uVar3 = FUN_01f805b8(lVar4,0);
      if ((uVar3 & 1) != 0) {
LAB_01fa14cc:
        uVar7 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
        thunk_FUN_01279b34(PTR_DAT_027bc458);
        uVar8 = thunk_FUN_0124bba8();
        FUN_01ee31d4(uVar8,uVar7,0);
        uVar7 = thunk_FUN_01279b34(PTR_DAT_027c2018);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar8,uVar7);
      }
    }
  }
  return plVar9;
}


