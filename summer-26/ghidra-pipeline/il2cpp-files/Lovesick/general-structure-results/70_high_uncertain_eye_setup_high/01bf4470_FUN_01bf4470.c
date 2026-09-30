/*
FUNCTION_NAME: FUN_01bf4470
ENTRY_POINT: 01bf4470
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bf4ca0) */
/* WARNING: Removing unreachable block (ram,0x01bf48c4) */
/* WARNING: Removing unreachable block (ram,0x01bf4c94) */

void FUN_01bf4470(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 uVar14;
  ushort uVar15;
  int iVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  int *piVar25;
  int iVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 local_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  if ((DAT_0377e90d & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_60_0_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__);
    DAT_0377e90d = 1;
  }
  puVar13 = StringLiteral_10310;
  puVar12 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__;
  puVar11 = Method_OVREnumerable<OVRAnchor>_GetEnumerator__;
  puVar10 = Method_System_Collections_Generic_List_Enumerator<ParametricDoor>_Dispose__;
  puVar9 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
  puVar8 = OVRPlugin_OVRP_1_60_0_TypeInfo;
  if ((char)param_1[10] == '\0') {
    if (param_2 != 0) {
LAB_01bf4570:
      lVar21 = param_1[7];
      if (lVar21 != 0) {
        iVar26 = *(int *)(param_2 + 0x10) * 2;
        if (iVar26 + 5 <= *(int *)(lVar21 + 0x18)) {
          uVar23 = *(uint *)(param_1 + 8);
          if (*(int *)(lVar21 + 0x18) < (int)(uVar23 + iVar26 + 5)) {
            (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
            uVar23 = *(uint *)(param_1 + 8);
            lVar21 = param_1[7];
            *(uint *)(param_1 + 8) = uVar23 + 1;
            if (lVar21 == 0) goto LAB_01bf4be8;
          }
          else {
            *(uint *)(param_1 + 8) = uVar23 + 1;
          }
          if (uVar23 < *(uint *)(lVar21 + 0x18)) {
            *(undefined1 *)(lVar21 + (int)uVar23 + 0x20) = 1;
            uVar6 = *(undefined4 *)(param_2 + 0x10);
            if (DAT_0377e948 == '\0') {
              thunk_FUN_00d48444(
                                Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                                );
              DAT_0377e948 = '\x01';
            }
            lVar21 = param_1[7];
            if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) == 0)) {
              lVar21 = 0;
            }
            else {
              lVar21 = lVar21 + 0x20;
            }
            lVar22 = *(long *)puVar9;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *(long *)puVar9;
            }
            puVar3 = (undefined4 *)(lVar21 + (int)param_1[8]);
            if (**(char **)(lVar22 + 0xb8) == '\0') {
              uStack_65 = (undefined1)((uint)uVar6 >> 0x18);
              *(undefined1 *)puVar3 = uStack_65;
              uStack_66 = (undefined1)((uint)uVar6 >> 0x10);
              *(undefined1 *)((long)puVar3 + 1) = uStack_66;
              uStack_67 = (undefined1)((uint)uVar6 >> 8);
              *(undefined1 *)((long)puVar3 + 2) = uStack_67;
              local_68 = (undefined1)uVar6;
              *(undefined1 *)((long)puVar3 + 3) = local_68;
              lVar22 = *(long *)puVar9;
            }
            else {
              *puVar3 = uVar6;
            }
            *(int *)(param_1 + 8) = (int)param_1[8] + 4;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *(long *)puVar9;
            }
            lVar21 = param_1[7];
            if (**(char **)(lVar22 + 0xb8) == '\0') {
              if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) == 0)) {
                lVar21 = 0;
              }
              else {
                lVar21 = lVar21 + 0x20;
              }
              iVar16 = thunk_FUN_00d402ac(0);
              if (0 < iVar26) {
                lVar7 = param_1[8];
                lVar22 = 0;
                do {
                  puVar4 = (undefined1 *)(param_2 + iVar16 + lVar22);
                  puVar5 = (undefined1 *)(lVar21 + (int)lVar7 + lVar22);
                  lVar22 = lVar22 + 2;
                  *puVar5 = puVar4[1];
                  puVar5[1] = *puVar4;
                } while ((int)lVar22 < iVar26);
              }
            }
            else {
              if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) == 0)) {
                lVar21 = 0;
              }
              else {
                lVar21 = lVar21 + 0x20;
              }
              iVar16 = thunk_FUN_00d402ac(0);
              puVar20 = (undefined8 *)(param_2 + iVar16);
              puVar2 = (undefined8 *)(lVar21 + (int)param_1[8]);
              puVar1 = puVar2 + 4;
              puVar24 = puVar2;
              while (puVar1 <= (undefined8 *)((long)puVar2 + (long)iVar26)) {
                puVar1 = puVar20 + 1;
                uVar17 = *puVar20;
                uVar29 = puVar20[3];
                uVar28 = puVar20[2];
                puVar20 = puVar20 + 4;
                puVar24[1] = *puVar1;
                *puVar24 = uVar17;
                puVar24[3] = uVar29;
                puVar24[2] = uVar28;
                puVar1 = puVar24 + 8;
                puVar24 = puVar24 + 4;
              }
              for (; puVar24 < (undefined8 *)((long)puVar2 + (long)iVar26);
                  puVar24 = (undefined8 *)((long)puVar24 + 2)) {
                *(undefined2 *)puVar24 = *(undefined2 *)puVar20;
                puVar20 = (undefined8 *)((long)puVar20 + 2);
              }
            }
            *(int *)(param_1 + 8) = (int)param_1[8] + iVar26;
            return;
          }
