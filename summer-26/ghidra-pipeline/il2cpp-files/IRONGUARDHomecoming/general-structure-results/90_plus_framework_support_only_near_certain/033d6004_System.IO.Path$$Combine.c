/*
FUNCTION_NAME: System.IO.Path$$Combine
ENTRY_POINT: 033d6004
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;strong_file_logging_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x033d73d0) */
/* WARNING: Removing unreachable block (ram,0x033d681c) */
/* WARNING: Removing unreachable block (ram,0x033d6de4) */
/* WARNING: Removing unreachable block (ram,0x033d6154) */
/* WARNING: Removing unreachable block (ram,0x033d61f0) */
/* WARNING: Removing unreachable block (ram,0x033d643c) */
/* WARNING: Removing unreachable block (ram,0x033d737c) */
/* WARNING: Removing unreachable block (ram,0x033d6ac0) */
/* WARNING: Removing unreachable block (ram,0x033d65f4) */
/* WARNING: Removing unreachable block (ram,0x033d6e50) */
/* WARNING: Removing unreachable block (ram,0x033d73f4) */
/* WARNING: Removing unreachable block (ram,0x033d73e8) */

void System_IO_Path__Combine(long param_1)

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
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int in_w9;
  int *piVar21;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint uVar22;
  long *unaff_x24;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  
code_r0x033d6004:
  puVar15 = (undefined8 *)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138);
  do {
    plVar9 = (long *)(*(code *)*puVar15)();
    if (plVar9 != (long *)0x0) {
      bVar2 = *(byte *)(*unaff_x20 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar9);
      }
    }
    lVar10 = FUN_033d32e0(in_stack_00000018);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = FUN_033d442c();
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar22 = 0;
    while (uVar11 = FUN_033d485c(lVar10), (uVar11 & 1) != 0) {
      plVar12 = (long *)FUN_033d4484(lVar10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar13 = (**(code **)(*plVar9 + 0x1f8))(plVar9,*(undefined8 *)(*plVar9 + 0x200));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = (**(code **)(*plVar12 + 0x1f8))(plVar12,*(undefined8 *)(*plVar12 + 0x200));
      uVar7 = FUN_033d2178(uVar14,uVar13,uVar14);
      uVar22 = uVar22 | uVar7;
    }
    plVar12 = (long *)thunk_FUN_01f116d0(lVar10,*(undefined8 *)
                                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                        );
    if (plVar12 != (long *)0x0) {
      lVar10 = *plVar12;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar15 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_033d613c;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)
                FUN_01ecb238(plVar12,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_033d613c:
      (*(code *)*puVar15)(plVar12,puVar15[1]);
    }
    if ((uVar22 & 1) == 0) {
      if (in_stack_00000010 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*in_stack_00000010 + 0x308))
                (in_stack_00000010,plVar9,*(undefined8 *)(*in_stack_00000010 + 0x310));
    }
    lVar10 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x19) {
          puVar15 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_033d5fb0;
        }
        uVar11 = uVar11 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar11 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ecb238();
LAB_033d5fb0:
    uVar11 = (*(code *)*puVar15)();
    if ((uVar11 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_01f116d0();
      if (plVar9 == (long *)0x0) goto LAB_033d6270;
      lVar10 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_033d6248;
      piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    param_1 = *unaff_x24;
    uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar11 != 0) {
      piVar21 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *unaff_x19) {
          in_w9 = *piVar21;
          goto code_r0x033d6004;
        }
        uVar11 = uVar11 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar11 != 0);
    }
    puVar15 = (undefined8 *)FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar21 = piVar21 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar21 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar15 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
      goto System_IO_FileStream___ctor;
    }
  }
LAB_033d6248:
  puVar15 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
System_IO_FileStream___ctor:
  (*(code *)*puVar15)(plVar9,puVar15[1]);
LAB_033d6270:
  plVar9 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (in_stack_00000010 != (long *)0x0) {
    plVar12 = (long *)(**(code **)(*in_stack_00000010 + 0x388))
                                (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x390));
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar19 = *plVar12;
      lVar10 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_033d6308;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar10,0);
LAB_033d6308:
      uVar11 = (*(code *)*puVar15)(plVar12,puVar15[1]);
      if ((uVar11 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*plVar9);
        if (plVar12 == (long *)0x0) goto LAB_033d6430;
        lVar10 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_033d6408;
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_033d63f0;
      }
      lVar19 = *plVar12;
      lVar10 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_033d6368;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar10,1);
