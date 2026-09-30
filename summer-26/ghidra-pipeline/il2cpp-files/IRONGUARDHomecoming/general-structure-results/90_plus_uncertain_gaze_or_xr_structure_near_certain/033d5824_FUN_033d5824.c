/*
FUNCTION_NAME: FUN_033d5824
ENTRY_POINT: 033d5824
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 198
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;strong_file_logging_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033d73e0) */
/* WARNING: Removing unreachable block (ram,0x033d73f4) */
/* WARNING: Removing unreachable block (ram,0x033d6ac0) */
/* WARNING: Removing unreachable block (ram,0x033d65f4) */
/* WARNING: Removing unreachable block (ram,0x033d643c) */
/* WARNING: Removing unreachable block (ram,0x033d6154) */
/* WARNING: Removing unreachable block (ram,0x033d61f0) */
/* WARNING: Removing unreachable block (ram,0x033d5e00) */
/* WARNING: Removing unreachable block (ram,0x033d5eac) */
/* WARNING: Removing unreachable block (ram,0x033d73d0) */
/* WARNING: Removing unreachable block (ram,0x033d737c) */
/* WARNING: Removing unreachable block (ram,0x033d7324) */
/* WARNING: Removing unreachable block (ram,0x033d6de4) */
/* WARNING: Removing unreachable block (ram,0x033d681c) */
/* WARNING: Removing unreachable block (ram,0x033d73e8) */
/* WARNING: Removing unreachable block (ram,0x033d5f30) */
/* WARNING: Removing unreachable block (ram,0x033d6e50) */

void FUN_033d5824(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  uint uVar28;
  
  puVar5 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
  puVar4 = Method_UnityEngine_Matrix4x4_set_Item__;
  if ((DAT_0483250a & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Matrix4x4_set_Item__);
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__);
    thunk_FUN_01efb3a4(Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MergeDictionaries_Merge__);
    thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_MemoryStream__ctor__);
    thunk_FUN_01efb3a4(Method_System_MemoryExtensions_IndexOfAny<char>__);
    thunk_FUN_01efb3a4(Method_System_IO_MemoryStream_EnsureNotClosed__);
    DAT_0483250a = 1;
  }
  plVar11 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_035ac8e8(plVar11,0);
  *(undefined1 *)(plVar11 + 2) = 0x30;
  plVar11[3] = 0;
  thunk_FUN_01f51358(plVar11 + 3,0);
  plVar12 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_0353e574(plVar12,0);
  plVar13 = *(long **)(param_1 + 0x38);
  if (plVar13 != (long *)0x0) {
    plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
    puVar8 = Method_System_IO_MemoryStream_EnsureNotClosed__;
    puVar7 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
    puVar6 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = 
    Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar24 = *plVar13;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_033d59f8;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar23,0);
LAB_033d59f8:
      uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar26 & 1) == 0) {
        plVar13 = (long *)thunk_FUN_01f116d0(plVar13,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar13 == (long *)0x0) goto LAB_033d5bb4;
        lVar23 = *plVar13;
        uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar26 == 0) goto LAB_033d5b8c;
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        goto LAB_033d5b74;
      }
      lVar24 = *plVar13;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_033d5a58;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar23,1);
LAB_033d5a58:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar15);
      }
      if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar26 = FUN_0340e040(plVar15[2],*(undefined8 *)puVar8,0);
      if ((uVar26 & 1) != 0) {
        if (plVar15[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar23 = FUN_033cea34(plVar15[3],1);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar16 = FUN_033cdff8();
        lVar23 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_033cffa4(lVar23,uVar16);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar23 = FUN_033cea34(*(long *)(lVar23 + 0x18),0);
        if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar16 = FUN_033cdff8();
        uVar17 = thunk_FUN_01f117cc(*(undefined8 *)puVar6);
        FUN_033d0b3c(uVar17,uVar16);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar12 + 0x308))(plVar12,uVar17,*(undefined8 *)(*plVar12 + 0x310));
      }
    } while( true );
  }
  goto LAB_033d73a8;
