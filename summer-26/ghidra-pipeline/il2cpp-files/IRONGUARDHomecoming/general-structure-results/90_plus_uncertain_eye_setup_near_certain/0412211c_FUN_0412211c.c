/*
FUNCTION_NAME: FUN_0412211c
ENTRY_POINT: 0412211c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04122478) */

void FUN_0412211c(undefined1 param_1 [16],undefined8 param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar3 = Method_System_DateTimeOffset_System_IComparable_CompareTo__;
  if ((DAT_04840743 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458a168);
    thunk_FUN_01efb3a4(PTR_DAT_0458a198);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTimeOffset_System_IComparable_CompareTo__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a190);
    thunk_FUN_01efb3a4(Method_System_Char_Parse__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_04840743 = 1;
  }
  plVar5 = (long *)thunk_FUN_01f116d0(param_4,*(undefined8 *)puVar3);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar8 = *plVar5;
  lVar11 = *(long *)(param_3 + 0x10);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0412220c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0412220c:
  uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((lVar11 == 0) ||
     (lVar8 = FUN_030f28e4(lVar11,uVar4,*(undefined8 *)PTR_DAT_0458a190), param_4 == (long *)0x0)) {
LAB_04122470:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar7 = (long *)FUN_041d470c(param_4,0);
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
  if (plVar7 == (long *)0x0) {
    return;
  }
  bVar1 = *(byte *)(*(long *)
                     Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                   + 0x130);
  if (*(byte *)(*plVar7 + 0x130) < bVar1) {
    return;
  }
  if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)
       Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__) {
    return;
  }
  lVar11 = *plVar5;
  uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
        puVar6 = (undefined8 *)(lVar11 + (long)(*piVar10 + 5) * 0x10 + 0x138);
        goto LAB_041222d4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,5);
LAB_041222d4:
  uVar12 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if (*(int *)(*(long *)PTR_DAT_0458a168 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = FUN_04122530(uVar12,param_2,plVar7);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (lVar8 == 0) goto LAB_04122470;
  lVar11 = *(long *)(lVar8 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  if (*(int *)(lVar8 + 0x30) < 1) {
    return;
  }
  plVar5 = (long *)FUN_041d470c(param_4,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if (bVar1 <= *(byte *)(*plVar5 + 0x130)) {
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2) {
        plVar5 = (long *)0x0;
      }
      goto LAB_04122370;
    }
  }
  plVar5 = (long *)0x0;
LAB_04122370:
  plVar5 = (long *)FUN_0422f9c4(lVar11,plVar5,0);
  if (plVar5 != (long *)0x0) {
    uVar4 = *(undefined4 *)(lVar8 + 0x30);
    if (*(int *)(*(long *)PTR_DAT_0458a198 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*param_4 != *(long *)Method_System_Char_Parse__) {
      param_4 = (long *)0x0;
    }
    plVar7 = (long *)FUN_041e516c(param_4,uVar4,0);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_041d4560(plVar7,plVar5,0);
    (**(code **)(*plVar5 + 0x198))(plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x1a0));
    lVar8 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04122448;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_04122448:
    (*(code *)*puVar6)(plVar7,puVar6[1]);
  }
  return;
}


