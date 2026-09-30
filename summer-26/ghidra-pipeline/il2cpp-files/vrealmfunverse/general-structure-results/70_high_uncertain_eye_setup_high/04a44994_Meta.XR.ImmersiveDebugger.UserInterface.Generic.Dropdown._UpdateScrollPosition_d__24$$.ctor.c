/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$.ctor
ENTRY_POINT: 04a44994
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24___ctor
          (undefined8 param_1,int param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar9;
  long unaff_x25;
  long unaff_x26;
  int unaff_w28;
  uint unaff_w29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (!(bool)in_CY) {
    if (*(int *)(unaff_x19 + (ulong)unaff_w29 * (unaff_x20 & 0xffffffff)) == param_2) {
      plVar9 = *(long **)(unaff_x26 + 0x30);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x20);
      lVar6 = unaff_x19 + (ulong)unaff_w29 * (unaff_x20 & 0xffffffff);
      uVar2 = *(undefined8 *)(lVar6 + 8);
      uVar3 = *(undefined8 *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02b76218(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04a44a34;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)FUN_02b7654c(plVar9,lVar4,0);
LAB_04a44a34:
      uVar7 = (*(code *)*puVar1)(plVar9,uVar2,uVar3,in_stack_00000018);
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      param_1 = *(undefined8 *)(in_stack_00000008 + 0x18);
      param_2 = in_stack_00000010._4_4_;
    }
    uVar5 = (uint)param_1;
    if ((int)uVar5 <= unaff_w28) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar2 = thunk_FUN_02b79644();
      uVar3 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar2,unaff_x25);
    }
    if (uVar5 <= unaff_w29) break;
    unaff_w28 = unaff_w28 + 1;
    unaff_w29 = *(uint *)(unaff_x19 + (ulong)unaff_w29 * (unaff_x20 & 0xffffffff) + 4);
    if ((int)unaff_w29 < 0) {
      return 0;
    }
    in_CY = uVar5 <= unaff_w29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


