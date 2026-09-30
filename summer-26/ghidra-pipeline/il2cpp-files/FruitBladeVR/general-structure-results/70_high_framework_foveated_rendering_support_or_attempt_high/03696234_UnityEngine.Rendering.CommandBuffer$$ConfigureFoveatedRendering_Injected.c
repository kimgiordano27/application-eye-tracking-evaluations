/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering_Injected
ENTRY_POINT: 03696234
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_4;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering_Injected
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  bool in_CY;
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 unaff_s8;
  
  if ((in_CY) && (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1)) {
    unaff_s8 = (undefined4)unaff_x20[0x2a];
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03ce1b50) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
          goto LAB_036962c8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01c8cb54();
LAB_036962c8:
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 != 0) {
      lVar5 = *(long *)(unaff_x22 + 0x38);
      uVar6 = FUN_0377ebec(lVar2,0);
      if (unaff_x20 != (long *)0x0) {
        lVar2 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        uVar8 = param_3;
        uVar9 = param_4;
        if (uVar3 != 0) {
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_03cb6038) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 7) * 0x10 + 0x138);
              goto LAB_03696354;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined8 *)FUN_01c8cb54();
LAB_03696354:
        lVar2 = (*(code *)*puVar1)();
        if ((lVar2 != 0) && (uVar7 = FUN_0377ebec(lVar2,0), lVar5 != 0)) {
          FUN_036963b8(uVar6,param_3,param_4,uVar7,uVar8,uVar9,unaff_s8,lVar5);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


