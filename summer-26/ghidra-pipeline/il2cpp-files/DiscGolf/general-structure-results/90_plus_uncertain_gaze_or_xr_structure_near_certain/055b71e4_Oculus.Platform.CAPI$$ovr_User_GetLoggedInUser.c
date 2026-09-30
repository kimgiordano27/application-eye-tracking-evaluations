/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetLoggedInUser
ENTRY_POINT: 055b71e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 110
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long Oculus_Platform_CAPI__ovr_User_GetLoggedInUser(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *plVar18;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x24 + 0x64d) = 1;
  }
  lVar5 = thunk_FUN_02dd3144(*unaff_x25);
  FUN_0400f984(lVar5,*unaff_x20);
  puVar2 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<CreateBackfillTicketResponse>>_TypeInfo
  ;
  if (unaff_x19 != (long *)0x0) {
    while (iVar3 = (**(code **)(*unaff_x19 + 0x188))(), iVar3 != 4) {
      if (iVar3 != 5) {
        if (iVar3 == 0xd) {
          return lVar5;
        }
        FUN_02979e58();
        uVar4 = (**(code **)(*unaff_x19 + 0x188))();
        in_stack_00000018 = thunk_FUN_02dfd288(System_Drawing_Point_var);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar4;
        uVar13 = FUN_0551e574(&stack0x00000018,0);
        uVar14 = thunk_FUN_02dfd288(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
        FUN_05362cb4(uVar14,uVar13,0);
        goto LAB_055b77bc;
      }
LAB_055b76bc:
      uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
      if ((uVar12 & 1) == 0) {
        FUN_055b578c();
        return lVar5;
      }
    }
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar6 != (long *)0x0) {
      uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      lVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetItemsResponse>>_TypeInfo
                                );
      FUN_0552aca4(lVar7,0);
      *(undefined8 *)(lVar7 + 0x10) = uVar13;
      LeanTween__value((undefined8 *)(lVar7 + 0x10),uVar13);
      if ((unaff_x21 != 0) && (lVar8 = FUN_055aacb0(), lVar8 != 0)) {
        lVar8 = FUN_055abe7c(lVar8,uVar13);
        plVar6 = (long *)(lVar7 + 0x20);
        *plVar6 = lVar8;
        LeanTween__value(plVar6,lVar8);
        if (*(long *)(unaff_x21 + 0xd8) != 0) {
          lVar8 = FUN_055abe7c(*(long *)(unaff_x21 + 0xd8),uVar13);
          plVar18 = (long *)(lVar7 + 0x18);
          *plVar18 = lVar8;
          LeanTween__value(plVar18,lVar8);
          if (lVar5 != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar7;
                LeanTween__value(plVar9,lVar7);
              }
              else {
                FUN_040101ec(lVar5,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = *plVar6;
              if ((lVar8 == 0) && (lVar8 = *plVar18, lVar8 == 0)) {
                uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
                if ((uVar12 & 1) != 0) {
                  plVar6 = *(long **)(unaff_x23 + 0x28);
                  if (plVar6 != (long *)0x0) {
                    lVar8 = *plVar6;
                    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar12 != 0) {
                      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == *(long *)System_Net_ServicePoint_var) {
                          puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                          goto LAB_055b7520;
                        }
                        uVar12 = uVar12 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar10 = (undefined8 *)
                              FUN_02dd004c(plVar6,*(long *)System_Net_ServicePoint_var,0);
LAB_055b7520:
                    iVar3 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                    if (3 < iVar3) {
                      plVar6 = *(long **)(unaff_x23 + 0x28);
                      uVar14 = (**(code **)(*unaff_x19 + 0x1c8))();
                      if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
                      }
                      uVar15 = FUN_0547e2f8(0);
                      uVar15 = FUN_05588558(*(undefined8 *)
                                             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_TypeInfo
                                            ,uVar15,uVar13,*(undefined8 *)(unaff_x21 + 0x60),0);
                      if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
                        thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
                      }
                      uVar11 = thunk_FUN_02dd3048();
                      uVar14 = FUN_05570ab4(uVar11,uVar14,uVar15,0);
                      if (plVar6 == (long *)0x0) goto LAB_055b7720;
                      lVar8 = *plVar6;
                      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar12 != 0) {
                        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == *(long *)System_Net_ServicePoint_var) {
                            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                            goto FUN_055b7640;
                          }
                          uVar12 = uVar12 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar10 = (undefined8 *)
                                FUN_02dd004c(plVar6,*(long *)System_Net_ServicePoint_var,1);
FUN_055b7640:
                      (*(code *)*puVar10)(plVar6,4,uVar14,0,puVar10[1]);
                    }
                  }
                  if ((*(ulong *)(unaff_x21 + 0xc0) & 0xff) == 0) {
                    if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_055b7720;
                    iVar3 = *(int *)(*(long *)(unaff_x23 + 0x20) + 0x20);
                  }
                  else {
                    iVar3 = (int)(*(ulong *)(unaff_x21 + 0xc0) >> 0x20);
                  }
                  if (iVar3 == 1) {
                    thunk_FUN_02dfd288(PTR_DAT_069fc178);
                    FUN_0297e1b4();
                    uVar14 = FUN_0547e2f8(0);
                    FUN_02979e58(unaff_x29);
                    uVar15 = (**(code **)(*unaff_x29 + 0x208))
                                       (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x210));
                    uVar11 = thunk_FUN_02dfd288(System_Action<DragGesture,_Touch>_TypeInfo);
                    FUN_05588558(uVar11,uVar14,uVar13,uVar15,0);
                    goto LAB_055b77bc;
                  }
LAB_055b7680:
                  if (*(long *)(unaff_x21 + 0xe0) == 0) {
                    FUN_055745fc();
                  }
                  else {
                    uVar13 = FUN_055b7cf8();
LAB_055b769c:
                    *(undefined8 *)(lVar7 + 0x30) = uVar13;
                    LeanTween__value((undefined8 *)(lVar7 + 0x30),uVar13);
                  }
                  goto LAB_055b76bc;
                }
              }
              else if (*(char *)(lVar8 + 0x80) == '\0') {
                if (*(long *)(lVar8 + 0x48) == 0) {
                  uVar14 = FUN_055ae608();
                  *(undefined8 *)(lVar8 + 0x48) = uVar14;
                  LeanTween__value((long *)(lVar8 + 0x48),uVar14);
                }
                plVar6 = (long *)FUN_055aea4c();
                uVar12 = FUN_05574ae8();
                if ((uVar12 & 1) != 0) {
                  if ((plVar6 == (long *)0x0) ||
                     (uVar12 = (**(code **)(*plVar6 + 0x1a8))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x1b0)),
                     (uVar12 & 1) == 0)) {
                    uVar13 = FUN_055aeed0();
                  }
                  else {
                    uVar13 = FUN_055aeab8();
                  }
                  goto LAB_055b769c;
                }
              }
              else {
                uVar12 = (**(code **)(*unaff_x19 + 0x1d8))();
                if ((uVar12 & 1) != 0) goto LAB_055b7680;
              }
              thunk_FUN_02dfd288(PTR_DAT_069fc178);
              FUN_0297e1b4();
              uVar14 = FUN_0547e2f8(0);
              uVar15 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
              FUN_055873e0(uVar15,uVar14,uVar13,0);
LAB_055b77bc:
              uVar13 = FUN_05574a94();
              uVar14 = thunk_FUN_02dfd288(
                                         System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_TypeInfo
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar13,uVar14);
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


