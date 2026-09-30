/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 02f1589c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose(undefined8 param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x26;
  int unaff_w27;
  ulong unaff_x28;
  
  do {
    if ((bool)in_ZR) {
      plVar9 = *(long **)(unaff_x21 + 0x30);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      uVar10 = *(undefined8 *)(unaff_x26 + unaff_x28 * 0x10 + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01dde7f8(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02f15918;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01dde8fc(plVar9,lVar4,0);
LAB_02f15918:
      uVar7 = (*(code *)*puVar2)(plVar9,uVar10);
      if ((uVar7 & 1) != 0) goto LAB_02f15958;
      param_1 = *(undefined8 *)(unaff_x26 + 0x18);
    }
    uVar5 = (uint)param_1;
    if ((int)uVar5 <= unaff_w27) {
      thunk_FUN_01dd295c(StringLiteral_1244);
      uVar10 = thunk_FUN_01de27b8();
      uVar3 = thunk_FUN_01dd295c(StringLiteral_3086);
      FUN_03393770(uVar10,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar10);
    }
    if (uVar5 <= (uint)unaff_x23) {
LAB_02f15978:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar1 = *(uint *)(unaff_x26 + unaff_x28 * 0x10 + 0x24);
    unaff_x23 = (ulong)uVar1;
    unaff_w27 = unaff_w27 + 1;
    if ((int)uVar1 < 0) {
      unaff_x23 = 0xffffffff;
LAB_02f15958:
      return unaff_x23 & 0xffffffff;
    }
    if (uVar5 <= uVar1) goto LAB_02f15978;
    in_ZR = *(int *)(unaff_x26 + unaff_x23 * 0x10 + 0x20) == unaff_w22;
    unaff_x28 = unaff_x23;
  } while( true );
}


