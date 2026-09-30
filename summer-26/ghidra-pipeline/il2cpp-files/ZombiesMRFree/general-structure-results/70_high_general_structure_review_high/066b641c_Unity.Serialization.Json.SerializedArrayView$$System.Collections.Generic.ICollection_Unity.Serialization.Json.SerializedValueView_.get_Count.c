/*
FUNCTION_NAME: Unity.Serialization.Json.SerializedArrayView$$System.Collections.Generic.ICollection<Unity.Serialization.Json.SerializedValueView>.get_Count
ENTRY_POINT: 066b641c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x066b647c) */

void Unity_Serialization_Json_SerializedArrayView__System_Collections_Generic_ICollection<Unity_Serialization_Json_SerializedValueView>_get_Count
               (undefined8 param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  if (param_2 != 1) {
    FUN_05506d0c(&stack0x00000008,*unaff_x21);
                    /* WARNING: Subroutine does not return */
    FUN_030b6e08(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch();
  lVar3 = *plVar2;
  __cxa_end_catch();
  FUN_05506d0c(&stack0x00000008,*unaff_x21);
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05b11f04(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fc8594();
}


