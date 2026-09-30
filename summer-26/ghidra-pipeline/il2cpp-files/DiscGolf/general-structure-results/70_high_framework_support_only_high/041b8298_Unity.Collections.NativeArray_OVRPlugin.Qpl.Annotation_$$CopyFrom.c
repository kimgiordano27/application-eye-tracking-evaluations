/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 041b8298
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


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
code_r0x041b8298:
  if (!(bool)in_ZR) goto LAB_041b8284;
LAB_041b829c:
  puVar1 = (undefined8 *)FUN_02dd004c(unaff_x21,param_3,0);
  do {
    (*(code *)*puVar1)(&stack0x00000018,unaff_x21,puVar1[1]);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 == *(uint *)(lVar2 + 0x18)) {
      FUN_041b6948();
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar2 = lVar2 + (long)(int)uVar3 * (long)unaff_w23;
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000050;
    LeanTween__value(lVar2 + 0x20,0);
    plVar6 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar2 = *in_stack_00000058;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_041b8234;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000058,*unaff_x22,0);
LAB_041b8234:
    uVar4 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    unaff_x21 = in_stack_00000058;
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)*in_stack_00000038;
      if (plVar6 == (long *)0x0) goto LAB_041b8438;
      lVar2 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_041b8410;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_02dcfd18(param_3);
    }
    param_1 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_041b829c;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_041b8284:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x041b8298;
    }
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_041b842c;
    }
  }
LAB_041b8410:
  puVar1 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)PTR_DAT_069fbff0,0);
LAB_041b842c:
  (*(code *)*puVar1)(plVar6,puVar1[1]);
LAB_041b8438:
  if (in_stack_00000030 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


