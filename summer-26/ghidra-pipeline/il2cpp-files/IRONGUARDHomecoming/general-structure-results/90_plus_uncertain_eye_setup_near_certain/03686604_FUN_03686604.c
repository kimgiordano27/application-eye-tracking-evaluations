/*
FUNCTION_NAME: FUN_03686604
ENTRY_POINT: 03686604
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 135
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_13;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x03686c8c) */
/* WARNING: Removing unreachable block (ram,0x03686e44) */

void FUN_03686604(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  
  puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_6__;
  if ((DAT_04833e80 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_1__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_10__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_11__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_12__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_7__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_15__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_18__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_8__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_6__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_21__);
    thunk_FUN_01efb3a4(Method_OVRControllerTest_<>c_<Start>b__4_22__);
    DAT_04833e80 = 1;
  }
  uVar3 = FUN_03686f28(param_1);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar7);
    lVar7 = *(long *)puVar1;
  }
  puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_1__;
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
      lVar7 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_12__);
    FUN_02e66540(lVar11,uVar12,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_8__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar11;
    thunk_FUN_01f51358(plVar4,lVar11);
  }
  uVar3 = FUN_022f9efc(uVar3,lVar11,*(undefined8 *)puVar2);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar7);
    lVar7 = *(long *)puVar1;
  }
  puVar2 = Method_OVRControllerTest_<>c_<Start>b__4_10__;
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x18);
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar7);
      lVar7 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_11__);
    FUN_02e6c748(lVar11,uVar12,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar4 = lVar11;
    thunk_FUN_01f51358(plVar4,lVar11);
  }
  plVar4 = (long *)FUN_02300e64(uVar3,lVar11,*(undefined8 *)puVar2);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_15__) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_036868b4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_15__,0);
LAB_036868b4:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar2 = Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__;
  puVar1 = Method_Oculus_Platform_Message<LaunchReportFlowResult>__ctor__;
LAB_036868e4:
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03686940;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                        ,0);
LAB_03686940:
  uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  if ((uVar9 & 1) != 0) {
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036869a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)Method_OVRControllerTest_<>c_<Start>b__4_18__,0);
LAB_036869a8:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar13 = *(long **)(lVar7 + 0x18);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03686a18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar13,*(long *)
                                   Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_85__
                          ,0);
LAB_03686a18:
    plVar13 = (long *)(*(code *)*puVar5)(plVar13,puVar5[1]);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03686a80;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar13,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                            ,0);
LAB_03686a80:
      uVar9 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if ((uVar9 & 1) == 0) goto LAB_03686c20;
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03686ae4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar13,*(long *)
                                     Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_86__
                            ,0);
LAB_03686ae4:
      uVar3 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
          == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar11 = FUN_023aa7e0(uVar12,*(undefined8 *)
                                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__
                           );
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = FUN_023361c8(lVar11,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_7__);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0368465c(lVar6,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
                   *(undefined4 *)(lVar7 + 0x10),uVar3);
      lVar11 = FUN_04073258(lVar11,0);
      uVar3 = FUN_04070398(param_1,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar3,uVar3);
      }
      FUN_0407db5c(lVar11,uVar3,0);
      if (DAT_0482ee10 == '\0') {
        thunk_FUN_01efb3a4(puVar2);
        DAT_0482ee10 = '\x01';
      }
      lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
      FUN_0407da88(*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                   *(undefined4 *)(lVar6 + 0x14),lVar11,0);
      if (DAT_0482ee0f == '\0') {
        thunk_FUN_01efb3a4(puVar1);
        DAT_0482ee0f = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      FUN_0407d6f4(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar11,0);
      if (DAT_0482ee12 == '\0') {
        thunk_FUN_01efb3a4(puVar2);
        DAT_0482ee12 = '\x01';
      }
      puVar8 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
      FUN_0407c958(*puVar8,puVar8[1],puVar8[2],lVar11,0);
    } while( true );
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 == 0) goto LAB_03686d68;
  piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_03686d50;
LAB_03686c20:
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03686c7c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar13,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03686c7c:
    (*(code *)*puVar5)(plVar13,puVar5[1]);
  }
  goto LAB_036868e4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03686d50:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03686d84;
    }
  }
LAB_03686d68:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03686d84:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