LAB_033d6368:
      plVar16 = (long *)(*(code *)*puVar15)(plVar12,puVar15[1]);
      if (plVar16 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar16);
        }
      }
      FUN_033d80d4(in_stack_00000018,plVar16,0);
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar21 = piVar21 + 4;
    if (uVar11 == 0) break;
LAB_033d63f0:
    if (*(long *)(piVar21 + -2) == *plVar9) {
      puVar15 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6424;
    }
  }
LAB_033d6408:
  puVar15 = (undefined8 *)FUN_01ecb238(plVar12,*plVar9,0);
LAB_033d6424:
  (*(code *)*puVar15)(plVar12,puVar15[1]);
LAB_033d6430:
  if (unaff_x21 != (long *)0x0) {
    plVar12 = (long *)(**(code **)(*unaff_x21 + 0x388))();
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar19 = *plVar12;
      lVar10 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_033d64c0;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar10,0);
LAB_033d64c0:
      uVar11 = (*(code *)*puVar15)(plVar12,puVar15[1]);
      if ((uVar11 & 1) == 0) {
        plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*plVar9);
        if (plVar12 == (long *)0x0) goto LAB_033d65e8;
        lVar10 = *plVar12;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_033d65c0;
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_033d65a8;
      }
      lVar19 = *plVar12;
      lVar10 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar10) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_033d6520;
          }
          uVar11 = uVar11 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar10,1);
LAB_033d6520:
      plVar16 = (long *)(*(code *)*puVar15)(plVar12,puVar15[1]);
      if (plVar16 != (long *)0x0) {
        bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar16);
        }
      }
      FUN_033d7e8c(in_stack_00000018,plVar16,0);
    } while( true );
  }
  goto LAB_033d73a8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar21 = piVar21 + 4;
    if (uVar11 == 0) break;
LAB_033d65a8:
    if (*(long *)(piVar21 + -2) == *plVar9) {
      puVar15 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d65dc;
    }
  }
LAB_033d65c0:
  puVar15 = (undefined8 *)FUN_01ecb238(plVar12,*plVar9,0);
LAB_033d65dc:
  (*(code *)*puVar15)(plVar12,puVar15[1]);
LAB_033d65e8:
  plVar12 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar12 == (long *)0x0) goto LAB_033d73a8;
  iVar8 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
  puVar15 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (0 < iVar8) {
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__);
    FUN_035ac8e8(lVar10,0);
    *(undefined1 *)(lVar10 + 0x10) = 0x30;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x18),0);
    plVar12 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      puVar5 = Method_System_IO_MemoryStream_EnsureNotClosed__;
      puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar20 = *plVar12;
        lVar19 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar11 != 0) {
          piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) {
              puVar15 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_033d66d4;
            }
            uVar11 = uVar11 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar11 != 0);
        }
        puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar19,0);
LAB_033d66d4:
        uVar11 = (*(code *)*puVar15)(plVar12,puVar15[1]);
        if ((uVar11 & 1) == 0) {
          plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*plVar9);
          if (plVar12 == (long *)0x0) goto LAB_033d6810;
          lVar19 = *plVar12;
          uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar11 == 0) goto LAB_033d67e8;
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_033d67d0;
        }
        lVar20 = *plVar12;
        lVar19 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar11 != 0) {
          piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar19) {
              puVar15 = (undefined8 *)(lVar20 + (long)(*piVar21 + 1) * 0x10 + 0x138);
              goto LAB_033d6734;
            }
            uVar11 = uVar11 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar11 != 0);
        }
        puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar19,1);
LAB_033d6734:
        plVar16 = (long *)(*(code *)*puVar15)(plVar12,puVar15[1]);
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
        uVar11 = FUN_0340e040(plVar16[2],*(undefined8 *)puVar5,0);
        if ((uVar11 & 1) != 0) {
          FUN_033ce1dc(lVar10,plVar16[3]);
        }
      } while( true );
    }
    goto LAB_033d73a8;
  }
  goto LAB_033d6880;
