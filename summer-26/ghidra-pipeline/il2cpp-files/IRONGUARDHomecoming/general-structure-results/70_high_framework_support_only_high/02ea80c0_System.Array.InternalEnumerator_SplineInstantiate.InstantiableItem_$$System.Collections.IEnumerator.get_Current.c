/*
FUNCTION_NAME: System.Array.InternalEnumerator<SplineInstantiate.InstantiableItem>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02ea80c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ea82f4) */

void System_Array_InternalEnumerator<SplineInstantiate_InstantiableItem>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02ea8118;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02ea8118:
    uVar7 = (*(code *)*puVar3)();
    if ((uVar7 & 1) == 0) {
      if (unaff_x23 == (long *)0x0) goto LAB_02ea8230;
      lVar5 = *unaff_x23;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_02ea8208;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x23;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02ea8190;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02ea8190:
    (*(code *)*puVar3)();
    iVar2 = FUN_02ea83b0();
    if (-1 < iVar2) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_039dcb94();
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *unaff_x25) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02ea8224;
    }
  }
LAB_02ea8208:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02ea8224:
  (*(code *)*puVar3)();
LAB_02ea8230:
  if (0 < (int)unaff_x21) {
    uVar7 = 0;
    lVar5 = 0x20;
    do {
      lVar6 = *(long *)(unaff_x20 + 0x18);
      if (lVar6 == 0) goto LAB_02ea82e4;
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_02ea82e8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(lVar6 + lVar5)) {
        if (unaff_x22 == 0) {
LAB_02ea82e4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
        if ((uVar4 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02ea82e4;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar7) goto LAB_02ea82e8;
          FUN_02ea4f4c();
        }
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0xc;
    } while (unaff_x21 != uVar7);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


