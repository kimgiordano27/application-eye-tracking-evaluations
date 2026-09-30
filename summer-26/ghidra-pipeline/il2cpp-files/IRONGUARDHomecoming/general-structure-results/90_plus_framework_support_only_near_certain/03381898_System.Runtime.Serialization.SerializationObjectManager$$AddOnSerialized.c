/*
FUNCTION_NAME: System.Runtime.Serialization.SerializationObjectManager$$AddOnSerialized
ENTRY_POINT: 03381898
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 144
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0338190c) */

uint System_Runtime_Serialization_SerializationObjectManager__AddOnSerialized
               (undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 in_stack_00000000;
  
  puVar5 = Method_UnityEngine_GameObject_TryGetComponent<UniversalAdditionalCameraData>__;
  if (param_2 != 1) {
    FUN_02c7ab68(&stack0x00000020,*(undefined8 *)Method_Scene_GameUIController_<Start>b__30_0__);
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar10 = (long *)__cxa_begin_catch();
  lVar14 = *plVar10;
  __cxa_end_catch();
  FUN_02c7ab68(&stack0x00000020,*(undefined8 *)Method_Scene_GameUIController_<Start>b__30_0__);
  if (lVar14 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar14);
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    uVar7 = FUN_02b6b184(*(long *)(unaff_x19 + 0x40),
                         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<MeshFilter>__);
    lVar14 = *(long *)puVar5;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar14);
      lVar14 = *(long *)puVar5;
    }
    lVar13 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x18);
    if (lVar13 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar14);
        lVar14 = *(long *)puVar5;
      }
      uVar15 = **(undefined8 **)(lVar14 + 0xb8);
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__
                                 );
      FUN_02e6c0a0(lVar13,uVar15,
                   *(undefined8 *)Method_UnityEngine_InputSystem_LowLevel_GamepadState__ctor__,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
      *plVar10 = lVar13;
      thunk_FUN_01f51358(plVar10,lVar13);
    }
    plVar10 = (long *)FUN_0230b6f4(uVar7,lVar13,
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponentsInParent<Canvas>__);
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
            puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_033815e0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__,0
                           );
LAB_033815e0:
      plVar10 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
      puVar6 = Method_DefaultNamespace_UI_GameplayUI_Refresh__;
      puVar4 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
      puVar3 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
      puVar2 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar14 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03381668;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar1,0);
LAB_03381668:
        uVar11 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_033817c4;
          lVar14 = *plVar10;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar11 == 0) goto LAB_0338179c;
          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_03381784;
        }
        lVar14 = *plVar10;
        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_033816c4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
LAB_033816c4:
        lVar14 = (*(code *)*puVar8)(plVar10,puVar8[1]);
        lVar13 = *(long *)puVar5;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar13);
          lVar13 = *(long *)puVar5;
        }
        lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x20);
        if (lVar16 == 0) {
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar13);
            lVar13 = *(long *)puVar5;
          }
          uVar7 = **(undefined8 **)(lVar13 + 0xb8);
          lVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_02a487e4(lVar16,uVar7,*(undefined8 *)puVar6,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
          *plVar9 = lVar16;
          thunk_FUN_01f51358(plVar9,lVar16);
        }
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_030f459c(lVar14,lVar16,*(undefined8 *)puVar4);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03381784:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_033817b8;
    }
  }
LAB_0338179c:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar10,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_033817b8:
  (*(code *)*puVar8)(plVar10,puVar8[1]);
LAB_033817c4:
  return in_stack_00000000._4_4_ & 1;
}


