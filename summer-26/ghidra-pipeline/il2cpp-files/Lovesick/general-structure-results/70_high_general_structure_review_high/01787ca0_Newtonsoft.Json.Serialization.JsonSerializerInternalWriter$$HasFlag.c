/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 01787ca0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x4a0));
  thunk_FUN_00d48444(StringLiteral_11839);
  *(undefined1 *)(unaff_x22 + 0xe33) = 1;
  puVar3 = Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<sbyte>__;
  puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_017b46ec();
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_01780344(uVar8);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar5 = (long *)FUN_01682720();
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    lVar7 = *(long *)System_Func<Spectrum_Point,_float>_TypeInfo;
    bVar1 = *(byte *)(lVar7 + 300);
    if ((*(byte *)(*plVar5 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) goto LAB_01787e24;
    *(long **)(unaff_x19 + 0x10) = plVar5;
    if ((*(byte *)(*plVar5 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) goto LAB_01787e24;
  }
  puVar2 = Method_System_Collections_Generic_List<InputDevice>_get_Item__;
  uVar4 = FUN_0168435c();
  FUN_01780344(*(undefined8 *)puVar2);
  plVar5 = (long *)FUN_01682618();
  if (plVar5 != (long *)0x0) {
    if (*(long *)(*plVar5 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_SetResult__
                 + 0x40)) {
LAB_01787e24:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar6 = (undefined4 *)thunk_FUN_00d624a0();
    *(undefined4 *)(unaff_x19 + 0x18) = *puVar6;
  }
  *(uint *)(unaff_x19 + 0x18) = *(uint *)(unaff_x19 + 0x18) | uVar4 & 1;
  return;
}


