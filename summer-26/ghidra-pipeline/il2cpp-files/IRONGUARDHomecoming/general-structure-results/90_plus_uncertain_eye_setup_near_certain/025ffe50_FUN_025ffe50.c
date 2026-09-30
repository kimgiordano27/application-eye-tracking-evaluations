/*
FUNCTION_NAME: FUN_025ffe50
ENTRY_POINT: 025ffe50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x026001c0) */

void FUN_025ffe50(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  undefined8 uVar19;
  
  if ((DAT_0482fefd & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugDisplaySettingsPanel_AddWidget__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TryGetScreenClearColor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugDisplaySettingsUI_Reset__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_0__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0482fefd = 1;
  }
  plVar18 = (long *)(param_1 + 0x10);
  if (*plVar18 == 0) {
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_0__
                              );
    FUN_030f2380(lVar8,*(undefined8 *)Method_UnityEngine_Rendering_DebugDisplaySettingsUI_Reset__);
    *plVar18 = lVar8;
    thunk_FUN_01f51358(plVar18,lVar8);
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_025fff84;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01ecb238(param_2,*(long *)
                                 Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__
                        ,0);
LAB_025fff84:
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar10 = (long *)(*(code *)*puVar9)(param_2,puVar9[1]);
  puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__;
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TryGetScreenClearColor__;
  puVar5 = Method_UnityEngine_Rendering_DebugDisplaySettingsPanel_AddWidget__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto 
          UnityEngine_UIElements_BaseCompositeField<Vector2,_object,_float>__SetValueWithoutNotify;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar4,0);
UnityEngine_UIElements_BaseCompositeField<Vector2,_object,_float>__SetValueWithoutNotify:
    uVar15 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar10 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar10;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 == 0) goto LAB_02600168;
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar10;
    uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02600070;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar7,0);
LAB_02600070:
    lVar8 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar8 != 0) {
      uVar11 = thunk_FUN_01ecaf38(lVar8,0);
      uVar19 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar19 = FUN_03579868(uVar19,0);
      uVar15 = FUN_03582560(uVar11,uVar19,0);
      if ((uVar15 & 1) == 0) {
        lVar12 = *plVar18;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar16 = *(long *)puVar6;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar14 = lVar8;
          thunk_FUN_01f51358(plVar14,lVar8);
        }
        else {
          FUN_030f2bb4(lVar12,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02600184;
    }
  }
LAB_02600168:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_02600184:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
  return;
}


