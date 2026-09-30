/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$get_RaycastHitResult
ENTRY_POINT: 04e1bb98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_RaycastHitResult
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,int param_5,
               long param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((DAT_06bb7e0a & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9980);
    DAT_06bb7e0a = 1;
  }
  puVar2 = PTR_DAT_067c9980;
  iVar1 = (param_4 - param_5) + 1;
  if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      uVar4 = *(uint *)(param_2 + 0x18);
      if (uVar4 <= param_4) {
LAB_04e1bc60:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        uVar4 = *(uint *)(param_2 + 0x18);
      }
      if (uVar4 <= param_4) goto LAB_04e1bc60;
      uVar3 = FUN_050b6884(param_2 + 0x20 + (long)(int)param_4 * 8,param_3,
                           *(undefined8 *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 0x10));
      if ((uVar3 & 1) != 0) {
        return param_4;
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


