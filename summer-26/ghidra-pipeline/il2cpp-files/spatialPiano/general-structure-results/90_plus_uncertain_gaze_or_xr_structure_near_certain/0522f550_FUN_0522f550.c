/*
FUNCTION_NAME: FUN_0522f550
ENTRY_POINT: 0522f550
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_17;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05230138) */
/* WARNING: Removing unreachable block (ram,0x05230214) */

void FUN_0522f550(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 local_80;
  long **pplStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  long *local_50;
  long local_48;
  long *local_38;
  
  if ((DAT_06bba866 & 1) == 0) {
    FUN_02f08768(OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo);
    FUN_02f08768(OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo);
    FUN_02f08768(OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9320);
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(PTR_DAT_067c9988);
    FUN_02f08768(UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c9980);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
                );
    FUN_02f08768(
                OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067c96d0);
    DAT_06bba866 = 1;
  }
  local_38 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  if (param_2 == (long *)0x0) goto LAB_052301fc;
  uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
  puVar5 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
  puVar4 = PTR_DAT_067c9988;
  puVar3 = PTR_DAT_067c9980;
  puVar2 = PTR_DAT_067c9338;
  switch(uVar6) {
  case 1:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar16 = param_2[4];
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050656a0(0);
    if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
    }
    FUN_05061a8c(lVar16,uVar10,0);
    if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0522f758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x228))(plVar15,*(undefined8 *)(*plVar15 + 0x230));
      return;
    }
    break;
  case 2:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo)) {
      plVar15 = (long *)param_2[4];
      uVar8 = *(undefined4 *)((long)param_2 + 0x2c);
      local_80 = 0;
      FUN_03e1b994(&local_80,(int)param_2[3] + -4,*(undefined8 *)PTR_DAT_067c96d0);
      if ((plVar15 == (long *)0x0) || (*plVar15 == *(long *)(PTR_DAT_067c9338 + 0x90))) {
        FUN_05230460(param_1,plVar15,uVar8,local_80);
        return;
      }
Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateThumb:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15);
    }
LAB_05230200:
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(param_2);
  case 3:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 600))(plVar15,(int)param_2[3],*(undefined8 *)(*plVar15 + 0x260));
      local_38 = (long *)Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateFinger(param_2);
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
      ;
      puVar3 = PTR_DAT_067c9338;
      puVar2 = PTR_DAT_067c91b8;
      pplStack_78 = &local_38;
      local_80 = 0;
      do {
        plVar15 = local_38;
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *local_38;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522fc94;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(local_38,*(long *)puVar2,0);
LAB_0522fc94:
        uVar13 = (*(code *)*puVar9)(plVar15,puVar9[1]);
        plVar15 = local_38;
        if ((uVar13 & 1) == 0) {
          if (local_38 == (long *)0x0) goto LAB_0523013c;
          lVar16 = *local_38;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 == 0) goto LAB_05230014;
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_0522fffc;
        }
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *local_38;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522fcf8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(local_38,*(long *)puVar4,0);
LAB_0522fcf8:
        lVar16 = (*(code *)*puVar9)(plVar15,puVar9[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar15 = *(long **)(lVar16 + 0x18);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar18 = *(long **)(param_1 + 0x10);
        uVar13 = (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(uVar13,uVar13 & 0xffffffff);
        }
        (**(code **)(*plVar18 + 0x1d8))
                  (plVar18,uVar13 & 0xffffffff,*(undefined8 *)(*plVar18 + 0x1e0));
        lVar17 = *(long *)(lVar16 + 0x10);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar15 = *(long **)(lVar17 + 0x20);
        if ((plVar15 != (long *)0x0) && (*plVar15 != *(long *)(puVar3 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar15,*(long *)(puVar3 + 0x90),*(undefined4 *)(lVar17 + 0x2c));
        }
        FUN_05230460(param_1,plVar15,*(undefined4 *)(lVar17 + 0x2c),0);
        FUN_0522f550(param_1,*(undefined8 *)(lVar16 + 0x18));
      } while( true );
    }
    break;
  case 4:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 600))(plVar15,(int)param_2[3],*(undefined8 *)(*plVar15 + 0x260));
      local_48 = 0;
      plVar15 = (long *)FUN_05230504(param_2);
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
      puVar3 = PTR_DAT_067c9fd8;
      puVar2 = PTR_DAT_067c91b8;
      pplStack_78 = &local_50;
      local_80 = 0;
      do {
        local_50 = plVar15;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *plVar15;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522feb8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)puVar2,0);