LAB_033d5d70:
  plVar19 = (long *)thunk_FUN_01f116d0(plVar19,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      );
  if (plVar19 != (long *)0x0) {
    lVar24 = *plVar19;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_033d5de8;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)
              FUN_01ecb238(plVar19,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_033d5de8:
    (*(code *)*puVar14)(plVar19,puVar14[1]);
  }
  if ((uVar28 & 1) == 0) {
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar13 + 0x308))(plVar13,plVar18,*(undefined8 *)(*plVar13 + 0x310));
  }
  goto LAB_033d5c08;
code_r0x033d66e4:
  lVar25 = *plVar13;
  lVar24 = *(long *)puVar4;
  uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
  if (uVar26 != 0) {
    piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == lVar24) {
        puVar14 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
        goto LAB_033d6734;
      }
      uVar26 = uVar26 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar26 != 0);
  }
  puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar24,1);
LAB_033d6734:
  plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar15);
  }
  if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar26 = FUN_0340e040(plVar15[2],*(undefined8 *)puVar3,0);
  if ((uVar26 & 1) != 0) {
    FUN_033ce1dc(lVar23,plVar15[3]);
  }
  goto LAB_033d6688;
code_r0x033d6a10:
  if (plVar12[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar26 = FUN_0340e040(plVar12[2],*(undefined8 *)puVar6,0);
  if ((uVar26 & 1) != 0) {
LAB_033d6a28:
    FUN_033ce1dc(plVar13,plVar12[3]);
  }
  goto LAB_033d690c;
  while( true ) {
    uVar26 = uVar26 - 1;
    piVar27 = piVar27 + 4;
    if (uVar26 == 0) break;
LAB_033d5b74:
    if (*(long *)(piVar27 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_033d5ba8;
    }
  }
LAB_033d5b8c:
  puVar14 = (undefined8 *)
            FUN_01ecb238(plVar13,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_033d5ba8:
  (*(code *)*puVar14)(plVar13,puVar14[1]);
LAB_033d5bb4:
  plVar13 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_0353e574(plVar13,0);
  plVar15 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_0353e574(plVar15,0);
  lVar23 = FUN_033d32e0(param_1);
  if (lVar23 != 0) {
    lVar23 = FUN_033d442c();
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d5c08:
    uVar26 = FUN_033d485c(lVar23);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar26 & 1) != 0) {
      plVar18 = (long *)FUN_033d4484(lVar23);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar19 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar28 = 0;
      do {
        lVar25 = *plVar19;
        lVar24 = *(long *)puVar4;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_033d5c90;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar19,lVar24,0);
LAB_033d5c90:
        uVar26 = (*(code *)*puVar14)(plVar19,puVar14[1]);
        if ((uVar26 & 1) == 0) goto LAB_033d5d70;
        lVar25 = *plVar19;
        lVar24 = *(long *)puVar4;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_033d5cf0;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar19,lVar24,1);
LAB_033d5cf0:
        plVar20 = (long *)(*(code *)*puVar14)(plVar19,puVar14[1]);
        if (plVar20 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar20 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar20);
          }
        }
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar16 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
        if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar17 = (**(code **)(*plVar20 + 0x1f8))(plVar20,*(undefined8 *)(*plVar20 + 0x200));
        uVar9 = FUN_033d2178(uVar17,uVar16,uVar17);
        uVar28 = uVar28 | uVar9;
      } while( true );
    }
    plVar18 = (long *)thunk_FUN_01f116d0(lVar23,*(undefined8 *)
                                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar18 != (long *)0x0) {
      lVar23 = *plVar18;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_033d5efc:
        puVar14 = (undefined8 *)FUN_01ecb238(plVar18,*(long *)puVar3,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) != *(long *)puVar3) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_033d5efc;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar18,puVar14[1]);
    }
    if (plVar12 == (long *)0x0) goto LAB_033d73a8;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d5f64:
    lVar24 = *plVar12;
    lVar23 = *(long *)puVar4;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar23) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_033d5fb0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar12,lVar23,0);
LAB_033d5fb0:
    uVar26 = (*(code *)*puVar14)(plVar12,puVar14[1]);
    if ((uVar26 & 1) != 0) {
      lVar24 = *plVar12;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_033d6010;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar12,lVar23,1);
