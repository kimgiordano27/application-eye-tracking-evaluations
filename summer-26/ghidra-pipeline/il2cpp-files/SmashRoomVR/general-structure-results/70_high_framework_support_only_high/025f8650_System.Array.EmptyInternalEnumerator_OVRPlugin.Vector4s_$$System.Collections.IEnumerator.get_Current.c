/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 025f8650
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
               (ulong param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined1 unaff_w23;
  uint uVar4;
  long unaff_x24;
  long unaff_x25;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3514);
    *(undefined1 *)(unaff_x25 + 0x31) = 1;
  }
  lVar2 = param_2[4];
  if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  lVar5 = *param_2;
  if (lVar5 != 0) {
    if ((int)lVar2 < *(int *)(lVar5 + 0x18)) {
      uVar4 = *(uint *)(param_2 + 4);
      *(uint *)(param_2 + 4) = uVar4 + 1;
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x24 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
        lVar5 = *param_2;
        if (lVar5 == 0) goto LAB_025f8810;
      }
      lVar2 = *(long *)(unaff_x24 + 0x20);
      iVar1 = *(int *)(lVar5 + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ae9e74();
      }
      FUN_025f82d0(param_2,iVar1 << 1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
      uVar4 = *(uint *)(param_2 + 4);
      lVar5 = *param_2;
      *(uint *)(param_2 + 4) = uVar4 + 1;
      if (lVar5 == 0) goto LAB_025f8810;
    }
    if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_01afa9e0(), lVar2 == 0)) {
      uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar3,0);
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar4) {
LAB_025f8814:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    lVar6 = (long)(int)uVar4;
    *(long *)(lVar5 + lVar6 * 8 + 0x20) = unaff_x20;
    thunk_FUN_01b4f09c();
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_025f8814;
      *(undefined4 *)(lVar2 + lVar6 * 4 + 0x20) = unaff_w19;
      lVar2 = param_2[2];
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_025f8814;
        *(undefined1 *)(lVar2 + lVar6 + 0x20) = unaff_w23;
        lVar2 = param_2[3];
        uVar7 = unaff_x22[1];
        uVar3 = *unaff_x22;
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_025f8814;
          lVar2 = lVar2 + lVar6 * 0x18;
          *(undefined8 *)(lVar2 + 0x30) = unaff_x22[2];
          *(undefined8 *)(lVar2 + 0x28) = uVar7;
          *(undefined8 *)(lVar2 + 0x20) = uVar3;
          lVar2 = param_2[5];
          FUN_03ad7678();
          if (lVar2 != 0) {
            FUN_026a7f84(lVar2,0,0,uVar4,*(undefined8 *)StringLiteral_3514);
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


