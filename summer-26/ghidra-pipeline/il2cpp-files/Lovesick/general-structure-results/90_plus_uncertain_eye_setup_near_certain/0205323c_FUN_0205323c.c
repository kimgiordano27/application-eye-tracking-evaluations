/*
FUNCTION_NAME: FUN_0205323c
ENTRY_POINT: 0205323c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_20;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0205323c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined1 local_44 [4];
  
  lVar8 = param_1;
  if ((DAT_03780b4d & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_SubscribeAndUpdate__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IObiJobHandle>_MoveNext__);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<SoccerBlockerCannon>_get_Count__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MonoBehaviour,_Coroutine>_Remove__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_46__);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(StringLiteral_9566);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_ScreenSpaceShadows_ScreenSpaceShadowsPass_OnCameraCleanup__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonConverter<Guid>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(StringLiteral_9438);
    thunk_FUN_00d48444(PTR_DAT_033eb718);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    thunk_FUN_00d48444(StringLiteral_5156);
    thunk_FUN_00d48444(System_Collections_Generic_List<IFormatter>_TypeInfo);
    lVar8 = thunk_FUN_00d48444(PTR_DAT_033f2d78);
    DAT_03780b4d = 1;
  }
  puVar3 = PTR_DAT_033eb718;
  local_44[0] = 0;
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 - 2U < 2) {
    uVar10 = FUN_02051d34(lVar8,*(undefined8 *)(param_1 + 0x18));
    return uVar10;
  }
  if (iVar7 == 4) {
LAB_0205345c:
    return *(undefined8 *)puVar3;
  }
  if (iVar7 == 1) {
    return **(undefined8 **)
             (*(long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
             + 0xb8);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar9 = FUN_015fe7e8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                         *(undefined8 *)System_Collections_Generic_List<IFormatter>_TypeInfo,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(param_1 + 0x24) == 0) goto LAB_0205345c;
      plVar11 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                          );
      if (plVar11 != (long *)0x0) {
        FUN_0160aa4c(plVar11,0);
        uVar12 = *(uint *)(param_1 + 0x24);
        if ((uVar12 >> 7 & 1) != 0) {
          FUN_0160c430(plVar11,*(undefined8 *)StringLiteral_9438,0);
          uVar12 = *(uint *)(param_1 + 0x24);
        }
        puVar4 = 
        Method_UnityEngine_Rendering_Universal_ScreenSpaceShadows_ScreenSpaceShadowsPass_OnCameraCleanup__
        ;
        puVar5 = PTR_DAT_033f38b8;
        puVar3 = PTR_DAT_033f2d78;
        if ((uVar12 >> 6 & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*(undefined8 *)puVar4,0);
          uVar12 = *(uint *)(param_1 + 0x24);
          puVar3 = PTR_DAT_033f2d78;
        }
        PTR_DAT_033f2d78 = puVar3;
        puVar4 = Method_Newtonsoft_Json_JsonConverter<Guid>__ctor__;
        if ((uVar12 >> 5 & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*(undefined8 *)puVar3,0);
          uVar12 = *(uint *)(param_1 + 0x24);
          puVar4 = Method_Newtonsoft_Json_JsonConverter<Guid>__ctor__;
        }
        puVar3 = 
        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_SubscribeAndUpdate__
        ;
        Method_Newtonsoft_Json_JsonConverter<Guid>__ctor__ = puVar4;
        if ((uVar12 >> 4 & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*(undefined8 *)puVar4,0);
          uVar12 = *(uint *)(param_1 + 0x24);
          puVar3 = 
          Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_SubscribeAndUpdate__
          ;
        }
        Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_SubscribeAndUpdate__
             = puVar3;
        puVar1 = (undefined8 *)
                 Method_System_Collections_Generic_List_Enumerator<IObiJobHandle>_MoveNext__;
        if ((uVar12 >> 3 & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*(undefined8 *)puVar3,0);
          uVar12 = *(uint *)(param_1 + 0x24);
          puVar1 = (undefined8 *)
                   Method_System_Collections_Generic_List_Enumerator<IObiJobHandle>_MoveNext__;
        }
        Method_System_Collections_Generic_List_Enumerator<IObiJobHandle>_MoveNext__ =
             (undefined *)puVar1;
        puVar2 = (undefined8 *)
                 Method_System_Collections_Generic_List<SoccerBlockerCannon>_get_Count__;
        if ((uVar12 >> 2 & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*puVar1,0);
          uVar12 = *(uint *)(param_1 + 0x24);
          puVar2 = (undefined8 *)
                   Method_System_Collections_Generic_List<SoccerBlockerCannon>_get_Count__;
        }
        Method_System_Collections_Generic_List<SoccerBlockerCannon>_get_Count__ =
             (undefined *)puVar2;
        puVar1 = (undefined8 *)StringLiteral_9566;
        if ((uVar12 >> 1 & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*puVar2,0);
          uVar12 = *(uint *)(param_1 + 0x24);
          puVar1 = (undefined8 *)StringLiteral_9566;
        }
        StringLiteral_9566 = (undefined *)puVar1;
        if ((uVar12 & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*puVar1,0);
          uVar12 = *(uint *)(param_1 + 0x24);
        }
        puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_46__;
        puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
        puVar3 = Method_System_Collections_Generic_Dictionary<MonoBehaviour,_Coroutine>_Remove__;
        if ((uVar12 >> 0xf & 1) != 0) {
          iVar7 = FUN_0160b5d0(plVar11,0);
          if (0 < iVar7) {
            FUN_0160c430(plVar11,*(undefined8 *)puVar5,0);
          }
          FUN_0160c430(plVar11,*(undefined8 *)puVar3,0);
          uVar12 = *(uint *)(param_1 + 0x24);
        }
        puVar3 = StringLiteral_12935;
        FUN_0160c430(plVar11,*(undefined8 *)puVar4,0);
        local_44[0] = (undefined1)uVar12;
        uVar10 = FUN_016f8470(local_44,*(undefined8 *)puVar6,0);
        FUN_0160c430(plVar11,uVar10,0);
        if (0xff < (int)uVar12) {
          FUN_0160c430(plVar11,*(undefined8 *)StringLiteral_3287,0);
          local_44[0] = (undefined1)(uVar12 >> 8);
          uVar10 = FUN_016f8470(local_44,*(undefined8 *)puVar6,0);
          FUN_0160c430(plVar11,uVar10,0);
        }
        FUN_0160c430(plVar11,*(undefined8 *)puVar3,0);
        if ((param_2 & 1) != 0) {
          uVar10 = FUN_017b7e58(0);
          FUN_0160c430(plVar11,uVar10,0);
        }
        uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        return uVar10;
      }
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      uVar10 = FUN_015f6780(*(undefined8 *)StringLiteral_5156,
                            *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


