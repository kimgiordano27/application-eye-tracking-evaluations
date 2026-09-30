/*
FUNCTION_NAME: FUN_06a05d60
ENTRY_POINT: 06a05d60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_06a05d60(long *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  if ((DAT_076e289d & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072a3f58);
    thunk_FUN_032e1da0(PTR_DAT_072a3f60);
    thunk_FUN_032e1da0(PTR_DAT_07279c50);
    thunk_FUN_032e1da0(Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    thunk_FUN_032e1da0(Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    DAT_076e289d = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uVar7 = FUN_06a03f28(param_1);
  if (*(long *)(param_2 + 0x168) != 0) {
    iVar2 = *(int *)(*(long *)(param_2 + 0x168) + 0x18);
    if (*(char *)((long)param_1 + 0x6c) == '\0') {
      if (((uVar7 & 0xff) != 0) && (0 < iVar2)) {
        FUN_06a04f9c(param_1);
      }
    }
    else {
      if (((uVar7 & 0xff) == 0) || (iVar2 == 0)) {
        FUN_06a04ed4(param_1);
        return;
      }
      if (param_1[7] != 0) {
        if ((uint)*(byte *)((long)param_1 + 0x6e) == (uVar7 & 0xff)) {
          bVar3 = *(byte *)((long)param_1 + 0x6d);
          bVar6 = UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_00000D09_PostfixBurstDelegate___ctor
                            (param_1);
          if (bVar3 != (bVar6 & 1)) {
            (**(code **)(*param_1 + 0x188))(param_1,param_1[7],*(undefined8 *)(*param_1 + 400));
          }
        }
        else {
          FUN_06a05a68(param_1);
          FUN_06a05294(param_1);
          puVar4 = 
          Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
          ;
          lVar9 = *(long *)
                   Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
          ;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
            lVar9 = *(long *)puVar4;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
          if (lVar9 != 0) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),uVar7,*(undefined8 *)(lVar9 + 0x28));
          }
          FUN_06a06194(param_1,uVar7);
          (**(code **)(*param_1 + 0x188))(param_1,param_1[7],*(undefined8 *)(*param_1 + 400));
          FUN_06a050f8(param_1);
          FUN_06a05734(param_1);
        }
      }
    }
    puVar4 = PTR_DAT_072794f0;
    lVar9 = FUN_06a03e9c(param_1);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar4);
    }
    uVar10 = FUN_06be9890(lVar9,0,0);
    puVar5 = PTR_DAT_072a3f60;
    puVar4 = PTR_DAT_07279c50;
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_2 + 0x168) == 0) goto LAB_06a06190;
      iVar2 = *(int *)(*(long *)(param_2 + 0x168) + 0x18);
      if (0 < iVar2) {
        iVar13 = 0;
        do {
          if (*(long *)(param_2 + 0x170) == 0) goto LAB_06a06190;
          uVar8 = FUN_0418d880(*(long *)(param_2 + 0x170),iVar13,*(undefined8 *)puVar4);
          if (*(long *)(param_2 + 0x168) == 0) goto LAB_06a06190;
          uVar11 = FUN_041e29a8(*(long *)(param_2 + 0x168),iVar13,*(undefined8 *)puVar5);
          if (lVar9 == 0) goto LAB_06a06190;
          FUN_06bc3b14(lVar9,uVar8,uVar11,0);
          iVar13 = iVar13 + 1;
        } while (iVar2 != iVar13);
      }
      memcpy(&local_a0,(void *)(param_2 + 0x124),0x44);
      puVar4 = 
      Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__;
      if ((char)local_a0 != '\0') {
        lVar12 = *(long *)
                  Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
        ;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar12 = *(long *)puVar4;
        }
        uVar8 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 4);
        memcpy(&local_a0,(void *)(param_2 + 0x124),0x44);
        FUN_04649644(&local_160,&local_a0,
                     *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
        uStack_118 = uStack_158;
        local_120 = local_160;
        uStack_108 = uStack_148;
        uStack_110 = uStack_150;
        uStack_f8 = uStack_138;
        local_100 = local_140;
        uStack_e8 = uStack_128;
        uStack_f0 = uStack_130;
        if (lVar9 == 0) goto LAB_06a06190;
        uStack_198 = uStack_158;
        local_1a0 = local_160;
        uStack_188 = uStack_148;
        uStack_190 = uStack_150;
        uStack_178 = uStack_138;
        local_180 = local_140;
        uStack_168 = uStack_128;
        uStack_170 = uStack_130;
        FUN_06bc56f4(lVar9,uVar8,&local_1a0,0);
      }
      uVar11 = *(undefined8 *)(param_2 + 400);
      uVar1 = *(undefined8 *)(param_2 + 0x198);
      if (*(int *)(*(long *)
                    Method_OVRTaskBuilder<OVRSceneManager_Metrics>_Start<OVRSceneManager_<ProcessBatch>d__44>__
                  + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06a06208(lVar9,uVar11,uVar1);
    }
    memcpy(&local_a0,(void *)(param_2 + 0xe0),0x44);
    if ((char)local_a0 == '\0') {
      return;
    }
    lVar9 = param_1[4];
    memcpy(&local_a0,(void *)(param_2 + 0xe0),0x44);
    FUN_04649644(&local_160,&local_a0,
                 *(undefined8 *)Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
    uStack_118 = uStack_158;
    local_120 = local_160;
    uStack_108 = uStack_148;
    uStack_110 = uStack_150;
    uStack_f8 = uStack_138;
    local_100 = local_140;
    uStack_e8 = uStack_128;
    uStack_f0 = uStack_130;
    if (lVar9 != 0) {
      uStack_1d8 = uStack_158;
      local_1e0 = local_160;
      uStack_1c8 = uStack_148;
      uStack_1d0 = uStack_150;
      uStack_1b8 = uStack_138;
      local_1c0 = local_140;
      uStack_1a8 = uStack_128;
      uStack_1b0 = uStack_130;
      FUN_06baf92c(lVar9,&local_1e0,0);
      if (param_1[4] != 0) {
        FUN_06baf87c(&local_160,param_1[4],0);
        uStack_d8 = uStack_158;
        local_e0 = local_160;
        uStack_c8 = uStack_148;
        uStack_d0 = uStack_150;
        uStack_b8 = uStack_138;
        local_c0 = local_140;
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        fVar14 = (float)FUN_06bdab18(&local_e0,5,0);
        lVar9 = param_1[4];
        if (lVar9 != 0) {
          fVar14 = atanf(1.0 / fVar14);
          FUN_06baeb08(fVar14 * DAT_013a054c,lVar9,0);
          return;
        }
      }
    }
  }
LAB_06a06190:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


