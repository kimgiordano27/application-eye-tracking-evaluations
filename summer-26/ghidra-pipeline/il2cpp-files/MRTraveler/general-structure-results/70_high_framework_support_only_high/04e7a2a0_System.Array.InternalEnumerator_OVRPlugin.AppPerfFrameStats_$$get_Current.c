/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$get_Current
ENTRY_POINT: 04e7a2a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__get_Current(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int unaff_w20;
  long unaff_x22;
  undefined8 unaff_x23;
  long *plVar11;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  
  do {
    if ((uint)param_1 <= unaff_w28) goto LAB_04e7a4cc;
    if (*(int *)(unaff_x27 + (ulong)unaff_w28 * 0x18 + 0x20) == unaff_w20) {
      plVar11 = *(long **)(unaff_x26 + 0x30);
      if (plVar11 == (long *)0x0) goto LAB_04e7a50c;
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x20);
      lVar8 = unaff_x27 + (ulong)unaff_w28 * 0x18;
      uVar4 = *(undefined8 *)(lVar8 + 0x28);
      uVar5 = *(undefined8 *)(lVar8 + 0x30);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03cf1244(lVar6);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04e7a344;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar11,lVar6,0);
LAB_04e7a344:
      uVar9 = (*(code *)*puVar3)(plVar11,uVar4,uVar5);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      param_1 = *(undefined8 *)(unaff_x27 + 0x18);
    }
    if ((int)(uint)param_1 <= unaff_w29) {
      thunk_FUN_03ce5214(PTR_DAT_08e71970);
      uVar4 = thunk_FUN_03cf5234();
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
      FUN_07100530(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4,unaff_x22);
    }
    if ((uint)param_1 <= unaff_w28) goto LAB_04e7a4cc;
    unaff_w28 = *(uint *)(unaff_x27 + (ulong)unaff_w28 * 0x18 + 0x24);
    unaff_w29 = unaff_w29 + 1;
  } while (-1 < (int)unaff_w28);
  uVar7 = *(uint *)(unaff_x26 + 0x28);
  if ((int)uVar7 < 0) {
    if (unaff_x27 == 0) goto LAB_04e7a50c;
    uVar7 = *(uint *)(unaff_x26 + 0x24);
    if (uVar7 == *(uint *)(unaff_x27 + 0x18)) {
      FUN_04e79ff8(unaff_x26,*(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x1a8))
      ;
      if (*(long *)(unaff_x26 + 0x10) == 0) goto LAB_04e7a50c;
      uVar7 = *(uint *)(unaff_x26 + 0x24);
      unaff_x27 = *(long *)(unaff_x26 + 0x18);
      iVar1 = *(int *)(*(long *)(unaff_x26 + 0x10) + 0x18);
      *(uint *)(unaff_x26 + 0x24) = uVar7 + 1;
      if (unaff_x27 == 0) goto LAB_04e7a50c;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = unaff_w20 / iVar1;
      }
      in_stack_00000000._4_4_ = unaff_w20 - iVar2 * iVar1;
    }
    else {
      *(uint *)(unaff_x26 + 0x24) = uVar7 + 1;
    }
  }
  else {
    if (unaff_x27 == 0) goto LAB_04e7a50c;
    if (*(uint *)(unaff_x27 + 0x18) <= uVar7) goto LAB_04e7a4cc;
    *(undefined4 *)(unaff_x26 + 0x28) = *(undefined4 *)(unaff_x27 + (ulong)uVar7 * 0x18 + 0x24);
  }
  if (uVar7 < *(uint *)(unaff_x27 + 0x18)) {
    lVar6 = unaff_x27 + (long)(int)uVar7 * 0x18;
    *(int *)(lVar6 + 0x20) = unaff_w20;
    *(undefined8 *)(lVar6 + 0x28) = unaff_x25;
    *(undefined8 *)(lVar6 + 0x30) = unaff_x23;
    lVar6 = *(long *)(unaff_x26 + 0x10);
    if (lVar6 == 0) {
LAB_04e7a50c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((in_stack_00000000._4_4_ < *(uint *)(lVar6 + 0x18)) && (uVar7 < *(uint *)(unaff_x27 + 0x18))
       ) {
      piVar10 = (int *)(lVar6 + (long)(int)in_stack_00000000._4_4_ * 4 + 0x20);
      *(int *)(unaff_x27 + (long)(int)uVar7 * 0x18 + 0x24) = *piVar10 + -1;
      *piVar10 = uVar7 + 1;
      *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
      *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
      return 1;
    }
  }
LAB_04e7a4cc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


