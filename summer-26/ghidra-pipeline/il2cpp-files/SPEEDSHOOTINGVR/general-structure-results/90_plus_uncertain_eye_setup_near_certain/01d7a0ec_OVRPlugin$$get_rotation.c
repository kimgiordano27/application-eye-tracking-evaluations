/*
FUNCTION_NAME: OVRPlugin$$get_rotation
ENTRY_POINT: 01d7a0ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_rotation(ulong param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  ulong uVar5;
  long unaff_x29;
  
code_r0x01d7a0ec:
  if ((int)param_1 < 1) {
LAB_01d79f18:
    FUN_01d7a4b8();
    return 0;
  }
  uVar5 = 0;
  param_1 = param_1 & 0xffffffff;
  do {
    if ((param_1 <= uVar5) || (*(uint *)(unaff_x24 + 0x18) <= unaff_w27)) goto LAB_01d7a1e0;
    lVar2 = *(long *)(unaff_x26 + uVar5 * 8);
    if ((unaff_x21 & 1) == 0) {
      if (lVar2 == 0) goto LAB_01d7a1dc;
      uVar3 = FUN_01c50924(lVar2,*unaff_x25,0);
      if ((uVar3 & 1) != 0) break;
    }
    else {
      iVar1 = FUN_01c4fae4(lVar2,*unaff_x25,5,0);
      if (iVar1 == 0) break;
    }
    param_1 = (ulong)*(uint *)(unaff_x29 + 0x18);
    uVar5 = uVar5 + 1;
    if ((long)(int)*(uint *)(unaff_x29 + 0x18) <= (long)uVar5) goto LAB_01d79f18;
  } while( true );
  if (unaff_x23 == 0) goto LAB_01d7a1dc;
  if ((uint)uVar5 < *(uint *)(unaff_x23 + 0x18)) {
    unaff_w27 = unaff_w27 + 1;
    if ((int)*(uint *)(unaff_x24 + 0x18) <= (int)unaff_w27) {
      if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar4 = FUN_01d7aaec();
      *unaff_x19 = uVar4;
      thunk_FUN_0106e12c();
      return 1;
    }
    if (unaff_w27 < *(uint *)(unaff_x24 + 0x18)) {
      unaff_x25 = (long *)(unaff_x24 + (long)(int)unaff_w27 * 8 + 0x20);
      if (*unaff_x25 != 0) {
        lVar2 = FUN_01c54244(*unaff_x25,0);
        if (*(uint *)(unaff_x24 + 0x18) <= unaff_w27) goto LAB_01d7a1e0;
        *unaff_x25 = lVar2;
        thunk_FUN_0106e12c(unaff_x25,lVar2);
        if (unaff_x29 != 0) {
          param_1 = *(ulong *)(unaff_x29 + 0x18);
          goto code_r0x01d7a0ec;
        }
      }
LAB_01d7a1dc:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
LAB_01d7a1e0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


