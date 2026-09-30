/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Zeroing.SimulatePathJob.Data>$$get_Current
ENTRY_POINT: 05e862cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<Zeroing_SimulatePathJob_Data>__get_Current(void)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long unaff_x19;
  int unaff_w20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  uint uVar13;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000000;
  int *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  do {
    uVar12 = *(uint *)(unaff_x29 + unaff_x19 * 0x20 + 0x24);
    unaff_w20 = unaff_w20 + 1;
    uVar13 = (uint)unaff_x27;
    if (uVar13 <= uVar12) {
      if (*(int *)(unaff_x22 + 0x28) < 1) {
        uVar12 = *(uint *)(unaff_x22 + 0x20);
        if (uVar12 == uVar13) {
          FUN_05e86a0c();
          lVar8 = *(long *)(unaff_x22 + 0x10);
          *(uint *)(unaff_x22 + 0x20) = uVar13 + 1;
          if (lVar8 == 0) goto LAB_05e865c8;
          uVar13 = *(uint *)(lVar8 + 0x18);
          iVar2 = 0;
          if (uVar13 != 0) {
            iVar2 = unaff_w24 / (int)uVar13;
          }
          uVar3 = unaff_w24 - iVar2 * uVar13;
          if (uVar13 <= uVar3) goto LAB_05e865bc;
          unaff_x29 = *(long *)(unaff_x22 + 0x18);
          in_stack_00000008 = (int *)(lVar8 + (ulong)uVar3 * 4 + 0x20);
        }
        else {
          unaff_x29 = *(long *)(unaff_x22 + 0x18);
          *(uint *)(unaff_x22 + 0x20) = uVar12 + 1;
        }
        if (unaff_x29 == 0) goto LAB_05e865c8;
        if (uVar12 < *(uint *)(unaff_x29 + 0x18)) {
          lVar8 = (long)(int)uVar12;
          goto 
          System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext;
        }
      }
      else {
        uVar12 = *(uint *)(unaff_x22 + 0x24);
        *(int *)(unaff_x22 + 0x28) = *(int *)(unaff_x22 + 0x28) + -1;
        if (uVar12 < uVar13) {
          lVar8 = (long)(int)uVar12;
          *(undefined4 *)(unaff_x22 + 0x24) = *(undefined4 *)(unaff_x29 + lVar8 * 0x20 + 0x24);
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext:
          lVar8 = unaff_x29 + lVar8 * 0x20;
          *(int *)(lVar8 + 0x20) = unaff_w24;
          iVar2 = *in_stack_00000008;
          puVar9 = (undefined8 *)(lVar8 + 0x38);
          *puVar9 = in_stack_00000010;
          *(undefined8 *)(lVar8 + 0x28) = unaff_x21;
          *(undefined4 *)(lVar8 + 0x30) = in_stack_00000018;
          *(int *)(lVar8 + 0x24) = iVar2 + -1;
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
          *in_stack_00000008 = uVar12 + 1;
          return 1;
        }
      }
LAB_05e865bc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    unaff_x19 = (long)(int)uVar12;
    if (*(int *)(unaff_x29 + unaff_x19 * 0x20 + 0x20) == unaff_w24) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0338f618(lVar8);
      }
      lVar7 = *unaff_x25;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05e86298;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_0338f71c();
LAB_05e86298:
      uVar10 = (*(code *)*puVar9)();
      if ((uVar10 & 1) != 0) {
        if (in_stack_00000000._4_1_ != '\x01') {
          if (in_stack_00000000._4_1_ == '\x02') {
            uVar6 = thunk_FUN_03398650(*(undefined8 *)
                                        (*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x70),
                                       &stack0x00000020);
                    /* WARNING: Subroutine does not return */
            FUN_06851b14(uVar6,0);
          }
          return 0;
        }
        if (uVar12 < *(uint *)(unaff_x29 + 0x18)) {
          puVar9 = (undefined8 *)(unaff_x29 + unaff_x19 * 0x20 + 0x38);
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
        goto LAB_05e865bc;
      }
      unaff_x27 = *(undefined8 *)(unaff_x29 + 0x18);
    }
    if ((uint)unaff_x27 <= uVar12) goto LAB_05e865bc;
  } while (unaff_w20 < (int)(uint)unaff_x27);
  FUN_06851c18(0);
LAB_05e865c8:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


