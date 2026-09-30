/*
FUNCTION_NAME: FUN_05a10b88
ENTRY_POINT: 05a10b88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


uint FUN_05a10b88(long *param_1,long param_2,long param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  if ((DAT_06dc17e8 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a11590);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    FUN_02d965b8(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var);
    DAT_06dc17e8 = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_05a112e4;
  uVar3 = (**(code **)(*param_1 + 600))(param_1,param_3,0,*(undefined8 *)(*param_1 + 0x260));
  if ((uVar3 & 1) == 0) {
LAB_05a10fd0:
    return uVar3 & 1;
  }
  uVar4 = FUN_0541fba0(param_4,0,0);
  puVar1 = PTR_DAT_069fb9c0;
  if ((uVar4 & 1) == 0) {
    lVar6 = *param_5;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05501380(lVar6,0,0);
    if ((uVar4 & 1) != 0) {
      plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
      if (plVar5 == (long *)0x0) goto LAB_05a112e4;
      lVar6 = *param_5;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_05a112e8;
      if ((int)plVar5[3] == 0) goto LAB_05a112e0;
      plVar5[4] = lVar6;
      LeanTween__value(plVar5 + 4,lVar6);
      if ((param_3 != 0) &&
         (lVar6 = thunk_FUN_02dd3048(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
      goto LAB_05a112e8;
      if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_05a112e0;
      plVar5[5] = param_3;
      LeanTween__value(plVar5 + 5,param_3);
      uVar7 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      lVar6 = FUN_05a15ff0(uVar7,0);
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
      goto LAB_05a112e8;
      if (*(uint *)(plVar5 + 3) < 3) goto LAB_05a112e0;
      plVar5[6] = lVar6;
      LeanTween__value(plVar5 + 6,lVar6);
      lVar6 = thunk_FUN_02dd3048(param_1,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar6 == 0) goto LAB_05a112e8;
      if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) goto LAB_05a112e0;
      plVar5[7] = (long)param_1;
      LeanTween__value(plVar5 + 7,param_1);
      uVar7 = *(undefined8 *)UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var;
      goto LAB_05a10fa0;
    }
    uVar4 = FUN_0541fa0c(param_1,0);
    if ((uVar4 & 1) == 0) {
      uVar7 = (**(code **)(*param_1 + 0x498))(param_1,*(undefined8 *)(*param_1 + 0x4a0));
      puVar2 = PTR_DAT_06a11590;
      if (*(int *)(*(long *)PTR_DAT_06a11590 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a11590);
      }
      uVar9 = FUN_05a2e8f4(0);
      lVar6 = *(long *)(puVar1 + 0xe0);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar6);
      }
      uVar4 = FUN_05501380(uVar7,uVar9,0);
      if ((uVar4 & 1) == 0) {
        if ((param_2 != 0) && (*(int *)(param_2 + 0x18) == 1)) {
          plVar5 = *(long **)(param_2 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_05a112e4;
          uVar7 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar6);
          }
          uVar9 = FUN_05a2e9e4(0);
          lVar6 = *(long *)(puVar1 + 0xe0);
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar6);
          }
          uVar4 = FUN_05501380(uVar7,uVar9,0);
          if ((uVar4 & 1) == 0) {
            *param_5 = param_3;
            LeanTween__value(param_5,param_3);
            goto LAB_05a10fd0;
          }
        }
        plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,3);
        uVar7 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
        lVar6 = FUN_05a15ff0(uVar7,0);
        if (plVar5 != (long *)0x0) {
          if ((lVar6 == 0) ||
             (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 != 0)) {
            if ((int)plVar5[3] != 0) {
              plVar5[4] = lVar6;
              LeanTween__value(plVar5 + 4,lVar6);
              lVar6 = thunk_FUN_02dd3048(param_1,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar6 == 0) goto LAB_05a112e8;
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                plVar5[5] = (long)param_1;
                LeanTween__value(plVar5 + 5,param_1);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                }
                lVar6 = FUN_05a2e9e4(0);
                if ((lVar6 != 0) &&
                   (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
                goto LAB_05a112e8;
                if (2 < *(uint *)(plVar5 + 3)) {
                  plVar5[6] = lVar6;
                  LeanTween__value(plVar5 + 6,lVar6);
                  uVar7 = FUN_05a4cd84(*(undefined8 *)
                                        UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                                       ,plVar5,0);
                  uVar9 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220))
                  ;
                    /* WARNING: Subroutine does not return */
                  FUN_05a16fd0(uVar7,uVar9,0);
                }
              }
            }
            goto LAB_05a112e0;
          }
          goto LAB_05a112e8;
        }
      }
      else {
        plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,2);
        uVar7 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
        lVar6 = FUN_05a15ff0(uVar7,0);
        if (plVar5 != (long *)0x0) {
          if ((lVar6 == 0) ||
             (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 != 0)) {
            if ((int)plVar5[3] != 0) {
              plVar5[4] = lVar6;
              LeanTween__value(plVar5 + 4,lVar6);
              lVar6 = thunk_FUN_02dd3048(param_1,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar6 == 0) goto LAB_05a112e8;
              if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                plVar5[5] = (long)param_1;
                LeanTween__value(plVar5 + 5,param_1);
                uVar7 = FUN_05a4cd84(*(undefined8 *)
                                      UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var
                                     ,plVar5,0);
                uVar9 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
                    /* WARNING: Subroutine does not return */
                FUN_05a16fd0(uVar7,uVar9,0);
              }
            }
            goto LAB_05a112e0;
          }
          goto LAB_05a112e8;
        }
      }
