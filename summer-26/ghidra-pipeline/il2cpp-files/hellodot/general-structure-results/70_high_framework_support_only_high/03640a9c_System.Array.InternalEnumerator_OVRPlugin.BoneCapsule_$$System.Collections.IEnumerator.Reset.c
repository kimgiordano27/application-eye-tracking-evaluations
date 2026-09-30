/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 03640a9c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
               (void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  int unaff_w25;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)PTR_DAT_065dec88;
  puVar3 = PTR_DAT_065dec80;
  puVar2 = PTR_DAT_065dec78;
  if ((in_ZR) || (unaff_w19 == 0)) {
    uVar4 = FUN_0410be30(unaff_x29 + -0x60,*(undefined8 *)PTR_DAT_065dec58);
    lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
    if (unaff_w25 == 0) {
      puVar6 = (undefined8 *)puVar3;
    }
    if (unaff_w25 == 0) {
      unaff_x22 = 0;
    }
    FUN_05af3a9c(lVar5,*puVar6,uVar4,0);
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    uVar4 = *puVar6;
    *(bool *)(unaff_x29 + -0x1c) = lVar5 == 0;
    *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x40) = unaff_x22;
    *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
    *(long *)(unaff_x29 + -0x30) = lVar5;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
    (*(code *)puVar6[2])(uVar4,puVar6,lVar7,unaff_x29 + -0x40,unaff_x29 + -0xd8);
    uVar8 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar4 = *(undefined8 *)(unaff_x29 + -0xd8);
    puVar6 = *(undefined8 **)(unaff_x29 + -0xe0);
    puVar6[2] = *(undefined8 *)(unaff_x29 + -200);
    puVar6[1] = uVar8;
    *puVar6 = uVar4;
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


