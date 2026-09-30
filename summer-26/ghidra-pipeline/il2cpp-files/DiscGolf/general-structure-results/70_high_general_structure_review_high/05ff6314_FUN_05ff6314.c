/*
FUNCTION_NAME: FUN_05ff6314
ENTRY_POINT: 05ff6314
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_13;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05ff6e40) */
/* WARNING: Removing unreachable block (ram,0x05ff68dc) */
/* WARNING: Removing unreachable block (ram,0x05ff6bc0) */
/* WARNING: Removing unreachable block (ram,0x05ff6e4c) */
/* WARNING: Removing unreachable block (ram,0x05ff6cb0) */

long FUN_05ff6314(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                 long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  long local_90;
  long **local_88;
  undefined4 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if ((DAT_06dc4982 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketCloseListener>d__50>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketErrorListener>d__51>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
                );
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a18c18);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a18c20);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketMessageListener>d__52>__
                );
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(PTR_DAT_06a0e078);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketOpenListener>d__49>__
                );
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<CustomMatchmakingNGO_<Awake>d__5>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<DataHandler_<SavePlayerFileToCloud>d__4>__
                );
    FUN_02d965b8(System_IO_Path_<>c_TypeInfo);
    DAT_06dc4982 = 1;
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketCloseListener>d__50>__
  ;
  plVar11 = (long *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
  ;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  if (param_5 == (long *)0x0) goto LAB_05ff6e48;
  lVar12 = *param_5;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
         ) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 3) * 0x10 + 0x138);
        goto LAB_05ff64b0;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02dd004c(param_5,*(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
                        ,3);
LAB_05ff64b0:
  uVar8 = (*(code *)*puVar7)(param_5,puVar7[1]);
  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_05ff6f18(lVar12,uVar8,param_2);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<DataHandler_<SavePlayerFileToCloud>d__4>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
  ;
  if ((param_4 == 0) || (lVar12 == 0)) goto LAB_05ff6e48;
  FUN_05ff6fa0(lVar12,*(undefined8 *)(param_4 + 0x10));
  FUN_05ff71a0(lVar12,*(undefined8 *)(param_4 + 0x18));
  uVar8 = FUN_05ff77f0(lVar12);
  local_90 = *(long *)puVar1;
  local_88 = (long **)0xffffffffffffffff;
  local_80 = param_3;
  uVar9 = FUN_0551e574(&local_90,0);
  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_06644864(lVar12,uVar8,uVar9,0);
  lVar13 = *param_5;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar11) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
        goto LAB_05ff65a8;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c(param_5,*plVar11,6);
LAB_05ff65a8:
  lVar13 = (*(code *)*puVar7)(param_5,puVar7[1]);
  if (lVar13 != 0) {
    lVar13 = *param_5;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar11) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 6) * 0x10 + 0x138);
          goto LAB_05ff6608;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(param_5,*plVar11,6);
LAB_05ff6608:
    uVar8 = (*(code *)*puVar7)(param_5,puVar7[1]);
    if (lVar12 == 0) goto LAB_05ff6e48;
    FUN_06645d78(lVar12,*(undefined8 *)System_IO_Path_<>c_TypeInfo,uVar8,0);
  }
  lVar13 = *param_5;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar11) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
        goto LAB_05ff6684;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c(param_5,*plVar11,2);
LAB_05ff6684:
  puVar2 = PTR_DAT_069fbff8;
  lVar13 = (*(code *)*puVar7)(param_5,puVar7[1]);
  if (lVar13 != 0) {
    lVar13 = *param_5;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *plVar11) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
          goto LAB_05ff66ec;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(param_5,*plVar11,2);
LAB_05ff66ec:
    plVar10 = (long *)(*(code *)*puVar7)(param_5,puVar7[1]);
    if (plVar10 != (long *)0x0) {
      lVar13 = *plVar10;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05ff6754;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02dd004c(plVar10,*(long *)
                                     UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                            ,0);
LAB_05ff6754:
      puVar1 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
      local_68 = (long *)(*(code *)*puVar7)(plVar10,puVar7[1]);
      local_88 = &local_68;
      local_90 = 0;
      do {
        plVar10 = local_68;
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar13 = *local_68;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05ff67c8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar2,0);
LAB_05ff67c8:
        uVar14 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        plVar10 = local_68;
        if ((uVar14 & 1) == 0) {
          if (local_68 == (long *)0x0) goto LAB_05ff68e0;
          lVar13 = *local_68;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_05ff68a8;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_05ff6890;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar13 = *local_68;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05ff682c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(local_68,*(long *)puVar1,0);
LAB_05ff682c:
        auVar16 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_06645d78(lVar12,auVar16._0_8_,auVar16._8_8_,0);
      } while( true );
    }
    goto LAB_05ff6e48;
  }
  goto LAB_05ff68e0;
