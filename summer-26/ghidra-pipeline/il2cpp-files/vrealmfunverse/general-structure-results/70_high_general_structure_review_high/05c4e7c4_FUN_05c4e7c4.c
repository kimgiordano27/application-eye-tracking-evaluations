/*
FUNCTION_NAME: FUN_05c4e7c4
ENTRY_POINT: 05c4e7c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_11;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_05c4e7c4(long param_1,undefined4 param_2,long param_3,undefined8 param_4,long param_5,
                 undefined4 param_6,long param_7,undefined4 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_066d7232 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313cc8);
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_SpatialMeshDataUpdated__);
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDeniedAndDontAskAgain__)
    ;
    FUN_02b3c81c(Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize__);
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_<GetXRMeshSubsystem>b__14_0__);
    FUN_02b3c81c(System_Predicate<FruitSpawner_SpawnPoint>_TypeInfo);
    FUN_02b3c81c(Oculus_Platform_Request<ChallengeEntryList>_TypeInfo);
    DAT_066d7232 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05c9ef80(0,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,0);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05c9ef80(0,*(undefined8 *)System_Predicate<FruitSpawner_SpawnPoint>_TypeInfo,0);
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05c9ef80(param_1,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo,0);
    }
    if (param_3 != 0) {
      lVar3 = *(long *)(param_3 + 0x10);
      if (lVar3 != 0) {
        uVar4 = 0;
        if (param_5 != 0) {
          uVar4 = *(undefined8 *)(param_5 + 0x10);
        }
        uVar2 = 0;
        if (param_7 != 0) {
          uVar2 = *(undefined8 *)(param_7 + 0x10);
        }
        if (*(long *)(*(long *)
                       Method_System_Runtime_Serialization_Formatters_Binary_ObjectWriter_Serialize__
                     + 0x38) == 0) {
          FUN_02b76274();
        }
        if (*(long *)(*(long *)
                       Method_Unity_XR_PXR_PXR_SpatialMeshManager_<GetXRMeshSubsystem>b__14_0__ +
                     0x38) == 0) {
          FUN_02b76274();
        }
        if (*(int *)(*(long *)PTR_DAT_06313cc8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (DAT_066d72a0 == (code *)0x0) {
          DAT_066d72a0 = (code *)FUN_02b3c7e0(
                                             "UnityEngine.Graphics::Internal_DrawMeshInstancedIndirect_Injected(System.IntPtr,System.Int32,System.IntPtr,UnityEngine.Bounds&,System.IntPtr,System.Int32,System.IntPtr,UnityEngine.Rendering.ShadowCastingMode,System.Boolean,System.Int32,System.IntPtr,UnityEngine.Rendering.LightProbeUsage,System.IntPtr)"
                                             );
        }
                    /* WARNING: Could not recover jumptable at 0x05c4e9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_066d72a0)(lVar1,param_2,lVar3,param_4,uVar4,param_6,uVar2,param_8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_05c9ef80(param_3,*(undefined8 *)System_Predicate<FruitSpawner_SpawnPoint>_TypeInfo,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


