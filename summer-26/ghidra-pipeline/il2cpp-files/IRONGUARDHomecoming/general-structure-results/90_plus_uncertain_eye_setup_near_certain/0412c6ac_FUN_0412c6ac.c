/*
FUNCTION_NAME: FUN_0412c6ac
ENTRY_POINT: 0412c6ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0412c9c0) */

void FUN_0412c6ac(long param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  
  if ((DAT_048407b3 & 1) == 0) {
                    /* try { // try from 0412c6d8 to 0422c6e7 has its CatchHandler @ 0412c768 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
                    /* try { // try from 0412c6f8 to 0422c717 has its CatchHandler @ 0412c770 */
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Text>__);
                    /* try { // try from 0412c718 to 0422c71f has its CatchHandler @ 0412c764 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
                    /* try { // try from 0412c720 to 0422c75b has its CatchHandler @ 0412c5f4 */
    DAT_048407b3 = 1;
  }
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_01f51358((long *)(param_1 + 0x10),param_2);
  if ((param_3 == 0) || (plVar5 = (long *)FUN_041a7930(param_3,0), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar5;
                    /* try { // try from 0412c75c to 0422c75f has its CatchHandler @ 0412c76c */
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 0412c760 to 0422c787 has its CatchHandler @ 0412c5f4 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412c718 with catch @ 0412c764
                        */
  if (uVar10 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412c6d8 with catch @ 0412c768
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412c75c with catch @ 0412c76c
                        */
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412c6f8 with catch @ 0412c770
                        */
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0412c7a4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
                    /* try { // try from 0412c788 to 0422c78b has its CatchHandler @ 0412c7b0 */
                    /* try { // try from 0412c78c to 0422c7b3 has its CatchHandler @ 0412c5f4 */
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                        ,0);
LAB_0412c7a4:
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                    /* catch() { ... } // from try @ 0412c788 with catch @ 0412c7b0 */
                    /* try { // try from 0412c7b4 to 0422c7c3 has its CatchHandler @ 0412c7d8 */
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 0412c7c4 to 0422c7cf has its CatchHandler @ 0412c5f4 */
                    /* try { // try from 0412c7d0 to 0422c7d7 has its CatchHandler @ 0412c7d8 */
  iVar12 = 0;
  do {
    lVar9 = *plVar5;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0412c7b4 with catch @ 0412c7d8
                       catch(type#2 @ 00000000) { ... } // from try @ 0412c7d0 with catch @ 0412c7d8
                        */
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0412c820;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0412c820:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) goto LAB_0412c93c;
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
                    /* try { // try from 0412c844 to 0422c917 has its CatchHandler @ 0412c844
                       catch() { ... } // from try @ 0412c844 with catch @ 0412c844
                       catch() { ... } // from try @ 0412c928 with catch @ 0412c844
                       catch() { ... } // from try @ 0412c964 with catch @ 0412c844
                       catch() { ... } // from try @ 0412c988 with catch @ 0412c844
                       catch() { ... } // from try @ 0412c9c0 with catch @ 0412c844 */
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0412c87c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar4,0);
LAB_0412c87c:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    uVar10 = FUN_041ac1d4(param_3,uVar7,0);
    if ((uVar10 & 1) != 0) break;
    iVar12 = iVar12 + 1;
  } while( true );
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = FUN_0422f238(param_2,iVar12,0);
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
  if (*(int *)(*(long *)Method_UnityEngine_Component_GetComponentInChildren<Text>__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0412c9cc to 0422c9d3 has its CatchHandler @ 0412c9d4 */
    FUN_01f08a3c();
  }
  plVar8 = (long *)FUN_0422bed0(lVar9,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4),0);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
                    /* try { // try from 0412c928 to 0422c95f has its CatchHandler @ 0412c844 */
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)
      {
        plVar8 = (long *)0x0;
      }
      goto LAB_0412c930;
    }
  }
  plVar8 = (long *)0x0;
                    /* try { // try from 0412c918 to 0422c927 has its CatchHandler @ 0412c968 */
LAB_0412c930:
  FUN_0412dba4(param_1,lVar9,plVar8);
LAB_0412c93c:
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
                    /* try { // try from 0412c960 to 0422c963 has its CatchHandler @ 0412c96c */
                    /* try { // try from 0412c964 to 0422c983 has its CatchHandler @ 0412c844 */
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                    /* try { // try from 0412c984 to 0422c987 has its CatchHandler @ 0412c9ac */
                    /* try { // try from 0412c988 to 0422c9af has its CatchHandler @ 0412c844 */
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0412c990;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412c918 with catch @ 0412c968
                        */
        uVar10 = uVar10 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412c960 with catch @ 0412c96c
                        */
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0412c990:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
                    /* catch() { ... } // from try @ 0412c984 with catch @ 0412c9ac */
                    /* try { // try from 0412c9b0 to 0422c9bf has its CatchHandler @ 0412c9d4 */
  return;
}


