/*
FUNCTION_NAME: FUN_0412bce8
ENTRY_POINT: 0412bce8
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


/* WARNING: Removing unreachable block (ram,0x0412c004) */

void FUN_0412bce8(long param_1,long param_2,long param_3,uint param_4)

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
  
                    /* try { // try from 0412bd14 to 0422bd4b has its CatchHandler @ 0412bd14
                       catch() { ... } // from try @ 0412bd14 with catch @ 0412bd14
                       catch() { ... } // from try @ 0412bd5c with catch @ 0412bd14
                       catch() { ... } // from try @ 0412bd90 with catch @ 0412bd14
                       catch() { ... } // from try @ 0412bdb8 with catch @ 0412bd14 */
  if ((DAT_048407b2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 0412bd4c to 0422bd5b has its CatchHandler @ 0412bd74 */
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Text>__);
                    /* try { // try from 0412bd5c to 0422bd8b has its CatchHandler @ 0412bd14 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_048407b2 = 1;
  }
  *(long *)(param_1 + 0x10) = param_2;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0412bd4c with catch @ 0412bd74
                        */
  thunk_FUN_01f51358((long *)(param_1 + 0x10),param_2);
  if ((param_3 == 0) || (plVar5 = (long *)FUN_041a7930(param_3,0), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 0412bd8c to 0422bd8f has its CatchHandler @ 0412bdac */
                    /* try { // try from 0412bd90 to 0422bdaf has its CatchHandler @ 0412bd14 */
  lVar9 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
                    /* catch() { ... } // from try @ 0412bd8c with catch @ 0412bdac */
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
                    /* try { // try from 0412bdb0 to 0422bdb7 has its CatchHandler @ 0412bdcc */
                    /* try { // try from 0412bdb8 to 0422bdc3 has its CatchHandler @ 0412bd14 */
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0412bde4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
                    /* try { // try from 0412bdc4 to 0422bdcb has its CatchHandler @ 0412bdcc */
    } while (uVar10 != 0);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0412bdb0 with catch @ 0412bdcc
                       catch(type#2 @ 00000000) { ... } // from try @ 0412bdc4 with catch @ 0412bdcc
                        */
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                        ,0);
LAB_0412bde4:
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar4 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar12 = 0;
  do {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0412be60;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0412be60:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) == 0) goto LAB_0412bf80;
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0412bebc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar4,0);
LAB_0412bebc:
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
    FUN_01f08a3c();
  }
  plVar8 = (long *)FUN_0422bed0(lVar9,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4),0);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                     + 0x130);
    if (bVar1 <= *(byte *)(*plVar8 + 0x130)) {
      if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__)
      {
        plVar8 = (long *)0x0;
      }
      goto LAB_0412bf70;
    }
  }
  plVar8 = (long *)0x0;
LAB_0412bf70:
  FUN_0412d6c0(param_1,lVar9,plVar8,param_4 & 1);
LAB_0412bf80:
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0412bfd4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0412bfd4:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


