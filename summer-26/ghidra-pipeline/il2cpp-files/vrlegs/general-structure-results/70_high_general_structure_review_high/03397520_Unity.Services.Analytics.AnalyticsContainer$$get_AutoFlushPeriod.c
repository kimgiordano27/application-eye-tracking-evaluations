/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsContainer$$get_AutoFlushPeriod
ENTRY_POINT: 03397520
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x03397ccc) */

long Unity_Services_Analytics_AnalyticsContainer__get_AutoFlushPeriod
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar11;
  long unaff_x25;
  long lVar12;
  undefined8 uVar13;
  long unaff_x26;
  long unaff_x27;
  long lVar14;
  long lVar15;
  long unaff_x28;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  
  while (uVar4 = FUN_036d3824(param_1,param_2), unaff_x28 != 0) {
    *(undefined8 *)(unaff_x28 + 0x28) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfeee0);
    FUN_021dd4e8(uVar4,unaff_x25,*(undefined8 *)UnityEngine_Timeline_IPropertyCollector_TypeInfo,0);
    *(undefined8 *)(unaff_x28 + 0x48) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x28 + 0x48),uVar4);
    if (unaff_x27 == 0) break;
    FUN_0224c198(unaff_x27,unaff_x28,*(undefined8 *)FluffyUnderware_DevTools_IPoolable_TypeInfo);
    lVar14 = *(long *)(unaff_x23 + 0x48);
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)FluffyUnderware_DevTools_IPool_TypeInfo);
    FUN_033a0acc(lVar5,0);
    uVar4 = FUN_036d3824(unaff_x26,0);
    if (lVar5 == 0) break;
    *(undefined8 *)(lVar5 + 0x28) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)Photon_Realtime_IOnEventCallback_TypeInfo);
    FUN_021dd4e8(uVar4,unaff_x25,*unaff_x19,0);
    *(undefined8 *)(lVar5 + 0x48) = uVar4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar5 + 0x48),uVar4);
    if (lVar14 == 0) break;
    FUN_0224c198(lVar14,lVar5,*(undefined8 *)FluffyUnderware_DevTools_IPoolable_TypeInfo);
    unaff_x20 = unaff_x20 + 1;
    if ((long)*(int *)(unaff_x24 + 0x18) <= (long)unaff_x20) {
      if (*in_stack_00000008 != 0) {
        lVar12 = *(long *)(*in_stack_00000008 + 0x48);
        lVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                    UnityEngine_UIElements_IPointerCaptureEventInternal_TypeInfo);
        FUN_0339b674(lVar5,0);
        puVar1 = UnityEngine_UIElements_IMouseEventInternal_TypeInfo;
        lVar14 = *(long *)UnityEngine_UIElements_IMouseEventInternal_TypeInfo;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar14 = *(long *)puVar1;
        }
        puVar1 = Unity_Services_Authentication_Generated_IPlayerNamesApi_TypeInfo;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x38);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          lVar14 = *(long *)puVar1;
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar14 = *(long *)puVar1;
          }
          lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x28);
          if (lVar15 == 0) {
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar14 = *(long *)puVar1;
            }
            uVar4 = **(undefined8 **)(lVar14 + 0xb8);
            lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfeee0);
            FUN_021dd4e8(lVar15,uVar4,*(undefined8 *)Unity_Properties_IProperty_TypeInfo,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
            *plVar6 = lVar15;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar15);
          }
          *(long *)(lVar5 + 0x48) = lVar15;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((long *)(lVar5 + 0x48),lVar15);
          if (lVar12 != 0) {
            FUN_0224c198(lVar12,lVar5,*(undefined8 *)FluffyUnderware_DevTools_IPoolable_TypeInfo);
            plVar6 = (long *)UnityEngine_EventSystems_IPointerExitHandler_TypeInfo;
            if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x48), lVar5 != 0)) {
              FUN_0224c198(lVar5,*in_stack_00000008,
                           *(undefined8 *)FluffyUnderware_DevTools_IPoolable_TypeInfo);
              lVar12 = *(long *)(unaff_x23 + 0x48);
              lVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                                          UnityEngine_UIElements_IPointerCaptureEventInternal_TypeInfo
                                        );
              FUN_0339b674(lVar5,0);
              lVar14 = *(long *)puVar1;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
                lVar14 = *(long *)puVar1;
              }
              lVar15 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x30);
              if (lVar15 == 0) {
                if (*(int *)(lVar14 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                  lVar14 = *(long *)puVar1;
                }
                uVar4 = **(undefined8 **)(lVar14 + 0xb8);
                lVar15 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfeee0);
                FUN_021dd4e8(lVar15,uVar4,*(undefined8 *)Unity_Properties_IPropertyBag_TypeInfo,0);
                plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
                *plVar6 = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar15);
                plVar6 = (long *)UnityEngine_EventSystems_IPointerExitHandler_TypeInfo;
              }
              if (lVar5 != 0) {
                *(long *)(lVar5 + 0x48) = lVar15;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((long *)(lVar5 + 0x48),lVar15);
                if (lVar12 != 0) {
                  FUN_0224c198(lVar12,lVar5,
                               *(undefined8 *)FluffyUnderware_DevTools_IPoolable_TypeInfo);
                  if ((*unaff_x21 != 0) && (*(long *)(*unaff_x21 + 0x48) != 0)) {
                    FUN_0224c198();
                    uVar4 = thunk_FUN_01a89e68(*(undefined8 *)
                                                UnityEngine_EventSystems_IPointerUpHandler_TypeInfo)
                    ;
                    Animancer_AnimancerState__OnSetIsPlaying
                              (uVar4,*(undefined8 *)
                                      UnityEngine_EventSystems_IPointerMoveHandler_TypeInfo);
                    puVar11 = (undefined8 *)(in_stack_00000018 + 0x18);
                    *puVar11 = uVar4;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,uVar4)
                    ;
                    FUN_03397da4(in_stack_00000018,*(undefined8 *)(in_stack_00000018 + 0x38),0,0);
                    lVar5 = *(long *)puVar1;
                    uVar4 = *puVar11;
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                      lVar5 = *(long *)puVar1;
                    }
                    lVar14 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x40);
                    if (lVar14 == 0) {
                      if (*(int *)(lVar5 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                        lVar5 = *(long *)puVar1;
                      }
                      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
                      lVar14 = thunk_FUN_01a89e68(*(undefined8 *)
                                                                                                      
                                                  UnityEngine_EventSystems_IPointerEnterHandler_TypeInfo
                                                 );
                      FUN_021de1ac(lVar14,uVar13,
                                   *(undefined8 *)
                                    _Common_PlayerBehaviourTracker_Scripts_IPrimitiveData_TypeInfo,0
                                  );
                      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
                      *plVar7 = lVar14;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar7,lVar14);
                    }
                    plVar7 = (long *)FUN_01f6cc94(uVar4,lVar14,
                                                  *(undefined8 *)
                                                                                                      
                                                  UnityEngine_EventSystems_IPointerDownHandler_TypeInfo
                                                 );
                    if (plVar7 != (long *)0x0) {
                      lVar5 = *plVar7;
                      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar9 == 0) goto LAB_03397980;
                      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      goto LAB_03397968;
                    }
                  }
                }
              }
            }
          }
        }
      }
      break;
    }
    unaff_x25 = thunk_FUN_01a89e68(*(undefined8 *)Unity_Serialization_IPropertyWrapper_TypeInfo);
    FUN_0339983c(unaff_x25,0);
    if (unaff_x25 == 0) break;
    plVar6 = (long *)(unaff_x25 + 0x18);
    *plVar6 = in_stack_00000018;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,in_stack_00000018);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x20) goto LAB_03397cbc;
    plVar7 = (long *)(unaff_x25 + 0x10);
    *plVar7 = *(long *)(unaff_x22 + unaff_x20 * 8);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7);
    if (*plVar7 == 0) break;
    uVar9 = FUN_033b5740(*plVar7,0);
    lVar5 = *plVar7;
    if (lVar5 == 0) break;
    if ((uVar9 & 1) == 0) {
      param_1 = *(long *)(lVar5 + 0x30);
    }
    else {
      param_1 = FUN_033b5408(lVar5,0);
    }
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x20), lVar5 == 0)) break;
    unaff_x27 = *(long *)(lVar5 + 0x48);
    unaff_x28 = thunk_FUN_01a89e68(*(undefined8 *)
                                    UnityEngine_UIElements_IPointerCaptureEventInternal_TypeInfo);
    FUN_0339b674(unaff_x28,0);
    if (param_1 == 0) break;
    param_2 = 0;
    unaff_x26 = param_1;
  }
  goto LAB_03397c44;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03397968:
    if (*(long *)(piVar10 + -2) == *(long *)UnityEngine_UIElements_IPointerEvent_TypeInfo) {
      puVar11 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0339799c;
    }
  }
