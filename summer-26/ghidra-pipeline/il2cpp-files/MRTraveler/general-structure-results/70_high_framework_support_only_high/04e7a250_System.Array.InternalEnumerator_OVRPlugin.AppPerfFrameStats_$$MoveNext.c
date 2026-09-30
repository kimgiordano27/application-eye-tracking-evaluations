/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$MoveNext
ENTRY_POINT: 04e7a250
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__MoveNext(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  long unaff_x22;
  undefined8 unaff_x23;
  long *plVar11;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar12;
  uint uVar13;
  int iVar14;
  
  iVar2 = FUN_04e7c254();
  lVar5 = *(long *)(unaff_x26 + 0x10);
  if (lVar5 == 0) goto LAB_04e7a50c;
  uVar13 = *(uint *)(lVar5 + 0x18);
  iVar14 = 0;
  if (uVar13 != 0) {
    iVar14 = iVar2 / (int)uVar13;
  }
  uVar10 = iVar2 - iVar14 * uVar13;
  if (uVar10 < uVar13) {
    lVar12 = *(long *)(unaff_x26 + 0x18);
    uVar13 = *(int *)(lVar5 + (long)(int)uVar10 * 4 + 0x20) - 1;
    if (-1 < (int)uVar13) {
      if (lVar12 == 0) goto LAB_04e7a50c;
      uVar6 = *(undefined8 *)(lVar12 + 0x18);
      iVar14 = 0;
      do {
        if ((uint)uVar6 <= uVar13) goto LAB_04e7a4cc;
        if (*(int *)(lVar12 + (ulong)uVar13 * 0x18 + 0x20) == iVar2) {
          plVar11 = *(long **)(unaff_x26 + 0x30);
          if (plVar11 == (long *)0x0) goto LAB_04e7a50c;
          lVar5 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
          lVar7 = lVar12 + (ulong)uVar13 * 0x18;
          uVar6 = *(undefined8 *)(lVar7 + 0x28);
          uVar4 = *(undefined8 *)(lVar7 + 0x30);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03cf1244(lVar5);
          }
          lVar7 = *plVar11;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_04e7a344;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_03cf1348(plVar11,lVar5,0);
LAB_04e7a344:
          uVar8 = (*(code *)*puVar3)(plVar11,uVar6,uVar4);
          if ((uVar8 & 1) != 0) {
            return 0;
          }
          uVar6 = *(undefined8 *)(lVar12 + 0x18);
        }
        if ((int)(uint)uVar6 <= iVar14) {
          thunk_FUN_03ce5214(PTR_DAT_08e71970);
          uVar6 = thunk_FUN_03cf5234();
          uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
          FUN_07100530(uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar6,unaff_x22);
        }
        if ((uint)uVar6 <= uVar13) goto LAB_04e7a4cc;
        uVar13 = *(uint *)(lVar12 + (ulong)uVar13 * 0x18 + 0x24);
        iVar14 = iVar14 + 1;
      } while (-1 < (int)uVar13);
    }
    uVar13 = *(uint *)(unaff_x26 + 0x28);
    if ((int)uVar13 < 0) {
      if (lVar12 == 0) goto LAB_04e7a50c;
      uVar13 = *(uint *)(unaff_x26 + 0x24);
      if (uVar13 == *(uint *)(lVar12 + 0x18)) {
        FUN_04e79ff8(unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x1a8));
        if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04e7a50c;
        uVar13 = *(uint *)(unaff_x26 + 0x24);
        lVar12 = *(long *)(unaff_x26 + 0x18);
        iVar14 = *(int *)(*(long *)(unaff_x26 + 0x10) + 0x18);
        *(uint *)(unaff_x26 + 0x24) = uVar13 + 1;
        if (lVar12 == 0) goto LAB_04e7a50c;
        iVar1 = 0;
        if (iVar14 != 0) {
          iVar1 = iVar2 / iVar14;
        }
        uVar10 = iVar2 - iVar1 * iVar14;
      }
      else {
        *(uint *)(unaff_x26 + 0x24) = uVar13 + 1;
      }
    }
    else {
      if (lVar12 == 0) goto LAB_04e7a50c;
      if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_04e7a4cc;
      *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(lVar12 + (ulong)uVar13 * 0x18 + 0x24);
    }
    if (uVar13 < *(uint *)(lVar12 + 0x18)) {
      lVar5 = lVar12 + (long)(int)uVar13 * 0x18;
      *(int *)(lVar5 + 0x20) = iVar2;
      *(undefined8 *)(lVar5 + 0x28) = unaff_x25;
      *(undefined8 *)(lVar5 + 0x30) = unaff_x23;
      lVar5 = *(long *)(unaff_x26 + 0x10);
      if (lVar5 == 0) {
LAB_04e7a50c:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((uVar10 < *(uint *)(lVar5 + 0x18)) && (uVar13 < *(uint *)(lVar12 + 0x18))) {
        piVar9 = (int *)(lVar5 + (long)(int)uVar10 * 4 + 0x20);
        *(int *)(lVar12 + (long)(int)uVar13 * 0x18 + 0x24) = *piVar9 + -1;
        *piVar9 = uVar13 + 1;
        *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
        *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
        return 1;
      }
    }
  }
LAB_04e7a4cc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


