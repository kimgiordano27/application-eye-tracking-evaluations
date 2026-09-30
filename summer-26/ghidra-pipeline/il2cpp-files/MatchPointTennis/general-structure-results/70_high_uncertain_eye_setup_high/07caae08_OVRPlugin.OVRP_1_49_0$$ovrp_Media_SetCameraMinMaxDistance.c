/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCameraMinMaxDistance
ENTRY_POINT: 07caae08
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCameraMinMaxDistance(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x168));
  FUN_04447ba8(PTR_DAT_09f51170);
  *(undefined1 *)(unaff_x20 + 0xa47) = 1;
  puVar2 = PTR_DAT_09f51170;
  puVar1 = PTR_DAT_09f51168;
  switch(*(undefined4 *)(unaff_x19 + 0x28)) {
  case 0:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_07cab050:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(long *)(lVar5 + 0x20) == 0) {
LAB_07cab04c:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_04cc9f40(*(long *)(lVar5 + 0x20),0,*(undefined8 *)PTR_DAT_09f51168);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07cab050;
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 == 0) goto LAB_07cab04c;
    uVar4 = *(undefined8 *)puVar1;
    uVar3 = 0;
    break;
  case 1:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07cab050;
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_07cab04c;
    FUN_04cc9f40(*(long *)(lVar5 + 0x20),0,*(undefined8 *)PTR_DAT_09f51170);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07cab050;
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 == 0) goto LAB_07cab04c;
    uVar4 = *(undefined8 *)puVar2;
    uVar3 = 1;
    break;
  case 2:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07cab050;
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_07cab04c;
    FUN_04cc9f40(*(long *)(lVar5 + 0x20),1,*(undefined8 *)PTR_DAT_09f51168);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07cab050;
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 == 0) goto LAB_07cab04c;
    uVar4 = *(undefined8 *)puVar1;
    uVar3 = 2;
    break;
  case 3:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07cab050;
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_07cab04c;
    FUN_04cc9f40(*(long *)(lVar5 + 0x20),1,*(undefined8 *)PTR_DAT_09f51170);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07cab050;
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 == 0) goto LAB_07cab04c;
    uVar4 = *(undefined8 *)puVar2;
    uVar3 = 3;
    break;
  case 4:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07cab050;
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_07cab04c;
    FUN_04cc9f40(*(long *)(lVar5 + 0x20),2,*(undefined8 *)PTR_DAT_09f51168);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07cab050;
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 == 0) goto LAB_07cab04c;
    uVar4 = *(undefined8 *)puVar1;
    uVar3 = 4;
    break;
  case 5:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07cab050;
    if (*(long *)(lVar5 + 0x20) == 0) goto LAB_07cab04c;
    FUN_04cc9f40(*(long *)(lVar5 + 0x20),2,*(undefined8 *)PTR_DAT_09f51170);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_07cab04c;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_07cab050;
    lVar5 = *(long *)(lVar5 + 0x28);
    if (lVar5 == 0) goto LAB_07cab04c;
    uVar4 = *(undefined8 *)puVar2;
    uVar3 = 5;
    break;
  default:
    goto switchD_07caae44_default;
  }
  FUN_04cc9f40(lVar5,uVar3,uVar4);
switchD_07caae44_default:
  FUN_07cab054();
  return;
}


