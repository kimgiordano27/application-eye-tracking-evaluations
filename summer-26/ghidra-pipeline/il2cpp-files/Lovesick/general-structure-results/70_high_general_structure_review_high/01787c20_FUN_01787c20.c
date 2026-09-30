/*
FUNCTION_NAME: FUN_01787c20
ENTRY_POINT: 01787c20
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01787c20(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar2 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo;
  if ((DAT_03778e33 & 1) == 0) {
    thunk_FUN_00d48444(Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<sbyte>__);
    thunk_FUN_00d48444(System_Func<Spectrum_Point,_float>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<InputDevice>_get_Item__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_SetResult__
                      );
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ec8a8);
    thunk_FUN_00d48444(PTR_DAT_033f34a0);
    thunk_FUN_00d48444(StringLiteral_11839);
    DAT_03778e33 = 1;
  }
  puVar4 = Method_Sirenix_Serialization_IDataWriter_WritePrimitiveArray<sbyte>__;
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_017b46ec(param_1,0);
  uVar9 = *(undefined8 *)puVar4;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_01780344(uVar9);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  plVar6 = (long *)FUN_01682720(param_2,*(undefined8 *)StringLiteral_11839,uVar9,0);
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    lVar8 = *(long *)System_Func<Spectrum_Point,_float>_TypeInfo;
    bVar1 = *(byte *)(lVar8 + 300);
    if ((*(byte *)(*plVar6 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) goto LAB_01787e24;
    *(long **)(param_1 + 0x10) = plVar6;
    if ((*(byte *)(*plVar6 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + ((ulong)bVar1 - 1) * 8) != lVar8)) goto LAB_01787e24;
  }
  puVar3 = Method_System_Collections_Generic_List<InputDevice>_get_Item__;
  puVar2 = PTR_DAT_033f34a0;
  uVar5 = FUN_0168435c(param_2,*(undefined8 *)PTR_DAT_033ec8a8,0);
  uVar9 = FUN_01780344(*(undefined8 *)puVar3);
  plVar6 = (long *)FUN_01682618(param_2,*(undefined8 *)puVar2,uVar9,0);
  if (plVar6 != (long *)0x0) {
    if (*(long *)(*plVar6 + 0x40) !=
        *(long *)(*(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<string>>_SetResult__
                 + 0x40)) {
LAB_01787e24:
                    /* WARNING: Subroutine does not return */
      FUN_00da544c();
    }
    puVar7 = (undefined4 *)thunk_FUN_00d624a0();
    *(undefined4 *)(param_1 + 0x18) = *puVar7;
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | uVar5 & 1;
  return;
}


