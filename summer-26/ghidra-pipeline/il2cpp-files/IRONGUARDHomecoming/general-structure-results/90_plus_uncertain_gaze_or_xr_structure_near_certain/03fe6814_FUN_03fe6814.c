/*
FUNCTION_NAME: FUN_03fe6814
ENTRY_POINT: 03fe6814
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03fe79bc) */
/* WARNING: Removing unreachable block (ram,0x03fe7794) */
/* WARNING: Removing unreachable block (ram,0x03fe70e8) */
/* WARNING: Removing unreachable block (ram,0x03fe79cc) */
/* WARNING: Removing unreachable block (ram,0x03fe79a8) */
/* WARNING: Removing unreachable block (ram,0x03fe71d8) */
/* WARNING: Removing unreachable block (ram,0x03fe7b38) */

long FUN_03fe6814(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_04584bc0;
  if ((DAT_0483bb93 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04581508);
    thunk_FUN_01efb3a4(PTR_DAT_04584bc8);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_GetParent<INesterStateTransition>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04584bd0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_EnsureChild__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03fe6418 with catch @ 03fe6890
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03fe641c with catch @ 03fe6894
                        */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_EnsureDebugDataAvailable__);
    thunk_FUN_01efb3a4(PTR_DAT_04584bd8);
                    /* try { // try from 03fe68ac to 040e68c3 has its CatchHandler @ 03fe6a58 */
    thunk_FUN_01efb3a4(PTR_DAT_04584be0);
    thunk_FUN_01efb3a4(PTR_DAT_04584be8);
                    /* try { // try from 03fe68c4 to 040e6a43 has its CatchHandler @ 03fe61f8 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04584bf0);
    thunk_FUN_01efb3a4(PTR_DAT_04584bf8);
    thunk_FUN_01efb3a4(PTR_DAT_04584c00);
    thunk_FUN_01efb3a4(PTR_DAT_04584c08);
    thunk_FUN_01efb3a4(PTR_DAT_04584c10);
    thunk_FUN_01efb3a4(PTR_DAT_04584c18);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldGetter__
                      );
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_EnsureDepthValid__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GraphPointer_EnsureValid__);
    thunk_FUN_01efb3a4(PTR_DAT_04584c20);
    thunk_FUN_01efb3a4(PTR_DAT_04584c28);
    thunk_FUN_01efb3a4(PTR_DAT_04584c30);
    thunk_FUN_01efb3a4(PTR_DAT_04584c38);
    thunk_FUN_01efb3a4(PTR_DAT_04584bc0);
    DAT_0483bb93 = 1;
  }
  lVar8 = *(long *)puVar2;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04584be8;
  lVar18 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar18 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar8 = *(long *)puVar2;
    }
    uVar19 = **(undefined8 **)(lVar8 + 0xb8);
    lVar18 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04584bd8);
    FUN_02e631d0(lVar18,uVar19,*(undefined8 *)PTR_DAT_04584c38,0);
    plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar9 = lVar18;
    thunk_FUN_01f51358(plVar9,lVar18);
  }
  puVar2 = PTR_DAT_04584be0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar8 = FUN_02e931e8(lVar18,*(undefined8 *)puVar2);
  puVar2 = Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__;
                    /* try { // try from 03fe6a44 to 040e6a53 has its CatchHandler @ 03fe6a58 */
  if (param_1 != (long *)0x0) {
    lVar18 = *param_1;
                    /* catch() { ... } // from try @ 03fe68ac with catch @ 03fe6a58
                       catch() { ... } // from try @ 03fe6a44 with catch @ 03fe6a58 */
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    /* try { // try from 03fe6a5c to 040e6a5f has its CatchHandler @ 03fe6c70 */
                    /* try { // try from 03fe6a60 to 040e6a7f has its CatchHandler @ 03fe61f8 */
    if (uVar15 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03fe6384 with catch @ 03fe6a64
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03fe6388 with catch @ 03fe6a68
                        */
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) ==
            *(long *)
             Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__) {
                    /* try { // try from 03fe6a98 to 040e6c4f has its CatchHandler @ 03fe61f8 */
          puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 8) * 0x10 + 0x138);
          goto LAB_03fe6aa4;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
                    /* try { // try from 03fe6a80 to 040e6a97 has its CatchHandler @ 03fe6c60 */
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01ecb238(param_1,*(long *)
                                    Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__
                           ,8);
