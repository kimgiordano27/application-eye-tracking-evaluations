/*
FUNCTION_NAME: FUN_0398189c
ENTRY_POINT: 0398189c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 174
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03981c80) */
/* WARNING: Removing unreachable block (ram,0x03981bec) */

undefined8 FUN_0398189c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  
  puVar2 = 
  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__;
  if ((DAT_04838505 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_4504);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_4493);
    thunk_FUN_01efb3a4(Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__);
    thunk_FUN_01efb3a4(StringLiteral_4564);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_u8__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                      );
    DAT_04838505 = 1;
  }
  Unity_Burst_Intrinsics_Arm_Neon__vqdmulhs_laneq_s32(param_1,*(undefined8 *)puVar2,0);
  if ((param_1 != (long *)0x0) &&
     (plVar9 = (long *)(**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400)),
     plVar9 != (long *)0x0)) {
    uVar10 = FUN_035841e4(plVar9,0);
    if ((uVar10 & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    if ((uVar10 & 1) == 0) {
      uVar14 = thunk_FUN_01efb3a4(
                                 Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                 );
      uVar14 = FUN_0398ef7c(uVar14,0);
    }
    else {
      lVar11 = FUN_022c2c94(param_2,*(undefined8 *)StringLiteral_4504);
      if ((plVar9 == (long *)0x0) ||
         (iVar7 = (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450)),
         lVar11 == 0)) goto LAB_03981c3c;
      iVar8 = FUN_0265d6c4(lVar11,*(undefined8 *)StringLiteral_4564);
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if (iVar7 == iVar8) {
        plVar9 = (long *)FUN_0265d924(lVar11,*(undefined8 *)
                                              Method_UnityEngine_Component_GetComponent<OVRSpatialAnchor>__
                                     );
        puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_u8__;
        puVar5 = Method_UnityEngine_Component_GetComponent<OVRSkeletonRenderer>__;
        puVar4 = Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        puVar1 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar15 = *plVar9;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_03981a88;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_03981a88:
          uVar10 = (*(code *)*puVar12)(plVar9,puVar12[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_03981be0;
            lVar15 = *plVar9;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar10 == 0) goto LAB_03981bb8;
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            goto LAB_03981ba0;
          }
          lVar15 = *plVar9;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_03981ae4;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_03981ae4:
          plVar13 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
          Unity_Burst_Intrinsics_Arm_Neon__vqdmulhs_laneq_s32(plVar13,*(undefined8 *)puVar6,0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar14 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          uVar17 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar17 = FUN_03579868(uVar17,0);
          uVar10 = FUN_03583338(uVar14,uVar17,0);
          if ((uVar10 & 1) != 0) {
            uVar14 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vshll_high_n_u8__);
            uVar14 = FUN_0398f208(uVar14,0);
            uVar17 = thunk_FUN_01efb3a4(StringLiteral_4600);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar14,uVar17);
          }
        } while( true );
      }
      uVar14 = FUN_0398fca0(0);
    }
    uVar17 = thunk_FUN_01efb3a4(StringLiteral_4600);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar14,uVar17);
  }
LAB_03981c3c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_03981ba0:
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03981bd4;
    }
  }
LAB_03981bb8:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_03981bd4:
  (*(code *)*puVar12)(plVar9,puVar12[1]);
LAB_03981be0:
  uVar14 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_4493);
  FUN_03995a7c(uVar14,param_1,0,lVar11,0);
  return uVar14;
}


