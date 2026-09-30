/*
FUNCTION_NAME: FUN_05204f74
ENTRY_POINT: 05204f74
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong FUN_05204f74(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_38 [4];
  int local_34;
  
  puVar1 = Cysharp_Threading_Tasks_AsyncUnityEventHandler<string>_TypeInfo;
  if ((DAT_06a52078 & 1) == 0) {
    FUN_02d4dc40(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>_TypeInfo);
    FUN_02d4dc40(Photon_Voice_AudioSyncBuffer<float>_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object[]>_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AssetBundle>_TypeInfo);
    FUN_02d4dc40(
                Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AsyncGPUReadbackRequest>_TypeInfo
                );
    FUN_02d4dc40(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_TypeInfo)
    ;
    FUN_02d4dc40(UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo);
                    /* try { // try from 05205034 to 0530508f has its CatchHandler @ 05205408 */
    FUN_02d4dc40(UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo);
    FUN_02d4dc40(Cysharp_Threading_Tasks_AsyncUnityEventHandler<string>_TypeInfo);
    FUN_02d4dc40(UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo);
    DAT_06a52078 = 1;
  }
  local_34 = 0;
  local_48 = 0;
  local_38[0] = 0;
  lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
  FUN_0520ee48(lVar4,0);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x18) == 0)) ||
     (*(char *)(param_1 + 0x54) != '\0')) {
                    /* try { // try from 05205090 to 05305317 has its CatchHandler @ 05204eb8 */
    uVar3 = 0;
LAB_05205094:
    return (ulong)(uVar3 & 1);
  }
  *(undefined2 *)(param_1 + 0x54) = 1;
  *(long *)(param_1 + 0x40) = param_3;
  thunk_FUN_02dc1ef0((long *)(param_1 + 0x40),param_3);
  plVar9 = (long *)(param_1 + 0x58);
  lVar10 = *plVar9;
  if (*(int *)(*(long *)PTR_DAT_066462d0 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar5 = FUN_05ee1474(lVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar9 == 0) goto LAB_052053c8;
    FUN_05210704(*plVar9,0);
  }
  lVar10 = FUN_05210630(*(undefined8 *)
                         UnityEngine_UIElements_BaseCompositeField<Vector2Int,_IntegerField,_int>_TypeInfo
                        ,0);
  *plVar9 = lVar10;
  thunk_FUN_02dc1ef0(plVar9,lVar10);
  if (*plVar9 != 0) {
    puVar6 = (undefined8 *)(*plVar9 + 0x20);
    *puVar6 = param_2;
    thunk_FUN_02dc1ef0(puVar6,param_2);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    uVar7 = thunk_FUN_02d8a638(*(undefined8 *)
                                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_TypeInfo
                              );
    FUN_04d28f90(uVar7,uVar8,
                 *(undefined8 *)
                  Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object>_TypeInfo,0);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    thunk_FUN_02dc1ef0((undefined8 *)(param_1 + 0x30),uVar7);
    uVar5 = FUN_04e7faf0(param_3,0);
    if ((uVar5 & 1) == 0) {
      if ((param_3 == 0) || (lVar10 = FUN_04e82bb4(param_3,0x3b,0,0), lVar10 == 0))
      goto LAB_052053c8;
      if (2 < *(int *)(lVar10 + 0x18)) {
        uVar5 = FUN_05000d68(*(undefined8 *)(lVar10 + 0x28),&local_34,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(lVar10 + 0x18) == 0) {
LAB_052053cc:
                    /* WARNING: Subroutine does not return */
            FUN_02d4def0();
          }
          if (lVar4 == 0) goto LAB_052053c8;
          puVar6 = (undefined8 *)(lVar4 + 0x10);
          *puVar6 = *(undefined8 *)(lVar10 + 0x20);
          thunk_FUN_02dc1ef0(puVar6);
          if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_052053cc;
          uVar7 = *(undefined8 *)(lVar10 + 0x30);
          uVar5 = FUN_04e7faf0(*puVar6,0);
          if (((uVar5 & 1) == 0) && (uVar5 = FUN_04e7faf0(uVar7,0), (uVar5 & 1) == 0)) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_052053c8;
            uVar5 = FUN_04e7e59c(*(long *)(param_1 + 0x18),uVar7,0);
            if ((uVar5 & 1) != 0) {
              if (*(long *)(param_1 + 0x18) == 0) goto LAB_052053c8;
              uVar5 = FUN_04e84da8(*(long *)(param_1 + 0x18),*puVar6,0);
              iVar2 = local_34;
              puVar1 = 
              UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo;
              if ((uVar5 & 1) != 0) {
                lVar10 = *(long *)
                          UnityEngine_UIElements_BaseCompositeField<RectInt,_IntegerField,_int>_TypeInfo
                ;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02dabd98();
                  lVar10 = *(long *)puVar1;
                }
                if (iVar2 < *(int *)(*(long *)(lVar10 + 0xb8) + 8)) {
                  lVar10 = *(long *)(param_1 + 0x10);
                  uVar7 = *(undefined8 *)
                           Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<UnityWebRequest>_TypeInfo
                  ;
                  *(int *)(param_1 + 0x38) = local_34;
                  uVar7 = thunk_FUN_02d8a638(uVar7);
                  FUN_03a1f72c(uVar7,lVar4,
                               *(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField<Vector2,_FloatField,_float>_TypeInfo
                               ,0);
                  if (lVar10 != 0) {
                    uVar7 = FUN_036a6464(lVar10,uVar7,
                                         *(undefined8 *)
                                          Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<AssetBundle>_TypeInfo
                                        );
                    uVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                                Cysharp_Threading_Tasks_AsyncUnityEventHandler<Vector2>_TypeInfo
                                              );
                    FUN_04d28f90(uVar8,param_1,
                                 *(undefined8 *)
                                  UnityEngine_UIElements_BaseCompositeField<Rect,_FloatField,_float>_TypeInfo
                                 ,0);
                    lVar4 = thunk_FUN_02d8a638(*(undefined8 *)puVar1);
                    /* try { // try from 05205318 to 0530531b has its CatchHandler @ 05205404 */
                    /* try { // try from 0520531c to 0530531f has its CatchHandler @ 05205400 */
                    /* try { // try from 05205320 to 0530541f has its CatchHandler @ 05204eb8 */
                    FUN_0520ee98(lVar4,uVar7,uVar8,0);
                    local_48 = *(undefined8 *)(param_1 + 0x28);
                    puStack_58 = local_38;
                    local_38[0] = 0;
                    local_60 = 0;
                    local_50 = &local_48;
                    FUN_05065dd8(local_48,local_38,0);
                    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d4dee8();
                    }
                    FUN_02ca8554(*(long *)(param_1 + 0x28),
                                 *(undefined8 *)
                                  Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource<Object[]>_TypeInfo
                                );
                    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d4dee8();
                    }
                    FUN_029257b4(*(long *)(param_1 + 0x28),lVar4,
                                 *(undefined8 *)Photon_Voice_AudioSyncBuffer<float>_TypeInfo);
                    FUN_02922234(&local_60);
                    if (lVar4 != 0) {
                      FUN_0520f0dc(lVar4,0);
                      uVar3 = 1;
                      goto LAB_05205094;
                    }
                  }
                  goto LAB_052053c8;
                }
              }
            }
          }
        }
        uVar3 = FUN_0520e4f4(param_1);
        goto LAB_05205094;
      }
    }
    uVar5 = FUN_0520e4f4(param_1);
    return uVar5;
  }
LAB_052053c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