LAB_0522feb8:
        uVar13 = (*(code *)*puVar9)(plVar15,puVar9[1]);
        plVar15 = local_50;
        if ((uVar13 & 1) == 0) {
          if (local_50 == (long *)0x0) goto LAB_0523013c;
          lVar16 = *local_50;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 == 0) goto LAB_05230070;
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_05230058;
        }
        if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *local_50;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522ff1c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(local_50,*(long *)puVar4,0);
LAB_0522ff1c:
        plVar15 = (long *)(*(code *)*puVar9)(plVar15,puVar9[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar18 = *(long **)(param_1 + 0x10);
        uVar13 = (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(uVar13,uVar13 & 0xffffffff);
        }
        (**(code **)(*plVar18 + 0x1d8))
                  (plVar18,uVar13 & 0xffffffff,*(undefined8 *)(*plVar18 + 0x1e0));
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_050656a0(0);
        uVar10 = FUN_050f28d4(&local_48,uVar10,0);
        uVar8 = FUN_051b30c0(local_48,0);
        FUN_05230460(param_1,uVar10,uVar8,0);
        FUN_0522f550(param_1,plVar15);
        local_48 = local_48 + 1;
        plVar15 = local_50;
      } while( true );
    }
    break;
  case 5:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo)) goto LAB_05230200;
    lVar17 = param_2[4];
    if (lVar17 == 0) break;
    uVar10 = *(undefined8 *)PTR_DAT_067c9320;
    lVar16 = thunk_FUN_02f45174(lVar17,uVar10);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar17,uVar10);
    }
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 == (long *)0x0) break;
    (**(code **)(*plVar15 + 600))
              (plVar15,*(undefined4 *)(lVar16 + 0x18),*(undefined8 *)(*plVar15 + 0x260));
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 == (long *)0x0) break;
    (**(code **)(*plVar15 + 0x1c8))
              (plVar15,*(undefined1 *)((long)param_2 + 0x29),*(undefined8 *)(*plVar15 + 0x1d0));
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 == (long *)0x0) break;
    lVar17 = *plVar15;
    goto LAB_05230090;
  case 6:
  case 10:
    goto switchD_0522f6a0_caseD_6;
  case 7:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    lVar17 = param_2[4];
    if (lVar17 == 0) {
      lVar16 = 0;
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_067c9320;
      lVar16 = thunk_FUN_02f45174(lVar17,uVar10);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar17,uVar10);
      }
    }
    plVar15 = *(long **)(param_1 + 0x10);
    if (plVar15 == (long *)0x0) break;
    lVar17 = *plVar15;
LAB_05230090:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 0x1e8);
    uVar10 = *(undefined8 *)(lVar17 + 0x1f0);
