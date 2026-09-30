/*
FUNCTION_NAME: UnityEngine.UIElements.BaseCompositeField<Vector2,-object,-float>$$UpdateDisplay
ENTRY_POINT: 025fff24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026001c0) */

void UnityEngine_UIElements_BaseCompositeField<Vector2,_object,_float>__UpdateDisplay(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar18;
  
  *unaff_x20 = unaff_x21;
  thunk_FUN_01f51358();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *unaff_x19;
  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_1__) {
        puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_025fff84;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_01ecb238();
LAB_025fff84:
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar9 = (long *)(*(code *)*puVar8)();
  puVar7 = Method_UnityEngine_Rendering_DebugFrameTiming_<RegisterDebugUI>b__17_10__;
  puVar6 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_TryGetScreenClearColor__;
  puVar5 = Method_UnityEngine_Rendering_DebugDisplaySettingsPanel_AddWidget__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto 
          UnityEngine_UIElements_BaseCompositeField<Vector2,_object,_float>__SetValueWithoutNotify;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
UnityEngine_UIElements_BaseCompositeField<Vector2,_object,_float>__SetValueWithoutNotify:
    uVar15 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar12 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 == 0) goto LAB_02600168;
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_02600070;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar7,0);
LAB_02600070:
    lVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (lVar12 != 0) {
      uVar10 = thunk_FUN_01ecaf38(lVar12,0);
      uVar18 = *(undefined8 *)puVar5;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar18 = FUN_03579868(uVar18,0);
      uVar15 = FUN_03582560(uVar10,uVar18,0);
      if ((uVar15 & 1) == 0) {
        lVar11 = *unaff_x20;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)puVar6;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          plVar14 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar14 = lVar12;
          thunk_FUN_01f51358(plVar14,lVar12);
        }
        else {
          FUN_030f2bb4(lVar11,lVar12,
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
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02600184;
    }
  }
LAB_02600168:
  puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_02600184:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return;
}


