/*
FUNCTION_NAME: FUN_075bf14c
ENTRY_POINT: 075bf14c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_7
*/


long * FUN_075bf14c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar2 = PTR_DAT_07d95df8;
  if ((DAT_0826e70f & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_126_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07db06c8);
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(PTR_DAT_07d95df8);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(OVRPlugin_OVRP_1_127_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d92630);
    FUN_0373b518(PTR_DAT_07d9acd8);
    DAT_0826e70f = 1;
  }
  puVar3 = PTR_DAT_07d86548;
  uVar13 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  plVar6 = (long *)FUN_062519f8(uVar13,0);
  puVar5 = OVRPlugin_OVRP_1_126_0_TypeInfo;
  if (param_3 != 0) {
    uVar7 = FUN_060c08a0(*(undefined8 *)(param_3 + 0x18),0);
    if ((uVar7 & 1) == 0) {
      uVar13 = *(undefined8 *)(param_3 + 0x18);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      plVar6 = (long *)FUN_0373ba30(uVar13,0,*(undefined8 *)PTR_DAT_07d9acd8,
                                    *(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo);
      if (plVar6 == (long *)0x0) {
        uVar13 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        plVar6 = (long *)FUN_062519f8(uVar13,0);
      }
    }
    puVar4 = PTR_DAT_07d92630;
    uVar13 = *(undefined8 *)puVar5;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar8 = (long *)FUN_062519f8(uVar13,0);
    plVar9 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar4,1);
    if (plVar9 != (long *)0x0) {
      if ((plVar6 != (long *)0x0) &&
         (lVar10 = thunk_FUN_037787d0(plVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
      goto LAB_075bf5b8;
      if ((int)plVar9[3] == 0) goto LAB_075bf5b4;
      plVar9[4] = (long)plVar6;
      thunk_FUN_037aeb94(plVar9 + 4,plVar6);
      if (plVar8 != (long *)0x0) {
        lVar10 = (**(code **)(*plVar8 + 0x978))(plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x980));
        plVar8 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar4,3);
        lVar11 = FUN_062519f8(*(undefined8 *)puVar2,0);
        if (plVar8 != (long *)0x0) {
          if ((lVar11 != 0) &&
             (lVar12 = thunk_FUN_037787d0(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
LAB_075bf5b8:
            uVar13 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar13,0);
          }
          puVar2 = PTR_DAT_07db06c8;
          if ((int)plVar8[3] != 0) {
            plVar8[4] = lVar11;
            thunk_FUN_037aeb94(plVar8 + 4,lVar11);
            lVar11 = FUN_062519f8(*(undefined8 *)puVar2,0);
            if ((lVar11 != 0) &&
               (lVar12 = thunk_FUN_037787d0(lVar11,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0))
            goto LAB_075bf5b8;
            if (1 < *(uint *)(plVar8 + 3)) {
              plVar8[5] = lVar11;
              thunk_FUN_037aeb94(plVar8 + 5,lVar11);
              if ((plVar6 != (long *)0x0) &&
                 (lVar11 = thunk_FUN_037787d0(plVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0))
              goto LAB_075bf5b8;
              if (2 < *(uint *)(plVar8 + 3)) {
                plVar8[6] = (long)plVar6;
                thunk_FUN_037aeb94(plVar8 + 6,plVar6);
                puVar2 = PTR_DAT_07d86398;
                if (lVar10 != 0) {
                  lVar10 = FUN_0625d154(lVar10,plVar8,0);
                  lVar11 = *(long *)(param_3 + 0x10);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_03798b70(*(long *)puVar2);
                  }
                  uVar7 = FUN_075aa744(lVar11,0,0);
                  if ((uVar7 & 1) != 0) {
                    if ((lVar11 == 0) ||
                       (uVar13 = thunk_FUN_0374b7cc(lVar11,0), plVar6 == (long *)0x0))
                    goto LAB_075bf5b0;
                    uVar7 = (**(code **)(*plVar6 + 0x2a8))
                                      (plVar6,uVar13,*(undefined8 *)(*plVar6 + 0x2b0));
                    if ((uVar7 & 1) == 0) {
                      lVar11 = 0;
                    }
                  }
                  plVar6 = (long *)RootMotion_FinalIK_Finger___ctor
                                             (*(undefined8 *)PTR_DAT_07d882c0,3);
                  if (plVar6 != (long *)0x0) {
                    if ((param_1 != 0) &&
                       (lVar12 = thunk_FUN_037787d0(param_1,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar12 == 0)) goto LAB_075bf5b8;
                    if ((int)plVar6[3] != 0) {
                      plVar6[4] = param_1;
                      thunk_FUN_037aeb94(plVar6 + 4,param_1);
                      if ((param_2 != 0) &&
                         (lVar12 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar12 == 0)) goto LAB_075bf5b8;
                      if (1 < *(uint *)(plVar6 + 3)) {
                        plVar6[5] = param_2;
                        thunk_FUN_037aeb94(plVar6 + 5,param_2);
                        if ((lVar11 != 0) &&
                           (lVar12 = thunk_FUN_037787d0(lVar11,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar12 == 0)) goto LAB_075bf5b8;
                        if (2 < *(uint *)(plVar6 + 3)) {
                          plVar6[6] = lVar11;
                          thunk_FUN_037aeb94(plVar6 + 6,lVar11);
                          if (lVar10 != 0) {
                            plVar6 = (long *)FUN_06173f54(lVar10,plVar6,0);
                            if (plVar6 != (long *)0x0) {
                              bVar1 = *(byte *)(*(long *)OVRPlugin_OVRP_1_125_0_TypeInfo + 0x130);
                              if (*(byte *)(*plVar6 + 0x130) < bVar1) {
                                plVar6 = (long *)0x0;
                              }
                              else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8)
                                       != *(long *)OVRPlugin_OVRP_1_125_0_TypeInfo) {
                                plVar6 = (long *)0x0;
                              }
                            }
                            return plVar6;
                          }
                          goto LAB_075bf5b0;
                        }
                      }
                    }
                    goto LAB_075bf5b4;
                  }
                }
                goto LAB_075bf5b0;
              }
            }
          }
LAB_075bf5b4:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
      }
    }
  }
LAB_075bf5b0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


