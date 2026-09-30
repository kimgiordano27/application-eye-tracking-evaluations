/*
FUNCTION_NAME: FUN_0611a6ac
ENTRY_POINT: 0611a6ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0611a6ac(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [2];
  
  puVar4 = 
  Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<SerializableGuid>>>__
  ;
  puVar3 = Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__;
  puVar2 = PTR_DAT_06767818;
  puVar1 = PTR_DAT_0675e238;
                    /* try { // try from 0611a6c4 to 0621a703 has its CatchHandler @ 0611a87c */
  if ((DAT_06b8a9b7 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06767818);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<Dictionary<SerializableGuid,_Awaitable<XRResultStatus>>>__
                );
    FUN_02d6084c(PTR_DAT_0675e238);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>__
                );
    FUN_02d6084c(
                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseArrayMember__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<Result<SerializableGuid>>>__
                );
    FUN_02d6084c(Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__);
    FUN_02d6084c(PTR_DAT_06772a98);
    FUN_02d6084c(Method_System_Nullable<RenderMode>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<uint,_Character>_Add__);
    FUN_02d6084c(PTR_DAT_06767598);
    FUN_02d6084c(PTR_DAT_06767920);
    FUN_02d6084c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseArray__);
    DAT_06b8a9b7 = 1;
  }
  lVar5 = FUN_02d60934(*(undefined8 *)puVar1,8);
  local_48[0] = param_1[5];
  uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,local_48);
  uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar4,*(undefined8 *)puVar3,uVar6,0);
  puVar2 = 
  Method_UnityEngine_XR_ARSubsystems_ObjectPoolCreateUtil_Create<Dictionary<SerializableGuid,_Awaitable<XRResultStatus>>>__
  ;
  puVar1 = Method_System_Nullable<ReferenceLoopHandling>_GetValueOrDefault__;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x20),uVar6);
      local_4c = param_1[6];
      uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar2,&local_4c);
      uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar4,*(undefined8 *)puVar1,uVar6,0);
      puVar2 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseArray__;
      puVar1 = 
      Method_UnityEngine_XR_OpenXR_Features_Meta_ObjectPoolCreateUtil_Create<AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>>__
      ;
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x28) = uVar6;
        thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x28),uVar6);
        local_50 = param_1[7];
        uVar6 = thunk_FUN_02d9d164(*(undefined8 *)puVar1,&local_50);
        uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar4,*(undefined8 *)puVar2,uVar6,0);
        puVar1 = 
        Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_ParseArrayMember__;
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = uVar6;
          thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x30),uVar6);
          puVar2 = PTR_DAT_0675e258;
          local_54 = param_1[8];
          uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x48),&local_54);
          uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar4,*(undefined8 *)puVar1,uVar6,0);
          puVar1 = Method_System_Nullable<RenderMode>_GetValueOrDefault__;
          if (3 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x38) = uVar6;
            thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x38),uVar6);
            local_58 = param_1[4];
            uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(puVar2 + 0x48),&local_58);
            uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar4,*(undefined8 *)puVar1,uVar6,0);
            puVar3 = 
            Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__;
            puVar1 = PTR_DAT_06772a98;
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar6;
              thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x40),uVar6);
              local_60 = *(undefined8 *)(param_1 + 2);
              uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(puVar2 + 0x58),&local_60);
              uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar1,*(undefined8 *)puVar3,uVar6,0);
              puVar3 = PTR_DAT_06767598;
              if (5 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x48) = uVar6;
                thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x48),uVar6);
                local_64 = *param_1;
                uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(puVar2 + 0x48),&local_64);
                uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar4,*(undefined8 *)puVar3,uVar6,0);
                puVar3 = PTR_DAT_06767920;
                if (6 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x50) = uVar6;
                  thunk_FUN_02dd37b4((undefined8 *)(lVar5 + 0x50),uVar6);
                  local_68 = param_1[1];
                  uVar6 = thunk_FUN_02d9d164(*(undefined8 *)(puVar2 + 0x48),&local_68);
                  uVar6 = FUN_04e8e6a4(*(undefined8 *)puVar1,*(undefined8 *)puVar3,uVar6,0);
                  if (7 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x58) = uVar6;
                    thunk_FUN_02dd37b4();
                    FUN_04e8e3a4(lVar5,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60af0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