code_r0x033d6a10:
  if (plVar9[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = FUN_0340e040(plVar9[2],*(undefined8 *)puVar6,0);
  if ((uVar11 & 1) != 0) {
LAB_033d6a28:
    FUN_033ce1dc(plVar12,plVar9[3]);
  }
  goto LAB_033d690c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar21 = piVar21 + 4;
    if (uVar11 == 0) break;
LAB_033d6a74:
    if (*(long *)(piVar21 + -2) == *plVar9) {
      puVar15 = (undefined8 *)(lVar10 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6aa8;
    }
  }
LAB_033d6a8c:
  puVar15 = (undefined8 *)FUN_01ecb238(plVar16,*plVar9,0);
LAB_033d6aa8:
  (*(code *)*puVar15)(plVar16,puVar15[1]);
LAB_033d6ab4:
  puVar15 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (plVar12 == (long *)0x0) goto LAB_033d73a8;
  plVar16 = (long *)plVar12[4];
  if ((plVar16 != (long *)0x0) &&
     (iVar8 = (**(code **)(*plVar16 + 0x298))(plVar16,*(undefined8 *)(*plVar16 + 0x2a0)), 0 < iVar8)
     ) {
    lVar10 = thunk_FUN_01f117cc(*puVar15);
    FUN_035ac8e8(lVar10,0);
    *(undefined1 *)(lVar10 + 0x10) = 0xa0;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x18),0);
    uVar13 = (**(code **)(*plVar12 + 0x178))(plVar12,*(undefined8 *)(*plVar12 + 0x180));
    lVar19 = thunk_FUN_01f117cc(*puVar15);
    FUN_035ac8e8(lVar19,0);
    *(undefined1 *)(lVar19 + 0x10) = 4;
    *(undefined8 *)(lVar19 + 0x18) = uVar13;
    thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x18),uVar13);
    FUN_033ce1dc(lVar10,lVar19);
    lVar19 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                               );
    uVar13 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
    FUN_033cfef4();
    *(undefined8 *)(lVar19 + 0x10) = uVar13;
    thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x10),uVar13);
    *(long *)(lVar19 + 0x18) = lVar10;
    thunk_FUN_01f51358((long *)(lVar19 + 0x18),lVar10);
    uVar13 = FUN_033d01ac(lVar19);
    if (in_stack_00000008 == (long *)0x0) goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar13);
  }
  goto LAB_033d6bcc;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar21 = piVar21 + 4;
    if (uVar11 == 0) break;
LAB_033d6d98:
    if (*(long *)(piVar21 + -2) == *plVar9) {
      puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6dcc;
    }
  }
LAB_033d6db0:
  puVar15 = (undefined8 *)FUN_01ecb238(plVar12,*plVar9,0);
LAB_033d6dcc:
  (*(code *)*puVar15)(plVar12,puVar15[1]);
