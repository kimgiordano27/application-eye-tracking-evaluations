/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGroupsDeleteGroupRequestEvent
ENTRY_POINT: 0525d508
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


void PlayFab_Events_PlayFabEvents__remove_OnGroupsDeleteGroupRequestEvent(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 uStack0000000000000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  long in_stack_00000068;
  
  lVar5 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066480b0);
  FUN_03610fb4(lVar5,*(undefined8 *)PTR_DAT_066480a8);
  if (in_stack_00000068 != 0) {
    FUN_0479a870(in_stack_00000068,
                 *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
    puVar3 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
    puVar2 = PTR_DAT_06648098;
    in_stack_00000048 = in_stack_00000008;
    in_stack_00000040 = in_stack_00000000;
    in_stack_00000058 = in_stack_00000018;
    _uStack0000000000000050 = in_stack_00000010;
    in_stack_00000060 = in_stack_00000020;
    while (uVar6 = FUN_04a08dd8(&stack0x00000040,*(undefined8 *)puVar3), lVar8 = in_stack_00000058,
          (uVar6 & 1) != 0) {
      if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar7 = *(long *)(in_stack_00000058 + 0x48);
      uVar4 = uStack0000000000000050;
      uVar6 = _uStack0000000000000050 & 0xff;
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
      FUN_05254740(lVar8);
      if (lVar5 == 0) {
LAB_0525d6a0:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar7 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0525d6a0;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined1 *)(lVar8 + (int)uVar1 + 0x20) = uVar4;
      }
      else {
        FUN_03611844(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_04a08efc(&stack0x00000040,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo)
    ;
    if (lVar5 != 0) {
      FUN_036122c4(&stack0x00000028,lVar5,
                   *(undefined8 *)UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo)
      ;
      puVar3 = Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
      puVar2 = 
      UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
      ;
      while( true ) {
        uVar6 = FUN_049b0478(&stack0x00000028,*(undefined8 *)puVar2);
        if ((uVar6 & 1) == 0) {
          FUN_049b0474(&stack0x00000028,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                      );
          return;
        }
        if (in_stack_00000068 == 0) break;
        FUN_0479b8e4(in_stack_00000068,in_stack_00000038,*(undefined8 *)puVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


