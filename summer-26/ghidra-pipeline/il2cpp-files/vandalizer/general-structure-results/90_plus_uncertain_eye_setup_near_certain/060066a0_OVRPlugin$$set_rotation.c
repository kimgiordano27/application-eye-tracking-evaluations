/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 060066a0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint uVar4;
  long *unaff_x23;
  long unaff_x24;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined1 *)(unaff_x24 + 0x95d) = 1;
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *unaff_x23;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) {
LAB_0600678c:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    lVar3 = *(long *)(lVar3 + (long)(int)unaff_w22 * 8 + 0x20);
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          if (uVar2 <= uVar4) goto LAB_0600678c;
          if (unaff_x21 == 0) goto LAB_06006790;
          uVar2 = *(uint *)(lVar3 + (long)(int)uVar4 * 4 + 0x20);
          if (*(uint *)(unaff_x21 + 0x18) <= uVar2) goto LAB_0600678c;
          if (unaff_x20 == 0) goto LAB_06006790;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar2) goto LAB_0600678c;
          lVar1 = unaff_x21 + (long)(int)uVar2 * 0x10;
          uVar6 = *(undefined4 *)(lVar1 + 0x24);
          uVar7 = *(undefined4 *)(lVar1 + 0x28);
          uVar8 = *(undefined4 *)(lVar1 + 0x2c);
          uVar5 = FUN_06e45c98(*(undefined4 *)(lVar1 + 0x20),0);
          if (unaff_x19 == 0) goto LAB_06006790;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar2) goto LAB_0600678c;
          lVar1 = unaff_x19 + (long)(int)uVar2 * 0x10;
          *(undefined4 *)(lVar1 + 0x20) = uVar5;
          *(undefined4 *)(lVar1 + 0x24) = uVar6;
          *(undefined4 *)(lVar1 + 0x28) = uVar7;
          *(undefined4 *)(lVar1 + 0x2c) = uVar8;
          uVar2 = *(uint *)(lVar3 + 0x18);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uVar2);
      }
      return;
    }
  }
LAB_06006790:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


