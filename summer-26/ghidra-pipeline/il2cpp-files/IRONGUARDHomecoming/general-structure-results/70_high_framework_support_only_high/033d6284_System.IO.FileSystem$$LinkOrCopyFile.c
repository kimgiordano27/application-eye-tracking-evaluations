/*
FUNCTION_NAME: System.IO.FileSystem$$LinkOrCopyFile
ENTRY_POINT: 033d6284
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ordered_structure
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033d6de4) */
/* WARNING: Removing unreachable block (ram,0x033d65f4) */
/* WARNING: Removing unreachable block (ram,0x033d73d0) */
/* WARNING: Removing unreachable block (ram,0x033d6ac0) */
/* WARNING: Removing unreachable block (ram,0x033d643c) */
/* WARNING: Removing unreachable block (ram,0x033d681c) */
/* WARNING: Removing unreachable block (ram,0x033d73e8) */

void System_IO_FileSystem__LinkOrCopyFile(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool in_ZR;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *unaff_x21;
  undefined8 uVar20;
  long *unaff_x25;
  long *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000018;
  
  if (!in_ZR) {
    return;
  }
  if (in_stack_00000010 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*in_stack_00000010 + 0x388))
                               (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 0x390));
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar16 = *plVar8;
      lVar15 = *(long *)puVar3;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033d6308;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar15,0);
LAB_033d6308:
      uVar18 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar18 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*unaff_x25);
        if (plVar8 == (long *)0x0) goto LAB_033d6430;
        lVar15 = *plVar8;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 == 0) goto LAB_033d6408;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_033d63f0;
      }
      lVar16 = *plVar8;
      lVar15 = *(long *)puVar3;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033d6368;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar15,1);
LAB_033d6368:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
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
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033d63f0:
    if (*(long *)(piVar19 + -2) == *unaff_x25) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033d6424;
    }
  }
LAB_033d6408:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x25,0);
LAB_033d6424:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_033d6430:
  if (unaff_x21 != (long *)0x0) {
    plVar8 = (long *)(**(code **)(*unaff_x21 + 0x388))();
    puVar4 = Method_Sirenix_Utilities_MemberInfoExtensions_GetAttributes<Attribute>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar16 = *plVar8;
      lVar15 = *(long *)puVar3;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_033d64c0;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar15,0);
LAB_033d64c0:
      uVar18 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar18 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*unaff_x25);
        if (plVar8 == (long *)0x0) goto LAB_033d65e8;
        lVar15 = *plVar8;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 == 0) goto LAB_033d65c0;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_033d65a8;
      }
      lVar16 = *plVar8;
      lVar15 = *(long *)puVar3;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar15) {
            puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_033d6520;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar15,1);
LAB_033d6520:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
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
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033d65a8:
    if (*(long *)(piVar19 + -2) == *unaff_x25) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033d65dc;
    }
  }
LAB_033d65c0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x25,0);
LAB_033d65dc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_033d65e8:
  plVar8 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar8 == (long *)0x0) goto LAB_033d73a8;
  iVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (0 < iVar7) {
    lVar15 = thunk_FUN_01f117cc(*(undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__);
    FUN_035ac8e8(lVar15,0);
    *(undefined1 *)(lVar15 + 0x10) = 0x30;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),0);
    plVar8 = *(long **)(in_stack_00000018 + 0x38);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
      puVar5 = Method_System_IO_MemoryStream_EnsureNotClosed__;
      puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar17 = *plVar8;
        lVar16 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar16) {
              puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_033d66d4;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar16,0);
LAB_033d66d4:
        uVar18 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar18 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*unaff_x25);
          if (plVar8 == (long *)0x0) goto LAB_033d6810;
          lVar16 = *plVar8;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 == 0) goto LAB_033d67e8;
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          goto LAB_033d67d0;
        }
        lVar17 = *plVar8;
        lVar16 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar16) {
              puVar9 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_033d6734;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar16,1);
LAB_033d6734:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
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
        uVar18 = FUN_0340e040(plVar10[2],*(undefined8 *)puVar5,0);
        if ((uVar18 & 1) != 0) {
          FUN_033ce1dc(lVar15,plVar10[3]);
        }
      } while( true );
    }
    goto LAB_033d73a8;
  }
  goto LAB_033d6880;
