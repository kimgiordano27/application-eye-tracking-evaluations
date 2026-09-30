/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 0336886c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 169
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_11;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_11
*/


void OVRManager__get_headPoseRelativeOffsetRotation(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
              );
  FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<ScheduledInvocation>_get_Current__)
  ;
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_get_Current__
              );
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x20 + 0x544) = 1;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_MoveNext__
  ;
  lVar3 = *unaff_x19;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *unaff_x19;
  }
  lVar3 = FUN_02357630(*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),*(undefined8 *)puVar2);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_Dispose__
  ;
  lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8);
  if (lVar4 != 0) {
    if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 8)) {
LAB_03368abc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    uVar9 = *(undefined8 *)(lVar4 + 0x20);
    uVar10 = *(undefined8 *)(lVar4 + 0x58);
    uVar11 = *(undefined8 *)
              Method_System_Collections_Generic_List_Enumerator<ONSPPropagationGeometry_TerrainMaterial>_get_Current__
    ;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar11 = FUN_032e04b8(uVar11,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    lVar4 = FUN_03378a24(uVar11,0);
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_Dispose__;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar12 = 0;
        uVar5 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar12) goto LAB_03368abc;
          if (lVar3 == 0)
          goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
          uVar1 = *(uint *)(lVar3 + 0x18);
          iVar7 = (int)*(undefined8 *)(lVar4 + 0x20 + uVar12 * 8);
          if ((int)uVar1 <= iVar7) {
            lVar6 = *(long *)puVar2;
            if ((iVar7 - 7U < 6) || (iVar7 - 0x10U < 2)) {
              lVar8 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar8 == 0)
              goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
              if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                lVar6 = *(long *)(lVar6 + 0x20);
                uVar11 = uVar10;
                goto LAB_03368a2c;
              }
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
            }
            else {
              lVar8 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar8 == 0)
              goto OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY;
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
              }
              else {
                lVar6 = *(long *)(lVar6 + 0x20);
                uVar11 = uVar9;
LAB_03368a2c:
                FUN_02d5004c(lVar3,uVar11,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x70));
              }
            }
          }
          uVar5 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      if (lVar3 != 0) {
        FUN_02d51a80(lVar3,*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<ONSPPropagationMaterial_Point>_MoveNext__
                    );
        return;
      }
    }
  }
OVRManager__OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


