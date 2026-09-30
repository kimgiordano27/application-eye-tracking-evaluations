/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 01a1a948
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(void)

{
  int in_w8;
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *unaff_x25;
  long unaff_x26;
  undefined1 unaff_w27;
  float *unaff_x28;
  float *pfVar6;
  long unaff_x29;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 in_s3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float in_stack_00000000;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_00d32864();
    }
    fVar8 = SQRT(unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + in_stack_00000000 * in_stack_00000000)
            / unaff_s10 + unaff_s11;
    pfVar6 = unaff_x28;
    do {
      *(float *)(unaff_x29 + unaff_x26 + 0x1c) = fVar8;
      uVar2 = *(ulong *)(unaff_x19 + 0x18);
      unaff_x23 = unaff_x23 + 1;
      unaff_x26 = unaff_x26 + 0x20;
      unaff_x28 = pfVar6 + 3;
      uVar1 = (uint)uVar2;
      if ((long)(int)uVar1 <= (long)unaff_x23) {
        return;
      }
      if (unaff_x26 == 0x20) {
        if (uVar1 < 2) goto LAB_01a1a9c4;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar3 = unaff_x25;
        pfVar4 = unaff_x24;
      }
      else {
        if (((uVar2 & 0xffffffff) <= unaff_x23) || (uVar1 <= (int)unaff_x23 - 1U))
        goto LAB_01a1a9c4;
        uVar9 = *(undefined8 *)(pfVar6 + 1);
        uVar11 = *(undefined8 *)(pfVar6 + -2);
        pfVar3 = pfVar6;
        pfVar4 = unaff_x28;
      }
      in_stack_00000000 = (float)uVar9 - (float)uVar11;
      unaff_s9 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar11 >> 0x20);
      lVar5 = *(long *)(unaff_x20 + 0x68);
      if (lVar5 == 0) {
LAB_01a1a9c8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (((uVar2 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar5 + 0x18) <= unaff_x23))
      goto LAB_01a1a9c4;
      fVar12 = *pfVar4;
      fVar8 = *unaff_x28;
      fVar10 = *pfVar3;
      *(undefined8 *)(lVar5 + unaff_x26) = *(undefined8 *)(pfVar6 + 1);
      *(float *)((undefined8 *)(lVar5 + unaff_x26) + 1) = fVar8;
      lVar5 = *(long *)(unaff_x20 + 0x68);
      if (lVar5 == 0) goto LAB_01a1a9c8;
      unaff_s8 = fVar12 - fVar10;
      fVar8 = unaff_s9;
      fVar10 = unaff_s8;
      uVar7 = FUN_02698ebc(0);
      if (*(uint *)(lVar5 + 0x18) <= unaff_x23) goto LAB_01a1a9c4;
      lVar5 = lVar5 + unaff_x26;
      *(undefined4 *)(lVar5 + 0xc) = uVar7;
      *(float *)(lVar5 + 0x10) = fVar8;
      *(float *)(lVar5 + 0x14) = fVar10;
      *(undefined4 *)(lVar5 + 0x18) = in_s3;
      unaff_x29 = *(long *)(unaff_x20 + 0x68);
      if (unaff_x29 == 0) goto LAB_01a1a9c8;
      if ((*(ulong *)(unaff_x29 + 0x18) & 0xffffffff) <= unaff_x23) goto LAB_01a1a9c4;
      fVar8 = 0.0;
      pfVar6 = unaff_x28;
    } while (unaff_x26 == 0x20);
    if ((uint)*(ulong *)(unaff_x29 + 0x18) <= (int)unaff_x23 - 1U) {
LAB_01a1a9c4:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    unaff_s11 = *(float *)(unaff_x29 + unaff_x26 + -4);
    if (*(char *)(unaff_x22 + 0xe1b) == '\0') {
      thunk_FUN_00d48444();
      *(undefined1 *)(unaff_x22 + 0xe1b) = unaff_w27;
    }
    in_w8 = *(int *)(*unaff_x21 + 0xe0);
  } while( true );
}