code_r0x033d6a10:
  if (plVar12[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar18 = FUN_0340e040(plVar12[2],*(undefined8 *)puVar6,0);
  if ((uVar18 & 1) != 0) {
LAB_033d6a28:
    FUN_033ce1dc(plVar8,plVar12[3]);
  }
  goto LAB_033d690c;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033d6a74:
    if (*(long *)(piVar19 + -2) == *unaff_x25) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033d6aa8;
    }
  }
LAB_033d6a8c:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x25,0);
LAB_033d6aa8:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_033d6ab4:
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (plVar8 == (long *)0x0) goto LAB_033d73a8;
  plVar10 = (long *)plVar8[4];
  if ((plVar10 != (long *)0x0) &&
     (iVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0)), 0 < iVar7)
     ) {
    lVar15 = thunk_FUN_01f117cc(*puVar9);
    FUN_035ac8e8(lVar15,0);
    *(undefined1 *)(lVar15 + 0x10) = 0xa0;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),0);
    uVar11 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    lVar16 = thunk_FUN_01f117cc(*puVar9);
    FUN_035ac8e8(lVar16,0);
    *(undefined1 *)(lVar16 + 0x10) = 4;
    *(undefined8 *)(lVar16 + 0x18) = uVar11;
    thunk_FUN_01f51358((undefined8 *)(lVar16 + 0x18),uVar11);
    FUN_033ce1dc(lVar15,lVar16);
    lVar16 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                               );
    uVar11 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
    FUN_033cfef4();
    *(undefined8 *)(lVar16 + 0x10) = uVar11;
    thunk_FUN_01f51358((undefined8 *)(lVar16 + 0x10),uVar11);
    *(long *)(lVar16 + 0x18) = lVar15;
    thunk_FUN_01f51358((long *)(lVar16 + 0x18),lVar15);
    uVar11 = FUN_033d01ac(lVar16);
    if (in_stack_00000008 == (long *)0x0) goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar11);
  }
  goto LAB_033d6bcc;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033d6d98:
    if (*(long *)(piVar19 + -2) == *unaff_x25) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033d6dcc;
    }
  }
LAB_033d6db0:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x25,0);
LAB_033d6dcc:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_033d6dd8:
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar15 == 0) goto LAB_033d73a8;
  plVar8 = *(long **)(lVar15 + 0x20);
  if ((plVar8 == (long *)0x0) ||
     (iVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0)), iVar7 < 1))
  goto System_IO_FileSystemInfo__get_Exists;
  lVar15 = FUN_033d7b3c(in_stack_00000018,lVar15,
                        *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
  if ((lVar15 == 0) || (uVar11 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
  goto LAB_033d73a8;
  FUN_033ce1dc(in_stack_00000008,uVar11);
  goto LAB_033d6e78;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_033d67d0:
    if (*(long *)(piVar19 + -2) == *unaff_x25) {
      puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_033d6804;
    }
  }
LAB_033d67e8:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*unaff_x25,0);
LAB_033d6804:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_033d6810:
  puVar9 = (undefined8 *)Method_UnityEngine_Matrix4x4_set_Item__;
  if (lVar15 == 0) goto LAB_033d73a8;
  plVar8 = *(long **)(lVar15 + 0x20);
  if ((plVar8 != (long *)0x0) &&
     (iVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0)), 0 < iVar7)) {
    lVar15 = FUN_033d7b3c(in_stack_00000018,lVar15,
                          *(undefined8 *)Method_Unity_VisualScripting_MergeDictionaries_Merge__);
    if ((lVar15 == 0) || (uVar11 = FUN_033d01ac(), in_stack_00000008 == (long *)0x0))
    goto LAB_033d73a8;
    FUN_033ce1dc(in_stack_00000008,uVar11);
  }
