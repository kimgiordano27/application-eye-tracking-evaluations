/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<object,-fsOption<fsVersionedType>>$$System.Collections.Generic.IEnumerable<TKey>.GetEnumerator
ENTRY_POINT: 02efdd84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02efde54) */

undefined8
System_Collections_Generic_Dictionary_KeyCollection<object,_fsOption<fsVersionedType>>__System_Collections_Generic_IEnumerable<TKey>_GetEnumerator
          (code *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  void *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  size_t unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  do {
    (*param_1)(param_2);
    if (*(int *)(unaff_x29 + -0xc) < 0) {
      unaff_w22 = unaff_w22 + 1;
      if ((*(uint *)(unaff_x29 + -0x20) & 1) != 0) break;
    }
    else {
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
      if ((uVar3 & 1) == 0) {
        FUN_039dcb94();
        *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
      }
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02efdca4;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02efdca4:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) break;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          lVar5 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02efdd1c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_02efdd1c:
    *(void **)(unaff_x29 + -0x18) = unaff_x19;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x26,unaff_x19,unaff_x24);
    memcpy(unaff_x25,unaff_x26,unaff_x24);
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar2 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x98) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x25;
    }
    puVar4 = *(undefined8 **)(lVar5 + 0x1d8);
    param_2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    param_1 = (code *)puVar4[2];
  } while( true );
  lVar5 = *(long *)(unaff_x29 + -0x28);
  uVar1 = *(undefined4 *)(unaff_x29 + -0x1c);
  if (unaff_x21 != (long *)0x0) {
    lVar6 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02efde44;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02efde44:
    (*(code *)*puVar2)();
  }
  if (*(long *)(lVar5 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(unaff_w22,uVar1);
}


