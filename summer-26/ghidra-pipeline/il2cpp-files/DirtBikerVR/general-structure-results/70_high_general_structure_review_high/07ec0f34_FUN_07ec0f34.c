/*
FUNCTION_NAME: FUN_07ec0f34
ENTRY_POINT: 07ec0f34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void FUN_07ec0f34(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
  if ((DAT_0899acab & 1) == 0) {
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseSlider<int>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    DAT_0899acab = 1;
  }
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_0679343c(lVar4,0);
  puVar3 = Method_UnityEngine_UIElements_BaseSlider<int>_ComputeValueAndDirectionFromClick__;
  puVar2 = Method_UnityEngine_UIElements_BaseSlider<int>__ctor__;
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x10) = param_2;
    uVar5 = FUN_07ebfa24(param_1);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_04962b78(uVar6,lVar4,*(undefined8 *)puVar3,0);
    plVar7 = (long *)FUN_044c97ac(uVar5,uVar6,*(undefined8 *)puVar1);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07ec1024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