LAB_05ff6b48:
  plVar11 = local_70;
  if (local_78 != (long *)0x0) {
    lVar13 = *local_78;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05ff6ba8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar1,0);
LAB_05ff6ba8:
    (*(code *)*puVar7)(plVar10,puVar7[1]);
    plVar11 = local_70;
  }
  goto joined_r0x05ff6908;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05ff6c60:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05ff6c94;
    }
  }
LAB_05ff6c78:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_05ff6c94:
  (*(code *)*puVar7)(plVar10,puVar7[1]);
LAB_05ff6ca0:
  if (local_90 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(local_90);
  }
  goto LAB_05ff6cb4;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05ff6890:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05ff68c4;
    }
  }
LAB_05ff68a8:
  puVar7 = (undefined8 *)FUN_02dd004c(local_68,*(long *)PTR_DAT_069fbff0,0);
LAB_05ff68c4:
  (*(code *)*puVar7)(plVar10,puVar7[1]);
LAB_05ff68e0:
  if (*(long *)(param_4 + 0x20) != 0) {
    plVar11 = (long *)FUN_0420cd44(*(long *)(param_4 + 0x20),
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                                  );
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketMessageListener>d__52>__
    ;
    puVar4 = PTR_DAT_06a18c20;
    puVar3 = PTR_DAT_06a18c18;
    puVar1 = PTR_DAT_069fbff0;
    local_88 = &local_70;
    local_90 = 0;
joined_r0x05ff6908:
    local_70 = plVar11;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar13 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05ff6980;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar2,0);
LAB_05ff6980:
    uVar14 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    plVar10 = local_70;
    plVar11 = (long *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
    ;
    if ((uVar14 & 1) != 0) {
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *local_70;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05ff69e4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(local_70,*(long *)puVar5,0);
LAB_05ff69e4:
      auVar16 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      plVar11 = auVar16._8_8_;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05ff6a48;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar3,0);
LAB_05ff6a48:
      plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
      do {
        local_78 = plVar11;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar13 = *plVar11;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05ff6ab0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar2,0);
LAB_05ff6ab0:
        uVar14 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        plVar10 = local_78;
        if ((uVar14 & 1) == 0) goto LAB_05ff6b48;
        if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar13 = *local_78;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05ff6b14;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(local_78,*(long *)puVar4,0);
LAB_05ff6b14:
        uVar8 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_06645d78(lVar12,auVar16._0_8_,uVar8,0);
        plVar11 = local_78;
      } while( true );
    }
    plVar10 = *local_88;
    if (plVar10 == (long *)0x0) goto LAB_05ff6ca0;
    lVar13 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 == 0) goto LAB_05ff6c78;
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    goto LAB_05ff6c60;
  }
LAB_05ff6cb4:
  lVar13 = *param_5;
  uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *plVar11) {
        puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 5) * 0x10 + 0x138);
        goto LAB_05ff6d04;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c(param_5,*plVar11,5);
LAB_05ff6d04:
  uVar6 = (*(code *)*puVar7)(param_5,puVar7[1]);
  if (lVar12 != 0) {
    FUN_066464e8(lVar12,uVar6,0);
    if (*(long *)(param_4 + 0x40) == 0) {
LAB_05ff6dd8:
      uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketErrorListener>d__51>__
                                );
      FUN_066443b4(uVar8,0);
      FUN_06644b8c(lVar12,uVar8,0);
      return lVar12;
    }
    lVar13 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0e078);
    FUN_05577fdc(lVar13,0);
    if (lVar13 != 0) {
      FUN_05577ddc(lVar13,1,0);
      uVar9 = *(undefined8 *)(param_4 + 0x40);
      uVar8 = FUN_05575dcc(lVar13,0);
      uVar8 = FUN_05ff8fa8(uVar9,0,uVar8);
      plVar11 = (long *)FUN_0538828c(0);
      if (plVar11 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar11 + 600))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x260));
        uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<CustomMatchmakingNGO_<Awake>d__5>__
                                  );
        FUN_066468f0(uVar9,uVar8,0);
        FUN_06644c54(lVar12,uVar9,0);
        goto LAB_05ff6dd8;
      }
    }
  }
LAB_05ff6e48:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