LAB_05a112e4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,3);
    if (plVar5 == (long *)0x0) goto LAB_05a112e4;
    lVar6 = thunk_FUN_02dd3048(param_1,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar6 == 0) goto LAB_05a112e8;
    if ((int)plVar5[3] == 0) goto LAB_05a112e0;
    plVar5[4] = (long)param_1;
    LeanTween__value(plVar5 + 4,param_1);
    uVar7 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    lVar6 = FUN_05a15ff0(uVar7,0);
    if ((lVar6 != 0) &&
       (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_05a112e8;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_05a112e0;
    plVar5[5] = lVar6;
    LeanTween__value(plVar5 + 5,lVar6);
    if ((param_3 != 0) &&
       (lVar6 = thunk_FUN_02dd3048(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_05a112e8;
    if (*(uint *)(plVar5 + 3) < 3) goto LAB_05a112e0;
    plVar5[6] = param_3;
    LeanTween__value(plVar5 + 6,param_3);
    puVar10 = (undefined8 *)UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var;
  }
  else {
    plVar5 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
    if (plVar5 == (long *)0x0) goto LAB_05a112e4;
    lVar6 = thunk_FUN_02dd3048(param_1,*(undefined8 *)(*plVar5 + 0x40));
    if (lVar6 == 0) {
LAB_05a112e8:
      uVar7 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar7,0);
    }
    if ((int)plVar5[3] == 0) {
LAB_05a112e0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar5[4] = (long)param_1;
    LeanTween__value(plVar5 + 4,param_1);
    if ((param_4 != 0) &&
       (lVar6 = thunk_FUN_02dd3048(param_4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_05a112e8;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_05a112e0;
    plVar5[5] = param_4;
    LeanTween__value(plVar5 + 5,param_4);
    uVar7 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
    lVar6 = FUN_05a15ff0(uVar7,0);
    if ((lVar6 != 0) &&
       (lVar8 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_05a112e8;
    if (*(uint *)(plVar5 + 3) < 3) goto LAB_05a112e0;
    plVar5[6] = lVar6;
    LeanTween__value(plVar5 + 6,lVar6);
    if ((param_3 != 0) &&
       (lVar6 = thunk_FUN_02dd3048(param_3,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_05a112e8;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) goto LAB_05a112e0;
    plVar5[7] = param_3;
    LeanTween__value(plVar5 + 7,param_3);
    puVar10 = (undefined8 *)UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var;
  }
  uVar7 = *puVar10;
LAB_05a10fa0:
  uVar7 = FUN_05a4cd84(uVar7,plVar5,0);
  uVar9 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
                    /* WARNING: Subroutine does not return */
  FUN_05a16fd0(uVar7,uVar9,0);
}


