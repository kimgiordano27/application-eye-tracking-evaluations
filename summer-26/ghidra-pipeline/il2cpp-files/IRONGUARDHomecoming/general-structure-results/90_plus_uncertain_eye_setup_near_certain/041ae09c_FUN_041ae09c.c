/*
FUNCTION_NAME: FUN_041ae09c
ENTRY_POINT: 041ae09c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041ae414) */

void FUN_041ae09c(undefined8 param_1,long param_2,undefined4 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04840d4b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_achievementFieldsCallback__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_0458e800);
    thunk_FUN_01efb3a4(PTR_DAT_0458e808);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<Text>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_04840d4b = 1;
  }
  if ((param_2 == 0) || (plVar8 = (long *)FUN_0422f648(param_2,0), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar13 = *plVar8;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0458e800) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_041ae190;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_0458e800,0);
LAB_041ae190:
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar7 = PTR_DAT_0458e808;
  puVar6 = Method_Oculus_Platform_Samples_SimplePlatformSample_DataEntry_achievementFieldsCallback__
  ;
  puVar5 = Method_UnityEngine_Component_GetComponentInChildren<Text>__;
  puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_041ae220;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_041ae220:
    uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_041ae3c0;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar7) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_041ae27c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar7,0);
LAB_041ae27c:
    lVar13 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar10 = (long *)FUN_0422bed0(lVar13,**(undefined4 **)(*(long *)puVar5 + 0xb8),0);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar6)) {
        lVar11 = *(long *)puVar5;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar11 = *(long *)puVar5;
        }
        plVar12 = (long *)FUN_0422bed0(lVar13,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 4),0);
        if (plVar12 == (long *)0x0) {
LAB_041ae330:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_041ae330;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
            plVar12 = (long *)0x0;
          }
        }
        lVar11 = plVar10[0x13];
        if (lVar11 != 0) {
          (**(code **)(lVar11 + 0x18))
                    (*(undefined8 *)(lVar11 + 0x40),plVar12,param_3,*(undefined8 *)(lVar11 + 0x28));
        }
        FUN_0422c0ac(lVar13,**(undefined4 **)(*(long *)puVar5 + 0xb8),0,0);
      }
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_041ae3dc;
    }
  }
LAB_041ae3c0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_041ae3dc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


