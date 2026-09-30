/*
FUNCTION_NAME: FUN_063d3d20
ENTRY_POINT: 063d3d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;ray_or_cast_sink_hits_3;strong_file_logging_hits_3
*/


long FUN_063d3d20(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  if ((DAT_06bccfae & 1) == 0) {
    FUN_02f08768(StringLiteral_9110);
    FUN_02f08768(StringLiteral_9111);
    FUN_02f08768(StringLiteral_9112);
    FUN_02f08768(StringLiteral_9113);
    FUN_02f08768(StringLiteral_9114);
    FUN_02f08768(StringLiteral_9115);
    FUN_02f08768(PTR_DAT_067c9380);
    FUN_02f08768(PTR_DAT_067c9648);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(
                Method_Oculus_Interaction_Grab_GrabSurfaces_SphereGrabSurface_MinimalRotationPoseAtSurface__
                );
    FUN_02f08768(StringLiteral_9116);
    FUN_02f08768(Method_System_Threading_Tasks_Task_FromCancellation<bool>__);
    FUN_02f08768(StringLiteral_9117);
    FUN_02f08768(Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetBestPoseFromRaycastDebugger>b__58_0__
                );
    FUN_02f08768(Method_System_Threading_Tasks_Task_FromException<int>__);
    FUN_02f08768(Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetClosestSeatPoseDebugger>b__56_0__);
    FUN_02f08768(StringLiteral_9118);
    FUN_02f08768(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
                );
    FUN_02f08768(StringLiteral_9119);
    FUN_02f08768(StringLiteral_9120);
    FUN_02f08768(StringLiteral_9121);
    FUN_02f08768(StringLiteral_9122);
    FUN_02f08768(StringLiteral_9123);
    FUN_02f08768(StringLiteral_9124);
    FUN_02f08768(Unity_AppUI_UI_GridView_GridOperations_TypeInfo);
    FUN_02f08768(StringLiteral_9125);
    FUN_02f08768(StringLiteral_9126);
    DAT_06bccfae = 1;
  }
  puVar2 = PTR_DAT_067c8f20;
  if ((0 < param_2) || (param_5 != 0xf)) {
    if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar4 = FUN_060f245c(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_1 == 0) goto LAB_063d45b8;
      uVar4 = FUN_060be310(param_1,*(undefined8 *)
                                    Method_System_Threading_Tasks_Task_FromException<int>__,0);
      if ((uVar4 & 1) == 0) {
        uVar11 = thunk_FUN_060f6130(param_1,0);
        puVar7 = (undefined8 *)StringLiteral_9117;
      }
      else {
        uVar4 = FUN_060be310(param_1,*(undefined8 *)
                                      System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
                             ,0);
        if ((uVar4 & 1) == 0) {
          uVar11 = thunk_FUN_060f6130(param_1,0);
          puVar7 = (undefined8 *)StringLiteral_9124;
        }
        else {
          uVar4 = FUN_060be310(param_1,*(undefined8 *)
                                        Method_System_Threading_Tasks_Task_FromCancellation<bool>__,
                               0);
          if ((uVar4 & 1) == 0) {
            uVar11 = thunk_FUN_060f6130(param_1,0);
            puVar7 = (undefined8 *)StringLiteral_9125;
          }
          else {
            uVar4 = FUN_060be310(param_1,*(undefined8 *)
                                          Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetBestPoseFromRaycastDebugger>b__58_0__
                                 ,0);
            if ((uVar4 & 1) == 0) {
              uVar11 = thunk_FUN_060f6130(param_1,0);
              puVar7 = (undefined8 *)StringLiteral_9122;
            }
            else {
              uVar4 = FUN_060be310(param_1,*(undefined8 *)
                                            Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetClosestSeatPoseDebugger>b__56_0__
                                   ,0);
              if ((uVar4 & 1) == 0) {
                uVar11 = thunk_FUN_060f6130(param_1,0);
                puVar7 = (undefined8 *)StringLiteral_9118;
              }
              else {
                uVar4 = FUN_060be310(param_1,*(undefined8 *)
                                              Unity_AppUI_UI_GridView_GridOperations_TypeInfo,0);
                plVar10 = (long *)
                          Method_Oculus_Interaction_Grab_GrabSurfaces_SphereGrabSurface_MinimalRotationPoseAtSurface__
                ;
                if ((uVar4 & 1) != 0) {
                  lVar5 = *(long *)
                           Method_Oculus_Interaction_Grab_GrabSurfaces_SphereGrabSurface_MinimalRotationPoseAtSurface__
                  ;
                  if (*(int *)(lVar5 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                    lVar5 = *plVar10;
                  }
                  if (**(long **)(lVar5 + 0xb8) != 0) {
                    iVar1 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
                    if (0 < iVar1) {
                      iVar9 = 0;
                      do {
                        lVar5 = *plVar10;
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                          lVar5 = *plVar10;
                        }
                        if ((**(long **)(lVar5 + 0xb8) == 0) ||
                           (lVar5 = FUN_03abf644(**(long **)(lVar5 + 0xb8),iVar9,
                                                 *(undefined8 *)StringLiteral_9114), lVar5 == 0))
                        goto LAB_063d45b8;
                        uVar11 = *(undefined8 *)(lVar5 + 0x10);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_02f6670c();
                        }
                        uVar4 = FUN_060f245c(uVar11,param_1,0);
                        if (((((uVar4 & 1) != 0) && (*(int *)(lVar5 + 0x24) == param_2)) &&
                            (*(int *)(lVar5 + 0x28) == param_3)) &&
                           (((*(int *)(lVar5 + 0x2c) == param_4 &&
                             (*(int *)(lVar5 + 0x30) == param_6)) &&
                            ((*(int *)(lVar5 + 0x34) == param_7 &&
                             (*(int *)(lVar5 + 0x3c) == param_5)))))) {
                          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
                          return *(long *)(lVar5 + 0x18);
                        }
                        iVar9 = iVar9 + 1;
                        plVar10 = (long *)
                                  Method_Oculus_Interaction_Grab_GrabSurfaces_SphereGrabSurface_MinimalRotationPoseAtSurface__
                        ;
                      } while (iVar1 != iVar9);
                    }
                    lVar5 = thunk_FUN_02f45270(*(undefined8 *)StringLiteral_9115);
                    *(undefined4 *)(lVar5 + 0x2c) = 8;
                    FUN_05116b38(lVar5,0);
                    puVar2 = PTR_DAT_067c9380;
                    *(undefined4 *)(lVar5 + 0x20) = 1;
                    *(long *)(lVar5 + 0x10) = param_1;
                    lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    FUN_060bdafc(lVar6,param_1,0);
                    *(long *)(lVar5 + 0x18) = lVar6;
                    if (lVar6 != 0) {
                      FUN_060f74cc(lVar6,0x3d,0);
                      *(int *)(lVar5 + 0x24) = param_2;
                      *(int *)(lVar5 + 0x28) = param_3;
                      *(int *)(lVar5 + 0x2c) = param_4;
                      *(int *)(lVar5 + 0x30) = param_6;
                      puVar2 = PTR_DAT_067c9648;
                      lVar8 = *(long *)(lVar5 + 0x18);
                      *(int *)(lVar5 + 0x34) = param_7;
                      uVar11 = *(undefined8 *)puVar2;
                      *(int *)(lVar5 + 0x3c) = param_5;
                      *(bool *)(lVar5 + 0x38) =
                           (param_3 != 0 && param_7 != 0) && (param_3 == 0 || -1 < param_7);
                      lVar6 = FUN_02f0880c(uVar11,8);
                      puVar2 = PTR_DAT_067c9338;
                      local_64 = param_2;
                      uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&local_64
                                                 );
                      if (lVar6 != 0) {
                        FUN_02a81aa0(lVar6,uVar11);
                        puVar3 = StringLiteral_9116;
                        if (*(int *)(lVar6 + 0x18) != 0) {
                          *(undefined8 *)(lVar6 + 0x20) = uVar11;
                          local_68 = param_3;
                          uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_68);
                          FUN_02a81aa0(lVar6,uVar11);
                          puVar3 = StringLiteral_9111;
                          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                            *(undefined8 *)(lVar6 + 0x28) = uVar11;
                            local_6c = param_4;
                            uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_6c);
                            FUN_02a81aa0(lVar6,uVar11);
                            if (2 < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0x30) = uVar11;
                              local_70 = param_7;
                              uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_70);
                              FUN_02a81aa0(lVar6,uVar11);
                              if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                                *(undefined8 *)(lVar6 + 0x38) = uVar11;
                                local_74 = param_6;
                                uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x48),&local_74
                                                           );
                                FUN_02a81aa0(lVar6,uVar11);
                                puVar3 = StringLiteral_9110;
                                if (4 < *(uint *)(lVar6 + 0x18)) {
                                  *(undefined8 *)(lVar6 + 0x40) = uVar11;
                                  local_78 = param_5;
                                  uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)puVar3,&local_78);
                                  FUN_02a81aa0(lVar6,uVar11);
                                  if (5 < *(uint *)(lVar6 + 0x18)) {
                                    *(undefined8 *)(lVar6 + 0x48) = uVar11;
                                    local_7c[0] = *(undefined1 *)(lVar5 + 0x38);
                                    uVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar2 + 0x28),
                                                                local_7c);
                                    FUN_02a81aa0(lVar6,uVar11);
                                    if (6 < *(uint *)(lVar6 + 0x18)) {
                                      *(undefined8 *)(lVar6 + 0x50) = uVar11;
                                      uVar11 = thunk_FUN_060f6130(param_1,0);
                                      FUN_02a81aa0(lVar6,uVar11);
                                      puVar2 = StringLiteral_9126;
                                      if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                                        *(undefined8 *)(lVar6 + 0x58) = uVar11;
                                        uVar11 = FUN_04f700a0(*(undefined8 *)puVar2,lVar6,0);
                                        if (lVar8 != 0) {
                                          thunk_FUN_060f6284(lVar8,uVar11,0);
                                          puVar2 = 
                                          Method_Oculus_Interaction_Grab_GrabSurfaces_SphereGrabSurface_MinimalRotationPoseAtSurface__
                                          ;
                                          if (*(long *)(lVar5 + 0x18) != 0) {
                                            FUN_060c1308((float)param_2,*(long *)(lVar5 + 0x18),
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Threading_Tasks_Task_FromException<int>__
                                                  ,0);
                                            if (*(long *)(lVar5 + 0x18) != 0) {
                                              FUN_060c1308((float)param_3,*(long *)(lVar5 + 0x18),
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt16_TypeInfo
                                                  ,0);
                                              if (*(long *)(lVar5 + 0x18) != 0) {
                                                FUN_060c1308((float)param_4,*(long *)(lVar5 + 0x18),
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_System_Threading_Tasks_Task_FromCancellation<bool>__
                                                  ,0);
                                                if (*(long *)(lVar5 + 0x18) != 0) {
                                                  FUN_060c1308((float)param_6,
                                                               *(long *)(lVar5 + 0x18),
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetBestPoseFromRaycastDebugger>b__58_0__
                                                  ,0);
                                                  if (*(long *)(lVar5 + 0x18) != 0) {
                                                    FUN_060c1308((float)param_7,
                                                                 *(long *)(lVar5 + 0x18),
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_Meta_XR_MRUtilityKit_SceneDebugger_<GetClosestSeatPoseDebugger>b__56_0__
                                                  ,0);
                                                  if (*(long *)(lVar5 + 0x18) != 0) {
                                                    FUN_060c1308((float)param_5,
                                                                 *(long *)(lVar5 + 0x18),
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Unity_AppUI_UI_GridView_GridOperations_TypeInfo,0)
                                                  ;
                                                  if (*(long *)(lVar5 + 0x18) != 0) {
                                                    uVar12 = 0;
                                                    if (*(char *)(lVar5 + 0x38) != '\0') {
                                                      uVar12 = 0x3f800000;
                                                    }
                                                    FUN_060c1308(uVar12,*(long *)(lVar5 + 0x18),
                                                                 *(undefined8 *)StringLiteral_9123,0
                                                                );
                                                    lVar6 = *(long *)(lVar5 + 0x18);
                                                    if (*(char *)(lVar5 + 0x38) == '\0') {
                                                      if (lVar6 == 0) goto LAB_063d45b8;
                                                      FUN_060be718(lVar6,*(undefined8 *)
                                                                          StringLiteral_9119,0);
                                                    }
                                                    else {
                                                      if (lVar6 == 0) goto LAB_063d45b8;
                                                      FUN_060be514(lVar6,*(undefined8 *)
                                                                          StringLiteral_9119,0);
                                                    }
                                                    lVar6 = *(long *)puVar2;
                                                    if (*(int *)(lVar6 + 0xe4) == 0) {
                                                      thunk_FUN_02f6670c();
                                                      lVar6 = *(long *)puVar2;
                                                    }
                                                    if (**(long **)(lVar6 + 0xb8) != 0) {
                                                      FUN_02e441a0(**(long **)(lVar6 + 0xb8),lVar5,
                                                                   *(undefined8 *)StringLiteral_9112
                                                                  );
                                                      return *(long *)(lVar5 + 0x18);
                                                    }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        goto LAB_063d45b8;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_02f089d0();
                      }
                    }
                  }
LAB_063d45b8:
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                uVar11 = thunk_FUN_060f6130(param_1,0);
                puVar7 = (undefined8 *)StringLiteral_9121;
              }
            }
          }
        }
      }
      uVar11 = FUN_04f6f6b4(*(undefined8 *)StringLiteral_9120,uVar11,*puVar7,0);
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_Grab_GrabSurfaces_SphereGrabSurface_MinimalRotationPoseAtSurface__
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)
                            Method_Oculus_Interaction_Grab_GrabSurfaces_SphereGrabSurface_MinimalRotationPoseAtSurface__
                          );
      }
      FUN_063d45c0(uVar11,param_1);
    }
  }
  return param_1;
}


