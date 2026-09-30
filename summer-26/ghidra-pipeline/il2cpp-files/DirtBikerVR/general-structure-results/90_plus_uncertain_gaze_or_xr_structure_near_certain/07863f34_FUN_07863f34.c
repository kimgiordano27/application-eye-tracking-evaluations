/*
FUNCTION_NAME: FUN_07863f34
ENTRY_POINT: 07863f34
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_4
*/


void FUN_07863f34(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined2 local_58 [2];
  undefined2 local_54 [6];
  undefined4 local_48;
  undefined8 local_38;
  
  if ((DAT_08987637 & 1) == 0) {
    FUN_03a8a718(System_Collections_Generic_HashSet<StylePropertyId>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<HDAdditionalLightData>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<Transform>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<Type>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<RealtimeView>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<UIRenderer>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<ulong>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<VisualElement>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b28);
    FUN_03a8a718(System_Collections_Generic_HashSet<VisualTreeAsset>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<WaterSurface>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<WaypointSettingsBase>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08496400);
    FUN_03a8a718(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    DAT_08987637 = 1;
  }
  puVar4 = System_Collections_Generic_HashSet<HDAdditionalLightData>_TypeInfo;
  local_38 = 0;
  local_48 = 0;
  if (*param_1 != 0) {
    lVar10 = *(long *)(param_1 + 10);
    uVar5 = FUN_065cd284(*(undefined8 *)(param_1 + 8),0);
    if ((uVar5 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar6 = thunk_FUN_03ac74bc();
      uVar14 = thunk_FUN_03af1434(
                                 System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo
                                 );
      uVar9 = thunk_FUN_03af1434(PTR_DAT_0848fc58);
      FUN_066af718(uVar6,uVar14,uVar9,0);
      uVar14 = thunk_FUN_03af1434(
                                 System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar6,uVar14);
    }
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_HashSet<VisualElement>_TypeInfo);
    FUN_0787204c(uVar6,uVar14,0,1,0);
    lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_HashSet<ulong>_TypeInfo);
    FUN_04de7d48(lVar7,*(undefined8 *)System_Collections_Generic_HashSet<uint>_TypeInfo);
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar12 = *(long *)System_Collections_Generic_HashSet<UIRenderer>_TypeInfo;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 != 0) {
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
          *puVar8 = uVar6;
          thunk_FUN_03afed3c(puVar8,uVar6);
        }
        else {
          FUN_04de85b0(lVar7,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_HashSet<StylePropertyId>_TypeInfo);
        FUN_07870de0(uVar6,1,lVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        plVar15 = *(long **)(lVar10 + 0x10);
        uVar14 = thunk_FUN_03ac74bc(*(undefined8 *)System_Collections_Generic_HashSet<Type>_TypeInfo
                                   );
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar7 = *plVar15;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)System_Collections_Generic_HashSet<RealtimeView>_TypeInfo) {
              lVar7 = lVar7 + (long)*piVar13 * 0x10 + 0x138;
              goto LAB_078641d4;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        lVar7 = FUN_03ac43c4(plVar15,*(long *)
                                      System_Collections_Generic_HashSet<RealtimeView>_TypeInfo,0);
LAB_078641d4:
        FUN_0496d698(uVar14,plVar15,*(undefined8 *)(lVar7 + 8),0);
        puVar3 = PTR_DAT_08488b28;
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        local_54[0] = 0;
        FUN_05294928(local_54,*(undefined1 *)(*(long *)(param_1 + 0xc) + 0x10),
                     *(undefined8 *)PTR_DAT_08488b28);
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        local_58[0] = 0;
        FUN_05294928(local_58,*(undefined1 *)(*(long *)(param_1 + 0xc) + 0x11),*(undefined8 *)puVar3
                    );
        uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    System_Collections_Generic_HashSet<Transform>_TypeInfo);
        FUN_0787b1a8(uVar9,local_54[0],local_58[0],uVar6,0);
        lVar10 = FUN_048197b0(lVar10,*(undefined8 *)
                                      System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                              ,uVar14,uVar9,
                              *(undefined8 *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo
                             );
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        local_38 = FUN_058b71ec(lVar10,*(undefined8 *)
                                        System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
        uVar5 = FUN_0587c6c4(&local_38,
                             *(undefined8 *)
                              System_Collections_Generic_HashSet<WaypointSettingsBase>_TypeInfo);
        if ((uVar5 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0xe) = local_38;
          thunk_FUN_03afed3c(param_1 + 0xe,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_03ff3f40(param_1 + 2,&local_38,param_1,
                       *(undefined8 *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
          return;
        }
        goto LAB_078642a8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  local_38 = *(undefined8 *)(param_1 + 0xe);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = -1;
LAB_078642a8:
  lVar10 = FUN_0587c704(&local_38,
                        *(undefined8 *)System_Collections_Generic_HashSet<WaterSurface>_TypeInfo);
  if (lVar10 != 0) {
    uVar6 = *(undefined8 *)(lVar10 + 0x20);
    uVar14 = *(undefined8 *)(param_1 + 0xc);
    if (*(int *)(*(long *)PTR_DAT_08496400 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)PTR_DAT_08496400);
    }
    uVar6 = FUN_07862d14(uVar6,uVar14);
    puVar3 = System_Collections_Generic_HashSet<Text>_TypeInfo;
    iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(param_1 + 2,uVar6,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


