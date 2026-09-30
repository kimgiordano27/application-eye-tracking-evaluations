/*
FUNCTION_NAME: FUN_0393a1e0
ENTRY_POINT: 0393a1e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 197
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_14;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x0393ac10) */
/* WARNING: Removing unreachable block (ram,0x0393abcc) */
/* WARNING: Removing unreachable block (ram,0x0393a9d8) */
/* WARNING: Removing unreachable block (ram,0x0393a630) */
/* WARNING: Removing unreachable block (ram,0x0393abdc) */
/* WARNING: Removing unreachable block (ram,0x0393ac28) */
/* WARNING: Removing unreachable block (ram,0x0393abf0) */
/* WARNING: Removing unreachable block (ram,0x0393aa50) */

void FUN_0393a1e0(undefined8 param_1,undefined8 *param_2,long *param_3,int param_4,uint param_5,
                 long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if ((DAT_0483833d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_ResetModified__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    thunk_FUN_01efb3a4(StringLiteral_3384);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_get_Properties__);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationSection_DeserializeSection__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(StringLiteral_3383);
    thunk_FUN_01efb3a4(StringLiteral_3545);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3858);
    thunk_FUN_01efb3a4(StringLiteral_3859);
    thunk_FUN_01efb3a4(StringLiteral_3860);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_Reset__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_2467);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_DeleteFile__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_CreateDirectory__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<int,_int>__);
    thunk_FUN_01efb3a4(StringLiteral_2862);
    thunk_FUN_01efb3a4(StringLiteral_3861);
    thunk_FUN_01efb3a4(StringLiteral_3862);
    DAT_0483833d = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (param_1,0,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(StringLiteral_3863);
    FUN_034efd20(uVar5,uVar11,0);
    uVar11 = thunk_FUN_01efb3a4(StringLiteral_3864);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar11);
  }
  if (param_4 == 2) {
    local_78 = *(undefined8 *)StringLiteral_3545;
    local_68 = 2;
    uStack_70 = 0xffffffffffffffff;
    uVar5 = FUN_0359ff90(&local_78,0);
    uVar5 = FUN_0340ebc0(*(undefined8 *)StringLiteral_3861,uVar5,*(undefined8 *)StringLiteral_3862,0
                        );
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
    }
    FUN_0403ed64(uVar5,0);
  }
  else {
    lVar13 = *param_3;
    if (lVar13 == 0) {
      lVar13 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_CreateDirectory__);
      FUN_030f2380(lVar13,*(undefined8 *)Method_System_IO_FileSystem_DeleteFile__);
      *param_3 = lVar13;
      thunk_FUN_01f51358(param_3,lVar13);
    }
    else {
      iVar1 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_0358d1e4(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
      }
    }
    if (*(int *)(*(long *)StringLiteral_3383 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar6 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3384);
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    }
    plVar7 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_03937bf8(plVar7[3],*param_3);
    puVar2 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
    if (param_6 == 0) {
      if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar8 = (long *)FUN_029da4a8(*(undefined8 *)
                                     Method_System_Configuration_ConfigurationElement_ResetModified__
                                   );
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = FUN_0390c3d4(plVar8[3],0);
      if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0391cfa8(0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar5,uVar5);
      }
      FUN_0391d334(lVar13,uVar5,0);
      uVar4 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
      lVar13 = plVar8[3];
      if ((uVar4 & 1) == 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390c3d4(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390b70c(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0391d880(lVar13,0,0);
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390c3d4(plVar8[3],0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390b70c(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0391d844(lVar13,0,0);
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390c3d4(plVar8[3],0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390b70c(lVar13,0);
        if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_038d6628(0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar5,uVar5);
        }
        FUN_0391d75c(lVar13,uVar5,0);
      }
      else {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390c3d4(lVar13,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390b70c(lVar13,0);
        puVar3 = StringLiteral_3859;
        lVar10 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0391d880(lVar13,*(undefined4 *)(lVar10 + 0x28),0);
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390c3d4(plVar8[3],0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390b70c(lVar13,0);
        lVar10 = FUN_02e9542c(*(undefined8 *)puVar3);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0391d844(lVar13,*(undefined4 *)(lVar10 + 0x24),0);
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390c3d4(plVar8[3],0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = FUN_0390b70c(lVar13,0);
        lVar10 = FUN_02e9542c(*(undefined8 *)puVar3);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar5 = FUN_038d6930(lVar10,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar5,uVar5);
        }
        FUN_0391d75c(lVar13,uVar5,0);
      }
      if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      *(long *)(plVar8[3] + 0x40) = plVar7[3];
      thunk_FUN_01f51358();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_039109dc(plVar6[3],0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_029dad5c(plVar8,*(undefined8 *)
                                    Method_System_Configuration_ConfigurationElement_get_Properties__
                           );
      puVar2 = StringLiteral_2862;
      if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar12 = (long *)FUN_0393c6a4(param_4,uVar5,uVar11);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_3860) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0393a918;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)StringLiteral_3860,0);
LAB_0393a918:
      uVar5 = (*(code *)*puVar9)(plVar12,puVar9[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = thunk_FUN_01f116d0(uVar5,*(undefined8 *)
                                        Method_System_Configuration_ConfigurationElement_Reset__);
      FUN_0393c950(param_1,uVar5,param_5 & 1);
      if (plVar12 != (long *)0x0) {
        lVar13 = *plVar12;
        uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0393a9c0;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar12,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0393a9c0:
        (*(code *)*puVar9)(plVar12,puVar9[1]);
      }
      if (plVar8 != (long *)0x0) {
        lVar13 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0393aa38;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0393aa38:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
    }
    else {
      *(long *)(param_6 + 0x40) = plVar7[3];
      thunk_FUN_01f51358();
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_039109dc(plVar6[3],0);
      puVar2 = StringLiteral_2862;
      if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar8 = (long *)FUN_0393c6a4(param_4,uVar5,param_6);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar13 = *plVar8;
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_3860) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0393a574;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)StringLiteral_3860,0);
LAB_0393a574:
      uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = thunk_FUN_01f116d0(uVar5,*(undefined8 *)
                                        Method_System_Configuration_ConfigurationElement_Reset__);
      FUN_0393c950(param_1,uVar5,param_5 & 1);
      if (plVar8 != (long *)0x0) {
        lVar13 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar4 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0393a618;
            }
            uVar4 = uVar4 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar4 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_0393a618:
        (*(code *)*puVar9)(plVar8,puVar9[1]);
      }
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar8 = (long *)FUN_039109dc(plVar6[3],0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
    *param_2 = uVar5;
    thunk_FUN_01f51358(param_2);
    if (plVar7 != (long *)0x0) {
      lVar13 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0393aae8;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393aae8:
      (*(code *)*puVar9)(plVar7,puVar9[1]);
    }
    if (plVar6 != (long *)0x0) {
      lVar13 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar4 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0393ab54;
          }
          uVar4 = uVar4 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar4 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393ab54:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
    }
  }
  return;
}


