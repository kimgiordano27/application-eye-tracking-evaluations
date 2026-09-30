/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 041a2ce0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  uint in_w9;
  ulong uVar5;
  int in_w10;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar8 [16];
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long *in_stack_00000018;
  
  auVar8._8_8_ = unaff_x22;
  auVar8._0_8_ = unaff_x21;
code_r0x041a2ce0:
  *(int *)(unaff_x20 + 0x18) = in_w10;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  do {
    if (*(uint *)(param_1 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    pauVar2 = (undefined1 (*) [16])(param_1 + (long)(int)in_w9 * 0x10 + 0x20);
    *pauVar2 = auVar8;
    LeanTween__value(pauVar2,0);
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_041a2c0c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*unaff_x24,0);
LAB_041a2c0c:
    uVar5 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)*in_stack_00000008;
      if (plVar7 == (long *)0x0) goto LAB_041a2dc8;
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_041a2da0;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_041a2d88;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar4 = *in_stack_00000018;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_041a2c90;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,lVar3,0);
LAB_041a2c90:
    auVar8 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_w9 = *(uint *)(unaff_x20 + 0x18);
    if (in_w9 == *(uint *)(param_1 + 0x18)) break;
    *(uint *)(unaff_x20 + 0x18) = in_w9 + 1;
  } while( true );
  FUN_041a1548();
  in_w9 = *(uint *)(unaff_x20 + 0x18);
  param_1 = *(long *)(unaff_x20 + 0x10);
  in_w10 = in_w9 + 1;
  goto code_r0x041a2ce0;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_041a2d88:
    if (*(long *)(piVar6 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_041a2dbc;
    }
  }
LAB_041a2da0:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar7,*unaff_x23,0);
LAB_041a2dbc:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
LAB_041a2dc8:
  if (in_stack_00000000 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