LAB_03fe6aa4:
    lVar18 = (*(code *)*puVar10)(param_1,puVar10[1]);
    puVar7 = PTR_DAT_04584bf8;
    puVar6 = PTR_DAT_04581508;
    puVar5 = Method_Unity_VisualScripting_GraphPointer_EnsureDataAvailable__;
    puVar3 = Method_Unity_VisualScripting_GraphPointer_EnsureChild__;
    if (lVar18 != 0) {
      FUN_02b6b714(&local_b8,lVar18,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_GraphPointer_GetParent<INesterStateTransition>__);
      uStack_88 = uStack_b0;
      local_90 = local_b8;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      while (uVar15 = FUN_02ce98b4(&local_90,*(undefined8 *)puVar5), (uVar15 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2e4(*(long *)(lVar8 + 0x10),local_80,uStack_78,*(undefined8 *)puVar6);
      }
      FUN_02ce99d4(&local_90,*(undefined8 *)puVar3);
      lVar18 = *param_1;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 0xf) * 0x10 + 0x138);
            goto LAB_03fe6b88;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar2,0xf);
LAB_03fe6b88:
      plVar9 = (long *)(*(code *)*puVar10)(param_1,puVar10[1]);
      if (plVar9 != (long *)0x0) {
        lVar18 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03fe6be8;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar7,0);
LAB_03fe6be8:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar7 = PTR_DAT_04584c30;
        puVar6 = PTR_DAT_04584c18;
        puVar5 = PTR_DAT_04584bd0;
        puVar3 = 
        Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldGetter__;
        puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar14 = *plVar9;
          lVar18 = *(long *)puVar2;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar18) {
                    /* try { // try from 03fe6c64 to 040e6c67 has its CatchHandler @ 03fe6c70 */
                    /* try { // try from 03fe6c68 to 040e6c73 has its CatchHandler @ 03fe61f8 */
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03fe6c70;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
                    /* try { // try from 03fe6c50 to 040e6c5f has its CatchHandler @ 03fe6c60 */
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar18,0);
                    /* catch() { ... } // from try @ 03fe6a80 with catch @ 03fe6c60
                       catch() { ... } // from try @ 03fe6c50 with catch @ 03fe6c60 */
LAB_03fe6c70:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03fe6a5c with catch @ 03fe6c70
                       catch(type#2 @ 00000000) { ... } // from try @ 03fe6c64 with catch @ 03fe6c70
                        */
          uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          puVar4 = 
          Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldSetter__;
          if ((uVar15 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_03fe71cc;
            lVar18 = *plVar9;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 == 0) goto LAB_03fe71a4;
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            goto LAB_03fe718c;
          }
          lVar18 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04584c08) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03fe6cd4;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_04584c08,0);
LAB_03fe6cd4:
          plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar18 = *plVar11;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 8) * 0x10 + 0x138);
                goto LAB_03fe6d38;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,8);
LAB_03fe6d38:
          uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if ((uVar15 & 1) != 0) {
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar18 = *plVar11;
            lVar14 = *(long *)(lVar8 + 0x18);
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_03fe6da0;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,2);
LAB_03fe6da0:
            uVar19 = (*(code *)*puVar10)(plVar11,puVar10[1]);
            if (*(int *)(*(long *)PTR_DAT_04584c28 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar12 = FUN_030373e8(*(undefined8 *)PTR_DAT_04584c20);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_02b6b2e4(lVar14,uVar19,uVar12,*(undefined8 *)PTR_DAT_04584bc8);
            lVar18 = *plVar11;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 7) * 0x10 + 0x138);
                  goto LAB_03fe6e48;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,7);
LAB_03fe6e48:
            plVar13 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar18 = *plVar13;
            uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04584bf0) {
                  puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03fe6eb0;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)PTR_DAT_04584bf0,0);
LAB_03fe6eb0:
            plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
LAB_03fe6ec4:
            lVar14 = *plVar13;
            lVar18 = *(long *)puVar2;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar18) {
                  puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03fe6f10;
                }
                uVar15 = uVar15 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar13,lVar18,0);
LAB_03fe6f10:
            uVar15 = (*(code *)*puVar10)(plVar13,puVar10[1]);
            if ((uVar15 & 1) != 0) {
              lVar18 = *plVar13;
              uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                    puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_03fe6f6c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar6,0);
LAB_03fe6f6c:
              uVar19 = (*(code *)*puVar10)(plVar13,puVar10[1]);
              lVar18 = *plVar11;
              lVar14 = *(long *)(lVar8 + 0x18);
              uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_03fe6fd0;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,2);
LAB_03fe6fd0:
              uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c(uVar12,uVar12);
              }
              lVar18 = FUN_02b6b264(lVar14,uVar12,*(undefined8 *)puVar5);
              local_b8 = 0;
              uStack_b0 = 0;
              FUN_03feb188(&local_b8,uVar19);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar14 = *(long *)(lVar18 + 0x10);
              lVar16 = *(long *)puVar7;
              *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar1 = *(uint *)(lVar18 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar18 + 0x18) = uVar1 + 1;
                puVar10 = (undefined8 *)(lVar14 + 0x20);
                *puVar10 = local_b8;
                *(undefined8 *)(lVar14 + 0x28) = uStack_b0;
                thunk_FUN_01f51358(puVar10,0);
              }
              else {
                FUN_032739a4(lVar18,local_b8,uStack_b0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_03fe6ec4;
            }
            if (plVar13 != (long *)0x0) {
              lVar18 = *plVar13;
              uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      *(long *)
                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_03fe70cc;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar15 != 0);
              }
              puVar10 = (undefined8 *)
                        FUN_01ecb238(plVar13,*(long *)
                                              Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                     ,0);
