/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0566f750
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar3;
  int unaff_w22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (unaff_w22 == 0) {
    uVar7 = unaff_x20[1];
    uVar6 = *unaff_x20;
    uVar5 = unaff_x20[3];
    uVar4 = unaff_x20[2];
    piVar2 = unaff_x19 + 8;
    *(undefined8 *)(unaff_x19 + 10) = unaff_x20[4];
    *(undefined8 *)(unaff_x19 + 8) = uVar5;
    *(undefined8 *)(unaff_x19 + 6) = uVar4;
    *(undefined8 *)(unaff_x19 + 4) = uVar7;
    *(undefined8 *)(unaff_x19 + 2) = uVar6;
  }
  else {
    plVar3 = (long *)(unaff_x19 + 0xc);
    lVar1 = *(long *)(param_3 + 0x20);
    if (*plVar3 == 0) {
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      lVar1 = FUN_03d2d394(lVar1,1);
      *plVar3 = lVar1;
      thunk_FUN_03d1023c(plVar3,lVar1);
      uVar5 = unaff_x20[1];
      uVar4 = *unaff_x20;
      uVar7 = unaff_x20[3];
      uVar6 = unaff_x20[2];
      lVar1 = *plVar3;
      if (lVar1 == 0) goto LAB_0566f8a0;
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0566f8a4;
      *(undefined8 *)(lVar1 + 0x40) = unaff_x20[4];
      *(undefined8 *)(lVar1 + 0x28) = uVar5;
      *(undefined8 *)(lVar1 + 0x20) = uVar4;
      *(undefined8 *)(lVar1 + 0x38) = uVar7;
      *(undefined8 *)(lVar1 + 0x30) = uVar6;
    }
    else {
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      FUN_04dcc924(plVar3,unaff_w22,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
      uVar5 = unaff_x20[1];
      uVar4 = *unaff_x20;
      uVar7 = unaff_x20[3];
      uVar6 = unaff_x20[2];
      lVar1 = *(long *)(unaff_x19 + 0xc);
      if (lVar1 == 0) {
LAB_0566f8a0:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      if (*(uint *)(lVar1 + 0x18) <= *unaff_x19 - 1U) {
LAB_0566f8a4:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
      lVar1 = lVar1 + (long)(int)(*unaff_x19 - 1U) * 0x28;
      *(undefined8 *)(lVar1 + 0x40) = unaff_x20[4];
      *(undefined8 *)(lVar1 + 0x28) = uVar5;
      *(undefined8 *)(lVar1 + 0x20) = uVar4;
      *(undefined8 *)(lVar1 + 0x38) = uVar7;
      *(undefined8 *)(lVar1 + 0x30) = uVar6;
    }
    piVar2 = (int *)(lVar1 + 0x38);
  }
  thunk_FUN_03d1023c(piVar2,0);
  *unaff_x19 = *unaff_x19 + 1;
  return;
}


