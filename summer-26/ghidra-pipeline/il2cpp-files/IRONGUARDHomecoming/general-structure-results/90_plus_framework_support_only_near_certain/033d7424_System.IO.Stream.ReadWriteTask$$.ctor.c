/*
FUNCTION_NAME: System.IO.Stream.ReadWriteTask$$.ctor
ENTRY_POINT: 033d7424
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_20;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;strong_file_logging_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033d73f4) */
/* WARNING: Removing unreachable block (ram,0x033d65f4) */
/* WARNING: Removing unreachable block (ram,0x033d681c) */
/* WARNING: Removing unreachable block (ram,0x033d6de4) */
/* WARNING: Removing unreachable block (ram,0x033d6ac0) */
/* WARNING: Removing unreachable block (ram,0x033d643c) */
/* WARNING: Removing unreachable block (ram,0x033d6154) */
/* WARNING: Removing unreachable block (ram,0x033d61f0) */
/* WARNING: Removing unreachable block (ram,0x033d73e8) */
/* WARNING: Removing unreachable block (ram,0x033d73d0) */
/* WARNING: Removing unreachable block (ram,0x033d737c) */
/* WARNING: Removing unreachable block (ram,0x033d7a5c) */
/* WARNING: Removing unreachable block (ram,0x033d6e50) */

void System_IO_Stream_ReadWriteTask___ctor(undefined8 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *unaff_x21;
  uint uVar22;
  long *unaff_x24;
  int unaff_w28;
  long unaff_x29;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  
  plVar15 = (long *)thunk_FUN_01f116d0();
  if (plVar15 != (long *)0x0) {
    lVar19 = *plVar15;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
          goto code_r0x033d7304;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)
              FUN_01ecb238(plVar15,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                           ,0);
code_r0x033d7304:
    (*(code *)*puVar16)(plVar15,puVar16[1]);
  }
  if (unaff_x29 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if (unaff_w28 != 1) {
    plVar15 = (long *)thunk_FUN_01f116d0();
    if (plVar15 != (long *)0x0) {
      lVar19 = *plVar15;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto System_IO_Stream__ReadAsync;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)
                FUN_01ecb238(plVar15,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
System_IO_Stream__ReadAsync:
      (*(code *)*puVar16)(plVar15,puVar16[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar15 = (long *)__cxa_begin_catch(param_1);
  lVar19 = *plVar15;
  __cxa_end_catch();
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar15 = (long *)thunk_FUN_01f116d0();
  if (plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar3) {
          puVar16 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_033d5f18;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar16 = (undefined8 *)FUN_01ecb238(plVar15,*(long *)puVar3,0);
LAB_033d5f18:
    (*(code *)*puVar16)(plVar15,puVar16[1]);
  }
  if (lVar19 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar19);
  }
  if (unaff_x24 != (long *)0x0) {
    plVar15 = (long *)(**(code **)(*unaff_x24 + 0x388))();
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar15;
      lVar19 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar16 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_033d5fb0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar15,lVar19,0);
LAB_033d5fb0:
      uVar20 = (*(code *)*puVar16)(plVar15,puVar16[1]);
      if ((uVar20 & 1) == 0) {
        plVar15 = (long *)thunk_FUN_01f116d0(plVar15,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar15 == (long *)0x0) goto LAB_033d6270;
        lVar19 = *plVar15;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 == 0) goto LAB_033d6248;
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        goto LAB_033d6230;
      }
      lVar17 = *plVar15;
      lVar19 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar16 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_033d6010;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar15,lVar19,1);
LAB_033d6010:
      plVar9 = (long *)(*(code *)*puVar16)(plVar15,puVar16[1]);
      if (plVar9 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9);
        }
      }
      lVar19 = FUN_033d32e0(in_stack_00000018);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar19 = FUN_033d442c();
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar22 = 0;
      while (uVar20 = FUN_033d485c(lVar19), (uVar20 & 1) != 0) {
        plVar10 = (long *)FUN_033d4484(lVar19);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar11 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = (**(code **)(*plVar10 + 0x1f8))(plVar10,*(undefined8 *)(*plVar10 + 0x200));
        uVar7 = FUN_033d2178(uVar12,uVar11,uVar12);
        uVar22 = uVar22 | uVar7;
      }
      plVar10 = (long *)thunk_FUN_01f116d0(lVar19,*(undefined8 *)
                                                                                                      
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar10 != (long *)0x0) {
        lVar19 = *plVar10;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_033d613c;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)
                  FUN_01ecb238(plVar10,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_033d613c:
        (*(code *)*puVar16)(plVar10,puVar16[1]);
      }
      if ((uVar22 & 1) == 0) {
        if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*in_stack_00000010 + 0x308))
                  (in_stack_00000010,plVar9,*(undefined8 *)(*in_stack_00000010 + 0x310));
      }
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033d6230:
    if (*(long *)(piVar21 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto System_IO_FileStream___ctor;
    }
  }
