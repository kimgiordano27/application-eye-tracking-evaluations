/*
FUNCTION_NAME: Unity.Mathematics.math$$sqrt
ENTRY_POINT: 03b2a55c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


long Unity_Mathematics_math__sqrt(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int unaff_w20;
  undefined4 in_stack_00000000;
  int in_stack_00000058;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
  lVar7 = thunk_FUN_01f117cc();
  FUN_03b2a854();
  puVar6 = StringLiteral_11771;
  puVar5 = StringLiteral_11770;
  puVar4 = StringLiteral_11769;
  puVar3 = StringLiteral_11767;
  puVar2 = StringLiteral_11766;
  puVar1 = StringLiteral_11693;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = FUN_03b2a8f0(lVar7);
  *(undefined4 *)(lVar7 + 0xf4) = 0x3d4ccccd;
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar3);
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar6);
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar2);
  uVar8 = FUN_03b2aa68(uVar8,*(undefined8 *)puVar5);
  FUN_03b2aa68(uVar8,*(undefined8 *)puVar4);
  FUN_03b2c1e4();
  *(uint *)(lVar7 + 0x168) = *(uint *)(lVar7 + 0x168) | 0x200;
  uVar8 = FUN_03b41740(*(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),0);
  uVar9 = FUN_0340e600(uVar8,*(undefined8 *)puVar1,0);
  if ((uVar9 & 1) != 0) {
    uVar8 = *(undefined8 *)StringLiteral_11768;
    FUN_03b2c1e4(lVar7);
    *(undefined8 *)(lVar7 + 0xc0) = uVar8;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0xc0),uVar8);
  }
  if (unaff_w20 < 0) {
    return lVar7;
  }
  _in_stack_00000110 = FUN_03b1c7b8();
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (unaff_w20 < in_stack_00000110._12_4_) {
    FUN_02616114(&stack0x00000058,&stack0x00000110,unaff_w20,*(undefined8 *)StringLiteral_11619);
    memcpy(&stack0x000000b0,&stack0x00000058,0x58);
    uVar9 = FUN_03b31370(&stack0x000000b0,0);
    if ((uVar9 & 1) == 0) {
      FUN_03b2ac14(lVar7,unaff_w20);
      return lVar7;
    }
    uVar8 = thunk_FUN_01efb3a4(StringLiteral_11619);
    thunk_FUN_02616114(&stack0x00000110,unaff_w20,uVar8);
    memcpy(&stack0x00000058,&stack0x00000000,0x58);
    memcpy(&stack0x00000000,&stack0x00000058,0x58);
    thunk_FUN_01efb3a4(StringLiteral_11665);
    uVar8 = thunk_FUN_01f113fc();
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11774);
    uVar8 = FUN_0340f2f0(uVar10,uVar8);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar11 = thunk_FUN_01f117cc();
    FUN_0356adc8(uVar11,uVar8,0);
  }
  else {
    in_stack_00000058 = unaff_w20;
    uVar8 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    uVar8 = thunk_FUN_01f113fc(uVar8,&stack0x00000058);
    thunk_FUN_01efb3a4(StringLiteral_11707);
    in_stack_00000000 = in_stack_00000118._4_4_;
    thunk_FUN_01efb3a4(puVar1);
    thunk_FUN_01f113fc();
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11581);
    uVar8 = FUN_0340f334(uVar10,uVar8);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar11 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(StringLiteral_11773);
    FUN_034f3578(uVar11,uVar8,uVar10,0);
  }
  uVar8 = thunk_FUN_01efb3a4(StringLiteral_11772);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar11,uVar8);
}


