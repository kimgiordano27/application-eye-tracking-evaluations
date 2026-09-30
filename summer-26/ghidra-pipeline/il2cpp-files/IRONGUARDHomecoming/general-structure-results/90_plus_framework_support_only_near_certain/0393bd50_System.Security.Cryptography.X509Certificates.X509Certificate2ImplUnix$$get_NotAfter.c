/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix$$get_NotAfter
ENTRY_POINT: 0393bd50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0393baa0) */
/* WARNING: Removing unreachable block (ram,0x0393bab4) */
/* WARNING: Removing unreachable block (ram,0x0393ba78) */
/* WARNING: Removing unreachable block (ram,0x0393bac8) */

void System_Security_Cryptography_X509Certificates_X509Certificate2ImplUnix__get_NotAfter(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w23;
  long in_stack_00000028;
  
  __cxa_end_catch();
  if (unaff_x21 != (long *)0x0) {
    lVar4 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393b534;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_0393b534:
    (*(code *)*puVar10)();
  }
  puVar1 = Method_System_Configuration_ConfigurationElement_IsModified__;
  if (in_stack_00000028 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(in_stack_00000028);
  }
  if (*(int *)(*(long *)Method_System_Configuration_ConfigurationElement_IsModified__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c();
  }
  plVar3 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Runtime_Remoting_ConfigHandler_ReadServiceWellKnown__
                               );
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = FUN_0390b368(plVar3[3],0);
  if (*(int *)(*(long *)Method_System_Linq_Enumerable_Select<int,_int>__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_0391cfa8(0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar5,uVar5);
  }
  FUN_0391d334(lVar4,uVar5,0);
  uVar6 = FUN_02e95408(*(undefined8 *)StringLiteral_3858);
  lVar4 = plVar3[3];
  if ((uVar6 & 1) == 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b368(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b70c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0391d880(lVar4,0,0);
    if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b368(plVar3[3],0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b70c(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0391d844(lVar4,0,0);
    if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b368(plVar3[3],0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b70c(lVar4,0);
    if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_038d6628(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar5,uVar5);
    }
    FUN_0391d75c(lVar4,uVar5,0);
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b368(lVar4,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b70c(lVar4,0);
    puVar2 = StringLiteral_3859;
    lVar7 = FUN_02e9542c(*(undefined8 *)StringLiteral_3859);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0391d880(lVar4,*(undefined4 *)(lVar7 + 0x28),0);
    if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b368(plVar3[3],0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b70c(lVar4,0);
    lVar7 = FUN_02e9542c(*(undefined8 *)puVar2);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_0391d844(lVar4,*(undefined4 *)(lVar7 + 0x24),0);
    if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b368(plVar3[3],0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_0390b70c(lVar4,0);
    lVar7 = FUN_02e9542c(*(undefined8 *)puVar2);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = FUN_038d6930(lVar7,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar5,uVar5);
    }
    FUN_0391d75c(lVar4,uVar5,0);
  }
  if (plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(plVar3[3] + 0x50) = unaff_x20[3];
  thunk_FUN_01f51358();
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = FUN_039109dc(unaff_x19[3],0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_029dad5c(plVar3,*(undefined8 *)
                               Method_System_Runtime_Remoting_ConfigHandler_ValidatePath__);
  puVar1 = StringLiteral_2862;
  if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar9 = (long *)FUN_0393fb14(unaff_w23,uVar5,uVar8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_3860) {
        puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0393b828;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar6 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)StringLiteral_3860,0);
LAB_0393b828:
  uVar5 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  thunk_FUN_01f116d0(uVar5,*(undefined8 *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__
                    );
  FUN_0393e9c4();
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393b8c4;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_0393b8c4:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393b92c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(plVar3,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_0393b92c:
    (*(code *)*puVar10)(plVar3,puVar10[1]);
  }
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393b998;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_0393b998:
    (*(code *)*puVar10)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar10 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0393ba04;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238();
LAB_0393ba04:
    (*(code *)*puVar10)();
  }
  return;
}


