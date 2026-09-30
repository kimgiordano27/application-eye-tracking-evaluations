/*
FUNCTION_NAME: System.Array.InternalEnumerator<SplineInstantiate.InstantiableItem>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02ea80b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ea82f4) */

void System_Array_InternalEnumerator<SplineInstantiate_InstantiableItem>__System_Collections_IEnumerator_Reset
               (code *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  plVar3 = (long *)(*param_1)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02ea8118;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar1,0);
LAB_02ea8118:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_02ea8230;
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_02ea8208;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_02ea8190;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_02ea8190:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
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
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_02ea8224;
    }
  }
LAB_02ea8208:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x25,0);
LAB_02ea8224:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_02ea8230:
  if (0 < (int)unaff_x21) {
    uVar8 = 0;
    lVar6 = 0x20;
    do {
      lVar7 = *(long *)(unaff_x20 + 0x18);
      if (lVar7 == 0) goto LAB_02ea82e4;
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_02ea82e8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)(lVar7 + lVar6)) {
        if (unaff_x22 == 0) {
LAB_02ea82e4:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar5 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
        if ((uVar5 & 1) == 0) {
          if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02ea82e4;
          if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar8) goto LAB_02ea82e8;
          FUN_02ea4f4c();
        }
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0xc;
    } while (unaff_x21 != uVar8);
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


