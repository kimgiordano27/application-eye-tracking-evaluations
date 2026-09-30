/*
FUNCTION_NAME: FUN_01ff7660
ENTRY_POINT: 01ff7660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 108
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;functionality_gaze_retrieval_or_extraction
*/


undefined8
FUN_01ff7660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,uint param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar1 = Method_System_Nullable<OVRPlugin_XrApi>__ctor__;
  if ((DAT_0482eefb & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Nullable<NativeArray<RenderStateBlock>>_get_Value__);
    thunk_FUN_01efb3a4(Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector4>_op_Implicit__);
    thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
    thunk_FUN_01efb3a4(Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
    DAT_0482eefb = 1;
  }
  lVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar7,0);
  puVar6 = Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__;
  puVar5 = Method_System_Nullable<OVRPlugin_XrApi>_get_Value__;
  puVar4 = Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__;
  puVar3 = Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__;
  puVar2 = Method_System_Nullable<NativeArray<RenderStateBlock>>_get_Value__;
  puVar1 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
  if (lVar7 != 0) {
    puVar11 = (undefined8 *)(lVar7 + 0x10);
    *puVar11 = param_5;
    thunk_FUN_01f51358(puVar11,param_5);
    uVar8 = FUN_02106b8c(0);
    uVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_02a72538(uVar9,lVar7,*(undefined8 *)puVar5,0);
    uVar10 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02a737d8(uVar10,lVar7,*(undefined8 *)puVar6,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_022cf1f0(param_1,param_2,param_4,uVar8,uVar9,uVar10,*(undefined8 *)puVar4);
    uVar9 = FUN_02105c10(param_3,uVar8,param_6 & 1,param_7 & 1,0);
    FUN_0242d544(uVar9,*puVar11,
                 *(undefined8 *)Method_Unity_Collections_NativeSlice<Vector4>_op_Implicit__);
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


