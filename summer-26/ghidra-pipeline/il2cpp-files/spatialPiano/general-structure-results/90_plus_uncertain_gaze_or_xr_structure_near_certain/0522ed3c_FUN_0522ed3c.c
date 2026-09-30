/*
FUNCTION_NAME: FUN_0522ed3c
ENTRY_POINT: 0522ed3c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0522f378) */
/* WARNING: Removing unreachable block (ram,0x0522f3b4) */

ulong FUN_0522ed3c(ulong param_1,long *param_2)

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
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 local_60;
  long **pplStack_58;
  long *local_50;
  long *local_48;
  
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
  local_50 = (long *)0x0;
  local_48 = (long *)0x0;
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
    plVar18 = (long *)param_2[4];
    if (plVar18 == (long *)0x0) {
      iVar6 = 0;
    }
    else {
      if (*plVar18 != *(long *)(PTR_DAT_067c9338 + 0x90)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar18);
      }
      lVar17 = *(long *)OVRTask<OVRResult<OVRAnchor_SaveResult>>_TypeInfo;
      if (*(int *)(lVar17 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        lVar17 = *(long *)puVar3;
      }
      plVar11 = (long *)**(long **)(lVar17 + 0xb8);
      uVar9 = 0;
      if (plVar11 == (long *)0x0) goto LAB_0522f3a8;
      iVar6 = (**(code **)(*plVar11 + 0x1e8))(plVar11,plVar18,*(undefined8 *)(*plVar11 + 0x1f0));
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
      local_48 = (long *)Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateFinger(param_2);
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
      ;
      puVar3 = PTR_DAT_067c91b8;
      pplStack_58 = &local_48;
      local_60 = 0;
      if (local_48 != (long *)0x0) {
        iVar6 = 4;
        do {
          plVar18 = local_48;
          lVar17 = *local_48;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f048;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar3,0);
LAB_0522f048:
          uVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
          plVar18 = local_48;
          if ((uVar9 & 1) == 0) {
            if (local_48 == (long *)0x0) goto LAB_0522f37c;
            lVar17 = *local_48;
            uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar9 == 0) goto LAB_0522f300;
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_0522f2e8;
          }
          if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar17 = *local_48;
          uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f0ac;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_02f421d0(local_48,*(long *)puVar4,0);
LAB_0522f0ac:
          lVar17 = (*(code *)*puVar12)(plVar18,puVar12[1]);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          iVar7 = FUN_0522ed3c(param_1,*(undefined8 *)(lVar17 + 0x10));
          iVar8 = FUN_0522ed3c(param_1,*(undefined8 *)(lVar17 + 0x18));
          iVar6 = iVar6 + iVar7 + iVar8 + 1;
        } while (local_48 != (long *)0x0);
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
      local_50 = (long *)FUN_05230504(param_2);
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
      puVar3 = PTR_DAT_067c91b8;
      pplStack_58 = &local_50;
      local_60 = 0;
      if (local_50 != (long *)0x0) {
        lVar17 = 0;
        iVar6 = 4;
        do {
          plVar18 = local_50;
          lVar10 = *local_50;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f1b0;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_02f421d0(local_50,*(long *)puVar3,0);
LAB_0522f1b0:
          uVar9 = (*(code *)*puVar12)(plVar18,puVar12[1]);
          plVar18 = local_50;
          if ((uVar9 & 1) == 0) {
            if (local_50 == (long *)0x0) goto LAB_0522f37c;
            lVar17 = *local_50;
            uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar9 == 0) goto LAB_0522f2a4;
            piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_0522f28c;
          }
          if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar10 = *local_50;
          uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar12 = (undefined8 *)(lVar10 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0522f214;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar12 = (undefined8 *)FUN_02f421d0(local_50,*(long *)puVar4,0);
LAB_0522f214:
          uVar13 = (*(code *)*puVar12)(plVar18,puVar12[1]);
          iVar7 = FUN_051b30c0(lVar17,0);
          iVar8 = FUN_0522ed3c(param_1,uVar13);
          iVar6 = iVar8 + iVar6 + iVar7 + 2;
          lVar17 = lVar17 + 1;
        } while (local_50 != (long *)0x0);
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
    lVar17 = param_2[4];
    if (lVar17 == 0) goto LAB_0522f3a8;
    uVar13 = *(undefined8 *)PTR_DAT_067c9320;
    lVar10 = thunk_FUN_02f45174(lVar17,uVar13);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar17,uVar13);
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
    uVar13 = FUN_050656a0(0);
    FUN_02a7da48(param_2);
    uVar5 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    local_60 = CONCAT71(local_60._1_7_,uVar5);
    uVar14 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    uVar14 = thunk_FUN_02f44ec4(uVar14,&local_60);
    uVar15 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    uVar13 = FUN_051b937c(uVar15,uVar13,uVar14,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar14 = thunk_FUN_02f45270();
    uVar15 = thunk_FUN_02f6ef30(PTR_DAT_067d9410);
    FUN_0505262c(uVar14,uVar15,uVar13,0);
    uVar13 = thunk_FUN_02f6ef30(OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar14,uVar13);
  case 0x10:
    uVar9 = 4;
  }
  return uVar9;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_0522f28c:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0522f360;
    }
  }
LAB_0522f2a4:
  puVar12 = (undefined8 *)FUN_02f421d0(local_50,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f360:
  (*(code *)*puVar12)(plVar18,puVar12[1]);
  goto LAB_0522f37c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_0522f2e8:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0522f338;
    }
  }
LAB_0522f300:
  puVar12 = (undefined8 *)FUN_02f421d0(local_48,*(long *)PTR_DAT_067c91b0,0);
LAB_0522f338:
  (*(code *)*puVar12)(plVar18,puVar12[1]);
LAB_0522f37c:
  uVar9 = (ulong)(iVar6 + 1);
  goto FUN_0522f380;
}


