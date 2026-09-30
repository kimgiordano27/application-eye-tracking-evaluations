/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$CheckColliderHitsForMRUK
ENTRY_POINT: 04e13f7c
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


uint Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__CheckColliderHitsForMRUK
               (ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
               uint param_6)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  int unaff_w24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9918);
    *(undefined1 *)(unaff_x25 + 0xdfa) = 1;
  }
  puVar2 = PTR_DAT_067c9918;
  iVar1 = (param_6 - unaff_w24) + 1;
  if (iVar1 <= (int)param_6) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      uVar4 = *(uint *)(param_3 + 0x18);
      if (uVar4 <= param_6) {
LAB_04e1403c:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        uVar4 = *(uint *)(param_3 + 0x18);
      }
      if (uVar4 <= param_6) goto LAB_04e1403c;
      uVar3 = FUN_03e85ffc(param_3 + 0x20 + (long)(int)param_6 * 0x10,param_4,param_5,
                           *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10));
      if ((uVar3 & 1) != 0) {
        return param_6;
      }
      param_6 = param_6 - 1;
    } while (iVar1 <= (int)param_6);
  }
  return 0xffffffff;
}


