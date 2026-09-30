/*
FUNCTION_NAME: System.IO.Stream$$ReadAsync
ENTRY_POINT: 033d79b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;strong_file_logging_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033d73d0) */
/* WARNING: Removing unreachable block (ram,0x033d6de4) */
/* WARNING: Removing unreachable block (ram,0x033d6ac0) */
/* WARNING: Removing unreachable block (ram,0x033d6154) */
/* WARNING: Removing unreachable block (ram,0x033d61f0) */
/* WARNING: Removing unreachable block (ram,0x033d73e8) */
/* WARNING: Removing unreachable block (ram,0x033d65f4) */
/* WARNING: Removing unreachable block (ram,0x033d73f4) */
/* WARNING: Removing unreachable block (ram,0x033d737c) */
/* WARNING: Removing unreachable block (ram,0x033d681c) */
/* WARNING: Removing unreachable block (ram,0x033d643c) */
/* WARNING: Removing unreachable block (ram,0x033d6e50) */

void System_IO_Stream__ReadAsync(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *unaff_x21;
  uint uVar21;
  long *unaff_x24;
  long lVar22;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  
  plVar16 = (long *)__cxa_begin_catch();
  lVar22 = *plVar16;
  __cxa_end_catch();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar16 = (long *)thunk_FUN_01f116d0();
  if (plVar16 != (long *)0x0) {
    lVar17 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_033d5f18;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar16,*(long *)puVar3,0);
LAB_033d5f18:
    (*(code *)*puVar9)(plVar16,puVar9[1]);
  }
  if (lVar22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar22);
  }
  if (unaff_x24 != (long *)0x0) {
    plVar16 = (long *)(**(code **)(*unaff_x24 + 0x388))();
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar16;
      lVar22 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_033d5fb0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar16,lVar22,0);
LAB_033d5fb0:
      uVar19 = (*(code *)*puVar9)(plVar16,puVar9[1]);
      if ((uVar19 & 1) == 0) {
        plVar16 = (long *)thunk_FUN_01f116d0(plVar16,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar16 == (long *)0x0) goto LAB_033d6270;
        lVar22 = *plVar16;
        uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar19 == 0) goto LAB_033d6248;
        piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_033d6230;
      }
      lVar17 = *plVar16;
      lVar22 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_033d6010;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar16,lVar22,1);
LAB_033d6010:
      plVar10 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
      if (plVar10 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
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
      uVar21 = 0;
      while (uVar19 = FUN_033d485c(lVar22), (uVar19 & 1) != 0) {
        plVar11 = (long *)FUN_033d4484(lVar22);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = (**(code **)(*plVar11 + 0x1f8))(plVar11,*(undefined8 *)(*plVar11 + 0x200));
        uVar7 = FUN_033d2178(uVar13,uVar12,uVar13);
        uVar21 = uVar21 | uVar7;
      }
      plVar11 = (long *)thunk_FUN_01f116d0(lVar22,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar11 != (long *)0x0) {
        lVar22 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar9 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033d613c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)
                 FUN_01ecb238(plVar11,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_033d613c:
        (*(code *)*puVar9)(plVar11,puVar9[1]);
      }
      if ((uVar21 & 1) == 0) {
        if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*in_stack_00000010 + 0x308))
                  (in_stack_00000010,plVar10,*(undefined8 *)(*in_stack_00000010 + 0x310));
      }
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_033d6230:
    if (*(long *)(piVar20 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
      goto System_IO_FileStream___ctor;
    }
  }
LAB_033d6248:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar16,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
System_IO_FileStream___ctor:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
LAB_033d6270:
  plVar16 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (in_stack_00000010 != (long *)0x0) {
    plVar10 = (long *)(**(code **)(*in_stack_00000010 + 0x388))
                                (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x390));
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar10;
      lVar22 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_033d6308;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar22,0);
LAB_033d6308:
      uVar19 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar19 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*plVar16);
        if (plVar10 == (long *)0x0) goto LAB_033d6430;
        lVar22 = *plVar10;
        uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar19 == 0) goto LAB_033d6408;
        piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_033d63f0;
      }
      lVar17 = *plVar10;
      lVar22 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_033d6368;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar22,1);
LAB_033d6368:
      plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
      if (plVar11 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
      }
      FUN_033d80d4(in_stack_00000018,plVar11,0);
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_033d63f0:
    if (*(long *)(piVar20 + -2) == *plVar16) {
      puVar9 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033d6424;
    }
  }
LAB_033d6408:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*plVar16,0);
LAB_033d6424:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_033d6430:
  if (unaff_x21 != (long *)0x0) {
    plVar10 = (long *)(**(code **)(*unaff_x21 + 0x388))();
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar10;
      lVar22 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_033d64c0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar22,0);
