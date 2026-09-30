/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$ProcessCrlEntryExtensions
ENTRY_POINT: 039409f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x03940d0c) */
/* WARNING: Removing unreachable block (ram,0x03940cfc) */
/* WARNING: Removing unreachable block (ram,0x03940cc8) */
/* WARNING: Removing unreachable block (ram,0x03940d04) */

void System_Security_Cryptography_X509Certificates_X509ChainImplMono__ProcessCrlEntryExtensions
               (long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  undefined8 unaff_x27;
  int iVar9;
  long *unaff_x28;
  long *in_stack_00000000;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_039410e4(unaff_x27);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      thunk_FUN_01f51358();
    }
    else {
      FUN_030f2bb4();
    }
    while( true ) {
      lVar6 = FUN_038d8810();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391e060(lVar6,0);
      unaff_w26 = unaff_w26 + 1;
      if (*(int *)(unaff_x24 + 0x18) <= unaff_w26) {
        if (in_stack_00000000 == (long *)0x0) goto LAB_03940b20;
        lVar6 = *in_stack_00000000;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_03940af8;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_03940ae0;
      }
      lVar6 = FUN_030f28e4();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar9 = *(int *)(lVar6 + 0x10);
      if (iVar9 == 0) break;
      if (iVar9 == 1) {
        FUN_038ebcec();
        (**(code **)(*unaff_x25 + 0x4e8))();
        (**(code **)(*unaff_x25 + 0x528))();
        (**(code **)(*unaff_x25 + 0x418))();
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_039410e4(uVar3);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      else if (iVar9 == 2) {
        FUN_038ebcec();
        (**(code **)(*unaff_x25 + 0x4e8))();
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar2 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar2 + 0x1a8))
                  (plVar2,*(undefined8 *)StringLiteral_3920,*(undefined8 *)(lVar6 + 0x38));
        plVar2 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar2 + 0x1a8))
                  (plVar2,*(undefined8 *)StringLiteral_3921,*(undefined8 *)(lVar6 + 0x40));
        (**(code **)(*unaff_x25 + 0x418))();
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar3 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_039410e4(uVar3);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
    }
    FUN_038ebcec();
    (**(code **)(*unaff_x25 + 0x4e8))();
    if ((*(long *)(lVar6 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar6 + 0x20) + 0x18))) {
      (**(code **)(*unaff_x25 + 0x438))();
      lVar5 = *(long *)(lVar6 + 0x20);
      if (lVar5 == 0) {
LAB_03940c8c:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar9 = 0;
      while (iVar9 < *(int *)(lVar5 + 0x18)) {
        FUN_030f28e4(lVar5,iVar9,*unaff_x21);
        (**(code **)(*unaff_x25 + 0x4e8))();
        lVar5 = *(long *)(lVar6 + 0x20);
        iVar9 = iVar9 + 1;
        if (lVar5 == 0) goto LAB_03940c8c;
      }
      (**(code **)(*unaff_x25 + 0x448))();
      unaff_x28 = in_stack_00000018;
    }
    if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
        == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar2 = (long *)FUN_023f9e30(*(undefined8 *)
                                   Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar2 + 0x188))
              (plVar2,*(undefined8 *)
                       Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__,
               *(undefined8 *)(lVar6 + 0x28));
    (**(code **)(*unaff_x25 + 0x418))();
    if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x27 = FUN_039109dc(unaff_x28[3],0);
    param_1 = *unaff_x23;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03940ae0:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03940b14;
    }
  }
LAB_03940af8:
  puVar4 = (undefined8 *)
           FUN_01ecb238(in_stack_00000000,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03940b14:
  (*(code *)*puVar4)(in_stack_00000000,puVar4[1]);
LAB_03940b20:
  if (in_stack_00000010 != (long *)0x0) {
    lVar6 = *in_stack_00000010;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03940b80;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(in_stack_00000010,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940b80:
    (*(code *)*puVar4)(in_stack_00000010,puVar4[1]);
  }
  if (unaff_x28 != (long *)0x0) {
    lVar6 = *unaff_x28;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03940bec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(unaff_x28,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940bec:
    (*(code *)*puVar4)(unaff_x28,puVar4[1]);
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar6 = *in_stack_00000008;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03940c58;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940c58:
    (*(code *)*puVar4)(in_stack_00000008,puVar4[1]);
  }
  return;
}


