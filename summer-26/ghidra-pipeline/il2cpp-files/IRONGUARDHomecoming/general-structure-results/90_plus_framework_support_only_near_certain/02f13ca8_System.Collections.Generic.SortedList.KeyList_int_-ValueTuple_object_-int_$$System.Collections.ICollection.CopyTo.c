/*
FUNCTION_NAME: System.Collections.Generic.SortedList.KeyList<int,-ValueTuple<object,-int>>$$System.Collections.ICollection.CopyTo
ENTRY_POINT: 02f13ca8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02f14164) */

void System_Collections_Generic_SortedList_KeyList<int,_ValueTuple<object,_int>>__System_Collections_ICollection_CopyTo
               (void *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  size_t unaff_x25;
  code *pcVar10;
  long *plVar11;
  int iVar12;
  long unaff_x29;
  
  memset(param_1,0,unaff_x25);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar5 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
  if ((uVar1 & 1) == 0) {
    FUN_01ecaf44(lVar5);
  }
  (*pcVar10)();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(unaff_x19 + 0x20));
  }
  FUN_01bc52e4();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  piVar4 = (int *)thunk_FUN_01ee7388();
  iVar12 = *piVar4;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  if (1 < iVar12) {
    piVar4 = (int *)thunk_FUN_01ee7388();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    iVar12 = *piVar4;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    FUN_01f08890(lVar5,iVar12 + -1);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44(*(long *)(unaff_x19 + 0x20));
    }
  }
  FUN_01bc5360();
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar8 = *unaff_x24;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == lVar5) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02f13e84;
      }
      uVar9 = uVar9 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_02f13e84:
  plVar7 = (long *)(*(code *)*puVar6)();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar12 = 0;
  do {
    lVar5 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02f13ef0;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02f13ef0:
    uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_02f14118;
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 == 0) goto LAB_02f140f0;
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x38);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar4 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar5) {
          lVar5 = lVar8 + (long)*piVar4 * 0x10 + 0x138;
          goto LAB_02f13f74;
        }
        uVar9 = uVar9 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar9 != 0);
    }
    lVar5 = FUN_01ecb238(plVar7,lVar5,0);
LAB_02f13f74:
    *(void **)(unaff_x29 + -0x10) = unaff_x22;
    lVar5 = *(long *)(lVar5 + 8);
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar7,unaff_x29 + -0x10);
    memcpy(unaff_x23,unaff_x22,unaff_x21);
    if (iVar12 == 0) {
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
      puVar6 = (undefined8 *)thunk_FUN_01ee7388();
      plVar11 = (long *)*puVar6;
      memcpy(unaff_x22,unaff_x23,unaff_x21);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = iVar12 - 1;
      if (*(uint *)(plVar11 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar11 + (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar2 + 0x20),
             unaff_x22,unaff_x21);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar11 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar5,(long)plVar11 +
                         (ulong)*(uint *)(*plVar11 + 0x104) * (long)(int)uVar2 + 0x20);
    }
    iVar12 = iVar12 + 1;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar4 = piVar4 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_02f1410c;
    }
  }
LAB_02f140f0:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02f1410c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_02f14118:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


