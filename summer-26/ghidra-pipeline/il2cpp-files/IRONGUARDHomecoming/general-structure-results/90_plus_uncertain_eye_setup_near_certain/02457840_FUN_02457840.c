/*
FUNCTION_NAME: FUN_02457840
ENTRY_POINT: 02457840
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02457bfc) */

long * FUN_02457840(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong __n;
  undefined1 *__src;
  undefined1 *__dest;
  undefined1 *__s;
  uint uVar10;
  undefined1 auStack_80 [8];
  long local_78;
  undefined1 *local_70;
  long local_68;
  
  local_78 = tpidr_el0;
  local_68 = *(long *)(local_78 + 0x28);
  lVar9 = *(long *)(param_2 + 0x38);
  if (lVar9 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    lVar9 = *(long *)(param_2 + 0x38);
    if (lVar9 == 0) {
      FUN_01ecafa0(param_2);
      lVar9 = *(long *)(param_2 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar9 + 0x40) + 0xfc);
                    /* try { // try from 024578b4 to 025578b7 has its CatchHandler @ 024578c0 */
                    /* try { // try from 024578b8 to 02557903 has its CatchHandler @ 02457418 */
  uVar7 = __n + 0xf & 0x1fffffff0;
                    /* catch() { ... } // from try @ 024578b4 with catch @ 024578c0 */
  __src = auStack_80 + -uVar7;
                    /* catch() { ... } // from try @ 0245770c with catch @ 024578c4 */
                    /* catch() { ... } // from try @ 024576c8 with catch @ 024578c8 */
                    /* catch() { ... } // from try @ 0245777c with catch @ 024578cc */
  __dest = __src + -uVar7;
                    /* catch() { ... } // from try @ 02457740 with catch @ 024578d0 */
                    /* catch() { ... } // from try @ 02457688 with catch @ 024578d4 */
                    /* catch() { ... } // from try @ 024576a4 with catch @ 024578d8 */
  __s = __dest + -uVar7;
                    /* catch() { ... } // from try @ 02457794 with catch @ 024578dc */
                    /* catch() { ... } // from try @ 02457664 with catch @ 024578e0 */
                    /* catch() { ... } // from try @ 02457640 with catch @ 024578e4 */
  memset(__s,0,__n);
  uVar2 = (*(code *)**(undefined8 **)(lVar9 + 8))(param_1);
  lVar9 = *(long *)(*(long *)(param_2 + 0x38) + 0x18);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar9);
  }
  plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(param_2 + 0x38) + 0x10))(uVar2);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = **(long **)(param_2 + 0x38);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  lVar6 = *param_1;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar9) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_024579b0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_1,lVar9,0);
LAB_024579b0:
  plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar10 = 0;
  do {
    lVar9 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02457a1c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_02457a1c:
    uVar7 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_02457bac;
      lVar9 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 == 0) goto LAB_02457b84;
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *(long *)(*(long *)(param_2 + 0x38) + 0x30);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar6 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          lVar9 = lVar6 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02457a90;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar9 = FUN_01ecb238(plVar5,lVar9,0);
LAB_02457a90:
    lVar9 = *(long *)(lVar9 + 8);
    local_70 = __src;
    (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar5,&local_70,__src);
    memcpy(__s,__src,__n);
    memcpy(__dest,__s,__n);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(plVar3 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar6 = (long)(int)uVar10;
    memcpy((void *)((long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * lVar6 + 0x20),__dest,__n);
    lVar9 = *(long *)(*(long *)(param_2 + 0x38) + 0x40);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44();
    }
    if (*(uint *)(plVar3 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar10 = uVar10 + 1;
    FUN_01f087b0(lVar9,(long)plVar3 + (ulong)*(uint *)(*plVar3 + 0x104) * lVar6 + 0x20,__dest);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02457ba0;
    }
  }
LAB_02457b84:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_02457ba0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_02457bac:
  if (*(long *)(local_78 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar3;
}


