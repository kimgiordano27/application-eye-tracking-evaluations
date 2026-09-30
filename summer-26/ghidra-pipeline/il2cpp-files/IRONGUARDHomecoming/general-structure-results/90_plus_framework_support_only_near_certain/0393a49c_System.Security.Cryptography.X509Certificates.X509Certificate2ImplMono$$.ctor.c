/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono$$.ctor
ENTRY_POINT: 0393a49c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x0393ac10) */
/* WARNING: Removing unreachable block (ram,0x0393abcc) */
/* WARNING: Removing unreachable block (ram,0x0393a9d8) */
/* WARNING: Removing unreachable block (ram,0x0393a630) */
/* WARNING: Removing unreachable block (ram,0x0393abdc) */
/* WARNING: Removing unreachable block (ram,0x0393ac28) */
/* WARNING: Removing unreachable block (ram,0x0393abf0) */
/* WARNING: Removing unreachable block (ram,0x0393aa50) */

void System_Security_Cryptography_X509Certificates_X509Certificate2ImplMono___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 unaff_w25;
  undefined8 *unaff_x26;
  
  plVar3 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar3[3],*unaff_x26);
  puVar1 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (unaff_x22 == 0) {
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Configuration_ConfigurationElement_ResetModified__)
    ;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = FUN_0390c3d4(plVar5[3],0);
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar4 = FUN_0391cfa8(0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar4,uVar4);
    }
    FUN_0391d334(lVar10,uVar4,0);
    uVar11 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
    lVar10 = plVar5[3];
    if ((uVar11 & 1) == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390c3d4(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar10,0,0);
      if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390c3d4(plVar5[3],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar10,0,0);
      if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390c3d4(plVar5[3],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_038d6628(0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar4,uVar4);
      }
      FUN_0391d75c(lVar10,uVar4,0);
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390c3d4(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      puVar2 = StringLiteral_3859;
      lVar7 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar10,*(undefined4 *)(lVar7 + 0x28),0);
      if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390c3d4(plVar5[3],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      lVar7 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar10,*(undefined4 *)(lVar7 + 0x24),0);
      if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390c3d4(plVar5[3],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      lVar7 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_038d6930(lVar7,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar4,uVar4);
      }
      FUN_0391d75c(lVar10,uVar4,0);
    }
    if (plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(plVar5[3] + 0x40) = plVar3[3];
    thunk_FUN_01f51358();
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = FUN_039109dc(unaff_x19[3],0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_029dad5c(plVar5,*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_get_Properties__);
    puVar1 = StringLiteral_2862;
    if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar9 = (long *)FUN_0393c6a4(unaff_w25,uVar4,uVar8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_3860) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0393a918;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)StringLiteral_3860,0);
LAB_0393a918:
    uVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01f116d0(uVar4,*(undefined8 *)Method_System_Configuration_ConfigurationElement_Reset__
                      );
    FUN_0393c950();
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0393a9c0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393a9c0:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0393aa38;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393aa38:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  else {
    *(long *)(unaff_x22 + 0x40) = plVar3[3];
    thunk_FUN_01f51358();
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = FUN_039109dc(unaff_x19[3],0);
    puVar1 = StringLiteral_2862;
    if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar5 = (long *)FUN_0393c6a4(unaff_w25,uVar4);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_3860) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0393a574;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_3860,0);
LAB_0393a574:
    uVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01f116d0(uVar4,*(undefined8 *)Method_System_Configuration_ConfigurationElement_Reset__
                      );
    FUN_0393c950();
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0393a618;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar5,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393a618:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar5 = (long *)FUN_039109dc(unaff_x19[3],0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
  *unaff_x21 = uVar4;
  thunk_FUN_01f51358();
  if (plVar3 != (long *)0x0) {
    lVar10 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0393aae8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar3,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393aae8:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  }
  if (unaff_x19 != (long *)0x0) {
    lVar10 = *unaff_x19;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0393ab54;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0393ab54:
    (*(code *)*puVar6)();
  }
  return;
}


