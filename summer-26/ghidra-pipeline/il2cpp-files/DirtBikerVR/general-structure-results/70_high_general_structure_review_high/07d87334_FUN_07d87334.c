/*
FUNCTION_NAME: FUN_07d87334
ENTRY_POINT: 07d87334
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


undefined8 FUN_07d87334(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_08486738;
  if ((DAT_08999bdc & 1) == 0) {
    FUN_03a8a718(
                System_Runtime_Serialization_EnumDataContract_EnumDataContractCriticalHelper_TypeInfo
                );
    FUN_03a8a718(UnityEngine_EnumDataUtility_<>c_TypeInfo);
    FUN_03a8a718(NWH_VehiclePhysics2_Powertrain_EngineComponent_ForcedInduction_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_EqualInstruction_EqualSingle_TypeInfo);
    FUN_03a8a718(NWH_VehiclePhysics2_Powertrain_EngineComponent_CalculateTorque_TypeInfo);
    FUN_03a8a718(System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo);
    FUN_03a8a718(UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486738);
    DAT_08999bdc = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar4 = FUN_07c9e200(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  plVar10 = (long *)(param_1 + 0x98);
  if (*plVar10 == 0) {
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                NWH_VehiclePhysics2_Powertrain_EngineComponent_CalculateTorque_TypeInfo
                              );
    FUN_05ed0550(uVar5,*(undefined8 *)
                        NWH_VehiclePhysics2_Powertrain_EngineComponent_ForcedInduction_TypeInfo);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    thunk_FUN_03afed3c(plVar10,uVar5);
    FUN_07d870ec(param_1);
  }
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    if (*plVar10 != 0) {
      uVar4 = FUN_05ed14e4(*plVar10,uVar3,*(undefined8 *)UnityEngine_EnumDataUtility_<>c_TypeInfo);
      if ((uVar4 & 1) == 0) {
        if (DAT_08999ba5 == '\0') {
          FUN_03a8a718(System_IO_FileStream_WriteDelegate_TypeInfo);
          DAT_08999ba5 = '\x01';
        }
        if (*(char *)(*(long *)(*(long *)System_IO_FileStream_WriteDelegate_TypeInfo + 0xb8) + 8) ==
            '\0') {
          if (*(int *)(*(long *)
                        System_Linq_Expressions_Interpreter_EqualInstruction_EqualReference_TypeInfo
                      + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar5 = FUN_07d6d6e0(param_2,0);
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(lVar7);
          }
          uVar4 = FUN_07c9c218(uVar5,0,0);
          if ((uVar4 & 1) != 0) {
            lVar7 = *(long *)(param_1 + 0xa0);
            local_48 = 0;
            local_50 = param_2;
            thunk_FUN_03afed3c(&local_50,param_2);
            local_48 = uVar5;
            thunk_FUN_03afed3c(&local_48,uVar5);
            if (lVar7 != 0) {
              lVar8 = *(long *)(lVar7 + 0x10);
              lVar9 = *(long *)UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar8 + 0x20);
                  *plVar6 = (long)local_50;
                  *(undefined8 *)(lVar8 + 0x28) = local_48;
                  thunk_FUN_03afed3c(plVar6,0);
                }
                else {
                  FUN_04fef894(lVar7,local_50,local_48,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                if (*plVar10 != 0) {
                  FUN_05ed12f0(*plVar10,uVar3,uVar5,
                               *(undefined8 *)
                                System_Runtime_Serialization_EnumDataContract_EnumDataContractCriticalHelper_TypeInfo
                              );
                  return uVar5;
                }
              }
            }
            goto LAB_07d87604;
          }
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
      if (*plVar10 != 0) {
        uVar5 = FUN_05ed1250(*plVar10,uVar3,
                             *(undefined8 *)
                              System_Linq_Expressions_Interpreter_EqualInstruction_EqualSingle_TypeInfo
                            );
        return uVar5;
      }
    }
  }
LAB_07d87604:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