LAB_033d6248:
  puVar16 = (undefined8 *)
            FUN_01ecb238(plVar15,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
System_IO_FileStream___ctor:
  (*(code *)*puVar16)(plVar15,puVar16[1]);
LAB_033d6270:
  plVar15 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (in_stack_00000010 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x388))
                               (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x390));
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar9;
      lVar19 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar16 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_033d6308;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar19,0);
LAB_033d6308:
      uVar20 = (*(code *)*puVar16)(plVar9,puVar16[1]);
      if ((uVar20 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*plVar15);
        if (plVar9 == (long *)0x0) goto LAB_033d6430;
        lVar19 = *plVar9;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 == 0) goto LAB_033d6408;
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        goto LAB_033d63f0;
      }
      lVar17 = *plVar9;
      lVar19 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar16 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_033d6368;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar19,1);
LAB_033d6368:
      plVar10 = (long *)(*(code *)*puVar16)(plVar9,puVar16[1]);
      if (plVar10 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
      }
      FUN_033d80d4(in_stack_00000018,plVar10,0);
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033d63f0:
    if (*(long *)(piVar21 + -2) == *plVar15) {
      puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6424;
    }
  }
LAB_033d6408:
  puVar16 = (undefined8 *)FUN_01ecb238(plVar9,*plVar15,0);
LAB_033d6424:
  (*(code *)*puVar16)(plVar9,puVar16[1]);
LAB_033d6430:
  if (unaff_x21 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*unaff_x21 + 0x388))();
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar17 = *plVar9;
      lVar19 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar16 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_033d64c0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar19,0);
LAB_033d64c0:
      uVar20 = (*(code *)*puVar16)(plVar9,puVar16[1]);
      if ((uVar20 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*plVar15);
        if (plVar9 == (long *)0x0) goto LAB_033d65e8;
        lVar19 = *plVar9;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 == 0) goto LAB_033d65c0;
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        goto LAB_033d65a8;
      }
      lVar17 = *plVar9;
      lVar19 = *(long *)puVar3;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar19) {
            puVar16 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_033d6520;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar19,1);
LAB_033d6520:
      plVar10 = (long *)(*(code *)*puVar16)(plVar9,puVar16[1]);
      if (plVar10 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
      }
      FUN_033d7e8c(in_stack_00000018,plVar10,0);
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033d65a8:
    if (*(long *)(piVar21 + -2) == *plVar15) {
      puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d65dc;
    }
  }
LAB_033d65c0:
  puVar16 = (undefined8 *)FUN_01ecb238(plVar9,*plVar15,0);
LAB_033d65dc:
  (*(code *)*puVar16)(plVar9,puVar16[1]);
LAB_033d65e8:
  plVar9 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar9 == (long *)0x0) goto LAB_033d73a8;
  iVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
  puVar16 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (0 < iVar8) {
    lVar19 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__);
    FUN_035ac8e8(lVar19,0);
    *(undefined1 *)(lVar19 + 0x10) = 0x30;
    *(undefined8 *)(lVar19 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x18),0);
    plVar9 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
      puVar5 = Method_System_IO_MemoryStream_EnsureNotClosed__;
      puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar18 = *plVar9;
        lVar17 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar17) {
              puVar16 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_033d66d4;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar17,0);
