/*
FUNCTION_NAME: FUN_03042c7c
ENTRY_POINT: 03042c7c
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


/* WARNING: Removing unreachable block (ram,0x03042f2c) */

void FUN_03042c7c(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4,long param_5
                 )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  if ((DAT_04831bb3 & 1) == 0) {
                    /* try { // try from 03042ca4 to 03142cb3 has its CatchHandler @ 03042cb4 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
                    /* catch() { ... } // from try @ 03042c20 with catch @ 03042cb4
                       catch() { ... } // from try @ 03042c4c with catch @ 03042cb4
                       catch() { ... } // from try @ 03042ca4 with catch @ 03042cb4 */
                    /* try { // try from 03042cb8 to 03142cbb has its CatchHandler @ 03042cc4 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 03042cbc to 03142cc7 has its CatchHandler @ 03042a68 */
    DAT_04831bb3 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03042cb8 with catch @ 03042cc4
                        */
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  if (param_4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ecaf44(lVar5);
  }
  lVar6 = *param_4;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar5) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03042d3c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(param_4,lVar5,0);
LAB_03042d3c:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)(param_4,puVar3[1]);
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          uVar11 = param_2;
          goto LAB_03042dac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
    uVar11 = param_2;
LAB_03042dac:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 == 0) goto LAB_03042ed8;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
                    /* try { // try from 03042dd8 to 03142f27 has its CatchHandler @ 03042dd8
                       catch() { ... } // from try @ 03042dd8 with catch @ 03042dd8
                       catch() { ... } // from try @ 03042f38 with catch @ 03042dd8
                       catch() { ... } // from try @ 03043220 with catch @ 03042dd8
                       catch() { ... } // from try @ 0304324c with catch @ 03042dd8
                       catch() { ... } // from try @ 030432a4 with catch @ 03042dd8 */
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03042e24;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_03042e24:
    uVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    lVar5 = *(long *)(param_3 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(param_3 + 0x18);
    param_2 = uVar11;
    if (uVar7 == *(uint *)(lVar5 + 0x18)) {
      FUN_030416ac(param_3,uVar7 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x78));
      uVar7 = *(uint *)(param_3 + 0x18);
      lVar5 = *(long *)(param_3 + 0x10);
      *(uint *)(param_3 + 0x18) = uVar7 + 1;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
      *(uint *)(param_3 + 0x18) = uVar7 + 1;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = lVar5 + (long)(int)uVar7 * 8;
    *(undefined4 *)(lVar5 + 0x20) = uVar10;
    *(int *)(lVar5 + 0x24) = (int)uVar11;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03042ef4;
    }
  }
LAB_03042ed8:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_03042ef4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


