/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Qpl.Annotation>$$.ctor
ENTRY_POINT: 0144c24c
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


undefined8 Unity_Collections_NativeArray_Enumerator<OVRPlugin_Qpl_Annotation>___ctor(code *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  uint uVar10;
  long unaff_x21;
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
  
  do {
    uVar5 = (*param_1)();
    if ((uVar5 & 1) != 0) {
      if (in_stack_00000000 == '\x02') {
        uStack0000000000000004 = in_stack_00000008._4_4_;
        uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70),
                                   &stack0x00000004);
        FUN_01d6947c(uVar6,0);
      }
      else if (in_stack_00000000 == '\x01') {
        if ((uint)unaff_x21 < *(uint *)(unaff_x25 + 0x18)) {
          lVar8 = unaff_x25 + unaff_x21 * 0x1c;
          *(undefined4 *)(lVar8 + 0x2c) = unaff_s11;
          *(undefined4 *)(lVar8 + 0x30) = unaff_s10;
          *(undefined4 *)(lVar8 + 0x34) = unaff_s9;
          *(undefined4 *)(lVar8 + 0x38) = unaff_s8;
          return 1;
        }
LAB_0144c4e0:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      return 0;
    }
    uVar5 = (ulong)*(uint *)(unaff_x25 + 0x18);
    do {
      if ((uint)uVar5 <= (uint)unaff_x21) goto LAB_0144c4e0;
      uVar10 = *(uint *)(unaff_x25 + unaff_x21 * unaff_x29 + 0x24);
      if ((int)(uint)uVar5 <= unaff_w28) {
        FUN_01d69580(0);
      }
      uVar5 = *(ulong *)(unaff_x25 + 0x18);
      unaff_w28 = unaff_w28 + 1;
      if ((uint)uVar5 <= uVar10) {
        if (*(int *)(unaff_x19 + 0x28) < 1) {
          uVar10 = *(uint *)(unaff_x19 + 0x20);
          if (uVar10 == (uint)uVar5) {
            FUN_0144c888();
            lVar8 = *(long *)(unaff_x19 + 0x10);
            *(uint *)(unaff_x19 + 0x20) = uVar10 + 1;
            if (lVar8 == 0) goto LAB_0144c4e4;
            uVar1 = *(uint *)(lVar8 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = unaff_w26 / (int)uVar1;
            }
            uVar2 = unaff_w26 - iVar3 * uVar1;
            if (uVar1 <= uVar2) goto LAB_0144c4e0;
            unaff_x25 = *(long *)(unaff_x19 + 0x18);
            unaff_x27 = (int *)(lVar8 + (ulong)uVar2 * 4 + 0x20);
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
          if (*(uint *)(unaff_x25 + 0x18) <= uVar10) goto LAB_0144c4e0;
          lVar8 = (long)(int)uVar10;
        }
        else {
          *(int *)(unaff_x19 + 0x28) = *(int *)(unaff_x19 + 0x28) + -1;
          uVar10 = *(uint *)(unaff_x19 + 0x24);
          if (*(uint *)(unaff_x25 + 0x18) <= uVar10) goto LAB_0144c4e0;
          lVar8 = (long)(int)uVar10;
          *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x25 + lVar8 * 0x1c + 0x24);
        }
        lVar8 = unaff_x25 + lVar8 * 0x1c;
        *(int *)(lVar8 + 0x20) = unaff_w26;
        *(int *)(lVar8 + 0x24) = *unaff_x27 + -1;
        *(undefined4 *)(lVar8 + 0x2c) = unaff_s11;
        *(undefined4 *)(lVar8 + 0x30) = unaff_s10;
        *(undefined4 *)(lVar8 + 0x34) = unaff_s9;
        *(undefined4 *)(lVar8 + 0x38) = unaff_s8;
        *(undefined4 *)(lVar8 + 0x28) = in_stack_00000008._4_4_;
        *unaff_x27 = uVar10 + 1;
        return 1;
      }
      unaff_x21 = (long)(int)uVar10;
    } while (*(int *)(unaff_x25 + (long)(int)uVar10 * (long)(int)unaff_x29 + 0x20) != unaff_w26);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0103c244(lVar8);
    }
    lVar7 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar8) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0144c244;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
LAB_0144c244:
    param_1 = (code *)*puVar4;
  } while( true );
}


