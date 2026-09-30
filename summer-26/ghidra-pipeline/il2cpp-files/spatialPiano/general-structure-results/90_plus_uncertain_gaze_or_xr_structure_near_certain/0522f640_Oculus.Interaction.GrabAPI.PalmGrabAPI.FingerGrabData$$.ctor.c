/*
FUNCTION_NAME: Oculus.Interaction.GrabAPI.PalmGrabAPI.FingerGrabData$$.ctor
ENTRY_POINT: 0522f640
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05230138) */
/* WARNING: Removing unreachable block (ram,0x05230214) */

void Oculus_Interaction_GrabAPI_PalmGrabAPI_FingerGrabData___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long *plVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  long unaff_x21;
  long *plVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000048;
  
  FUN_02f08768();
  FUN_02f08768(PTR_DAT_067c96d0);
  *(undefined1 *)(unaff_x21 + 0x866) = 1;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000030 = (long *)0x0;
  in_stack_00000038 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (unaff_x20 == (long *)0x0) goto LAB_052301fc;
  uVar6 = (**(code **)(*unaff_x20 + 0x178))();
  puVar5 = OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo;
  puVar4 = PTR_DAT_067c9988;
  puVar3 = PTR_DAT_067c9980;
  puVar2 = PTR_DAT_067c9338;
  switch(uVar6) {
  case 1:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(unaff_x19 + 0x10);
    lVar16 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050656a0(0);
    if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
    }
    FUN_05061a8c(lVar16,uVar9,0);
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
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo)) {
      plVar15 = (long *)unaff_x20[4];
      FUN_03e1b994();
      if ((plVar15 == (long *)0x0) || (*plVar15 == *(long *)(PTR_DAT_067c9338 + 0x90))) {
        FUN_05230460();
        return;
      }
Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateThumb:
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15);
    }
LAB_05230200:
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  case 3:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRColocationSession_Result>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 600))(plVar15,(int)unaff_x20[3],*(undefined8 *)(*plVar15 + 0x260));
      in_stack_00000048 = (long *)Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateFinger();
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
      ;
      puVar3 = PTR_DAT_067c9338;
      puVar2 = PTR_DAT_067c91b8;
      do {
        plVar15 = in_stack_00000048;
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *in_stack_00000048;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522fc94;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(in_stack_00000048,*(long *)puVar2,0);
LAB_0522fc94:
        uVar13 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        plVar15 = in_stack_00000048;
        if ((uVar13 & 1) == 0) {
          if (in_stack_00000048 == (long *)0x0) goto LAB_0523013c;
          lVar16 = *in_stack_00000048;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 == 0) goto LAB_05230014;
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_0522fffc;
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *in_stack_00000048;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522fcf8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(in_stack_00000048,*(long *)puVar4,0);
LAB_0522fcf8:
        lVar16 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar15 = *(long **)(lVar16 + 0x18);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar18 = *(long **)(unaff_x19 + 0x10);
        uVar13 = (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8(uVar13,uVar13 & 0xffffffff);
        }
        (**(code **)(*plVar18 + 0x1d8))
                  (plVar18,uVar13 & 0xffffffff,*(undefined8 *)(*plVar18 + 0x1e0));
        lVar16 = *(long *)(lVar16 + 0x10);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar15 = *(long **)(lVar16 + 0x20);
        if ((plVar15 != (long *)0x0) && (*plVar15 != *(long *)(puVar3 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(plVar15,*(long *)(puVar3 + 0x90),*(undefined4 *)(lVar16 + 0x2c));
        }
        FUN_05230460();
        FUN_0522f550();
      } while( true );
    }
    break;
  case 4:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRAnchor_EraseResult>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 600))(plVar15,(int)unaff_x20[3],*(undefined8 *)(*plVar15 + 0x260));
      in_stack_00000038 = 0;
      plVar15 = (long *)FUN_05230504();
      puVar4 = 
      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
      puVar3 = PTR_DAT_067c9fd8;
      puVar2 = PTR_DAT_067c91b8;
      do {
        in_stack_00000030 = plVar15;
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
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522feb8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)puVar2,0);
LAB_0522feb8:
        uVar13 = (*(code *)*puVar8)(plVar15,puVar8[1]);
        plVar15 = in_stack_00000030;
        if ((uVar13 & 1) == 0) {
          if (in_stack_00000030 == (long *)0x0) goto LAB_0523013c;
          lVar16 = *in_stack_00000030;
          uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar13 == 0) goto LAB_05230070;
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_05230058;
        }
        if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar16 = *in_stack_00000030;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0522ff1c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(in_stack_00000030,*(long *)puVar4,0);
