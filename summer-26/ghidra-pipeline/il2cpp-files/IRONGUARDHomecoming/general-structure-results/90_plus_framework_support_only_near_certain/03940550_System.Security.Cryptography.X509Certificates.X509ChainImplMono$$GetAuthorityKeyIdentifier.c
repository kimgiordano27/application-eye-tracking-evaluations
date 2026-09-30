/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$GetAuthorityKeyIdentifier
ENTRY_POINT: 03940550
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


/* WARNING: Removing unreachable block (ram,0x03940cfc) */
/* WARNING: Removing unreachable block (ram,0x03940d04) */
/* WARNING: Removing unreachable block (ram,0x03940cc8) */
/* WARNING: Removing unreachable block (ram,0x03940d0c) */

void System_Security_Cryptography_X509Certificates_X509ChainImplMono__GetAuthorityKeyIdentifier
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar12;
  int iVar13;
  undefined8 *unaff_x26;
  int iVar14;
  long *unaff_x28;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  plVar12 = *(long **)(unaff_x22 + 0x18);
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar5 = FUN_029dad5c();
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar12[4] = lVar5;
  thunk_FUN_01f51358();
  if (unaff_x28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_039109dc(unaff_x28[3],0);
  (**(code **)(*plVar12 + 0x408))(plVar12,uVar6,*(undefined8 *)(*plVar12 + 0x410));
  (**(code **)(*plVar12 + 0x5d8))(plVar12,*(undefined8 *)(*plVar12 + 0x5e0));
  *(undefined2 *)((long)plVar12 + 0x54) = 0;
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (unaff_x23[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(unaff_x23[3],*unaff_x26);
  lVar5 = FUN_038d8810(plVar12,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar5 + 0x40) = unaff_x23[3];
  thunk_FUN_01f51358();
  puVar4 = StringLiteral_2862;
  puVar3 = Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
  puVar2 = Method_System_Globalization_CompareInfo_GetHashCode__;
  if (0 < *(int *)(unaff_x24 + 0x18)) {
    iVar13 = 0;
    do {
      lVar5 = FUN_030f28e4();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar14 = *(int *)(lVar5 + 0x10);
      if (iVar14 == 0) {
        FUN_038ebcec(plVar12,0);
        (**(code **)(*plVar12 + 0x4e8))
                  (plVar12,*(undefined8 *)puVar2,*(undefined8 *)(lVar5 + 0x18),
                   *(undefined8 *)(*plVar12 + 0x4f0));
        if ((*(long *)(lVar5 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar5 + 0x20) + 0x18))) {
          (**(code **)(*plVar12 + 0x438))
                    (plVar12,*(undefined8 *)StringLiteral_3919,0,*(undefined8 *)(*plVar12 + 0x440));
          lVar9 = *(long *)(lVar5 + 0x20);
          if (lVar9 == 0) {
LAB_03940c8c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar14 = 0;
          while (iVar14 < *(int *)(lVar9 + 0x18)) {
            uVar6 = FUN_030f28e4(lVar9,iVar14,*(undefined8 *)puVar3);
            (**(code **)(*plVar12 + 0x4e8))(plVar12,0,uVar6,*(undefined8 *)(*plVar12 + 0x4f0));
            lVar9 = *(long *)(lVar5 + 0x20);
            iVar14 = iVar14 + 1;
            if (lVar9 == 0) goto LAB_03940c8c;
          }
          (**(code **)(*plVar12 + 0x448))
                    (plVar12,*(undefined8 *)StringLiteral_3919,*(undefined8 *)(*plVar12 + 0x450));
          unaff_x28 = in_stack_00000018;
        }
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar7 = (long *)FUN_023f9e30(*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar7 + 0x188))
                  (plVar7,*(undefined8 *)
                           Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                   ,*(undefined8 *)(lVar5 + 0x28),plVar12,*(undefined8 *)(*plVar7 + 400));
        (**(code **)(*plVar12 + 0x418))(plVar12,*(undefined8 *)(*plVar12 + 0x420));
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      else if (iVar14 == 1) {
        FUN_038ebcec(plVar12,0);
        (**(code **)(*plVar12 + 0x4e8))
                  (plVar12,*(undefined8 *)puVar2,*(undefined8 *)(lVar5 + 0x18),
                   *(undefined8 *)(*plVar12 + 0x4f0));
        (**(code **)(*plVar12 + 0x528))
                  (plVar12,*(undefined8 *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                   ,*(undefined4 *)(lVar5 + 0x30),*(undefined8 *)(*plVar12 + 0x530));
        (**(code **)(*plVar12 + 0x418))(plVar12,*(undefined8 *)(*plVar12 + 0x420));
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      else if (iVar14 == 2) {
        FUN_038ebcec(plVar12,0);
        (**(code **)(*plVar12 + 0x4e8))
                  (plVar12,*(undefined8 *)puVar2,*(undefined8 *)(lVar5 + 0x18),
                   *(undefined8 *)(*plVar12 + 0x4f0));
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar7 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar7 + 0x1a8))
                  (plVar7,*(undefined8 *)StringLiteral_3920,*(undefined8 *)(lVar5 + 0x38),plVar12,
                   *(undefined8 *)(*plVar7 + 0x1b0));
        plVar7 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar7 + 0x1a8))
                  (plVar7,*(undefined8 *)StringLiteral_3921,*(undefined8 *)(lVar5 + 0x40),plVar12,
                   *(undefined8 *)(*plVar7 + 0x1b0));
        (**(code **)(*plVar12 + 0x418))(plVar12,*(undefined8 *)(*plVar12 + 0x420));
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      lVar5 = FUN_038d8810(plVar12,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391e060(lVar5,0);
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(unaff_x24 + 0x18));
    if (unaff_x23 == (long *)0x0) goto LAB_03940b20;
  }
  lVar5 = *unaff_x23;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03940b14;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(unaff_x23,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03940b14:
  (*(code *)*puVar8)(unaff_x23,puVar8[1]);
LAB_03940b20:
  if (in_stack_00000010 != (long *)0x0) {
    lVar5 = *in_stack_00000010;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03940b80;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(in_stack_00000010,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940b80:
    (*(code *)*puVar8)(in_stack_00000010,puVar8[1]);
  }
  if (unaff_x28 != (long *)0x0) {
    lVar5 = *unaff_x28;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03940bec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(unaff_x28,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940bec:
    (*(code *)*puVar8)(unaff_x28,puVar8[1]);
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar5 = *in_stack_00000008;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03940c58;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940c58:
    (*(code *)*puVar8)(in_stack_00000008,puVar8[1]);
  }
  return;
}


