/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$Raycast
ENTRY_POINT: 07731434
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__Raycast(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x24;
  undefined8 unaff_x27;
  undefined4 unaff_w28;
  long in_stack_00000018;
  
  while( true ) {
    thunk_FUN_044bb4b4();
    if (*(uint *)(unaff_x21 + 3) <= unaff_w19) break;
    if ((in_stack_00000018 == 0) || (lVar3 = *(long *)(in_stack_00000018 + 0xa0), lVar3 == 0)) {
LAB_07731764:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) break;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x20);
    if ((lVar3 == 0) || (lVar1 = *unaff_x22, lVar1 == 0)) goto LAB_07731764;
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
    thunk_FUN_044bb4b4();
    if (*(uint *)(unaff_x21 + 3) <= unaff_w19) break;
    lVar3 = *unaff_x22;
    if (lVar3 == 0) goto LAB_07731764;
    *(undefined8 *)(lVar3 + 0x18) = unaff_x27;
    *(undefined4 *)(lVar3 + 0x10) = unaff_w28;
    thunk_FUN_044bb4b4();
    unaff_w19 = unaff_w19 + 1;
    if ((int)unaff_x21[3] <= (int)unaff_w19) {
      return;
    }
    lVar3 = thunk_FUN_0448520c(*unaff_x20);
    FUN_07a80df4(lVar3,0);
    if ((lVar3 != 0) &&
       (lVar1 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
      uVar2 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar2,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_w19) break;
    unaff_x24 = (long)(int)unaff_w19;
    unaff_x22 = unaff_x21 + unaff_x24 + 4;
    *unaff_x22 = lVar3;
    thunk_FUN_044bb4b4(unaff_x22,lVar3);
    if (*(uint *)(unaff_x21 + 3) <= unaff_w19) break;
    if ((in_stack_00000018 == 0) || (lVar3 = *(long *)(in_stack_00000018 + 0xa0), lVar3 == 0))
    goto LAB_07731764;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w19) break;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x20);
    if ((lVar3 == 0) || (*unaff_x22 == 0)) goto LAB_07731764;
    *(undefined8 *)(*unaff_x22 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


