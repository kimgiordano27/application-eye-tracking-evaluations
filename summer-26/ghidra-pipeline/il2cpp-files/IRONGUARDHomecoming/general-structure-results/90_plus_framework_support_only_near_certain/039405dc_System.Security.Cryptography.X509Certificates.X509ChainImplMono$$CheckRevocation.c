/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$CheckRevocation
ENTRY_POINT: 039405dc
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

void System_Security_Cryptography_X509Certificates_X509ChainImplMono__CheckRevocation
               (undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  int iVar11;
  undefined8 *unaff_x26;
  int iVar12;
  long *unaff_x28;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long *in_stack_00000018;
  
  FUN_03937bf8(param_1,*unaff_x26);
  lVar4 = FUN_038d8810();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar4 + 0x40) = unaff_x23[3];
  thunk_FUN_01f51358();
  puVar3 = StringLiteral_2862;
  puVar2 = Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
  if (0 < *(int *)(unaff_x24 + 0x18)) {
    iVar11 = 0;
    do {
      lVar4 = FUN_030f28e4();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar12 = *(int *)(lVar4 + 0x10);
      if (iVar12 == 0) {
        FUN_038ebcec();
        (**(code **)(*unaff_x25 + 0x4e8))();
        if ((*(long *)(lVar4 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar4 + 0x20) + 0x18))) {
          (**(code **)(*unaff_x25 + 0x438))();
          lVar8 = *(long *)(lVar4 + 0x20);
          if (lVar8 == 0) {
LAB_03940c8c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar12 = 0;
          while (iVar12 < *(int *)(lVar8 + 0x18)) {
            FUN_030f28e4(lVar8,iVar12,*(undefined8 *)puVar2);
            (**(code **)(*unaff_x25 + 0x4e8))();
            lVar8 = *(long *)(lVar4 + 0x20);
            iVar12 = iVar12 + 1;
            if (lVar8 == 0) goto LAB_03940c8c;
          }
          (**(code **)(*unaff_x25 + 0x448))();
          unaff_x28 = in_stack_00000018;
        }
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_023f9e30(*(undefined8 *)
                                       Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar5 + 0x188))
                  (plVar5,*(undefined8 *)
                           Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                   ,*(undefined8 *)(lVar4 + 0x28));
        (**(code **)(*unaff_x25 + 0x418))();
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      else if (iVar12 == 1) {
        FUN_038ebcec();
        (**(code **)(*unaff_x25 + 0x4e8))();
        (**(code **)(*unaff_x25 + 0x528))();
        (**(code **)(*unaff_x25 + 0x418))();
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      else if (iVar12 == 2) {
        FUN_038ebcec();
        (**(code **)(*unaff_x25 + 0x4e8))();
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar5 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar5 + 0x1a8))
                  (plVar5,*(undefined8 *)StringLiteral_3920,*(undefined8 *)(lVar4 + 0x38));
        plVar5 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar5 + 0x1a8))
                  (plVar5,*(undefined8 *)StringLiteral_3921,*(undefined8 *)(lVar4 + 0x40));
        (**(code **)(*unaff_x25 + 0x418))();
        if (unaff_x28[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(unaff_x28[3],0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
      lVar4 = FUN_038d8810();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391e060(lVar4,0);
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(unaff_x24 + 0x18));
    if (unaff_x23 == (long *)0x0) goto LAB_03940b20;
  }
  lVar4 = *unaff_x23;
  uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_03940b14;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(unaff_x23,
                        *(long *)
                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,0)
  ;
LAB_03940b14:
  (*(code *)*puVar7)(unaff_x23,puVar7[1]);
LAB_03940b20:
  if (in_stack_00000010 != (long *)0x0) {
    lVar4 = *in_stack_00000010;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03940b80;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(in_stack_00000010,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940b80:
    (*(code *)*puVar7)(in_stack_00000010,puVar7[1]);
  }
  if (unaff_x28 != (long *)0x0) {
    lVar4 = *unaff_x28;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03940bec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(unaff_x28,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940bec:
    (*(code *)*puVar7)(unaff_x28,puVar7[1]);
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar4 = *in_stack_00000008;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03940c58;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(in_stack_00000008,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_03940c58:
    (*(code *)*puVar7)(in_stack_00000008,puVar7[1]);
  }
  return;
}


