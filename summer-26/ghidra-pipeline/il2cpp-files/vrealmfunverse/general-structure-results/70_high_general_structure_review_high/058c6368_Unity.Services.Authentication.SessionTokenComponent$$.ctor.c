/*
FUNCTION_NAME: Unity.Services.Authentication.SessionTokenComponent$$.ctor
ENTRY_POINT: 058c6368
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_Authentication_SessionTokenComponent___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x19;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_03240a7c(&stack0x00000070,*(long *)(unaff_x19 + 0x48),3,0,1,
                 *(undefined8 *)Method_System_Collections_Generic_Queue<EventBase>__ctor__);
    puVar4 = Method_System_Collections_Generic_Queue<Event>_Clear__;
    puVar3 = Method_System_Collections_Generic_Queue<Event>__ctor__;
    puVar2 = Method_Unity_Properties_Property<Vector4,_float>__ctor__;
    puVar1 = Method_Unity_Properties_Property<Vector3Int,_int>__ctor__;
    in_stack_000001e0 = in_stack_00000090;
    in_stack_000001c8 = in_stack_00000078;
    in_stack_000001c0 = in_stack_00000070;
    in_stack_000001d8 = in_stack_00000088;
    in_stack_000001d0 = in_stack_00000080;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      FUN_03240a7c(&stack0x00000048,*(long *)(unaff_x19 + 0x48),3,0,1,
                   *(undefined8 *)Method_System_Collections_Generic_Queue<EventBase>_Clear__);
      in_stack_00000198 = in_stack_00000050;
      in_stack_00000190 = in_stack_00000048;
      in_stack_000001a8 = in_stack_00000060;
      in_stack_000001a0 = in_stack_00000058;
      in_stack_000001b0 = in_stack_00000068;
      FUN_058c67b4();
      FUN_03aaf56c(&stack0x00000188,*(undefined8 *)puVar1);
      in_stack_00000170 = FUN_058c692c();
      FUN_03aaf56c(&stack0x00000188,*(undefined8 *)puVar1);
      FUN_058c6a3c();
      FUN_058c6ab0();
      FUN_058c6be8();
      FUN_058c6c60();
      FUN_03aaf56c(&stack0x00000170,*(undefined8 *)puVar1);
      FUN_058c6ca8();
      FUN_03aaf56c(&stack0x00000180,*(undefined8 *)puVar1);
      FUN_03aabdac(&stack0x00000178,*(undefined8 *)puVar3);
      FUN_058c6e80();
      FUN_05c7fedc(&stack0x00000280,0);
      FUN_05c7fe74(&stack0x00000250,0);
      FUN_05c7fe74(&stack0x00000220,0);
      FUN_05c7fe74(&stack0x000001c0,0);
      FUN_05c7fe74(&stack0x000001f0,0);
      FUN_05c7fe74(&stack0x00000190,0);
      FUN_03aaf444(&stack0x00000188,*(undefined8 *)puVar2);
      FUN_03aaf444(&stack0x00000170,*(undefined8 *)puVar2);
      FUN_03aaf444(&stack0x00000180,*(undefined8 *)puVar2);
      FUN_03aabc84(&stack0x00000178,*(undefined8 *)puVar4);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_058ec170(*(long *)(unaff_x19 + 0x38),0);
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          FUN_058c38ac();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