LAB_0522ff1c:
        plVar15 = (long *)(*(code *)*puVar8)(plVar15,puVar8[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        plVar18 = *(long **)(unaff_x19 + 0x10);
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
        uVar9 = FUN_050656a0(0);
        FUN_050f28d4(&stack0x00000038,uVar9,0);
        FUN_051b30c0(in_stack_00000038,0);
        FUN_05230460();
        FUN_0522f550();
        in_stack_00000038 = in_stack_00000038 + 1;
        plVar15 = in_stack_00000030;
      } while( true );
    }
    break;
  case 5:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRAnchor_ShareResult>>_TypeInfo)) goto LAB_05230200;
    lVar17 = unaff_x20[4];
    if (lVar17 == 0) break;
    uVar9 = *(undefined8 *)PTR_DAT_067c9320;
    lVar16 = thunk_FUN_02f45174(lVar17,uVar9);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(lVar17,uVar9);
    }
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (plVar15 == (long *)0x0) break;
    (**(code **)(*plVar15 + 600))
              (plVar15,*(undefined4 *)(lVar16 + 0x18),*(undefined8 *)(*plVar15 + 0x260));
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (plVar15 == (long *)0x0) break;
    (**(code **)(*plVar15 + 0x1c8))
              (plVar15,*(undefined1 *)((long)unaff_x20 + 0x29),*(undefined8 *)(*plVar15 + 0x1d0));
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (plVar15 == (long *)0x0) break;
    lVar17 = *plVar15;
    goto LAB_05230090;
  case 6:
  case 10:
    goto switchD_0522f6a0_caseD_6;
  case 7:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    lVar17 = unaff_x20[4];
    if (lVar17 == 0) {
      lVar16 = 0;
    }
    else {
      uVar9 = *(undefined8 *)PTR_DAT_067c9320;
      lVar16 = thunk_FUN_02f45174(lVar17,uVar9);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(lVar17,uVar9);
      }
    }
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (plVar15 == (long *)0x0) break;
    lVar17 = *plVar15;
LAB_05230090:
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 0x1e8);
    uVar9 = *(undefined8 *)(lVar17 + 0x1f0);
