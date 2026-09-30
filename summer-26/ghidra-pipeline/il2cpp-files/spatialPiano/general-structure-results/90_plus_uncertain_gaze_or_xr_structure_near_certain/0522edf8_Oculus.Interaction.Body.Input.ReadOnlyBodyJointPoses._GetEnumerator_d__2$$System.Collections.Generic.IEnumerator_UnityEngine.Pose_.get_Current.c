/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses.<GetEnumerator>d__2$$System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current
ENTRY_POINT: 0522edf8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 183
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0522f378) */
/* WARNING: Removing unreachable block (ram,0x0522f3b4) */

int Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2__System_Collections_Generic_IEnumerator<UnityEngine_Pose>_get_Current
              (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  long lVar17;
  
  uVar4 = (**(code **)(*unaff_x19 + 0x178))();
  puVar2 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
  iVar6 = 8;
  switch(uVar4) {
  case 1:
  case 9:
  case 0x12:
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo +
                     0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo))
    goto LAB_0522f3ac;
    plVar10 = (long *)unaff_x19[4];
    if (plVar10 == (long *)0x0) {
      iVar5 = 0;
    }
    else {
      if (*plVar10 != *(long *)(PTR_DAT_067c9338 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar10);
      }
      lVar17 = *(long *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar17 = *(long *)puVar2;
      }
      plVar9 = (long *)**(long **)(lVar17 + 0xb8);
      iVar6 = 0;
      if (plVar9 == (long *)0x0) goto LAB_0522f3a8;
      iVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x1f0));
    }
    *(int *)((long)unaff_x19 + 0x2c) = iVar5;
    iVar6 = iVar5 + 5;
    if ((char)unaff_x19[6] == '\0') {
      iVar6 = iVar5 + 1;
    }
    goto FUN_0522f380;
  case 3:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo)) {
      plVar10 = (long *)Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateFinger();
      puVar3 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
      ;
      puVar2 = PTR_DAT_067c91b8;
      if (plVar10 != (long *)0x0) {
        iVar6 = 4;
        do {
          lVar17 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f048;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,0);
LAB_0522f048:
          uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          if ((uVar15 & 1) == 0) {
            if (plVar10 == (long *)0x0) goto LAB_0522f37c;
            lVar17 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar15 == 0) goto LAB_0522f300;
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_0522f2e8;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar17 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f0ac;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_0522f0ac:
          lVar17 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar5 = FUN_0522ed3c();
          iVar7 = FUN_0522ed3c();
          iVar6 = iVar6 + iVar5 + iVar7 + 1;
        } while (plVar10 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_0522f3ac;
  case 4:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo)) {
      plVar10 = (long *)FUN_05230504();
      puVar3 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
      puVar2 = PTR_DAT_067c91b8;
      if (plVar10 != (long *)0x0) {
        lVar17 = 0;
        iVar6 = 4;
        do {
          lVar8 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f1b0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,0);
LAB_0522f1b0:
          uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
          if ((uVar15 & 1) == 0) {
            if (plVar10 == (long *)0x0) goto LAB_0522f37c;
            lVar17 = *plVar10;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar15 == 0) goto LAB_0522f2a4;
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_0522f28c;
          }
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar8 = *plVar10;
          uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f214;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar3,0);
LAB_0522f214:
          (*(code *)*puVar11)(plVar10,puVar11[1]);
          iVar5 = FUN_051b30c0(lVar17,0);
          iVar7 = FUN_0522ed3c();
          iVar6 = iVar7 + iVar6 + iVar5 + 2;
          lVar17 = lVar17 + 1;
        } while (plVar10 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
LAB_0522f3ac:
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  case 5:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo)) goto LAB_0522f3ac;
    lVar17 = unaff_x19[4];
    if (lVar17 == 0) {
LAB_0522f3a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(iVar6);
    }
    uVar12 = *(undefined8 *)PTR_DAT_067c9320;
    lVar8 = thunk_FUN_02f45174(lVar17,uVar12);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar17,uVar12);
    }
    iVar6 = *(int *)(lVar8 + 0x18) + 5;
    goto FUN_0522f380;
  case 6:
  case 10:
    iVar6 = 0;
    break;
  case 7:
    iVar6 = 0xc;
    break;
  case 8:
    iVar6 = 1;
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo)) goto LAB_0522f3ac;
    iVar5 = FUN_0522ed3c();
    iVar6 = FUN_0522ed3c();
    iVar6 = iVar6 + iVar5;
FUN_0522f380:
    *(int *)(unaff_x19 + 3) = iVar6;
    break;
  default:
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar12 = FUN_050656a0(0);
    FUN_02a7da48();
    (**(code **)(*unaff_x19 + 0x178))();
    thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    uVar13 = thunk_FUN_02f44ec4();
    uVar14 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    uVar12 = FUN_051b937c(uVar14,uVar12,uVar13,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar13 = thunk_FUN_02f45270();
    uVar14 = thunk_FUN_02f6ef30(PTR_DAT_067d9410);
    FUN_0505262c(uVar13,uVar14,uVar12,0);
    uVar12 = thunk_FUN_02f6ef30(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar13,uVar12);
  case 0x10:
    iVar6 = 4;
  }
  return iVar6;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0522f28c:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0522f360;
    }
  }
LAB_0522f2a4:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f360:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
  goto LAB_0522f37c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_0522f2e8:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0522f338;
    }
  }
LAB_0522f300:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f338:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_0522f37c:
  iVar6 = iVar6 + 1;
  goto FUN_0522f380;
}