LAB_01bf4c80:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        plVar18 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400))
        ;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x388))(plVar18,1,*(undefined8 *)(*plVar18 + 0x390));
          lVar21 = param_1[6];
          uVar6 = *(undefined4 *)(param_2 + 0x10);
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01c367a8(lVar21,0,uVar6,0);
          plVar18 = (long *)(**(code **)(*param_1 + 0x3f8))
                                      (param_1,*(undefined8 *)(*param_1 + 0x400));
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x368))
                      (plVar18,param_1[6],0,4,*(undefined8 *)(*plVar18 + 0x370));
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar18 = (long *)FUN_01251e3c(iVar26,*(undefined8 *)puVar8);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uVar17 = FUN_01251db0(plVar18,*(undefined8 *)puVar11);
            FUN_01c6f588(uVar17,param_2,1,0);
            plVar19 = (long *)(**(code **)(*param_1 + 0x3f8))
                                        (param_1,*(undefined8 *)(*param_1 + 0x400));
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*plVar19 + 0x368))
                      (plVar19,uVar17,0,iVar26,*(undefined8 *)(*plVar19 + 0x370));
            lVar22 = *plVar18;
            lVar21 = *(long *)puVar13;
            uVar27 = (ulong)*(ushort *)(lVar22 + 0x12a);
            if (uVar27 != 0) {
              piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == lVar21) {
                  puVar20 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_01bf48b0;
                }
                uVar27 = uVar27 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar27 != 0);
            }
            puVar20 = (undefined8 *)FUN_00d59724(plVar18,lVar21,0);
LAB_01bf48b0:
            (*(code *)*puVar20)(plVar18,puVar20[1]);
            return;
          }
        }
      }
    }
  }
  else if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x10)) {
      iVar26 = 0;
      do {
        uVar15 = FUN_015fa29c(param_2,iVar26,0);
        if (0xff < uVar15) goto LAB_01bf4570;
        iVar26 = iVar26 + 1;
      } while (iVar26 < *(int *)(param_2 + 0x10));
    }
    lVar21 = param_1[7];
    if (lVar21 != 0) {
      iVar26 = *(int *)(param_2 + 0x10);
      if (*(int *)(lVar21 + 0x18) < iVar26 + 5) {
        (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
        plVar18 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400))
        ;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x388))(plVar18,0,*(undefined8 *)(*plVar18 + 0x390));
          lVar21 = param_1[6];
          uVar6 = *(undefined4 *)(param_2 + 0x10);
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01c367a8(lVar21,0,uVar6,0);
          plVar18 = (long *)(**(code **)(*param_1 + 0x3f8))
                                      (param_1,*(undefined8 *)(*param_1 + 0x400));
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x368))
                      (plVar18,param_1[6],0,4,*(undefined8 *)(*plVar18 + 0x370));
            uVar6 = *(undefined4 *)(param_2 + 0x10);
            if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar18 = (long *)FUN_01251e3c(uVar6,*(undefined8 *)puVar8);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar21 = FUN_01251db0(plVar18,*(undefined8 *)puVar11);
            if (0 < *(int *)(param_2 + 0x10)) {
              uVar27 = 0;
              do {
                uVar14 = FUN_015fa29c(param_2,uVar27 & 0xffffffff,0);
                if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                if (*(uint *)(lVar21 + 0x18) <= uVar27) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                *(undefined1 *)(lVar21 + 0x20 + uVar27) = uVar14;
                uVar27 = uVar27 + 1;
              } while ((long)uVar27 < (long)*(int *)(param_2 + 0x10));
            }
            plVar19 = (long *)(**(code **)(*param_1 + 0x3f8))
                                        (param_1,*(undefined8 *)(*param_1 + 0x400));
            if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            (**(code **)(*plVar19 + 0x368))
                      (plVar19,lVar21,0,*(undefined4 *)(param_2 + 0x10),
                       *(undefined8 *)(*plVar19 + 0x370));
            if (plVar18 == (long *)0x0) {
              return;
            }
            lVar22 = *plVar18;
            lVar21 = *(long *)puVar13;
            uVar27 = (ulong)*(ushort *)(lVar22 + 0x12a);
            if (uVar27 != 0) {
              piVar25 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
              do {
                if (*(long *)(piVar25 + -2) == lVar21) {
                  puVar20 = (undefined8 *)(lVar22 + (long)*piVar25 * 0x10 + 0x138);
                  goto LAB_01bf4c50;
                }
                uVar27 = uVar27 - 1;
                piVar25 = piVar25 + 4;
              } while (uVar27 != 0);
            }
            puVar20 = (undefined8 *)FUN_00d59724(plVar18,lVar21,0);
