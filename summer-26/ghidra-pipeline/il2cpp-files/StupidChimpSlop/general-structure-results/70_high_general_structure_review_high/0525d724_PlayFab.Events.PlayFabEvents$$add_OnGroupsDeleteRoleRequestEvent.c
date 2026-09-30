/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnGroupsDeleteRoleRequestEvent
ENTRY_POINT: 0525d724
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnGroupsDeleteRoleRequestEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000038;
  long in_stack_00000068;
  
  plVar4 = (long *)__cxa_begin_catch();
  lVar5 = *plVar4;
  __cxa_end_catch();
  FUN_04a08efc(in_stack_00000008,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee0(lVar5);
  }
  if (unaff_x19 != 0) {
    FUN_036122c4(&stack0x00000028);
    puVar2 = Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
    puVar1 = 
    UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
    ;
    while( true ) {
      uVar3 = FUN_049b0478(&stack0x00000028,*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        FUN_049b0474(&stack0x00000028,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                    );
        return;
      }
      if (in_stack_00000068 == 0) break;
      FUN_0479b8e4(in_stack_00000068,in_stack_00000038,*(undefined8 *)puVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


