/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 01446738
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
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
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  int *piVar8;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint uVar9;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  int unaff_w29;
  char in_stack_00000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
code_r0x01446738:
  puVar4 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000000 == '\x02') {
        uStack0000000000000004 = in_stack_00000008._4_4_;
        uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000004);
        FUN_01d6947c(uVar6,0);
      }
      else if (in_stack_00000000 == '\x01') {
        if ((uint)unaff_x22 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x26 + unaff_x22 * 0x10 + 0x2c) = unaff_w19;
          return 1;
        }
LAB_014469b0:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x22) goto LAB_014469b0;
      uVar9 = *(uint *)(unaff_x26 + unaff_x22 * 0x10 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w29) {
        FUN_01d69580(0);
      }
      uVar5 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w29 = unaff_w29 + 1;
      if ((uint)uVar5 <= uVar9) {
        if (*(int *)(unaff_x20 + 0x28) < 1) {
          uVar9 = *(uint *)(unaff_x20 + 0x20);
          if (uVar9 == (uint)uVar5) {
            FUN_01446d50();
            lVar7 = *(long *)(unaff_x20 + 0x10);
            *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
            if (lVar7 == 0) goto LAB_014469b4;
            uVar1 = *(uint *)(lVar7 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w27 / (int)uVar1;
            }
            uVar2 = unaff_w27 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_014469b0;
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            unaff_x28 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            unaff_x26 = *(long *)(unaff_x20 + 0x18);
            *(uint *)(unaff_x20 + 0x20) = uVar9 + 1;
          }
          if (unaff_x26 == 0) {
LAB_014469b4:
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_014469b0;
          lVar7 = (long)(int)uVar9;
        }
        else {
          *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
          uVar9 = *(uint *)(unaff_x20 + 0x24);
          if (*(uint *)(unaff_x26 + 0x18) <= uVar9) goto LAB_014469b0;
          lVar7 = (long)(int)uVar9;
          *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x10 + 0x24);
        }
        lVar7 = unaff_x26 + lVar7 * 0x10;
        *(int *)(lVar7 + 0x20) = unaff_w27;
        *(int *)(lVar7 + 0x24) = *unaff_x28 + -1;
        *(undefined4 *)(lVar7 + 0x28) = in_stack_00000008._4_4_;
        *(undefined4 *)(lVar7 + 0x2c) = unaff_w19;
        *unaff_x28 = uVar9 + 1;
        return 1;
      }
      unaff_x22 = (long)(int)uVar9;
    } while (*(int *)(unaff_x26 + (long)(int)uVar9 * 0x10 + 0x20) != unaff_w27);
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0103c244(lVar7);
    }
    param_1 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar7) {
          in_x9 = (long)*piVar8;
          goto code_r0x01446738;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
  } while( true );
}


