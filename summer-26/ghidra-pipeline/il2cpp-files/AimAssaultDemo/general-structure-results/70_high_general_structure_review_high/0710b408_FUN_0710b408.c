/*
FUNCTION_NAME: FUN_0710b408
ENTRY_POINT: 0710b408
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;ui_or_gameplay_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0710c6bc) */
/* WARNING: Removing unreachable block (ram,0x0710c3cc) */
/* WARNING: Removing unreachable block (ram,0x0710c66c) */
/* WARNING: Removing unreachable block (ram,0x0710c60c) */
/* WARNING: Removing unreachable block (ram,0x0710c114) */
/* WARNING: Removing unreachable block (ram,0x0710c528) */

void FUN_0710b408(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  char cVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  ulong local_118;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *plStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  uint local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *local_88;
  long local_80;
  long local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  
  puVar3 = Newtonsoft_Json_Linq_JObject_var;
  local_68 = param_1;
  if ((DAT_08267d9b & 1) == 0) {
    FUN_0373b518(System_Action<ARPlanesChangedEventArgs>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d97d98);
    FUN_0373b518(PTR_DAT_07df4d70);
    FUN_0373b518(PTR_DAT_07dfc0d8);
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
    FUN_0373b518(System_Action<CollisionEventsForwarder,_Collider>_TypeInfo);
    FUN_0373b518(System_Action<CollisionEventsForwarder,_Collision>_TypeInfo);
    FUN_0373b518(System_Action<Column,_ColumnDataType>_TypeInfo);
    FUN_0373b518(PTR_DAT_07dbb5c0);
    FUN_0373b518(PTR_DAT_07dbb5c8);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(Newtonsoft_Json_Linq_JObject_var);
    FUN_0373b518(PTR_DAT_07df8330);
    FUN_0373b518(PTR_DAT_07d86518);
    FUN_0373b518(PTR_DAT_07d97de8);
    FUN_0373b518(PTR_DAT_07df4d50);
    FUN_0373b518(Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1>_var);
    FUN_0373b518(System_Resources_ResourceReader_var);
    FUN_0373b518(PTR_DAT_07df4970);
    FUN_0373b518(PTR_DAT_07d89f20);
    FUN_0373b518(System_Action<Column,_int>_TypeInfo);
    FUN_0373b518(System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo);
    FUN_0373b518(System_Action<DragGesture,_Touch>_TypeInfo);
    FUN_0373b518(System_Action<DragGesture,_Touch>_TypeInfo);
    FUN_0373b518(System_Action<GameObject,_AxisEventData>_TypeInfo);
    FUN_0373b518(System_Action<GameObject,_BaseEventData>_TypeInfo);
    FUN_0373b518(System_Action<GameObject,_PointerEventData>_TypeInfo);
    FUN_0373b518(System_Action<InputControl,_InputEventPtr>_TypeInfo);
    FUN_0373b518(System_Action<InputDevice,_InputDeviceChange>_TypeInfo);
    FUN_0373b518(System_Action<InputEventPtr,_InputDevice>_TypeInfo);
    DAT_08267d9b = 1;
  }
  local_70[0] = 0;
  local_80 = 0;
  local_78 = 0;
  local_a8 = (long *)0x0;
  local_b0 = 0;
  local_b8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = (long *)0x0;
  uStack_90 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = 0;
  uVar12 = FUN_04147de4(2,*(undefined8 *)puVar3);
  FUN_06f533dc(local_70,uVar12,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_03f0eaa0(param_2,&local_78,*(undefined8 *)PTR_DAT_07dfc0d8);
  lVar14 = local_78;
  if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075aa744(lVar14,0,0);
  lVar14 = local_78;
  puVar3 = PTR_DAT_07d97de8;
  if ((uVar13 & 1) != 0) {
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(int *)(local_78 + 0x2c) == 1) goto LAB_0710c5e0;
  }
  if (*(int *)(*(long *)PTR_DAT_07d97de8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar14 = FUN_0710d244(param_2,lVar14);
  if (lVar14 == 0) {
    lVar24 = 0;
  }
  else {
    uVar9 = FUN_07095254(lVar14,0,0);
    lVar24 = 0;
    if ((local_78 != 0) && (((uVar9 ^ 1) & 1) == 0)) {
      lVar24 = FUN_070eff10(local_78,0);
    }
  }
  lVar15 = local_78;
  if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_075aa744(lVar15,0,0);
  if ((uVar13 & 1) == 0) {
    bVar5 = false;
  }
  else {
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    bVar5 = *(char *)(local_78 + 0x4c) != '\0';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  bVar6 = FUN_071113a0();
  lVar15 = FUN_070fbc78();
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(long *)(lVar15 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (lVar24 == 0) {
LAB_0710bcc8:
    iVar25 = -1;
  }
  else {
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar16 = (long *)thunk_FUN_0374b7cc(lVar14,0);
    lVar15 = *(long *)puVar3;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar15 = *(long *)puVar3;
    }
    **(undefined1 **)(lVar15 + 0xb8) = 0;
    puVar2 = PTR_DAT_07d86548;
    if (*(int *)(lVar24 + 0x18) < 1) goto LAB_0710bcc8;
    bVar1 = false;
    iVar11 = 0;
    iVar25 = -1;
    do {
      lVar15 = FUN_049cec24(lVar24,iVar11,*(undefined8 *)PTR_DAT_07dbb5c8);
      if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar13 = FUN_075ac5e0(lVar15,0,0);
      if ((uVar13 & 1) == 0) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar13 = FUN_075a6c34(lVar15,0);
        if ((uVar13 & 1) != 0) {
          FUN_03f0eaa0(lVar15,&local_80,*(undefined8 *)PTR_DAT_07dfc0d8);
          lVar20 = local_80;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          plVar17 = (long *)FUN_0710d244(lVar15,lVar20);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          plVar18 = (long *)thunk_FUN_0374b7cc(plVar17,0);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar13 = FUN_0625b9c4(plVar18,plVar16,0);
          if ((uVar13 & 1) == 0) {
            uVar9 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
            lVar20 = local_80;
            if ((uVar9 >> 1 & 1) == 0) {
              lVar20 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d86518,5);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              *(undefined8 *)(lVar20 + 0x20) =
                   *(undefined8 *)System_Action<GameObject,_BaseEventData>_TypeInfo;
              thunk_FUN_037aeb94();
              uVar12 = thunk_FUN_075b0210(lVar15,0);
              if (*(uint *)(lVar20 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              *(undefined8 *)(lVar20 + 0x28) = uVar12;
              thunk_FUN_037aeb94();
              if (*(uint *)(lVar20 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              *(undefined8 *)(lVar20 + 0x30) =
                   *(undefined8 *)System_Action<DragGesture,_Touch>_TypeInfo;
              thunk_FUN_037aeb94();
              plVar17 = (long *)thunk_FUN_0374b7cc(lVar14,0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar12 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
              if (*(uint *)(lVar20 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              *(undefined8 *)(lVar20 + 0x38) = uVar12;
              thunk_FUN_037aeb94();
              if (*(uint *)(lVar20 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              *(undefined8 *)(lVar20 + 0x40) =
                   *(undefined8 *)System_Action<InputDevice,_InputDeviceChange>_TypeInfo;
              thunk_FUN_037aeb94();
              uVar12 = FUN_060c1cd4(lVar20,0);
              if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_0755a078(uVar12,0);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              uVar13 = FUN_075ac5e0(lVar20,0,0);
              if ((uVar13 & 1) == 0) {
                if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                if (*(int *)(local_80 + 0x2c) == 1) {
                  lVar15 = *(long *)puVar3;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    thunk_FUN_03798b70();
                    lVar15 = *(long *)puVar3;
                  }
                  bVar8 = **(byte **)(lVar15 + 0xb8);
                  bVar7 = FUN_07111480();
                  **(byte **)(*(long *)puVar3 + 0xb8) = bVar8 | bVar7 & 1;
                  if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0373b7b4();
                  }
                  bVar5 = (bool)(bVar5 | *(char *)(local_80 + 0x4c) != '\0');
                  iVar25 = iVar11;
                  goto LAB_0710bc94;
                }
              }
              uVar12 = thunk_FUN_075b0210(lVar15,0);
              if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(local_80 + 0x2c));
              uVar22 = thunk_FUN_037784fc(*(undefined8 *)
                                           System_Action<ARPlanesChangedEventArgs>_TypeInfo,
                                          &local_f8);
              uVar22 = FUN_060b76a8(*(undefined8 *)
                                     System_Action<InputControl,_InputEventPtr>_TypeInfo,uVar22,0);
              uVar12 = FUN_060c1bcc(*(undefined8 *)System_Action<DragGesture,_Touch>_TypeInfo,uVar12
                                    ,*(undefined8 *)PTR_DAT_07d89f20,uVar22,0);
              if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_0755a078(uVar12,0);
            }
          }
          else {
            lVar20 = RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d86518,9);
            if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            if (*(int *)(lVar20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)System_Action<Column,_int>_TypeInfo;
            thunk_FUN_037aeb94();
            uVar12 = thunk_FUN_075b0210(lVar15,0);
            if (*(uint *)(lVar20 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x28) = uVar12;
            thunk_FUN_037aeb94();
            if (*(uint *)(lVar20 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x30) =
                 *(undefined8 *)System_Action<InputEventPtr,_InputDevice>_TypeInfo;
            thunk_FUN_037aeb94();
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar12 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            if (*(uint *)(lVar20 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x38) = uVar12;
            thunk_FUN_037aeb94();
            if (*(uint *)(lVar20 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x40) =
                 *(undefined8 *)System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo;
            thunk_FUN_037aeb94();
            uVar12 = thunk_FUN_075b0210(param_2,0);
            if (*(uint *)(lVar20 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x48) = uVar12;
            thunk_FUN_037aeb94();
            if (*(uint *)(lVar20 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x50) =
                 *(undefined8 *)System_Action<GameObject,_PointerEventData>_TypeInfo;
            thunk_FUN_037aeb94();
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar12 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if (*(uint *)(lVar20 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x58) = uVar12;
            thunk_FUN_037aeb94();
            if (*(uint *)(lVar20 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            *(undefined8 *)(lVar20 + 0x60) =
                 *(undefined8 *)System_Action<GameObject,_AxisEventData>_TypeInfo;
            thunk_FUN_037aeb94();
            uVar12 = FUN_060c1cd4(lVar20,0);
            if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_0755a078(uVar12,0);
          }
        }
      }
      else {
        bVar1 = true;
      }
LAB_0710bc94:
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(lVar24 + 0x18));
    if (bVar1) {
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_070f9490(local_78,0);
    }
  }
  if (local_78 == 0) {
    cVar23 = '\x01';
  }
  else {
    cVar23 = *(char *)(local_78 + 0x5b);
  }
  if (*(int *)(*(long *)PTR_DAT_07df4970 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_06f32228(0);
  if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_06f2c7e0(uVar13,param_2,cVar23 != '\0',0);
  if (*(long *)(uVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_048d1e64(&local_f8,*(long *)(uVar13 + 0x10),
               *(undefined8 *)System_Action<Column,_ColumnDataType>_TypeInfo);
  bVar1 = false;
  uStack_98 = uStack_f0;
  local_a0 = local_f8;
  local_88 = plStack_e0;
  uStack_90 = local_e8;
  uVar26 = uVar13;
  while (uVar19 = FUN_05d36c68(&local_a0,
                               *(undefined8 *)
                                System_Action<CollisionEventsForwarder,_Collider>_TypeInfo),
        plVar16 = local_88, (uVar19 & 1) != 0) {
    local_a8 = local_88;
    if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    bVar8 = *(byte *)(*(long *)Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1>_var +
                     0x130);
    if (*(byte *)(*local_88 + 0x130) < bVar8) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = local_88;
      if (*(long *)(*(long *)(*local_88 + 200) + (ulong)bVar8 * 8 + -8) !=
          *(long *)Unity_VisualScripting_StaticActionInvoker<TParam0,_TParam1>_var) {
        plVar17 = (long *)0x0;
      }
    }
    uVar19 = FUN_06f2c330(local_88,0);
    if ((uVar19 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0711154c(param_2,plVar16);
      if (*(int *)(*(long *)PTR_DAT_07df4970 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar12 = FUN_06f321c4(0);
      FUN_0756c160(uVar12,uVar12,0);
      bVar1 = true;
    }
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_07113f64(&local_f8,local_68,param_2,0);
    lVar15 = local_78;
    uStack_c8 = uStack_f0;
    local_d0 = local_f8;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0710ca04(param_2,lVar15);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar15 = FUN_0710d32c(*(undefined8 *)(lVar14 + 0x138),param_2,local_78,0);
    uVar19 = FUN_06f2c330(plVar16,0);
    if ((uVar19 & 1) != 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      *(long **)(lVar15 + 0x1a0) = plVar16;
      thunk_FUN_037aeb94(lVar15 + 0x1a0,plVar16);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_071116f0(lVar15,&local_a8);
      FUN_06f2d0a4(uVar13,plVar16,param_2,0);
      if (*(int *)(*(long *)System_Resources_ResourceReader_var + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_07119e30(param_2,plVar17,0);
    }
    lVar20 = local_78;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0710d8a8(param_2,lVar20,iVar25 == -1,lVar15);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(lVar15 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar19 = FUN_06f2c330(*(long *)(lVar15 + 0x1a0),0);
    uVar10 = 1;
    if ((uVar19 & 1) != 0) {
      uVar10 = 2;
    }
    local_b8 = CONCAT44(local_b8._4_4_,uVar10);
    if (*(long *)(lVar15 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar19 = FUN_06f2c330(*(long *)(lVar15 + 0x1a0),0);
    if ((uVar19 & 1) == 0) {
      uVar10 = 1;
    }
    else {
      if (*(long *)(lVar15 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar10 = FUN_06f2da14(*(long *)(lVar15 + 0x1a0),0);
    }
    local_b8 = CONCAT44(uVar10,(undefined4)local_b8);
    uVar12 = local_b8;
    if (*(long *)(lVar15 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    local_b0 = *(uint *)(*(long *)(lVar15 + 0x1a0) + 0x24);
    uVar19 = (ulong)local_b0;
    if (*(int *)(*(long *)PTR_DAT_07df4d50 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar26 = uVar26 & 0xffffffff00000000 | uVar19;
    FUN_078ccfa0(param_2,uVar12,uVar26,0);
    lVar20 = *(long *)puVar3;
    bVar8 = *(byte *)(lVar15 + 0x192);
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar20 = *(long *)puVar3;
    }
    *(byte *)(lVar15 + 0x192) = **(byte **)(lVar20 + 0xb8) | bVar8;
    uVar19 = FUN_06f2c330(plVar16,0);
    bVar8 = bVar6;
    if ((uVar19 & 1) != 0) {
      bVar8 = FUN_06f30450(plVar16,0);
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar20 = FUN_070fbc78();
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if ((bVar8 & *(char *)(lVar20 + 0x4d) != '\0') == 0) {
LAB_0710c0a4:
      cVar23 = '\0';
    }
    else {
      uVar12 = FUN_07558d40(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar19 = FUN_075ac5e0(uVar12,0,0);
      if (((uVar19 & 1) == 0) ||
         ((iVar11 = FUN_07557954(param_2,0), iVar11 != 1 &&
          (iVar11 = FUN_07557954(param_2,0), iVar11 != 8)))) goto LAB_0710c0a4;
      cVar23 = *(char *)(lVar15 + 0x18e);
    }
    uVar12 = local_68;
    *(char *)(lVar15 + 0x195) = cVar23;
    *(bool *)(lVar15 + 0x1ad) = bVar5;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_0710e0e4(uVar12,lVar15);
    if (*(int *)(*(long *)PTR_DAT_07d97d98 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_07114080(&local_d0,0);
    uVar19 = FUN_06f2c330(plVar16,0);
    if ((uVar19 & 1) != 0) {
      if (*(int *)(*(long *)System_Resources_ResourceReader_var + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_07119f00(param_2,plVar17,0);
    }
    plVar17 = local_a8;
    uVar12 = local_b8;
    if (iVar25 != -1) {
      if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (0 < *(int *)(lVar24 + 0x18)) {
        iVar11 = 0;
        uVar19 = (ulong)local_b0;
        do {
          lVar15 = FUN_049cec24(lVar24,iVar11,*(undefined8 *)PTR_DAT_07dbb5c8);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar21 = FUN_075a6c34(lVar15,0);
          if ((uVar21 & 1) != 0) {
            FUN_03f0eaa0(lVar15,&local_d8,*(undefined8 *)PTR_DAT_07dfc0d8);
            lVar20 = local_d8;
            if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar21 = FUN_075aa744(lVar20,0,0);
            lVar20 = local_d8;
            if ((uVar21 & 1) != 0) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              lVar20 = FUN_0710d244(lVar15,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar20 = FUN_0710d32c(*(undefined8 *)(lVar20 + 0x138),param_2,local_78,0);
              uVar21 = FUN_06f2c330(plVar16,0);
              if ((uVar21 & 1) != 0) {
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7b4();
                }
                *(long **)(lVar20 + 0x1a0) = plVar16;
                thunk_FUN_037aeb94(lVar20 + 0x1a0,plVar16);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                FUN_071116f0(lVar20,&local_a8);
              }
              lVar4 = local_d8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_0710d8a8(lVar15,lVar4,0,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              *(long *)(lVar20 + 0xd8) = lVar15;
              thunk_FUN_037aeb94((long *)(lVar20 + 0xd8),lVar15);
              *(long *)(lVar20 + 0x230) = param_2;
              thunk_FUN_037aeb94(lVar20 + 0x230,param_2);
              if (local_d8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar22 = FUN_070f908c(local_d8,0);
              FUN_0711154c(uVar22,plVar17);
              local_f8 = 0;
              uStack_f0 = 0;
              FUN_07113f64(&local_f8,local_68,lVar15,0);
              uStack_c8 = uStack_f0;
              local_d0 = local_f8;
              if (*(int *)(*(long *)PTR_DAT_07df4d50 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              local_118 = local_118 & 0xffffffff00000000 | uVar19;
              FUN_078ccfa0(lVar15,uVar12,local_118,0);
              lVar4 = local_d8;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_0710ca04(lVar15,lVar4);
              FUN_0710d8a8(lVar15,local_d8,iVar25 == iVar11,lVar20);
              *(bool *)(lVar20 + 0x195) = cVar23 != '\0';
              *(bool *)(lVar20 + 0x1ad) = bVar5;
              FUN_06f2d0a4(uVar13,*(undefined8 *)(lVar20 + 0x1a0),lVar15,0);
              FUN_0710e0e4(local_68,lVar20);
              if (*(int *)(*(long *)PTR_DAT_07d97d98 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_07114080(&local_d0,0);
            }
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar24 + 0x18));
      }
    }
  }
  FUN_05d36c64(&local_a0,*(undefined8 *)System_Action<bool,_List<OVRAnchor>>_TypeInfo);
  if (bVar1) {
    if (*(int *)(*(long *)PTR_DAT_07df4d70 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar12 = FUN_06f3b350(0);
    if (*(int *)(*(long *)PTR_DAT_07df4970 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_06f32364(uVar12,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_07df8330 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_075e7ba8(&local_68,uVar12,0);
    FUN_075e7a58(&local_68,0);
    FUN_06f3b490(uVar12,0);
  }
  if (*(int *)(*(long *)PTR_DAT_07df4970 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_06f3228c(0);
LAB_0710c5e0:
  FUN_06f533e8(local_70,0);
  return;
}