LAB_03397980:
  puVar11 = (undefined8 *)
            FUN_01a472ec(plVar7,*(long *)UnityEngine_UIElements_IPointerEvent_TypeInfo,0);
LAB_0339799c:
  plVar7 = (long *)(*(code *)*puVar11)(plVar7,puVar11[1]);
  puVar2 = UnityEngine_UIElements_IPointerEventInternal_TypeInfo;
  puVar1 = PTR_DAT_03cbed20;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar5 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar11 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03397a0c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar1,0);
LAB_03397a0c:
    uVar9 = (*(code *)*puVar11)(plVar7,puVar11[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03397b0c;
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 == 0) goto LAB_03397ae4;
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar7;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03397a68;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,0);
LAB_03397a68:
    uVar4 = (*(code *)*puVar11)(plVar7,puVar11[1]);
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar4,uVar4);
    }
    lVar5 = *(long *)(*unaff_x21 + 0x48);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(0,uVar4);
    }
    FUN_0224c198(lVar5,uVar4,*(undefined8 *)FluffyUnderware_DevTools_IPoolable_TypeInfo);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar11 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03397b00;
    }
  }
LAB_03397ae4:
  puVar11 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed08,0);
LAB_03397b00:
  (*(code *)*puVar11)(plVar7,puVar11[1]);
