/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 066524e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066525d4) */

void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *in_stack_00000018;
  
code_r0x066524e8:
  puVar1 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    puVar1 = unaff_x24;
    if (unaff_w22 != 0) {
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_w22 - 1U) {
                    /* WARNING: Subroutine does not return */
        FUN_04948194();
      }
      puVar1 = (undefined8 *)(lVar3 + (long)(int)(unaff_w22 - 1U) * 8 + 0x20);
    }
    unaff_w22 = unaff_w22 + 1;
    *puVar1 = uVar2;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0665245c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x23,0);
LAB_0665245c:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_06652580;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34(lVar3);
    }
    param_1 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000018;
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          in_x9 = (long)*piVar5;
          goto code_r0x066524e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,lVar3,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0665259c;
    }
  }
LAB_06652580:
  puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*(long *)PTR_DAT_0ac09b90,0);
LAB_0665259c:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


