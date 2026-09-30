/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 05e74dbc
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>___ctor(void)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint in_w8;
  undefined8 *puVar9;
  int unaff_w19;
  uint uVar10;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar11;
  uint uVar12;
  undefined8 unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  char unaff_w29;
  undefined8 in_stack_00000010;
  
  do {
    lVar11 = (long)(int)in_w8;
    if (*(int *)(unaff_x26 + (long)(int)in_w8 * (long)(int)unaff_x23 + 0x20) == unaff_w27) {
      plVar6 = (long *)FUN_05e733ac(*(undefined8 *)
                                     (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
      if (*(uint *)(unaff_x26 + 0x18) <= in_w8) goto LAB_05e75080;
      if (plVar6 == (long *)0x0) goto LAB_05e7508c;
      uVar7 = (**(code **)(*plVar6 + 0x1b8))
                        (plVar6,*(undefined4 *)(unaff_x26 + lVar11 * unaff_x23 + 0x28),unaff_w20,
                         *(undefined8 *)(*plVar6 + 0x1c0));
      if ((uVar7 & 1) != 0) {
        if (unaff_w29 != '\x01') {
          if (unaff_w29 == '\x02') {
            uVar8 = thunk_FUN_03398650(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70),
                                       &stack0x0000001c);
                    /* WARNING: Subroutine does not return */
            FUN_06851b14(uVar8,0);
          }
          return 0;
        }
        if (in_w8 < *(uint *)(unaff_x26 + 0x18)) {
          puVar9 = (undefined8 *)(unaff_x26 + lVar11 * 0x18 + 0x30);
          *puVar9 = in_stack_00000010;
          if (DAT_08908cd0 == 0) {
            return 1;
          }
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          return 1;
        }
        goto LAB_05e75080;
      }
      unaff_x25 = *(undefined8 *)(unaff_x26 + 0x18);
    }
    uVar12 = (uint)unaff_x25;
    if (uVar12 <= in_w8) goto LAB_05e75080;
    unaff_w19 = unaff_w19 + 1;
    if ((int)uVar12 <= unaff_w19) {
      FUN_06851c18(0);
      goto LAB_05e7508c;
    }
    in_w8 = *(uint *)(unaff_x26 + lVar11 * unaff_x23 + 0x24);
  } while (in_w8 < uVar12);
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x21 + 0x20);
    if (uVar10 == uVar12) {
      FUN_05e754c4();
      lVar11 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
      if (lVar11 == 0) goto LAB_05e7508c;
      uVar12 = *(uint *)(lVar11 + 0x18);
      iVar2 = 0;
      if (uVar12 != 0) {
        iVar2 = unaff_w27 / (int)uVar12;
      }
      uVar3 = unaff_w27 - iVar2 * uVar12;
      if (uVar12 <= uVar3) goto LAB_05e75080;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar11 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
    }
    if (unaff_x26 == 0) {
LAB_05e7508c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_05e75080;
    lVar11 = (long)(int)uVar10;
  }
  else {
    uVar10 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar12 <= uVar10) {
LAB_05e75080:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar11 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar11 * 0x18 + 0x24);
  }
  lVar11 = unaff_x26 + lVar11 * 0x18;
  *(int *)(lVar11 + 0x20) = unaff_w27;
  iVar2 = *unaff_x28;
  puVar9 = (undefined8 *)(lVar11 + 0x30);
  *puVar9 = in_stack_00000010;
  *(int *)(lVar11 + 0x24) = iVar2 + -1;
  *(undefined4 *)(lVar11 + 0x28) = unaff_w20;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar9 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *unaff_x28 = uVar10 + 1;
  return 1;
}


