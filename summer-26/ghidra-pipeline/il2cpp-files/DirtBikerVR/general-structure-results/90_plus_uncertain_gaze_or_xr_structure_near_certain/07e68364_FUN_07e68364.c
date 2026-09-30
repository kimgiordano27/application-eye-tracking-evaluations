/*
FUNCTION_NAME: FUN_07e68364
ENTRY_POINT: 07e68364
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_07e68364(void *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 local_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  long local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_64;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_get_Task__;
                    /* try { // try from 07e68394 to 07f6839b has its CatchHandler @ 07e69080 */
  if ((DAT_0899a8b4 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Create__
                );
                    /* try { // try from 07e683cc to 07f683cf has its CatchHandler @ 07e690b8 */
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_SetException__
                );
    FUN_03a8a718(OVRPlugin_OverlayShape_TypeInfo);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_SetResult__
                );
                    /* try { // try from 07e683f0 to 07f683fb has its CatchHandler @ 07e690ac */
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_SetStateMachine__
                );
    FUN_03a8a718(OVRPlugin_OVRP_0_1_2_TypeInfo);
                    /* try { // try from 07e68408 to 07f6840b has its CatchHandler @ 07e690b4 */
    FUN_03a8a718(UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_get_Task__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<Session>>_get_Task__
                );
    DAT_0899a8b4 = 1;
  }
  lVar7 = *(long *)puVar2;
  local_64 = 0;
  local_d0 = 0;
  local_100 = 0;
                    /* try { // try from 07e6844c to 07f6845b has its CatchHandler @ 07e691a4 */
  local_130 = 0;
  local_128 = 0;
  puStack_118 = (undefined8 *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  lStack_e0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_140 = 0;
                    /* try { // try from 07e68468 to 07f68473 has its CatchHandler @ 07e691a8 */
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar7 = *(long *)puVar2;
  }
  puVar11 = *(undefined8 **)(lVar7 + 0xb8);
  lVar12 = puVar11[1];
  if (lVar12 == 0) {
                    /* try { // try from 07e68484 to 07f68487 has its CatchHandler @ 07e690cc */
                    /* try { // try from 07e68488 to 07f68493 has its CatchHandler @ 07e6915c */
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      puVar11 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar13 = *puVar11;
    lVar12 = thunk_FUN_03ac74bc(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                               );
                    /* try { // try from 07e684c4 to 07f684c7 has its CatchHandler @ 07e6909c */
    FUN_05d18810(lVar12,uVar13,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_get_Task__
                 ,0);
                    /* try { // try from 07e684c8 to 07f684d3 has its CatchHandler @ 07e690b0 */
    plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar8 = lVar12;
    thunk_FUN_03afed3c(plVar8,lVar12);
  }
                    /* try { // try from 07e684e4 to 07f684e7 has its CatchHandler @ 07e6909c */
                    /* try { // try from 07e684e8 to 07f684f3 has its CatchHandler @ 07e69084 */
                    /* try { // try from 07e68508 to 07f6851b has its CatchHandler @ 07e6916c */
  if (((param_4 != 0) &&
      (FUN_04e4df0c(param_4,lVar12,
                    *(undefined8 *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_SetStateMachine__
                   ), param_3 != 0)) &&
     (plVar8 = (long *)FUN_07e086b4(param_3,0), plVar8 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar8 + 0x158))(plVar8,*(undefined8 *)(*plVar8 + 0x160));
    local_64 = *(undefined4 *)(param_2 + 0x30);
                    /* try { // try from 07e6852c to 07f6853b has its CatchHandler @ 07e69114 */
    iVar4 = FUN_067637b0(&local_64,0);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_SetResult__
    ;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Create__
    ;
    if ((*(long *)(param_2 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x18), lVar7 != 0)) {
                    /* try { // try from 07e68548 to 07f68553 has its CatchHandler @ 07e690ec */
                    /* try { // try from 07e68554 to 07f68563 has its CatchHandler @ 07e690e8 */
      uVar14 = (long)iVar3 * 0x18d ^ (long)iVar4;
      iVar4 = FUN_07e32284(lVar7,0);
      FUN_04e4ce2c(&local_1b0,param_4,*(undefined8 *)puVar1);
      iVar3 = 0;
      local_d0 = local_190;
      puStack_e8 = puStack_1a8;
      local_f0 = local_1b0;
      uStack_d8 = uStack_198;
      lStack_e0 = lStack_1a0;
      local_1b0 = 0;
      puStack_1a8 = &local_f0;
      while (uVar9 = FUN_061cfaf0(&local_f0,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
        if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(long *)(local_d0 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        iVar3 = *(int *)(*(long *)(local_d0 + 0x28) + 0x1c) + iVar3;
      }
      FUN_061cfaec(&local_f0,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                  );
      if (0 < iVar3) {
        if ((*(long *)(param_2 + 0x38) == 0) || (*(long *)(param_2 + 0x10) == 0)) goto LAB_07e689a0;
        FUN_07e31da8(*(long *)(param_2 + 0x10),*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
      }
      FUN_04e4ce2c(&local_1b0,param_4,*(undefined8 *)puVar1);
      local_100 = local_190;
      puStack_118 = puStack_1a8;
      local_120 = local_1b0;
      uStack_108 = uStack_198;
      local_110 = lStack_1a0;
      local_1b0 = 0;
      puStack_1a8 = &local_120;
      while (uVar9 = FUN_061cfaf0(&local_120,*(undefined8 *)puVar2), lVar12 = local_100,
            lVar7 = local_110, (uVar9 & 1) != 0) {
        if (local_100 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        iVar10 = *(int *)(local_100 + 0x40);
        iVar5 = FUN_07e2cafc(local_100,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        iVar6 = FUN_07e2e4b4(lVar7,0);
        uVar14 = ((uVar14 * 0x18d ^ (long)iVar6) * 0x18d ^ (long)iVar10) * 0x18d ^ (long)iVar5;
        if (*(long *)(lVar12 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (0 < *(int *)(*(long *)(lVar12 + 0x28) + 0x1c)) {
          FUN_07e68e2c(param_2,lVar7);
        }
      }
      FUN_061cfaec(&local_120,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                  );
      local_128 = *(undefined8 *)(param_3 + 0x268);
      lVar7 = FUN_07e13e44(&local_128,0);
      puVar1 = OVRPlugin_OVRP_0_1_2_TypeInfo;
      if (lVar7 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(lVar7 + 0x1f0);
      }
      uVar14 = uVar14 * 0x18d ^ (long)iVar10;
      if (iVar3 < 1) {
        uVar14 = uVar14 * 0x18d ^ (long)iVar4;
        puVar11 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_SetResult__
        ;
      }
      else {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_07e689a0;
        iVar3 = FUN_07e32284(*(long *)(param_2 + 0x10),0);
        puVar11 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_SetResult__
        ;
        uVar14 = uVar14 * 0x18d ^ (long)iVar3;
        if (iVar4 != iVar3) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar9 = FUN_07e666e0(iVar3,&local_130);
          if ((uVar9 & 1) == 0) {
            uVar15 = *(undefined8 *)(param_2 + 0x10);
            uVar13 = thunk_FUN_03ac74bc(*(undefined8 *)
                                         UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                                       );
            FUN_07e32068(uVar13,uVar15,0);
            local_130 = uVar13;
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07e66770(iVar3,uVar13);
          }
          if (*(long *)(param_2 + 0x38) == 0) goto LAB_07e689a0;
          *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18) = local_130;
          thunk_FUN_03afed3c();
        }
      }
      if (*(long *)(param_2 + 0x38) != 0) {
        *(undefined8 *)(param_3 + 0x1e8) = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18);
        thunk_FUN_03afed3c(param_3 + 0x1e8);
        if (*(long *)(param_2 + 0x10) != 0) {
          FUN_07e31eb4(*(long *)(param_2 + 0x10),0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar9 = FUN_07e665a0(uVar14,&local_c0);
          if ((uVar9 & 1) == 0) {
            if (lVar7 == 0) {
              if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
                thunk_FUN_03ae8be4();
              }
              uVar13 = FUN_07ea20f8(0);
            }
            else {
              FUN_07dfdfd8(lVar7,0);
              uVar13 = FUN_07dfdfd8(lVar7,0);
            }
            FUN_07f6ecc4(&local_1b0,uVar13,0);
            memcpy(&local_c0,&local_1b0,0x50);
            uStack_88 = uVar14;
            uVar16 = FUN_07e051cc(param_3,0);
            FUN_04e4ce2c(&local_160,param_4,*puVar11);
            local_1b0 = 0;
            puStack_1a8 = &local_160;
            while (uVar9 = FUN_061cfaf0(&local_160,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
              if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03a8a9c0();
              }
              FUN_07eaead8(uVar16,*(long *)(param_2 + 0x40),local_150,local_140,
                           *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x18),0);
              FUN_07f6f240(&local_c0,*(undefined8 *)(param_2 + 0x40),uVar13,0);
            }
            FUN_061cfaec(&local_160,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                        );
            FUN_07f69fa8(&local_c0,uVar13,0);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            FUN_07e66630(uVar14,&local_c0);
          }
          memcpy(param_1,&local_c0,0x50);
          return;
        }
      }
    }
  }
LAB_07e689a0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


