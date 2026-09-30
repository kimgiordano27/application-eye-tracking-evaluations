/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<RayCastDebugger>b__59_0
ENTRY_POINT: 05b0e088
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SceneDebugger__<RayCastDebugger>b__59_0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if ((int)param_1[1] != *(int *)(lVar5 + 0x2c)) {
      FUN_05e229e0(0);
      lVar5 = *param_1;
      if (lVar5 == 0) goto LAB_05b0e198;
    }
    uVar3 = *(uint *)(lVar5 + 0x20);
    uVar4 = *(uint *)((long)param_1 + 0xc);
    do {
      uVar7 = uVar4;
      if (uVar3 <= uVar7) {
        param_1[3] = 0;
        param_1[4] = 0;
        *(uint *)((long)param_1 + 0xc) = uVar3 + 1;
        param_1[2] = 0;
        goto LAB_05b0e178;
      }
      lVar6 = *(long *)(lVar5 + 0x18);
      *(uint *)((long)param_1 + 0xc) = uVar7 + 1;
      if (lVar6 == 0) goto LAB_05b0e198;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      lVar6 = lVar6 + (long)(int)uVar7 * 0x20;
      uVar4 = uVar7 + 1;
    } while (*(int *)(lVar6 + 0x20) < 0);
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x30);
    uVar8 = *(undefined8 *)(lVar6 + 0x38);
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    lVar5 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0322bef4();
    }
    FUN_045e320c(&stack0x00000008,uVar1,uVar2,uVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38))
    ;
    param_1[4] = in_stack_00000018;
    param_1[3] = in_stack_00000010;
    param_1[2] = in_stack_00000008;
    thunk_FUN_0329bf60(param_1 + 4,0);
LAB_05b0e178:
    return uVar7 < uVar3;
  }
LAB_05b0e198:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


