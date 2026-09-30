/*
FUNCTION_NAME: FUN_05cb7810
ENTRY_POINT: 05cb7810
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05cb7810(long param_1,undefined8 param_2,long param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_066d94b4 & 1) == 0) {
    FUN_02b3c81c(Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDenied__);
    DAT_066d94b4 = 1;
  }
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 != 0) {
      if (*(long *)(*(long *)Method_PXR_PermissionRequest_PermissionCallbacks_PermissionDenied__ +
                   0x38) == 0) {
        FUN_02b76274();
      }
      uVar2 = 0;
      if (param_3 != 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x10);
      }
      if (DAT_066d98d0 == (code *)0x0) {
        DAT_066d98d0 = (code *)FUN_02b3c7e0(
                                           "UnityEngine.Rendering.CommandBuffer::IssuePluginCustomTextureUpdateInternal_Injected(System.IntPtr,System.IntPtr,System.IntPtr,System.UInt32,System.Boolean)"
                                           );
      }
                    /* WARNING: Could not recover jumptable at 0x05cb78c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_066d98d0)(lVar1,param_2,uVar2,param_4,param_5 & 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_05ca2828(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


