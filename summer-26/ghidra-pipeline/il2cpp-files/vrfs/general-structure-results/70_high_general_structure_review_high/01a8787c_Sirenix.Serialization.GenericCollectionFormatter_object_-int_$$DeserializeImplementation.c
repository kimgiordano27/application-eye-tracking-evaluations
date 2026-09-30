/*
FUNCTION_NAME: Sirenix.Serialization.GenericCollectionFormatter<object,-int>$$DeserializeImplementation
ENTRY_POINT: 01a8787c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01a87ce0) */
/* WARNING: Removing unreachable block (ram,0x01a880ac) */
/* WARNING: Removing unreachable block (ram,0x01a88078) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Sirenix_Serialization_GenericCollectionFormatter<object,_int>__DeserializeImplementation(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *unaff_x19;
  long unaff_x20;
  long lVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  thunk_FUN_0159f088(PTR_DAT_06dd2198);
  thunk_FUN_0159f088(PTR_DAT_06d9fd48);
  thunk_FUN_0159f088(PTR_DAT_06dc3e20);
  thunk_FUN_0159f088(PTR_DAT_06e0a150);
  thunk_FUN_0159f088(PTR_DAT_06dddcc0);
  thunk_FUN_0159f088(PTR_DAT_06de8c18);
  *(undefined1 *)(unaff_x20 + 0x6ef) = 1;
  cStack0000000000000024 = '\0';
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iStack000000000000000c = *unaff_x19;
  lVar16 = *(long *)(unaff_x19 + 8);
  if (iStack000000000000000c == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x14);
    unaff_x19[0x14] = 0;
    unaff_x19[0x15] = 0;
    unaff_x19[0x16] = 0;
    unaff_x19[0x17] = 0;
    iStack000000000000000c = -1;
    *unaff_x19 = -1;
    goto LAB_01a87d44;
  }
  if (*(int *)(*(long *)PTR_DAT_06e56f18 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_028be62c(0);
  if (*(int *)(*(long *)PTR_DAT_06d9fd48 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar7 = FUN_031d12f4(_UNK_0536a330,0);
  uVar6 = FUN_028bfa64(uVar6,uVar7,0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  *(undefined8 *)(lVar16 + 0x50) = uVar6;
  do {
    lVar8 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06df29b8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_043c1bd8(lVar8,*(undefined8 *)PTR_DAT_06dfc1d0);
    plVar17 = (long *)(unaff_x19 + 0xe);
    *plVar17 = lVar8;
    thunk_FUN_01656ef8(plVar17,lVar8);
    *(undefined1 *)(unaff_x19 + 0x12) = 0;
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar6 = *(undefined8 *)(lVar16 + 0x10);
    cStack0000000000000024 = '\0';
    FUN_03714a74(uVar6,&stack0x00000024,0);
    FUN_01a855e8(lVar16);
    if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar8 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06dc3e20,
                         *(undefined4 *)(*(long *)(lVar16 + 0x38) + 0x18));
    plVar20 = (long *)(unaff_x19 + 10);
    *plVar20 = lVar8;
    thunk_FUN_01656ef8(plVar20);
    if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_051820bc(*(long *)(lVar16 + 0x38),*plVar20,0,*(undefined8 *)PTR_DAT_06dc1f88);
    if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    lVar8 = FUN_0160edfc(*(undefined8 *)PTR_DAT_06e0a150,
                         *(undefined4 *)(*(long *)(lVar16 + 0x40) + 0x18));
    plVar19 = (long *)(unaff_x19 + 0xc);
    *plVar19 = lVar8;
    thunk_FUN_01656ef8(plVar19);
    if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_0518367c(*(long *)(lVar16 + 0x40),*plVar19,0,*(undefined8 *)PTR_DAT_06df60d8);
    if (*(long *)(lVar16 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar7 = FUN_01a8761c(*(long *)(lVar16 + 0x20),*(undefined4 *)(lVar16 + 0x1c));
    piVar21 = unaff_x19 + 0x10;
    *(undefined8 *)piVar21 = uVar7;
    thunk_FUN_01656ef8(piVar21);
    puVar3 = PTR_DAT_06e555a0;
    lVar8 = *plVar17;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar7 = *(undefined8 *)piVar21;
    lVar10 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)PTR_DAT_06e555a0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar22 = *(uint *)(lVar8 + 0x18);
    if (uVar22 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar22 + 1;
      puVar11 = (undefined8 *)(lVar10 + (long)(int)uVar22 * 8 + 0x20);
      *puVar11 = uVar7;
      thunk_FUN_01656ef8(puVar11);
    }
    else {
      (**(code **)(*(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x58) + 8))();
    }
    if (*(long *)(lVar16 + 0x30) == 0) {
      if (*(long *)(lVar16 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar9 = FUN_01a857c8();
      if ((uVar9 & 1) == 0) goto LAB_01a87b58;
      if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(*(long *)(lVar16 + 0x38) + 0x18) != 0) goto LAB_01a87b58;
      if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(*(long *)(lVar16 + 0x40) + 0x18) != 0) goto LAB_01a87b58;
      if (*(int *)(*(long *)PTR_DAT_06e56f18 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar7 = FUN_028be62c(0);
      *(undefined8 *)(lVar16 + 0x50) = uVar7;
      *(undefined1 *)(unaff_x19 + 0x12) = 1;
    }
    else {
LAB_01a87b58:
      puVar2 = PTR_DAT_06de8c18;
      lVar8 = *plVar20;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar22 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar22) {
        uVar23 = 0;
        do {
          if (uVar22 <= uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          lVar10 = *(long *)(lVar8 + (long)(int)uVar23 * 0x10 + 0x28);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar10 = *(long *)(lVar10 + 0x58);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar14 = *plVar17;
          uVar7 = FUN_03499e5c(lVar10,*(undefined8 *)puVar2);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          lVar10 = *(long *)(lVar14 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar22 = *(uint *)(lVar14 + 0x18);
          if (uVar22 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar22 + 1;
            *(undefined8 *)(lVar10 + (long)(int)uVar22 * 8 + 0x20) = uVar7;
            thunk_FUN_01656ef8();
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))(lVar14);
          }
          uVar22 = *(uint *)(lVar8 + 0x18);
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (int)uVar22);
      }
      lVar8 = *plVar19;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar9 = 0;
        uVar12 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        puVar11 = (undefined8 *)(lVar8 + 0x30);
        do {
          if (uVar12 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          lVar10 = *plVar17;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar7 = *puVar11;
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar22 = *(uint *)(lVar10 + 0x18);
          if (uVar22 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar22 + 1;
            puVar13 = (undefined8 *)(lVar14 + (long)(int)uVar22 * 8 + 0x20);
            *puVar13 = uVar7;
            thunk_FUN_01656ef8(puVar13);
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x58) + 8))();
          }
          uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar9 = uVar9 + 1;
          puVar11 = puVar11 + 3;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
    }
    if ((iStack000000000000000c < 0) && (cStack0000000000000024 != '\0')) {
      thunk_FUN_0160f328(uVar6,0);
    }
    lVar8 = *plVar17;
    if (*(int *)(*(long *)PTR_DAT_06dd2198 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    lVar8 = FUN_036a1aa4(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    auVar24 = FUN_026f6e84(lVar8,0,*(undefined8 *)PTR_DAT_06dbb418);
    _in_stack_00000010 = auVar24;
    uVar9 = FUN_04d808d0(&stack0x00000010,*(undefined8 *)PTR_DAT_06daeb18);
    if ((uVar9 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x14) = _in_stack_00000010;
      thunk_FUN_01656ef8((undefined1 (*) [16])(unaff_x19 + 0x14),0);
      FUN_029dce10(unaff_x19 + 2,&stack0x00000010);
      return;
    }
LAB_01a87d44:
    lVar8 = System_Collections_Generic_Dictionary_KeyCollection<Scene,_object>__System_Collections_Generic_ICollection<TKey>_Contains
                      (&stack0x00000010,*(undefined8 *)PTR_DAT_06d9a978);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar6 = *(undefined8 *)(lVar16 + 0x10);
    cStack0000000000000024 = '\0';
    FUN_03714a74(uVar6,&stack0x00000024,0);
    puVar3 = PTR_DAT_06dec590;
    if ((char)unaff_x19[0x12] == '\0') {
      if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar10 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                         (*(long *)(unaff_x19 + 0xe),0,*(undefined8 *)PTR_DAT_06dec590);
      bVar4 = lVar8 == lVar10;
LAB_01a87dc8:
      puVar2 = PTR_DAT_06e1c378;
      lVar10 = *(long *)(unaff_x19 + 10);
      if (lVar10 == 0) {
LAB_01a87e50:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar14 = 0;
      uVar22 = 0;
      while ((int)uVar22 < (int)*(uint *)(lVar10 + 0x18)) {
        if (*(uint *)(lVar10 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        lVar15 = *(long *)(lVar10 + lVar14 + 0x28);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(lVar15 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(*(long *)(lVar15 + 0x58) + 0x18) != 0) {
          if (*(long *)(lVar16 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar7 = *(undefined8 *)(lVar10 + lVar14 + 0x20);
          FUN_051823dc(*(long *)(lVar16 + 0x38),uVar7,lVar15,*(undefined8 *)puVar2);
          bVar5 = UnityEngine_UIElements_UIR_Utility_GPUBuffer<Vertex>__Dispose(lVar16,uVar7,lVar15)
          ;
          lVar10 = *(long *)(unaff_x19 + 10);
          bVar4 = bVar4 | bVar5;
        }
        uVar22 = uVar22 + 1;
        lVar14 = lVar14 + 0x10;
        if (lVar10 == 0) goto LAB_01a87e50;
      }
      if ((bVar4 & 1) != 0) {
        FUN_01a8583c(lVar16);
      }
      lVar10 = 0;
      uVar22 = 0xffffffff;
      do {
        if (*(long *)(unaff_x19 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(int *)(*(long *)(unaff_x19 + 0xc) + 0x18) <= (int)(uVar22 + 1)) goto LAB_01a87f08;
        if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(unaff_x19 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        lVar14 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                           (*(long *)(unaff_x19 + 0xe),
                            uVar22 + *(int *)(*(long *)(unaff_x19 + 10) + 0x18) + 2,
                            *(undefined8 *)puVar3);
        lVar10 = lVar10 + 0x18;
        uVar22 = uVar22 + 1;
      } while (lVar8 != lVar14);
      lVar8 = *(long *)(unaff_x19 + 0xc);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (*(long *)(lVar16 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar8 = lVar8 + lVar10;
      uVar7 = *(undefined8 *)(lVar8 + 8);
      uVar1 = *(undefined8 *)(lVar8 + 0x10);
      in_stack_00000038 = *(undefined8 *)(lVar8 + 0x18);
      in_stack_00000028 = uVar7;
      in_stack_00000030 = uVar1;
      FUN_05183a1c(*(long *)(lVar16 + 0x40),&stack0x00000028,*(undefined8 *)PTR_DAT_06e2f660);
      FUN_01a862f4(lVar16,uVar7,uVar1);
LAB_01a87f08:
      iVar18 = 0x1a;
    }
    else {
      if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar9 = FUN_026f031c(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_06e38ec8);
      if ((uVar9 & 1) != 0) {
        bVar4 = true;
        goto LAB_01a87dc8;
      }
      FUN_01a864e8(lVar16);
      iVar18 = 0x10;
    }
    if ((iStack000000000000000c < 0) && (cStack0000000000000024 != '\0')) {
      thunk_FUN_0160f328(uVar6,0);
    }
    if ((iVar18 != 0) && (iVar18 != 0x1a)) {
      if (iVar18 == 0x10) {
        *unaff_x19 = -2;
        FUN_02df55e4(unaff_x19 + 2,0);
      }
      return;
    }
    piVar21 = unaff_x19 + 10;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_01656ef8(piVar21,0);
    piVar21 = unaff_x19 + 0xc;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_01656ef8(piVar21,0);
    piVar21 = unaff_x19 + 0xe;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_01656ef8(piVar21,0);
    piVar21 = unaff_x19 + 0x10;
    piVar21[0] = 0;
    piVar21[1] = 0;
    thunk_FUN_01656ef8(piVar21,0);
  } while( true );
}


