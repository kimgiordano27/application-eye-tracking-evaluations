/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 04649a5c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_Reset(void)

{
  int iVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  code *pcVar8;
  undefined8 *unaff_x23;
  void *unaff_x24;
  undefined8 uVar9;
  int unaff_w27;
  long unaff_x29;
  
  memset(unaff_x24,0,unaff_x22);
  if ((unaff_x19 & 1) == 0) {
    FUN_03775678();
  }
  piVar3 = (int *)thunk_FUN_03799158();
  if (unaff_w27 < *piVar3) {
    iVar1 = unaff_w27;
    while( true ) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      piVar3 = (int *)thunk_FUN_03799158();
      if (*piVar3 <= iVar1) break;
      memset(unaff_x24,0,unaff_x22);
      memcpy(unaff_x23,unaff_x24,unaff_x22);
      lVar7 = *(long *)(unaff_x20 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar4 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03775678(lVar7);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar4 = *(long *)(unaff_x20 + 0x20);
      }
      uVar9 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x50);
      lVar7 = lVar4;
      if ((uVar2 & 1) == 0) {
        lVar4 = FUN_03775678(lVar4);
        uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        lVar7 = *(long *)(unaff_x20 + 0x20);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x50);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_03775678(lVar7);
      }
      puVar6 = unaff_x23;
      if (-1 < *(int *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x28)) {
        puVar6 = (undefined8 *)*unaff_x23;
      }
      *(int *)(unaff_x29 + -0xc) = iVar1;
      *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
      (**(code **)(lVar4 + 0x10))(uVar9,lVar4);
      iVar1 = iVar1 + 1;
    }
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03775678();
  }
  FUN_031b7e74();
  if (1 < unaff_w27) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    plVar5 = (long *)thunk_FUN_03799158();
    if (*plVar5 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      plVar5 = (long *)thunk_FUN_03799158();
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (unaff_w27 + -1 <= *(int *)(*plVar5 + 0x18)) goto LAB_04649cd4;
    }
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    lVar4 = lVar7;
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_03775678(lVar7);
      uVar2 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x60);
    if ((uVar2 & 1) == 0) {
      FUN_03775678(lVar4);
    }
    uVar9 = thunk_FUN_03799158();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03775678();
    }
    (*pcVar8)(uVar9,unaff_w27 + -1,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x60));
  }
LAB_04649cd4:
  if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