LAB_01bf4c50:
            (*(code *)*puVar20)(plVar18,puVar20[1]);
            return;
          }
        }
      }
      else {
        uVar23 = *(uint *)(param_1 + 8);
        if (*(int *)(lVar21 + 0x18) < (int)(uVar23 + iVar26 + 5)) {
          (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
          uVar23 = *(uint *)(param_1 + 8);
          lVar21 = param_1[7];
          *(uint *)(param_1 + 8) = uVar23 + 1;
          if (lVar21 == 0) goto LAB_01bf4be8;
        }
        else {
          *(uint *)(param_1 + 8) = uVar23 + 1;
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar23) goto LAB_01bf4c80;
        *(undefined1 *)(lVar21 + (int)uVar23 + 0x20) = 0;
        uVar6 = *(undefined4 *)(param_2 + 0x10);
        if (DAT_0377e948 == '\0') {
          thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                            );
          DAT_0377e948 = '\x01';
        }
        lVar21 = param_1[7];
        if ((lVar21 == 0) || (*(int *)(lVar21 + 0x18) == 0)) {
          lVar21 = 0;
        }
        else {
          lVar21 = lVar21 + 0x20;
        }
        lVar22 = *(long *)puVar9;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar9;
        }
        puVar3 = (undefined4 *)(lVar21 + (int)param_1[8]);
        if (**(char **)(lVar22 + 0xb8) == '\0') {
          uStack_61 = (undefined1)((uint)uVar6 >> 0x18);
          *(undefined1 *)puVar3 = uStack_61;
          uStack_62 = (undefined1)((uint)uVar6 >> 0x10);
          *(undefined1 *)((long)puVar3 + 1) = uStack_62;
          uStack_63 = (undefined1)((uint)uVar6 >> 8);
          *(undefined1 *)((long)puVar3 + 2) = uStack_63;
          local_64 = (undefined1)uVar6;
          *(undefined1 *)((long)puVar3 + 3) = local_64;
        }
        else {
          *puVar3 = uVar6;
        }
        lVar21 = param_1[8];
        uVar23 = (int)lVar21 + 4;
        *(uint *)(param_1 + 8) = uVar23;
        if (iVar26 < 1) {
          return;
        }
        lVar22 = param_1[7];
        *(int *)(param_1 + 8) = (int)lVar21 + 5;
        uVar14 = FUN_015fa29c(param_2,0,0);
        if (lVar22 != 0) {
          iVar16 = 1;
          do {
            if (*(uint *)(lVar22 + 0x18) <= uVar23) goto LAB_01bf4c80;
            *(undefined1 *)(lVar22 + (int)uVar23 + 0x20) = uVar14;
            if (iVar26 == iVar16) {
              return;
            }
            uVar23 = *(uint *)(param_1 + 8);
            lVar22 = param_1[7];
            *(uint *)(param_1 + 8) = uVar23 + 1;
            uVar14 = FUN_015fa29c(param_2,iVar16,0);
            iVar16 = iVar16 + 1;
          } while (lVar22 != 0);
        }
      }
    }
  }
LAB_01bf4be8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


