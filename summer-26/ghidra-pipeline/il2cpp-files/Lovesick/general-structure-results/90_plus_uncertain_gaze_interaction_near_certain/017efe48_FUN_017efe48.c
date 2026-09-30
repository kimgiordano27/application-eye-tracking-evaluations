/*
FUNCTION_NAME: FUN_017efe48
ENTRY_POINT: 017efe48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 187
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


long FUN_017efe48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  local_38 = param_2;
  if ((DAT_0377926d & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f58e0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>__ctor__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f2268);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDoubleAsync>d__51>__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0377926d = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar6 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar7 = thunk_FUN_00d48444(
                              Method_UnityEngine_ProBuilder_EdgeLookup_<>c__DisplayClass16_0_<GetEdgeLookup>b__0__
                              );
    FUN_016ec5b8(uVar6,uVar7,0);
    uVar7 = thunk_FUN_00d48444(System_Collections_Generic_List<fsConverter>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,uVar7);
  }
  if (*(int *)(*(long *)PTR_DAT_033f58e0 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  uVar3 = FUN_017d61e0(&local_38,0);
  uVar6 = local_38;
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03776310 == '\0') {
      thunk_FUN_00d48444(
                        Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                        );
      DAT_03776310 = '\x01';
    }
    puVar1 = PTR_DAT_033f2268;
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
    uVar6 = local_38;
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03776311 == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033f2268);
      DAT_03776311 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (lVar4 != 0) {
      uVar6 = FUN_0114925c(lVar4,param_1,uVar6,8,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>__ctor__
                          );
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar4 != 0) {
        FUN_013e1c00(lVar4,uVar6,1,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<double>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDoubleAsync>d__51>__
                    );
        return lVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar4 = FUN_017efc34(uVar6);
  return lVar4;
}