LAB_05230094:
                    /* WARNING: Could not recover jumptable at 0x052300a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar15,lVar16,uVar10);
    return;
  case 8:
    plVar15 = *(long **)(param_1 + 0x10);
    if (*(int *)(*(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (plVar15 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar15 + 0x1b8);
      uVar10 = *(undefined8 *)(*plVar15 + 0x1c0);
      uVar7 = (uint)(*(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8) == param_2);
LAB_0522fb18:
                    /* WARNING: Could not recover jumptable at 0x0522fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar15,uVar7,uVar10);
      return;
    }
    break;
  case 9:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = (long *)param_2[4];
    if (plVar15 != (long *)0x0) {
      if (*plVar15 == *(long *)PTR_DAT_067c9980) {
        puVar9 = (undefined8 *)thunk_FUN_02f453b8();
        uVar10 = *puVar9;
        local_58 = uVar10;
        if (*(int *)(param_1 + 0x20) == 2) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar10 = FUN_050b7e58(&local_58,0);
        }
        else if (*(int *)(param_1 + 0x20) == 1) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar10 = FUN_050b83e4(&local_58,0);
        }
        local_58 = uVar10;
        if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_051a8278(uVar10,0,0);
      }
      else {
        if (*(long *)(*plVar15 + 0x40) != *(long *)(*(long *)PTR_DAT_067c9988 + 0x40))
        goto Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateThumb;
        puVar9 = (undefined8 *)thunk_FUN_02f453b8();
        uStack_68 = puVar9[1];
        local_70 = *puVar9;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_050ba0ac(&local_70,0);
        uVar11 = FUN_050ba23c(&local_70,0);
        if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo);
        }
        uVar10 = FUN_051a813c(uVar10,uVar11,0);
      }
      plVar15 = *(long **)(param_1 + 0x10);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x278))(plVar15,uVar10,*(undefined8 *)(*plVar15 + 0x280));
        return;
      }
    }
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo)) goto LAB_05230200;
    lVar16 = param_2[4];
    if (lVar16 != 0) {
      plVar15 = *(long **)(lVar16 + 0x20);
      uVar8 = *(undefined4 *)(lVar16 + 0x2c);
      if ((plVar15 == (long *)0x0) ||
         (lVar16 = *(long *)(PTR_DAT_067c9338 + 0x90), *plVar15 == lVar16)) {
        FUN_05230460(param_1,plVar15,uVar8,0);
        lVar16 = param_2[5];
        if (lVar16 == 0) break;
        plVar15 = *(long **)(lVar16 + 0x20);
        uVar8 = *(undefined4 *)(lVar16 + 0x2c);
        if ((plVar15 == (long *)0x0) || (lVar16 = *(long *)(puVar2 + 0x90), *plVar15 == lVar16)) {
          FUN_05230460(param_1,plVar15,uVar8,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15,lVar16,uVar8);
    }
    break;
  default:
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar10 = FUN_050656a0(0);
    FUN_02a7da48(param_2);
    uVar6 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    local_80 = CONCAT71(local_80._1_7_,uVar6);
    uVar11 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    uVar11 = thunk_FUN_02f44ec4(uVar11,&local_80);
    uVar12 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    uVar10 = FUN_051b937c(uVar12,uVar10,uVar11,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar11 = thunk_FUN_02f45270();
    uVar12 = thunk_FUN_02f6ef30(PTR_DAT_067d9410);
    FUN_0505262c(uVar11,uVar12,uVar10,0);
    uVar10 = thunk_FUN_02f6ef30(
                               OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar11,uVar10);
  case 0x10:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar16 = param_2[4];
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050656a0(0);
    if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
    }
    uVar7 = FUN_05060320(lVar16,uVar10,0);
    if (plVar15 != (long *)0x0) {
      uVar10 = *(undefined8 *)(*plVar15 + 0x260);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar15 + 600);
      goto LAB_0522fb18;
    }
    break;
  case 0x12:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(param_1 + 0x10);
    lVar16 = param_2[4];
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar10 = FUN_050656a0(0);
    if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
    }
    lVar16 = FUN_05060d00(lVar16,uVar10,0);
    if (plVar15 == (long *)0x0) break;
    uVar10 = *(undefined8 *)(*plVar15 + 0x280);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar15 + 0x278);
    goto LAB_05230094;
  }
  goto LAB_052301fc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_05230058:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05230120;
    }
  }
LAB_05230070:
  puVar9 = (undefined8 *)FUN_02f421d0(local_50,*(long *)PTR_DAT_067c91b0,0);
LAB_05230120:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
  goto LAB_0523013c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0522fffc:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_052300f8;
    }
  }
LAB_05230014:
  puVar9 = (undefined8 *)FUN_02f421d0(local_38,*(long *)PTR_DAT_067c91b0,0);
LAB_052300f8:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
LAB_0523013c:
  plVar15 = *(long **)(param_1 + 0x10);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x1c8))(plVar15,0,*(undefined8 *)(*plVar15 + 0x1d0));
switchD_0522f6a0_caseD_6:
    return;
  }
LAB_052301fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


