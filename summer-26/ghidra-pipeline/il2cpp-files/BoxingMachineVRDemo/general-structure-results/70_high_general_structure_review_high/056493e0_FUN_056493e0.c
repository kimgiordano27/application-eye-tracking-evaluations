/*
FUNCTION_NAME: FUN_056493e0
ENTRY_POINT: 056493e0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


long * FUN_056493e0(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  
  if ((DAT_06b7f752 & 1) == 0) {
    FUN_02d6084c(System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo);
    DAT_06b7f752 = 1;
  }
  puVar11 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo;
  if ((param_1 == param_2) ||
     (uVar5 = FUN_0565a510(param_1,param_2),
     puVar11 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionConfig>_TypeInfo,
     (uVar5 & 1) != 0)) {
LAB_05649930:
    uVar8 = thunk_FUN_02dc61f4(puVar11);
    uVar9 = FUN_0566ef38(uVar8,0);
    thunk_FUN_02dc61f4(PTR_DAT_06763b78);
    uVar8 = thunk_FUN_02d9d534();
    FUN_04f7d8e0(uVar8,uVar9,0);
    goto LAB_05649960;
  }
  lVar12 = *param_1;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x056495bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(**(code **)(lVar12 + 0x2d8))(param_1,param_2,*(undefined8 *)(lVar12 + 0x2e0));
    return plVar6;
  }
  uVar5 = (**(code **)(lVar12 + 0x268))(param_1,*(undefined8 *)(lVar12 + 0x270));
  puVar11 = System_Collections_Generic_List<OpenXRInteractionFeature_ActionMapConfig>_TypeInfo;
  if ((uVar5 & 1) == 0) goto LAB_056498e4;
  plVar6 = (long *)(**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
  puVar11 = System_Collections_Generic_List<OpenXRInteractionFeature_DeviceConfig>_TypeInfo;
  if (plVar6 != param_1) goto LAB_05649930;
  if (param_2 == param_3) {
    return param_2;
  }
  if (param_2 == (long *)0x0) {
LAB_056498b4:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar6 = (long *)(**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  plVar7 = (long *)(**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (((plVar6 != (long *)0x0) && (plVar6 != param_1)) &&
     (puVar11 = System_Collections_Generic_List<Painter2D_Painter2DJobData>_TypeInfo,
     plVar6 != plVar7)) goto LAB_05649930;
  uVar5 = (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x310))
  ;
  puVar11 = System_Collections_Generic_List<OpenXRLoaderBase_LoaderState>_TypeInfo;
  if ((uVar5 & 1) != 0) {
    lVar12 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
    if (lVar12 != 0) {
      plVar6 = (long *)(**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
      if (plVar6 == (long *)0x0) goto LAB_056498b4;
      (**(code **)(*plVar6 + 0x2b8))(plVar6,param_2,*(undefined8 *)(*plVar6 + 0x2c0));
    }
    iVar3 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    puVar2 = System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo;
    if (iVar3 == 0xb) {
      plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (plVar6 != (long *)0x0) {
        (**(code **)(*param_2 + 0x2b8))(param_2,plVar6,*(undefined8 *)(*param_2 + 0x2c0));
        (**(code **)(*param_1 + 0x298))(param_1,plVar6,param_3,*(undefined8 *)(*param_1 + 0x2a0));
        (**(code **)(*param_1 + 0x2a8))(param_1,param_2,plVar6,*(undefined8 *)(*param_1 + 0x2b0));
        return plVar6;
      }
      return (long *)0x0;
    }
    lVar12 = *param_2;
    bVar1 = *(byte *)(*(long *)
                       System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo +
                     0x130);
    puVar11 = System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo;
    if ((bVar1 <= *(byte *)(lVar12 + 0x130)) &&
       (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Collections_Generic_List<OpenXRInput_SerializedBinding>_TypeInfo)) {
      uVar4 = (**(code **)(lVar12 + 0x1d8))(param_2,*(undefined8 *)(lVar12 + 0x1e0));
      uVar5 = (**(code **)(*param_1 + 0x2f8))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x300));
      puVar11 = System_Collections_Generic_List<OpenXRLoaderBase_FeatureLoggingInfo>_TypeInfo;
      if ((uVar5 & 1) != 0) {
        lVar13 = *param_2;
        lVar12 = *(long *)puVar2;
        bVar1 = *(byte *)(lVar12 + 0x130);
        if ((*(byte *)(lVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar13 + 200) + ((ulong)bVar1 - 1) * 8) != lVar12)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(param_2);
        }
        if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8) != lVar12)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(param_3);
        }
        uVar8 = (**(code **)(lVar13 + 0x1b8))(param_2,*(undefined8 *)(lVar13 + 0x1c0));
        uVar9 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
        lVar12 = (**(code **)(*param_1 + 0x468))
                           (param_1,param_2,uVar9,param_1,uVar8,uVar8,0,
                            *(undefined8 *)(*param_1 + 0x470));
        if (lVar12 != 0) {
          (**(code **)(*param_1 + 0x478))(param_1,lVar12,*(undefined8 *)(*param_1 + 0x480));
        }
        plVar6 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
        if (plVar6 == param_3) {
          param_2[3] = (long)param_3;
          thunk_FUN_02dd37b4(param_2 + 3,param_3);
          lVar13 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
          if (lVar13 == 0) goto LAB_056498b4;
          *(long *)(lVar13 + 0x18) = (long)param_2;
          thunk_FUN_02dd37b4((long *)(lVar13 + 0x18),param_2);
          (**(code **)(*param_2 + 0x438))(param_2,param_1,*(undefined8 *)(*param_2 + 0x440));
          uVar5 = (**(code **)(*param_2 + 0x4d8))(param_2,*(undefined8 *)(*param_2 + 0x4e0));
LAB_05649820:
          if ((uVar5 & 1) == 0) goto LAB_05649874;
        }
        else {
          plVar6 = (long *)(**(code **)(*param_3 + 0x208))
                                     (param_3,*(undefined8 *)(*param_3 + 0x210));
          if (plVar6 == (long *)0x0) {
            param_2[3] = (long)param_3;
            thunk_FUN_02dd37b4(param_2 + 3,param_3);
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar13 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar13 + 0x130);
          if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar6);
          }
          param_2[3] = (long)param_3;
          thunk_FUN_02dd37b4(param_2 + 3,param_3);
          plVar6[3] = (long)param_2;
          thunk_FUN_02dd37b4(plVar6 + 3,param_2);
          (**(code **)(*param_2 + 0x438))(param_2,param_1,*(undefined8 *)(*param_2 + 0x440));
          uVar10 = (**(code **)(*plVar6 + 0x4d8))(plVar6,*(undefined8 *)(*plVar6 + 0x4e0));
          uVar5 = (**(code **)(*param_2 + 0x4d8))(param_2,*(undefined8 *)(*param_2 + 0x4e0));
          if ((uVar10 & 1) == 0) goto LAB_05649820;
          if ((uVar5 & 1) == 0) {
            uVar5 = (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
            if ((uVar5 & 1) != 0) {
              FUN_0565a56c(plVar6,param_3);
            }
            goto LAB_05649874;
          }
          param_2[2] = (long)plVar6;
          thunk_FUN_02dd37b4(param_2 + 2,plVar6);
        }
        uVar5 = (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
        if ((uVar5 & 1) != 0) {
          param_3[2] = (long)param_2;
          thunk_FUN_02dd37b4(param_3 + 2,param_2);
        }
LAB_05649874:
        if (lVar12 != 0) {
          (**(code **)(*param_1 + 0x488))(param_1,lVar12,*(undefined8 *)(*param_1 + 0x490));
        }
        return param_2;
      }
    }
  }
LAB_056498e4:
  uVar8 = thunk_FUN_02dc61f4(puVar11);
  uVar9 = FUN_0566ef38(uVar8,0);
  thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
  uVar8 = thunk_FUN_02d9d534();
  FUN_05007004(uVar8,uVar9,0);
LAB_05649960:
  uVar9 = thunk_FUN_02dc61f4(
                            System_Collections_Generic_List<ParsedAssemblyQualifiedName_Block>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar8,uVar9);
}


