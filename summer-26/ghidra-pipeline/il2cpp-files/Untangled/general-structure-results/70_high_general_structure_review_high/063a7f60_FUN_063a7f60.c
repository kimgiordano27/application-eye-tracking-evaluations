/*
FUNCTION_NAME: FUN_063a7f60
ENTRY_POINT: 063a7f60
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_063a7f60(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined4 param_4,undefined8 param_5,long param_6,long *param_7,undefined8 param_8
                 )

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined8 uVar61;
  undefined4 uVar62;
  undefined1 auVar63 [16];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  
                    /* try { // try from 063a7f90 to 064a7fcf has its CatchHandler @ 063a83a0 */
  if ((DAT_071cd4cc & 1) == 0) {
    FUN_02f07e70(
                System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
                );
    FUN_02f07e70(UnityEngine_AudioListener_var);
    FUN_02f07e70(PlayFab_DataModels_FinalizeFileUploadsRequest_var);
    FUN_02f07e70(System_Action<IAsyncResult>_TypeInfo);
    FUN_02f07e70(PlayFab_EconomyModels_ExecuteInventoryOperationsResponse_var);
                    /* try { // try from 063a7fe4 to 064a8023 has its CatchHandler @ 063a839c */
    FUN_02f07e70(PTR_DAT_06d38bf0);
    FUN_02f07e70(PTR_DAT_06d3b150);
    FUN_02f07e70(System_Action<IDebugDisplaySettingsData>_TypeInfo);
    FUN_02f07e70(PlayFab_EconomyModels_TakedownItemReviewsResponse_var);
    FUN_02f07e70(System_Action<IGraphElement>_TypeInfo);
    FUN_02f07e70(System_Action<ILckCamera>_TypeInfo);
    FUN_02f07e70(System_Action<ILckMonitor>_TypeInfo);
                    /* try { // try from 063a8038 to 064a807f has its CatchHandler @ 063a8398 */
    FUN_02f07e70(System_Action<InputDevice>_TypeInfo);
    FUN_02f07e70(System_ComponentModel_StringConverter_var);
    FUN_02f07e70(System_Action<InputUpdateType>_TypeInfo);
    FUN_02f07e70(Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var);
    FUN_02f07e70(System_Type_var);
    DAT_071cd4cc = 1;
  }
  puVar3 = PTR_DAT_06d3b150;
  local_a8[0] = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
                    /* try { // try from 063a808c to 064a809b has its CatchHandler @ 063a8340 */
  local_f8 = 0;
  local_f0 = 0;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* try { // try from 063a809c to 064a80a7 has its CatchHandler @ 063a833c */
  cVar2 = *(char *)(param_6 + 0x2d8);
  lVar36 = *param_7;
  lVar35 = *(long *)(param_6 + 0x2c8);
  lVar34 = *(long *)(param_6 + 0x2d0);
                    /* try { // try from 063a80bc to 064a80c3 has its CatchHandler @ 063a832c */
  uVar22 = FUN_03b59e58(4,*(undefined8 *)PlayFab_DataModels_FinalizeFileUploadsRequest_var);
                    /* try { // try from 063a80d4 to 064a80db has its CatchHandler @ 063a8328 */
  FUN_062a6cd4(local_a8,lVar36,uVar22,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 063a80f0 to 064a80f7 has its CatchHandler @ 063a8324 */
  lVar23 = FUN_062e5930(0);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar23 = *(long *)(lVar23 + 0x10);
  if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* try { // try from 063a8108 to 064a811b has its CatchHandler @ 063a8320 */
  lVar24 = FUN_03bc39b4(lVar23,*(undefined8 *)System_Action<IDebugDisplaySettingsData>_TypeInfo);
                    /* try { // try from 063a8124 to 064a812f has its CatchHandler @ 063a831c */
  lVar25 = FUN_03bc39b4(lVar23,*(undefined8 *)PlayFab_EconomyModels_TakedownItemReviewsResponse_var)
  ;
                    /* try { // try from 063a813c to 064a814b has its CatchHandler @ 063a83c8 */
  lVar26 = FUN_03bc39b4(lVar23,*(undefined8 *)System_Action<IGraphElement>_TypeInfo);
  lVar27 = FUN_03bc39b4(lVar23,*(undefined8 *)System_Action<ILckCamera>_TypeInfo);
                    /* try { // try from 063a8168 to 064a816f has its CatchHandler @ 063a828c */
  lVar28 = FUN_03bc39b4(lVar23,*(undefined8 *)System_Action<ILckMonitor>_TypeInfo);
  lVar29 = FUN_03bc39b4(lVar23,*(undefined8 *)System_Action<InputDevice>_TypeInfo);
  lVar30 = FUN_03bc39b4(lVar23,*(undefined8 *)System_ComponentModel_StringConverter_var);
  lVar31 = FUN_03bc39b4(lVar23,*(undefined8 *)System_Action<InputUpdateType>_TypeInfo);
  lVar23 = param_7[0x54];
  if ((int)lVar23 != 1) {
    lVar34 = lVar35;
  }
  if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar32 = *(long **)(lVar31 + 0x38);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar22 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar31 + 0x40);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar57 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  if (*(int *)(*(long *)UnityEngine_AudioListener_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar22 = FUN_062db7e8(uVar22,0);
  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar32 = *(long **)(lVar25 + 0x50);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar61 = uVar57;
  uVar58 = param_3;
  fVar37 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  uVar62 = (undefined4)uVar58;
  uVar21 = (undefined4)uVar61;
  plVar32 = *(long **)(lVar25 + 0x58);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar38 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar25 + 0x40);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar39 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar32 = *(long **)(lVar24 + 0x38);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar40 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x40);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar41 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x48);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar42 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x50);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar43 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x58);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar44 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x60);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar45 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x68);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar46 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x70);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar47 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar24 + 0x78);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar48 = (float)(**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  if (lVar28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  plVar32 = *(long **)(lVar28 + 0x50);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar49 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar28 + 0x58);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar50 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar28 + 0x60);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar51 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar28 + 0x68);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar52 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  plVar32 = *(long **)(lVar28 + 0x38);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar53 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  local_b8 = CONCAT44(uVar21,uVar53);
  local_b0 = CONCAT44(param_4,uVar62);
  plVar32 = *(long **)(lVar28 + 0x40);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar53 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  local_c8 = CONCAT44(uVar21,uVar53);
  local_c0 = CONCAT44(param_4,uVar62);
  plVar32 = *(long **)(lVar28 + 0x48);
  if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar53 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
  local_d8 = CONCAT44(uVar21,uVar53);
  local_d0 = CONCAT44(param_4,uVar62);
  FUN_062db94c(&local_128,&local_b8,&local_c8,&local_d8,0);
  uVar19 = local_fc;
  uVar18 = local_100;
  uVar17 = local_104;
  uVar16 = local_108;
  uVar14 = local_10c;
  uVar12 = local_110;
  uVar10 = local_114;
  uVar8 = local_118;
  uVar6 = local_11c;
  uVar4 = local_120;
  uVar53 = local_124;
  uVar21 = local_128;
  if (lVar27 != 0) {
    plVar32 = *(long **)(lVar27 + 0x38);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar59 = local_100;
    uVar54 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    local_b8 = CONCAT44(uVar59,uVar54);
    local_b0 = CONCAT44(param_4,uVar62);
    plVar32 = *(long **)(lVar27 + 0x40);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar54 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    local_c8 = CONCAT44(uVar59,uVar54);
    local_c0 = CONCAT44(param_4,uVar62);
    plVar32 = *(long **)(lVar27 + 0x48);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar54 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    local_d8 = CONCAT44(uVar59,uVar54);
    local_d0 = CONCAT44(param_4,uVar62);
    FUN_062dbb54(&local_128,&local_b8,&local_c8,&local_d8,0);
    uVar15 = local_10c;
    uVar13 = local_110;
    uVar11 = local_114;
    uVar9 = local_118;
    uVar7 = local_11c;
    uVar5 = local_120;
    uVar54 = local_124;
    uVar59 = local_128;
    if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar32 = *(long **)(lVar29 + 0x38);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar60 = local_100;
    uVar55 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    local_b8 = CONCAT44(uVar60,uVar55);
    local_b0 = CONCAT44(param_4,uVar62);
    plVar32 = *(long **)(lVar29 + 0x40);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar55 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    local_c8 = CONCAT44(uVar60,uVar55);
    local_c0 = CONCAT44(param_4,uVar62);
    plVar32 = *(long **)(lVar29 + 0x48);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    FUN_062dbe00(&local_128,&local_b8,&local_c8,0);
    puVar3 = System_Action<IAsyncResult>_TypeInfo;
    iVar20 = *(int *)((long)param_7 + 0x2a4);
    if (*(int *)(*(long *)System_Action<IAsyncResult>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    fVar56 = (float)iVar20;
    thunk_FUN_066a3f40(fVar56,0.5 / (float)(iVar20 * iVar20),0.5 / fVar56,fVar56 / (fVar56 + -1.0),
                       lVar34,**(undefined4 **)(*(long *)puVar3 + 0xb8),0);
    uVar61 = 0;
    thunk_FUN_066a3f40(uVar22,uVar57,param_3,0,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4),0);
    plVar32 = *(long **)(lVar25 + 0x48);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar62 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    uVar22 = FUN_066beda4(0);
    uVar57 = FUN_066beda4(uVar57,0);
    uVar58 = FUN_066beda4(param_3,0);
    thunk_FUN_066a3f40(uVar22,uVar57,uVar58,uVar61,lVar34,uVar62,0);
    thunk_FUN_066a3f40(fVar40 / 100.0,fVar41 / 100.0,fVar42 / 100.0,0,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),0);
    thunk_FUN_066a3f40(fVar43 / 100.0,fVar44 / 100.0,fVar45 / 100.0,0,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),0);
    thunk_FUN_066a3f40(fVar46 / 100.0,fVar47 / 100.0,fVar48 / 100.0,0,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14),0);
    thunk_FUN_066a3f40(fVar37 / 360.0,fVar38 / 100.0 + 1.0,fVar39 / 100.0 + 1.0,0,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),0);
    thunk_FUN_066a3f40(uVar59,uVar54,uVar5,uVar7,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),0);
    thunk_FUN_066a3f40(uVar9,uVar11,uVar13,uVar15,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20),0);
    thunk_FUN_066a3f40(local_108,local_104,local_100,local_fc,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24),0);
    thunk_FUN_066a3f40(uVar21,uVar53,uVar4,uVar6,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28),0);
    thunk_FUN_066a3f40(uVar8,uVar10,uVar12,uVar14,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x2c),0);
    thunk_FUN_066a3f40(uVar16,uVar17,uVar18,uVar19,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30),0);
    thunk_FUN_066a3f40(uVar49,uVar50,uVar51,uVar52,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x34),0);
    thunk_FUN_066a3f40(local_128,local_124,local_120,local_11c,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38),0);
    thunk_FUN_066a3f40(local_118,local_114,local_110,local_10c,lVar34,
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c),0);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar32 = *(long **)(lVar26 + 0x38);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x40);
    lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar22 = FUN_062e3f7c(lVar35,0);
    FUN_066a34e4(lVar34,uVar21,uVar22,0);
    plVar32 = *(long **)(lVar26 + 0x40);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44);
    lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar22 = FUN_062e3f7c(lVar35,0);
    FUN_066a34e4(lVar34,uVar21,uVar22,0);
    plVar32 = *(long **)(lVar26 + 0x48);
    if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
    lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
    if (lVar35 != 0) {
      uVar22 = FUN_062e3f7c(lVar35,0);
      FUN_066a34e4(lVar34,uVar21,uVar22,0);
      plVar32 = *(long **)(lVar26 + 0x50);
      if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x4c);
      lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
      if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar22 = FUN_062e3f7c(lVar35,0);
      FUN_066a34e4(lVar34,uVar21,uVar22,0);
      plVar32 = *(long **)(lVar26 + 0x58);
      if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
      lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
      if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar22 = FUN_062e3f7c(lVar35,0);
      FUN_066a34e4(lVar34,uVar21,uVar22,0);
      plVar32 = *(long **)(lVar26 + 0x60);
      if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x54);
      lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
      if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar22 = FUN_062e3f7c(lVar35,0);
      FUN_066a34e4(lVar34,uVar21,uVar22,0);
      plVar32 = *(long **)(lVar26 + 0x70);
      if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
      lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
      if (lVar35 != 0) {
        uVar22 = FUN_062e3f7c(lVar35,0);
        FUN_066a34e4(lVar34,uVar21,uVar22,0);
        plVar32 = *(long **)(lVar26 + 0x68);
        if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar21 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x5c);
        lVar35 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
        if (lVar35 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar22 = FUN_062e3f7c(lVar35,0);
        FUN_066a34e4(lVar34,uVar21,uVar22,0);
        if ((int)lVar23 == 1) {
          FUN_066a3e18(lVar34,0,0);
          if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          plVar32 = *(long **)(lVar30 + 0x38);
          if (plVar32 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          iVar20 = (**(code **)(*plVar32 + 0x218))(plVar32,*(undefined8 *)(*plVar32 + 0x220));
          if (iVar20 == 1) {
            FUN_066a3958(lVar34,*(undefined8 *)System_Type_var,0);
          }
          else if (iVar20 == 2) {
            puVar1 = (undefined8 *)System_Type_var;
            if (cVar2 != '\0') {
              puVar1 = (undefined8 *)Meta_XR_ImmersiveDebugger_Manager_TweakEnum_var;
            }
            FUN_066a3958(lVar34,*puVar1,0);
          }
          plVar32 = param_7 + 3;
          uVar33 = FUN_0638de94(plVar32,0);
          if ((uVar33 & 1) != 0) {
            auVar63 = FUN_063915c8(plVar32,0);
            uVar21 = FUN_063916bc(plVar32,0);
            if (*(int *)(*(long *)PTR_DAT_06d38bf0 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_0638f180(auVar63._0_8_,auVar63._8_8_,uVar21,lVar30,&local_e8,0);
            FUN_0638f270(lVar30,&local_f8,0);
            puVar3 = PlayFab_EconomyModels_ExecuteInventoryOperationsResponse_var;
            lVar35 = *(long *)PlayFab_EconomyModels_ExecuteInventoryOperationsResponse_var;
            if (*(int *)(lVar35 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
              lVar35 = *(long *)puVar3;
            }
            thunk_FUN_066a3f40(local_e8 & 0xffffffff,local_e8._4_4_,local_e0 & 0xffffffff,
                               local_e0._4_4_,lVar34,
                               *(undefined4 *)(*(long *)(lVar35 + 0xb8) + 0xcc),0);
            thunk_FUN_066a3f40(local_f8 & 0xffffffff,local_f8._4_4_,local_f0 & 0xffffffff,
                               local_f0._4_4_,lVar34,
                               *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xd0),0);
            uVar21 = FUN_063916bc(plVar32,0);
            FUN_062e20cc(lVar34,uVar21,1,0);
          }
        }
        if (param_7[0x32] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_0627ba94(param_7[0x32],lVar36,0);
        if (param_7[0x32] != 0) {
          uVar33 = FUN_0627c6bc(param_7[0x32],0);
          if ((uVar33 & 1) != 0) {
            if (lVar36 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_066e4cbc(lVar36,0,0);
          }
          if (*(int *)(*(long *)
                        System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
                      + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_062d9b80(lVar36,param_8,param_8,2,0,lVar34,0,0);
          if (param_7[0x32] != 0) {
            FUN_0627bb60(param_7[0x32],lVar36,0);
            FUN_062a6cd8(local_a8,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


