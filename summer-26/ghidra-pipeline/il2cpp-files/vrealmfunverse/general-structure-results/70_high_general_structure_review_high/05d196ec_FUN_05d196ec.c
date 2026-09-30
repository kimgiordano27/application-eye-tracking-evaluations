/*
FUNCTION_NAME: FUN_05d196ec
ENTRY_POINT: 05d196ec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_05d196ec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_066db161 & 1) == 0) {
    FUN_02b3c81c(Method_System_Net_Sockets_Socket__ctor__);
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionGranted__);
    DAT_066db161 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_05ca2828(param_1,0);
    }
    if (*(long *)(*(long *)Method_PXR_PermissionRequest_PermissionCallbacks_PermissionGranted__ +
                 0x38) == 0) {
      FUN_02b76274();
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
    }
    if (DAT_066db170 == (code *)0x0) {
      DAT_066db170 = (code *)FUN_02b3c7e0(
                                         "UnityEngine.MeshCollider::set_sharedMesh_Injected(System.IntPtr,System.IntPtr)"
                                         );
    }
                    /* WARNING: Could not recover jumptable at 0x05d19798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_066db170)(lVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


