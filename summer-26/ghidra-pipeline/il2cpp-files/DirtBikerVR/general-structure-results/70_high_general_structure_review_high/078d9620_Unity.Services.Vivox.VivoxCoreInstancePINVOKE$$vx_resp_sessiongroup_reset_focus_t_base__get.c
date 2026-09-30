/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_reset_focus_t_base__get
ENTRY_POINT: 078d9620
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_reset_focus_t_base__get
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  long lVar7;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_067ded08();
  uVar2 = FUN_065c0764();
  uVar3 = thunk_FUN_03af1434(PTR_DAT_084867c8);
  lVar4 = FUN_03a8a804(uVar3,9);
  uVar3 = thunk_FUN_03af1434(PTR_DAT_084963e8);
  puVar1 = PTR_DAT_08486760;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
  }
  uVar3 = FUN_0675ff58(uVar3,0);
  uVar5 = thunk_FUN_03af1434(System_Collections_ObjectModel_ReadOnlyCollection<JsonSchema>_TypeInfo)
  ;
  uVar5 = thunk_FUN_03ac70f4(uVar5,&stack0x0000000c);
  lVar7 = *(long *)(puVar1 + 0x98);
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(lVar7);
  }
  uVar3 = FUN_06784288(uVar3,uVar5,0);
  uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
  uVar6 = thunk_FUN_03af1434(
                            System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo
                            );
  uVar3 = FUN_065ce754(uVar6,uVar3,uVar5,0);
  if (lVar4 == 0) {
LAB_078d9714:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x20),uVar3);
    uVar3 = FUN_06797008(0);
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x28),uVar3);
      uVar3 = thunk_FUN_03af1434(
                                System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo
                                );
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = uVar3;
        thunk_FUN_03afed3c();
        if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_078d9714;
        if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(*(long *)(unaff_x19 + 0x98) + 0x18);
          thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x38));
          uVar3 = thunk_FUN_03af1434(PTR_DAT_08489148);
          if (4 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x40) = uVar3;
            thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x40),uVar3);
            uVar3 = FUN_06797008(0);
            if (5 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x48) = uVar3;
              thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x48),uVar3);
              uVar3 = thunk_FUN_03af1434(
                                        System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                                        );
              if (6 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x50) = uVar3;
                thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x50),uVar3);
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar4 + 0x58) = uVar2;
                  thunk_FUN_03afed3c((undefined8 *)(lVar4 + 0x58),uVar2);
                  uVar2 = FUN_06797008(0);
                  if (8 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined8 *)(lVar4 + 0x60) = uVar2;
                    thunk_FUN_03afed3c();
                    uVar2 = FUN_065ce45c(lVar4,0);
                    FUN_078bb9a4(uVar2,0);
                    FUN_0350b94c();
                    lVar4 = *(long *)(unaff_x19 + 0x90);
                    FUN_0350b94c(lVar4);
                    uVar3 = *(undefined8 *)(lVar4 + 0x30);
                    thunk_FUN_03af1434(System_Collections_Generic_List<PowertrainComponent>_TypeInfo
                                      );
                    uVar2 = thunk_FUN_03ac74bc();
                    FUN_078d8508(uVar2,unaff_w20,uVar3);
                    uVar3 = thunk_FUN_03af1434(
                                              System_Collections_ObjectModel_ReadOnlyCollection<VivoxMessage>_TypeInfo
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a884(uVar2,uVar3);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


