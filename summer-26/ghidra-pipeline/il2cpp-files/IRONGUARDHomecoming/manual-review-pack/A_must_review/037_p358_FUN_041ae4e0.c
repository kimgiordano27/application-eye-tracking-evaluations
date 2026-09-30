/*
FUNCTION_NAME: FUN_041ae4e0
ENTRY_POINT: 041ae4e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 227
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041ae848) */

void FUN_041ae4e0(undefined8 param_1,long param_2)

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
  
  if ((DAT_04840d4c & 1) == 0) {
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
    DAT_04840d4c = 1;
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
        goto LAB_041ae5d0;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_0458e800,0);
LAB_041ae5d0:
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
          goto LAB_041ae664;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_041ae664:
    uVar14 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar13 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_041ae7f4;
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
          goto Oculus_Voice_Bindings_Android_VoiceSDKImplRequest__set_Immediately;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar7,0);
Oculus_Voice_Bindings_Android_VoiceSDKImplRequest__set_Immediately:
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
LAB_041ae774:
          plVar12 = (long *)0x0;
        }
        else {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_041ae774;
          if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4) {
            plVar12 = (long *)0x0;
          }
        }
        lVar13 = plVar10[0x14];
        if (lVar13 != 0) {
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          (**(code **)(lVar13 + 0x18))
                    (*(undefined8 *)(lVar13 + 0x40),plVar12,*(undefined8 *)(lVar13 + 0x28));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto FUN_041ae810;
    }
  }
LAB_041ae7f4:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
FUN_041ae810:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


