/*
FUNCTION_NAME: FUN_0584ee80
ENTRY_POINT: 0584ee80
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


void FUN_0584ee80(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_06bc0fc0 & 1) == 0) {
                    /* try { // try from 0584ee9c to 0594eec3 has its CatchHandler @ 0584f660 */
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_Clear__
                );
    DAT_06bc0fc0 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    thunk_FUN_02f6ef30(PTR_DAT_067cb988);
    uVar3 = thunk_FUN_02f45270();
    FUN_050d7ab4(uVar3,0);
    uVar4 = thunk_FUN_02f6ef30(
                              Method_Unity_Burst_FunctionPointer<BurstMathUtility_OrthogonalUpVector_00000353_PostfixBurstDelegate>_get_Value__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar3,uVar4);
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_Clear__
                     + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)
         Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_Clear__
       )) {
      FUN_058401e4(param_2,0);
      return;
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar2 != 0) {
                    /* try { // try from 0584ef00 to 0594ef2b has its CatchHandler @ 0584f658 */
    FUN_050163f0(lVar2,param_2,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


