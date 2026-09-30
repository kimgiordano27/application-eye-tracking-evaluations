/*
FUNCTION_NAME: Unity.Services.Core.Device.UnityAnalyticsIdentifier$$.ctor
ENTRY_POINT: 058ccd78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16]
Unity_Services_Core_Device_UnityAnalyticsIdentifier___ctor
          (float param_1,undefined8 param_2,void *param_3,void *param_4,void *param_5,
          undefined8 *param_6,undefined8 param_7,undefined8 *param_8,long param_9)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 uStack_608;
  undefined1 auStack_5f8 [184];
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined1 auStack_500 [176];
  undefined8 uStack_450;
  undefined1 auStack_444 [4];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  byte bStack_384;
  byte bStack_383;
  undefined2 uStack_382;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  undefined1 uStack_370;
  undefined4 uStack_36f;
  undefined3 uStack_36b;
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [16];
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined1 auStack_304 [236];
  undefined1 auStack_218 [176];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [232];
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  if ((DAT_066d330d & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_ToArray__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Count__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Item__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputUser>__ctor__);
    DAT_066d330d = 1;
  }
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputUser>__ctor__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Item__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_get_Count__;
  uStack_3b0 = 0;
  uStack_3b8 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_408 = 0;
  uStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  auStack_444[0] = 0;
  uStack_450 = 0;
  memset(auStack_f4,0,0xec);
  memset(auStack_500,0,0xb0);
  uStack_520 = 0;
  uStack_518 = 0;
  uStack_514 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uStack_50c = 0;
  uVar18 = FUN_05c52630(0);
  uVar19 = FUN_05c52658(0);
  thunk_FUN_058cf664(uVar18,uVar19,param_3,&uStack_3b8,&uStack_3f0,&uStack_400,(long)&uStack_408 + 4
                     ,&uStack_408,0);
  if (param_9 != 0) {
    uStack_450 = *(undefined8 *)((long)param_3 + 0x88);
    uVar18 = FUN_05ccc4cc(&uStack_450,0);
    auVar25 = FUN_058c1d48(&uStack_3b8);
    FUN_058e9be4(param_9,uVar18,auVar25._0_8_,auVar25._8_8_,0);
  }
  uStack_538 = param_6[1];
  uStack_540 = *param_6;
  uStack_528 = param_6[3];
  uStack_530 = param_6[2];
  memcpy(auStack_5f8,param_3,0xb8);
  auVar25 = FUN_058ccad4(param_2,&uStack_540,auStack_5f8,&uStack_440,auStack_444);
  memset(auStack_f4,0,0xec);
  uVar14 = *param_8;
  uVar18 = *(undefined4 *)((long)param_3 + 0x7c);
  auVar26 = FUN_03ab96f4(&uStack_400,*(undefined8 *)puVar5);
  auVar27 = FUN_03ab9ebc(&uStack_3f8,*(undefined8 *)puVar3);
  auVar28 = FUN_058c1cbc(&uStack_3b8);
  auVar29 = FUN_03abb740(&uStack_3f0,*(undefined8 *)puVar4);
  uVar9 = uStack_3c8;
  uVar8 = uStack_3d0;
  uVar7 = uStack_3d8;
  uVar13 = uStack_3e0;
  uVar15 = uStack_3e8;
  bVar1 = *(byte *)((long)param_3 + 0x84);
  uStack_520 = *(undefined8 *)((long)param_3 + 0x20);
  uVar17 = *(undefined8 *)((long)param_3 + 0x2c);
  uStack_518 = (undefined4)*(undefined8 *)((long)param_3 + 0x28);
  uStack_50c = (undefined4)*(undefined8 *)((long)param_3 + 0x34);
  uStack_508 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x34) >> 0x20);
  uStack_514 = (undefined4)uVar17;
  uStack_510 = (undefined4)((ulong)uVar17 >> 0x20);
  uVar16 = uStack_3d0;
  FUN_05cc3e30(&uStack_520,0);
  uVar22 = (undefined4)uVar16;
  uVar21 = (undefined4)uVar17;
  uVar20 = FUN_057e3040(0);
  fVar23 = (float)uStack_408 * (float)uStack_408;
  uStack_520 = *(undefined8 *)((long)param_3 + 0x20);
  fVar24 = uStack_408._4_4_ * uStack_408._4_4_;
  param_1 = param_1 * DAT_010322e0;
  uStack_518 = (undefined4)*(undefined8 *)((long)param_3 + 0x28);
  uStack_50c = (undefined4)*(undefined8 *)((long)param_3 + 0x34);
  uStack_508 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x34) >> 0x20);
  uStack_514 = (undefined4)*(undefined8 *)((long)param_3 + 0x2c);
  uStack_510 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0x2c) >> 0x20);
  bVar10 = FUN_05cc3dd4(&uStack_520,0);
  uVar6 = auStack_444[0];
  memcpy(auStack_f0,param_4,0xe8);
  memcpy(auStack_500,param_5,0xb0);
  uVar16 = *(undefined8 *)((long)param_3 + 0xb0);
  uVar11 = FUN_05c52680(0);
  uVar19 = *(undefined4 *)((long)param_3 + 0x90);
  uVar17 = *(undefined8 *)((long)param_3 + 0x98);
  uVar12 = FUN_058d9308(param_4,0);
  uStack_382 = 0;
  uStack_370 = uVar6;
  uStack_36f = 0;
  uStack_36b = 0;
  uStack_608 = (undefined4)uVar9;
  uStack_320 = uVar13;
  uStack_328 = uVar15;
  uStack_310 = uVar8;
  uStack_318 = uVar7;
  uStack_308 = uStack_608;
  uVar15 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_ToArray__;
  uStack_3a8 = uVar14;
  uStack_3a0 = uVar18;
  uStack_39c = uVar20;
  uStack_398 = uVar21;
  uStack_394 = uVar22;
  fStack_390 = fVar23;
  fStack_38c = fVar24;
  fStack_388 = param_1;
  bStack_384 = bVar10 & 1;
  bStack_383 = bVar1 & 1;
  uStack_380 = uVar11;
  uStack_37c = uVar19;
  uStack_378 = uVar17;
  auStack_368 = auVar26;
  auStack_358 = auVar27;
  auStack_348 = auVar28;
  auStack_338 = auVar29;
  memcpy(auStack_304,auStack_f4,0xec);
  memcpy(auStack_218,auStack_500,0xb0);
  uStack_150 = uStack_438;
  uStack_158 = uStack_440;
  uStack_140 = uStack_428;
  uStack_148 = uStack_430;
  uStack_128 = in_stack_00000090;
  uStack_120 = in_stack_00000098;
  uStack_130 = uStack_418;
  uStack_138 = uStack_420;
  uStack_118 = in_stack_000000a0;
  uStack_110 = in_stack_000000a8;
  uStack_108 = in_stack_000000b0;
  uStack_100 = in_stack_000000b8;
  uStack_168 = param_7;
  uStack_160 = uVar16;
  auVar25 = FUN_031e9258(&uStack_3a8,uVar12,0x20,auVar25._0_8_,auVar25._8_8_,uVar15);
  uVar13 = auVar25._8_8_;
  uVar15 = auVar25._0_8_;
  FUN_058c1e14(&uStack_3b8,uVar15,uVar13);
  FUN_058c2810(&uStack_400,uVar15,uVar13);
  FUN_058c2f6c(&uStack_3f0,uVar15,uVar13);
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
    return auVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


