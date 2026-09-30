/*
FUNCTION_NAME: System.Collections.Generic.SortedList.KeyList<int,-ValueTuple<object,-int>>$$Clear
ENTRY_POINT: 02f13c0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f14164) */

void System_Collections_Generic_SortedList_KeyList<int,_ValueTuple<object,_int>>__Clear(void)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  undefined1 *__src;
  undefined1 *__s;
  long *unaff_x24;
  code *pcVar11;
  long *plVar12;
  int iVar13;
  long unaff_x29;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  *(undefined1 *)(unaff_x21 + 0x94c) = 1;
  lVar8 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar4 = lVar8;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  uVar10 = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  uVar9 = uVar10 + 0xf & 0x1fffffff0;
  uVar1 = *(uint *)(**(long **)(lVar4 + 0xc0) + 0xfc);
  __src = &stack0x00000000 + -uVar9;
  __s = __src + -uVar9;
  memset(__s,0,uVar10);
  memset(unaff_x20,0,(ulong)uVar1);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  uVar2 = *(ushort *)(lVar8 + 0x135);
  lVar4 = lVar8;
  if ((uVar2 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
    uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  pcVar11 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x20);
  if ((uVar2 & 1) == 0) {
    FUN_01ecaf44(lVar4);
  }
  (*pcVar11)();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44(*(long *)(unaff_x19 + 0x20));
  }
  FUN_01bc52e4();
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  piVar5 = (int *)thunk_FUN_01ee7388();
  iVar13 = *piVar5;
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  if (1 < iVar13) {
    piVar5 = (int *)thunk_FUN_01ee7388();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    iVar13 = *piVar5;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    FUN_01f08890(lVar4,iVar13 + -1);
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44(*(long *)(unaff_x19 + 0x20));
    }
  }
  FUN_01bc5360();
  if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ecaf44(lVar4);
  }
  lVar8 = *unaff_x24;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_02f13e84;
      }
      uVar9 = uVar9 - 1;
      piVar5 = piVar5 + 4;
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
  iVar13 = 0;
  do {
    lVar4 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02f13ef0;
        }
        uVar9 = uVar9 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02f13ef0:
    uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_02f14118;
      lVar4 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 == 0) goto LAB_02f140f0;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          lVar4 = lVar8 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_02f13f74;
        }
        uVar9 = uVar9 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar9 != 0);
    }
    lVar4 = FUN_01ecb238(plVar7,lVar4,0);
LAB_02f13f74:
    *(undefined1 **)(unaff_x29 + -0x10) = __src;
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar7,unaff_x29 + -0x10,__src);
    memcpy(__s,__src,uVar10);
    if (iVar13 == 0) {
      memcpy(__src,__s,uVar10);
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
      plVar12 = (long *)*puVar6;
      memcpy(__src,__s,uVar10);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = iVar13 - 1;
      if (*(uint *)(plVar12 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      memcpy((void *)((long)plVar12 + (ulong)*(uint *)(*plVar12 + 0x104) * (long)(int)uVar1 + 0x20),
             __src,uVar10);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      if (*(uint *)(plVar12 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      FUN_01f087b0(lVar4,(long)plVar12 +
                         (ulong)*(uint *)(*plVar12 + 0x104) * (long)(int)uVar1 + 0x20,__src);
    }
    iVar13 = iVar13 + 1;
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar5 = piVar5 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
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