LAB_033d6010:
      plVar18 = (long *)(*(code *)*puVar14)(plVar12,puVar14[1]);
      if (plVar18 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar18);
        }
      }
      lVar23 = FUN_033d32e0(param_1);
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar23 = FUN_033d442c();
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar28 = 0;
      while (uVar26 = FUN_033d485c(lVar23), (uVar26 & 1) != 0) {
        plVar19 = (long *)FUN_033d4484(lVar23);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar16 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar17 = (**(code **)(*plVar19 + 0x1f8))(plVar19,*(undefined8 *)(*plVar19 + 0x200));
        uVar9 = FUN_033d2178(uVar17,uVar16,uVar17);
        uVar28 = uVar28 | uVar9;
      }
      plVar19 = (long *)thunk_FUN_01f116d0(lVar23,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar19 != (long *)0x0) {
        lVar23 = *plVar19;
        uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_033d613c;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)
                  FUN_01ecb238(plVar19,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_033d613c:
        (*(code *)*puVar14)(plVar19,puVar14[1]);
      }
      if ((uVar28 & 1) == 0) {
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar15 + 0x308))(plVar15,plVar18,*(undefined8 *)(*plVar15 + 0x310));
      }
      goto LAB_033d5f64;
    }
    plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar12 != (long *)0x0) {
      lVar23 = *plVar12;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_033d6248:
        puVar14 = (undefined8 *)
                  FUN_01ecb238(plVar12,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) !=
               *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_033d6248;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar12,puVar14[1]);
    }
    plVar12 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (plVar15 == (long *)0x0) goto LAB_033d73a8;
    plVar15 = (long *)(**(code **)(*plVar15 + 0x388))(plVar15,*(undefined8 *)(*plVar15 + 0x390));
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d62bc:
    lVar24 = *plVar15;
    lVar23 = *(long *)puVar4;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar23) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_033d6308;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar15,lVar23,0);
LAB_033d6308:
    uVar26 = (*(code *)*puVar14)(plVar15,puVar14[1]);
    if ((uVar26 & 1) != 0) {
      lVar24 = *plVar15;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_033d6368;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar15,lVar23,1);
LAB_033d6368:
      plVar18 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
      if (plVar18 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar18 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar18);
        }
      }
      FUN_033d80d4(param_1,plVar18,0);
      goto LAB_033d62bc;
    }
    plVar15 = (long *)thunk_FUN_01f116d0(plVar15,*plVar12);
    if (plVar15 != (long *)0x0) {
      lVar23 = *plVar15;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_033d6408:
        puVar14 = (undefined8 *)FUN_01ecb238(plVar15,*plVar12,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) != *plVar12) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_033d6408;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar15,puVar14[1]);
    }
    if (plVar13 == (long *)0x0) goto LAB_033d73a8;
    plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d6474:
    lVar24 = *plVar13;
    lVar23 = *(long *)puVar4;
    uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar26 != 0) {
      piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == lVar23) {
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
          goto LAB_033d64c0;
        }
        uVar26 = uVar26 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar26 != 0);
    }
    puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar23,0);
LAB_033d64c0:
    uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    if ((uVar26 & 1) != 0) {
      lVar24 = *plVar13;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_033d6520;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar23,1);
LAB_033d6520:
      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (plVar15 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar15);
        }
      }
      FUN_033d7e8c(param_1,plVar15,0);
      goto LAB_033d6474;
    }
    plVar13 = (long *)thunk_FUN_01f116d0(plVar13,*plVar12);
    if (plVar13 != (long *)0x0) {
      lVar23 = *plVar13;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 == 0) {
LAB_033d65c0:
        puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*plVar12,0);
      }
      else {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        while (*(long *)(piVar27 + -2) != *plVar12) {
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
          if (uVar26 == 0) goto LAB_033d65c0;
        }
        puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
      }
      (*(code *)*puVar14)(plVar13,puVar14[1]);
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_033d73a8;
    iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    puVar14 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
    if (0 < iVar10) {
      lVar23 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__);
      FUN_035ac8e8(lVar23,0);
      *(undefined1 *)(lVar23 + 0x10) = 0x30;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x18),0);
      plVar13 = *(long **)(param_1 + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_033d73a8;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
      puVar3 = Method_System_IO_MemoryStream_EnsureNotClosed__;
      puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033d6688:
      lVar25 = *plVar13;
      lVar24 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar24) {
            puVar14 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_033d66d4;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar24,0);
