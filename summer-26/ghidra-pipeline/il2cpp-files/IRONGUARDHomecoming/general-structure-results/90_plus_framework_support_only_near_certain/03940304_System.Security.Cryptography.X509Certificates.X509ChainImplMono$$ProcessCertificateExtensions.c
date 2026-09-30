/*
FUNCTION_NAME: System.Security.Cryptography.X509Certificates.X509ChainImplMono$$ProcessCertificateExtensions
ENTRY_POINT: 03940304
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

long System_Security_Cryptography_X509Certificates_X509ChainImplMono__ProcessCertificateExtensions
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  undefined8 uVar18;
  long unaff_x24;
  long *plVar19;
  int iVar20;
  long *unaff_x26;
  int iVar21;
  
  thunk_FUN_01efb3a4(StringLiteral_2862);
  thunk_FUN_01efb3a4(StringLiteral_3919);
  thunk_FUN_01efb3a4(StringLiteral_3920);
  thunk_FUN_01efb3a4(StringLiteral_3921);
  thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                    );
  thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
  *(undefined1 *)(unaff_x19 + 0x344) = 1;
  lVar14 = *unaff_x26;
  if (lVar14 == 0) {
    lVar14 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_CreateDirectory__);
    FUN_030f2380(lVar14,*(undefined8 *)Method_System_IO_FileSystem_DeleteFile__);
    *unaff_x26 = lVar14;
    thunk_FUN_01f51358();
  }
  else {
    iVar20 = *(int *)(lVar14 + 0x18);
    if (0 < iVar20) {
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      FUN_0358d1e4(*(undefined8 *)(lVar14 + 0x10),0,iVar20,0);
    }
  }
  puVar4 = StringLiteral_3918;
  puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
  if ((unaff_x24 == 0) || (*(int *)(unaff_x24 + 0x18) == 0)) {
    lVar14 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    FUN_030f2380(lVar14,*(undefined8 *)puVar3);
    return lVar14;
  }
  lVar14 = *(long *)StringLiteral_3918;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar14 = *(long *)puVar4;
  }
  if (*(long *)(*(long *)(lVar14 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)puVar4;
    }
    uVar18 = **(undefined8 **)(lVar14 + 0xb8);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3914);
    FUN_02a487e4(uVar6,uVar18,*(undefined8 *)StringLiteral_3917,0);
    puVar7 = (undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *puVar7 = uVar6;
    thunk_FUN_01f51358(puVar7,uVar6);
  }
  FUN_030f459c();
  lVar14 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030f2380(lVar14,*(undefined8 *)puVar3);
  puVar2 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar8 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_ResetModified__);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
  }
  plVar9 = (long *)FUN_03910d44(0,0);
  if (*(int *)(*(long *)StringLiteral_3554 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar10 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3553);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar11 = (long *)FUN_029da4a8(*(undefined8 *)
                                  Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar19 = (long *)plVar10[3];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar12 = FUN_029dad5c(plVar8,*(undefined8 *)
                                Method_System_Configuration_ConfigurationElement_get_Properties__);
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar19[4] = lVar12;
  thunk_FUN_01f51358();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_039109dc(plVar9[3],0);
  (**(code **)(*plVar19 + 0x408))(plVar19,uVar6,*(undefined8 *)(*plVar19 + 0x410));
  (**(code **)(*plVar19 + 0x5d8))(plVar19,*(undefined8 *)(*plVar19 + 0x5e0));
  *(undefined2 *)((long)plVar19 + 0x54) = 0;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar11[3],*unaff_x26);
  lVar12 = FUN_038d8810(plVar19,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar12 + 0x40) = plVar11[3];
  thunk_FUN_01f51358();
  puVar5 = StringLiteral_2862;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
  puVar3 = Method_System_Globalization_CompareInfo_GetHashCode__;
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
  if (0 < *(int *)(unaff_x24 + 0x18)) {
    iVar20 = 0;
    do {
      lVar12 = FUN_030f28e4();
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar21 = *(int *)(lVar12 + 0x10);
      if (iVar21 == 0) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar12 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        if ((*(long *)(lVar12 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar12 + 0x20) + 0x18))) {
          (**(code **)(*plVar19 + 0x438))
                    (plVar19,*(undefined8 *)StringLiteral_3919,0,*(undefined8 *)(*plVar19 + 0x440));
          lVar15 = *(long *)(lVar12 + 0x20);
          if (lVar15 == 0) {
LAB_03940c8c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar21 = 0;
          while (iVar21 < *(int *)(lVar15 + 0x18)) {
            uVar6 = FUN_030f28e4(lVar15,iVar21,*(undefined8 *)puVar4);
            (**(code **)(*plVar19 + 0x4e8))(plVar19,0,uVar6,*(undefined8 *)(*plVar19 + 0x4f0));
            lVar15 = *(long *)(lVar12 + 0x20);
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
        plVar13 = (long *)FUN_023f9e30(*(undefined8 *)
                                        Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar13 + 0x188))
                  (plVar13,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                   ,*(undefined8 *)(lVar12 + 0x28),plVar19,*(undefined8 *)(*plVar13 + 400));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(plVar9[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar14,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (iVar21 == 1) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar12 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        (**(code **)(*plVar19 + 0x528))
                  (plVar19,*(undefined8 *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                   ,*(undefined4 *)(lVar12 + 0x30),*(undefined8 *)(*plVar19 + 0x530));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(plVar9[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar14,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (iVar21 == 2) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar12 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar13 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar13 + 0x1a8))
                  (plVar13,*(undefined8 *)StringLiteral_3920,*(undefined8 *)(lVar12 + 0x38),plVar19,
                   *(undefined8 *)(*plVar13 + 0x1b0));
        plVar13 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar13 + 0x1a8))
                  (plVar13,*(undefined8 *)StringLiteral_3921,*(undefined8 *)(lVar12 + 0x40),plVar19,
                   *(undefined8 *)(*plVar13 + 0x1b0));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_039109dc(plVar9[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_039410e4(uVar6);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar12 = *(long *)(lVar14 + 0x10);
        lVar15 = *(long *)puVar2;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar14,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar12 = FUN_038d8810(plVar19,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391e060(lVar12,0);
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(unaff_x24 + 0x18));
    if (plVar11 == (long *)0x0) goto LAB_03940b20;
  }
  lVar12 = *plVar11;
  uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_03940b14;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar11,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03940b14:
  (*(code *)*puVar7)(plVar11,puVar7[1]);
LAB_03940b20:
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03940b80;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03940b80:
    (*(code *)*puVar7)(plVar10,puVar7[1]);
  }
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03940bec;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03940bec:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03940c58;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar8,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_03940c58:
    (*(code *)*puVar7)(plVar8,puVar7[1]);
  }
  return lVar14;
}


