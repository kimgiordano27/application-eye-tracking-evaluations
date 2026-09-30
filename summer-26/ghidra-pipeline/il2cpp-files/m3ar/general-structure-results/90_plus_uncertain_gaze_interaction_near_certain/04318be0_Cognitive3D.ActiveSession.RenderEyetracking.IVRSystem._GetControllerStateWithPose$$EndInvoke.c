/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 04318be0
PROGRAM: m3ar-libil2cpp.so
SCORE: 197
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_3;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetControllerStateWithPose__EndInvoke
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  uint uVar5;
  long unaff_x23;
  undefined8 *puVar6;
  long unaff_x24;
  undefined8 *puVar7;
  long unaff_x25;
  undefined8 *puVar8;
  long unaff_x26;
  undefined8 *puVar9;
  long lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  
  puVar6 = *(undefined8 **)(unaff_x23 + 0x7c8);
  puVar7 = *(undefined8 **)(unaff_x24 + 0x728);
  puVar8 = *(undefined8 **)(unaff_x25 + 0x720);
  puVar9 = *(undefined8 **)(unaff_x26 + 0xa98);
  plVar4 = *(long **)(unaff_x20 + 0x568);
  uVar5 = 0;
  fVar15 = 0.0;
  do {
    if ((int)*(uint *)(param_1 + 0x18) <= (int)uVar5) {
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar5) {
LAB_04318e2c:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    lVar10 = (long)(int)uVar5;
    lVar1 = *(long *)(param_1 + lVar10 * 8 + 0x20);
    if (lVar1 == 0) {
LAB_04318dfc:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar11 = FUN_08598884(lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) goto LAB_04318dfc;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_04318e2c;
    lVar1 = *(long *)(lVar1 + lVar10 * 8 + 0x20);
    if (lVar1 == 0) goto LAB_04318dfc;
    uVar13 = param_3;
    uVar14 = param_4;
    uVar12 = FUN_08599040(lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) goto LAB_04318dfc;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_04318e2c;
    lVar1 = *(long *)(lVar1 + lVar10 * 8 + 0x20);
    if ((lVar1 == 0) || (lVar1 = FUN_08584ab0(lVar1,0), lVar1 == 0)) goto LAB_04318dfc;
    FUN_08588638(lVar1,1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) goto LAB_04318dfc;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_04318e2c;
    if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_04318dfc;
    lVar1 = *(long *)(lVar1 + lVar10 * 8 + 0x20);
    FUN_08598884(*(long *)(unaff_x19 + 0x40),0);
    if (lVar1 == 0) goto LAB_04318dfc;
    FUN_0859895c(lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) goto LAB_04318dfc;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_04318e2c;
    lVar1 = *(long *)(lVar1 + lVar10 * 8 + 0x20);
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(plVar4);
      DAT_09539c10 = '\x01';
    }
    if (lVar1 == 0) goto LAB_04318dfc;
    puVar3 = *(undefined4 **)(*plVar4 + 0xb8);
    UnityEngine_UI_Dropdown__OnSubmit(*puVar3,puVar3[1],puVar3[2],lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) goto LAB_04318dfc;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_04318e2c;
    uVar2 = FUN_0450c22c(uVar11,param_3,param_4,*(undefined4 *)(unaff_x19 + 0x38),
                         *(undefined4 *)(unaff_x19 + 0x30),
                         *(undefined8 *)(lVar1 + lVar10 * 8 + 0x20),1,0,0);
    uVar2 = FUN_04d5988c(fVar15 + *(float *)(unaff_x19 + 0x2c),uVar2,*puVar6);
    FUN_04d59a90(uVar2,1,*puVar7);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) goto LAB_04318dfc;
    if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_04318e2c;
    uVar5 = uVar5 + 1;
    uVar2 = FUN_0450a268(uVar12,uVar13,uVar14,*(float *)(unaff_x19 + 0x30) * 0.5,
                         *(undefined8 *)(lVar1 + lVar10 * 8 + 0x20),0);
    uVar2 = FUN_04d5988c(fVar15 + *(float *)(unaff_x19 + 0x2c),uVar2,*puVar8);
    FUN_04d59a90(uVar2,0x1b,*puVar9);
    param_1 = *(long *)(unaff_x19 + 0x48);
    fVar15 = fVar15 + *(float *)(unaff_x19 + 0x34);
    param_3 = uVar13;
    param_4 = uVar14;
    if (param_1 == 0) goto LAB_04318dfc;
  } while( true );
}


