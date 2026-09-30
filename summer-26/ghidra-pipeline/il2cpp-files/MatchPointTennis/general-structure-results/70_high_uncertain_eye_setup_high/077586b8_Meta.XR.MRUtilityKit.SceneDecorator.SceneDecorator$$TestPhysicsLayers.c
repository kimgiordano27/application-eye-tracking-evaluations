/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$TestPhysicsLayers
ENTRY_POINT: 077586b8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__TestPhysicsLayers(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  int unaff_w26;
  byte unaff_w28;
  undefined8 *unaff_x29;
  
  while (*(long *)(param_1 + 0x38) != 0) {
    uVar2 = FUN_05baf9bc(*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_09f1e880);
    if ((unaff_w28 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (((*(long *)(unaff_x19 + 0x98) == 0) ||
          (lVar3 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),unaff_w26,*unaff_x29), lVar3 == 0)) ||
         (plVar4 = *(long **)(lVar3 + 0x10), plVar4 == (long *)0x0)) break;
      uVar1 = (**(code **)(*plVar4 + 0x8c8))
                        (plVar4,uVar2,unaff_w25,unaff_w24,unaff_w23,unaff_w22,unaff_w21,unaff_w20);
      uVar1 = uVar1 & 1;
    }
    unaff_w28 = uVar1 != 0;
    do {
      lVar3 = *(long *)(unaff_x19 + 0x98);
      unaff_w26 = unaff_w26 + 1;
      if (lVar3 == 0) goto LAB_07758788;
      if (*(int *)(lVar3 + 0x18) <= unaff_w26) {
        *(undefined4 *)(unaff_x19 + 0x10) = 1;
        return (bool)unaff_w28;
      }
      lVar3 = FUN_05badb74(lVar3,unaff_w26,*unaff_x29);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) goto LAB_07758788;
    } while (*(int *)(*(long *)(lVar3 + 0x38) + 0x18) < 1);
    if ((*(long *)(unaff_x19 + 0x98) == 0) ||
       (lVar3 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),unaff_w26,*unaff_x29), lVar3 == 0)) break;
    *(undefined1 *)(lVar3 + 0x40) = 1;
    if ((*(long *)(unaff_x19 + 0x98) == 0) ||
       (param_1 = FUN_05badb74(*(long *)(unaff_x19 + 0x98),unaff_w26,*unaff_x29), param_1 == 0))
    break;
  }
LAB_07758788:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


