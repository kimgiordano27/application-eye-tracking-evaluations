/*
FUNCTION_NAME: FUN_01967d7c
ENTRY_POINT: 01967d7c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01967d7c(undefined8 param_1,long param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
                    /* catch() { ... } // from try @ 01967d00 with catch @ 01967d7c */
                    /* catch() { ... } // from try @ 01967ca8 with catch @ 01967d88
                       catch() { ... } // from try @ 01967d40 with catch @ 01967d88
                       catch() { ... } // from try @ 01967d74 with catch @ 01967d88 */
  if ((DAT_0377a2ad & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<StyleSheet>_Contains__);
    thunk_FUN_00d48444(StringLiteral_4611);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitEnd_11_2>d>__
                      );
    thunk_FUN_00d48444(Method_OVRScene_ValidateRequestString__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
    DAT_0377a2ad = 1;
  }
  puVar5 = StringLiteral_4611;
  puVar4 = Method_OVRScene_ValidateRequestString__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonWriter_<<InternalWriteEndAsync>g__AwaitEnd_11_2>d>__
  ;
  puVar2 = Method_System_Collections_Generic_List<StyleSheet>_Contains__;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if (param_2 != 0) {
    FUN_01323390(param_2,&local_58,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
    while (uVar6 = FUN_012b894c(&local_58,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
      plVar7 = (long *)FUN_00bf85ac(&local_58,*(undefined8 *)puVar4);
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 300);
        if ((bVar1 <= *(byte *)(*plVar7 + 300)) &&
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          FUN_02689f9c(plVar7,param_3 & 1,0);
        }
      }
    }
    FUN_012b8948(&local_58,*(undefined8 *)puVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


