/*
FUNCTION_NAME: FUN_04ef2e98
ENTRY_POINT: 04ef2e98
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 184
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction
*/


void FUN_04ef2e98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if ((DAT_066c96bd & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06318fe0);
    FUN_02b3c81c(System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo);
    FUN_02b3c81c(
                System_Action<XRHandSubsystem,_XRHandSubsystem_UpdateSuccessFlags,_XRHandSubsystem_UpdateType>_TypeInfo
                );
    FUN_02b3c81c(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06318fe8);
    FUN_02b3c81c(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
                );
    FUN_02b3c81c(System_Action<PathOptions,_Tween,_Quaternion,_Transform>_TypeInfo);
    FUN_02b3c81c(System_Action<PhysicsScene,_IntPtr,_int,_bool>_TypeInfo);
    FUN_02b3c81c(System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo);
    FUN_02b3c81c(System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
    FUN_02b3c81c(System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06318ff0);
    FUN_02b3c81c(
                System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                );
                    /* try { // try from 04ef2f5c to 04ff303b has its CatchHandler @ 04ef2f5c
                       catch() { ... } // from try @ 04ef2f5c with catch @ 04ef2f5c
                       catch() { ... } // from try @ 04ef3078 with catch @ 04ef2f5c
                       catch() { ... } // from try @ 04ef30c0 with catch @ 04ef2f5c
                       catch() { ... } // from try @ 04ef3100 with catch @ 04ef2f5c */
    FUN_02b3c81c(
                System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06319010);
    FUN_02b3c81c(
                System_Action<IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_int,_Action<TransformDispatchData>>_TypeInfo
                );
    DAT_066c96bd = 1;
  }
  local_40 = 0;
  local_70 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  uVar3 = OVRLocatable_TrackingSpacePose___ctor(param_1);
  puVar2 = System_Action<PathOptions,_Tween,_Quaternion,_Transform>_TypeInfo;
  puVar1 = 
  System_Action<XRHandSubsystem,_XRHandSubsystem_UpdateSuccessFlags,_XRHandSubsystem_UpdateType>_TypeInfo
  ;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0378667c(&local_f0,*(long *)(param_1 + 0x28),
                 *(undefined8 *)
                  System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                );
    local_40 = local_d0;
    puStack_58 = puStack_e8;
    local_60 = local_f0;
    local_48 = uStack_d8;
    local_50 = uStack_e0;
    local_f0 = 0;
    puStack_e8 = &local_60;
    while (uVar4 = FUN_0472788c(&local_60,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c560b8(local_48 & 0xffffffff,local_48._4_4_,(undefined4)local_40,local_40._4_4_,
                   *(long *)(param_1 + 0x48),local_50,0);
    }
    FUN_04727888(&local_60,*(undefined8 *)puVar1);
  }
  puVar2 = System_Action<PhysicsScene,_IntPtr,_int,_bool>_TypeInfo;
  puVar1 = 
  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
  ;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_03780f78(&local_f0,*(long *)(param_1 + 0x30),
                 *(undefined8 *)
                  System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                );
    local_70 = local_d0;
    puStack_88 = puStack_e8;
    local_90 = local_f0;
    local_78 = uStack_d8;
    local_80 = uStack_e0;
    local_f0 = 0;
    puStack_e8 = &local_90;
    while (uVar4 = FUN_04727454(&local_90,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c5610c(local_78 & 0xffffffff,local_78._4_4_,(undefined4)local_70,local_70._4_4_,
                   *(long *)(param_1 + 0x48),local_80,0);
    }
    FUN_04727450(&local_90,*(undefined8 *)puVar1);
  }
  puVar2 = 
  System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedType,_DataRow,_bool>_TypeInfo
  ;
  puVar1 = System_Action<TrackAsset,_GameObject,_Playable>_TypeInfo;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_03783a98(&local_f0,*(long *)(param_1 + 0x38),
                 *(undefined8 *)
                  System_Action<IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_IntPtr,_int,_Action<TransformDispatchData>>_TypeInfo
                );
    local_b0 = local_f0;
    local_f0 = 0;
    puStack_a8 = puStack_e8;
    local_98 = uStack_d8;
    local_a0 = uStack_e0;
    puStack_e8 = &local_b0;
    while (uVar4 = FUN_04727680(&local_b0,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_05c56050(local_98 & 0xffffffff,*(long *)(param_1 + 0x48),local_a0,0);
    }
    FUN_0472767c(&local_b0,*(undefined8 *)puVar1);
  }
  puVar2 = PTR_DAT_06318fe8;
  puVar1 = PTR_DAT_06318fe0;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_037a6fdc(&local_c8,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_06319010);
    local_f0 = 0;
    puStack_e8 = &local_c8;
    while (uVar4 = FUN_0472eaf4(&local_c8,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
      if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      thunk_FUN_05c56aec(local_b8,uVar3,0);
    }
    FUN_0472eaf0(&local_c8,*(undefined8 *)puVar1);
  }
  return;
}


