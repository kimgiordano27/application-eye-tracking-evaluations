/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 076ec1a4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  while (FUN_078bb7b4(), unaff_x22 != 0) {
    while( true ) {
      lVar2 = FUN_078c335c();
      if ((lVar2 == 0) ||
         (lVar2 = FUN_078c335c(lVar2,*(undefined8 *)(unaff_x22 + 0x18),0), lVar2 == 0))
      goto LAB_076ec230;
      FUN_078c333c(lVar2,0);
      unaff_w21 = unaff_w21 + 1;
      if (unaff_w23 == unaff_w21) {
        (**(code **)(*unaff_x20 + 0x168))();
        return;
      }
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_076ec230;
      lVar2 = *(long *)(unaff_x19 + 0x200);
      uVar1 = FUN_071c07b4(*(long *)(unaff_x19 + 0x218),unaff_w21,*unaff_x24);
      if (lVar2 == 0) goto LAB_076ec230;
      unaff_x22 = FUN_05badb74(lVar2,uVar1,*unaff_x25);
      if (*(long *)(unaff_x19 + 0x220) != 0) break;
      if ((unaff_x22 == 0) || (unaff_x20 == (long *)0x0)) goto LAB_076ec230;
    }
    FUN_071c0648(*(long *)(unaff_x19 + 0x220),unaff_w21,*unaff_x26);
    FUN_076e61fc();
    if (unaff_x20 == (long *)0x0) break;
  }
LAB_076ec230:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


