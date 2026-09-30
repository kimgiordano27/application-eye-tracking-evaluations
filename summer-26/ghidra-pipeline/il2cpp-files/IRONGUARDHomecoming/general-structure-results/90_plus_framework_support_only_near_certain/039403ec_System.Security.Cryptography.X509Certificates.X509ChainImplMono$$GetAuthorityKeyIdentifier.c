/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$GetAuthorityKeyIdentifier
ENTRY_POINT: 039403ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 172
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x03940cfc) */
/* WARNING: Removing unreachable block (ram,0x03940d04) */
/* WARNING: Removing unreachable block (ram,0x03940cc8) */
/* WARNING: Removing unreachable block (ram,0x03940d0c) */

long System_Security_Cryptography_X509Certificates_X509ChainImplMono__GetAuthorityKeyIdentifier
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *plVar19;
  int iVar20;
  undefined8 *unaff_x26;
  int iVar21;
  
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *unaff_x23;
  }
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *unaff_x23;
    }
    uVar18 = **(undefined8 **)(lVar6 + 0xb8);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3914);
    FUN_02a487e4(uVar7,uVar18,*(undefined8 *)StringLiteral_3917,0);
    puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *puVar8 = uVar7;
    thunk_FUN_01f51358(puVar8,uVar7);
  }
  FUN_030f459c();
  lVar6 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_030f2380(lVar6,*unaff_x21);
  puVar2 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar9 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_ResetModified__);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
  }
  plVar10 = (long *)FUN_03910d44(0,0);
  if (*(int *)(*(long *)StringLiteral_3554 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar11 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3553);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar12 = (long *)FUN_029da4a8(*(undefined8 *)
                                  Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar19 = (long *)plVar11[3];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar13 = FUN_029dad5c(plVar9,*(undefined8 *)
                                Method_System_Configuration_ConfigurationElement_get_Properties__);
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar19[4] = lVar13;
  thunk_FUN_01f51358();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar7 = FUN_039109dc(plVar10[3],0);
  (**(code **)(*plVar19 + 0x408))(plVar19,uVar7,*(undefined8 *)(*plVar19 + 0x410));
  (**(code **)(*plVar19 + 0x5d8))(plVar19,*(undefined8 *)(*plVar19 + 0x5e0));
  *(undefined2 *)((long)plVar19 + 0x54) = 0;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar12[3],*unaff_x26);
  lVar13 = FUN_038d8810(plVar19,0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar13 + 0x40) = plVar12[3];
  thunk_FUN_01f51358();
  puVar5 = StringLiteral_2862;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
  puVar3 = Method_System_Globalization_CompareInfo_GetHashCode__;
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
  if (0 < *(int *)(unaff_x24 + 0x18)) {
    iVar20 = 0;
    do {
      lVar13 = FUN_030f28e4();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar21 = *(int *)(lVar13 + 0x10);
      if (iVar21 == 0) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar13 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        if ((*(long *)(lVar13 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar13 + 0x20) + 0x18))) {
          (**(code **)(*plVar19 + 0x438))
                    (plVar19,*(undefined8 *)StringLiteral_3919,0,*(undefined8 *)(*plVar19 + 0x440));
          lVar15 = *(long *)(lVar13 + 0x20);
          if (lVar15 == 0) {
LAB_03940c8c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar21 = 0;
          while (iVar21 < *(int *)(lVar15 + 0x18)) {
            uVar7 = FUN_030f28e4(lVar15,iVar21,*(undefined8 *)puVar4);
            (**(code **)(*plVar19 + 0x4e8))(plVar19,0,uVar7,*(undefined8 *)(*plVar19 + 0x4f0));
            lVar15 = *(long *)(lVar13 + 0x20);
            iVar21 = iVar21 + 1;
            if (lVar15 == 0) goto LAB_03940c8c;
          }
          (**(code **)(*plVar19 + 0x448))
                    (plVar19,*(undefined8 *)StringLiteral_3919,*(undefined8 *)(*plVar19 + 0x450));
        }
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar14 = (long *)FUN_023f9e30(*(undefined8 *)
                                        Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar14 + 0x188))
                  (plVar14,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                   ,*(undefined8 *)(lVar13 + 0x28),plVar19,*(undefined8 *)(*plVar14 + 400));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = FUN_039109dc(plVar10[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_039410e4(uVar7);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar6 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar6,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (iVar21 == 1) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar13 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        (**(code **)(*plVar19 + 0x528))
                  (plVar19,*(undefined8 *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                   ,*(undefined4 *)(lVar13 + 0x30),*(undefined8 *)(*plVar19 + 0x530));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = FUN_039109dc(plVar10[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_039410e4(uVar7);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar6 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar6,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (iVar21 == 2) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar13 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar14 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar14 + 0x1a8))
                  (plVar14,*(undefined8 *)StringLiteral_3920,*(undefined8 *)(lVar13 + 0x38),plVar19,
                   *(undefined8 *)(*plVar14 + 0x1b0));
        plVar14 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar14 + 0x1a8))
                  (plVar14,*(undefined8 *)StringLiteral_3921,*(undefined8 *)(lVar13 + 0x40),plVar19,
                   *(undefined8 *)(*plVar14 + 0x1b0));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = FUN_039109dc(plVar10[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_039410e4(uVar7);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar6 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar6,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar13 = FUN_038d8810(plVar19,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391e060(lVar13,0);
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(unaff_x24 + 0x18));
    if (plVar12 == (long *)0x0) goto LAB_03940b20;
  }
  lVar13 = *plVar12;
  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_03940b14;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03940b14:
  (*(code *)*puVar8)(plVar12,puVar8[1]);
LAB_03940b20:
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03940b80;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar11,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03940b80:
    (*(code *)*puVar8)(plVar11,puVar8[1]);
  }
  if (plVar10 != (long *)0x0) {
    lVar13 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03940bec;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03940bec:
    (*(code *)*puVar8)(plVar10,puVar8[1]);
  }
  if (plVar9 != (long *)0x0) {
    lVar13 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03940c58;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03940c58:
    (*(code *)*puVar8)(plVar9,puVar8[1]);
  }
  return lVar6;
}


