/*
FUNCTION_NAME: UnityEngine.Rendering.InstanceOcclusionEventDebugArray$$MoveToDebugStatsAndClear
ENTRY_POINT: 0344bf40
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_19;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_InstanceOcclusionEventDebugArray__MoveToDebugStatsAndClear
               (long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 local_120;
  undefined8 local_118;
  int local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  undefined1 auStack_e8 [16];
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  undefined1 auStack_78 [16];
  
  if ((DAT_03ef5b58 & 1) == 0) {
    FUN_01c5c92c(PTR_Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>___03cd8640);
    FUN_01c5c92c(PTR_Method_UnityEngine_GraphicsBuffer_SetData<int>___03cd8648);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<int>_Dispose___03cd4998);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<int>__ctor___03cd4980);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeArray<int>__ctor___03cd82f8);
    FUN_01c5c92c(PTR_Method_Unity_Collections_NativeList<InstanceOcclusionEventStats>_Add___03cd8650
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_NativeList<InstanceOcclusionEventStats>_Clear___03cd8658
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_Dequeue___03cd8660
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_Enqueue___03cd8668
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_IsEmpty___03cd8670
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_Peek___03cd8678
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_Dispose___03cd8628
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>__ctor___03cd8608
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_get_Item___03cd8680
                );
    FUN_01c5c92c(
                PTR_Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_get_Length___03cd8638
                );
    DAT_03ef5b58 = 1;
  }
  puVar3 = 
  PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_IsEmpty___03cd8670
  ;
  puVar2 = 
  PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_Enqueue___03cd8668
  ;
  puVar1 = 
  PTR_Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>__ctor___03cd8608
  ;
  local_a0 = 0;
  uStack_98 = 0;
  auStack_e8._8_8_ = 0;
  local_118 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  auStack_e8._0_8_ = 0;
  local_f0 = 0;
  lStack_c8 = 0;
  local_d0 = 0;
  local_b8 = ZEXT816(0);
  local_c0 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  uStack_10c = 0;
  if (0 < (int)param_1[2]) {
    local_b8._8_8_ = 0;
    lStack_c8 = param_1[2];
    local_d0 = param_1[1];
    local_c0 = param_1[3];
    local_b8._0_8_ = 0;
    local_b8 = UnityEngine_Rendering_AsyncGPUReadback__Request(*param_1,(int)param_1[2] << 3,0,0,0);
    lStack_88 = lStack_c8;
    local_90 = local_d0;
    local_80 = local_c0;
    auStack_78 = local_b8;
    Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>__Enqueue
              (param_1 + 4,&local_90,*(undefined8 *)puVar2);
    uVar5 = Unity_Collections_AllocatorManager_AllocatorHandle__op_Implicit(4,0);
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>___ctor
              (&local_90,4,uVar5,0,*(undefined8 *)puVar1);
    param_1[2] = lStack_88;
    param_1[1] = local_90;
    param_1[3] = local_80;
  }
  uVar6 = Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>__IsEmpty
                    (param_1 + 4,*(undefined8 *)puVar3);
  puVar4 = 
  PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_Peek___03cd8678
  ;
  puVar2 = 
  PTR_Method_Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>_Dequeue___03cd8660
  ;
  puVar1 = PTR_Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>___03cd8640;
  while ((uVar6 & 1) == 0) {
    Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>__Peek
              (&local_90,param_1 + 4,*(undefined8 *)puVar4);
    lStack_c8 = lStack_88;
    local_d0 = local_90;
    local_c0 = local_80;
    local_b8 = auStack_78;
    uVar6 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_done(local_b8,0);
    if ((uVar6 & 1) == 0) break;
    Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>__Dequeue
              (&local_90,param_1 + 4,*(undefined8 *)puVar2);
    lStack_f8 = lStack_88;
    local_100 = local_90;
    local_f0 = local_80;
    auStack_e8 = auStack_78;
    uVar6 = UnityEngine_Rendering_AsyncGPUReadbackRequest__get_hasError(auStack_e8,0);
    if ((uVar6 & 1) == 0) {
      auVar12 = UnityEngine_Rendering_AsyncGPUReadbackRequest__GetData<int>
                          (auStack_e8,0,*(undefined8 *)puVar1);
      if (auVar12._8_4_ == (int)lStack_f8 * 2) {
        if ((char)param_1[10] != '\0') {
          Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>__Dispose
                    (param_1 + 5,
                     *(undefined8 *)
                      PTR_Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<InstanceOcclusionEventDebugArray_Info>_Dispose___03cd8628
                    );
          Unity_Collections_NativeArray<int>__Dispose
                    (param_1 + 8,
                     *(undefined8 *)PTR_Method_Unity_Collections_NativeArray<int>_Dispose___03cd4998
                    );
          *(undefined1 *)(param_1 + 10) = 0;
        }
        param_1[6] = lStack_f8;
        param_1[5] = local_100;
        param_1[7] = local_f0;
        local_90 = 0;
        lStack_88 = 0;
        Unity_Collections_NativeArray<int>___ctor
                  (&local_90,auVar12._0_8_,auVar12._8_8_,4,
                   *(undefined8 *)PTR_Method_Unity_Collections_NativeArray<int>__ctor___03cd82f8);
        *(undefined1 *)(param_1 + 10) = 1;
        param_1[9] = lStack_88;
        param_1[8] = local_90;
      }
    }
    uVar6 = Unity_Collections_NativeQueue<InstanceOcclusionEventDebugArray_Request>__IsEmpty
                      (param_1 + 4,*(undefined8 *)puVar3);
  }
  puVar1 = PTR_Method_Unity_Collections_NativeArray<int>__ctor___03cd4980;
  if (param_2 != 0) {
    Unity_Collections_NativeList<InstanceOcclusionEventStats>__Clear
              (param_2 + 0x20,
               *(undefined8 *)
                PTR_Method_Unity_Collections_NativeList<InstanceOcclusionEventStats>_Clear___03cd8658
              );
    puVar2 = PTR_Method_Unity_Collections_NativeList<InstanceOcclusionEventStats>_Add___03cd8650;
    if (((char)param_1[10] != '\0') && (0 < (int)param_1[6])) {
      uVar6 = 0;
      do {
        piVar9 = (int *)param_1[5];
        piVar7 = piVar9 + uVar6 * 5;
        local_120 = *(undefined8 *)piVar7;
        local_110 = piVar7[4];
        if (piVar7[1] == 1 || local_110 != 0) {
          if (uVar6 != 0) {
            uVar10 = uVar6;
            do {
              if ((piVar9[4] != 0 || piVar9[1] == 1) && *piVar9 == *piVar7) {
                iVar8 = piVar7[2] - piVar9[2];
                goto LAB_0344c2e8;
              }
              uVar10 = uVar10 - 1;
              piVar9 = piVar9 + 5;
            } while (uVar10 != 0);
          }
          iVar8 = 0;
        }
        else {
          iVar8 = -1;
        }
LAB_0344c2e8:
        uVar11 = NEON_rev64(*(undefined8 *)
                             (param_1[8] +
                             (-(uVar6 >> 0x1e & 1) & 0xfffffffc00000000 | (uVar6 & 0x7fffffff) << 3)
                             ),4);
        local_118 = CONCAT44(piVar7[3],iVar8);
        uStack_10c = (undefined4)uVar11;
        local_108 = (undefined4)((ulong)uVar11 >> 0x20);
        Unity_Collections_NativeList<InstanceOcclusionEventStats>__Add
                  (param_2 + 0x20,&local_120,*(undefined8 *)puVar2);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)param_1[6]);
    }
    Unity_Collections_NativeArray<int>___ctor(&local_a0,0x80,2,1,*(undefined8 *)puVar1);
    if (*param_1 != 0) {
      UnityEngine_GraphicsBuffer__SetData<int>
                (*param_1,local_a0,uStack_98,
                 *(undefined8 *)PTR_Method_UnityEngine_GraphicsBuffer_SetData<int>___03cd8648);
      Unity_Collections_NativeArray<int>__Dispose
                (&local_a0,
                 *(undefined8 *)PTR_Method_Unity_Collections_NativeArray<int>_Dispose___03cd4998);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


