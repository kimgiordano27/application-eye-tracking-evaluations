/*
FUNCTION_NAME: FUN_030beb94
ENTRY_POINT: 030beb94
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


/* WARNING: Removing unreachable block (ram,0x030bee3c) */

void FUN_030beb94(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_04831c40 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 030bebd8 to 031bec1b has its CatchHandler @ 030bec80 */
    DAT_04831c40 = 1;
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
      if (*(long *)(piVar10 + -2) == lVar6) {
                    /* try { // try from 030bec4c to 031bec4f has its CatchHandler @ 030bec7c */
                    /* try { // try from 030bec50 to 031bec63 has its CatchHandler @ 030bec84 */
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_030bec54;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238(param_2,lVar6,0);
LAB_030bec54:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                    /* try { // try from 030bec64 to 031bec73 has its CatchHandler @ 030bea20 */
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030bec74 with catch @ 030bec78
                       try { // try from 030bec78 to 031bec9b has its CatchHandler @ 030bea20 */
    lVar6 = *plVar5;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030bec4c with catch @ 030bec7c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030bebd8 with catch @ 030bec80
                        */
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 030bec50 with catch @ 030bec84
                        */
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_030becc4;
        }
                    /* try { // try from 030bec9c to 031becb3 has its CatchHandler @ 030bece8 */
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
                    /* try { // try from 030becb4 to 031becd7 has its CatchHandler @ 030bea20 */
LAB_030becc4:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 == 0) goto LAB_030bede8;
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
                    /* try { // try from 030becd8 to 031bece7 has its CatchHandler @ 030bece8 */
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 030bec9c with catch @ 030bece8
                       catch() { ... } // from try @ 030becd8 with catch @ 030bece8 */
                    /* try { // try from 030becec to 031becef has its CatchHandler @ 030becf8 */
      lVar6 = FUN_01ecaf44(lVar6);
                    /* try { // try from 030becf0 to 031becfb has its CatchHandler @ 030bea20 */
    }
    lVar7 = *plVar5;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030becec with catch @ 030becf8
                        */
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_030bed3c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar6,0);
LAB_030bed3c:
    uVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = *(uint *)(param_1 + 0x18);
    if (uVar8 == *(uint *)(lVar6 + 0x18)) {
      FUN_030bd62c(param_1,uVar8 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
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
    *(undefined4 *)(lVar6 + (long)(int)uVar8 * 4 + 0x20) = uVar3;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_030bee04;
    }
  }
LAB_030bede8:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_030bee04:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


