/*
FUNCTION_NAME: FUN_05c4e460
ENTRY_POINT: 05c4e460
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_13;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_05c4e460(long param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5,
                 long param_6,undefined4 param_7,uint param_8,undefined4 param_9,long param_10,
                 undefined4 param_11,long param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  ulong local_68;
  
  if ((DAT_066d7231 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313cc8);
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_SpatialMeshDataUpdated__);
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDeniedAndDontAskAgain__)
    ;
    FUN_02b3c81c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize__);
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_<GetXRMeshSubsystem>b__14_0__);
    FUN_02b3c81c(Method_Oculus_Platform_Packet_ReadBytes__);
    FUN_02b3c81c(Method_Pico_Platform_Models_Packet_GetBytes__);
    FUN_02b3c81c(Method_Pico_Platform_Models_Packet_GetBytes__);
    FUN_02b3c81c(System_Predicate<FruitSpawner_SpawnPoint>_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Request<ChallengeEntryList>_TypeInfo);
    DAT_066d7231 = 1;
  }
  puVar1 = Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize__;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05c9ef80(0,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,0);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05c9ef80(0,*(undefined8 *)System_Predicate<FruitSpawner_SpawnPoint>_TypeInfo,0);
  }
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05c9ef80(param_1,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,0);
    }
    if (param_3 != 0) {
      lVar4 = *(long *)(param_3 + 0x10);
      if (lVar4 != 0) {
        if (param_4 == 0) {
          local_70 = 0;
          local_68 = 0;
        }
        else {
          local_70 = param_4 + 0x20;
          local_68 = *(ulong *)(param_4 + 0x18) & 0xffffffff;
        }
        uVar2 = FUN_03ea2848(&local_70,*(undefined8 *)Method_Oculus_Platform_Packet_ReadBytes__);
        FUN_05ca29a8(&local_80,uVar2,local_68 & 0xffffffff,0);
        if (param_6 == 0) {
          local_88 = 0;
        }
        else {
          local_88 = *(undefined8 *)(param_6 + 0x10);
        }
        if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
          FUN_02b76274();
        }
        uVar2 = 0;
        if (param_10 != 0) {
          uVar2 = *(undefined8 *)(param_10 + 0x10);
        }
        if (*(long *)(*(long *)
                       Method_Unity_XR_PXR_PXR_SpatialMeshManager_<GetXRMeshSubsystem>b__14_0__ +
                     0x38) == 0) {
          FUN_02b76274();
        }
        uVar5 = 0;
        if (param_12 != 0) {
          uVar5 = *(undefined8 *)(param_12 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_06313cc8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d7298 == (code *)0x0) {
          DAT_066d7298 = (code *)FUN_02b3c7e0(
                                             "UnityEngine.Graphics::Internal_DrawMeshInstanced_Injected(System.IntPtr,System.Int32,System.IntPtr,UnityEngine.Bindings.ManagedSpanWrapper&,System.Int32,System.IntPtr,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32,System.IntPtr,UnityEngine.Rendering.LightProbeUsage,System.IntPtr)"
                                             );
        }
        (*DAT_066d7298)(lVar3,param_2,lVar4,&local_80,param_5,local_88,param_7,param_8 & 1,param_9,
                        uVar2,param_11,uVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_05c9ef80(param_3,*(undefined8 *)System_Predicate<FruitSpawner_SpawnPoint>_TypeInfo,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


