/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 036961e0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_6;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8
UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  FUN_01c5c92c(*(undefined8 *)(param_4 + 0x38));
  FUN_01c5c92c(PTR_DAT_03ce4d58);
  *(undefined1 *)(unaff_x21 + 0xe48) = 1;
  lVar2 = thunk_FUN_01c8fb4c();
  if (lVar2 == 0) {
    return 1;
  }
  uVar14 = 0;
  if (unaff_x20 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03ce4d58 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03ce4d58)
       ) {
      uVar14 = (undefined4)unaff_x20[0x2a];
    }
  }
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03ce1b50) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_036962c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c8cb54();
LAB_036962c8:
    lVar5 = (*(code *)*puVar3)();
    if (lVar5 != 0) {
      lVar9 = *(long *)(unaff_x22 + 0x38);
      uVar10 = FUN_0377ebec(lVar5,0);
      if (unaff_x20 != (long *)0x0) {
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        uVar12 = param_2;
        uVar13 = param_3;
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03cb6038) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_03696354;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01c8cb54();
LAB_03696354:
        lVar6 = (*(code *)*puVar3)();
        if ((lVar6 != 0) && (uVar11 = FUN_0377ebec(lVar6,0), lVar9 != 0)) {
          uVar4 = FUN_036963b8(uVar10,param_2,param_3,uVar11,uVar12,uVar13,uVar14,lVar9,lVar2,lVar5)
          ;
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


