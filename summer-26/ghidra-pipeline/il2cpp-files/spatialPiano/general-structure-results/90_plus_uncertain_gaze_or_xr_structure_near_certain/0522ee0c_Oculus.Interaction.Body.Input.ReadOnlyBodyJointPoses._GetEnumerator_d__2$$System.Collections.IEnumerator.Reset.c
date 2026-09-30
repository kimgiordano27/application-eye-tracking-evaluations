/*
FUNCTION_NAME: Oculus.Interaction.Body.Input.ReadOnlyBodyJointPoses.<GetEnumerator>d__2$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0522ee0c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0522f378) */
/* WARNING: Removing unreachable block (ram,0x0522f3b4) */

int Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2__System_Collections_IEnumerator_Reset
              (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 in_w8;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  long lVar16;
  
  puVar2 = OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
  iVar5 = 8;
  switch(in_w8) {
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
    plVar9 = (long *)unaff_x19[4];
    if (plVar9 == (long *)0x0) {
      iVar4 = 0;
    }
    else {
      if (*plVar9 != *(long *)(PTR_DAT_067c9338 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar9);
      }
      lVar16 = *(long *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar16 = *(long *)puVar2;
      }
      plVar8 = (long *)**(long **)(lVar16 + 0xb8);
      iVar5 = 0;
      if (plVar8 == (long *)0x0) goto LAB_0522f3a8;
      iVar4 = (**(code **)(*plVar8 + 0x1e8))(plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x1f0));
    }
    *(int *)((long)unaff_x19 + 0x2c) = iVar4;
    iVar5 = iVar4 + 5;
    if ((char)unaff_x19[6] == '\0') {
      iVar5 = iVar4 + 1;
    }
    goto FUN_0522f380;
  case 3:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo)) {
      plVar9 = (long *)Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateFinger();
      puVar3 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
      ;
      puVar2 = PTR_DAT_067c91b8;
      if (plVar9 != (long *)0x0) {
        iVar5 = 4;
        do {
          lVar16 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0522f048;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar2,0);
LAB_0522f048:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_0522f37c;
            lVar16 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar14 == 0) goto LAB_0522f300;
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_0522f2e8;
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar16 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0522f0ac;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_0522f0ac:
          lVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar4 = FUN_0522ed3c();
          iVar6 = FUN_0522ed3c();
          iVar5 = iVar5 + iVar4 + iVar6 + 1;
        } while (plVar9 != (long *)0x0);
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
      plVar9 = (long *)FUN_05230504();
      puVar3 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
      puVar2 = PTR_DAT_067c91b8;
      if (plVar9 != (long *)0x0) {
        lVar16 = 0;
        iVar5 = 4;
        do {
          lVar7 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0522f1b0;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar2,0);
LAB_0522f1b0:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_0522f37c;
            lVar16 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar14 == 0) goto LAB_0522f2a4;
            piVar15 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            goto LAB_0522f28c;
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar7 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar7 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0522f214;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar3,0);
LAB_0522f214:
          (*(code *)*puVar10)(plVar9,puVar10[1]);
          iVar4 = FUN_051b30c0(lVar16,0);
          iVar6 = FUN_0522ed3c();
          iVar5 = iVar6 + iVar5 + iVar4 + 2;
          lVar16 = lVar16 + 1;
        } while (plVar9 != (long *)0x0);
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
    lVar16 = unaff_x19[4];
    if (lVar16 == 0) {
LAB_0522f3a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8(iVar5);
    }
    uVar11 = *(undefined8 *)PTR_DAT_067c9320;
    lVar7 = thunk_FUN_02f45174(lVar16,uVar11);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar16,uVar11);
    }
    iVar5 = *(int *)(lVar7 + 0x18) + 5;
    goto FUN_0522f380;
  case 6:
  case 10:
    iVar5 = 0;
    break;
  case 7:
    iVar5 = 0xc;
    break;
  case 8:
    iVar5 = 1;
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo)) goto LAB_0522f3ac;
    iVar4 = FUN_0522ed3c();
    iVar5 = FUN_0522ed3c();
    iVar5 = iVar5 + iVar4;
FUN_0522f380:
    *(int *)(unaff_x19 + 3) = iVar5;
    break;
  default:
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar11 = FUN_050656a0(0);
    FUN_02a7da48();
    (**(code **)(*unaff_x19 + 0x178))();
    thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    uVar12 = thunk_FUN_02f44ec4();
    uVar13 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    uVar11 = FUN_051b937c(uVar13,uVar11,uVar12,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar12 = thunk_FUN_02f45270();
    uVar13 = thunk_FUN_02f6ef30(PTR_DAT_067d9410);
    FUN_0505262c(uVar12,uVar13,uVar11,0);
    uVar11 = thunk_FUN_02f6ef30(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar12,uVar11);
  case 0x10:
    iVar5 = 4;
  }
  return iVar5;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0522f28c:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0522f360;
    }
  }
LAB_0522f2a4:
  puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f360:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  goto LAB_0522f37c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0522f2e8:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar10 = (undefined8 *)(lVar16 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0522f338;
    }
  }
LAB_0522f300:
  puVar10 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f338:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0522f37c:
  iVar5 = iVar5 + 1;
  goto FUN_0522f380;
}


