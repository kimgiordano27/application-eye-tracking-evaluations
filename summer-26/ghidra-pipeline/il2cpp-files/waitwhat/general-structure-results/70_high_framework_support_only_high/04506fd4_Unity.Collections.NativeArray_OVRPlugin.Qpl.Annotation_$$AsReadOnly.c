/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsReadOnly
ENTRY_POINT: 04506fd4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04507098) */
/* WARNING: Removing unreachable block (ram,0x04507094) */
/* WARNING: Removing unreachable block (ram,0x0450710c) */
/* WARNING: Removing unreachable block (ram,0x0450711c) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnly(undefined1 param_1 [16])

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  long unaff_x25;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  long in_stack_00000048;
  
  uStack0000000000000038 = param_1._8_8_;
  uStack0000000000000030 = param_1._0_8_;
  uStack0000000000000040 = in_x9;
  while (FUN_04506910(), in_stack_00000010 != (long *)0x0) {
    lVar2 = *in_stack_00000010;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04506f34;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000010,*unaff_x24,0);
LAB_04506f34:
    uVar4 = (*(code *)*puVar1)(in_stack_00000010,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000010 == (long *)0x0) goto LAB_04507088;
      lVar2 = *in_stack_00000010;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_04507060;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_04507048;
    }
    if (in_stack_00000010 == (long *)0x0) {
      if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      goto LAB_04507184;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4(lVar2);
    }
    lVar3 = *in_stack_00000010;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04506fb8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000010,lVar2,0);
LAB_04506fb8:
    (*(code *)*puVar1)(&stack0x00000018,in_stack_00000010,puVar1[1]);
    uStack0000000000000040 = in_stack_00000028;
    uStack0000000000000030 = in_stack_00000018;
    uStack0000000000000038 = in_stack_00000020;
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  goto LAB_04507184;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_04507048:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0450707c;
    }
  }
LAB_04507060:
  puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000010,*(long *)PTR_DAT_070c2e88,0);
LAB_0450707c:
  (*(code *)*puVar1)(in_stack_00000010,puVar1[1]);
LAB_04507088:
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
    return;
  }
LAB_04507184:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


