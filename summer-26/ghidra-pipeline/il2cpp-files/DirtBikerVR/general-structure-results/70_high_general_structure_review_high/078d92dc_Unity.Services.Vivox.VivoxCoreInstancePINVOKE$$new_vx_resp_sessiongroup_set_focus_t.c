/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_sessiongroup_set_focus_t
ENTRY_POINT: 078d92dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_sessiongroup_set_focus_t(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long *plVar11;
  long lVar12;
  int in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  FUN_03a8a718();
  *(undefined1 *)(unaff_x21 + 0xa79) = 1;
  if (unaff_w20 == 21999) {
    uVar3 = thunk_FUN_03af1434(PTR_DAT_084963e8);
    puVar2 = PTR_DAT_08486760;
    FUN_0350b93c(*(undefined8 *)(PTR_DAT_08486760 + 0xe0));
    uVar3 = FUN_0675ff58(uVar3,0);
    uStack000000000000000c = 21999;
    uVar4 = thunk_FUN_03af1434(
                              System_Collections_ObjectModel_ReadOnlyCollection<JsonSchema>_TypeInfo
                              );
    uVar4 = thunk_FUN_03ac70f4(uVar4,&stack0x0000000c);
    FUN_0350b93c(*(undefined8 *)(puVar2 + 0x98));
    uVar3 = FUN_06784288(uVar3,uVar4,0);
    in_stack_00000008 = 21999;
    uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000008);
    uVar5 = thunk_FUN_03af1434(System_Collections_ObjectModel_ReadOnlyCollection<string>_TypeInfo);
    uVar3 = FUN_065ce754(uVar5,uVar3,uVar4,0);
    FUN_078bb9a4(uVar3,0);
    thunk_FUN_03af1434(System_Collections_Generic_List<PowertrainComponent>_TypeInfo);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(System_Collections_Generic_HashSet<Object>_TypeInfo);
    FUN_078d8508(uVar3,21999,uVar4);
    uVar4 = thunk_FUN_03af1434(
                              System_Collections_ObjectModel_ReadOnlyCollection<VivoxMessage>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar4);
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Collections_ObjectModel_ReadOnlyCollection<Expression>_TypeInfo)) {
      lVar12 = unaff_x19[0x13];
      if (lVar12 != 0) {
        plVar11 = *(long **)(lVar12 + 0x20);
        if (plVar11 == (long *)0x0) {
LAB_078d9714:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar6 = thunk_FUN_03af1434(
                                  System_Collections_ObjectModel_ReadOnlyCollection<VolumeProfile>_TypeInfo
                                  );
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)(lVar6 + 0x20)) {
              lVar8 = lVar8 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138
              ;
              goto LAB_078d95cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        lVar8 = FUN_03ac43c4(plVar11);
LAB_078d95cc:
        lVar6 = thunk_FUN_03aa9644(*(undefined8 *)(lVar8 + 8),lVar6);
        lVar6 = (**(code **)(lVar6 + 8))(plVar11,0,lVar6);
        if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) {
          uVar3 = *(undefined8 *)(lVar12 + 0x30);
        }
        else {
          uVar3 = FUN_06797008(0);
          lVar12 = thunk_FUN_03af1434(PTR_DAT_084923f0);
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_067ded08(lVar6,0);
          uVar3 = FUN_065c0764(uVar3,uVar4,0);
        }
        uVar4 = thunk_FUN_03af1434(PTR_DAT_084867c8);
        lVar12 = FUN_03a8a804(uVar4,9);
        uVar4 = thunk_FUN_03af1434(PTR_DAT_084963e8);
        puVar2 = PTR_DAT_08486760;
        if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
        }
        uVar4 = FUN_0675ff58(uVar4,0);
        uVar5 = thunk_FUN_03af1434(
                                  System_Collections_ObjectModel_ReadOnlyCollection<JsonSchema>_TypeInfo
                                  );
        uVar5 = thunk_FUN_03ac70f4(uVar5,&stack0x0000000c);
        lVar6 = *(long *)(puVar2 + 0x98);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(lVar6);
        }
        uVar4 = FUN_06784288(uVar4,uVar5,0);
        in_stack_00000008 = unaff_w20;
        uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000008);
        uVar7 = thunk_FUN_03af1434(
                                  System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo
                                  );
        uVar4 = FUN_065ce754(uVar7,uVar4,uVar5,0);
        if (lVar12 == 0) goto LAB_078d9714;
        if (*(int *)(lVar12 + 0x18) == 0) {
LAB_078d9888:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        *(undefined8 *)(lVar12 + 0x20) = uVar4;
        thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x20),uVar4);
        uVar4 = FUN_06797008(0);
        if ((*(uint *)(lVar12 + 0x18) & 0xfffffffe) == 0) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x28) = uVar4;
        thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x28),uVar4);
        uVar4 = thunk_FUN_03af1434(
                                  System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo
                                  );
        if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x30) = uVar4;
        thunk_FUN_03afed3c();
        if (unaff_x19[0x13] == 0) goto LAB_078d9714;
        if ((*(uint *)(lVar12 + 0x18) & 0xfffffffc) == 0) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(unaff_x19[0x13] + 0x18);
        thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x38));
        uVar4 = thunk_FUN_03af1434(PTR_DAT_08489148);
        if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x40) = uVar4;
        thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x40),uVar4);
        uVar4 = FUN_06797008(0);
        if (*(uint *)(lVar12 + 0x18) < 6) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x48) = uVar4;
        thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x48),uVar4);
        uVar4 = thunk_FUN_03af1434(
                                  System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                                  );
        if (*(uint *)(lVar12 + 0x18) < 7) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x50) = uVar4;
        thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x50),uVar4);
        if ((*(uint *)(lVar12 + 0x18) & 0xfffffff8) == 0) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x58) = uVar3;
        thunk_FUN_03afed3c((undefined8 *)(lVar12 + 0x58),uVar3);
        uVar3 = FUN_06797008(0);
        if (*(uint *)(lVar12 + 0x18) < 9) goto LAB_078d9888;
        *(undefined8 *)(lVar12 + 0x60) = uVar3;
        thunk_FUN_03afed3c();
        uVar3 = FUN_065ce45c(lVar12,0);
        FUN_078bb9a4(uVar3,0);
      }
      FUN_0350b94c();
      lVar12 = unaff_x19[0x12];
      FUN_0350b94c(lVar12);
      uVar3 = *(undefined8 *)(lVar12 + 0x30);
      goto FUN_078d9528;
    }
  }
  uVar3 = thunk_FUN_03af1434(PTR_DAT_084963e8);
  puVar2 = PTR_DAT_08486760;
  FUN_0350b93c(*(undefined8 *)(PTR_DAT_08486760 + 0xe0));
  uVar3 = FUN_0675ff58(uVar3,0);
  uVar4 = thunk_FUN_03af1434(System_Collections_ObjectModel_ReadOnlyCollection<JsonSchema>_TypeInfo)
  ;
  uVar4 = thunk_FUN_03ac70f4(uVar4,&stack0x0000000c);
  FUN_0350b93c(*(undefined8 *)(puVar2 + 0x98));
  uVar3 = FUN_06784288(uVar3,uVar4,0);
  in_stack_00000008 = unaff_w20;
  uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar2 + 0x48),&stack0x00000008);
  FUN_0350b94c();
  uVar5 = (**(code **)(*unaff_x19 + 0x188))();
  uVar7 = thunk_FUN_03af1434(
                            System_Collections_ObjectModel_ReadOnlyCollection<VolumeParameter>_TypeInfo
                            );
  uVar3 = FUN_065ce798(uVar7,uVar3,uVar4,uVar5,0);
  FUN_078bb9a4(uVar3,0);
  FUN_0350b94c();
  uVar3 = (**(code **)(*unaff_x19 + 0x188))();
FUN_078d9528:
  thunk_FUN_03af1434(System_Collections_Generic_List<PowertrainComponent>_TypeInfo);
  uVar4 = thunk_FUN_03ac74bc();
  FUN_078d8508(uVar4,unaff_w20,uVar3);
  uVar3 = thunk_FUN_03af1434(
                            System_Collections_ObjectModel_ReadOnlyCollection<VivoxMessage>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,uVar3);
}


