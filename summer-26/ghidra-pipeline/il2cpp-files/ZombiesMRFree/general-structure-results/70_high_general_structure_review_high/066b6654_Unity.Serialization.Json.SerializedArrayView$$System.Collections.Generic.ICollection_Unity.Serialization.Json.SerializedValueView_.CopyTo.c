/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.ICollection<Unity.Serialization.Json.SerializedValueView>.CopyTo
ENTRY_POINT: 066b6654
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_ICollection<Unity_Serialization_Json_SerializedValueView>_CopyTo
               (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 in_stack_00000008;
  
  if ((DAT_073a1036 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6dbc0);
    DAT_073a1036 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1f8))(plVar2,*(undefined8 *)(*plVar2 + 0x200));
    puVar1 = PTR_DAT_06f6dbc0;
    if (plVar2 != (long *)0x0) {
      if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_06f6dbc0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884();
      }
      puVar3 = (undefined4 *)thunk_FUN_03010960();
      uVar6 = *puVar3;
      plVar2 = *(long **)(param_1 + 0x68);
      plVar5 = *(long **)(param_1 + 0x78);
      in_stack_00000008._4_4_ = uVar6;
      uVar4 = thunk_FUN_0301043c(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
      if (plVar5 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x208))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x210));
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x5f0));
          if (*(long *)(param_1 + 0x70) != 0) {
            FUN_06904a04(*(long *)(param_1 + 0x70),0);
            if (*(long *)(param_1 + 0x70) != 0) {
              FUN_06904aa4(uVar6,*(long *)(param_1 + 0x70),0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


