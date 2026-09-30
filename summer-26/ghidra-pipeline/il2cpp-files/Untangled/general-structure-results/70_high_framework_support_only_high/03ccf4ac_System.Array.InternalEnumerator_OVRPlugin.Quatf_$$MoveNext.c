/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 03ccf4ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_Quatf>__MoveNext(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint in_w9;
  ulong uVar7;
  int *piVar8;
  uint in_w10;
  int unaff_w20;
  long unaff_x22;
  undefined8 unaff_x23;
  long *plVar9;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uStack0000000000000004;
  
  if (in_w10 < in_w9) {
    lVar10 = *(long *)(unaff_x26 + 0x18);
    uVar11 = *(int *)(param_1 + (long)(int)in_w10 * 4 + 0x20) - 1;
    uStack0000000000000004 = in_w10;
    if (-1 < (int)uVar11) {
      if (lVar10 == 0) goto LAB_03ccf744;
      uVar5 = *(undefined8 *)(lVar10 + 0x18);
      iVar12 = 0;
      do {
        if ((uint)uVar5 <= uVar11) goto LAB_03ccf704;
        if (*(int *)(lVar10 + (ulong)uVar11 * 0x18 + 0x20) == unaff_w20) {
          plVar9 = *(long **)(unaff_x26 + 0x30);
          if (plVar9 == (long *)0x0) goto LAB_03ccf744;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
          lVar6 = lVar10 + (ulong)uVar11 * 0x18;
          uVar5 = *(undefined8 *)(lVar6 + 0x28);
          uVar3 = *(undefined8 *)(lVar6 + 0x30);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02eea768(lVar4);
          }
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar4) {
                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_03ccf57c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar2 = (undefined8 *)FUN_02eea86c(plVar9,lVar4,0);
LAB_03ccf57c:
          uVar7 = (*(code *)*puVar2)(plVar9,uVar5,uVar3);
          if ((uVar7 & 1) != 0) {
            return 0;
          }
          uVar5 = *(undefined8 *)(lVar10 + 0x18);
        }
        if ((int)(uint)uVar5 <= iVar12) {
          thunk_FUN_02f239f0(PTR_DAT_06d021a0);
          uVar5 = thunk_FUN_02ef1808();
          uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d39100);
          FUN_05601bec(uVar5,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar5,unaff_x22);
        }
        if ((uint)uVar5 <= uVar11) goto LAB_03ccf704;
        uVar11 = *(uint *)(lVar10 + (ulong)uVar11 * 0x18 + 0x24);
        iVar12 = iVar12 + 1;
      } while (-1 < (int)uVar11);
    }
    uVar11 = *(uint *)(unaff_x26 + 0x28);
    if ((int)uVar11 < 0) {
      if (lVar10 == 0) goto LAB_03ccf744;
      uVar11 = *(uint *)(unaff_x26 + 0x24);
      if (uVar11 == *(uint *)(lVar10 + 0x18)) {
        FUN_03ccf230(unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x1a8));
        if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_03ccf744;
        uVar11 = *(uint *)(unaff_x26 + 0x24);
        lVar10 = *(long *)(unaff_x26 + 0x18);
        iVar12 = *(int *)(*(long *)(unaff_x26 + 0x10) + 0x18);
        *(uint *)(unaff_x26 + 0x24) = uVar11 + 1;
        if (lVar10 == 0) goto LAB_03ccf744;
        iVar1 = 0;
        if (iVar12 != 0) {
          iVar1 = unaff_w20 / iVar12;
        }
        uStack0000000000000004 = unaff_w20 - iVar1 * iVar12;
      }
      else {
        *(uint *)(unaff_x26 + 0x24) = uVar11 + 1;
      }
    }
    else {
      if (lVar10 == 0) goto LAB_03ccf744;
      if (*(uint *)(lVar10 + 0x18) <= uVar11) goto LAB_03ccf704;
      *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(lVar10 + (ulong)uVar11 * 0x18 + 0x24);
    }
    if (uVar11 < *(uint *)(lVar10 + 0x18)) {
      lVar4 = lVar10 + (long)(int)uVar11 * 0x18;
      *(int *)(lVar4 + 0x20) = unaff_w20;
      *(undefined8 *)(lVar4 + 0x28) = unaff_x25;
      *(undefined8 *)(lVar4 + 0x30) = unaff_x23;
      lVar4 = *(long *)(unaff_x26 + 0x10);
      if (lVar4 == 0) {
LAB_03ccf744:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if ((uStack0000000000000004 < *(uint *)(lVar4 + 0x18)) && (uVar11 < *(uint *)(lVar10 + 0x18)))
      {
        piVar8 = (int *)(lVar4 + (long)(int)uStack0000000000000004 * 4 + 0x20);
        *(int *)(lVar10 + (long)(int)uVar11 * 0x18 + 0x24) = *piVar8 + -1;
        *piVar8 = uVar11 + 1;
        *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
        *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_03ccf704:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


