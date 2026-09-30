/*
FUNCTION_NAME: FUN_02709c68
ENTRY_POINT: 02709c68
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0270a07c) */

void FUN_02709c68(long param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****__src;
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ulong __n;
  undefined8 *puVar8;
  undefined8 *__dest;
  void *__s;
  undefined8 *puVar9;
  long *plVar10;
  ulong __n_00;
  long lVar11;
  long local_90;
  undefined8 ***local_88;
  undefined8 ***pppuStack_80;
  undefined8 *local_78;
  long *local_70;
  long local_68;
  
                    /* try { // try from 02709c78 to 02809c7b has its CatchHandler @ 02709c8c */
                    /* try { // try from 02709c7c to 02809c7f has its CatchHandler @ 02709c84 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02709b10 with catch @ 02709c80
                       try { // try from 02709c80 to 02809ca3 has its CatchHandler @ 02709a48 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02709c7c with catch @ 02709c84
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02709ad8 with catch @ 02709c88
                        */
  local_90 = tpidr_el0;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02709c78 with catch @ 02709c8c
                        */
  local_68 = *(long *)(local_90 + 0x28);
                    /* try { // try from 02709ca4 to 02809cbb has its CatchHandler @ 02709d04 */
  local_88 = param_2;
  pppuStack_80 = param_2;
  if ((DAT_048301ff & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* try { // try from 02709cbc to 02809cf3 has its CatchHandler @ 02709a48 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_048301ff = 1;
  }
  lVar7 = *(long *)(param_3 + 0x20);
  lVar4 = *(long *)(lVar7 + 0xc0);
  lVar11 = *(long *)(lVar4 + 0x20);
  __n_00 = (ulong)*(uint *)(lVar11 + 0xfc);
  __n = (ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
                    /* try { // try from 02709cf4 to 02809d03 has its CatchHandler @ 02709d04 */
  puVar9 = (undefined8 *)((long)&local_90 - (__n_00 + 0xf & 0x1fffffff0));
                    /* catch() { ... } // from try @ 02709ca4 with catch @ 02709d04
                       catch() { ... } // from try @ 02709cf4 with catch @ 02709d04 */
  uVar5 = __n + 0xf & 0x1fffffff0;
                    /* try { // try from 02709d08 to 02809d0b has its CatchHandler @ 02709d14 */
  puVar8 = (undefined8 *)((long)puVar9 - uVar5);
                    /* try { // try from 02709d0c to 02809d17 has its CatchHandler @ 02709a48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02709d08 with catch @ 02709d14
                        */
  __dest = (undefined8 *)((long)puVar8 - uVar5);
  __s = (void *)((long)__dest - uVar5);
  memset(__s,0,__n);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
    __src = (undefined8 ****)local_88;
    if (-1 < *(int *)(lVar11 + 0x28)) {
      __src = &pppuStack_80;
    }
    memcpy(puVar9,__src,__n_00);
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar7 + 0xc0);
      puVar1 = *(undefined8 **)(lVar7 + 0x28);
      if (-1 < *(int *)(*(long *)(lVar7 + 0x20) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      local_78 = puVar9;
      (*(code *)puVar1[2])(*puVar1,puVar1,lVar4,&local_78,&local_70);
      if (local_70 != (long *)0x0) {
        lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar7 = *local_70;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar4) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_02709e08;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(local_70,lVar4,0);
LAB_02709e08:
        plVar3 = (long *)(*(code *)*puVar9)(local_70,puVar9[1]);
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar4 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_02709e70;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar3,*(long *)puVar2,0);
LAB_02709e70:
          uVar5 = (*(code *)*puVar9)(plVar3,puVar9[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar3 == (long *)0x0) goto LAB_0270a038;
            lVar4 = *plVar3;
            uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar5 == 0) goto LAB_0270a010;
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_02709ff8;
          }
          lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x40);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44(lVar4);
          }
          lVar7 = *plVar3;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar4) {
                lVar4 = lVar7 + (long)*piVar6 * 0x10 + 0x138;
                goto LAB_02709ee8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_01ecb238(plVar3,lVar4,0);
LAB_02709ee8:
          lVar4 = *(long *)(lVar4 + 8);
          local_78 = puVar8;
          (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar3,&local_78,puVar8);
          memcpy(__s,puVar8,__n);
          plVar10 = *(long **)(param_1 + 0x18);
          memcpy(__dest,__s,__n);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          lVar4 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44(lVar4);
            lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
          }
          puVar9 = __dest;
          if (-1 < *(int *)(*(long *)(lVar7 + 0x50) + 0x28)) {
            puVar9 = (undefined8 *)*__dest;
          }
          lVar7 = *plVar10;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar4) {
                lVar4 = lVar7 + (long)*piVar6 * 0x10 + 0x138;
                goto LAB_02709fb0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar4 = FUN_01ecb238(plVar10,lVar4,0);
LAB_02709fb0:
          lVar4 = *(long *)(lVar4 + 8);
          local_78 = puVar9;
          (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar10,&local_78,puVar9);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_02709ff8:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0270a02c;
    }
  }
LAB_0270a010:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar3,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0270a02c:
  (*(code *)*puVar8)(plVar3,puVar8[1]);
LAB_0270a038:
  if (*(long *)(local_90 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


