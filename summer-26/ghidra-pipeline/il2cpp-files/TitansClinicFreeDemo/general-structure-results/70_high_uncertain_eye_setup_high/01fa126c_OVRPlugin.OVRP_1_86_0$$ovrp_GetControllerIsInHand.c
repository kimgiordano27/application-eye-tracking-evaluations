/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_GetControllerIsInHand
ENTRY_POINT: 01fa126c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin_OVRP_1_86_0__ovrp_GetControllerIsInHand
                 (undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uStack0000000000000004;
  long lStack0000000000000008;
  
  lStack0000000000000008 = param_2;
  if ((DAT_0293df6c & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    DAT_0293df6c = 1;
  }
  uStack0000000000000004 = 0;
  if (param_2 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar8 = thunk_FUN_0124bba8();
    FUN_01e7e374(uVar8,0);
    uVar9 = thunk_FUN_01279b34(PTR_DAT_027c2018);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar8,uVar9);
  }
  if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f9e230(param_3,&stack0x00000008,&stack0x00000004);
  lVar3 = FUN_01f9ff08(param_1,lStack0000000000000008,param_3,0,param_1);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if ((int)uVar1 < 1) {
      plVar10 = (long *)0x0;
    }
    else {
      uVar13 = 0;
      uVar12 = 0;
      plVar10 = (long *)0x0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        plVar11 = *(long **)(lVar3 + (long)(int)uVar13 * 8 + 0x20);
        if (plVar11 == (long *)0x0) goto LAB_01fa14c4;
        uVar1 = FUN_01ef07cc(plVar11,0);
        uVar2 = FUN_01ef07cc(plVar11,0);
        if ((uVar1 & (param_3 ^ 2)) == uVar2) {
          uVar4 = FUN_01ee3bf4(plVar10,0,0);
          if ((uVar4 & 1) != 0) {
            lVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            if (plVar10 == (long *)0x0) goto LAB_01fa14c4;
            lVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (lVar5 == lVar6) goto LAB_01fa14cc;
            lVar5 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
            if (lVar5 == 0) goto LAB_01fa14c4;
            uVar4 = FUN_01f805b8(lVar5,0);
            if ((uVar4 & 1) != 0) {
              lVar5 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (lVar5 == 0) goto LAB_01fa14c4;
              uVar1 = FUN_01f805b8(lVar5,0);
              uVar12 = uVar12 | uVar1;
            }
          }
          uVar4 = FUN_01ee3bc8(plVar10,0,0);
          if ((uVar4 & 1) == 0) {
            plVar7 = (long *)(**(code **)(*plVar11 + 0x1b8))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            if ((plVar10 == (long *)0x0) ||
               (uVar8 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0)),
               plVar7 == (long *)0x0)) goto LAB_01fa14c4;
            uVar4 = (**(code **)(*plVar7 + 0x278))(plVar7,uVar8,*(undefined8 *)(*plVar7 + 0x280));
            if ((uVar4 & 1) == 0) {
              lVar5 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              if (lVar5 == 0) goto LAB_01fa14c4;
              uVar4 = FUN_01f805b8(lVar5,0);
              if ((uVar4 & 1) == 0) goto LAB_01fa1460;
            }
          }
          plVar10 = plVar11;
        }
LAB_01fa1460:
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
      if ((uVar12 & 1) != 0) {
        if ((plVar10 == (long *)0x0) ||
           (lVar3 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0)),
           lVar3 == 0)) goto LAB_01fa14c4;
        uVar4 = FUN_01f805b8(lVar3,0);
        if ((uVar4 & 1) != 0) {
LAB_01fa14cc:
          uVar8 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar9 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar9,uVar8,0);
          uVar8 = thunk_FUN_01279b34(PTR_DAT_027c2018);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar9,uVar8);
        }
      }
    }
    return plVar10;
  }
LAB_01fa14c4:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


