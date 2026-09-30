/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyTo
ENTRY_POINT: 041b8338
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


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyTo
               (long param_1,undefined1 param_2 [16],undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  uint in_w9;
  ulong uVar4;
  int *piVar5;
  undefined8 in_x10;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  uVar7 = param_2._0_8_;
  uVar8 = param_2._8_8_;
code_r0x041b8338:
  *(int *)(unaff_x20 + 0x18) = param_4;
  uStack0000000000000000 = uVar7;
  uStack0000000000000008 = uVar8;
  uStack0000000000000010 = in_x10;
  do {
    if (*(uint *)(param_1 + 0x18) <= in_w9) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_1 = param_1 + (long)(int)in_w9 * (long)unaff_w23;
    *(undefined8 *)(param_1 + 0x28) = uStack0000000000000008;
    *(undefined8 *)(param_1 + 0x20) = uStack0000000000000000;
    *(undefined8 *)(param_1 + 0x30) = uStack0000000000000010;
    LeanTween__value(param_1 + 0x20,0);
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
    plVar6 = in_stack_00000058;
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
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_041b82b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar6,lVar2,0);
LAB_041b82b8:
    (*(code *)*puVar1)(&stack0x00000018,plVar6,puVar1[1]);
    param_1 = *(long *)(unaff_x20 + 0x10);
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000028;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_w9 = *(uint *)(unaff_x20 + 0x18);
    param_4 = in_w9 + 1;
    in_x10 = in_stack_00000028;
    uVar7 = in_stack_00000018;
    uVar8 = in_stack_00000020;
    if (in_w9 != *(uint *)(param_1 + 0x18)) goto code_r0x041b8338;
    FUN_041b6948();
    in_w9 = *(uint *)(unaff_x20 + 0x18);
    param_1 = *(long *)(unaff_x20 + 0x10);
    uStack0000000000000008 = in_stack_00000048;
    uStack0000000000000000 = in_stack_00000040;
    *(uint *)(unaff_x20 + 0x18) = in_w9 + 1;
    uStack0000000000000010 = in_stack_00000050;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
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
  if (in_stack_00000030 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  return;
}


