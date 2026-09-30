/*
FUNCTION_NAME: FUN_05cb29c0
ENTRY_POINT: 05cb29c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_05cb29c0(long param_1,long param_2,undefined8 param_3,long param_4,undefined4 param_5,
                 undefined4 param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_066d9495 & 1) == 0) {
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDeniedAndDontAskAgain__)
    ;
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__);
    FUN_02b3c81c(Oculus_Platform_Request<ChallengeEntryList>_TypeInfo);
    DAT_066d9495 = 1;
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05ca2828(param_1);
    }
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 != 0) {
      if (*(long *)(*(long *)Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__ + 0x38)
          == 0) {
        FUN_02b76274();
      }
      uVar4 = 0;
      if (param_4 != 0) {
        uVar4 = *(undefined8 *)(param_4 + 0x10);
      }
      uVar1 = 0;
      if (param_7 != 0) {
        uVar1 = *(undefined8 *)(param_7 + 0x10);
      }
      if (DAT_066d96a8 == (code *)0x0) {
        DAT_066d96a8 = (code *)FUN_02b3c7e0(
                                           "UnityEngine.Rendering.CommandBuffer::Internal_DrawMesh_Injected(System.IntPtr,System.IntPtr,UnityEngine.Matrix4x4&,System.IntPtr,System.Int32,System.Int32,System.IntPtr)"
                                           );
      }
                    /* WARNING: Could not recover jumptable at 0x05cb2ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_066d96a8)(lVar2,lVar3,param_3,uVar4,param_5,param_6,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_05c9ef80(param_2,*(undefined8 *)Oculus_Platform_Request<ChallengeEntryList>_TypeInfo);
}


