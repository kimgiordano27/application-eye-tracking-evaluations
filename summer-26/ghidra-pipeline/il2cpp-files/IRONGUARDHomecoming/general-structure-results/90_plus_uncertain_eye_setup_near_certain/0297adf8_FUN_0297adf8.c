/*
FUNCTION_NAME: FUN_0297adf8
ENTRY_POINT: 0297adf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0297b1e4) */

void FUN_0297adf8(long *param_1,undefined8 ****param_2,long param_3)

{
  undefined8 ****__src;
  long *plVar1;
  void *pvVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong __n;
  undefined8 *puVar9;
  void *__s;
  undefined8 *apuStack_a0 [2];
  long local_90;
  undefined8 ***local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  char local_70;
  undefined7 uStack_6f;
  long local_68;
  
                    /* try { // try from 0297ae08 to 02a7ae17 has its CatchHandler @ 0297abd0 */
                    /* try { // try from 0297ae18 to 02a7ae1b has its CatchHandler @ 0297ae1c */
  local_90 = tpidr_el0;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0297ae18 with catch @ 0297ae1c
                       try { // try from 0297ae1c to 02a7ae3f has its CatchHandler @ 0297abd0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0297adf0 with catch @ 0297ae20
                        */
  local_68 = *(long *)(local_90 + 0x28);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0297ad80 with catch @ 0297ae24
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0297adf4 with catch @ 0297ae28
                        */
                    /* try { // try from 0297ae40 to 02a7ae57 has its CatchHandler @ 0297ae8c */
  local_88 = param_2;
  if ((DAT_04830cc0 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04830cc0 = 1;
  }
                    /* try { // try from 0297ae58 to 02a7ae7b has its CatchHandler @ 0297abd0 */
  lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar5 + 0x10) + 0xfc);
  uVar3 = __n + 0xf & 0x1fffffff0;
  puVar7 = (undefined8 *)((long)apuStack_a0 - uVar3);
                    /* try { // try from 0297ae7c to 02a7ae8b has its CatchHandler @ 0297ae8c */
  puVar9 = (undefined8 *)((long)puVar7 - uVar3);
                    /* catch() { ... } // from try @ 0297ae40 with catch @ 0297ae8c
                       catch() { ... } // from try @ 0297ae7c with catch @ 0297ae8c */
  apuStack_a0[1] = (undefined8 *)((long)puVar9 - uVar3);
                    /* try { // try from 0297ae90 to 02a7ae93 has its CatchHandler @ 0297ae9c */
                    /* try { // try from 0297ae94 to 02a7ae9f has its CatchHandler @ 0297abd0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0297ae90 with catch @ 0297ae9c
                        */
  puVar8 = (undefined8 *)((long)apuStack_a0[1] - uVar3);
  __s = (void *)((long)puVar8 - uVar3);
  memset(__s,0,__n);
  plVar1 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x28))();
  pvVar2 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0
                                                                   ) + 0x80) + 0x260);
  memcpy(puVar7,pvVar2,__n);
  lVar5 = *(long *)(param_3 + 0x20);
  __src = param_2;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
    __src = &local_88;
  }
  memcpy(puVar9,__src,__n);
  if (plVar1 == (long *)0x0) {
LAB_0297b1dc:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  local_80 = puVar7;
  puStack_78 = puVar9;
  if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
    local_80 = (undefined8 *)*puVar7;
    puStack_78 = (undefined8 *)*puVar9;
  }
  lVar5 = *(long *)(*plVar1 + 0x1c0);
  (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar1,&local_80,&local_70);
  if (local_70 == '\0') {
    if (param_1 == (long *)0x0) goto LAB_0297b1dc;
    lVar5 = FUN_04224ea4(param_1,0);
    lVar6 = *(long *)(param_3 + 0x20);
    plVar1 = *(long **)(lVar6 + 0xc0);
    if (lVar5 == 0) {
      if (-1 < *(int *)(plVar1[2] + 0x28)) {
        param_2 = &local_88;
      }
      memcpy(puVar7,param_2,__n);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x28)) {
        puVar7 = (undefined8 *)*puVar7;
      }
      lVar5 = *(long *)(*param_1 + 0x840);
      local_80 = puVar7;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,&local_80,puVar7);
    }
    else {
      pvVar2 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(*plVar1 + 0x80) + 0x260);
      memcpy(puVar7,pvVar2,__n);
      memcpy(__s,puVar7,__n);
      lVar5 = *(long *)(param_3 + 0x20);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
        param_2 = &local_88;
      }
      memcpy(puVar9,param_2,__n);
      if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      lVar5 = *(long *)(*param_1 + 0x840);
      local_80 = puVar9;
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,param_1,&local_80,puVar9);
      puVar7 = apuStack_a0[1];
      memcpy(apuStack_a0[1],__s,__n);
      pvVar2 = (void *)thunk_FUN_01ee7388(param_1,*(long *)(**(long **)(*(long *)(param_3 + 0x20) +
                                                                       0xc0) + 0x80) + 0x260);
      memcpy(puVar8,pvVar2,__n);
      lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x58);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
      puVar9 = *(undefined8 **)(lVar5 + 0x50);
      if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
        puVar7 = (undefined8 *)*puVar7;
        puVar8 = (undefined8 *)*puVar8;
      }
      local_80 = puVar7;
      puStack_78 = puVar8;
      (*(code *)puVar9[2])(*puVar9,puVar9,0,&local_80,&local_70);
      plVar1 = (long *)CONCAT71(uStack_6f,local_70);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_041d4560(plVar1,param_1,0);
      (**(code **)(*param_1 + 0x198))(param_1,plVar1,*(undefined8 *)(*param_1 + 0x1a0));
      lVar5 = *plVar1;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0297b198;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar1,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0297b198:
      (*(code *)*puVar8)(plVar1,puVar8[1]);
    }
  }
  if (*(long *)(local_90 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


