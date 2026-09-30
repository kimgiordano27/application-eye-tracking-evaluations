/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Certificate2Impl$$.ctor
ENTRY_POINT: 0393a44c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


/* WARNING: Removing unreachable block (ram,0x0393ac10) */
/* WARNING: Removing unreachable block (ram,0x0393abcc) */
/* WARNING: Removing unreachable block (ram,0x0393a9d8) */
/* WARNING: Removing unreachable block (ram,0x0393a630) */
/* WARNING: Removing unreachable block (ram,0x0393abdc) */
/* WARNING: Removing unreachable block (ram,0x0393ac28) */
/* WARNING: Removing unreachable block (ram,0x0393abf0) */
/* WARNING: Removing unreachable block (ram,0x0393aa50) */

void System_Security_Cryptography_X509Certificates_X509Certificate2Impl___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 unaff_w25;
  undefined8 *unaff_x26;
  
  *unaff_x26 = unaff_x19;
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)StringLiteral_3383 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3384);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
  }
  plVar4 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar4[3],*unaff_x26);
  puVar1 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (unaff_x22 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar6 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Configuration_ConfigurationElement_ResetModified__)
    ;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = FUN_0390c3d4(plVar6[3],0);
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_0391cfa8(0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar5,uVar5);
    }
    FUN_0391d334(lVar11,uVar5,0);
    uVar12 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
    lVar11 = plVar6[3];
    if ((uVar12 & 1) == 0) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390c3d4(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b70c(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar11,0,0);
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390c3d4(plVar6[3],0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b70c(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar11,0,0);
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390c3d4(plVar6[3],0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b70c(lVar11,0);
      if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_038d6628(0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar5,uVar5);
      }
      FUN_0391d75c(lVar11,uVar5,0);
    }
    else {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390c3d4(lVar11,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b70c(lVar11,0);
      puVar2 = StringLiteral_3859;
      lVar8 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar11,*(undefined4 *)(lVar8 + 0x28),0);
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390c3d4(plVar6[3],0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b70c(lVar11,0);
      lVar8 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar11,*(undefined4 *)(lVar8 + 0x24),0);
      if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390c3d4(plVar6[3],0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar11 = FUN_0390b70c(lVar11,0);
      lVar8 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = FUN_038d6930(lVar8,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar5,uVar5);
      }
      FUN_0391d75c(lVar11,uVar5,0);
    }
    if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(plVar6[3] + 0x40) = plVar4[3];
    thunk_FUN_01f51358();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = FUN_039109dc(plVar3[3],0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_029dad5c(plVar6,*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_get_Properties__);
    puVar1 = StringLiteral_2862;
    if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar10 = (long *)FUN_0393c6a4(unaff_w25,uVar5,uVar9);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar10;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3860) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0393a918;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)StringLiteral_3860,0);
LAB_0393a918:
    uVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01f116d0(uVar5,*(undefined8 *)Method_System_Configuration_ConfigurationElement_Reset__
                      );
    FUN_0393c950();
    if (plVar10 != (long *)0x0) {
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0393a9c0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar10,*(long *)
                                     Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393a9c0:
      (*(code *)*puVar7)(plVar10,puVar7[1]);
    }
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0393aa38;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393aa38:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
  }
  else {
    *(long *)(unaff_x22 + 0x40) = plVar4[3];
    thunk_FUN_01f51358();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = FUN_039109dc(plVar3[3],0);
    puVar1 = StringLiteral_2862;
    if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar6 = (long *)FUN_0393c6a4(unaff_w25,uVar5);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar11 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_3860) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0393a574;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)StringLiteral_3860,0);
LAB_0393a574:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01f116d0(uVar5,*(undefined8 *)Method_System_Configuration_ConfigurationElement_Reset__
                      );
    FUN_0393c950();
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0393a618;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393a618:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar6 = (long *)FUN_039109dc(plVar3[3],0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
  *unaff_x21 = uVar5;
  thunk_FUN_01f51358();
  if (plVar4 != (long *)0x0) {
    lVar11 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0393aae8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393aae8:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  if (plVar3 != (long *)0x0) {
    lVar11 = *plVar3;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0393ab54;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393ab54:
    (*(code *)*puVar7)(plVar3,puVar7[1]);
  }
  return;
}


