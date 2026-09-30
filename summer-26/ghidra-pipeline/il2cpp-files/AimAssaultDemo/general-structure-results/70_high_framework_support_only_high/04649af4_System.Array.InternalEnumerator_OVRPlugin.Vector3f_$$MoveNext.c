/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 04649af4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__MoveNext
               (undefined8 *param_1,void *param_2,size_t param_3)

{
  ushort uVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  int unaff_w19;
  long unaff_x20;
  size_t unaff_x22;
  code *pcVar7;
  undefined8 *unaff_x23;
  void *unaff_x24;
  undefined8 uVar8;
  int unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  
  while( true ) {
    memcpy(param_1,param_2,param_3);
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03775678(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    uVar8 = **(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x50);
    lVar6 = lVar3;
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_03775678(lVar3);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x50);
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03775678(lVar6);
    }
    puVar5 = unaff_x23;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x23;
    }
    *(int *)(unaff_x29 + -0xc) = unaff_w19;
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x28;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (**(code **)(lVar3 + 0x10))(uVar8,lVar3);
    unaff_w19 = unaff_w19 + 1;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    piVar2 = (int *)thunk_FUN_03799158();
    if (*piVar2 <= unaff_w19) break;
    memset(unaff_x24,0,unaff_x22);
    param_1 = unaff_x23;
    param_2 = unaff_x24;
    param_3 = unaff_x22;
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  FUN_031b7e74();
  if (1 < unaff_w27) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    plVar4 = (long *)thunk_FUN_03799158();
    if (*plVar4 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      plVar4 = (long *)thunk_FUN_03799158();
      if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (unaff_w27 + -1 <= *(int *)(*plVar4 + 0x18)) goto LAB_04649cd4;
    }
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_03775678(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_03775678(lVar3);
    }
    uVar8 = thunk_FUN_03799158();
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03775678();
    }
    (*pcVar7)(uVar8,unaff_w27 + -1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x60));
  }
LAB_04649cd4:
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


