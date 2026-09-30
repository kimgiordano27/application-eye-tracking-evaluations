/*
FUNCTION_NAME: FUN_035761f0
ENTRY_POINT: 035761f0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_035761f0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  puVar1 = PTR_DAT_0422fc88;
  if ((DAT_04537999 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fc88);
    FUN_01c5d288(PTR_DAT_0422fae0);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_RegisterFrameAllocation__
                );
    FUN_01c5d288(Method_System_ReadOnlySpan<Vector3>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Contains__);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(PTR_DAT_04237a90);
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ReleaseResource__
                );
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ShouldReleaseResource__
                );
    FUN_01c5d288(
                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
                );
    DAT_04537999 = 1;
  }
  local_28 = 0;
  local_2c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03cfdbc0(0);
  puVar1 = PTR_DAT_04237a90;
  if ((uVar2 & 1) == 0) {
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Queue<WebRequestQueueOperation>_Contains__
                              );
    FUN_02f17044(uVar4,0x1d,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Queue<WebRequestQueueOperation>__ctor__);
    puVar1 = PTR_DAT_04237a90;
    lVar3 = *(long *)PTR_DAT_04237a90;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar3 = *(long *)puVar1;
    }
    *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xb0) = uVar4;
  }
  else {
    if (param_1 == (long *)0x0) goto LAB_03576528;
    if (*(int *)((long)param_1 + 0x94) == 0) {
      uVar5 = *(undefined8 *)
               Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ShouldReleaseResource__
      ;
      uVar4 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170));
    }
    else {
      local_28 = 0;
      lVar3 = *(long *)PTR_DAT_04237a90;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xb0);
      if (lVar3 == 0) {
LAB_03576528:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar2 = FUN_02f17220(lVar3,*(undefined4 *)((long)param_1 + 0x94),&local_28,
                           *(undefined8 *)Method_System_ReadOnlySpan<Vector3>__ctor__);
      lVar3 = local_28;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0422f9e8 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar2 = FUN_03d4f3bc(param_1,lVar3,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        local_30 = *(undefined4 *)((long)param_1 + 0x94);
        uVar4 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_30);
        uVar4 = FUN_03153718(*(undefined8 *)
                              Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_ReleaseResource__
                             ,uVar4,param_1,local_28,0);
        if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
        }
        FUN_03d04168(uVar4,0);
        if (local_28 == 0) goto LAB_03576528;
        uVar4 = FUN_03d468e8(local_28,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar1);
        }
        FUN_035707d0(uVar4,1);
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0xb0);
      if (lVar3 == 0) goto LAB_03576528;
      FUN_02f17598(lVar3,*(undefined4 *)((long)param_1 + 0x94),param_1,
                   *(undefined8 *)
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_RegisterFrameAllocation__
                  );
      *(undefined1 *)((long)param_1 + 0x9d) = 0;
      if (*(int *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24) < 2) {
        return;
      }
      local_2c = *(undefined4 *)((long)param_1 + 0x94);
      uVar4 = FUN_032cf308(&local_2c,0);
      uVar5 = *(undefined8 *)
               Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourcePool<ComputeBuffer>_TryGetResource__
      ;
    }
    uVar4 = FUN_03146988(uVar5,uVar4,0);
    if (*(int *)(*(long *)PTR_DAT_0422fae0 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fae0);
    }
    FUN_03d03d14(uVar4,0);
  }
  return;
}


