/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$MoveNext
ENTRY_POINT: 02f21724
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__MoveNext(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong in_x10;
  int *piVar10;
  long unaff_x19;
  uint unaff_w20;
  undefined4 unaff_w21;
  long *plVar11;
  long unaff_x24;
  uint unaff_w25;
  uint uVar12;
  long unaff_x26;
  int unaff_w27;
  ulong uVar13;
  int *piVar14;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    uVar12 = unaff_w25;
    piVar14 = (int *)(unaff_x26 + (ulong)uVar12 * (in_x10 & 0xffffffff) + 0x20);
    uVar13 = (ulong)uVar12;
    if (*piVar14 == param_2) {
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 == (long *)0x0) {
LAB_02f21938:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x20);
      uVar1 = *(undefined4 *)(unaff_x26 + uVar13 * in_x10 + 0x28);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01dde7f8(lVar6);
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02f217bc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar11,lVar6,0);
LAB_02f217bc:
      uVar9 = (*(code *)*puVar3)(plVar11,uVar1,unaff_w21,puVar3[1]);
      if ((uVar9 & 1) != 0) {
        if ((int)unaff_w20 < 0) {
          uVar7 = *(uint *)(unaff_x26 + 0x18);
          if (uVar7 <= uVar12) break;
          lVar6 = *(long *)(unaff_x19 + 0x10);
          if (lVar6 == 0) goto LAB_02f21938;
          if (*(uint *)(lVar6 + 0x18) <= (uint)in_stack_00000000) break;
          *(int *)(lVar6 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x26 + uVar13 * 0xc + 0x24) + 1;
        }
        else {
          uVar7 = *(uint *)(unaff_x26 + 0x18);
          if ((uVar7 <= uVar12) || (uVar7 <= unaff_w20)) break;
          *(undefined4 *)(unaff_x26 + 0x20 + (ulong)unaff_w20 * 0xc + 4) =
               *(undefined4 *)(unaff_x26 + 0x20 + uVar13 * 0xc + 4);
        }
        if (uVar12 < uVar7) {
          *piVar14 = -1;
          *(undefined4 *)(unaff_x26 + uVar13 * 0xc + 0x24) = *(undefined4 *)(unaff_x19 + 0x28);
          iVar2 = *(int *)(unaff_x19 + 0x20) + -1;
          *(int *)(unaff_x19 + 0x20) = iVar2;
          *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
          if (iVar2 == 0) {
            uVar12 = 0xffffffff;
            *(undefined4 *)(unaff_x19 + 0x24) = 0;
          }
          *(uint *)(unaff_x19 + 0x28) = uVar12;
          return 1;
        }
        break;
      }
      param_1 = *(undefined8 *)(unaff_x26 + 0x18);
      in_x10 = 0xc;
      param_2 = in_stack_00000008._4_4_;
    }
    uVar7 = (uint)param_1;
    if ((int)uVar7 <= unaff_w27) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar4 = thunk_FUN_01de27b8();
      uVar5 = thunk_FUN_01dd295c(StringLiteral_3086);
      FUN_03393770(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar4,unaff_x24);
    }
    if (uVar7 <= uVar12) break;
    unaff_w25 = *(uint *)(unaff_x26 + uVar13 * in_x10 + 0x24);
    unaff_w27 = unaff_w27 + 1;
    if ((int)unaff_w25 < 0) {
      return 0;
    }
    unaff_w20 = uVar12;
  } while (unaff_w25 < uVar7);
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


