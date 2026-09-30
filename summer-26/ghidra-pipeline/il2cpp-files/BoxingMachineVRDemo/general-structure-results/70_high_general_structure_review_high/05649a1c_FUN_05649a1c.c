/*
FUNCTION_NAME: FUN_05649a1c
ENTRY_POINT: 05649a1c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_13;validity_or_gating_hits_7;telemetry_or_network_hits_5
*/


long * FUN_05649a1c(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  if ((DAT_06b7f753 & 1) == 0) {
    FUN_02d6084c(System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo);
    DAT_06b7f753 = 1;
  }
  puVar12 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo;
  if ((param_1 != param_2) &&
     (uVar5 = FUN_0565a510(param_1,param_2),
     puVar12 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo,
     (uVar5 & 1) == 0)) {
    lVar13 = *param_1;
    if (param_3 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05649c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar6 = (long *)(**(code **)(lVar13 + 0x2c8))
                                 (param_1,param_2,*(undefined8 *)(lVar13 + 0x2d0));
      return plVar6;
    }
    uVar5 = (**(code **)(lVar13 + 0x268))(param_1,*(undefined8 *)(lVar13 + 0x270));
    puVar12 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo;
    if ((uVar5 & 1) == 0) {
LAB_05649f0c:
      uVar9 = thunk_FUN_02dc61f4(puVar12);
      uVar9 = FUN_0566ef38(uVar9,0);
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar10 = thunk_FUN_02d9d534();
      FUN_05007004(uVar10,uVar9,0);
      goto LAB_05649f88;
    }
    plVar6 = (long *)(**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
    puVar12 = System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo;
    if (plVar6 == param_1) {
      if (param_2 == param_3) {
        return param_2;
      }
      if (param_2 == (long *)0x0) {
LAB_05649edc:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar6 = (long *)(**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      plVar7 = (long *)(**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
      if (((plVar6 == (long *)0x0) || (plVar6 == param_1)) ||
         (puVar12 = System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo,
         plVar6 == plVar7)) {
        uVar5 = (**(code **)(*param_1 + 0x318))
                          (param_1,param_2,param_3,*(undefined8 *)(*param_1 + 800));
        puVar12 = System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo;
        if ((uVar5 & 1) != 0) {
          lVar13 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
          if (lVar13 != 0) {
            plVar6 = (long *)(**(code **)(*param_2 + 0x1e8))
                                       (param_2,*(undefined8 *)(*param_2 + 0x1f0));
            if (plVar6 == (long *)0x0) goto LAB_05649edc;
            (**(code **)(*plVar6 + 0x2b8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x2c0));
          }
          iVar3 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
          puVar2 = System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo;
          if (iVar3 == 0xb) {
            plVar7 = (long *)(**(code **)(*param_2 + 0x248))
                                       (param_2,*(undefined8 *)(*param_2 + 0x250));
            plVar6 = plVar7;
            if (plVar7 != (long *)0x0) {
              do {
                plVar8 = (long *)(**(code **)(*plVar6 + 0x218))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x220));
                (**(code **)(*param_2 + 0x2b8))(param_2,plVar6,*(undefined8 *)(*param_2 + 0x2c0));
                (**(code **)(*param_1 + 0x2a8))
                          (param_1,plVar6,param_3,*(undefined8 *)(*param_1 + 0x2b0));
                param_3 = plVar6;
                plVar6 = plVar8;
              } while (plVar8 != (long *)0x0);
              return plVar7;
            }
            return (long *)0x0;
          }
          lVar13 = *param_2;
          bVar1 = *(byte *)(*(long *)
                             System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo
                           + 0x130);
          puVar12 = System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo;
          if ((bVar1 <= *(byte *)(lVar13 + 0x130)) &&
             (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo)) {
            uVar4 = (**(code **)(lVar13 + 0x1d8))(param_2,*(undefined8 *)(lVar13 + 0x1e0));
            uVar5 = (**(code **)(*param_1 + 0x2f8))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x300))
            ;
            puVar12 = System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo;
            if ((uVar5 & 1) != 0) {
              lVar14 = *param_2;
              lVar13 = *(long *)puVar2;
              bVar1 = *(byte *)(lVar13 + 0x130);
              if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar14 + 200) + ((ulong)bVar1 - 1) * 8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(param_2);
              }
              if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(param_3);
              }
              uVar9 = (**(code **)(lVar14 + 0x1b8))(param_2,*(undefined8 *)(lVar14 + 0x1c0));
              uVar10 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
              lVar13 = (**(code **)(*param_1 + 0x468))
                                 (param_1,param_2,uVar10,param_1,uVar9,uVar9,0,
                                  *(undefined8 *)(*param_1 + 0x470));
              if (lVar13 != 0) {
                (**(code **)(*param_1 + 0x478))(param_1,lVar13,*(undefined8 *)(*param_1 + 0x480));
              }
              plVar6 = (long *)(**(code **)(*param_1 + 0x278))
                                         (param_1,*(undefined8 *)(*param_1 + 0x280));
              plVar8 = param_3 + 3;
              plVar7 = (long *)*plVar8;
              param_2[3] = (long)plVar7;
              thunk_FUN_02dd37b4(param_2 + 3,plVar7);
              *plVar8 = (long)param_2;
              thunk_FUN_02dd37b4(plVar8,param_2);
              if (param_3 == plVar6) {
                (**(code **)(*param_1 + 0x288))(param_1,param_2,*(undefined8 *)(*param_1 + 0x290));
                (**(code **)(*param_2 + 0x438))(param_2,param_1,*(undefined8 *)(*param_2 + 0x440));
                uVar5 = (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
                if (((uVar5 & 1) == 0) ||
                   (uVar5 = (**(code **)(*param_2 + 0x4d8))
                                      (param_2,*(undefined8 *)(*param_2 + 0x4e0)), (uVar5 & 1) == 0)
                   ) goto LAB_05649e9c;
                plVar7 = param_2 + 2;
                *plVar7 = (long)param_3;
              }
              else {
                (**(code **)(*param_2 + 0x438))(param_2,param_1,*(undefined8 *)(*param_2 + 0x440));
                uVar5 = (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
                uVar11 = (**(code **)(*param_2 + 0x4d8))(param_2,*(undefined8 *)(*param_2 + 0x4e0));
                if ((uVar5 & 1) == 0) {
                  if ((uVar11 & 1) == 0) goto LAB_05649e9c;
                }
                else {
                  if ((uVar11 & 1) == 0) {
                    if (plVar7 == (long *)0x0) goto LAB_05649edc;
                    uVar5 = (**(code **)(*plVar7 + 0x4d8))(plVar7,*(undefined8 *)(*plVar7 + 0x4e0));
                    if ((uVar5 & 1) != 0) {
                      FUN_0565a56c(param_3,plVar7);
                    }
                    goto LAB_05649e9c;
                  }
                  param_2[2] = (long)param_3;
                  thunk_FUN_02dd37b4(param_2 + 2,param_3);
                }
                if (plVar7 == (long *)0x0) goto LAB_05649edc;
                uVar5 = (**(code **)(*plVar7 + 0x4d8))(plVar7,*(undefined8 *)(*plVar7 + 0x4e0));
                if ((uVar5 & 1) == 0) goto LAB_05649e9c;
                plVar7 = plVar7 + 2;
                *plVar7 = (long)param_2;
                param_3 = param_2;
              }
              thunk_FUN_02dd37b4(plVar7,param_3);
LAB_05649e9c:
              if (lVar13 != 0) {
                (**(code **)(*param_1 + 0x488))(param_1,lVar13,*(undefined8 *)(*param_1 + 0x490));
              }
              return param_2;
            }
          }
        }
        goto LAB_05649f0c;
      }
    }
  }
  uVar9 = thunk_FUN_02dc61f4(puVar12);
  uVar9 = FUN_0566ef38(uVar9,0);
  thunk_FUN_02dc61f4(PTR_DAT_06763b78);
  uVar10 = thunk_FUN_02d9d534();
  FUN_04f7d8e0(uVar10,uVar9,0);
LAB_05649f88:
  uVar9 = thunk_FUN_02dc61f4(
                            System_Collections_Generic_List<PermissionsManager_PermissionRequest>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar10,uVar9);
}