LAB_033d66d4:
        uVar20 = (*(code *)*puVar16)(plVar9,puVar16[1]);
        if ((uVar20 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*plVar15);
          if (plVar9 == (long *)0x0) goto LAB_033d6810;
          lVar17 = *plVar9;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar20 == 0) goto LAB_033d67e8;
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_033d67d0;
        }
        lVar18 = *plVar9;
        lVar17 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar17) {
              puVar16 = (undefined8 *)(lVar18 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_033d6734;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar17,1);
LAB_033d6734:
        plVar10 = (long *)(*(code *)*puVar16)(plVar9,puVar16[1]);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar10);
        }
        if (plVar10[2] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar20 = FUN_0340e040(plVar10[2],*(undefined8 *)puVar5,0);
        if ((uVar20 & 1) != 0) {
          FUN_033ce1dc(lVar19,plVar10[3]);
        }
      } while( true );
    }
    goto LAB_033d73a8;
  }
  goto LAB_033d6880;
code_r0x033d6a10:
  if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar20 = FUN_0340e040(plVar15[2],*(undefined8 *)puVar6,0);
  if ((uVar20 & 1) != 0) {
LAB_033d6a28:
    FUN_033ce1dc(plVar9,plVar15[3]);
  }
  goto LAB_033d690c;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033d6a74:
    if (*(long *)(piVar21 + -2) == *plVar15) {
      puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6aa8;
    }
  }
LAB_033d6a8c:
  puVar16 = (undefined8 *)FUN_01ecb238(plVar10,*plVar15,0);
LAB_033d6aa8:
  (*(code *)*puVar16)(plVar10,puVar16[1]);
LAB_033d6ab4:
  puVar16 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (plVar9 == (long *)0x0) goto LAB_033d73a8;
  plVar10 = (long *)plVar9[4];
  if ((plVar10 != (long *)0x0) &&
     (iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0)), 0 < iVar8)
     ) {
    lVar19 = thunk_FUN_01f117cc(*puVar16);
    FUN_035ac8e8(lVar19,0);
    *(undefined1 *)(lVar19 + 0x10) = 0xa0;
    *(undefined8 *)(lVar19 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x18),0);
    uVar11 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    lVar17 = thunk_FUN_01f117cc(*puVar16);
    FUN_035ac8e8(lVar17,0);
    *(undefined1 *)(lVar17 + 0x10) = 4;
    *(undefined8 *)(lVar17 + 0x18) = uVar11;
    thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),uVar11);
    FUN_033ce1dc(lVar19,lVar17);
    lVar17 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                               );
    uVar11 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
    FUN_033cfef4();
    *(undefined8 *)(lVar17 + 0x10) = uVar11;
    thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x10),uVar11);
    *(long *)(lVar17 + 0x18) = lVar19;
    thunk_FUN_01f51358((long *)(lVar17 + 0x18),lVar19);
    uVar11 = FUN_033d01ac(lVar17);
    if (in_stack_00000008 == (long *)0x0) goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar11);
  }
  goto LAB_033d6bcc;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033d6d98:
    if (*(long *)(piVar21 + -2) == *plVar15) {
      puVar16 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6dcc;
    }
  }
LAB_033d6db0:
  puVar16 = (undefined8 *)FUN_01ecb238(plVar9,*plVar15,0);
LAB_033d6dcc:
  (*(code *)*puVar16)(plVar9,puVar16[1]);
