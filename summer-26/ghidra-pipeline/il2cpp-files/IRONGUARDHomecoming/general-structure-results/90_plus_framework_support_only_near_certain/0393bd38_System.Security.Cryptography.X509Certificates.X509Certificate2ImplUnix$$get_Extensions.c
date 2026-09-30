/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix$$get_Extensions
ENTRY_POINT: 0393bd38
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0393bac8) */
/* WARNING: Removing unreachable block (ram,0x0393bfd8) */
/* WARNING: Removing unreachable block (ram,0x0393bab4) */
/* WARNING: Removing unreachable block (ram,0x0393bf4c) */
/* WARNING: Removing unreachable block (ram,0x0393bdd4) */

void System_Security_Cryptography_X509Certificates_X509Certificate2ImplUnix__get_Extensions(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w23;
  int unaff_w25;
  
  if (unaff_w25 == 1) {
    plVar9 = (long *)__cxa_begin_catch();
    lVar10 = *plVar9;
    __cxa_end_catch();
    if (unaff_x21 != (long *)0x0) {
      lVar5 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0393b534;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
LAB_0393b534:
      (*(code *)*puVar8)();
    }
    puVar1 = Method_System_Configuration_ConfigurationElement_IsModified__;
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01eed990(lVar10);
    }
    if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0
       ) {
      thunk_FUN_01ee6d7c();
    }
    plVar9 = (long *)FUN_029da4a8(*(undefined8 *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                                 );
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = FUN_0390b368(plVar9[3],0);
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_0391cfa8(0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar3,uVar3);
    }
    FUN_0391d334(lVar10,uVar3,0);
    uVar4 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
    lVar10 = plVar9[3];
    if ((uVar4 & 1) == 0) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b368(lVar10,0);
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
      if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b368(plVar9[3],0);
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
      if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b368(plVar9[3],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_038d6628(0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar3,uVar3);
      }
      FUN_0391d75c(lVar10,uVar3,0);
    }
    else {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b368(lVar10,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      puVar2 = StringLiteral_3859;
      lVar5 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d880(lVar10,*(undefined4 *)(lVar5 + 0x28),0);
      if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b368(plVar9[3],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      lVar5 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391d844(lVar10,*(undefined4 *)(lVar5 + 0x24),0);
      if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b368(plVar9[3],0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = FUN_0390b70c(lVar10,0);
      lVar5 = FUN_02e9542c(*(undefined8 *)puVar2);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar3 = FUN_038d6930(lVar5,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar3,uVar3);
      }
      FUN_0391d75c(lVar10,uVar3,0);
    }
    if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    *(long *)(plVar9[3] + 0x50) = unaff_x20[3];
    thunk_FUN_01f51358();
    if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = FUN_039109dc(unaff_x19[3],0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_029dad5c(plVar9,*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
    puVar1 = StringLiteral_2862;
    if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar7 = (long *)FUN_0393fb14(unaff_w23,uVar3,uVar6);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_3860) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393b828;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)StringLiteral_3860,0);
LAB_0393b828:
    uVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01f116d0(uVar3,*(undefined8 *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    FUN_0393e9c4();
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0393b8c4;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393b8c4:
      (*(code *)*puVar8)(plVar7,puVar8[1]);
    }
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0393b92c;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_0393b92c:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
    lVar10 = 0;
  }
  else {
    if (unaff_x21 != (long *)0x0) {
      lVar10 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x0393bdc0;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238();
code_r0x0393bdc0:
      (*(code *)*puVar8)();
    }
    if (unaff_w25 != 1) {
      if (unaff_x20 != (long *)0x0) {
        lVar10 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
              goto code_r0x0393bf18;
            }
            uVar4 = uVar4 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar4 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238();
code_r0x0393bf18:
        (*(code *)*puVar8)();
      }
      if (unaff_w25 != 1) {
        if (unaff_x19 != (long *)0x0) {
          lVar10 = *unaff_x19;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
                goto code_r0x0393bfc0;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar8 = (undefined8 *)FUN_01ecb238();
code_r0x0393bfc0:
          (*(code *)*puVar8)();
        }
                    /* WARNING: Subroutine does not return */
        FUN_01fbfd14();
      }
      plVar9 = (long *)__cxa_begin_catch();
      lVar10 = *plVar9;
      __cxa_end_catch();
      goto code_r0x0393b9ac;
    }
    plVar9 = (long *)__cxa_begin_catch();
    lVar10 = *plVar9;
    __cxa_end_catch();
  }
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393b998;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_0393b998:
    (*(code *)*puVar8)();
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar10);
  }
  lVar10 = 0;
code_r0x0393b9ac:
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393ba04;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238();
LAB_0393ba04:
    (*(code *)*puVar8)();
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar10);
  }
  return;
}


