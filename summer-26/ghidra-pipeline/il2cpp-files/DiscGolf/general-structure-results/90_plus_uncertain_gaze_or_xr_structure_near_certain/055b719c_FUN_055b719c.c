/*
FUNCTION_NAME: FUN_055b719c
ENTRY_POINT: 055b719c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_055b719c(long param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar3 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_TypeInfo
  ;
  puVar2 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_TypeInfo;
  if ((DAT_06dbb64d & 1) == 0) {
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(System_Net_ServicePoint_var);
    FUN_02d965b8(PTR_DAT_06a119e8);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CreateBackfillTicketResponse>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_TypeInfo
                );
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<string,_string>>_TypeInfo
                );
    FUN_02d965b8(System_Runtime_Serialization_SerializationEntry_var);
    FUN_02d965b8(UnityEngine_UI_ScrollRect_var);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                );
    FUN_02d965b8(System_Action<OVRColocationSession_Data>_TypeInfo);
    DAT_06dbb64d = 1;
  }
  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_0400f984(lVar6,*(undefined8 *)puVar3);
  puVar2 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CreateBackfillTicketResponse>>_TypeInfo
  ;
  if (param_4 != (long *)0x0) {
    while (iVar4 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400)),
          iVar4 != 4) {
      if (iVar4 != 5) {
        if (iVar4 == 0xd) {
          return lVar6;
        }
        FUN_02979e58(param_4);
        uVar5 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
        local_78 = thunk_FUN_02dfd288(System_Drawing_Point_var);
        uStack_70 = 0xffffffffffffffff;
        local_68 = uVar5;
        uVar14 = FUN_0551e574(&local_78,0);
        uVar15 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        uVar14 = FUN_05362cb4(uVar15,uVar14,0);
        goto LAB_055b77bc;
      }
LAB_055b76bc:
      uVar13 = (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
      if ((uVar13 & 1) == 0) {
        FUN_055b578c(param_1,param_4,param_2,0,
                     *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo);
        return lVar6;
      }
    }
    plVar7 = (long *)(**(code **)(*param_4 + 0x198))(param_4,*(undefined8 *)(*param_4 + 0x1a0));
    if (plVar7 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                );
      FUN_0552aca4(lVar8,0);
      *(undefined8 *)(lVar8 + 0x10) = uVar14;
      LeanTween__value((undefined8 *)(lVar8 + 0x10),uVar14);
      if ((param_2 != 0) && (lVar9 = FUN_055aacb0(param_2), lVar9 != 0)) {
        lVar9 = FUN_055abe7c(lVar9,uVar14);
        plVar7 = (long *)(lVar8 + 0x20);
        *plVar7 = lVar9;
        LeanTween__value(plVar7,lVar9);
        if (*(long *)(param_2 + 0xd8) != 0) {
          lVar9 = FUN_055abe7c(*(long *)(param_2 + 0xd8),uVar14);
          plVar19 = (long *)(lVar8 + 0x18);
          *plVar19 = lVar9;
          LeanTween__value(plVar19,lVar9);
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar17 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar8;
                LeanTween__value(plVar10,lVar8);
              }
              else {
                FUN_040101ec(lVar6,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar9 = *plVar7;
              if ((lVar9 == 0) && (lVar9 = *plVar19, lVar9 == 0)) {
                uVar13 = (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
                if ((uVar13 & 1) != 0) {
                  plVar7 = *(long **)(param_1 + 0x28);
                  if (plVar7 != (long *)0x0) {
                    lVar9 = *plVar7;
                    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar13 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)System_Net_ServicePoint_var) {
                          puVar11 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_055b7520;
                        }
                        uVar13 = uVar13 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar11 = (undefined8 *)
                              FUN_02dd004c(plVar7,*(long *)System_Net_ServicePoint_var,0);
LAB_055b7520:
                    iVar4 = (*(code *)*puVar11)(plVar7,puVar11[1]);
                    if (3 < iVar4) {
                      plVar7 = *(long **)(param_1 + 0x28);
                      uVar15 = (**(code **)(*param_4 + 0x1c8))
                                         (param_4,*(undefined8 *)(*param_4 + 0x1d0));
                      if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
                      }
                      uVar16 = FUN_0547e2f8(0);
                      uVar16 = FUN_05588558(*(undefined8 *)
                                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                                            ,uVar16,uVar14,*(undefined8 *)(param_2 + 0x60),0);
                      if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
                      }
                      uVar12 = thunk_FUN_02dd3048(param_4,*(undefined8 *)
                                                           UnityEngine_UIElements_PanelRaycaster_var
                                                 );
                      uVar15 = FUN_05570ab4(uVar12,uVar15,uVar16,0);
                      if (plVar7 == (long *)0x0) goto LAB_055b7720;
                      lVar9 = *plVar7;
                      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar13 != 0) {
                        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)System_Net_ServicePoint_var) {
                            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                            goto FUN_055b7640;
                          }
                          uVar13 = uVar13 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar11 = (undefined8 *)
                                FUN_02dd004c(plVar7,*(long *)System_Net_ServicePoint_var,1);
FUN_055b7640:
                      (*(code *)*puVar11)(plVar7,4,uVar15,0,puVar11[1]);
                    }
                  }
                  if ((*(ulong *)(param_2 + 0xc0) & 0xff) == 0) {
                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_055b7720;
                    iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
                  }
                  else {
                    iVar4 = (int)(*(ulong *)(param_2 + 0xc0) >> 0x20);
                  }
                  if (iVar4 == 1) {
                    thunk_FUN_02dfd288(PTR_DAT_069fc178);
                    FUN_0297e1b4();
                    uVar15 = FUN_0547e2f8(0);
                    FUN_02979e58(param_5);
                    uVar16 = (**(code **)(*param_5 + 0x208))
                                       (param_5,*(undefined8 *)(*param_5 + 0x210));
                    uVar12 = thunk_FUN_02dfd288(System_Action<DragGesture,_Touch>_TypeInfo);
                    uVar14 = FUN_05588558(uVar12,uVar15,uVar14,uVar16,0);
                    goto LAB_055b77bc;
                  }
LAB_055b7680:
                  if (*(long *)(param_2 + 0xe0) == 0) {
                    FUN_055745fc(param_4,0);
                  }
                  else {
                    uVar14 = FUN_055b7cf8(param_1,param_2,param_3,param_4);
LAB_055b769c:
                    *(undefined8 *)(lVar8 + 0x30) = uVar14;
                    LeanTween__value((undefined8 *)(lVar8 + 0x30),uVar14);
                  }
                  goto LAB_055b76bc;
                }
              }
              else if (*(char *)(lVar9 + 0x80) == '\0') {
                lVar17 = *(long *)(lVar9 + 0x48);
                if (lVar17 == 0) {
                  uVar15 = FUN_055ae608(param_1,*(undefined8 *)(lVar9 + 0x40));
                  *(undefined8 *)(lVar9 + 0x48) = uVar15;
                  LeanTween__value((long *)(lVar9 + 0x48),uVar15);
                  lVar17 = *(long *)(lVar9 + 0x48);
                }
                plVar7 = (long *)FUN_055aea4c(param_1,lVar17,*(undefined8 *)(lVar9 + 0x78),param_2,
                                              param_3);
                uVar13 = FUN_05574ae8(param_4,*(undefined8 *)(lVar9 + 0x48),plVar7 != (long *)0x0,0)
                ;
                if ((uVar13 & 1) != 0) {
                  if ((plVar7 == (long *)0x0) ||
                     (uVar13 = (**(code **)(*plVar7 + 0x1a8))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
                     (uVar13 & 1) == 0)) {
                    uVar14 = FUN_055aeed0(param_1,param_4,*(undefined8 *)(lVar9 + 0x40),
                                          *(undefined8 *)(lVar9 + 0x48),lVar9,param_2,param_3,0);
                  }
                  else {
                    uVar14 = FUN_055aeab8(param_1,plVar7,param_4,*(undefined8 *)(lVar9 + 0x40),0);
                  }
                  goto LAB_055b769c;
                }
              }
              else {
                uVar13 = (**(code **)(*param_4 + 0x1d8))(param_4,*(undefined8 *)(*param_4 + 0x1e0));
                if ((uVar13 & 1) != 0) goto LAB_055b7680;
              }
              thunk_FUN_02dfd288(PTR_DAT_069fc178);
              FUN_0297e1b4();
              uVar15 = FUN_0547e2f8(0);
              uVar16 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
              uVar14 = FUN_055873e0(uVar16,uVar15,uVar14,0);
LAB_055b77bc:
              uVar14 = FUN_05574a94(param_4,uVar14,0);
              uVar15 = thunk_FUN_02dfd288(
                                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar14,uVar15);
            }
          }
        }
      }
    }
  }
LAB_055b7720:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


