/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 037cc994
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Qpl_Annotation>
               (undefined8 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16],long param_5,undefined1 *param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long *unaff_x21;
  void *unaff_x22;
  long lVar3;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
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
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 uStack00000000000000f0;
  
  uVar8 = param_4._8_8_;
  uVar7 = param_4._0_8_;
  uVar6 = param_3._8_8_;
  uVar5 = param_3._0_8_;
  uVar4 = param_2._8_8_;
  uVar2 = param_2._0_8_;
  uStack00000000000000f0 = param_1;
  while( true ) {
    unaff_x27[1] = uVar4;
    *unaff_x27 = uVar2;
    unaff_x27[3] = uVar6;
    unaff_x27[2] = uVar5;
    unaff_x27[5] = uVar8;
    unaff_x27[4] = uVar7;
    FUN_05001b48(param_5,param_6,param_7);
    lVar3 = *unaff_x21;
    FUN_037ccb14(&stack0x00000018);
    if (lVar3 == 0) break;
    uVar2 = *unaff_x19;
    unaff_x27[1] = in_stack_00000020;
    *unaff_x27 = in_stack_00000018;
    unaff_x27[3] = in_stack_00000030;
    unaff_x27[2] = in_stack_00000028;
    unaff_x27[5] = in_stack_00000040;
    unaff_x27[4] = in_stack_00000038;
    uStack00000000000000f0 = in_stack_00000048;
    FUN_05001b48(lVar3,&stack0x000000c0,uVar2);
    uVar1 = FUN_04ff655c(&stack0x000002d0,*unaff_x28);
    if ((uVar1 & 1) == 0) {
      FUN_037ccc38(in_stack_00000010);
      return;
    }
    FUN_04ff63e8(&stack0x000000c0,&stack0x000002d0,*unaff_x29);
    memcpy(&stack0x00000178,&stack0x000000c0,0xb0);
    memcpy(&stack0x00000228,unaff_x22,0xa8);
    lVar3 = *unaff_x21;
    FUN_037ccb14(&stack0x00000088);
    if (lVar3 == 0) break;
    uVar2 = *unaff_x19;
    unaff_x27[1] = in_stack_00000090;
    *unaff_x27 = in_stack_00000088;
    unaff_x27[3] = in_stack_000000a0;
    unaff_x27[2] = in_stack_00000098;
    unaff_x27[5] = in_stack_000000b0;
    unaff_x27[4] = in_stack_000000a8;
    uStack00000000000000f0 = in_stack_000000b8;
    FUN_05001b48(lVar3,&stack0x000000c0,uVar2);
    param_5 = *unaff_x21;
    FUN_037ccb14(&stack0x00000050);
    if (param_5 == 0) break;
    param_7 = *unaff_x19;
    param_6 = &stack0x000000c0;
    uStack00000000000000f0 = in_stack_00000080;
    uVar2 = in_stack_00000050;
    uVar4 = in_stack_00000058;
    uVar5 = in_stack_00000060;
    uVar6 = in_stack_00000068;
    uVar7 = in_stack_00000070;
    uVar8 = in_stack_00000078;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


