/*
FUNCTION_NAME: System.Collections.Generic.SortedList.KeyList<int,-ValueTuple<object,-int>>$$IndexOf
ENTRY_POINT: 02f13f58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f14164) */

void System_Collections_Generic_SortedList_KeyList<int,_ValueTuple<object,_int>>__IndexOf(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *plVar7;
  int unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02f13f58:
  lVar2 = FUN_01ecb238();
  do {
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (unaff_w27 == 0) {
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      FUN_01f08810();
    }
    else {
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
      }
      puVar3 = (undefined8 *)thunk_FUN_01ee7388();
      plVar7 = (long *)*puVar3;
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = unaff_w27 - 1;
      if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20),
             unaff_x22,unaff_x21);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar2,(long)plVar7 + (ulong)*(uint *)(*plVar7 + 0x104) * (long)(int)uVar1 + 0x20)
      ;
    }
    unaff_w27 = unaff_w27 + 1;
    lVar2 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f13ef0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02f13ef0:
    uVar5 = (*(code *)*puVar3)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x24 == (long *)0x0) goto LAB_02f14118;
      lVar2 = *unaff_x24;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 == 0) goto LAB_02f140f0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar4 = *unaff_x24;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 == 0) goto code_r0x02f13f58;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != lVar2) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto code_r0x02f13f58;
    }
    lVar2 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_02f1410c;
    }
  }
LAB_02f140f0:
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_02f1410c:
  (*(code *)*puVar3)();
LAB_02f14118:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


