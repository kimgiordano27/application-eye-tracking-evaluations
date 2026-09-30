/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnlySpan
ENTRY_POINT: 041a2bc0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnlySpan(void)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  undefined1 auVar9 [16];
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long *in_stack_00000018;
  
  do {
    lVar3 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041a2c0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(unaff_x21,*unaff_x24,0);
LAB_041a2c0c:
    uVar6 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)*in_stack_00000008;
      if (plVar8 == (long *)0x0) goto LAB_041a2dc8;
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_041a2da0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
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
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041a2c90;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,lVar3,0);
LAB_041a2c90:
    auVar9 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = *(uint *)(unaff_x20 + 0x18);
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
      FUN_041a1548();
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    pauVar2 = (undefined1 (*) [16])(lVar3 + (long)(int)uVar5 * 0x10 + 0x20);
    *pauVar2 = auVar9;
    LeanTween__value(pauVar2,0);
    unaff_x21 = in_stack_00000018;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_041a2dbc;
    }
  }
LAB_041a2da0:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar8,*unaff_x23,0);
LAB_041a2dbc:
  (*(code *)*puVar1)(plVar8,puVar1[1]);
LAB_041a2dc8:
  if (in_stack_00000000 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


