/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations|36_0
ENTRY_POINT: 072a3c74
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__<ReconstructNormal>g__ClosestDerivativeToAdjacentExtrapolations_36_0
               (void)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_w8;
  long lVar5;
  long lVar6;
  ulong in_x9;
  uint in_w10;
  uint in_w11;
  int in_w12;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  long unaff_x19;
  ulong uVar10;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  int unaff_w24;
  ulong uVar11;
  uint unaff_w26;
  long in_stack_00000008;
  
  do {
    if (*(int *)(unaff_x23 + 0x20) != -1) {
      if (in_w10 < 2) goto LAB_072a409c;
      if (*(int *)(unaff_x23 + 0x24) != -1) {
        if (in_w10 == 2) goto LAB_072a409c;
        if (*(int *)(unaff_x23 + 0x28) != -1) {
LAB_072a3d6c:
          uVar11 = (long)unaff_w24;
          break;
        }
      }
    }
    while( true ) {
      if ((int)in_w8 < unaff_w24) goto LAB_072a3d6c;
      iVar3 = (int)in_x9 + -1;
      iVar4 = (int)((ulong)((long)iVar3 * (long)in_w12) >> 0x20);
      uVar2 = iVar3 + (iVar4 - (iVar4 >> 0x1f)) * -3;
      in_x9 = (ulong)uVar2;
      if ((int)uVar2 < 0) goto LAB_072a3d6c;
      if (in_w10 <= uVar2) goto LAB_072a409c;
      puVar7 = (uint *)(unaff_x23 + in_x9 * 4 + 0x20);
      if (*puVar7 != 0xffffffff) break;
      lVar5 = *(long *)(unaff_x19 + 0x158);
      if (lVar5 == 0) goto LAB_072a40a0;
      if ((*(uint *)(lVar5 + 0x18) <= in_w8 + 1) || (*(uint *)(lVar5 + 0x18) <= in_w8))
      goto LAB_072a409c;
      iVar3 = *(int *)(lVar5 + 0x20 + (long)(int)in_w8 * 4);
      uVar8 = *(int *)(lVar5 + 0x20 + (long)(int)(in_w8 + 1) * 4) - iVar3;
      uVar9 = uVar8 + uVar8 * uVar2 + iVar3 * 3;
      do {
        uVar9 = uVar9 - 1;
        if (in_w11 <= uVar8) goto LAB_072a3d38;
        lVar5 = *(long *)(unaff_x19 + 0x188);
        if (lVar5 == 0) goto LAB_072a40a0;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
        lVar5 = *(long *)(lVar5 + 0x28);
        if (lVar5 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_072a409c;
        uVar8 = uVar8 - 1;
      } while (*(float *)(lVar5 + (long)(int)uVar9 * 4 + 0x20) == 0.0);
      *puVar7 = in_w8;
LAB_072a3d38:
      in_w8 = in_w8 - (uVar2 == 0);
    }
  } while( true );
  do {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_072a40a0;
    uVar2 = *(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18);
    uVar1 = uVar11 + 1;
    if ((uVar2 <= uVar1) || (uVar2 <= (uint)uVar11)) goto LAB_072a409c;
    if (unaff_x23 == 0) goto LAB_072a40a0;
    uVar10 = 0;
    do {
      if (*(uint *)(unaff_x23 + 0x18) <= uVar10) goto LAB_072a409c;
      if ((long)*(int *)(unaff_x23 + 0x20 + uVar10 * 4) < (long)uVar11) {
        lVar5 = *(long *)(unaff_x19 + 0x180);
        if (lVar5 == 0) goto LAB_072a40a0;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
        lVar5 = *(long *)(lVar5 + 0x28);
        if (lVar5 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_072a409c;
        lVar5 = *(long *)(lVar5 + uVar10 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_072a40a0;
        if (*(uint *)(lVar5 + 0x18) <= (uint)uVar11) goto LAB_072a409c;
        if (*(int *)(lVar5 + uVar11 * 4 + 0x20) == 7) goto LAB_072a3e18;
        if ((unaff_x21 & 1) == 0) {
          FUN_072a4e38();
        }
        else {
          lVar5 = *(long *)(unaff_x19 + 0xf8);
          if (lVar5 == 0) goto LAB_072a40a0;
          if (*(uint *)(lVar5 + 0x18) <= unaff_w26) goto LAB_072a409c;
          lVar5 = *(long *)(lVar5 + in_stack_00000008 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_072a40a0;
          if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a409c;
          FUN_072a4c7c();
        }
      }
      else {
LAB_072a3e18:
        if ((unaff_w22 >> 1 & 1) == 0) {
          FUN_072a4bd4();
        }
        else {
          FUN_072a4ab8();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 3);
    uVar11 = uVar1;
  } while (uVar1 != 0xc);
  if (*(long *)(unaff_x19 + 0x158) != 0) {
    if (*(uint *)(*(long *)(unaff_x19 + 0x158) + 0x18) < 0xe) {
LAB_072a409c:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar11 = 0;
    while (lVar5 = *(long *)(unaff_x19 + 0x180), lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_072a409c;
      lVar5 = *(long *)(lVar5 + 0x28);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_072a409c;
      lVar5 = *(long *)(lVar5 + uVar11 * 8 + 0x20);
      if (lVar5 == 0) break;
      if (*(uint *)(lVar5 + 0x18) < 0xc) goto LAB_072a409c;
      lVar6 = *(long *)(unaff_x19 + 0x158);
      if (*(int *)(lVar5 + 0x4c) == 7) {
        if ((unaff_w22 >> 1 & 1) == 0) {
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_072a409c;
          FUN_072a4bd4();
        }
        else {
          if (lVar6 == 0) break;
          if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_072a409c;
          FUN_072a4ab8();
        }
      }
      else if ((unaff_x21 & 1) == 0) {
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_072a409c;
        FUN_072a4e38();
      }
      else {
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_072a409c;
        lVar5 = *(long *)(unaff_x19 + 0xf8);
        if (lVar5 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= unaff_w26) goto LAB_072a409c;
        lVar5 = *(long *)(lVar5 + in_stack_00000008 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_072a409c;
        FUN_072a4c7c();
      }
      uVar11 = uVar11 + 1;
      if (uVar11 == 3) {
        return;
      }
    }
  }
LAB_072a40a0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


