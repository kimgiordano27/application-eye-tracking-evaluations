/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 05e74d50
PROGRAM: Waifu-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__Dispose(long param_1)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int *in_x10;
  uint uVar10;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  uint uVar11;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
code_r0x05e74d50:
  puVar9 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current:
  uVar6 = (*(code *)*puVar9)();
  if ((uVar6 & 1) != 0) {
    if (in_stack_00000008._4_1_ == '\x01') {
      if (*(uint *)(unaff_x26 + 0x18) <= (uint)unaff_x19) {
LAB_05e75080:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      puVar9 = (undefined8 *)(unaff_x26 + unaff_x19 * 0x18 + 0x30);
      *puVar9 = in_stack_00000010;
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
  uVar11 = (uint)*(undefined8 *)(unaff_x26 + 0x18);
  if ((uint)unaff_x19 < uVar11) {
    if ((int)uVar11 <= unaff_w29) {
      FUN_06851c18(0);
LAB_05e7508c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    uVar10 = *(uint *)(unaff_x26 + unaff_x19 * unaff_x23 + 0x24);
    unaff_w29 = unaff_w29 + 1;
    if (uVar10 < uVar11) goto LAB_05e74cd8;
    if (*(int *)(unaff_x21 + 0x28) < 1) {
      uVar10 = *(uint *)(unaff_x21 + 0x20);
      if (uVar10 == uVar11) {
        FUN_05e754c4();
        lVar8 = *(long *)(unaff_x21 + 0x10);
        *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
        if (lVar8 == 0) goto LAB_05e7508c;
        uVar11 = *(uint *)(lVar8 + 0x18);
        iVar2 = 0;
        if (uVar11 != 0) {
          iVar2 = unaff_w27 / (int)uVar11;
        }
        uVar3 = unaff_w27 - iVar2 * uVar11;
        if (uVar11 <= uVar3) goto LAB_05e75080;
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        unaff_x28 = (int *)(lVar8 + (ulong)uVar3 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x21 + 0x18);
        *(uint *)(unaff_x21 + 0x20) = uVar10 + 1;
      }
      if (unaff_x26 == 0) goto LAB_05e7508c;
      if (*(uint *)(unaff_x26 + 0x18) <= uVar10) goto LAB_05e75080;
      lVar8 = (long)(int)uVar10;
    }
    else {
      uVar10 = *(uint *)(unaff_x21 + 0x24);
      *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
      if (uVar11 <= uVar10) goto LAB_05e75080;
      lVar8 = (long)(int)uVar10;
      *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar8 * 0x18 + 0x24);
    }
    lVar8 = unaff_x26 + lVar8 * 0x18;
    *(int *)(lVar8 + 0x20) = unaff_w27;
    iVar2 = *unaff_x28;
    puVar9 = (undefined8 *)(lVar8 + 0x30);
    *puVar9 = in_stack_00000010;
    *(int *)(lVar8 + 0x24) = iVar2 + -1;
    *(undefined4 *)(lVar8 + 0x28) = unaff_w20;
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
    goto LAB_05e74f4c;
  }
  goto LAB_05e75080;
LAB_05e74cd8:
  unaff_x19 = (long)(int)uVar10;
  if (*(int *)(unaff_x26 + (long)(int)uVar10 * (long)(int)unaff_x23 + 0x20) == unaff_w27)
  goto code_r0x05e74cec;
  goto LAB_05e74d78;
code_r0x05e74cec:
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0338f618(lVar8);
  }
  param_1 = *unaff_x24;
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(in_x10 + -2) == lVar8) goto code_r0x05e74d50;
      uVar6 = uVar6 - 1;
      in_x10 = in_x10 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)FUN_0338f71c();
  goto System_Array_EmptyInternalEnumerator<OVRPlugin_Vector2f>__get_Current;
}