LAB_033d66d4:
      uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar26 & 1) != 0) goto code_r0x033d66e4;
      plVar13 = (long *)thunk_FUN_01f116d0(plVar13,*plVar12);
      if (plVar13 != (long *)0x0) {
        lVar24 = *plVar13;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 == 0) {
LAB_033d67e8:
          puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*plVar12,0);
        }
        else {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          while (*(long *)(piVar27 + -2) != *plVar12) {
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
            if (uVar26 == 0) goto LAB_033d67e8;
          }
          puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
        }
        (*(code *)*puVar14)(plVar13,puVar14[1]);
      }
      puVar14 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
      if (lVar23 == 0) goto LAB_033d73a8;
      plVar13 = *(long **)(lVar23 + 0x20);
      if ((plVar13 != (long *)0x0) &&
         (iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0)),
         0 < iVar10)) {
        lVar23 = FUN_033d7b3c(param_1,lVar23,
                              *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__)
        ;
        if ((lVar23 == 0) || (uVar16 = FUN_033d01ac(), plVar11 == (long *)0x0)) goto LAB_033d73a8;
        FUN_033ce1dc(plVar11,uVar16);
      }
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_033d73a8;
    iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    if (0 < iVar10) {
      plVar13 = (long *)thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(plVar13,0);
      *(undefined1 *)(plVar13 + 2) = 0x30;
      plVar13[3] = 0;
      thunk_FUN_01f51358(plVar13 + 3,0);
      plVar12 = *(long **)(param_1 + 0x38);
      if (plVar12 == (long *)0x0) goto LAB_033d73a8;
      plVar15 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      puVar6 = Method_System_IO_MemoryStream__ctor__;
      puVar3 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__;
      puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033d690c:
      lVar24 = *plVar15;
      lVar23 = *(long *)puVar4;
      uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar26 != 0) {
        piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == lVar23) {
            puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            goto LAB_033d6958;
          }
          uVar26 = uVar26 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar26 != 0);
      }
      puVar14 = (undefined8 *)FUN_01ecb238(plVar15,lVar23,0);
LAB_033d6958:
      uVar26 = (*(code *)*puVar14)(plVar15,puVar14[1]);
      plVar12 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar26 & 1) != 0) {
        lVar24 = *plVar15;
        lVar23 = *(long *)puVar4;
        uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar23) {
              puVar14 = (undefined8 *)(lVar24 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_033d69b8;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar15,lVar23,1);
LAB_033d69b8:
        plVar12 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar12);
        }
        if (plVar12[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar26 = FUN_0340e040(plVar12[2],*(undefined8 *)puVar3,0);
        if ((uVar26 & 1) == 0) goto code_r0x033d6a10;
        goto LAB_033d6a28;
      }
      plVar15 = (long *)thunk_FUN_01f116d0(plVar15,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar15 != (long *)0x0) {
        lVar23 = *plVar15;
        uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar26 == 0) {
LAB_033d6a8c:
          puVar14 = (undefined8 *)FUN_01ecb238(plVar15,*plVar12,0);
        }
        else {
          piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          while (*(long *)(piVar27 + -2) != *plVar12) {
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
            if (uVar26 == 0) goto LAB_033d6a8c;
          }
          puVar14 = (undefined8 *)(lVar23 + (long)*piVar27 * 0x10 + 0x138);
        }
        (*(code *)*puVar14)(plVar15,puVar14[1]);
      }
      puVar14 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
      if (plVar13 == (long *)0x0) goto LAB_033d73a8;
      plVar15 = (long *)plVar13[4];
      if ((plVar15 != (long *)0x0) &&
         (iVar10 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0)),
         0 < iVar10)) {
        lVar23 = thunk_FUN_01f117cc(*puVar14);
        FUN_035ac8e8(lVar23,0);
        *(undefined1 *)(lVar23 + 0x10) = 0xa0;
        *(undefined8 *)(lVar23 + 0x18) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x18),0);
        uVar16 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180));
        lVar24 = thunk_FUN_01f117cc(*puVar14);
        FUN_035ac8e8(lVar24,0);
        *(undefined1 *)(lVar24 + 0x10) = 4;
        *(undefined8 *)(lVar24 + 0x18) = uVar16;
        thunk_FUN_01f51358((undefined8 *)(lVar24 + 0x18),uVar16);
        FUN_033ce1dc(lVar23,lVar24);
        lVar24 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                                   );
        uVar16 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
        FUN_033cfef4();
        *(undefined8 *)(lVar24 + 0x10) = uVar16;
        thunk_FUN_01f51358((undefined8 *)(lVar24 + 0x10),uVar16);
        *(long *)(lVar24 + 0x18) = lVar23;
        thunk_FUN_01f51358((long *)(lVar24 + 0x18),lVar23);
        uVar16 = FUN_033d01ac(lVar24);
        if (plVar11 == (long *)0x0) goto LAB_033d73a8;
        FUN_033ce1dc(plVar11,uVar16);
      }
    }
    plVar13 = *(long **)(param_1 + 0x38);
    if (plVar13 == (long *)0x0) goto LAB_033d73a8;
    iVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    if (0 < iVar10) {
      lVar23 = thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(lVar23,0);
      *(undefined1 *)(lVar23 + 0x10) = 0x30;
      *(undefined8 *)(lVar23 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x18),0);
      plVar13 = *(long **)(param_1 + 0x38);
      if (plVar13 == (long *)0x0) goto LAB_033d73a8;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x388))(plVar13,*(undefined8 *)(*plVar13 + 0x390));
      puVar3 = Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__;
      puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar25 = *plVar13;
        lVar24 = *(long *)puVar4;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_033d6c9c;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar24,0);