LAB_03fe70cc:
              (*(code *)*puVar10)(plVar13,puVar10[1]);
            }
          }
        } while( true );
      }
    }
  }
  goto LAB_03fe79c4;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_03fe7828:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03fe7864;
    }
  }
LAB_03fe7840:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03fe7864:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return lVar8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
LAB_03fe718c:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03fe71c0;
    }
  }
LAB_03fe71a4:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03fe71c0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03fe71cc:
  lVar18 = *param_1;
  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar15 != 0) {
    piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
        puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 0x10) * 0x10 + 0x138);
        goto LAB_03fe722c;
      }
      uVar15 = uVar15 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar4,0x10);
LAB_03fe722c:
  plVar9 = (long *)(*(code *)*puVar10)(param_1,puVar10[1]);
  if (plVar9 != (long *)0x0) {
    lVar18 = *plVar9;
    uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar15 != 0) {
      piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04584c00) {
          puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03fe7294;
        }
        uVar15 = uVar15 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_04584c00,0);
LAB_03fe7294:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar7 = PTR_DAT_04584c30;
    puVar6 = PTR_DAT_04584c18;
    puVar5 = PTR_DAT_04584bd0;
    puVar3 = Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceFieldGetter__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar14 = *plVar9;
      lVar18 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar18) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03fe731c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar18,0);
LAB_03fe731c:
      uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar9 == (long *)0x0) {
          return lVar8;
        }
        lVar18 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 == 0) goto LAB_03fe7840;
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_03fe7828;
      }
      lVar18 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04584c10) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03fe7380;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)PTR_DAT_04584c10,0);
LAB_03fe7380:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar18 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 8) * 0x10 + 0x138);
            goto LAB_03fe73e4;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,8);
LAB_03fe73e4:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) != 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar18 = *plVar11;
        lVar14 = *(long *)(lVar8 + 0x20);
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
              goto LAB_03fe744c;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,2);
LAB_03fe744c:
        uVar19 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if (*(int *)(*(long *)PTR_DAT_04584c28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar12 = FUN_030373e8(*(undefined8 *)PTR_DAT_04584c20);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02b6b2e4(lVar14,uVar19,uVar12,*(undefined8 *)PTR_DAT_04584bc8);
        lVar18 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 7) * 0x10 + 0x138);
              goto LAB_03fe74f4;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,7);
LAB_03fe74f4:
        plVar13 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar18 = *plVar13;
        uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04584bf0) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03fe755c;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)PTR_DAT_04584bf0,0);
LAB_03fe755c:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_03fe7570:
        lVar14 = *plVar13;
        lVar18 = *(long *)puVar2;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar18) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03fe75bc;
            }
            uVar15 = uVar15 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar13,lVar18,0);
LAB_03fe75bc:
        uVar15 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        if ((uVar15 & 1) != 0) {
          lVar18 = *plVar13;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03fe7618;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar6,0);
LAB_03fe7618:
          uVar19 = (*(code *)*puVar10)(plVar13,puVar10[1]);
          lVar18 = *plVar11;
          lVar14 = *(long *)(lVar8 + 0x20);
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                puVar10 = (undefined8 *)(lVar18 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                goto LAB_03fe767c;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,2);
LAB_03fe767c:
          uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar12,uVar12);
          }
          lVar18 = FUN_02b6b264(lVar14,uVar12,*(undefined8 *)puVar5);
          local_b8 = 0;
          uStack_b0 = 0;
          FUN_03feb188(&local_b8,uVar19);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar14 = *(long *)(lVar18 + 0x10);
          lVar16 = *(long *)puVar7;
          *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar1 = *(uint *)(lVar18 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar18 + 0x18) = uVar1 + 1;
            puVar10 = (undefined8 *)(lVar14 + 0x20);
            *puVar10 = local_b8;
            *(undefined8 *)(lVar14 + 0x28) = uStack_b0;
            thunk_FUN_01f51358(puVar10,0);
          }
          else {
            FUN_032739a4(lVar18,local_b8,uStack_b0,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_03fe7570;
        }
        if (plVar13 != (long *)0x0) {
          lVar18 = *plVar13;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar15 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__)
              {
                puVar10 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03fe7778;
              }
              uVar15 = uVar15 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ecb238(plVar13,*(long *)
                                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                 ,0);
LAB_03fe7778:
          (*(code *)*puVar10)(plVar13,puVar10[1]);
        }
      }
    } while( true );
  }
LAB_03fe79c4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