LAB_033d64c0:
      uVar19 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar19 & 1) == 0) {
        plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*plVar16);
        if (plVar10 == (long *)0x0) goto LAB_033d65e8;
        lVar22 = *plVar10;
        uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar19 == 0) goto LAB_033d65c0;
        piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_033d65a8;
      }
      lVar17 = *plVar10;
      lVar22 = *(long *)puVar3;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == lVar22) {
            puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_033d6520;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar22,1);
LAB_033d6520:
      plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
      if (plVar11 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
      }
      FUN_033d7e8c(in_stack_00000018,plVar11,0);
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_033d65a8:
    if (*(long *)(piVar20 + -2) == *plVar16) {
      puVar9 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033d65dc;
    }
  }
LAB_033d65c0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*plVar16,0);
LAB_033d65dc:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_033d65e8:
  plVar10 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar10 == (long *)0x0) goto LAB_033d73a8;
  iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (0 < iVar8) {
    lVar22 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__);
    FUN_035ac8e8(lVar22,0);
    *(undefined1 *)(lVar22 + 0x10) = 0x30;
    *(undefined8 *)(lVar22 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
    plVar10 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar10 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390));
      puVar5 = Method_System_IO_MemoryStream_EnsureNotClosed__;
      puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar18 = *plVar10;
        lVar17 = *(long *)puVar3;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar9 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033d66d4;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar17,0);
LAB_033d66d4:
        uVar19 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if ((uVar19 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*plVar16);
          if (plVar10 == (long *)0x0) goto LAB_033d6810;
          lVar17 = *plVar10;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 == 0) goto LAB_033d67e8;
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_033d67d0;
        }
        lVar18 = *plVar10;
        lVar17 = *(long *)puVar3;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar9 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_033d6734;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar17,1);
LAB_033d6734:
        plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar11);
        }
        if (plVar11[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar19 = FUN_0340e040(plVar11[2],*(undefined8 *)puVar5,0);
        if ((uVar19 & 1) != 0) {
          FUN_033ce1dc(lVar22,plVar11[3]);
        }
      } while( true );
    }
    goto LAB_033d73a8;
  }
  goto LAB_033d6880;
code_r0x033d6a10:
  if (plVar16[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar19 = FUN_0340e040(plVar16[2],*(undefined8 *)puVar6,0);
  if ((uVar19 & 1) != 0) {
LAB_033d6a28:
    FUN_033ce1dc(plVar10,plVar16[3]);
  }
  goto LAB_033d690c;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_033d6a74:
    if (*(long *)(piVar20 + -2) == *plVar16) {
      puVar9 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033d6aa8;
    }
  }
LAB_033d6a8c:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar11,*plVar16,0);
LAB_033d6aa8:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
LAB_033d6ab4:
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (plVar10 == (long *)0x0) goto LAB_033d73a8;
  plVar11 = (long *)plVar10[4];
  if ((plVar11 != (long *)0x0) &&
     (iVar8 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0)), 0 < iVar8)
     ) {
    lVar22 = thunk_FUN_01f117cc(*puVar9);
    FUN_035ac8e8(lVar22,0);
    *(undefined1 *)(lVar22 + 0x10) = 0xa0;
    *(undefined8 *)(lVar22 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
    uVar12 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    lVar17 = thunk_FUN_01f117cc(*puVar9);
    FUN_035ac8e8(lVar17,0);
    *(undefined1 *)(lVar17 + 0x10) = 4;
    *(undefined8 *)(lVar17 + 0x18) = uVar12;
    thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),uVar12);
    FUN_033ce1dc(lVar22,lVar17);
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                               );
    uVar12 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
    FUN_033cfef4();
    *(undefined8 *)(lVar17 + 0x10) = uVar12;
    thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x10),uVar12);
    *(long *)(lVar17 + 0x18) = lVar22;
    thunk_FUN_01f51358((long *)(lVar17 + 0x18),lVar22);
    uVar12 = FUN_033d01ac(lVar17);
    if (in_stack_00000008 == (long *)0x0) goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar12);
  }
  goto LAB_033d6bcc;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_033d6d98:
    if (*(long *)(piVar20 + -2) == *plVar16) {
      puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033d6dcc;
    }
  }
