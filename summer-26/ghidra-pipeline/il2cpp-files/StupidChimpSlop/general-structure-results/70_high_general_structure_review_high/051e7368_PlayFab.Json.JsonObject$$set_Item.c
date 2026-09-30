/*
FUNCTION_NAME: PlayFab.Json.JsonObject$$set_Item
ENTRY_POINT: 051e7368
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void PlayFab_Json_JsonObject__set_Item(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0x3c8));
  FUN_02d4dc40(UnityEngine_UIElements_TemplateAsset_UxmlSerializedDataOverride_var);
  FUN_02d4dc40(PTR_DAT_0664b8a0);
  FUN_02d4dc40(UnityEngine_UIElements_TextElement_GlyphsEnumerable_var);
  *(undefined1 *)(unaff_x20 + 0xf44) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (long *)0x0;
  if ((unaff_x19 != 0) &&
     (lVar5 = System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncUnit>>>>>__System_Collections_IEnumerator_get_Current
                        (), puVar4 = UnityEngine_UIElements_TemplateAsset_AttributeOverride_var,
     puVar3 = UnityEngine_UIElements_UIR_TempMeshAllocatorImpl_ThreadData_var,
     puVar2 = PTR_DAT_0664b8a0, lVar5 != 0)) {
    System_Threading_Tasks_ValueTask<int>___ctor
              (&stack0x00000018,lVar5,
               *(undefined8 *)UnityEngine_UIElements_TextElement_GlyphsEnumerable_var);
    while (uVar6 = FUN_04a25ca0(&stack0x00000018,*(undefined8 *)puVar4), (uVar6 & 1) != 0) {
      if (in_stack_00000028 != (long *)0x0) {
        lVar5 = *in_stack_00000028;
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(lVar5 + 0x130)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          (**(code **)(lVar5 + 0x1a8))(in_stack_00000028,*(undefined8 *)(lVar5 + 0x1b0));
        }
      }
    }
    FUN_04a25c9c(&stack0x00000018,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


