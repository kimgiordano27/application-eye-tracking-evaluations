/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono$$GetRawCertData
ENTRY_POINT: 0393a7a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0393ac10) */
/* WARNING: Removing unreachable block (ram,0x0393abcc) */
/* WARNING: Removing unreachable block (ram,0x0393a9d8) */
/* WARNING: Removing unreachable block (ram,0x0393abdc) */
/* WARNING: Removing unreachable block (ram,0x0393ac28) */
/* WARNING: Removing unreachable block (ram,0x0393aa50) */

void System_Security_Cryptography_X509Certificates_X509Certificate2ImplMono__GetRawCertData
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w25;
  long *unaff_x27;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b70c(param_1,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0391d880(lVar2,0,0);
  if (unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390c3d4(unaff_x22[3],0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b70c(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0391d844(lVar2,0,0);
  if (unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390c3d4(unaff_x22[3],0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = FUN_0390b70c(lVar2,0);
  if (*(int *)(*(long *)Method_System_Diagnostics_DebuggerBrowsableAttribute__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_038d6628(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar3,uVar3);
  }
  FUN_0391d75c(lVar2,uVar3,0);
  if (unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(unaff_x22[3] + 0x40) = unaff_x20[3];
  thunk_FUN_01f51358();
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x19[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_039109dc(unaff_x19[3],0);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_029dad5c();
  puVar1 = StringLiteral_2862;
  if (*(int *)(*(long *)StringLiteral_2862 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar5 = (long *)FUN_0393c6a4(unaff_w25,uVar3,uVar4);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_3860) {
        puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0393a918;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)StringLiteral_3860,0);
LAB_0393a918:
  uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  thunk_FUN_01f116d0(uVar3,*(undefined8 *)Method_System_Configuration_ConfigurationElement_Reset__);
  FUN_0393c950();
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0393a9c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_0393a9c0:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (unaff_x22 != (long *)0x0) {
    lVar2 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0393aa38;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0393aa38:
    (*(code *)*puVar6)();
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
  uVar3 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
  *unaff_x21 = uVar3;
  thunk_FUN_01f51358();
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0393aae8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0393aae8:
    (*(code *)*puVar6)();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar2 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0393ab54;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0393ab54:
    (*(code *)*puVar6)();
  }
  return;
}


