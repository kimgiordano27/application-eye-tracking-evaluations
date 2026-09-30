/*
FUNCTION_NAME: Unity.Mathematics.math$$round
ENTRY_POINT: 03b25d44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Mathematics_math__round(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x23 + 0x3b2) = 1;
  in_stack_00000100 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  if (unaff_x21 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar3 = Method_Drawing_CommandBuilder_Reserve<Color32,_CommandBuilder_CircleData>__;
  }
  else {
    uVar2 = FUN_0340eec4();
    if ((uVar2 & 1) == 0) {
      if (-1 < unaff_w22) {
        uVar1 = FUN_03b1dd98();
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_00000138 = 0;
        in_stack_00000130 = 0;
        in_stack_00000148 = 0;
        in_stack_00000140 = 0;
        in_stack_00000158 = 0;
        in_stack_00000150 = 0;
        in_stack_00000168 = 0;
        in_stack_00000160 = 0;
        in_stack_00000170 = 0;
        lVar6 = *(long *)(unaff_x21 + 200);
        if (lVar6 == 0) {
          FUN_03b1da04();
          lVar6 = *(long *)(unaff_x21 + 200);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        puVar3 = StringLiteral_11619;
        _in_stack_00000110 = Unity_Mathematics_math__cos(lVar6);
        FUN_02616114(&stack0x00000058,&stack0x00000110,uVar1,*(undefined8 *)puVar3);
        memcpy(&stack0x000000b0,&stack0x00000058,0x58);
        auVar7 = FUN_03b3be0c(&stack0x000000b0,0);
        Unity_Mathematics_math__forward(&stack0x00000120,auVar7._0_8_,auVar7._8_8_,0);
        memcpy(&stack0x00000000,&stack0x00000120,0x58);
        FUN_03b256d4(&stack0x00000058);
        unaff_x19[2] = in_stack_00000068;
        unaff_x19[1] = in_stack_00000060;
        *unaff_x19 = in_stack_00000058;
        return;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar4 = thunk_FUN_01f117cc();
      uVar5 = thunk_FUN_01efb3a4(StringLiteral_11698);
      FUN_034f7db4(uVar4,uVar5,0);
      goto LAB_03b25ee8;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    puVar3 = Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar3);
  FUN_034efd20(uVar4,uVar5,0);
LAB_03b25ee8:
  uVar5 = thunk_FUN_01efb3a4(StringLiteral_11699);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,uVar5);
}


