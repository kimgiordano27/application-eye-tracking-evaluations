/*
FUNCTION_NAME: FUN_07431fd8
ENTRY_POINT: 07431fd8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4
*/


void FUN_07431fd8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  puVar5 = 
  Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_get_Item__;
  puVar3 = Method_System_Collections_Generic_List<PostProcessingComponentBase>_Add__;
  puVar2 = Method_System_Collections_Generic_List<PostProcessingComponentBase>__ctor__;
  if ((DAT_07ef3a68 & 1) == 0) {
    FUN_03642964(
                Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Release__
                );
    FUN_03642964(
                Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Get__
                );
    FUN_03642964(Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>__ctor__);
    FUN_03642964(Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Add__);
    FUN_03642964(Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Clear__);
    FUN_03642964(
                Method_System_Collections_Generic_List<AnimationOutputWeightProcessor_WeightInfo>_get_Item__
                );
    FUN_03642964(PTR_DAT_079fb388);
    FUN_03642964(Method_System_Collections_Generic_List<PostProcessingComponentBase>_Add__);
    FUN_03642964(Method_System_Collections_Generic_List<PostProcessingComponentBase>__ctor__);
    FUN_03642964(
                Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_GetEnumerator__
                );
    FUN_03642964(Method_System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>__ctor__);
    FUN_03642964(Method_System_Collections_Generic_List<Allocator2D_Area>_Add__);
    FUN_03642964(PTR_DAT_079fd710);
    DAT_07ef3a68 = 1;
  }
  puVar6 = Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>__ctor__;
  puVar4 = Method_System_Collections_Generic_List<Allocator2D_Area>_Add__;
  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_0459e7d4(lVar7,*(undefined8 *)puVar3);
  param_1[0x6d] = lVar7;
  thunk_FUN_036b7ad0(param_1 + 0x6d,lVar7);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  puVar2 = PTR_DAT_079fd710;
  FUN_0514a224(param_1,param_2,*(undefined8 *)puVar6);
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_036a1978();
    lVar7 = *(long *)puVar4;
  }
  FUN_0732523c(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x138),0);
  plVar8 = (long *)thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_073230b0(plVar8,0);
  if (plVar8 != (long *)0x0) {
    FUN_07322d3c(plVar8,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x140),0);
    lVar7 = FUN_07322e04(plVar8,0);
    if (lVar7 != 0) {
      lVar10 = *(long *)(lVar7 + 0x10);
      lVar12 = *(long *)PTR_DAT_079fb388;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x148);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      puVar4 = 
      Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_GetEnumerator__;
      puVar5 = Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Clear__;
      puVar3 = Method_System_Collections_Generic_List<Awaitable_AwaitableAndFrameIndex>_Add__;
      puVar2 = Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Get__;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *puVar11 = uVar9;
          thunk_FUN_036b7ad0(puVar11);
        }
        else {
          FUN_0459f03c(lVar7,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        (**(code **)(*plVar8 + 0x248))(plVar8,0,*(undefined8 *)(*plVar8 + 0x250));
        FUN_05149844(param_1,plVar8,*(undefined8 *)puVar5);
        lVar7 = FUN_0514983c(param_1,*(undefined8 *)puVar3);
        param_1[0x6c] = lVar7;
        thunk_FUN_036b7ad0(param_1 + 0x6c,lVar7);
        lVar7 = param_1[0x6c];
        uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
        FUN_05620e50(uVar9,param_1,*(undefined8 *)puVar4,0);
        puVar3 = Method_System_Collections_Generic_List<BeforeRenderHelper_OrderBlock>__ctor__;
        puVar2 = 
        Method_UnityEngine_Pool_GenericPool<CameraScreenRaycaster_CameraRayEnumerator>_Release__;
        if (lVar7 != 0) {
          FUN_0732ace0(lVar7,uVar9,0);
          lVar7 = param_1[0x6c];
          uVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
          FUN_0554a400(uVar9,param_1,*(undefined8 *)puVar3,0);
          if (lVar7 != 0) {
            FUN_0732ae40(lVar7,uVar9,0);
                    /* WARNING: Could not recover jumptable at 0x074322f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0xad8))
                      (param_1,param_3,param_4,*(undefined8 *)(*param_1 + 0xae0));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


