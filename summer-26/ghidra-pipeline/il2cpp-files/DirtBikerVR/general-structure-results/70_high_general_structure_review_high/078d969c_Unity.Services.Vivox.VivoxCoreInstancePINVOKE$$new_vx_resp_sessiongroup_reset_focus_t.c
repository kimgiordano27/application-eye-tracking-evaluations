/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_sessiongroup_reset_focus_t
ENTRY_POINT: 078d969c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_sessiongroup_reset_focus_t(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar4;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x25;
  undefined4 in_stack_00000008;
  
  uVar1 = thunk_FUN_03af1434(System_Collections_ObjectModel_ReadOnlyCollection<JsonSchema>_TypeInfo)
  ;
  thunk_FUN_03ac70f4(uVar1,&stack0x0000000c);
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0x98));
  }
  uVar1 = FUN_06784288();
  uVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x25 + 0x48),&stack0x00000008);
  uVar3 = thunk_FUN_03af1434(
                            System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<double>>_TypeInfo
                            );
  uVar1 = FUN_065ce754(uVar3,uVar1,uVar2,0);
  if (unaff_x21 == 0) {
LAB_078d9714:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(unaff_x21 + 0x18) != 0) {
    *(undefined8 *)(unaff_x21 + 0x20) = uVar1;
    thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x20),uVar1);
    uVar1 = FUN_06797008(0);
    if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(unaff_x21 + 0x28) = uVar1;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x28),uVar1);
      uVar1 = thunk_FUN_03af1434(
                                System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<long>>_TypeInfo
                                );
      if (2 < *(uint *)(unaff_x21 + 0x18)) {
        *(undefined8 *)(unaff_x21 + 0x30) = uVar1;
        thunk_FUN_03afed3c();
        if (*(long *)(unaff_x19 + 0x98) == 0) goto LAB_078d9714;
        if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(unaff_x21 + 0x38) = *(undefined8 *)(*(long *)(unaff_x19 + 0x98) + 0x18);
          thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x38));
          uVar1 = thunk_FUN_03af1434(PTR_DAT_08489148);
          if (4 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined8 *)(unaff_x21 + 0x40) = uVar1;
            thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x40),uVar1);
            uVar1 = FUN_06797008(0);
            if (5 < *(uint *)(unaff_x21 + 0x18)) {
              *(undefined8 *)(unaff_x21 + 0x48) = uVar1;
              thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x48),uVar1);
              uVar1 = thunk_FUN_03af1434(
                                        System_Collections_ObjectModel_ReadOnlyDictionary<MetricId,_IMetric<TimeSpan>>_TypeInfo
                                        );
              if (6 < *(uint *)(unaff_x21 + 0x18)) {
                *(undefined8 *)(unaff_x21 + 0x50) = uVar1;
                thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x50),uVar1);
                if ((*(uint *)(unaff_x21 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(unaff_x21 + 0x58) = unaff_x22;
                  thunk_FUN_03afed3c((undefined8 *)(unaff_x21 + 0x58));
                  uVar1 = FUN_06797008(0);
                  if (8 < *(uint *)(unaff_x21 + 0x18)) {
                    *(undefined8 *)(unaff_x21 + 0x60) = uVar1;
                    thunk_FUN_03afed3c();
                    uVar1 = FUN_065ce45c();
                    FUN_078bb9a4(uVar1,0);
                    FUN_0350b94c();
                    lVar4 = *(long *)(unaff_x19 + 0x90);
                    FUN_0350b94c(lVar4);
                    uVar2 = *(undefined8 *)(lVar4 + 0x30);
                    thunk_FUN_03af1434(System_Collections_Generic_List<PowertrainComponent>_TypeInfo
                                      );
                    uVar1 = thunk_FUN_03ac74bc();
                    FUN_078d8508(uVar1,unaff_w20,uVar2);
                    uVar2 = thunk_FUN_03af1434(
                                              System_Collections_ObjectModel_ReadOnlyCollection<VivoxMessage>_TypeInfo
                                              );
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a884(uVar1,uVar2);
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