LAB_033d6dd8:
  puVar16 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar19 == 0) goto LAB_033d73a8;
  plVar15 = *(long **)(lVar19 + 0x20);
  if ((plVar15 == (long *)0x0) ||
     (iVar8 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0)), iVar8 < 1)
     ) goto System_IO_FileSystemInfo__get_Exists;
  lVar19 = FUN_033d7b3c(in_stack_00000018,lVar19,
                        *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
  if ((lVar19 == 0) || (uVar11 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
  goto LAB_033d73a8;
  FUN_033ce1dc(in_stack_00000008,uVar11);
  goto LAB_033d6e78;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033d67d0:
    if (*(long *)(piVar21 + -2) == *plVar15) {
      puVar16 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6804;
    }
  }
LAB_033d67e8:
  puVar16 = (undefined8 *)FUN_01ecb238(plVar9,*plVar15,0);
LAB_033d6804:
  (*(code *)*puVar16)(plVar9,puVar16[1]);
LAB_033d6810:
  puVar16 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar19 == 0) goto LAB_033d73a8;
  plVar9 = *(long **)(lVar19 + 0x20);
  if ((plVar9 != (long *)0x0) &&
     (iVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0)), 0 < iVar8)) {
    lVar19 = FUN_033d7b3c(in_stack_00000018,lVar19,
                          *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
    if ((lVar19 == 0) || (uVar11 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
    goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar11);
  }
LAB_033d6880:
  plVar9 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar9 != (long *)0x0) {
    iVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    if (iVar8 < 1) {
LAB_033d6bcc:
      plVar9 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar9 != (long *)0x0) {
        iVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
        if (iVar8 < 1) {
System_IO_FileSystemInfo__get_Exists:
          if (in_stack_00000008 != (long *)0x0) {
LAB_033d6e78:
            uVar11 = (**(code **)(*in_stack_00000008 + 0x178))
                               (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x180));
            lVar19 = thunk_FUN_01f117cc(*puVar16);
            FUN_035ac8e8(lVar19,0);
            *(undefined1 *)(lVar19 + 0x10) = 4;
            *(undefined8 *)(lVar19 + 0x18) = uVar11;
            thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x18),uVar11);
            lVar17 = thunk_FUN_01f117cc(*puVar16);
            FUN_035ac8e8(lVar17,0);
            *(undefined1 *)(lVar17 + 0x10) = 0xa0;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),0);
            FUN_033ce1dc(lVar17,lVar19);
            lVar19 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                                       );
            uVar11 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
            FUN_033cfef4();
            *(undefined8 *)(lVar19 + 0x10) = uVar11;
            thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x10),uVar11);
            plVar15 = (long *)(lVar19 + 0x18);
            *plVar15 = lVar17;
            thunk_FUN_01f51358(plVar15,lVar17);
            lVar17 = thunk_FUN_01f117cc(*puVar16);
            FUN_035ac8e8(lVar17,0);
            *(undefined1 *)(lVar17 + 0x10) = 0x30;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),0);
            if (*(long *)(in_stack_00000018 + 0x10) != 0) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                    ,0x14);
              plVar9 = (long *)FUN_033d3720(in_stack_00000018);
              if (plVar9 == (long *)0x0) goto LAB_033d73a8;
              (**(code **)(*plVar9 + 0x198))(plVar9,uVar11,*(undefined8 *)(*plVar9 + 0x1a0));
              if (*plVar15 == 0) goto LAB_033d73a8;
              uVar12 = *(undefined8 *)(in_stack_00000018 + 0x10);
              uVar1 = *(undefined4 *)(in_stack_00000018 + 0x34);
              lVar18 = FUN_033cea34(*plVar15,0);
              if (lVar18 == 0) goto LAB_033d73a8;
              uVar13 = FUN_033cdff8();
              uVar12 = FUN_033d201c(uVar13,uVar12,uVar11,uVar1,uVar13);
              lVar18 = thunk_FUN_01f117cc(*puVar16);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 0x30;
              *(undefined8 *)(lVar18 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),0);
              uVar13 = FUN_033cf0dc(*(undefined8 *)
                                     Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__
                                   );
              FUN_033ce1dc(lVar18,uVar13);
              lVar14 = thunk_FUN_01f117cc(*puVar16);
              FUN_035ac8e8(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 5;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x18),0);
              FUN_033ce1dc(lVar18,lVar14);
              lVar14 = thunk_FUN_01f117cc(*puVar16);
              FUN_035ac8e8(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 0x30;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x18),0);
              FUN_033ce1dc(lVar14,lVar18);
              lVar18 = thunk_FUN_01f117cc(*puVar16);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 4;
              *(undefined8 *)(lVar18 + 0x18) = uVar12;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),uVar12);
              FUN_033ce1dc(lVar14,lVar18);
              FUN_033ce1dc(lVar17,lVar14);
              lVar18 = thunk_FUN_01f117cc(*puVar16);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 4;
              *(undefined8 *)(lVar18 + 0x18) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),uVar11);
              FUN_033ce1dc(lVar17,lVar18);
              uVar11 = FUN_033cef4c(*(undefined4 *)(in_stack_00000018 + 0x34));
              FUN_033ce1dc(lVar17,uVar11);
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
              lVar14 = thunk_FUN_01f117cc(*puVar16);
              FUN_035ac8e8(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 2;
              *(long *)(lVar14 + 0x18) = lVar18;
              thunk_FUN_01f51358((long *)(lVar14 + 0x18),lVar18);
              plVar15 = (long *)thunk_FUN_01f117cc(*puVar16);
              FUN_035ac8e8(plVar15,0);
              *(undefined1 *)(plVar15 + 2) = 0x30;
              plVar15[3] = 0;
              thunk_FUN_01f51358(plVar15 + 3,0);
              FUN_033ce1dc(plVar15,lVar14);
              uVar11 = FUN_033d01ac(lVar19);
              FUN_033ce1dc(plVar15,uVar11);
              plVar9 = *(long **)(lVar17 + 0x20);
              if ((plVar9 != (long *)0x0) &&
                 (iVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0)),
                 0 < iVar8)) {
                FUN_033ce1dc(plVar15,lVar17);
              }
                    /* WARNING: Could not recover jumptable at 0x033d721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
              return;
            }
          }
        }
        else {
          lVar19 = thunk_FUN_01f117cc(*puVar16);
          FUN_035ac8e8(lVar19,0);
          *(undefined1 *)(lVar19 + 0x10) = 0x30;
          *(undefined8 *)(lVar19 + 0x18) = 0;
          thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x18),0);
          plVar9 = *(long **)(in_stack_00000018 + 0x38);
          if (plVar9 != (long *)0x0) {
            plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390))
            ;
            puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__;
            puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
            puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar18 = *plVar9;
              lVar17 = *(long *)puVar3;
              uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar17) {
                    puVar16 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_033d6c9c;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar17,0);
LAB_033d6c9c:
              uVar20 = (*(code *)*puVar16)(plVar9,puVar16[1]);
              if ((uVar20 & 1) == 0) {
                plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*plVar15);
                if (plVar9 == (long *)0x0) goto LAB_033d6dd8;
                lVar17 = *plVar9;
                uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar20 == 0) goto LAB_033d6db0;
                piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                goto LAB_033d6d98;
              }
              lVar18 = *plVar9;
              lVar17 = *(long *)puVar3;
              uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar17) {
                    puVar16 = (undefined8 *)(lVar18 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                    goto LAB_033d6cfc;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar16 = (undefined8 *)FUN_01ecb238(plVar9,lVar17,1);
LAB_033d6cfc:
              plVar10 = (long *)(*(code *)*puVar16)(plVar9,puVar16[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(*plVar10 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar10);
              }
              if (plVar10[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar20 = FUN_0340e040(plVar10[2],*(undefined8 *)puVar5,0);
              if ((uVar20 & 1) != 0) {
                FUN_033ce1dc(lVar19,plVar10[3]);
              }
            } while( true );
          }
        }
      }
    }
    else {
      plVar9 = (long *)thunk_FUN_01f117cc(*puVar16);
      FUN_035ac8e8(plVar9,0);
      *(undefined1 *)(plVar9 + 2) = 0x30;
      plVar9[3] = 0;
      thunk_FUN_01f51358(plVar9 + 3,0);
      plVar15 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar15 != (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar15 + 0x388))(plVar15,*(undefined8 *)(*plVar15 + 0x390))
        ;
        puVar6 = Method_System_IO_MemoryStream__ctor__;
        puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__;
        puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_033d690c:
        lVar17 = *plVar10;
        lVar19 = *(long *)puVar3;
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) {
              puVar16 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_033d6958;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar16 = (undefined8 *)FUN_01ecb238(plVar10,lVar19,0);
LAB_033d6958:
        uVar20 = (*(code *)*puVar16)(plVar10,puVar16[1]);
        plVar15 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar20 & 1) != 0) {
          lVar17 = *plVar10;
          lVar19 = *(long *)puVar3;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar19) {
                puVar16 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_033d69b8;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar16 = (undefined8 *)FUN_01ecb238(plVar10,lVar19,1);
LAB_033d69b8:
          plVar15 = (long *)(*(code *)*puVar16)(plVar10,puVar16[1]);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar15 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar15);
          }
          if (plVar15[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar20 = FUN_0340e040(plVar15[2],*(undefined8 *)puVar5,0);
          if ((uVar20 & 1) == 0) goto code_r0x033d6a10;
          goto LAB_033d6a28;
        }
        plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar10 == (long *)0x0) goto LAB_033d6ab4;
        lVar19 = *plVar10;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 == 0) goto LAB_033d6a8c;
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        goto LAB_033d6a74;
      }
    }
  }
LAB_033d73a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


