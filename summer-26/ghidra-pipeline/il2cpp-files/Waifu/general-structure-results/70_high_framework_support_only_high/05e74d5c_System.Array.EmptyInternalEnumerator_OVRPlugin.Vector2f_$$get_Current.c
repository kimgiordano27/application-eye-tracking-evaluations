/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$get_Current
ENTRY_POINT: 05e74d5c
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


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current(undefined8 *param_1)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  uint uVar13;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
code_r0x05e74d5c:
  uVar6 = (*(code *)*param_1)();
  if ((uVar6 & 1) != 0) {
    if (in_stack_00000008._4_1_ == '\x01') {
      if (*(uint *)(unaff_x26 + 0x18) <= (uint)unaff_x19) {
LAB_05e75080:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar10 = (undefined8 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30);
      *puVar10 = in_stack_00000010;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
LAB_05e74f4c:
      uVar7 = 1;
    }
    else {
      if (in_stack_00000008._4_1_ == '\x02') {
        uVar7 = thunk_FUN_03398650(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000018);
                    /* WARNING: Subroutine does not return */
        FUN_06851b14(uVar7,0);
      }
      uVar7 = 0;
    }
    return uVar7;
  }
LAB_05e74d78:
  uVar13 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
  if ((uint)unaff_x19 < uVar13) {
    if ((int)uVar13 <= unaff_w29) {
      FUN_06851c18(0);
LAB_05e7508c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar12 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
    unaff_w29 = unaff_w29 + 1;
    if (uVar12 < uVar13) goto LAB_05e74cd8;
    if (*(int *)(unaff_x21 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x21 + 0x20);
      if (uVar12 == uVar13) {
        FUN_05e754c4();
        lVar9 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar13 + 1;
        if (lVar9 == 0) goto LAB_05e7508c;
        uVar13 = *(uint *)(lVar9 + 0x18);
        iVar2 = 0;
        if (uVar13 != 0) {
          iVar2 = unaff_w27 / (int)uVar13;
        }
        uVar3 = unaff_w27 - iVar2 * uVar13;
        if (uVar13 <= uVar3) goto LAB_05e75080;
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        unaff_x28 = (int *)(lVar9 + (ulong)uVar3 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) goto LAB_05e7508c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_05e75080;
      lVar9 = (long)(int)uVar12;
    }
    else {
      uVar12 = *(uint *)(unaff_x21 + 0x24);
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      if (uVar13 <= uVar12) goto LAB_05e75080;
      lVar9 = (long)(int)uVar12;
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar9 * 0x18 + 0x24);
    }
    lVar9 = unaff_x26 + lVar9 * 0x18;
    *(int *)(lVar9 + 0x20) = unaff_w27;
    iVar2 = *unaff_x28;
    puVar10 = (undefined8 *)(lVar9 + 0x30);
    *puVar10 = in_stack_00000010;
    *(int *)(lVar9 + 0x24) = iVar2 + -1;
    *(undefined4 *)(lVar9 + 0x28) = unaff_w20;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)puVar10 >> 0x12 & 0x7fff);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar10 >> 0xc & 0x3f);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *unaff_x28 = uVar12 + 1;
    goto LAB_05e74f4c;
  }
  goto LAB_05e75080;
LAB_05e74cd8:
  unaff_x19 = (long)(int)uVar12;
  if (*(int *)(unaff_x26 + (long)(int)uVar12 * (long)(int)unaff_x23 + 0x20) == unaff_w27)
  goto code_r0x05e74cec;
  goto LAB_05e74d78;
code_r0x05e74cec:
  lVar9 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_0338f618(lVar9);
  }
  lVar8 = *unaff_x24;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar9) {
        param_1 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto code_r0x05e74d5c;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  param_1 = (undefined8 *)FUN_0338f71c();
  goto code_r0x05e74d5c;
}


