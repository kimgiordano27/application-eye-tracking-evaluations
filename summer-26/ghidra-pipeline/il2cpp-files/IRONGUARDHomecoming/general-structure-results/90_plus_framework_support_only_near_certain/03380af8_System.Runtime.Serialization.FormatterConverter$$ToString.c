/*
FUNCTION_NAME: System.Runtime.Serialization.FormatterConverter$$ToString
ENTRY_POINT: 03380af8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03380efc) */

uint System_Runtime_Serialization_FormatterConverter__ToString(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  long *unaff_x28;
  undefined8 in_stack_00000000;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(param_1);
    param_1 = *unaff_x28;
  }
  if (*(long *)(*(long *)(param_1 + 0xb8) + 8) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(param_1);
      param_1 = *unaff_x28;
    }
    uVar14 = **(undefined8 **)(param_1 + 0xb8);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__);
    FUN_02e6c0a0(uVar6,uVar14,
                 *(undefined8 *)
                  Method_UnityEngine_GameObject_TryGetComponent<ShouldHideHandOnGrab>__,0);
    puVar7 = (undefined8 *)(*(long *)(*unaff_x28 + 0xb8) + 8);
    *puVar7 = uVar6;
    thunk_FUN_01f51358(puVar7,uVar6);
  }
  plVar8 = (long *)FUN_0230b6f4();
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar10 = *plVar8;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03380c04;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_UnityEngine_GameObject_TryGetComponent<AudioPhysics>__,0);
LAB_03380c04:
  plVar8 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
  puVar5 = Method_UnityEngine_GameObject_TryGetComponent<TagSet>__;
  puVar4 = Method_UnityEngine_GameObject_TryGetComponent<DebugUIHandlerColor>__;
  puVar3 = Method_UnityEngine_GameObject_TryGetComponent<Camera>__;
  puVar2 = Method_UnityEngine_GameObject_GetComponentsInChildren<MeshRenderer>__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar10 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03380c8c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03380c8c:
    uVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_03380de8;
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 == 0) goto LAB_03380dc0;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03380ce8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_03380ce8:
    lVar10 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    lVar11 = *unaff_x28;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar11);
      lVar11 = *unaff_x28;
    }
    lVar15 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar15 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar11);
        lVar11 = *unaff_x28;
      }
      uVar6 = **(undefined8 **)(lVar11 + 0xb8);
      lVar15 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02a487e4(lVar15,uVar6,*(undefined8 *)puVar5,0);
      plVar9 = (long *)(*(long *)(*unaff_x28 + 0xb8) + 0x10);
      *plVar9 = lVar15;
      thunk_FUN_01f51358(plVar9,lVar15);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_030f459c(lVar10,lVar15,*(undefined8 *)puVar4);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03380ddc;
    }
  }
LAB_03380dc0:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03380ddc:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_03380de8:
  return in_stack_00000000._4_4_ & 1;
}


