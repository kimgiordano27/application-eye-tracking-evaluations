/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$get_Current
ENTRY_POINT: 04649b44
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


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__get_Current(long param_1,long param_2)

{
  ushort uVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ushort *in_x9;
  int unaff_w19;
  long unaff_x20;
  size_t unaff_x22;
  code *pcVar7;
  undefined8 *unaff_x23;
  void *unaff_x24;
  undefined8 unaff_x25;
  long lVar8;
  int unaff_w27;
  undefined8 unaff_x28;
  long unaff_x29;
  
  do {
    uVar1 = *in_x9;
    do {
      lVar8 = *(long *)(*(long *)(param_2 + 0xc0) + 0x50);
      if ((uVar1 & 1) == 0) {
        param_1 = FUN_03775678(param_1);
      }
      puVar5 = unaff_x23;
      if (-1 < *(int *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10) + 0x28)) {
        puVar5 = (undefined8 *)*unaff_x23;
      }
      *(int *)(unaff_x29 + -0xc) = unaff_w19;
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x28;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
      (**(code **)(lVar8 + 0x10))(unaff_x25,lVar8);
      unaff_w19 = unaff_w19 + 1;
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      piVar2 = (int *)thunk_FUN_03799158();
      if (*piVar2 <= unaff_w19) {
        if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
          FUN_03775678();
        }
        FUN_031b7e74();
        if (1 < unaff_w27) {
          if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
            FUN_03775678();
          }
          plVar3 = (long *)thunk_FUN_03799158();
          if (*plVar3 != 0) {
            if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
              FUN_03775678();
            }
            plVar3 = (long *)thunk_FUN_03799158();
            if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (unaff_w27 + -1 <= *(int *)(*plVar3 + 0x18)) goto LAB_04649cd4;
          }
          lVar6 = *(long *)(unaff_x20 + 0x20);
          uVar1 = *(ushort *)(lVar6 + 0x135);
          lVar8 = lVar6;
          if ((uVar1 & 1) == 0) {
            lVar6 = FUN_03775678(lVar6);
            uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
            lVar8 = *(long *)(unaff_x20 + 0x20);
          }
          pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
          if ((uVar1 & 1) == 0) {
            FUN_03775678(lVar8);
          }
          uVar4 = thunk_FUN_03799158();
          lVar8 = *(long *)(unaff_x20 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03775678();
          }
          (*pcVar7)(uVar4,unaff_w27 + -1,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x60));
        }
LAB_04649cd4:
        if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      memset(unaff_x24,0,unaff_x22);
      memcpy(unaff_x23,unaff_x24,unaff_x22);
      lVar8 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar8 + 0x135);
      param_2 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_03775678(lVar8);
        uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
        param_2 = *(long *)(unaff_x20 + 0x20);
      }
      unaff_x25 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x50);
      param_1 = param_2;
    } while ((uVar1 & 1) != 0);
    param_2 = FUN_03775678(param_2);
    param_1 = *(long *)(unaff_x20 + 0x20);
    in_x9 = (ushort *)(param_1 + 0x135);
  } while( true );
}


