/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02f15e00
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f15ef4) */
/* WARNING: Removing unreachable block (ram,0x02f15fa4) */

void System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02f15e00:
  (*(code *)*param_1)();
  *(undefined4 *)(unaff_x29 + -0xc) = 0;
  uVar2 = FUN_02f16078();
  if ((uVar2 & 1) == 0) {
    if (*(int *)(unaff_x29 + -0xc) < (int)unaff_x21) {
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = FUN_03604bc4();
      if ((uVar2 & 1) == 0) {
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_03604b48();
      }
    }
  }
  else {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_03604b48();
  }
  lVar4 = *unaff_x23;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x28) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_02f15d88;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02f15d88:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01dde7f8(lVar4);
    }
    lVar5 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          param_1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto code_r0x02f15e00;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    param_1 = (undefined8 *)FUN_01dde8fc();
    goto code_r0x02f15e00;
  }
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f15edc;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02f15edc:
    (*(code *)*puVar1)();
  }
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) {
LAB_02f15f90:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = 0;
    do {
      uVar3 = FUN_03604bc4();
      if ((uVar3 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15f90;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        FUN_02f123d0();
      }
      uVar2 = uVar2 + 1;
    } while (unaff_x21 != uVar2);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


