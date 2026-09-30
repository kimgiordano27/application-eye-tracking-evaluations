/*
FUNCTION_NAME: FUN_053d0854
ENTRY_POINT: 053d0854
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_10
*/


undefined8 FUN_053d0854(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
                    /* try { // try from 053d0864 to 054d086b has its CatchHandler @ 053d09b8 */
  if ((DAT_066d09bc & 1) == 0) {
                    /* try { // try from 053d087c to 054d0893 has its CatchHandler @ 053d09c8 */
    FUN_02b3c81c(PTR_DAT_06322478);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(OVRPlugin_OVRP_1_127_0_TypeInfo);
                    /* try { // try from 053d08a0 to 054d08a7 has its CatchHandler @ 053d09d0 */
    FUN_02b3c81c(OVRPlugin_OVRP_1_128_0_TypeInfo);
                    /* try { // try from 053d08b0 to 054d08bf has its CatchHandler @ 053d09cc */
    FUN_02b3c81c(OVRPlugin_OVRP_1_129_0_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_0_1_3_TypeInfo);
    FUN_02b3c81c(OVRPlugin_OVRP_1_12_0_TypeInfo);
    DAT_066d09bc = 1;
  }
  puVar2 = OVRPlugin_OVRP_0_1_3_TypeInfo;
  if (param_2 != (long *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    uVar5 = thunk_FUN_04c08854(uVar4,*(undefined8 *)puVar2,0);
    if ((uVar5 & 1) == 0) {
      uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      uVar5 = thunk_FUN_04c08854(uVar4,*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    puVar2 = PTR_DAT_06313048;
    uVar5 = FUN_04cb9ca0(*(undefined8 *)(param_1 + 0x78),0,0);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,3);
      if (plVar6 == (long *)0x0) goto LAB_053d0d30;
      lVar7 = thunk_FUN_02b79548(param_2,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar7 == 0) goto LAB_053d0d24;
      if ((int)plVar6[3] == 0) goto LAB_053d0d20;
      plVar6[4] = (long)param_2;
      thunk_FUN_02bb0e9c(plVar6 + 4,param_2);
      lVar7 = *(long *)(param_1 + 0x78);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_053d0d24;
      if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_053d0d20;
      plVar6[5] = lVar7;
      thunk_FUN_02bb0e9c(plVar6 + 5,lVar7);
      uVar4 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      lVar7 = FUN_053d6158(uVar4,0);
      if ((lVar7 != 0) &&
         (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
      goto LAB_053d0d24;
      if (*(uint *)(plVar6 + 3) < 3) goto LAB_053d0d20;
      plVar6[6] = lVar7;
      thunk_FUN_02bb0e9c(plVar6 + 6,lVar7);
      uVar4 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_12_0_TypeInfo,plVar6,0);
      FUN_053e3650(param_1,uVar4,0);
    }
    puVar3 = PTR_DAT_06322478;
    uVar4 = (**(code **)(*param_2 + 0x3d8))(param_2,*(undefined8 *)(*param_2 + 0x3e0));
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)puVar3);
    }
    uVar9 = FUN_053ee9f8(0);
    puVar1 = PTR_DAT_06312310;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar5 = FUN_04d94540(uVar4,uVar9,0);
    if ((uVar5 & 1) == 0) {
      if ((param_3 != 0) && (*(int *)(param_3 + 0x18) == 1)) {
        plVar6 = *(long **)(param_3 + 0x20);
        if (plVar6 == (long *)0x0) goto LAB_053d0d30;
        uVar4 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)puVar3);
        }
        uVar9 = FUN_053efa38(0);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)(puVar1 + 0xe0));
        }
        uVar5 = FUN_04d94540(uVar4,uVar9,0);
        if ((uVar5 & 1) == 0) {
          return 1;
        }
      }
      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,3);
      uVar4 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      lVar7 = FUN_053d6158(uVar4,0);
      if (plVar6 != (long *)0x0) {
        if ((lVar7 == 0) ||
           (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 != 0)) {
          if ((int)plVar6[3] != 0) {
            plVar6[4] = lVar7;
            thunk_FUN_02bb0e9c(plVar6 + 4,lVar7);
            lVar7 = thunk_FUN_02b79548(param_2,*(undefined8 *)(*plVar6 + 0x40));
            if (lVar7 == 0) goto LAB_053d0d24;
            if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
              plVar6[5] = (long)param_2;
              thunk_FUN_02bb0e9c(plVar6 + 5,param_2);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              lVar7 = FUN_053efa38(0);
              if ((lVar7 != 0) &&
                 (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0))
              goto LAB_053d0d24;
              puVar2 = OVRPlugin_OVRP_1_129_0_TypeInfo;
              if (2 < *(uint *)(plVar6 + 3)) {
                plVar6[6] = lVar7;
                thunk_FUN_02bb0e9c(plVar6 + 6,lVar7);
                uVar4 = FUN_0540ce80(*(undefined8 *)puVar2,plVar6,0);
                uVar9 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
                    /* WARNING: Subroutine does not return */
                FUN_053d7134(uVar4,uVar9,0);
              }
            }
          }
          goto LAB_053d0d20;
        }
        goto LAB_053d0d24;
      }
    }
    else {
      plVar6 = (long *)FUN_02b3c908(*(undefined8 *)puVar2,2);
      uVar4 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      lVar7 = FUN_053d6158(uVar4,0);
      if (plVar6 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_02b79548(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
LAB_053d0d24:
          uVar4 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar4,0);
        }
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar7;
          thunk_FUN_02bb0e9c(plVar6 + 4,lVar7);
          lVar7 = thunk_FUN_02b79548(param_2,*(undefined8 *)(*plVar6 + 0x40));
          if (lVar7 == 0) goto LAB_053d0d24;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
            plVar6[5] = (long)param_2;
            thunk_FUN_02bb0e9c(plVar6 + 5,param_2);
            uVar4 = FUN_0540ce80(*(undefined8 *)OVRPlugin_OVRP_1_127_0_TypeInfo,plVar6,0);
            uVar9 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
                    /* WARNING: Subroutine does not return */
            FUN_053d7134(uVar4,uVar9,0);
          }
        }
LAB_053d0d20:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
    }
  }
LAB_053d0d30:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


