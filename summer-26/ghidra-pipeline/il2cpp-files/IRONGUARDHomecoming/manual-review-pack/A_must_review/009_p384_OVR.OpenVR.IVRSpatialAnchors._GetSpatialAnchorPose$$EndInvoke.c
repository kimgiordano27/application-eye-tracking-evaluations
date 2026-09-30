/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorPose$$EndInvoke
ENTRY_POINT: 03718b7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 241
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03718f7c) */

void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorPose__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe00));
  thunk_FUN_01efb3a4(
                    Method_DefaultNamespace_WallOpener_<RevealFullWall>d__27_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_TMPro_TMP_TextProcessingStack<float>_Push__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                    );
  thunk_FUN_01efb3a4(Method_System_DateTimeParse_ParseExact__);
  thunk_FUN_01efb3a4(Method_System_Net_FtpWebRequest_SetException__);
  thunk_FUN_01efb3a4(
                    Method_DefaultNamespace_WallOpener_<RevealVibration>d__30_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_Demo_WaterSpray_<StampRoutine>d__35_System_Collections_IEnumerator_Reset__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Acquire__);
  *(undefined1 *)(unaff_x21 + 0x13d) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar7 = FUN_036dae98();
    if ((uVar7 & 1) == 0) {
      FUN_037184fc();
      if (unaff_x20[5] != 0) {
        plVar8 = (long *)FUN_02a856dc(unaff_x20[5],
                                      *(undefined8 *)
                                       Method_DefaultNamespace_WallOpener_<HideSelectedWall>d__31_System_Collections_IEnumerator_Reset__
                                     );
        puVar6 = 
        Method_DefaultNamespace_WallOpener_<RevealFullWall>d__27_System_Collections_IEnumerator_Reset__
        ;
        puVar5 = Method_System_DateTimeParse_ParseExact__;
        puVar4 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
        puVar3 = Method_UnityEngine_UIElements_StyleDataRef<LayoutData>_Acquire__;
        puVar2 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__;
        puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar12 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03718cbc;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar1,0);
LAB_03718cbc:
          uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar8 == (long *)0x0) {
              return;
            }
            lVar12 = *plVar8;
            uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar7 == 0) goto LAB_03718e9c;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_03718e84;
          }
          lVar12 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar6) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_03718d18;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar7 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar6,0);
LAB_03718d18:
          lVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          lVar10 = FUN_01f08890(*(undefined8 *)puVar2,7);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = FUN_035683d0(lVar12 + 0x28,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x20) = uVar11;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar10 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)puVar3;
          thunk_FUN_01f51358();
          if (*(long *)(lVar12 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar10 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(*(long *)(lVar12 + 0x50) + 0x28);
          thunk_FUN_01f51358();
          if (*(uint *)(lVar10 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar5;
          thunk_FUN_01f51358();
          uVar11 = FUN_0356965c(lVar12 + 0x30,0);
          if (*(uint *)(lVar10 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x40) = uVar11;
          thunk_FUN_01f51358();
          if (*(uint *)(lVar10 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)puVar5;
          thunk_FUN_01f51358();
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar11 = FUN_0354f308(lVar12 + 0x48,0);
          if (*(uint *)(lVar10 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar10 + 0x50) = uVar11;
          thunk_FUN_01f51358();
          FUN_0340efe8(lVar10,0);
          FUN_037184fc();
        } while( true );
      }
    }
    else {
      FUN_037184fc();
      lVar12 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar12 != 0) {
        FUN_03405678(*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,
                     *(undefined8 *)(lVar12 + 0x18),0);
        FUN_037184fc();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_03718e84:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03718eb8;
    }
  }
LAB_03718e9c:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03718eb8:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


