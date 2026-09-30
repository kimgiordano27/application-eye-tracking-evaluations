/*
FUNCTION_NAME: System.Collections.Generic.SortedList.KeyList<__Il2CppFullySharedGenericType,-__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 02f1402c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f14164) */

void System_Collections_Generic_SortedList_KeyList<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint unaff_w27;
  uint uVar6;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02f1402c:
  lVar2 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  if (*(uint *)(unaff_x25 + 3) <= (uint)unaff_x26) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  FUN_01f087b0(lVar2,(long)unaff_x25 + (ulong)*(uint *)(*unaff_x25 + 0x104) * unaff_x26 + 0x20);
  uVar6 = unaff_w27;
  do {
    unaff_w27 = uVar6 + 1;
    lVar2 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02f13ef0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02f13ef0:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x24 == (long *)0x0) goto LAB_02f14118;
      lVar2 = *unaff_x24;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_02f140f0;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_02f140d8;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x24;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_02f13f74;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_01ecb238();
LAB_02f13f74:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_w27 != 0) break;
    memcpy(unaff_x22,unaff_x23,unaff_x21);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    FUN_01f08810();
    uVar6 = unaff_w27;
  } while( true );
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  puVar1 = (undefined8 *)thunk_FUN_01ee7388();
  unaff_x25 = (long *)*puVar1;
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(uint *)(unaff_x25 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  unaff_x26 = (long)(int)uVar6;
  memcpy((void *)((long)unaff_x25 + (ulong)*(uint *)(*unaff_x25 + 0x104) * unaff_x26 + 0x20),
         unaff_x22,unaff_x21);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  param_1 = *(long *)(lVar2 + 0xc0);
  goto code_r0x02f1402c;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_02f140d8:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02f1410c;
    }
  }
LAB_02f140f0:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02f1410c:
  (*(code *)*puVar1)();
LAB_02f14118:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


