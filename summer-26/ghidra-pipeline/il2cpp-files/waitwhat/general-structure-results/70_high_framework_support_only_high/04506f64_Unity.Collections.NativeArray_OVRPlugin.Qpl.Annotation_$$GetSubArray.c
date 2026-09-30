/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$GetSubArray
ENTRY_POINT: 04506f64
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04507098) */
/* WARNING: Removing unreachable block (ram,0x04507094) */
/* WARNING: Removing unreachable block (ram,0x0450710c) */
/* WARNING: Removing unreachable block (ram,0x0450711c) */

void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__GetSubArray
               (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  do {
    param_2 = FUN_031c09d4(param_2);
    do {
      lVar2 = *unaff_x23;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == param_2) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_04506fb8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_031c0d08(unaff_x23,param_2,0);
LAB_04506fb8:
      (*(code *)*puVar1)(&stack0x00000018,unaff_x23,puVar1[1]);
      in_stack_00000038 = in_stack_00000020;
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000028;
      FUN_04506910();
      if (in_stack_00000010 == (long *)0x0) {
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_04507184;
      }
      lVar2 = *in_stack_00000010;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x24) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_04506f34;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000010,*unaff_x24,0);
LAB_04506f34:
      uVar3 = (*(code *)*puVar1)(in_stack_00000010,puVar1[1]);
      if ((uVar3 & 1) == 0) {
        if (in_stack_00000010 == (long *)0x0) goto LAB_04507088;
        lVar2 = *in_stack_00000010;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_04507060;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_04507048;
      }
      if (in_stack_00000010 == (long *)0x0) {
        if (*(long *)(unaff_x25 + 0x28) == in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto LAB_04507184;
      }
      param_2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      unaff_x23 = in_stack_00000010;
    } while ((*(ushort *)(param_2 + 0x135) & 1) != 0);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
LAB_04507048:
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
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


