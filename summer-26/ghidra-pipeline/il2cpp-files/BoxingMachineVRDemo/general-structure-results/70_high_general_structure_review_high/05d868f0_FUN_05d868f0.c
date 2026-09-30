/*
FUNCTION_NAME: FUN_05d868f0
ENTRY_POINT: 05d868f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2
*/


void FUN_05d868f0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long local_80;
  long lStack_78;
  long local_70;
  
  puVar5 = Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release__;
  puVar4 = Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__;
  puVar2 = Method_Unity_Collections_NativeList<PassInputData>_Clear__;
  puVar3 = Method_Unity_Collections_NativeList<PassInputData>_Add__;
  if ((DAT_06b82d33 & 1) == 0) {
    FUN_02d6084c(Method_Unity_Collections_NativeList<PassOutputData>_get_Length__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<PassInputData>_Clear__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
    FUN_02d6084c(Method_UnityEngine_UIElements_ObjectListPool<string>_Release__);
    FUN_02d6084c(Method_Unity_Collections_NativeList<PassInputData>_Add__);
    FUN_02d6084c(
                Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>_Get__
                );
    FUN_02d6084c(
                Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>_Release__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_ObjectListPool<IBindingRequest>_Release__);
    FUN_02d6084c(
                Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XRLoadAnchorResult>>>_Get__
                );
    FUN_02d6084c(Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
    DAT_06b82d33 = 1;
  }
  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04894d4c(lVar10,*(undefined8 *)puVar2);
  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
  FUN_03f8ecac(lVar11,*(undefined8 *)puVar5);
  puVar3 = 
  Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>_Release__
  ;
  if (lVar11 != 0) {
    local_80 = *param_1;
    lStack_78 = param_1[1];
    local_70 = param_1[2];
    FUN_03f8f1c0(lVar11,&local_80,
                 *(undefined8 *)
                  Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>_Release__
                );
    puVar6 = 
    Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>_Get__
    ;
    puVar5 = Method_UnityEngine_UIElements_ObjectListPool<string>_Release__;
    puVar4 = Method_Unity_Collections_NativeList<PassOutputData>_get_Length__;
    puVar2 = PTR_DAT_0675e258;
    iVar1 = *(int *)(lVar11 + 0x20);
    while( true ) {
      if (iVar1 < 1) {
        return;
      }
      FUN_03f8f398(&local_80,lVar11,*(undefined8 *)puVar6);
      lVar9 = local_70;
      lVar8 = lStack_78;
      lVar7 = local_80;
      if (lVar10 == 0) break;
      uVar12 = FUN_048958e4(lVar10,lStack_78,*(undefined8 *)puVar4);
      if ((uVar12 & 1) != 0) {
        uVar13 = FUN_04895670(lVar10,lVar8,
                              *(undefined8 *)
                               Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
        }
        uVar12 = FUN_0501fa14(uVar13,lVar9,0);
        if ((uVar12 & 1) != 0) {
          FUN_028f4e40(lVar10);
          uVar13 = thunk_FUN_02dc61f4(Method_UnityEngine_UIElements_ObjectListPool<string>_Get__);
          uVar13 = thunk_FUN_04895670(lVar10,lVar8,uVar13);
          thunk_FUN_02dc61f4(
                            Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XRLoadAnchorResult>>>_Release__
                            );
          uVar14 = thunk_FUN_02d9d534();
          FUN_05d76c90(uVar14,uVar13,lVar9,lVar8,0);
          uVar13 = thunk_FUN_02dc61f4(
                                     Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XRSaveAnchorResult>>>_Get__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar14,uVar13);
        }
      }
      FUN_048956dc(lVar10,lVar8,lVar9,*(undefined8 *)puVar5);
      if (lVar7 == 0) break;
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar12 = 0;
        uVar15 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        plVar16 = (long *)(lVar7 + 0x20);
        do {
          if (uVar15 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60af0();
          }
          local_70 = plVar16[2];
          lStack_78 = plVar16[1];
          local_80 = *plVar16;
          FUN_03f8f1c0(lVar11,&local_80,*(undefined8 *)puVar3);
          uVar15 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar12 = uVar12 + 1;
          plVar16 = plVar16 + 3;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      iVar1 = *(int *)(lVar11 + 0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


