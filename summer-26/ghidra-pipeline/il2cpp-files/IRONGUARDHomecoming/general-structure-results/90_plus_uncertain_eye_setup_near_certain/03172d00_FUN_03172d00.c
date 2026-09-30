/*
FUNCTION_NAME: FUN_03172d00
ENTRY_POINT: 03172d00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03173008) */

void FUN_03172d00(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  undefined1 auStack_1a0 [112];
  undefined1 auStack_130 [112];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  
  if ((DAT_04831cd9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831cd9 = 1;
  }
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_03172de0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar5,0);
LAB_03172de0:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
                    /* try { // try from 03172e08 to 03272e47 has its CatchHandler @ 03172e08
                       catch() { ... } // from try @ 03172e08 with catch @ 03172e08
                       catch() { ... } // from try @ 03172e5c with catch @ 03172e08
                       catch() { ... } // from try @ 03172e98 with catch @ 03172e08
                       catch() { ... } // from try @ 03172ed8 with catch @ 03172e08 */
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    /* try { // try from 03172e48 to 03272e5b has its CatchHandler @ 03172e68 */
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03172e54;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_03172e54:
                    /* try { // try from 03172e5c to 03272e7f has its CatchHandler @ 03172e08 */
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_03172fac;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03172e48 with catch @ 03172e68
                        */
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
                    /* try { // try from 03172e80 to 03272e97 has its CatchHandler @ 03172ed0 */
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 03172e98 to 03272ebf has its CatchHandler @ 03172e08 */
        if (*(long *)(piVar8 + -2) == lVar5) {
                    /* try { // try from 03172ec0 to 03272ecf has its CatchHandler @ 03172ed0 */
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03172ecc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_03172ecc:
                    /* catch() { ... } // from try @ 03172e80 with catch @ 03172ed0
                       catch() { ... } // from try @ 03172ec0 with catch @ 03172ed0 */
                    /* try { // try from 03172ed4 to 03272ed7 has its CatchHandler @ 03172ee0 */
                    /* try { // try from 03172ed8 to 03272ee3 has its CatchHandler @ 03172e08 */
    (*(code *)*puVar3)(auStack_130,plVar4,puVar3[1]);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03172ed4 with catch @ 03172ee0
                        */
    memcpy(&local_c0,auStack_130,0x6c);
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = *(uint *)(param_1 + 0x18);
    if (uVar9 == *(uint *)(lVar5 + 0x18)) {
      FUN_03171390(param_1,uVar9 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
      lVar5 = *(long *)(param_1 + 0x10);
      uVar9 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar9 + 1;
    memcpy(auStack_130,&local_c0,0x6c);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(auStack_1a0,auStack_130,0x6c);
    if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    memcpy((void *)(lVar5 + (long)(int)uVar9 * 0x6c + 0x20),auStack_1a0,0x6c);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03172fc8;
    }
  }
LAB_03172fac:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03172fc8:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