LAB_033d6db0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*plVar16,0);
LAB_033d6dcc:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_033d6dd8:
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar22 == 0) goto LAB_033d73a8;
  plVar16 = *(long **)(lVar22 + 0x20);
  if ((plVar16 == (long *)0x0) ||
     (iVar8 = (**(code **)(*plVar16 + 0x298))(plVar16,*(undefined8 *)(*plVar16 + 0x2a0)), iVar8 < 1)
     ) goto System_IO_FileSystemInfo__get_Exists;
  lVar22 = FUN_033d7b3c(in_stack_00000018,lVar22,
                        *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
  if ((lVar22 == 0) || (uVar12 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
  goto LAB_033d73a8;
  FUN_033ce1dc(in_stack_00000008,uVar12);
  goto LAB_033d6e78;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_033d67d0:
    if (*(long *)(piVar20 + -2) == *plVar16) {
      puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033d6804;
    }
  }
LAB_033d67e8:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*plVar16,0);
LAB_033d6804:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_033d6810:
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar22 == 0) goto LAB_033d73a8;
  plVar10 = *(long **)(lVar22 + 0x20);
  if ((plVar10 != (long *)0x0) &&
     (iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0)), 0 < iVar8)
     ) {
    lVar22 = FUN_033d7b3c(in_stack_00000018,lVar22,
                          *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
    if ((lVar22 == 0) || (uVar12 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
    goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar12);
  }
LAB_033d6880:
  plVar10 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar10 != (long *)0x0) {
    iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
    if (iVar8 < 1) {
LAB_033d6bcc:
      plVar10 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar10 != (long *)0x0) {
        iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0));
        if (iVar8 < 1) {
System_IO_FileSystemInfo__get_Exists:
          if (in_stack_00000008 != (long *)0x0) {
LAB_033d6e78:
            uVar12 = (**(code **)(*in_stack_00000008 + 0x178))
                               (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x180));
            lVar22 = thunk_FUN_01f117cc(*puVar9);
            FUN_035ac8e8(lVar22,0);
            *(undefined1 *)(lVar22 + 0x10) = 4;
            *(undefined8 *)(lVar22 + 0x18) = uVar12;
            thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),uVar12);
            lVar17 = thunk_FUN_01f117cc(*puVar9);
            FUN_035ac8e8(lVar17,0);
            *(undefined1 *)(lVar17 + 0x10) = 0xa0;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),0);
            FUN_033ce1dc(lVar17,lVar22);
            lVar22 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                                       );
            uVar12 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
            FUN_033cfef4();
            *(undefined8 *)(lVar22 + 0x10) = uVar12;
            thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x10),uVar12);
            plVar16 = (long *)(lVar22 + 0x18);
            *plVar16 = lVar17;
            thunk_FUN_01f51358(plVar16,lVar17);
            lVar17 = thunk_FUN_01f117cc(*puVar9);
            FUN_035ac8e8(lVar17,0);
            *(undefined1 *)(lVar17 + 0x10) = 0x30;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),0);
            if (*(long *)(in_stack_00000018 + 0x10) != 0) {
              uVar12 = FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                    ,0x14);
              plVar10 = (long *)FUN_033d3720(in_stack_00000018);
              if (plVar10 == (long *)0x0) goto LAB_033d73a8;
              (**(code **)(*plVar10 + 0x198))(plVar10,uVar12,*(undefined8 *)(*plVar10 + 0x1a0));
              if (*plVar16 == 0) goto LAB_033d73a8;
              uVar13 = *(undefined8 *)(in_stack_00000018 + 0x10);
              uVar1 = *(undefined4 *)(in_stack_00000018 + 0x34);
              lVar18 = FUN_033cea34(*plVar16,0);
              if (lVar18 == 0) goto LAB_033d73a8;
              uVar14 = FUN_033cdff8();
              uVar13 = FUN_033d201c(uVar14,uVar13,uVar12,uVar1,uVar14);
              lVar18 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 0x30;
              *(undefined8 *)(lVar18 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),0);
              uVar14 = FUN_033cf0dc(*(undefined8 *)
                                     Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__
                                   );
              FUN_033ce1dc(lVar18,uVar14);
              lVar15 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar15,0);
              *(undefined1 *)(lVar15 + 0x10) = 5;
              *(undefined8 *)(lVar15 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),0);
              FUN_033ce1dc(lVar18,lVar15);
              lVar15 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar15,0);
              *(undefined1 *)(lVar15 + 0x10) = 0x30;
              *(undefined8 *)(lVar15 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),0);
              FUN_033ce1dc(lVar15,lVar18);
              lVar18 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 4;
              *(undefined8 *)(lVar18 + 0x18) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),uVar13);
              FUN_033ce1dc(lVar15,lVar18);
              FUN_033ce1dc(lVar17,lVar15);
              lVar18 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 4;
              *(undefined8 *)(lVar18 + 0x18) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),uVar12);
              FUN_033ce1dc(lVar17,lVar18);
              uVar12 = FUN_033cef4c(*(undefined4 *)(in_stack_00000018 + 0x34));
              FUN_033ce1dc(lVar17,uVar12);
            }
            lVar18 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,1);
            if (lVar18 != 0) {
              if (*(int *)(lVar18 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined1 *)(lVar18 + 0x20) = 3;
              lVar15 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar15,0);
              *(undefined1 *)(lVar15 + 0x10) = 2;
              *(long *)(lVar15 + 0x18) = lVar18;
              thunk_FUN_01f51358((long *)(lVar15 + 0x18),lVar18);
              plVar16 = (long *)thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(plVar16,0);
              *(undefined1 *)(plVar16 + 2) = 0x30;
              plVar16[3] = 0;
              thunk_FUN_01f51358(plVar16 + 3,0);
              FUN_033ce1dc(plVar16,lVar15);
              uVar12 = FUN_033d01ac(lVar22);
              FUN_033ce1dc(plVar16,uVar12);
              plVar10 = *(long **)(lVar17 + 0x20);
              if ((plVar10 != (long *)0x0) &&
                 (iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0))
                 , 0 < iVar8)) {
                FUN_033ce1dc(plVar16,lVar17);
              }
                    /* WARNING: Could not recover jumptable at 0x033d721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
              return;
            }
          }
        }
        else {
          lVar22 = thunk_FUN_01f117cc(*puVar9);
          FUN_035ac8e8(lVar22,0);
          *(undefined1 *)(lVar22 + 0x10) = 0x30;
          *(undefined8 *)(lVar22 + 0x18) = 0;
          thunk_FUN_01f51358((undefined8 *)(lVar22 + 0x18),0);
          plVar10 = *(long **)(in_stack_00000018 + 0x38);
          if (plVar10 != (long *)0x0) {
            plVar10 = (long *)(**(code **)(*plVar10 + 0x388))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x390));
            puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__;
            puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
            puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar18 = *plVar10;
              lVar17 = *(long *)puVar3;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == lVar17) {
                    puVar9 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_033d6c9c;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar17,0);
LAB_033d6c9c:
              uVar19 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              if ((uVar19 & 1) == 0) {
                plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*plVar16);
                if (plVar10 == (long *)0x0) goto LAB_033d6dd8;
                lVar17 = *plVar10;
                uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar19 == 0) goto LAB_033d6db0;
                piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                goto LAB_033d6d98;
              }
              lVar18 = *plVar10;
              lVar17 = *(long *)puVar3;
              uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar19 != 0) {
                piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == lVar17) {
                    puVar9 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                    goto LAB_033d6cfc;
                  }
                  uVar19 = uVar19 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar19 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar17,1);
LAB_033d6cfc:
              plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar11);
              }
              if (plVar11[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar19 = FUN_0340e040(plVar11[2],*(undefined8 *)puVar5,0);
              if ((uVar19 & 1) != 0) {
                FUN_033ce1dc(lVar22,plVar11[3]);
              }
            } while( true );
          }
        }
      }
    }
    else {
      plVar10 = (long *)thunk_FUN_01f117cc(*puVar9);
      FUN_035ac8e8(plVar10,0);
      *(undefined1 *)(plVar10 + 2) = 0x30;
      plVar10[3] = 0;
      thunk_FUN_01f51358(plVar10 + 3,0);
      plVar16 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar16 != (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar16 + 0x388))(plVar16,*(undefined8 *)(*plVar16 + 0x390))
        ;
        puVar6 = Method_System_IO_MemoryStream__ctor__;
        puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__;
        puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_033d690c:
        lVar17 = *plVar11;
        lVar22 = *(long *)puVar3;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar22) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033d6958;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar11,lVar22,0);
LAB_033d6958:
        uVar19 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        plVar16 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar19 & 1) != 0) {
          lVar17 = *plVar11;
          lVar22 = *(long *)puVar3;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == lVar22) {
                puVar9 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_033d69b8;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar11,lVar22,1);
LAB_033d69b8:
          plVar16 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar16);
          }
          if (plVar16[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar19 = FUN_0340e040(plVar16[2],*(undefined8 *)puVar5,0);
          if ((uVar19 & 1) == 0) goto code_r0x033d6a10;
          goto LAB_033d6a28;
        }
        plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar11 == (long *)0x0) goto LAB_033d6ab4;
        lVar22 = *plVar11;
        uVar19 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar19 == 0) goto LAB_033d6a8c;
        piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
        goto LAB_033d6a74;
      }
    }
  }
LAB_033d73a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


