/*
FUNCTION_NAME: FUN_07d27f4c
ENTRY_POINT: 07d27f4c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_2;strong_file_logging_hits_3
*/


void FUN_07d27f4c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_08999240 & 1) == 0) {
    FUN_03a8a718(System_Xml_Schema_XsdValidator_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486c50);
    FUN_03a8a718(System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo);
    FUN_03a8a718(System___DTString_TypeInfo);
    DAT_08999240 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07cae774(0,*(undefined8 *)System___DTString_TypeInfo,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_07cae774(0,*(undefined8 *)
                    System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo,0);
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_07cae774(param_1,*(undefined8 *)System___DTString_TypeInfo,0);
    }
    if (param_2 != 0) {
      lVar2 = *(long *)(param_2 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_07cae774(param_2,*(undefined8 *)
                              System_Runtime_Serialization_Formatters_Binary___BinaryWriter_TypeInfo
                     ,0);
      }
      if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      if (DAT_089992b0 == (code *)0x0) {
        DAT_089992b0 = (code *)FUN_03a8a6dc(
                                           "UnityEngine.Physics::IgnoreCollision_Injected(System.IntPtr,System.IntPtr,System.Boolean)"
                                           );
      }
                    /* WARNING: Could not recover jumptable at 0x07d28088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_089992b0)(lVar1,lVar2,param_3 & 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


