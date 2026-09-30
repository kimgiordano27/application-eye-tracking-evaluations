/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$.cctor
ENTRY_POINT: 025f8670
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___cctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined1 unaff_w23;
  uint uVar3;
  long unaff_x24;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = unaff_x21[4];
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  lVar4 = *unaff_x21;
  if (lVar4 != 0) {
    if ((int)lVar1 < *(int *)(lVar4 + 0x18)) {
      uVar3 = *(uint *)(unaff_x21 + 4);
      *(uint *)(unaff_x21 + 4) = uVar3 + 1;
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
        if (*unaff_x21 == 0) goto LAB_025f8810;
      }
      if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      FUN_025f82d0();
      uVar3 = *(uint *)(unaff_x21 + 4);
      lVar4 = *unaff_x21;
      *(uint *)(unaff_x21 + 4) = uVar3 + 1;
      if (lVar4 == 0) goto LAB_025f8810;
    }
    if ((unaff_x20 != 0) && (lVar1 = thunk_FUN_01afa9e0(), lVar1 == 0)) {
      uVar2 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar2,0);
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar3) {
LAB_025f8814:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar5 = (long)(int)uVar3;
    *(long *)(lVar4 + lVar5 * 8 + 0x20) = unaff_x20;
    thunk_FUN_01b4f09c();
    lVar1 = unaff_x21[1];
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_025f8814;
      *(undefined4 *)(lVar1 + lVar5 * 4 + 0x20) = unaff_w19;
      lVar1 = unaff_x21[2];
      if (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_025f8814;
        *(undefined1 *)(lVar1 + lVar5 + 0x20) = unaff_w23;
        lVar1 = unaff_x21[3];
        uVar6 = unaff_x22[1];
        uVar2 = *unaff_x22;
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_025f8814;
          lVar1 = lVar1 + lVar5 * 0x18;
          *(undefined8 *)(lVar1 + 0x30) = unaff_x22[2];
          *(undefined8 *)(lVar1 + 0x28) = uVar6;
          *(undefined8 *)(lVar1 + 0x20) = uVar2;
          lVar1 = unaff_x21[5];
          FUN_03ad7678();
          if (lVar1 != 0) {
            FUN_026a7f84(lVar1,0,0,uVar3,*(undefined8 *)StringLiteral_3514);
            return;
          }
        }
      }
    }
  }
LAB_025f8810:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


