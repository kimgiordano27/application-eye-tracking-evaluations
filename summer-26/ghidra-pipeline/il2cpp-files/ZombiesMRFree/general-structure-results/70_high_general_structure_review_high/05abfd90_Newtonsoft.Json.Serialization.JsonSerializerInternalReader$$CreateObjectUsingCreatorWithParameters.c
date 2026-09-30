/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObjectUsingCreatorWithParameters
ENTRY_POINT: 05abfd90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObjectUsingCreatorWithParameters
               (undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x25;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    thunk_FUN_03048534(param_1);
    in_stack_00000018 = unaff_x22;
    thunk_FUN_03048534();
    thunk_FUN_0301043c(*unaff_x23);
    FUN_05b11c68();
    iVar2 = (**(code **)(*unaff_x20 + 0x298))();
    lVar1 = unaff_x25 + 1;
    if ((long)iVar2 <= unaff_x25 + -3) {
      return;
    }
    lVar3 = unaff_x20[2];
    if (lVar3 == 0) break;
    if ((ulong)*(uint *)(lVar3 + 0x18) <= unaff_x25 - 3U) {
LAB_05abfe10:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar4 = unaff_x20[3];
    if (lVar4 == 0) break;
    if ((ulong)*(uint *)(lVar4 + 0x18) <= unaff_x25 - 3U) goto LAB_05abfe10;
    in_stack_00000010 = *(undefined8 *)(lVar3 + lVar1 * 8);
    unaff_x22 = *(undefined8 *)(lVar4 + lVar1 * 8);
    param_1 = &stack0x00000010;
    unaff_x25 = lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


