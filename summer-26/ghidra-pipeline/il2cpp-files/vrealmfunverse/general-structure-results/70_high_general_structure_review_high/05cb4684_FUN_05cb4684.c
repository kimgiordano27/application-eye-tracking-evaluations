/*
FUNCTION_NAME: FUN_05cb4684
ENTRY_POINT: 05cb4684
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05cb4684(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,undefined8 param_7,long param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_58 = param_3;
  uStack_54 = param_4;
  local_48 = param_1;
  uStack_44 = param_2;
  if ((DAT_066d94a2 & 1) == 0) {
    FUN_02b3c81c(Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__);
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDenied__);
    DAT_066d94a2 = 1;
  }
  if (param_5 != 0) {
    lVar1 = *(long *)(param_5 + 0x10);
    if (lVar1 != 0) {
      if (*(long *)(*(long *)Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDenied__ +
                   0x38) == 0) {
        FUN_02b76274();
      }
      uVar3 = 0;
      if (param_6 != 0) {
        uVar3 = *(undefined8 *)(param_6 + 0x10);
      }
      if (*(long *)(*(long *)Method_Unity_XR_PXR_PXR_SpatialMeshManager_CreateMeshRoutine__ + 0x38)
          == 0) {
        FUN_02b76274();
      }
      uVar2 = 0;
      if (param_8 != 0) {
        uVar2 = *(undefined8 *)(param_8 + 0x10);
      }
      if (DAT_066d9758 == (code *)0x0) {
        DAT_066d9758 = (code *)FUN_02b3c7e0(
                                           "UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(System.IntPtr,System.IntPtr,UnityEngine.Rendering.RenderTargetIdentifier&,System.IntPtr,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)"
                                           );
      }
      (*DAT_066d9758)(lVar1,uVar3,param_7,uVar2,param_9,&local_48,&local_58,param_10,param_11);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_05ca2828(param_5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