LAB_033d6880:
  plVar8 = *(long **)(in_stack_00000018 + 0x38);
  if (plVar8 != (long *)0x0) {
    iVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
    if (iVar7 < 1) {
LAB_033d6bcc:
      plVar8 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar8 != (long *)0x0) {
        iVar7 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
        if (iVar7 < 1) {
System_IO_FileSystemInfo__get_Exists:
          if (in_stack_00000008 != (long *)0x0) {
LAB_033d6e78:
            uVar11 = (**(code **)(*in_stack_00000008 + 0x178))
                               (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x180));
            lVar15 = thunk_FUN_01f117cc(*puVar9);
            FUN_035ac8e8(lVar15,0);
            *(undefined1 *)(lVar15 + 0x10) = 4;
            *(undefined8 *)(lVar15 + 0x18) = uVar11;
            thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),uVar11);
            lVar16 = thunk_FUN_01f117cc(*puVar9);
            FUN_035ac8e8(lVar16,0);
            *(undefined1 *)(lVar16 + 0x10) = 0xa0;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar16 + 0x18),0);
            FUN_033ce1dc(lVar16,lVar15);
            lVar15 = thunk_FUN_01f117cc(*(undefined8 *)
                                         Method_Sirenix_Serialization_Utilities_MemberInfoExtensions_IsDefined<FixedBufferAttribute>__
                                       );
            uVar11 = *(undefined8 *)Method_System_MemoryExtensions_IndexOfAny<char>__;
            FUN_033cfef4();
            *(undefined8 *)(lVar15 + 0x10) = uVar11;
            thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x10),uVar11);
            plVar8 = (long *)(lVar15 + 0x18);
            *plVar8 = lVar16;
            thunk_FUN_01f51358(plVar8,lVar16);
            lVar16 = thunk_FUN_01f117cc(*puVar9);
            FUN_035ac8e8(lVar16,0);
            *(undefined1 *)(lVar16 + 0x10) = 0x30;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            thunk_FUN_01f51358((undefined8 *)(lVar16 + 0x18),0);
            if (*(long *)(in_stack_00000018 + 0x10) != 0) {
              uVar11 = FUN_01f08890(*(undefined8 *)
                                     Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                    ,0x14);
              plVar10 = (long *)FUN_033d3720(in_stack_00000018);
              if (plVar10 == (long *)0x0) goto LAB_033d73a8;
              (**(code **)(*plVar10 + 0x198))(plVar10,uVar11,*(undefined8 *)(*plVar10 + 0x1a0));
              if (*plVar8 == 0) goto LAB_033d73a8;
              uVar20 = *(undefined8 *)(in_stack_00000018 + 0x10);
              uVar1 = *(undefined4 *)(in_stack_00000018 + 0x34);
              lVar17 = FUN_033cea34(*plVar8,0);
              if (lVar17 == 0) goto LAB_033d73a8;
              uVar13 = FUN_033cdff8();
              uVar20 = FUN_033d201c(uVar13,uVar20,uVar11,uVar1,uVar13);
              lVar17 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar17,0);
              *(undefined1 *)(lVar17 + 0x10) = 0x30;
              *(undefined8 *)(lVar17 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),0);
              uVar13 = FUN_033cf0dc(*(undefined8 *)
                                     Method_Unity_VisualScripting_MemberUtility_DisambiguateHierarchy<FieldInfo>__
                                   );
              FUN_033ce1dc(lVar17,uVar13);
              lVar14 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 5;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x18),0);
              FUN_033ce1dc(lVar17,lVar14);
              lVar14 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 0x30;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x18),0);
              FUN_033ce1dc(lVar14,lVar17);
              lVar17 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar17,0);
              *(undefined1 *)(lVar17 + 0x10) = 4;
              *(undefined8 *)(lVar17 + 0x18) = uVar20;
              thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),uVar20);
              FUN_033ce1dc(lVar14,lVar17);
              FUN_033ce1dc(lVar16,lVar14);
              lVar17 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar17,0);
              *(undefined1 *)(lVar17 + 0x10) = 4;
              *(undefined8 *)(lVar17 + 0x18) = uVar11;
              thunk_FUN_01f51358((undefined8 *)(lVar17 + 0x18),uVar11);
              FUN_033ce1dc(lVar16,lVar17);
              uVar11 = FUN_033cef4c(*(undefined4 *)(in_stack_00000018 + 0x34));
              FUN_033ce1dc(lVar16,uVar11);
            }
            lVar17 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,1);
            if (lVar17 != 0) {
              if (*(int *)(lVar17 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(undefined1 *)(lVar17 + 0x20) = 3;
              lVar14 = thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(lVar14,0);
              *(undefined1 *)(lVar14 + 0x10) = 2;
              *(long *)(lVar14 + 0x18) = lVar17;
              thunk_FUN_01f51358((long *)(lVar14 + 0x18),lVar17);
              plVar8 = (long *)thunk_FUN_01f117cc(*puVar9);
              FUN_035ac8e8(plVar8,0);
              *(undefined1 *)(plVar8 + 2) = 0x30;
              plVar8[3] = 0;
              thunk_FUN_01f51358(plVar8 + 3,0);
              FUN_033ce1dc(plVar8,lVar14);
              uVar11 = FUN_033d01ac(lVar15);
              FUN_033ce1dc(plVar8,uVar11);
              plVar10 = *(long **)(lVar16 + 0x20);
              if ((plVar10 != (long *)0x0) &&
                 (iVar7 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0))
                 , 0 < iVar7)) {
                FUN_033ce1dc(plVar8,lVar16);
              }
                    /* WARNING: Could not recover jumptable at 0x033d721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
              return;
            }
          }
        }
        else {
          lVar15 = thunk_FUN_01f117cc(*puVar9);
          FUN_035ac8e8(lVar15,0);
          *(undefined1 *)(lVar15 + 0x10) = 0x30;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          thunk_FUN_01f51358((undefined8 *)(lVar15 + 0x18),0);
          plVar8 = *(long **)(in_stack_00000018 + 0x38);
          if (plVar8 != (long *)0x0) {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390))
            ;
            puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__;
            puVar4 = Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__;
            puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar17 = *plVar8;
              lVar16 = *(long *)puVar3;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == lVar16) {
                    puVar9 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_033d6c9c;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar16,0);
LAB_033d6c9c:
              uVar18 = (*(code *)*puVar9)(plVar8,puVar9[1]);
              if ((uVar18 & 1) == 0) {
                plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*unaff_x25);
                if (plVar8 == (long *)0x0) goto LAB_033d6dd8;
                lVar16 = *plVar8;
                uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar18 == 0) goto LAB_033d6db0;
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                goto LAB_033d6d98;
              }
              lVar17 = *plVar8;
              lVar16 = *(long *)puVar3;
              uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
              if (uVar18 != 0) {
                piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == lVar16) {
                    puVar9 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                    goto LAB_033d6cfc;
                  }
                  uVar18 = uVar18 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar18 != 0);
              }
              puVar9 = (undefined8 *)FUN_01ecb238(plVar8,lVar16,1);
LAB_033d6cfc:
              plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
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
              uVar18 = FUN_0340e040(plVar10[2],*(undefined8 *)puVar5,0);
              if ((uVar18 & 1) != 0) {
                FUN_033ce1dc(lVar15,plVar10[3]);
              }
            } while( true );
          }
        }
      }
    }
    else {
      plVar8 = (long *)thunk_FUN_01f117cc(*puVar9);
      FUN_035ac8e8(plVar8,0);
      *(undefined1 *)(plVar8 + 2) = 0x30;
      plVar8[3] = 0;
      thunk_FUN_01f51358(plVar8 + 3,0);
      plVar10 = *(long **)(in_stack_00000018 + 0x38);
      if (plVar10 != (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar10 + 0x388))(plVar10,*(undefined8 *)(*plVar10 + 0x390))
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
        lVar16 = *plVar10;
        lVar15 = *(long *)puVar3;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar15) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_033d6958;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar15,0);
LAB_033d6958:
        uVar18 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        unaff_x25 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
        ;
        if ((uVar18 & 1) != 0) {
          lVar16 = *plVar10;
          lVar15 = *(long *)puVar3;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == lVar15) {
                puVar9 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                goto LAB_033d69b8;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ecb238(plVar10,lVar15,1);
LAB_033d69b8:
          plVar12 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar12);
          }
          if (plVar12[2] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar18 = FUN_0340e040(plVar12[2],*(undefined8 *)puVar5,0);
          if ((uVar18 & 1) == 0) goto code_r0x033d6a10;
          goto LAB_033d6a28;
        }
        plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar10 == (long *)0x0) goto LAB_033d6ab4;
        lVar15 = *plVar10;
        uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar18 == 0) goto LAB_033d6a8c;
        piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_033d6a74;
      }
    }
  }
LAB_033d73a8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