LAB_03397b0c:
  if ((*in_stack_00000000 != 0) &&
     (plVar7 = *(long **)(*in_stack_00000000 + 0x10), plVar7 != (long *)0x0)) {
    lVar5 = *plVar7;
    lVar14 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *plVar6) {
          puVar11 = (undefined8 *)(lVar5 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_03397b74;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_01a472ec(plVar7,*plVar6,9);
LAB_03397b74:
    (*(code *)*puVar11)(plVar7,lVar14,puVar11[1]);
    lVar5 = *in_stack_00000010;
    if (lVar5 != 0) {
      uVar9 = 0;
      do {
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar9) {
          lVar5 = *(long *)(in_stack_00000018 + 0x50);
          *(undefined8 *)(in_stack_00000018 + 0x48) = DAT_00d37fc8;
          uVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc8808);
          FUN_021dd4e8(uVar4,in_stack_00000018,
                       *(undefined8 *)Unity_Properties_Internal_IPropertyBagRegister_TypeInfo,0);
          if (lVar5 != 0) {
            puVar11 = (undefined8 *)(lVar5 + 0x40);
            *puVar11 = uVar4;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar11,uVar4);
            return *unaff_x21;
          }
          break;
        }
        if (*in_stack_00000000 == 0) break;
        if (*(uint *)(lVar5 + 0x18) <= uVar9) {
LAB_03397cbc:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar7 = *(long **)(*in_stack_00000000 + 0x10);
        if (plVar7 == (long *)0x0) break;
        lVar14 = *plVar7;
        lVar12 = *unaff_x21;
        uVar4 = *(undefined8 *)(lVar5 + uVar9 * 8 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *plVar6) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar10 + 8) * 0x10 + 0x138);
              goto Unity_Services_Analytics_Data_CommonDataWrapper__get_BatteryLevel;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01a472ec(plVar7,*plVar6,8);
Unity_Services_Analytics_Data_CommonDataWrapper__get_BatteryLevel:
        uVar3 = (*(code *)*puVar11)(plVar7,uVar4,puVar11[1]);
        if (lVar12 == 0) break;
        uVar9 = uVar9 + 1;
        FUN_0339f970(lVar12,uVar9 & 0xffffffff,uVar3 & 1,0);
        lVar5 = *in_stack_00000010;
      } while (lVar5 != 0);
    }
  }
LAB_03397c44:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


