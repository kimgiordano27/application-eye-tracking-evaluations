/*
FUNCTION_NAME: System.IO.FileStatus$$Refresh
ENTRY_POINT: 033d589c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;strong_file_logging_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_3
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

void System_IO_FileStatus__Refresh(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  int *piVar26;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint uVar27;
  undefined8 *unaff_x25;
  long in_stack_00000018;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__);
  thunk_FUN_01efb3a4(Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__);
  thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MergeDictionaries_Merge__);
  thunk_FUN_01efb3a4(Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__);
  thunk_FUN_01efb3a4(Method_System_IO_MemoryStream__ctor__);
  thunk_FUN_01efb3a4(Method_System_MemoryExtensions_IndexOfAny<char>__);
  thunk_FUN_01efb3a4(Method_System_IO_MemoryStream_EnsureNotClosed__);
  *(undefined1 *)(unaff_x19 + 0x50a) = 1;
  plVar10 = (long *)thunk_FUN_01f117cc(*unaff_x20);
  FUN_035ac8e8(plVar10,0);
  *(undefined1 *)(plVar10 + 2) = 0x30;
  plVar10[3] = 0;
  thunk_FUN_01f51358(plVar10 + 3,0);
  plVar11 = (long *)thunk_FUN_01f117cc(*unaff_x25);
  FUN_0353e574(plVar11,0);
  plVar12 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar12 != (long *)0x0) {
    plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    puVar7 = Method_System_IO_MemoryStream_EnsureNotClosed__;
    puVar6 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
    puVar3 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar5 = 
    Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar23 = *plVar12;
      lVar22 = *(long *)puVar4;
      uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033d59f8;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar22,0);
LAB_033d59f8:
      uVar25 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar25 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar12 == (long *)0x0) goto LAB_033d5bb4;
        lVar22 = *plVar12;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 == 0) goto LAB_033d5b8c;
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_033d5b74;
      }
      lVar23 = *plVar12;
      lVar22 = *(long *)puVar4;
      uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
            goto LAB_033d5a58;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar22,1);
LAB_033d5a58:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar14);
      }
      if (plVar14[2] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar25 = FUN_0340e040(plVar14[2],*(undefined8 *)puVar7,0);
      if ((uVar25 & 1) != 0) {
        if (plVar14[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar22 = FUN_033cea34(plVar14[3],1);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = FUN_033cdff8();
        lVar22 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
        FUN_033cffa4(lVar22,uVar15);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar22 = FUN_033cea34(*(long *)(lVar22 + 0x18),0);
        if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = FUN_033cdff8();
        uVar16 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
        FUN_033d0b3c(uVar16,uVar15);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar11 + 0x308))(plVar11,uVar16,*(undefined8 *)(*plVar11 + 0x310));
      }
    } while( true );
  }
  goto LAB_033d73a8;
LAB_033d5d70:
  plVar18 = (long *)thunk_FUN_01f116d0(plVar18,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                      );
  if (plVar18 != (long *)0x0) {
    lVar23 = *plVar18;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033d5de8;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_01ecb238(plVar18,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
LAB_033d5de8:
    (*(code *)*puVar13)(plVar18,puVar13[1]);
  }
  if ((uVar27 & 1) == 0) {
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar12 + 0x308))(plVar12,plVar17,*(undefined8 *)(*plVar12 + 0x310));
  }
  goto LAB_033d5c08;
code_r0x033d66e4:
  lVar24 = *plVar12;
  lVar23 = *(long *)puVar4;
  uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
  if (uVar25 != 0) {
    piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
    do {
      if (*(long *)(piVar26 + -2) == lVar23) {
        puVar13 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
        goto LAB_033d6734;
      }
      uVar25 = uVar25 - 1;
      piVar26 = piVar26 + 4;
    } while (uVar25 != 0);
  }
  puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar23,1);
LAB_033d6734:
  plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
  if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar14);
  }
  if (plVar14[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar25 = FUN_0340e040(plVar14[2],*(undefined8 *)puVar3,0);
  if ((uVar25 & 1) != 0) {
    FUN_033ce1dc(lVar22,plVar14[3]);
  }
  goto LAB_033d6688;
code_r0x033d6a10:
  if (plVar11[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar25 = FUN_0340e040(plVar11[2],*(undefined8 *)puVar6,0);
  if ((uVar25 & 1) != 0) {
LAB_033d6a28:
    FUN_033ce1dc(plVar12,plVar11[3]);
  }
  goto LAB_033d690c;
  while( true ) {
    uVar25 = uVar25 - 1;
    piVar26 = piVar26 + 4;
    if (uVar25 == 0) break;
LAB_033d5b74:
    if (*(long *)(piVar26 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_033d5ba8;
    }
  }
LAB_033d5b8c:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_033d5ba8:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_033d5bb4:
  plVar12 = (long *)thunk_FUN_01f117cc(*unaff_x25);
  FUN_0353e574(plVar12,0);
  plVar14 = (long *)thunk_FUN_01f117cc(*unaff_x25);
  FUN_0353e574(plVar14,0);
  lVar22 = FUN_033d32e0(in_stack_00000018);
  if (lVar22 != 0) {
    lVar22 = FUN_033d442c();
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d5c08:
    uVar25 = FUN_033d485c(lVar22);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar25 & 1) != 0) {
      plVar17 = (long *)FUN_033d4484(lVar22);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar18 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar27 = 0;
      do {
        lVar24 = *plVar18;
        lVar23 = *(long *)puVar4;
        uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar23) {
              puVar13 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033d5c90;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar18,lVar23,0);
LAB_033d5c90:
        uVar25 = (*(code *)*puVar13)(plVar18,puVar13[1]);
        if ((uVar25 & 1) == 0) goto LAB_033d5d70;
        lVar24 = *plVar18;
        lVar23 = *(long *)puVar4;
        uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar23) {
              puVar13 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
              goto LAB_033d5cf0;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar18,lVar23,1);
LAB_033d5cf0:
        plVar19 = (long *)(*(code *)*puVar13)(plVar18,puVar13[1]);
        if (plVar19 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar19);
          }
        }
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = (**(code **)(*plVar17 + 0x1f8))(plVar17,*(undefined8 *)(*plVar17 + 0x200));
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar16 = (**(code **)(*plVar19 + 0x1f8))(plVar19,*(undefined8 *)(*plVar19 + 0x200));
        uVar8 = FUN_033d2178(uVar16,uVar15,uVar16);
        uVar27 = uVar27 | uVar8;
      } while( true );
    }
    plVar17 = (long *)thunk_FUN_01f116d0(lVar22,*(undefined8 *)
                                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar17 != (long *)0x0) {
      lVar22 = *plVar17;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 == 0) {
LAB_033d5efc:
        puVar13 = (undefined8 *)FUN_01ecb238(plVar17,*(long *)puVar3,0);
      }
      else {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        while (*(long *)(piVar26 + -2) != *(long *)puVar3) {
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
          if (uVar25 == 0) goto LAB_033d5efc;
        }
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
      }
      (*(code *)*puVar13)(plVar17,puVar13[1]);
    }
    if (plVar11 == (long *)0x0) goto LAB_033d73a8;
    plVar11 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d5f64:
    lVar23 = *plVar11;
    lVar22 = *(long *)puVar4;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033d5fb0;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar11,lVar22,0);
LAB_033d5fb0:
    uVar25 = (*(code *)*puVar13)(plVar11,puVar13[1]);
    if ((uVar25 & 1) != 0) {
      lVar23 = *plVar11;
      lVar22 = *(long *)puVar4;
      uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
            goto LAB_033d6010;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar11,lVar22,1);
LAB_033d6010:
      plVar17 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
      if (plVar17 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar17);
        }
      }
      lVar22 = FUN_033d32e0(in_stack_00000018);
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar22 = FUN_033d442c();
      if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar27 = 0;
      while (uVar25 = FUN_033d485c(lVar22), (uVar25 & 1) != 0) {
        plVar18 = (long *)FUN_033d4484(lVar22);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar15 = (**(code **)(*plVar17 + 0x1f8))(plVar17,*(undefined8 *)(*plVar17 + 0x200));
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar16 = (**(code **)(*plVar18 + 0x1f8))(plVar18,*(undefined8 *)(*plVar18 + 0x200));
        uVar8 = FUN_033d2178(uVar16,uVar15,uVar16);
        uVar27 = uVar27 | uVar8;
      }
      plVar18 = (long *)thunk_FUN_01f116d0(lVar22,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar18 != (long *)0x0) {
        lVar22 = *plVar18;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033d613c;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar18,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_033d613c:
        (*(code *)*puVar13)(plVar18,puVar13[1]);
      }
      if ((uVar27 & 1) == 0) {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar14 + 0x308))(plVar14,plVar17,*(undefined8 *)(*plVar14 + 0x310));
      }
      goto LAB_033d5f64;
    }
    plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar11 != (long *)0x0) {
      lVar22 = *plVar11;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 == 0) {
LAB_033d6248:
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar11,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
      }
      else {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        while (*(long *)(piVar26 + -2) !=
               *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
          if (uVar25 == 0) goto LAB_033d6248;
        }
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
      }
      (*(code *)*puVar13)(plVar11,puVar13[1]);
    }
    plVar11 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (plVar14 == (long *)0x0) goto LAB_033d73a8;
    plVar14 = (long *)(**(code **)(*plVar14 + 0x388))(plVar14,*(undefined8 *)(*plVar14 + 0x390));
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d62bc:
    lVar23 = *plVar14;
    lVar22 = *(long *)puVar4;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033d6308;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar14,lVar22,0);
LAB_033d6308:
    uVar25 = (*(code *)*puVar13)(plVar14,puVar13[1]);
    if ((uVar25 & 1) != 0) {
      lVar23 = *plVar14;
      lVar22 = *(long *)puVar4;
      uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
            goto LAB_033d6368;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar14,lVar22,1);
LAB_033d6368:
      plVar17 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
      if (plVar17 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar17 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar17);
        }
      }
      FUN_033d80d4(in_stack_00000018,plVar17,0);
      goto LAB_033d62bc;
    }
    plVar14 = (long *)thunk_FUN_01f116d0(plVar14,*plVar11);
    if (plVar14 != (long *)0x0) {
      lVar22 = *plVar14;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 == 0) {
LAB_033d6408:
        puVar13 = (undefined8 *)FUN_01ecb238(plVar14,*plVar11,0);
      }
      else {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        while (*(long *)(piVar26 + -2) != *plVar11) {
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
          if (uVar25 == 0) goto LAB_033d6408;
        }
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
      }
      (*(code *)*puVar13)(plVar14,puVar13[1]);
    }
    if (plVar12 == (long *)0x0) goto LAB_033d73a8;
    plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
    puVar5 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
LAB_033d6474:
    lVar23 = *plVar12;
    lVar22 = *(long *)puVar4;
    uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar25 != 0) {
      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar22) {
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_033d64c0;
        }
        uVar25 = uVar25 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar25 != 0);
    }
    puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar22,0);
LAB_033d64c0:
    uVar25 = (*(code *)*puVar13)(plVar12,puVar13[1]);
    if ((uVar25 & 1) != 0) {
      lVar23 = *plVar12;
      lVar22 = *(long *)puVar4;
      uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
            goto LAB_033d6520;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar22,1);
LAB_033d6520:
      plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (plVar14 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar14);
        }
      }
      FUN_033d7e8c(in_stack_00000018,plVar14,0);
      goto LAB_033d6474;
    }
    plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*plVar11);
    if (plVar12 != (long *)0x0) {
      lVar22 = *plVar12;
      uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar25 == 0) {
LAB_033d65c0:
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*plVar11,0);
      }
      else {
        piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        while (*(long *)(piVar26 + -2) != *plVar11) {
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
          if (uVar25 == 0) goto LAB_033d65c0;
        }
        puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
      }
      (*(code *)*puVar13)(plVar12,puVar13[1]);
    }
    plVar12 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar12 == (long *)0x0) goto LAB_033d73a8;
    iVar9 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    puVar13 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
    if (0 < iVar9) {
      lVar22 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__);
      FUN_035ac8e8(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 0x30;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
      plVar12 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar12 == (long *)0x0) goto LAB_033d73a8;
      plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      puVar3 = Method_System_IO_MemoryStream_EnsureNotClosed__;
      puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033d6688:
      lVar24 = *plVar12;
      lVar23 = *(long *)puVar4;
      uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar23) {
            puVar13 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033d66d4;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar23,0);
LAB_033d66d4:
      uVar25 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if ((uVar25 & 1) != 0) goto code_r0x033d66e4;
      plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*plVar11);
      if (plVar12 != (long *)0x0) {
        lVar23 = *plVar12;
        uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar25 == 0) {
LAB_033d67e8:
          puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*plVar11,0);
        }
        else {
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          while (*(long *)(piVar26 + -2) != *plVar11) {
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
            if (uVar25 == 0) goto LAB_033d67e8;
          }
          puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
        }
        (*(code *)*puVar13)(plVar12,puVar13[1]);
      }
      puVar13 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
      if (lVar22 == 0) goto LAB_033d73a8;
      plVar12 = *(long **)(lVar22 + 0x20);
      if ((plVar12 != (long *)0x0) &&
         (iVar9 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0)),
         0 < iVar9)) {
        lVar22 = FUN_033d7b3c(in_stack_00000018,lVar22,
                              *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__)
        ;
        if ((lVar22 == 0) || (uVar15 = FUN_033d01ac(), plVar10 == (long *)0x0)) goto LAB_033d73a8;
        FUN_033ce1dc(plVar10,uVar15);
      }
    }
    plVar12 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar12 == (long *)0x0) goto LAB_033d73a8;
    iVar9 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    if (0 < iVar9) {
      plVar12 = (long *)thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(plVar12,0);
      *(undefined1 *)(plVar12 + 2) = 0x30;
      plVar12[3] = 0;
      thunk_FUN_01f51358(plVar12 + 3,0);
      plVar11 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar11 == (long *)0x0) goto LAB_033d73a8;
      plVar14 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      puVar6 = Method_System_IO_MemoryStream__ctor__;
      puVar3 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__;
      puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_033d690c:
      lVar23 = *plVar14;
      lVar22 = *(long *)puVar4;
      uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar25 != 0) {
        piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == lVar22) {
            puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_033d6958;
          }
          uVar25 = uVar25 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar25 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar14,lVar22,0);
LAB_033d6958:
      uVar25 = (*(code *)*puVar13)(plVar14,puVar13[1]);
      plVar11 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar25 & 1) != 0) {
        lVar23 = *plVar14;
        lVar22 = *(long *)puVar4;
        uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar22) {
              puVar13 = (undefined8 *)(lVar23 + (long)(*piVar26 + 1) * 0x10 + 0x138);
              goto LAB_033d69b8;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar14,lVar22,1);
LAB_033d69b8:
        plVar11 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        if (plVar11[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar25 = FUN_0340e040(plVar11[2],*(undefined8 *)puVar3,0);
        if ((uVar25 & 1) == 0) goto code_r0x033d6a10;
        goto LAB_033d6a28;
      }
      plVar14 = (long *)thunk_FUN_01f116d0(plVar14,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar14 != (long *)0x0) {
        lVar22 = *plVar14;
        uVar25 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar25 == 0) {
LAB_033d6a8c:
          puVar13 = (undefined8 *)FUN_01ecb238(plVar14,*plVar11,0);
        }
        else {
          piVar26 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          while (*(long *)(piVar26 + -2) != *plVar11) {
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
            if (uVar25 == 0) goto LAB_033d6a8c;
          }
          puVar13 = (undefined8 *)(lVar22 + (long)*piVar26 * 0x10 + 0x138);
        }
        (*(code *)*puVar13)(plVar14,puVar13[1]);
      }
      puVar13 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
      if (plVar12 == (long *)0x0) goto LAB_033d73a8;
      plVar14 = (long *)plVar12[4];
      if ((plVar14 != (long *)0x0) &&
         (iVar9 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0)),
         0 < iVar9)) {
        lVar22 = thunk_FUN_01f117cc(*puVar13);
        FUN_035ac8e8(lVar22,0);
        *(undefined1 *)(lVar22 + 0x10) = 0xa0;
        *(undefined8 *)(lVar22 + 0x18) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
        uVar15 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
        lVar23 = thunk_FUN_01f117cc(*puVar13);
        FUN_035ac8e8(lVar23,0);
        *(undefined1 *)(lVar23 + 0x10) = 4;
        *(undefined8 *)(lVar23 + 0x18) = uVar15;
        thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x18),uVar15);
        FUN_033ce1dc(lVar22,lVar23);
        lVar23 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                                   );
        uVar15 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
        FUN_033cfef4();
        *(undefined8 *)(lVar23 + 0x10) = uVar15;
        thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x10),uVar15);
        *(long *)(lVar23 + 0x18) = lVar22;
        thunk_FUN_01f51358((long *)(lVar23 + 0x18),lVar22);
        uVar15 = FUN_033d01ac(lVar23);
        if (plVar10 == (long *)0x0) goto LAB_033d73a8;
        FUN_033ce1dc(plVar10,uVar15);
      }
    }
    plVar12 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar12 == (long *)0x0) goto LAB_033d73a8;
    iVar9 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    if (0 < iVar9) {
      lVar22 = thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(lVar22,0);
      *(undefined1 *)(lVar22 + 0x10) = 0x30;
      *(undefined8 *)(lVar22 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
      plVar12 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar12 == (long *)0x0) goto LAB_033d73a8;
      plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      puVar3 = Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__;
      puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar24 = *plVar12;
        lVar23 = *(long *)puVar4;
        uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar23) {
              puVar13 = (undefined8 *)(lVar24 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_033d6c9c;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar23,0);
LAB_033d6c9c:
        uVar25 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar25 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*plVar11);
          if (plVar12 != (long *)0x0) {
            lVar23 = *plVar12;
            uVar25 = (ulong)*(ushort *)(lVar23 + 0x12e);
            if (uVar25 == 0) {
LAB_033d6db0:
              puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*plVar11,0);
            }
            else {
              piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
              while (*(long *)(piVar26 + -2) != *plVar11) {
                uVar25 = uVar25 - 1;
                piVar26 = piVar26 + 4;
                if (uVar25 == 0) goto LAB_033d6db0;
              }
              puVar13 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
            }
            (*(code *)*puVar13)(plVar12,puVar13[1]);
          }
          puVar13 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
          if (lVar22 == 0) goto LAB_033d73a8;
          plVar11 = *(long **)(lVar22 + 0x20);
          if ((plVar11 == (long *)0x0) ||
             (iVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0)),
             iVar9 < 1)) break;
          lVar22 = FUN_033d7b3c(in_stack_00000018,lVar22,
                                *(undefined8 *)
                                 Method_Unity_VisualScripting_MergeDictionaries_Merge__);
          if ((lVar22 == 0) || (uVar15 = FUN_033d01ac(), plVar10 == (long *)0x0)) goto LAB_033d73a8;
          FUN_033ce1dc(plVar10,uVar15);
          goto LAB_033d6e78;
        }
        lVar24 = *plVar12;
        lVar23 = *(long *)puVar4;
        uVar25 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar25 != 0) {
          piVar26 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar23) {
              puVar13 = (undefined8 *)(lVar24 + (long)(*piVar26 + 1) * 0x10 + 0x138);
              goto LAB_033d6cfc;
            }
            uVar25 = uVar25 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar25 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,lVar23,1);
LAB_033d6cfc:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar2 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar14);
        }
        if (plVar14[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar25 = FUN_0340e040(plVar14[2],*(undefined8 *)puVar3,0);
        if ((uVar25 & 1) != 0) {
          FUN_033ce1dc(lVar22,plVar14[3]);
        }
      } while( true );
    }
    if (plVar10 == (long *)0x0) goto LAB_033d73a8;
LAB_033d6e78:
    uVar15 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    lVar22 = thunk_FUN_01f117cc(*puVar13);
    FUN_035ac8e8(lVar22,0);
    *(undefined1 *)(lVar22 + 0x10) = 4;
    *(undefined8 *)(lVar22 + 0x18) = uVar15;
    thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),uVar15);
    lVar23 = thunk_FUN_01f117cc(*puVar13);
    FUN_035ac8e8(lVar23,0);
    *(undefined1 *)(lVar23 + 0x10) = 0xa0;
    *(undefined8 *)(lVar23 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x18),0);
    FUN_033ce1dc(lVar23,lVar22);
    lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                               );
    uVar15 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
    FUN_033cfef4();
    *(undefined8 *)(lVar22 + 0x10) = uVar15;
    thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x10),uVar15);
    plVar10 = (long *)(lVar22 + 0x18);
    *plVar10 = lVar23;
    thunk_FUN_01f51358(plVar10,lVar23);
    lVar23 = thunk_FUN_01f117cc(*puVar13);
    FUN_035ac8e8(lVar23,0);
    *(undefined1 *)(lVar23 + 0x10) = 0x30;
    *(undefined8 *)(lVar23 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar23 + 0x18),0);
    if (*(long *)(in_stack_00000018 + 0x10) != 0) {
      uVar15 = FUN_01f08890(*(undefined8 *)
                             Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,0x14)
      ;
      plVar11 = (long *)FUN_033d3720(in_stack_00000018);
      if (plVar11 == (long *)0x0) goto LAB_033d73a8;
      (**(code **)(*plVar11 + 0x198))(plVar11,uVar15,*(undefined8 *)(*plVar11 + 0x1a0));
      if (*plVar10 == 0) goto LAB_033d73a8;
      uVar16 = *(undefined8 *)(in_stack_00000018 + 0x10);
      uVar1 = *(undefined4 *)(in_stack_00000018 + 0x34);
      lVar24 = FUN_033cea34(*plVar10,0);
      if (lVar24 == 0) goto LAB_033d73a8;
      uVar20 = FUN_033cdff8();
      uVar16 = FUN_033d201c(uVar20,uVar16,uVar15,uVar1,uVar20);
      lVar24 = thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(lVar24,0);
      *(undefined1 *)(lVar24 + 0x10) = 0x30;
      *(undefined8 *)(lVar24 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar24 + 0x18),0);
      uVar20 = FUN_033cf0dc(*(undefined8 *)
                             Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__
                           );
      FUN_033ce1dc(lVar24,uVar20);
      lVar21 = thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(lVar21,0);
      *(undefined1 *)(lVar21 + 0x10) = 5;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar21 + 0x18),0);
      FUN_033ce1dc(lVar24,lVar21);
      lVar21 = thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(lVar21,0);
      *(undefined1 *)(lVar21 + 0x10) = 0x30;
      *(undefined8 *)(lVar21 + 0x18) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar21 + 0x18),0);
      FUN_033ce1dc(lVar21,lVar24);
      lVar24 = thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(lVar24,0);
      *(undefined1 *)(lVar24 + 0x10) = 4;
      *(undefined8 *)(lVar24 + 0x18) = uVar16;
      thunk_FUN_01f51358((undefined8 *)(lVar24 + 0x18),uVar16);
      FUN_033ce1dc(lVar21,lVar24);
      FUN_033ce1dc(lVar23,lVar21);
      lVar24 = thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(lVar24,0);
      *(undefined1 *)(lVar24 + 0x10) = 4;
      *(undefined8 *)(lVar24 + 0x18) = uVar15;
      thunk_FUN_01f51358((undefined8 *)(lVar24 + 0x18),uVar15);
      FUN_033ce1dc(lVar23,lVar24);
      uVar15 = FUN_033cef4c(*(undefined4 *)(in_stack_00000018 + 0x34));
      FUN_033ce1dc(lVar23,uVar15);
    }
    lVar24 = FUN_01f08890(*(undefined8 *)
                           Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,1);
    if (lVar24 != 0) {
      if (*(int *)(lVar24 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined1 *)(lVar24 + 0x20) = 3;
      lVar21 = thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(lVar21,0);
      *(undefined1 *)(lVar21 + 0x10) = 2;
      *(long *)(lVar21 + 0x18) = lVar24;
      thunk_FUN_01f51358((long *)(lVar21 + 0x18),lVar24);
      plVar10 = (long *)thunk_FUN_01f117cc(*puVar13);
      FUN_035ac8e8(plVar10,0);
      *(undefined1 *)(plVar10 + 2) = 0x30;
      plVar10[3] = 0;
      thunk_FUN_01f51358(plVar10 + 3,0);
      FUN_033ce1dc(plVar10,lVar21);
      uVar15 = FUN_033d01ac(lVar22);
      FUN_033ce1dc(plVar10,uVar15);
      plVar11 = *(long **)(lVar23 + 0x20);
      if ((plVar11 != (long *)0x0) &&
         (iVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0)),
         0 < iVar9)) {
        FUN_033ce1dc(plVar10,lVar23);
      }
                    /* WARNING: Could not recover jumptable at 0x033d721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      return;
    }
  }
LAB_033d73a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


