/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses.<GetEnumerator>d__2$$MoveNext
ENTRY_POINT: 0522ed44
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_13;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0522f378) */
/* WARNING: Removing unreachable block (ram,0x0522f3b4) */

ulong Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2__MoveNext
                (ulong param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  
  uVar9 = param_1;
  if ((DAT_06bba869 & 1) == 0) {
    FUN_02f08768(OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9320);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    FUN_02f08768(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    uVar9 = FUN_02f08768(PTR_DAT_067c91b8);
    DAT_06bba869 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_0522f3a8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8(uVar9);
  }
  uVar5 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  puVar3 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
  uVar9 = 8;
  switch(uVar5) {
  case 1:
  case 9:
  case 0x12:
    break;
  case 2:
    bVar2 = *(byte *)(*(long *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo +
                     0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo))
    goto LAB_0522f3ac;
    plVar12 = (long *)param_2[4];
    if (plVar12 == (long *)0x0) {
      iVar6 = 0;
    }
    else {
      if (*plVar12 != *(long *)(PTR_DAT_067c9338 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar12);
      }
      lVar18 = *(long *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
      if (*(int *)(lVar18 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar18 = *(long *)puVar3;
      }
      plVar11 = (long *)**(long **)(lVar18 + 0xb8);
      uVar9 = 0;
      if (plVar11 == (long *)0x0) goto LAB_0522f3a8;
      iVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11,plVar12,*(undefined8 *)(*plVar11 + 0x1f0));
    }
    *(int *)((long)param_2 + 0x2c) = iVar6;
    uVar1 = iVar6 + 5;
    if ((char)param_2[6] == '\0') {
      uVar1 = iVar6 + 1;
    }
    uVar9 = (ulong)uVar1;
    goto FUN_0522f380;
  case 3:
    bVar2 = *(byte *)(*(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo + 0x130);
    if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo)) {
      plVar12 = (long *)Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateFinger(param_2);
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
      ;
      puVar3 = PTR_DAT_067c91b8;
      if (plVar12 != (long *)0x0) {
        iVar6 = 4;
        do {
          lVar18 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0522f048;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar3,0);
LAB_0522f048:
          uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_0522f37c;
            lVar18 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar9 == 0) goto LAB_0522f300;
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            goto LAB_0522f2e8;
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar18 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0522f0ac;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar4,0);
LAB_0522f0ac:
          lVar18 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar7 = FUN_0522ed3c(param_1,*(undefined8 *)(lVar18 + 0x10));
          iVar8 = FUN_0522ed3c(param_1,*(undefined8 *)(lVar18 + 0x18));
          iVar6 = iVar6 + iVar7 + iVar8 + 1;
        } while (plVar12 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    goto LAB_0522f3ac;
  case 4:
    bVar2 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo + 0x130);
    if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo)) {
      plVar12 = (long *)FUN_05230504(param_2);
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
      puVar3 = PTR_DAT_067c91b8;
      if (plVar12 != (long *)0x0) {
        lVar18 = 0;
        iVar6 = 4;
        do {
          lVar10 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0522f1b0;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar3,0);
LAB_0522f1b0:
          uVar9 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          if ((uVar9 & 1) == 0) {
            if (plVar12 == (long *)0x0) goto LAB_0522f37c;
            lVar18 = *plVar12;
            uVar9 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar9 == 0) goto LAB_0522f2a4;
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            goto LAB_0522f28c;
          }
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar10 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_0522f214;
              }
              uVar9 = uVar9 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar4,0);
LAB_0522f214:
          uVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
          iVar7 = FUN_051b30c0(lVar18,0);
          iVar8 = FUN_0522ed3c(param_1,uVar14);
          iVar6 = iVar8 + iVar6 + iVar7 + 2;
          lVar18 = lVar18 + 1;
        } while (plVar12 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
LAB_0522f3ac:
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_2);
  case 5:
    bVar2 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo)) goto LAB_0522f3ac;
    lVar18 = param_2[4];
    if (lVar18 == 0) goto LAB_0522f3a8;
    uVar14 = *(undefined8 *)PTR_DAT_067c9320;
    lVar10 = thunk_FUN_02f45174(lVar18,uVar14);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar18,uVar14);
    }
    uVar9 = (ulong)(*(int *)(lVar10 + 0x18) + 5);
    goto FUN_0522f380;
  case 6:
  case 10:
    uVar9 = 0;
    break;
  case 7:
    uVar9 = 0xc;
    break;
  case 8:
    uVar9 = 1;
    break;
  case 0xb:
    bVar2 = *(byte *)(*(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo)) goto LAB_0522f3ac;
    iVar6 = FUN_0522ed3c(param_1,param_2[4]);
    iVar7 = FUN_0522ed3c(param_1,param_2[5]);
    uVar9 = (ulong)(uint)(iVar7 + iVar6);
FUN_0522f380:
    *(int *)(param_2 + 3) = (int)uVar9;
    break;
  default:
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar14 = FUN_050656a0(0);
    FUN_02a7da48(param_2);
    (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    uVar15 = thunk_FUN_02f44ec4();
    uVar16 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    uVar14 = FUN_051b937c(uVar16,uVar14,uVar15,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar15 = thunk_FUN_02f45270();
    uVar16 = thunk_FUN_02f6ef30(PTR_DAT_067d9410);
    FUN_0505262c(uVar15,uVar16,uVar14,0);
    uVar14 = thunk_FUN_02f6ef30(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar15,uVar14);
  case 0x10:
    uVar9 = 4;
  }
  return uVar9;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_0522f28c:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0522f360;
    }
  }
LAB_0522f2a4:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f360:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  goto LAB_0522f37c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar17 = piVar17 + 4;
    if (uVar9 == 0) break;
LAB_0522f2e8:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0522f338;
    }
  }
LAB_0522f300:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f338:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0522f37c:
  uVar9 = (ulong)(iVar6 + 1);
  goto FUN_0522f380;
}