LAB_033d6c9c:
        uVar26 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        if ((uVar26 & 1) == 0) {
          plVar13 = (long *)thunk_FUN_01f116d0(plVar13,*plVar12);
          if (plVar13 != (long *)0x0) {
            lVar24 = *plVar13;
            uVar26 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar26 == 0) {
LAB_033d6db0:
              puVar14 = (undefined8 *)FUN_01ecb238(plVar13,*plVar12,0);
            }
            else {
              piVar27 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              while (*(long *)(piVar27 + -2) != *plVar12) {
                uVar26 = uVar26 - 1;
                piVar27 = piVar27 + 4;
                if (uVar26 == 0) goto LAB_033d6db0;
              }
              puVar14 = (undefined8 *)(lVar24 + (long)*piVar27 * 0x10 + 0x138);
            }
            (*(code *)*puVar14)(plVar13,puVar14[1]);
          }
          puVar14 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
          if (lVar23 == 0) goto LAB_033d73a8;
          plVar12 = *(long **)(lVar23 + 0x20);
          if ((plVar12 == (long *)0x0) ||
             (iVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0)),
             iVar10 < 1)) break;
          lVar23 = FUN_033d7b3c(param_1,lVar23,
                                *(undefined8 *)
                                 Method_Unity_VisualScripting_MergeDictionaries_Merge__);
          if ((lVar23 == 0) || (uVar16 = FUN_033d01ac(), plVar11 == (long *)0x0)) goto LAB_033d73a8;
          FUN_033ce1dc(plVar11,uVar16);
          goto LAB_033d6e78;
        }
        lVar25 = *plVar13;
        lVar24 = *(long *)puVar4;
        uVar26 = (ulong)*(ushort *)(lVar25 + 0x12e);
        if (uVar26 != 0) {
          piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar24) {
              puVar14 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_033d6cfc;
            }
            uVar26 = uVar26 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar26 != 0);
        }
        puVar14 = (undefined8 *)FUN_01ecb238(plVar13,lVar24,1);
LAB_033d6cfc:
        plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar15);
        }
        if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar26 = FUN_0340e040(plVar15[2],*(undefined8 *)puVar3,0);
        if ((uVar26 & 1) != 0) {
          FUN_033ce1dc(lVar23,plVar15[3]);
        }
      } while( true );
    }
    if (plVar11 == (long *)0x0) goto LAB_033d73a8;
