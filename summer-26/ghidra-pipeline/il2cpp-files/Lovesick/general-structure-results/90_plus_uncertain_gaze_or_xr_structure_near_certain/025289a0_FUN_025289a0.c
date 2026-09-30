/*
FUNCTION_NAME: FUN_025289a0
ENTRY_POINT: 025289a0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_025289a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = Method_System_Data_DataView_SetDataViewManager__;
  if ((DAT_03782a55 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
    thunk_FUN_00d48444(Method_System_Nullable<LogBehaviour>_get_HasValue__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_Start<HttpWebRequest_<<GetRewriteHandler>b__271_0>d>__
                      );
    thunk_FUN_00d48444(System_OutOfMemoryException_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_SetResult__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Data_DataView_SetDataViewManager__);
    DAT_03782a55 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_90 = 0;
  FUN_013b61e4(param_1,*(undefined8 *)puVar1);
  puVar5 = Method_System_Nullable<LogBehaviour>_get_HasValue__;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<BufferOffsetSize>_Start<HttpWebRequest_<<GetRewriteHandler>b__271_0>d>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Dictionary<string,_string>>_SetResult__
  ;
  puVar2 = System_OutOfMemoryException_TypeInfo;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0129b5d0(*(long *)(param_1 + 0x28),&local_c0,
                 *(undefined8 *)
                  Method_OVRObjectPool_HashSetScope<OVRPlugin_SpaceComponentType>__ctor__);
    uStack_68 = uStack_b8;
    local_70 = local_c0;
    uStack_58 = uStack_a8;
    local_60 = local_b0;
    uStack_48 = uStack_98;
    local_50 = local_a0;
    while( true ) {
      do {
        uVar6 = FUN_012bf140(&local_70,*(undefined8 *)puVar4);
        if ((uVar6 & 1) == 0) {
          FUN_012bf83c(&local_70,*(undefined8 *)puVar5);
          return;
        }
        FUN_00cbba14(&local_c0,&local_70,*(undefined8 *)puVar2);
        uStack_88 = uStack_b8;
        local_90 = local_c0;
        local_80 = local_b0;
        lVar7 = FUN_00cbbb14(&local_90,*(undefined8 *)puVar3);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_02681b9c(lVar7,0,0);
      } while ((uVar6 & 1) == 0);
      if (lVar7 == 0) break;
      uVar8 = FUN_0268fd4c(lVar7,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c114(uVar8,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


