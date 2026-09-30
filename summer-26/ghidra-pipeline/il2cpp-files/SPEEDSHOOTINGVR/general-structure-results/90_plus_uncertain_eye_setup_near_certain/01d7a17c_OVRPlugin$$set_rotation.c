/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 01d7a17c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_rotation(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *plVar5;
  long unaff_x26;
  uint unaff_w27;
  ulong uVar6;
  long unaff_x29;
  
code_r0x01d7a17c:
  if (in_NG == in_OV) {
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar3 = FUN_01d7aaec();
    *unaff_x19 = uVar3;
    thunk_FUN_0106e12c();
    return 1;
  }
  if (in_w8 <= unaff_w27) goto LAB_01d7a1e0;
  plVar5 = (long *)(unaff_x24 + (long)(int)unaff_w27 * 8 + 0x20);
  if (*plVar5 != 0) {
    lVar2 = FUN_01c54244(*plVar5,0);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w27) goto LAB_01d7a1e0;
    *plVar5 = lVar2;
    thunk_FUN_0106e12c(plVar5,lVar2);
    if (unaff_x29 != 0) {
      if ((int)*(ulong *)(unaff_x29 + 0x18) < 1) {
LAB_01d79f18:
        FUN_01d7a4b8();
        return 0;
      }
      uVar6 = 0;
      uVar4 = *(ulong *)(unaff_x29 + 0x18) & 0xffffffff;
      do {
        if ((uVar4 <= uVar6) || (*(uint *)(unaff_x24 + 0x18) <= unaff_w27)) goto LAB_01d7a1e0;
        lVar2 = *(long *)(unaff_x26 + uVar6 * 8);
        if ((unaff_x21 & 1) == 0) {
          if (lVar2 == 0) break;
          uVar4 = FUN_01c50924(lVar2,*plVar5,0);
          if ((uVar4 & 1) != 0) goto LAB_01d7a154;
        }
        else {
          iVar1 = FUN_01c4fae4(lVar2,*plVar5,5,0);
          if (iVar1 == 0) goto LAB_01d7a154;
        }
        uVar4 = (ulong)*(uint *)(unaff_x29 + 0x18);
        uVar6 = uVar6 + 1;
        if ((long)(int)*(uint *)(unaff_x29 + 0x18) <= (long)uVar6) goto LAB_01d79f18;
      } while( true );
    }
  }
  goto LAB_01d7a1dc;
LAB_01d7a154:
  if (unaff_x23 == 0) {
LAB_01d7a1dc:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(uint *)(unaff_x23 + 0x18) <= (uint)uVar6) {
LAB_01d7a1e0:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  in_w8 = *(uint *)(unaff_x24 + 0x18);
  unaff_w27 = unaff_w27 + 1;
  in_OV = SBORROW4(unaff_w27,in_w8);
  in_NG = (int)(unaff_w27 - in_w8) < 0;
  goto code_r0x01d7a17c;
}


