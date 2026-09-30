/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 03999f34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0399a0f0) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long in_x9;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *in_stack_00000038;
  
code_r0x03999f34:
  puVar2 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(unaff_x21,puVar2[1]), (uVar1 & 1) != 0) {
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    uVar8 = param_3;
    uVar9 = param_4;
    uVar10 = param_5;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218(lVar3);
      uVar8 = param_3;
      uVar9 = param_4;
      uVar10 = param_5;
    }
    lVar4 = *in_stack_00000038;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03999fc0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000038,lVar3,0);
LAB_03999fc0:
    uVar7 = (*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = *(uint *)(unaff_x20 + 0x18);
    param_3 = uVar8;
    param_4 = uVar9;
    param_5 = uVar10;
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
      FUN_0399871c();
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar3 = lVar3 + (long)(int)uVar5 * 0x10;
    *(undefined4 *)(lVar3 + 0x20) = uVar7;
    *(undefined4 *)(lVar3 + 0x24) = uVar8;
    *(undefined4 *)(lVar3 + 0x28) = uVar9;
    *(undefined4 *)(lVar3 + 0x2c) = uVar10;
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    param_1 = *in_stack_00000038;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000038;
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x22) {
          in_x9 = (long)*piVar6;
          goto code_r0x03999f34;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*unaff_x22,0);
  }
  if (in_stack_00000038 != (long *)0x0) {
    lVar3 = *in_stack_00000038;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0399a0b0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_02b7654c(in_stack_00000038,*(long *)PTR_DAT_06312f78,0);
LAB_0399a0b0:
    (*(code *)*puVar2)(in_stack_00000038,puVar2[1]);
  }
  return;
}


