/*
FUNCTION_NAME: FUN_03940190
ENTRY_POINT: 03940190
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 197
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_9
*/


/* WARNING: Removing unreachable block (ram,0x03940cfc) */
/* WARNING: Removing unreachable block (ram,0x03940d04) */
/* WARNING: Removing unreachable block (ram,0x03940cc8) */
/* WARNING: Removing unreachable block (ram,0x03940d0c) */

long FUN_03940190(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  int iVar20;
  int iVar21;
  
  if ((DAT_04838344 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_ResetModified__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
    thunk_FUN_01efb3a4(StringLiteral_3553);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationElement_get_Properties__);
    thunk_FUN_01efb3a4(StringLiteral_3554);
    thunk_FUN_01efb3a4(Method_System_Configuration_ConfigurationSection_DeserializeSection__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
    thunk_FUN_01efb3a4(StringLiteral_3914);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_2467);
    thunk_FUN_01efb3a4(StringLiteral_3915);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_DeleteFile__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_3825);
    thunk_FUN_01efb3a4(StringLiteral_3894);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>_ParseChoiceList__);
    thunk_FUN_01efb3a4(StringLiteral_3895);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_CreateDirectory__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    thunk_FUN_01efb3a4(StringLiteral_3916);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
    thunk_FUN_01efb3a4(StringLiteral_3917);
    thunk_FUN_01efb3a4(StringLiteral_3918);
    thunk_FUN_01efb3a4(StringLiteral_2862);
    thunk_FUN_01efb3a4(StringLiteral_3919);
    thunk_FUN_01efb3a4(StringLiteral_3920);
    thunk_FUN_01efb3a4(StringLiteral_3921);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__)
    ;
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_GetHashCode__);
    DAT_04838344 = 1;
  }
  lVar13 = *param_2;
  if (lVar13 == 0) {
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_CreateDirectory__);
    FUN_030f2380(lVar13,*(undefined8 *)Method_System_IO_FileSystem_DeleteFile__);
    *param_2 = lVar13;
    thunk_FUN_01f51358(param_2,lVar13);
  }
  else {
    iVar20 = *(int *)(lVar13 + 0x18);
    if (0 < iVar20) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      FUN_0358d1e4(*(undefined8 *)(lVar13 + 0x10),0,iVar20,0);
    }
  }
  puVar4 = StringLiteral_3918;
  puVar3 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) == 0)) {
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__);
    FUN_030f2380(lVar13,*(undefined8 *)puVar3);
    return lVar13;
  }
  lVar13 = *(long *)StringLiteral_3918;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar13 = *(long *)puVar4;
  }
  lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar13 = *(long *)puVar4;
    }
    uVar18 = **(undefined8 **)(lVar13 + 0xb8);
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_3914);
    FUN_02a487e4(lVar17,uVar18,*(undefined8 *)StringLiteral_3917,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar7 = lVar17;
    thunk_FUN_01f51358(plVar7,lVar17);
  }
  FUN_030f459c(param_1,lVar17,*(undefined8 *)StringLiteral_3915);
  lVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030f2380(lVar13,*(undefined8 *)puVar3);
  puVar2 = Method_System_Configuration_ConfigurationSection_DeserializeSection__;
  if (*(int *)(*(long *)Method_System_Configuration_ConfigurationSection_DeserializeSection__ + 0xe0
              ) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar7 = (long *)FUN_029da4a8(*(undefined8 *)
                                 Method_System_Configuration_ConfigurationElement_ResetModified__);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadProvider__);
  }
  plVar8 = (long *)FUN_03910d44(0,0);
  if (*(int *)(*(long *)StringLiteral_3554 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar9 = (long *)FUN_029da4a8(*(undefined8 *)StringLiteral_3553);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadLifetine__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  plVar10 = (long *)FUN_029da4a8(*(undefined8 *)
                                  Method_System_Runtime_Remoting_ConfigHandler_ReadInteropXml__);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar19 = (long *)plVar9[3];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar17 = FUN_029dad5c(plVar7,*(undefined8 *)
                                Method_System_Configuration_ConfigurationElement_get_Properties__);
  if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar19[4] = lVar17;
  thunk_FUN_01f51358();
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar18 = FUN_039109dc(plVar8[3],0);
  (**(code **)(*plVar19 + 0x408))(plVar19,uVar18,*(undefined8 *)(*plVar19 + 0x410));
  (**(code **)(*plVar19 + 0x5d8))(plVar19,*(undefined8 *)(*plVar19 + 0x5e0));
  *(undefined2 *)((long)plVar19 + 0x54) = 0;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_03937bf8(plVar10[3],*param_2);
  lVar17 = FUN_038d8810(plVar19,0);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(long *)(lVar17 + 0x40) = plVar10[3];
  thunk_FUN_01f51358();
  puVar6 = StringLiteral_3895;
  puVar5 = StringLiteral_2862;
  puVar4 = Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
  puVar3 = Method_System_Globalization_CompareInfo_GetHashCode__;
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Vector2Int>__ctor__;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar20 = 0;
    do {
      lVar17 = FUN_030f28e4(param_1,iVar20,*(undefined8 *)puVar6);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar21 = *(int *)(lVar17 + 0x10);
      if (iVar21 == 0) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar17 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        if ((*(long *)(lVar17 + 0x20) != 0) && (0 < *(int *)(*(long *)(lVar17 + 0x20) + 0x18))) {
          (**(code **)(*plVar19 + 0x438))
                    (plVar19,*(undefined8 *)StringLiteral_3919,0,*(undefined8 *)(*plVar19 + 0x440));
          lVar14 = *(long *)(lVar17 + 0x20);
          if (lVar14 == 0) {
LAB_03940c8c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar21 = 0;
          while (iVar21 < *(int *)(lVar14 + 0x18)) {
            uVar18 = FUN_030f28e4(lVar14,iVar21,*(undefined8 *)puVar4);
            (**(code **)(*plVar19 + 0x4e8))(plVar19,0,uVar18,*(undefined8 *)(*plVar19 + 0x4f0));
            lVar14 = *(long *)(lVar17 + 0x20);
            iVar21 = iVar21 + 1;
            if (lVar14 == 0) goto LAB_03940c8c;
          }
          (**(code **)(*plVar19 + 0x448))
                    (plVar19,*(undefined8 *)StringLiteral_3919,*(undefined8 *)(*plVar19 + 0x450));
        }
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar11 = (long *)FUN_023f9e30(*(undefined8 *)
                                        Method_System_Linq_Enumerable_ToArray<ValueOutput>__);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar11 + 0x188))
                  (plVar11,*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                   ,*(undefined8 *)(lVar17 + 0x28),plVar19,*(undefined8 *)(*plVar11 + 400));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar18 = FUN_039109dc(plVar8[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar18 = FUN_039410e4(uVar18);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = *(long *)(lVar13 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar13,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (iVar21 == 1) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar17 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        (**(code **)(*plVar19 + 0x528))
                  (plVar19,*(undefined8 *)
                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__
                   ,*(undefined4 *)(lVar17 + 0x30),*(undefined8 *)(*plVar19 + 0x530));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar18 = FUN_039109dc(plVar8[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar18 = FUN_039410e4(uVar18);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = *(long *)(lVar13 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar13,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      else if (iVar21 == 2) {
        FUN_038ebcec(plVar19,0);
        (**(code **)(*plVar19 + 0x4e8))
                  (plVar19,*(undefined8 *)puVar3,*(undefined8 *)(lVar17 + 0x18),
                   *(undefined8 *)(*plVar19 + 0x4f0));
        if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar11 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar11 + 0x1a8))
                  (plVar11,*(undefined8 *)StringLiteral_3920,*(undefined8 *)(lVar17 + 0x38),plVar19,
                   *(undefined8 *)(*plVar11 + 0x1b0));
        plVar11 = (long *)FUN_023f9e30(*(undefined8 *)StringLiteral_3916);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar11 + 0x1a8))
                  (plVar11,*(undefined8 *)StringLiteral_3921,*(undefined8 *)(lVar17 + 0x40),plVar19,
                   *(undefined8 *)(*plVar11 + 0x1b0));
        (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
        if (plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar18 = FUN_039109dc(plVar8[3],0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar18 = FUN_039410e4(uVar18);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar17 = *(long *)(lVar13 + 0x10);
        lVar14 = *(long *)puVar2;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar13 + 0x18);
        if (uVar1 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar18;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4(lVar13,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar17 = FUN_038d8810(plVar19,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_0391e060(lVar17,0);
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(param_1 + 0x18));
    if (plVar10 == (long *)0x0) goto LAB_03940b20;
  }
  lVar17 = *plVar10;
  uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_03940b14;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03940b14:
  (*(code *)*puVar12)(plVar10,puVar12[1]);
LAB_03940b20:
  if (plVar9 != (long *)0x0) {
    lVar17 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03940b80;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar9,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03940b80:
    (*(code *)*puVar12)(plVar9,puVar12[1]);
  }
  if (plVar8 != (long *)0x0) {
    lVar17 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03940bec;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar8,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03940bec:
    (*(code *)*puVar12)(plVar8,puVar12[1]);
  }
  if (plVar7 != (long *)0x0) {
    lVar17 = *plVar7;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03940c58;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01ecb238(plVar7,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_03940c58:
    (*(code *)*puVar12)(plVar7,puVar12[1]);
  }
  return lVar13;
}


