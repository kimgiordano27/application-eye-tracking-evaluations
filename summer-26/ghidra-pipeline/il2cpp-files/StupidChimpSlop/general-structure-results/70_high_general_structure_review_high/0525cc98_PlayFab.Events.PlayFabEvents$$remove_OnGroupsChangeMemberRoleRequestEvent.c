/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGroupsChangeMemberRoleRequestEvent
ENTRY_POINT: 0525cc98
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnGroupsChangeMemberRoleRequestEvent
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  code *in_x9;
  int unaff_w19;
  long unaff_x20;
  undefined1 unaff_w21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined1 in_stack_00000038;
  undefined1 in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000078;
  
  do {
    (*in_x9)(param_1,param_2);
    do {
      FUN_05254740(unaff_x22);
      if (unaff_x20 == 0) {
LAB_0525cda4:
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0525cda4;
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(undefined1 *)(lVar5 + (int)uVar1 + 0x20) = unaff_w21;
      }
      else {
        FUN_03611844();
      }
      do {
        uVar4 = FUN_04a08dd8(&stack0x00000040,*unaff_x23);
        if ((uVar4 & 1) == 0) {
          FUN_04a08efc(&stack0x00000040,
                       *(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
          if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          FUN_036122c4(&stack0x00000028);
          puVar3 = Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
          puVar2 = 
          UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
          ;
          while( true ) {
            uVar4 = FUN_049b0478(&stack0x00000028,*(undefined8 *)puVar2);
            if ((uVar4 & 1) == 0) {
              FUN_049b0474(&stack0x00000028,
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                          );
              return;
            }
            if (in_stack_00000078 == 0) break;
            FUN_0479b8e4(in_stack_00000078,in_stack_00000038,*(undefined8 *)puVar3);
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
      } while (*(int *)(in_stack_00000058 + 0x98) != unaff_w19);
      lVar5 = *(long *)(in_stack_00000058 + 0x48);
      unaff_x22 = in_stack_00000058;
      unaff_w21 = in_stack_00000050;
    } while (lVar5 == 0);
    param_1 = *(undefined8 *)(lVar5 + 0x40);
    param_2 = *(undefined8 *)(lVar5 + 0x28);
    in_x9 = *(code **)(lVar5 + 0x18);
  } while( true );
}


