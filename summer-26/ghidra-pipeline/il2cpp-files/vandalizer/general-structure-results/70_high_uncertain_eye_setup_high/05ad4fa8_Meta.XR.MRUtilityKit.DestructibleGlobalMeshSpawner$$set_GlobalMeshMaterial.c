/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$set_GlobalMeshMaterial
ENTRY_POINT: 05ad4fa8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__set_GlobalMeshMaterial(long param_1)

{
  long lVar1;
  int in_w9;
  long in_x10;
  uint in_w11;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  while( true ) {
    uVar2 = in_w11;
    *(uint *)(unaff_x19 + 8) = uVar2;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x10 + 0x18) <= uVar2 - 1) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w21 * (long)in_w9 + 0x20)) break;
    if (unaff_w20 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      goto LAB_05ad5008;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    in_w11 = uVar2 + 1;
    unaff_w21 = uVar2;
  }
  lVar1 = in_x10 + (long)(int)unaff_w21 * 0x30;
  uVar4 = *(undefined8 *)(lVar1 + 0x40);
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  thunk_FUN_0329bf60(unaff_x19 + 0x10,0);
  uVar2 = unaff_w21;
LAB_05ad5008:
  return uVar2 < unaff_w20;
}