LAB_033d6dd8:
  puVar15 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar10 == 0) goto LAB_033d73a8;
  plVar9 = *(long **)(lVar10 + 0x20);
  if ((plVar9 == (long *)0x0) ||
     (iVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0)), iVar8 < 1))
  goto System_IO_FileSystemInfo__get_Exists;
  lVar10 = FUN_033d7b3c(in_stack_00000018,lVar10,
                        *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
  if ((lVar10 == 0) || (uVar13 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
  goto LAB_033d73a8;
  FUN_033ce1dc(in_stack_00000008,uVar13);
  goto LAB_033d6e78;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar21 = piVar21 + 4;
    if (uVar11 == 0) break;
LAB_033d67d0:
    if (*(long *)(piVar21 + -2) == *plVar9) {
      puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033d6804;
    }
  }
LAB_033d67e8:
  puVar15 = (undefined8 *)FUN_01ecb238(plVar12,*plVar9,0);
LAB_033d6804:
  (*(code *)*puVar15)(plVar12,puVar15[1]);
LAB_033d6810:
  puVar15 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar10 == 0) goto LAB_033d73a8;
  plVar12 = *(long **)(lVar10 + 0x20);
  if ((plVar12 != (long *)0x0) &&
     (iVar8 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0)), 0 < iVar8)
     ) {
    lVar10 = FUN_033d7b3c(in_stack_00000018,lVar10,
                          *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
    if ((lVar10 == 0) || (uVar13 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
    goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar13);
  }
LAB_033d6880:
  plVar12 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar12 != (long *)0x0) {
    iVar8 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    if (iVar8 < 1) {
LAB_033d6bcc:
      plVar12 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar12 != (long *)0x0) {
        iVar8 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
        if (iVar8 < 1) {
System_IO_FileSystemInfo__get_Exists:
          if (in_stack_00000008 != (long *)0x0) {
LAB_033d6e78:
            uVar13 = (**(code **)(*in_stack_00000008 + 0x178))
                               (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x180));
            lVar10 = thunk_FUN_01f117cc(*puVar15);
            FUN_035ac8e8(lVar10,0);
            *(undefined1 *)(lVar10 + 0x10) = 4;
            *(undefined8 *)(lVar10 + 0x18) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x18),uVar13);
            lVar19 = thunk_FUN_01f117cc(*puVar15);
            FUN_035ac8e8(lVar19,0);
            *(undefined1 *)(lVar19 + 0x10) = 0xa0;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x18),0);
            FUN_033ce1dc(lVar19,lVar10);
            lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                                       );
            uVar13 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
            FUN_033cfef4();
            *(undefined8 *)(lVar10 + 0x10) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x10),uVar13);
            plVar9 = (long *)(lVar10 + 0x18);
            *plVar9 = lVar19;
            thunk_FUN_01f51358(plVar9,lVar19);
            lVar19 = thunk_FUN_01f117cc(*puVar15);
            FUN_035ac8e8(lVar19,0);
            *(undefined1 *)(lVar19 + 0x10) = 0x30;
            *(undefined8 *)(lVar19 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar19 + 0x18),0);
            if (*(long *)(in_stack_00000018 + 0x10) != 0) {
              uVar13 = FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                    ,0x14);
              plVar12 = (long *)FUN_033d3720(in_stack_00000018);
              if (plVar12 == (long *)0x0) goto LAB_033d73a8;
              (**(code **)(*plVar12 + 0x198))(plVar12,uVar13,*(undefined8 *)(*plVar12 + 0x1a0));
              if (*plVar9 == 0) goto LAB_033d73a8;
              uVar14 = *(undefined8 *)(in_stack_00000018 + 0x10);
              uVar1 = *(undefined4 *)(in_stack_00000018 + 0x34);
              lVar20 = FUN_033cea34(*plVar9,0);
              if (lVar20 == 0) goto LAB_033d73a8;
              uVar17 = FUN_033cdff8();
              uVar14 = FUN_033d201c(uVar17,uVar14,uVar13,uVar1,uVar17);
              lVar20 = thunk_FUN_01f117cc(*puVar15);
              FUN_035ac8e8(lVar20,0);
              *(undefined1 *)(lVar20 + 0x10) = 0x30;
              *(undefined8 *)(lVar20 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar20 + 0x18),0);
              uVar17 = FUN_033cf0dc(*(undefined8 *)
                                     Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__
                                   );
              FUN_033ce1dc(lVar20,uVar17);
              lVar18 = thunk_FUN_01f117cc(*puVar15);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 5;
              *(undefined8 *)(lVar18 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),0);
              FUN_033ce1dc(lVar20,lVar18);
              lVar18 = thunk_FUN_01f117cc(*puVar15);
              FUN_035ac8e8(lVar18,0);
              *(undefined1 *)(lVar18 + 0x10) = 0x30;
              *(undefined8 *)(lVar18 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar18 + 0x18),0);
              FUN_033ce1dc(lVar18,lVar20);
              lVar20 = thunk_FUN_01f117cc(*puVar15);
              FUN_035ac8e8(lVar20,0);
              *(undefined1 *)(lVar20 + 0x10) = 4;
              *(undefined8 *)(lVar20 + 0x18) = uVar14;
              thunk_FUN_01f51358((undefined8 *)(lVar20 + 0x18),uVar14);
              FUN_033ce1dc(lVar18,lVar20);
              FUN_033ce1dc(lVar19,lVar18);
              lVar20 = thunk_FUN_01f117cc(*puVar15);
              FUN_035ac8e8(lVar20,0);
              *(undefined1 *)(lVar20 + 0x10) = 4;
              *(undefined8 *)(lVar20 + 0x18) = uVar13;
              thunk_FUN_01f51358((undefined8 *)(lVar20 + 0x18),uVar13);
              FUN_033ce1dc(lVar19,lVar20);
              uVar13 = FUN_033cef4c(*(undefined4 *)(in_stack_00000018 + 0x34));
              FUN_033ce1dc(lVar19,uVar13);
            }
            lVar20 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,1);
            if (lVar20 != 0) {
              if (*(int *)(lVar20 + 0x18) != 0) {
                *(undefined1 *)(lVar20 + 0x20) = 3;
                lVar18 = thunk_FUN_01f117cc(*puVar15);
                FUN_035ac8e8(lVar18,0);
                *(undefined1 *)(lVar18 + 0x10) = 2;
                *(long *)(lVar18 + 0x18) = lVar20;
                thunk_FUN_01f51358((long *)(lVar18 + 0x18),lVar20);
                plVar9 = (long *)thunk_FUN_01f117cc(*puVar15);
                FUN_035ac8e8(plVar9,0);
                *(undefined1 *)(plVar9 + 2) = 0x30;
                plVar9[3] = 0;
                thunk_FUN_01f51358(plVar9 + 3,0);
                FUN_033ce1dc(plVar9,lVar18);
                uVar13 = FUN_033d01ac(lVar10);
                FUN_033ce1dc(plVar9,uVar13);
                plVar12 = *(long **)(lVar19 + 0x20);
                if ((plVar12 != (long *)0x0) &&
                   (iVar8 = (**(code **)(*plVar12 + 0x298))
                                      (plVar12,*(undefined8 *)(*plVar12 + 0x2a0)), 0 < iVar8)) {
                  FUN_033ce1dc(plVar9,lVar19);
                }
                    /* WARNING: Could not recover jumptable at 0x033d721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
          }
        }
        else {
          lVar10 = thunk_FUN_01f117cc(*puVar15);
          FUN_035ac8e8(lVar10,0);
          *(undefined1 *)(lVar10 + 0x10) = 0x30;
          *(undefined8 *)(lVar10 + 0x18) = 0;
          thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x18),0);
          plVar12 = *(long **)(in_stack_00000018 + 0x38);
          if (plVar12 != (long *)0x0) {
            plVar12 = (long *)(**(code **)(*plVar12 + 0x388))
                                        (plVar12,*(undefined8 *)(*plVar12 + 0x390));
            puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__;
            puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
            puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar20 = *plVar12;
              lVar19 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar11 != 0) {
                piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar19) {
                    puVar15 = (undefined8 *)(lVar20 + (long)*piVar21 * 0x10 + 0x138);
                    goto LAB_033d6c9c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar11 != 0);
              }
              puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar19,0);
LAB_033d6c9c:
              uVar11 = (*(code *)*puVar15)(plVar12,puVar15[1]);
              if ((uVar11 & 1) == 0) {
                plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*plVar9);
                if (plVar12 == (long *)0x0) goto LAB_033d6dd8;
                lVar19 = *plVar12;
                uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar11 == 0) goto LAB_033d6db0;
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                goto LAB_033d6d98;
              }
              lVar20 = *plVar12;
              lVar19 = *(long *)puVar3;
              uVar11 = (ulong)*(ushort *)(lVar20 + 0x12e);
              if (uVar11 != 0) {
                piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == lVar19) {
                    puVar15 = (undefined8 *)(lVar20 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                    goto LAB_033d6cfc;
                  }
                  uVar11 = uVar11 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar11 != 0);
              }
              puVar15 = (undefined8 *)FUN_01ecb238(plVar12,lVar19,1);
LAB_033d6cfc:
              plVar16 = (long *)(*(code *)*puVar15)(plVar12,puVar15[1]);
              if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
              if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4))
              {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar16);
              }
              if (plVar16[2] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar11 = FUN_0340e040(plVar16[2],*(undefined8 *)puVar5,0);
              if ((uVar11 & 1) != 0) {
                FUN_033ce1dc(lVar10,plVar16[3]);
              }
            } while( true );
          }
        }
      }
    }
    else {
      plVar12 = (long *)thunk_FUN_01f117cc(*puVar15);
      FUN_035ac8e8(plVar12,0);
      *(undefined1 *)(plVar12 + 2) = 0x30;
      plVar12[3] = 0;
      thunk_FUN_01f51358(plVar12 + 3,0);
      plVar9 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar9 != (long *)0x0) {
        plVar16 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
        puVar6 = Method_System_IO_MemoryStream__ctor__;
        puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<char>__;
        puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_033d690c:
        lVar19 = *plVar16;
        lVar10 = *(long *)puVar3;
        uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar11 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == lVar10) {
              puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
              goto LAB_033d6958;
            }
            uVar11 = uVar11 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar11 != 0);
        }
        puVar15 = (undefined8 *)FUN_01ecb238(plVar16,lVar10,0);
LAB_033d6958:
        uVar11 = (*(code *)*puVar15)(plVar16,puVar15[1]);
        plVar9 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar11 & 1) != 0) {
          lVar19 = *plVar16;
          lVar10 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar11 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar10) {
                puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_033d69b8;
              }
              uVar11 = uVar11 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar11 != 0);
          }
          puVar15 = (undefined8 *)FUN_01ecb238(plVar16,lVar10,1);
LAB_033d69b8:
          plVar9 = (long *)(*(code *)*puVar15)(plVar16,puVar15[1]);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar9 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar9);
          }
          if (plVar9[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = FUN_0340e040(plVar9[2],*(undefined8 *)puVar5,0);
          if ((uVar11 & 1) == 0) goto code_r0x033d6a10;
          goto LAB_033d6a28;
        }
        plVar16 = (long *)thunk_FUN_01f116d0(plVar16,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar16 == (long *)0x0) goto LAB_033d6ab4;
        lVar10 = *plVar16;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_033d6a8c;
        piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_033d6a74;
      }
    }
  }
LAB_033d73a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


