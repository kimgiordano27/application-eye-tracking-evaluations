/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 029132b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__MoveNext(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *in_x10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint uVar7;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000008;
  
code_r0x029132b0:
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        FUN_032f29a8();
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        uVar10 = unaff_x19[2];
        uVar9 = unaff_x19[5];
        uVar8 = unaff_x19[4];
        uVar12 = unaff_x19[1];
        uVar11 = *unaff_x19;
        if ((uint)unaff_x23 < *(uint *)(unaff_x26 + 0x18)) {
          lVar6 = unaff_x26 + unaff_x23 * 0x40;
          *(undefined8 *)(lVar6 + 0x48) = unaff_x19[3];
          *(undefined8 *)(lVar6 + 0x40) = uVar10;
          *(undefined8 *)(lVar6 + 0x58) = uVar9;
          *(undefined8 *)(lVar6 + 0x50) = uVar8;
          *(undefined8 *)(lVar6 + 0x38) = uVar12;
          *(undefined8 *)(lVar6 + 0x30) = uVar11;
          return 1;
        }
LAB_02913540:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x23) goto LAB_02913540;
      uVar7 = *(uint *)(unaff_x26 + unaff_x23 * 0x40 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w29) {
        FUN_032f2aac(0);
      }
      uVar5 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar5 <= uVar7) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar7 = *(uint *)(unaff_x21 + 0x20);
          if (uVar7 == (uint)uVar5) {
            FUN_029138f4();
            lVar6 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
            if (lVar6 == 0) goto LAB_02913544;
            uVar1 = *(uint *)(lVar6 + 0x18);
            iVar2 = 0;
            if (uVar1 != 0) {
              iVar2 = unaff_w27 / (int)uVar1;
            }
            uVar3 = unaff_w27 - iVar2 * uVar1;
            if (uVar1 <= uVar3) goto LAB_02913540;
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            unaff_x28 = (int *)(lVar6 + (ulong)uVar3 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
          }
          if (unaff_x26 == 0) {
LAB_02913544:
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_02913540;
          lVar6 = (long)(int)uVar7;
        }
        else {
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          uVar7 = *(uint *)(unaff_x21 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar7) goto LAB_02913540;
          lVar6 = (long)(int)uVar7;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(unaff_x26 + lVar6 * 0x40 + 0x24);
        }
        lVar6 = unaff_x26 + lVar6 * 0x40;
        *(int *)(lVar6 + 0x20) = unaff_w27;
        iVar2 = *unaff_x28;
        *(undefined8 *)(lVar6 + 0x28) = unaff_x20;
        *(int *)(lVar6 + 0x24) = iVar2 + -1;
        uVar10 = unaff_x19[2];
        uVar9 = unaff_x19[5];
        uVar8 = unaff_x19[4];
        uVar12 = unaff_x19[1];
        uVar11 = *unaff_x19;
        *(undefined8 *)(lVar6 + 0x48) = unaff_x19[3];
        *(undefined8 *)(lVar6 + 0x40) = uVar10;
        *(undefined8 *)(lVar6 + 0x58) = uVar9;
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        *(undefined8 *)(lVar6 + 0x38) = uVar12;
        *(undefined8 *)(lVar6 + 0x30) = uVar11;
        *unaff_x28 = uVar7 + 1;
        return 1;
      }
      unaff_x23 = (long)(int)uVar7;
    } while (*(int *)(unaff_x26 + unaff_x23 * 0x40 + 0x20) != unaff_w27);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01c72394(lVar6);
    }
    param_1 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == lVar6) goto code_r0x029132b0;
        uVar5 = uVar5 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01c72498();
  } while( true );
}


