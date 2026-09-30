/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 041a2194
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041a22d4) */
/* WARNING: Removing unreachable block (ram,0x041a22d0) */
/* WARNING: Removing unreachable block (ram,0x041a231c) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__ToArray(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *in_stack_00000018;
  
code_r0x041a2194:
  uVar1 = (*(code *)*param_1)(unaff_x23,param_1[1]);
  if ((uVar1 & 1) != 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18(lVar3);
    }
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_041a2140;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000018,lVar3,0);
LAB_041a2140:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    FUN_041a1c10();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x23 = in_stack_00000018;
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          param_1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x041a2194;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    param_1 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*unaff_x24,0);
    goto code_r0x041a2194;
  }
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_041a22b8;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*(long *)PTR_DAT_069fbff0,0);
LAB_041a22b8:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


