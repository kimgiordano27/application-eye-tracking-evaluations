/*
FUNCTION_NAME: FUN_0393b0d8
ENTRY_POINT: 0393b0d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0393baa0) */
/* WARNING: Removing unreachable block (ram,0x0393bac8) */
/* WARNING: Removing unreachable block (ram,0x0393bab4) */
/* WARNING: Removing unreachable block (ram,0x0393ba78) */
/* WARNING: Removing unreachable block (ram,0x0393bad8) */

void FUN_0393b0d8(undefined8 param_1,long *param_2,long *param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int *piVar13;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_04838342 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__);
    thunk_FUN_01efb3a4(StringLiteral_3384);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_IsModified__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(StringLiteral_3383);
    thunk_FUN_01efb3a4(StringLiteral_3545);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3858);
    thunk_FUN_01efb3a4(StringLiteral_3859);
    thunk_FUN_01efb3a4(StringLiteral_3860);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_DeleteFile__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_CreateDirectory__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<int,_int>__);
    thunk_FUN_01efb3a4(StringLiteral_2862);
    thunk_FUN_01efb3a4(StringLiteral_3861);
    thunk_FUN_01efb3a4(StringLiteral_3865);
    DAT_04838342 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (param_1,0,0);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(StringLiteral_3863);
    FUN_034efd20(uVar4,uVar11,0);
    uVar11 = thunk_FUN_01efb3a4(StringLiteral_3866);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar11);
  }
  if ((*param_2 != 0) && (*(long *)(*param_2 + 0x18) != 0)) {
    if (param_4 == 2) {
      local_58 = 2;
      local_68 = *(undefined8 *)StringLiteral_3545;
      uStack_60 = 0xffffffffffffffff;
      uVar4 = FUN_0359ff90(&local_68,0);
      uVar4 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3861,uVar4,*(undefined8 *)StringLiteral_3865
                           ,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403ed64(uVar4,0);
    }
    else {
      if (*param_3 == 0) {
        lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_CreateDirectory__);
        FUN_030f2380(lVar5,*(undefined8 *)Method_System_IO_FileSystem_DeleteFile__);
        *param_3 = lVar5;
        thunk_FUN_01f51358(param_3,lVar5);
      }
      if (*(int *)(*(long *)StringLiteral_3383 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar6 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3384);
      if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0
         ) {
        thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
      }
      plVar7 = (long *)FUN_029da4a8(*(undefined8 *)
                                     Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar8 = (long *)FUN_039109dc(plVar6[3],0);
      lVar5 = *param_2;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar8 + 0x358))
                (plVar8,lVar5,0,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(*plVar8 + 0x360));
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar8 = (long *)FUN_039109dc(plVar6[3],0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar8 + 0x208))(plVar8,0,*(undefined8 *)(*plVar8 + 0x210));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03937bf8(plVar7[3],*param_3);
      puVar1 = Method_System_Configuration_ConfigurationElement_IsModified__;
      if (param_5 == 0) {
        if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar8 = (long *)FUN_029da4a8(*(undefined8 *)
                                       Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                                     );
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = FUN_0390b368(plVar8[3],0);
        if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = FUN_0391cfa8(0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar4,uVar4);
        }
        FUN_0391d334(lVar5,uVar4,0);
        uVar3 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
        lVar5 = plVar8[3];
        if ((uVar3 & 1) == 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b368(lVar5,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b70c(lVar5,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0391d880(lVar5,0,0);
          if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b368(plVar8[3],0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b70c(lVar5,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0391d844(lVar5,0,0);
          if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b368(plVar8[3],0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b70c(lVar5,0);
          if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0)
              == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_038d6628(0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar4,uVar4);
          }
          FUN_0391d75c(lVar5,uVar4,0);
        }
        else {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b368(lVar5,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b70c(lVar5,0);
          puVar2 = StringLiteral_3859;
          lVar10 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0391d880(lVar5,*(undefined4 *)(lVar10 + 0x28),0);
          if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b368(plVar8[3],0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b70c(lVar5,0);
          lVar10 = FUN_02e9542c(*(undefined8 *)puVar2);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_0391d844(lVar5,*(undefined4 *)(lVar10 + 0x24),0);
          if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b368(plVar8[3],0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_0390b70c(lVar5,0);
          lVar10 = FUN_02e9542c(*(undefined8 *)puVar2);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_038d6930(lVar10,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar4,uVar4);
          }
          FUN_0391d75c(lVar5,uVar4,0);
        }
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        *(long *)(plVar8[3] + 0x50) = plVar7[3];
        thunk_FUN_01f51358();
        if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = FUN_039109dc(plVar6[3],0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_029dad5c(plVar8,*(undefined8 *)
                                      Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
        puVar1 = StringLiteral_2862;
        if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar12 = (long *)FUN_0393fb14(param_4,uVar4,uVar11);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar12;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3860) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0393b828;
            }
            uVar3 = uVar3 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar3 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)StringLiteral_3860,0);
LAB_0393b828:
        uVar4 = (*(code *)*puVar9)(plVar12,puVar9[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = thunk_FUN_01f116d0(uVar4,*(undefined8 *)
                                          Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__
                                  );
        FUN_0393e9c4(param_1,uVar4);
        if (plVar12 != (long *)0x0) {
          lVar5 = *plVar12;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0393b8c4;
              }
              uVar3 = uVar3 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar3 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01ecb238(plVar12,*(long *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_0393b8c4:
          (*(code *)*puVar9)(plVar12,puVar9[1]);
        }
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0393b92c;
              }
              uVar3 = uVar3 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar3 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01ecb238(plVar8,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_0393b92c:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
      }
      else {
        *(long *)(param_5 + 0x50) = plVar7[3];
        thunk_FUN_01f51358();
        if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = FUN_039109dc(plVar6[3],0);
        puVar1 = StringLiteral_2862;
        if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar8 = (long *)FUN_0393fb14(param_4,uVar4,param_5);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3860) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0393b494;
            }
            uVar3 = uVar3 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar3 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)StringLiteral_3860,0);
LAB_0393b494:
        uVar4 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = thunk_FUN_01f116d0(uVar4,*(undefined8 *)
                                          Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__
                                  );
        FUN_0393e9c4(param_1,uVar4);
        if (plVar8 != (long *)0x0) {
          lVar5 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0393b534;
              }
              uVar3 = uVar3 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar3 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01ecb238(plVar8,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                ,0);
LAB_0393b534:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
      }
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0393b998;
            }
            uVar3 = uVar3 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar3 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0393b998:
        (*(code *)*puVar9)(plVar7,puVar9[1]);
      }
      if (plVar6 != (long *)0x0) {
        lVar5 = *plVar6;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0393ba04;
            }
            uVar3 = uVar3 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar3 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0393ba04:
        (*(code *)*puVar9)(plVar6,puVar9[1]);
      }
    }
  }
  return;
}