LAB_033d6e78:
    uVar16 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    lVar23 = thunk_FUN_01f117cc(*puVar14);
    FUN_035ac8e8(lVar23,0);
    *(undefined1 *)(lVar23 + 0x10) = 4;
    *(undefined8 *)(lVar23 + 0x18) = uVar16;
    thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x18),uVar16);
    lVar24 = thunk_FUN_01f117cc(*puVar14);
    FUN_035ac8e8(lVar24,0);
    *(undefined1 *)(lVar24 + 0x10) = 0xa0;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar24 + 0x18),0);
    FUN_033ce1dc(lVar24,lVar23);
    lVar23 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                               );
    uVar16 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
    FUN_033cfef4();
    *(undefined8 *)(lVar23 + 0x10) = uVar16;
    thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x10),uVar16);
    plVar11 = (long *)(lVar23 + 0x18);
    *plVar11 = lVar24;
    thunk_FUN_01f51358(plVar11,lVar24);
    lVar24 = thunk_FUN_01f117cc(*puVar14);
    FUN_035ac8e8(lVar24,0);
    *(undefined1 *)(lVar24 + 0x10) = 0x30;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar24 + 0x18),0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar16 = FUN_01f08890(*(undefined8 *)
                             Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,0x14)
      ;
      plVar12 = (long *)FUN_033d3720(param_1);
      if (plVar12 == (long *)0x0) goto LAB_033d73a8;
      (**(code **)(*plVar12 + 0x198))(plVar12,uVar16,*(undefined8 *)(*plVar12 + 0x1a0));
      if (*plVar11 == 0) goto LAB_033d73a8;
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x34);
      lVar25 = FUN_033cea34(*plVar11,0);
      if (lVar25 == 0) goto LAB_033d73a8;
      uVar21 = FUN_033cdff8();
      uVar17 = FUN_033d201c(uVar21,uVar17,uVar16,uVar1,uVar21);
      lVar25 = thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(lVar25,0);
      *(undefined1 *)(lVar25 + 0x10) = 0x30;
      *(undefined8 *)(lVar25 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar25 + 0x18),0);
      uVar21 = FUN_033cf0dc(*(undefined8 *)
                             Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__
                           );
      FUN_033ce1dc(lVar25,uVar21);
      lVar22 = thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 5;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
      FUN_033ce1dc(lVar25,lVar22);
      lVar22 = thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 0x30;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
      FUN_033ce1dc(lVar22,lVar25);
      lVar25 = thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(lVar25,0);
      *(undefined1 *)(lVar25 + 0x10) = 4;
      *(undefined8 *)(lVar25 + 0x18) = uVar17;
      thunk_FUN_01f51358((undefined8 *)(lVar25 + 0x18),uVar17);
      FUN_033ce1dc(lVar22,lVar25);
      FUN_033ce1dc(lVar24,lVar22);
      lVar25 = thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(lVar25,0);
      *(undefined1 *)(lVar25 + 0x10) = 4;
      *(undefined8 *)(lVar25 + 0x18) = uVar16;
      thunk_FUN_01f51358((undefined8 *)(lVar25 + 0x18),uVar16);
      FUN_033ce1dc(lVar24,lVar25);
      uVar16 = FUN_033cef4c(*(undefined4 *)(param_1 + 0x34));
      FUN_033ce1dc(lVar24,uVar16);
    }
    lVar25 = FUN_01f08890(*(undefined8 *)
                           Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,1);
    if (lVar25 != 0) {
      if (*(int *)(lVar25 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined1 *)(lVar25 + 0x20) = 3;
      lVar22 = thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 2;
      *(long *)(lVar22 + 0x18) = lVar25;
      thunk_FUN_01f51358((long *)(lVar22 + 0x18),lVar25);
      plVar11 = (long *)thunk_FUN_01f117cc(*puVar14);
      FUN_035ac8e8(plVar11,0);
      *(undefined1 *)(plVar11 + 2) = 0x30;
      plVar11[3] = 0;
      thunk_FUN_01f51358(plVar11 + 3,0);
      FUN_033ce1dc(plVar11,lVar22);
      uVar16 = FUN_033d01ac(lVar23);
      FUN_033ce1dc(plVar11,uVar16);
      plVar12 = *(long **)(lVar24 + 0x20);
      if ((plVar12 != (long *)0x0) &&
         (iVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0)),
         0 < iVar10)) {
        FUN_033ce1dc(plVar11,lVar24);
      }
                    /* WARNING: Could not recover jumptable at 0x033d721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      return;
    }
  }
LAB_033d73a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


