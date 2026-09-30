/*
FUNCTION_NAME: FUN_0317cbfc
ENTRY_POINT: 0317cbfc
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


/* WARNING: Removing unreachable block (ram,0x0317ceac) */

void FUN_0317cbfc(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04831ce5 & 1) == 0) {
                    /* try { // try from 0317cc28 to 0327cc2f has its CatchHandler @ 0317cd34 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04831ce5 = 1;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01ecaf44(lVar6);
  }
  lVar7 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
                    /* try { // try from 0317cc8c to 0327cc93 has its CatchHandler @ 0317cd3c */
      if (*(long *)(piVar10 + -2) == lVar6) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0317ccbc;
      }
                    /* try { // try from 0317cc94 to 0327cd13 has its CatchHandler @ 0317ca28 */
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_2,lVar6,0);
LAB_0317ccbc:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar6 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                    /* try { // try from 0317cd20 to 0327cd23 has its CatchHandler @ 0317ca28 */
                    /* try { // try from 0317cd24 to 0327cd27 has its CatchHandler @ 0317cd30 */
                    /* try { // try from 0317cd28 to 0327cd5f has its CatchHandler @ 0317ca28 */
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0317cd2c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* try { // try from 0317cd14 to 0327cd17 has its CatchHandler @ 0317cd44 */
                    /* try { // try from 0317cd18 to 0327cd1b has its CatchHandler @ 0317cd38 */
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
                    /* try { // try from 0317cd1c to 0327cd1f has its CatchHandler @ 0317cd44 */
LAB_0317cd2c:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317cd24 with catch @ 0317cd30
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317cc28 with catch @ 0317cd34
                        */
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317cd18 with catch @ 0317cd38
                        */
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_0317ce58;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317cc8c with catch @ 0317cd3c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317cb4c with catch @ 0317cd40
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317cd14 with catch @ 0317cd44
                       catch(type#1 @ 042b3198) { ... } // from try @ 0317cd1c with catch @ 0317cd44
                        */
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0317cb8c with catch @ 0317cd48
                        */
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar4;
                    /* try { // try from 0317cd60 to 0327cd63 has its CatchHandler @ 0317cd70 */
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0317cd60 with catch @ 0317cd70 */
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0317cda4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_0317cda4:
                    /* try { // try from 0317cda8 to 0327cdcf has its CatchHandler @ 0317cde4 */
    uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = *(uint *)(param_1 + 0x18);
    if (uVar8 == *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 0317cdd0 to 0327cddb has its CatchHandler @ 0317ca28 */
                    /* try { // try from 0317cddc to 0327cde3 has its CatchHandler @ 0317cde4 */
      FUN_0317b610(param_1,uVar8 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0317cda8 with catch @ 0317cde4
                       catch(type#2 @ 00000000) { ... } // from try @ 0317cddc with catch @ 0317cde4
                        */
      uVar8 = *(uint *)(param_1 + 0x18);
      lVar6 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar8 + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = uVar8 + 1;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
    *puVar3 = uVar5;
    thunk_FUN_01f51358(puVar3,0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0317ce74;
    }
  }
LAB_0317ce58:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_0317ce74:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


