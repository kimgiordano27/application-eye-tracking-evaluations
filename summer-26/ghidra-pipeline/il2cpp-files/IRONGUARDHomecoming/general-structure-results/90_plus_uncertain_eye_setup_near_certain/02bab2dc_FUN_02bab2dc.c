/*
FUNCTION_NAME: FUN_02bab2dc
ENTRY_POINT: 02bab2dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02bab78c) */

void FUN_02bab2dc(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  void *__src;
  undefined8 uVar11;
  undefined8 local_138;
  undefined1 auStack_130 [72];
  undefined1 auStack_e8 [72];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
                    /* catch() { ... } // from try @ 02bab314 with catch @ 02bab2dc
                       catch() { ... } // from try @ 02bab340 with catch @ 02bab2dc
                       catch() { ... } // from try @ 02bab374 with catch @ 02bab2dc */
                    /* try { // try from 02bab30c to 02cab313 has its CatchHandler @ 02bab324 */
  if ((DAT_04831385 & 1) == 0) {
                    /* try { // try from 02bab314 to 02cab33b has its CatchHandler @ 02bab2dc */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02bab30c with catch @ 02bab324
                        */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
                    /* try { // try from 02bab33c to 02cab33f has its CatchHandler @ 02bab368 */
    DAT_04831385 = 1;
  }
                    /* try { // try from 02bab340 to 02cab36b has its CatchHandler @ 02bab2dc */
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar5 = 0;
  if (param_2 != (long *)0x0) {
    uVar5 = param_1;
  }
  local_60 = 0;
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
                    /* catch() { ... } // from try @ 02bab33c with catch @ 02bab368 */
                    /* try { // try from 02bab36c to 02cab373 has its CatchHandler @ 02bab388 */
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 02bab374 to 02cab37f has its CatchHandler @ 02bab2dc */
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *param_2;
                    /* try { // try from 02bab380 to 02cab387 has its CatchHandler @ 02bab388 */
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02bab36c with catch @ 02bab388
                       catch(type#2 @ 00000000) { ... } // from try @ 02bab380 with catch @ 02bab388
                        */
                    /* try { // try from 02bab38c to 02cab413 has its CatchHandler @ 02bab38c
                       catch() { ... } // from try @ 02bab38c with catch @ 02bab38c
                       catch() { ... } // from try @ 02bab7c8 with catch @ 02bab38c
                       catch() { ... } // from try @ 02bab814 with catch @ 02bab38c */
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bab3d0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_02bab3d0:
    uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  FUN_02bab230(uVar5,uVar3,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar5 = thunk_FUN_01ecaf38(param_2,0);
                    /* try { // try from 02bab414 to 02cab483 has its CatchHandler @ 02bab7f4 */
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar9 = FUN_03582560(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_2[3];
    if (lVar7 != 0) {
                    /* try { // try from 02bab4b0 to 02cab51f has its CatchHandler @ 02bab7f0 */
      uVar9 = 0;
      __src = (void *)(lVar7 + 0x30);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)((long)__src + -0x10)) {
          uVar5 = *(undefined8 *)((long)__src + -8);
          memcpy(auStack_e8,__src,0x48);
          uVar11 = *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                  0x80) + 0x20) + 0xc0) + 0xf8);
          memcpy(&local_138,auStack_e8,0x48);
          FUN_02bac7e4(param_1,uVar5,&local_138,2,uVar11);
        }
        uVar9 = uVar9 + 1;
        __src = (void *)((long)__src + 0x58);
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02bab594;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar7,0);
LAB_02bab594:
  plVar6 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bab604;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02bab604:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bab67c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
LAB_02bab67c:
    (*(code *)*puVar4)(&local_138,plVar6,puVar4[1]);
    uVar5 = local_138;
    memcpy(&local_a0,auStack_130,0x48);
    uVar11 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x80) +
                                  0x20) + 0xc0) + 0xf8);
    memcpy(&local_138,&local_a0,0x48);
    FUN_02bac7e4(param_1,uVar5,&local_138,2,uVar11);
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02bab740;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02bab740:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


