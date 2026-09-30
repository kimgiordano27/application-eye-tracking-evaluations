/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 07736524
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int in_w9;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  
  uVar1 = (**(code **)(param_1 + (long)in_w9 * 0x10 + 0x138))();
  if ((unaff_x25 != 0) && ((uVar1 & 1) != 0)) {
    FUN_07a61200();
  }
  lVar3 = *unaff_x22;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09f30ab8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 6) * 0x10 + 0x138);
        goto LAB_077365ac;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac();
LAB_077365ac:
  uVar1 = (*(code *)*puVar2)();
  if ((unaff_x21 != 0) && ((uVar1 & 1) != 0)) {
    FUN_07a61200();
  }
  if (unaff_x24 != 0) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07a61200();
  }
  return;
}


