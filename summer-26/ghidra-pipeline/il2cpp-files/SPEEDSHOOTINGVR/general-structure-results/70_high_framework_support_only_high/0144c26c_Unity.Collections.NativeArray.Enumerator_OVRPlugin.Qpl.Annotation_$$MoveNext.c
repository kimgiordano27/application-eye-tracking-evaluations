/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 0144c26c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>__MoveNext(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long in_x9;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  uint uVar10;
  long *unaff_x22;
  long unaff_x25;
  int unaff_w26;
  int *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  char in_stack_00000000;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  while( true ) {
    uVar10 = *(uint *)(in_x9 + 0x24);
    if ((int)param_1 <= unaff_w28) {
      FUN_01d69580(0);
    }
    param_1 = *(ulong *)(unaff_x25 + 0x18);
    unaff_w28 = unaff_w28 + 1;
    if ((uint)param_1 <= uVar10) break;
    if (*(int *)(unaff_x25 + (long)(int)uVar10 * (long)(int)unaff_x29 + 0x20) == unaff_w26) {
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0103c244(lVar7);
      }
      lVar6 = *unaff_x22;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0144c244;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348();
LAB_0144c244:
      uVar8 = (*(code *)*puVar4)();
      if ((uVar8 & 1) != 0) {
        if (in_stack_00000000 == '\x02') {
          uStack0000000000000004 = in_stack_00000008._4_4_;
          uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70),
                                     &stack0x00000004);
          FUN_01d6947c(uVar5,0);
          return 0;
        }
        if (in_stack_00000000 != '\x01') {
          return 0;
        }
        if (uVar10 < *(uint *)(unaff_x25 + 0x18)) {
          lVar7 = unaff_x25 + (long)(int)uVar10 * 0x1c;
          *(undefined4 *)(lVar7 + 0x2c) = unaff_s11;
          *(undefined4 *)(lVar7 + 0x30) = unaff_s10;
          *(undefined4 *)(lVar7 + 0x34) = unaff_s9;
          *(undefined4 *)(lVar7 + 0x38) = unaff_s8;
          return 1;
        }
        goto LAB_0144c4e0;
      }
      param_1 = (ulong)*(uint *)(unaff_x25 + 0x18);
    }
    if ((uint)param_1 <= uVar10) goto LAB_0144c4e0;
    in_x9 = unaff_x25 + (int)uVar10 * unaff_x29;
  }
  if (*(int *)(unaff_x19 + 0x28) < 1) {
    uVar10 = *(uint *)(unaff_x19 + 0x20);
    if (uVar10 == (uint)param_1) {
      FUN_0144c888();
      lVar7 = *(long *)(unaff_x19 + 0x10);
      *(uint *)(unaff_x19 + 0x20) = uVar10 + 1;
      if (lVar7 == 0) goto LAB_0144c4e4;
      uVar1 = *(uint *)(lVar7 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w26 / (int)uVar1;
      }
      uVar2 = unaff_w26 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_0144c4e0;
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      unaff_x27 = (int *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x25 = *(long *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = uVar10 + 1;
    }
    if (unaff_x25 == 0) {
LAB_0144c4e4:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) {
LAB_0144c4e0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    lVar7 = (long)(int)uVar10;
  }
  else {
    *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
    uVar10 = *(uint *)(unaff_x19 + 0x24);
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) goto LAB_0144c4e0;
    lVar7 = (long)(int)uVar10;
    *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x25 + lVar7 * 0x1c + 0x24);
  }
  lVar7 = unaff_x25 + lVar7 * 0x1c;
  *(int *)(lVar7 + 0x20) = unaff_w26;
  *(int *)(lVar7 + 0x24) = *unaff_x27 + -1;
  *(undefined4 *)(lVar7 + 0x2c) = unaff_s11;
  *(undefined4 *)(lVar7 + 0x30) = unaff_s10;
  *(undefined4 *)(lVar7 + 0x34) = unaff_s9;
  *(undefined4 *)(lVar7 + 0x38) = unaff_s8;
  *(undefined4 *)(lVar7 + 0x28) = in_stack_00000008._4_4_;
  *unaff_x27 = uVar10 + 1;
  return 1;
}