LAB_05230094:
                    /* WARNING: Could not recover jumptable at 0x052300a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(plVar15,lVar16,uVar9);
    return;
  case 8:
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (plVar15 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar15 + 0x1b8);
      uVar9 = *(undefined8 *)(*plVar15 + 0x1c0);
      uVar7 = (uint)(*(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8) == unaff_x20);
LAB_0522fb18:
                    /* WARNING: Could not recover jumptable at 0x0522fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar15,uVar7,uVar9);
      return;
    }
    break;
  case 9:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = (long *)unaff_x20[4];
    if (plVar15 != (long *)0x0) {
      if (*plVar15 == *(long *)PTR_DAT_067c9980) {
        puVar8 = (undefined8 *)thunk_FUN_02f453b8();
        uVar9 = *puVar8;
        in_stack_00000028 = uVar9;
        if (*(int *)(unaff_x19 + 0x20) == 2) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_050b7e58(&stack0x00000028,0);
        }
        else if (*(int *)(unaff_x19 + 0x20) == 1) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_050b83e4(&stack0x00000028,0);
        }
        in_stack_00000028 = uVar9;
        if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_051a8278(uVar9,0,0);
      }
      else {
        if (*(long *)(*plVar15 + 0x40) != *(long *)(*(long *)PTR_DAT_067c9988 + 0x40))
        goto Oculus_Interaction_GrabAPI_PinchGrabAPI__UpdateThumb;
        puVar8 = (undefined8 *)thunk_FUN_02f453b8();
        in_stack_00000018 = puVar8[1];
        in_stack_00000010 = *puVar8;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar9 = FUN_050ba0ac(&stack0x00000010,0);
        uVar10 = FUN_050ba23c(&stack0x00000010,0);
        if (*(int *)(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_02f6670c(*(long *)UnityEngine_UIElements_ChangeEvent<Bounds>_TypeInfo);
        }
        uVar9 = FUN_051a813c(uVar9,uVar10,0);
      }
      plVar15 = *(long **)(unaff_x19 + 0x10);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x278))(plVar15,uVar9,*(undefined8 *)(*plVar15 + 0x280));
        return;
      }
    }
    break;
  case 0xb:
    bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<OVRResult<OVRPlugin_Result>>_TypeInfo)) goto LAB_05230200;
    lVar16 = unaff_x20[4];
    if (lVar16 != 0) {
      plVar15 = *(long **)(lVar16 + 0x20);
      uVar12 = *(undefined4 *)(lVar16 + 0x2c);
      if ((plVar15 == (long *)0x0) ||
         (lVar16 = *(long *)(PTR_DAT_067c9338 + 0x90), *plVar15 == lVar16)) {
        FUN_05230460();
        lVar16 = unaff_x20[5];
        if (lVar16 == 0) break;
        plVar15 = *(long **)(lVar16 + 0x20);
        uVar12 = *(undefined4 *)(lVar16 + 0x2c);
        if ((plVar15 == (long *)0x0) || (lVar16 = *(long *)(puVar2 + 0x90), *plVar15 == lVar16)) {
          FUN_05230460();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar15,lVar16,uVar12);
    }
    break;
  default:
    thunk_FUN_02f6ef30(PTR_DAT_067c9fd8);
    FUN_02a7d698();
    uVar9 = FUN_050656a0(0);
    FUN_02a7da48();
    (**(code **)(*unaff_x20 + 0x178))();
    thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
    uVar10 = thunk_FUN_02f44ec4();
    uVar11 = thunk_FUN_02f6ef30(OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo);
    uVar9 = FUN_051b937c(uVar11,uVar9,uVar10,0);
    thunk_FUN_02f6ef30(PTR_DAT_067c9678);
    uVar10 = thunk_FUN_02f45270();
    uVar11 = thunk_FUN_02f6ef30(PTR_DAT_067d9410);
    FUN_0505262c(uVar10,uVar11,uVar9,0);
    uVar9 = thunk_FUN_02f6ef30(
                              OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar9);
  case 0x10:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(unaff_x19 + 0x10);
    lVar16 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050656a0(0);
    if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
    }
    uVar7 = FUN_05060320(lVar16,uVar9,0);
    if (plVar15 != (long *)0x0) {
      uVar9 = *(undefined8 *)(*plVar15 + 0x260);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar15 + 600);
      goto LAB_0522fb18;
    }
    break;
  case 0x12:
    bVar1 = *(byte *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo)) goto LAB_05230200;
    plVar15 = *(long **)(unaff_x19 + 0x10);
    lVar16 = unaff_x20[4];
    if (*(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050656a0(0);
    if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
    }
    lVar16 = FUN_05060d00(lVar16,uVar9,0);
    if (plVar15 == (long *)0x0) break;
    uVar9 = *(undefined8 *)(*plVar15 + 0x280);
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
      puVar8 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05230120;
    }
  }
LAB_05230070:
  puVar8 = (undefined8 *)FUN_02f421d0(in_stack_00000030,*(long *)PTR_DAT_067c91b0,0);
LAB_05230120:
  (*(code *)*puVar8)(plVar15,puVar8[1]);
  goto LAB_0523013c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0522fffc:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar8 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_052300f8;
    }
  }
LAB_05230014:
  puVar8 = (undefined8 *)FUN_02f421d0(in_stack_00000048,*(long *)PTR_DAT_067c91b0,0);
LAB_052300f8:
  (*(code *)*puVar8)(plVar15,puVar8[1]);
LAB_0523013c:
  plVar15 = *(long **)(unaff_x19 + 0x10);
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x1c8))(plVar15,0,*(undefined8 *)(*plVar15 + 0x1d0));
switchD_0522f6a0_caseD_6:
    return;
  }
LAB_052301fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


