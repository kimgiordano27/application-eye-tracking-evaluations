/*
FUNCTION_NAME: FUN_05e7c098
ENTRY_POINT: 05e7c098
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_05e7c098(int *param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_06312d90;
  if ((DAT_066dc706 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_3__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_Clickable_OnTimer__);
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderUberPost>b__171_0__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<UpdateCameraResolution>b__124_0__
                );
    DAT_066dc706 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c45700(param_2 >> 0x38 == 1,0);
  puVar2 = 
  Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<UpdateCameraResolution>b__124_0__;
  lVar4 = *(long *)(param_1 + 4);
  if (lVar4 != 0) {
    iVar1 = *param_1 * (int)param_2 + ((uint)(param_2 >> 0x20) & 0xffff);
    uVar3 = FUN_038594b8(lVar4,iVar1,
                         *(undefined8 *)Method_UnityEngine_UIElements_Clickable_OnTimer__);
    FUN_0385950c(lVar4,iVar1,uVar3 | 1 << (ulong)((ushort)(param_2 >> 0x30) & 0x1f),
                 *(undefined8 *)puVar2);
    if (*(long *)(param_1 + 2) != 0) {
      lVar4 = FUN_0388d574(*(long *)(param_1 + 2),param_2 & 0xffffffff,
                           *(undefined8 *)
                            Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderSMAA>b__134_3__
                          );
      if (*(long *)(param_1 + 2) != 0) {
                    /* catch() { ... } // from try @ 05e7c1f0 with catch @ 05e7c1d0
                       catch() { ... } // from try @ 05e7c228 with catch @ 05e7c1d0
                       catch() { ... } // from try @ 05e7c250 with catch @ 05e7c1d0 */
        FUN_0388d5c8(*(long *)(param_1 + 2),param_2 & 0xffffffff,lVar4 + 0x100000000,
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_Universal_PostProcessPass_<>c_<RenderUberPost>b__171_0__
                    );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


