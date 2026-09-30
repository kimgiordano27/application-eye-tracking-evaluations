/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05e74da4
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
          (void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  uint in_w8;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  char unaff_w23;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 in_stack_00000010;
  
  uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
  uVar11 = (uint)uVar12;
  if (in_w8 < uVar11) {
    iVar8 = -1;
    do {
      lVar10 = (long)(int)in_w8;
      if (*(int *)(unaff_x26 + (long)(int)in_w8 * 0x18 + 0x20) == unaff_w27) {
        plVar5 = (long *)FUN_05e733ac(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x18));
        if (*(uint *)(unaff_x26 + 0x18) <= in_w8) goto LAB_05e75080;
        if (plVar5 == (long *)0x0) goto LAB_05e7508c;
        uVar6 = (**(code **)(*plVar5 + 0x1b8))
                          (plVar5,*(undefined4 *)(unaff_x26 + lVar10 * 0x18 + 0x28),unaff_w20,
                           *(undefined8 *)(*plVar5 + 0x1c0));
        if ((uVar6 & 1) != 0) {
          if (unaff_w23 != '\x01') {
            if (unaff_w23 == '\x02') {
              uVar12 = thunk_FUN_03398650(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70),
                                          &stack0x0000001c);
                    /* WARNING: Subroutine does not return */
              FUN_06851b14(uVar12,0);
            }
            return 0;
          }
          if (in_w8 < *(uint *)(unaff_x26 + 0x18)) {
            puVar7 = (undefined8 *)(unaff_x26 + lVar10 * 0x18 + 0x30);
            *puVar7 = in_stack_00000010;
            if (DAT_08908cd0 == 0) {
              return 1;
            }
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            return 1;
          }
          goto LAB_05e75080;
        }
        uVar12 = *(undefined8 *)(unaff_x26 + 0x18);
      }
      uVar11 = (uint)uVar12;
      if (uVar11 <= in_w8) goto LAB_05e75080;
      iVar8 = iVar8 + 1;
      if ((int)uVar11 <= iVar8) {
        FUN_06851c18(0);
        goto LAB_05e7508c;
      }
      in_w8 = *(uint *)(unaff_x26 + lVar10 * 0x18 + 0x24);
    } while (in_w8 < uVar11);
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar9 = *(uint *)(unaff_x21 + 0x20);
    if (uVar9 == uVar11) {
      FUN_05e754c4();
      lVar10 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
      if (lVar10 == 0) goto LAB_05e7508c;
      uVar11 = *(uint *)(lVar10 + 0x18);
      iVar8 = 0;
      if (uVar11 != 0) {
        iVar8 = unaff_w27 / (int)uVar11;
      }
      uVar2 = unaff_w27 - iVar8 * uVar11;
      if (uVar11 <= uVar2) goto LAB_05e75080;
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      unaff_x28 = (int *)(lVar10 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar9 + 1;
    }
    if (unaff_x26 == 0) {
LAB_05e7508c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_05e75080;
    lVar10 = (long)(int)uVar9;
  }
  else {
    uVar9 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar11 <= uVar9) {
LAB_05e75080:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar10 = (long)(int)uVar9;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar10 * 0x18 + 0x24);
  }
  lVar10 = unaff_x26 + lVar10 * 0x18;
  *(int *)(lVar10 + 0x20) = unaff_w27;
  iVar8 = *unaff_x28;
  puVar7 = (undefined8 *)(lVar10 + 0x30);
  *puVar7 = in_stack_00000010;
  *(int *)(lVar10 + 0x24) = iVar8 + -1;
  *(undefined4 *)(lVar10 + 0x28) = unaff_w20;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *unaff_x28 = uVar9 + 1;
  return 1;
}


