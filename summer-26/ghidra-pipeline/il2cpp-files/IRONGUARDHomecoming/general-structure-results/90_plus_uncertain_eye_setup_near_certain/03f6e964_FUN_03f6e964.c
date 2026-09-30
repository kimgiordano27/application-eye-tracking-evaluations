/*
FUNCTION_NAME: FUN_03f6e964
ENTRY_POINT: 03f6e964
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x03f6edb4) */

long FUN_03f6e964(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  puVar4 = Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalCameraData>__;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__;
  puVar2 = Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__;
  if ((DAT_0483b57d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<VideoPlayer>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<Wit>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<UniversalAdditionalCameraData>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<UnityAudioSystem>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04581128);
    thunk_FUN_01efb3a4(PTR_DAT_04581130);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04581138);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04581140);
    thunk_FUN_01efb3a4(PTR_DAT_04581148);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__);
    DAT_0483b57d = 1;
  }
  puVar5 = PTR_DAT_04581138;
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_02b6aa68(lVar8,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar9 = (long *)FUN_023c3ca4(*(undefined8 *)puVar5);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *plVar9;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04581128) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03f6eaec;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_04581128,0);
LAB_03f6eaec:
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar7 = PTR_DAT_04581130;
  puVar6 = Method_UnityEngine_GameObject_AddComponent<Wit>__;
  puVar5 = Method_UnityEngine_GameObject_AddComponent<VideoPlayer>__;
  puVar4 = Method_Unity_Collections_ConcurrentMask_TryFree<Long1024>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03f6eb7c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03f6eb7c:
    uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return lVar8;
      }
      lVar12 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_03f6ed40;
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar9;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
          puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_03f6ebd8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar7,0);
LAB_03f6ebd8:
    lVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = *(undefined8 *)(lVar12 + 0x10);
    uVar1 = *(undefined8 *)(lVar12 + 0x18);
    uVar13 = FUN_02b6b4d8(lVar8,uVar11,*(undefined8 *)puVar6);
    if ((uVar13 & 1) == 0) {
      FUN_02b6b2e4(lVar8,uVar11,uVar1,*(undefined8 *)puVar5);
    }
    else {
      lVar12 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,5);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_04581140;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar12 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar12 + 0x28) = uVar11;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x28),uVar11);
      if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_04581148;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar12 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar12 + 0x38) = uVar1;
      thunk_FUN_01f51358((undefined8 *)(lVar12 + 0x38),uVar1);
      if (*(uint *)(lVar12 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)puVar4;
      thunk_FUN_01f51358();
      uVar11 = FUN_0340efe8(lVar12,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(uVar11,0);
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03f6ed5c;
    }
  }
LAB_03f6ed40:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03f6ed5c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return lVar8;
}


