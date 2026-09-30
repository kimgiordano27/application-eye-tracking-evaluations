/*
FUNCTION_NAME: FUN_055a7330
ENTRY_POINT: 055a7330
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x055a8dec) */
/* WARNING: Removing unreachable block (ram,0x055a91a4) */
/* WARNING: Removing unreachable block (ram,0x055a7ad0) */
/* WARNING: Removing unreachable block (ram,0x055a9080) */
/* WARNING: Removing unreachable block (ram,0x055a91ac) */
/* WARNING: Removing unreachable block (ram,0x055a9198) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_055a7330(long *param_1,long param_2,undefined8 param_3,uint param_4,ulong param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  undefined8 uVar28;
  long lVar29;
  undefined *puVar30;
  long local_d0;
  long *local_c8;
  long *local_b0;
  int local_8c;
  
  if ((DAT_066d1784 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063183d0);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_TryGetValue__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_InputDevice>_Remove__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_InputDevice>_TryGetValue__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Keys__
                );
    FUN_02b3c81c(PTR_DAT_0631f238);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(PTR_DAT_06313588);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_InputDevice>_set_Item__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_int>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_int>_Clear__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_int>_GetEnumerator__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<int,_int>_Remove__);
    FUN_02b3c81c(PTR_DAT_06321df8);
    DAT_066d1784 = 1;
  }
  FUN_055a6f3c(param_1,param_2,param_3,param_4 & 1);
  if ((param_4 & 1) == 0) {
    plVar11 = (long *)param_1[3];
    if (plVar11 == (long *)0x0) goto LAB_055a90bc;
    (**(code **)(*plVar11 + 0x438))(plVar11,*(undefined8 *)(*plVar11 + 0x440));
    plVar11 = (long *)param_1[3];
    if (plVar11 == (long *)0x0) goto LAB_055a90bc;
    uVar12 = (**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220));
    if ((uVar12 & 1) != 0) {
      FUN_055aa544(param_1,param_2,param_3,0);
      return;
    }
    plVar11 = (long *)param_1[3];
    if (plVar11 == (long *)0x0) goto LAB_055a90bc;
    (**(code **)(*plVar11 + 0x548))(plVar11,*(undefined8 *)(*plVar11 + 0x550));
  }
  puVar30 = PTR_DAT_063183d0;
  if (param_2 == 0) goto LAB_055a90bc;
  plVar11 = *(long **)(param_2 + 0x18);
  if (plVar11 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    lVar22 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar12 != 0) {
      piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0631f238) {
          puVar13 = (undefined8 *)(lVar22 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          goto LAB_055a7594;
        }
        uVar12 = uVar12 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)PTR_DAT_0631f238,1);
LAB_055a7594:
    uVar8 = (*(code *)*puVar13)(plVar11,puVar13[1]);
  }
  lVar22 = FUN_02b3c908(*(undefined8 *)puVar30,uVar8);
  if (((param_4 & 1) == 0) || ((int)param_1[0x1b] != 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = *(long *)(param_2 + 0x70) != 0;
  }
  plVar11 = (long *)param_1[3];
  if (plVar11 == (long *)0x0) goto LAB_055a90bc;
  (**(code **)(*plVar11 + 0x538))(plVar11,*(undefined8 *)(*plVar11 + 0x540));
  if ((param_5 & 1) == 0) {
    iVar9 = 0x7fffffff;
  }
  else {
    plVar11 = *(long **)(param_2 + 0x18);
    if (plVar11 == (long *)0x0) {
      iVar9 = -1;
    }
    else {
      lVar23 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar12 != 0) {
        piVar27 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0631f238) {
            puVar13 = (undefined8 *)(lVar23 + (long)(*piVar27 + 1) * 0x10 + 0x138);
            goto LAB_055a7664;
          }
          uVar12 = uVar12 - 1;
          piVar27 = piVar27 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)PTR_DAT_0631f238,1);
LAB_055a7664:
      iVar9 = (*(code *)*puVar13)(plVar11,puVar13[1]);
    }
  }
  plVar11 = *(long **)(param_2 + 0x30);
  if (plVar11 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
    lVar23 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,uVar8);
    plVar11 = *(long **)(param_2 + 0x30);
    if (plVar11 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
      puVar30 = PTR_DAT_06313048;
      plVar11 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,uVar8);
      plVar24 = *(long **)(param_2 + 0x30);
      if (plVar24 != (long *)0x0) {
        plVar24 = (long *)(**(code **)(*plVar24 + 0x388))(plVar24,*(undefined8 *)(*plVar24 + 0x390))
        ;
        puVar6 = PTR_DAT_06312f90;
        local_b0 = (long *)0x0;
        do {
          if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar25 = *plVar24;
          lVar21 = *(long *)puVar6;
          uVar12 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar12 != 0) {
            piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar21) {
                puVar13 = (undefined8 *)(lVar25 + (long)*piVar27 * 0x10 + 0x138);
                goto LAB_055a7780;
              }
              uVar12 = uVar12 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_02b7654c(plVar24,lVar21,0);
LAB_055a7780:
          uVar12 = (*(code *)*puVar13)(plVar24,puVar13[1]);
          puVar4 = PTR_DAT_06312f78;
          if ((uVar12 & 1) == 0) {
            plVar24 = (long *)thunk_FUN_02b79548(plVar24,*(undefined8 *)PTR_DAT_06312f78);
            if (plVar24 == (long *)0x0) goto LAB_055a7ad4;
            lVar21 = *plVar24;
            uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar12 == 0) goto LAB_055a7a80;
            piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
            goto LAB_055a7a68;
          }
          if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar25 = *plVar24;
          lVar21 = *(long *)puVar6;
          uVar12 = (ulong)*(ushort *)(lVar25 + 0x12e);
          if (uVar12 != 0) {
            piVar27 = (int *)(*(long *)(lVar25 + 0xb0) + 8);
            do {
              if (*(long *)(piVar27 + -2) == lVar21) {
                puVar13 = (undefined8 *)(lVar25 + (long)(*piVar27 + 1) * 0x10 + 0x138);
                goto LAB_055a77e8;
              }
              uVar12 = uVar12 - 1;
              piVar27 = piVar27 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_02b7654c(plVar24,lVar21,1);
LAB_055a77e8:
          plVar14 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          bVar1 = *(byte *)(*(long *)
                             Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__ +
                           0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(plVar14);
          }
          uVar12 = FUN_055aa688(plVar14,plVar14,plVar14[5],param_3,param_4 & 1);
          if ((uVar12 & 1) == 0) {
            if (plVar14[5] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar21 = *(long *)(plVar14[5] + 0x10);
            if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar12 = FUN_04d952d0(lVar21,0);
            if ((uVar12 & 1) == 0) {
              lVar21 = FUN_055b0020(plVar14,param_3,0);
              if (lVar21 == 0) {
                lVar21 = FUN_055aa6ec(0,plVar14[5]);
                FUN_055a9fdc(lVar21,plVar14,param_3,lVar21,param_4 & 1);
              }
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar3 = *(uint *)(plVar14 + 0xf);
              if ((lVar21 != 0) &&
                 (lVar25 = thunk_FUN_02b79548(lVar21,*(undefined8 *)(*plVar11 + 0x40)), lVar25 == 0)
                 ) {
                uVar20 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar20,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar11[(long)(int)uVar3 + 4] = lVar21;
              plVar15 = (long *)thunk_FUN_02bb0e9c(plVar11 + (long)(int)uVar3 + 4,lVar21);
            }
            else {
              uVar3 = *(uint *)(plVar14 + 0xf);
              lVar21 = FUN_055aa6ec(uVar12,plVar14[5]);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if ((lVar21 != 0) &&
                 (lVar25 = thunk_FUN_02b79548(lVar21,*(undefined8 *)(*plVar11 + 0x40)), lVar25 == 0)
                 ) {
                uVar20 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                FUN_02b3c988(uVar20,0);
              }
              if (*(uint *)(plVar11 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              plVar11[(long)(int)uVar3 + 4] = lVar21;
              plVar15 = (long *)thunk_FUN_02bb0e9c(plVar11 + (long)(int)uVar3 + 4,lVar21);
            }
          }
          else {
            uVar3 = *(uint *)(plVar14 + 0xf);
            lVar21 = FUN_055b0020(plVar14,param_3,0);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if ((lVar21 != 0) &&
               (lVar25 = thunk_FUN_02b79548(lVar21,*(undefined8 *)(*plVar11 + 0x40)), lVar25 == 0))
            {
              uVar20 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar20,0);
            }
            if (*(uint *)(plVar11 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            plVar11[(long)(int)uVar3 + 4] = lVar21;
            plVar15 = (long *)thunk_FUN_02bb0e9c(plVar11 + (long)(int)uVar3 + 4,lVar21);
          }
          if (plVar14[0xc] != 0) {
            if (local_b0 == (long *)0x0) {
              plVar15 = *(long **)(param_2 + 0x30);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar8 = (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
              plVar15 = (long *)FUN_02b3c908(*(undefined8 *)puVar30,uVar8);
              local_b0 = plVar15;
            }
            uVar3 = *(uint *)(plVar14 + 0xf);
            lVar21 = FUN_055aa6ec(plVar15,plVar14[0xe]);
            if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if ((lVar21 != 0) &&
               (lVar25 = thunk_FUN_02b79548(lVar21,*(undefined8 *)(*local_b0 + 0x40)), lVar25 == 0))
            {
              uVar20 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar20,0);
            }
            if (*(uint *)(local_b0 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            local_b0[(long)(int)uVar3 + 4] = lVar21;
            thunk_FUN_02bb0e9c(local_b0 + (long)(int)uVar3 + 4,lVar21);
          }
        } while( true );
      }
    }
    goto LAB_055a90bc;
  }
  local_b0 = (long *)0x0;
  plVar11 = (long *)0x0;
  lVar23 = 0;
  goto LAB_055a7ad4;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar27 = piVar27 + 4;
    if (uVar12 == 0) break;
LAB_055a7a68:
    if (*(long *)(piVar27 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_055a7aac;
    }
  }
LAB_055a7a80:
  puVar13 = (undefined8 *)FUN_02b7654c(plVar24,*(long *)puVar4,0);
LAB_055a7aac:
  (*(code *)*puVar13)(plVar24,puVar13[1]);
LAB_055a7ad4:
  if (((int)param_1[0x1b] == 0) && (*(long *)(param_2 + 0x18) != 0)) {
    uVar20 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_InputDevice>_TryGetValue__
                               );
    FUN_055aa778(uVar20,param_1,param_2,param_4 & 1);
    uVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
    FUN_055a197c(uVar16,uVar20,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_InputDevice>_Remove__);
    plVar24 = *(long **)(param_2 + 0x18);
    if (plVar24 == (long *)0x0) goto LAB_055a90bc;
    lVar21 = *plVar24;
    uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
    if (uVar12 != 0) {
      piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar27 + -2) == *(long *)PTR_DAT_0631f238) {
          puVar13 = (undefined8 *)(lVar21 + (long)(*piVar27 + 1) * 0x10 + 0x138);
          goto LAB_055a7b9c;
        }
        uVar12 = uVar12 - 1;
        piVar27 = piVar27 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_02b7654c(plVar24,*(long *)PTR_DAT_0631f238,1);
LAB_055a7b9c:
    uVar8 = (*(code *)*puVar13)(plVar24,puVar13[1]);
    local_d0 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Keys__
                                 );
    System_Net_HttpWebRequest_AuthorizationState__CheckAuthorization(local_d0,param_3,uVar16,uVar8);
    FUN_055a2148(param_1,local_d0);
  }
  else {
    local_d0 = 0;
  }
  plVar24 = (long *)param_1[3];
  if (plVar24 == (long *)0x0) {
LAB_055a90bc:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar21 = lVar23 + 0x20;
  local_c8 = (long *)0x0;
  local_8c = -1;
  puVar30 = PTR_DAT_06312310;
LAB_055a7c24:
  iVar10 = (**(code **)(*plVar24 + 0x198))(plVar24,*(undefined8 *)(*plVar24 + 0x1a0));
  if (iVar10 == 0xf || iVar9 + -1 <= local_8c) {
    if (plVar11 == (long *)0x0) goto LAB_055a8df0;
    plVar24 = *(long **)(param_2 + 0x30);
    if (plVar24 != (long *)0x0) {
      plVar24 = (long *)(**(code **)(*plVar24 + 0x388))(plVar24,*(undefined8 *)(*plVar24 + 0x390));
      puVar4 = Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__;
      puVar6 = PTR_DAT_06312f90;
      goto joined_r0x055a8b44;
    }
    goto LAB_055a90bc;
  }
  plVar24 = (long *)param_1[3];
  if (plVar24 == (long *)0x0) goto LAB_055a90bc;
  iVar10 = (**(code **)(*plVar24 + 0x198))(plVar24,*(undefined8 *)(*plVar24 + 0x1a0));
  if (iVar10 == 1) {
    if ((param_5 & 1) == 0) {
      if (!bVar7) {
        uVar12 = FUN_055b9aa8(param_2,0);
        plVar24 = (long *)param_1[3];
        if ((uVar12 & 1) == 0) {
          if (plVar24 == (long *)0x0) goto LAB_055a90bc;
          uVar20 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
          plVar24 = (long *)param_1[3];
          if (plVar24 == (long *)0x0) goto LAB_055a90bc;
          uVar16 = (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
          plVar15 = (long *)FUN_055b9740(param_2,uVar20,uVar16,0);
        }
        else {
          if (plVar24 == (long *)0x0) goto LAB_055a90bc;
          uVar20 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
          plVar24 = (long *)param_1[3];
          if (plVar24 == (long *)0x0) goto LAB_055a90bc;
          uVar16 = (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
          plVar15 = (long *)FUN_055b9394(param_2,uVar20,uVar16,local_8c,0);
        }
        bVar7 = false;
        goto joined_r0x055a7fd4;
      }
      plVar24 = *(long **)(param_2 + 0x70);
      if (plVar24 == (long *)0x0) goto LAB_055a90bc;
      bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__))
      goto LAB_055a9160;
      plVar24 = (long *)FUN_055b1960(plVar24,0);
      if (plVar24 == (long *)0x0) goto LAB_055a90bc;
      plVar24 = (long *)(**(code **)(*plVar24 + 0x2e8))(plVar24,0,*(undefined8 *)(*plVar24 + 0x2f0))
      ;
      if (plVar24 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__
                         + 0x130);
        if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__
           )) goto LAB_055a9104;
        bVar7 = false;
        plVar15 = plVar24;
        goto LAB_055a7fd8;
      }
      bVar7 = false;
System_Net_WebOperation__GetResponseStream:
      lVar25 = *(long *)(param_2 + 0x50);
      if (lVar25 == 0) {
        (**(code **)(*param_1 + 0x1e8))(param_1,param_3,*(undefined8 *)(*param_1 + 0x1f0));
      }
      else {
        if (*(long *)(lVar25 + 0x28) == 0) goto LAB_055a90bc;
        uVar12 = FUN_055902f4(*(long *)(lVar25 + 0x28),0);
        lVar29 = *(long *)(lVar25 + 0x28);
        if ((uVar12 & 1) == 0) {
          uVar20 = FUN_055aaa14(param_1,lVar29,0);
          FUN_055a9fdc(uVar20,lVar25,param_3,uVar20,param_4 & 1);
        }
        else {
          if ((plVar11 == (long *)0x0) || (lVar23 == 0)) goto LAB_055a90bc;
          uVar3 = *(uint *)(lVar25 + 0x78);
          lVar25 = (long)(int)uVar3;
          if (*(uint *)(lVar23 + 0x18) <= uVar3) {
LAB_055a90d8:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          iVar10 = *(int *)(lVar21 + lVar25 * 4);
          *(int *)(lVar21 + lVar25 * 4) = iVar10 + 1;
          if (lVar29 == 0) goto LAB_055a90bc;
          uVar20 = FUN_0559102c(lVar29,0);
          uVar20 = FUN_055aaa14(param_1,uVar20,0);
          if (*(uint *)(plVar11 + 3) <= uVar3) goto LAB_055a90d8;
          FUN_055aa240(uVar20,lVar29,plVar11 + lVar25 + 4,iVar10,uVar20,1);
        }
      }
      goto LAB_055a80dc;
    }
    plVar24 = (long *)param_1[3];
    if (plVar24 == (long *)0x0) goto LAB_055a90bc;
    uVar20 = (**(code **)(*plVar24 + 0x1b8))(plVar24,*(undefined8 *)(*plVar24 + 0x1c0));
    plVar24 = (long *)param_1[3];
    if (plVar24 == (long *)0x0) goto LAB_055a90bc;
    uVar16 = (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
    plVar15 = (long *)FUN_055b9394(param_2,uVar20,uVar16,local_8c,0);
joined_r0x055a7fd4:
    if (plVar15 == (long *)0x0) goto System_Net_WebOperation__GetResponseStream;
LAB_055a7fd8:
    plVar24 = (long *)plVar15[5];
    if ((plVar24 == (long *)0x0) || (lVar22 == 0)) goto LAB_055a90bc;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(plVar24 + 3)) goto LAB_055a90d8;
    if (*(char *)(lVar22 + (int)*(uint *)(plVar24 + 3) + 0x20) != '\0')
    goto System_Net_WebOperation__GetResponseStream;
    if (plVar24 != local_c8) {
      local_8c = *(int *)((long)plVar15 + 0x54);
      bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      local_c8 = plVar24;
      if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
        local_8c = local_8c + 1;
      }
    }
    uVar20 = thunk_FUN_02b4c898(plVar24,0);
    uVar16 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_Remove__;
    if (*(int *)(*(long *)(puVar30 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar30 + 0xe0));
    }
    uVar16 = FUN_04d8a7b0(uVar16,0);
    uVar12 = FUN_04d938a0(uVar20,uVar16,0);
    if ((uVar12 & 1) != 0) {
      if (((int)param_1[0x1b] == 0) && (uVar12 = FUN_055b6730(plVar15,0), (uVar12 & 1) != 0)) {
        if (((local_d0 == 0) || (plVar15[5] == 0)) ||
           (lVar25 = *(long *)(local_d0 + 0x18), lVar25 == 0)) goto LAB_055a90bc;
        uVar3 = *(uint *)(plVar15[5] + 0x18);
        if (*(uint *)(lVar25 + 0x18) <= uVar3) goto LAB_055a90d8;
        uVar20 = FUN_055a5468(param_1,lVar25 + (long)(int)uVar3 * 8 + 0x20);
        lVar25 = plVar15[5];
        if ((lVar25 == 0) || (lVar29 = *(long *)(local_d0 + 0x18), lVar29 == 0)) goto LAB_055a90bc;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar25 + 0x18)) goto LAB_055a90d8;
        if (*(long *)(lVar29 + (long)(int)*(uint *)(lVar25 + 0x18) * 8 + 0x20) == 0) {
          uVar12 = FUN_055aa688(uVar20,lVar25,plVar15[9],param_3,param_4 & 1);
          if ((uVar12 & 1) != 0) {
            FUN_0275e13c(plVar15);
            lVar22 = plVar15[9];
            uVar20 = FUN_0275e13c(lVar22);
            uVar20 = FUN_055a2558(uVar20,*(undefined8 *)(lVar22 + 0x38));
            goto LAB_055a9218;
          }
          FUN_055a9fdc(uVar12,plVar15[5],param_3,uVar20,param_4 & 1);
        }
        else {
          if (((plVar15[8] == 0) || (lVar25 = *(long *)(plVar15[8] + 0x58), lVar25 == 0)) ||
             (lVar25 = *(long *)(lVar25 + 0x10), lVar25 == 0)) goto LAB_055a90bc;
          uVar12 = FUN_04d952d0(lVar25,0);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_055aa688(uVar12,plVar15[5],plVar15[9],param_3,param_4 & 1);
            if ((uVar12 & 1) == 0) {
              if ((plVar15[8] == 0) || (lVar25 = *(long *)(plVar15[8] + 0x58), lVar25 == 0))
              goto LAB_055a90bc;
              uVar20 = FUN_055aa7d0(uVar12,*(undefined8 *)(lVar25 + 0x10));
              FUN_055a9fdc(uVar20,plVar15[5],param_3,uVar20,param_4 & 1);
            }
            else {
              uVar20 = FUN_055aa170(uVar12,plVar15[5],param_3,param_4 & 1);
            }
            uVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_InputDevice>_set_Item__
                                       );
            FUN_055a185c(uVar16,param_1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<int,_int>__ctor__);
            if ((plVar15[5] == 0) || (lVar25 = *(long *)(local_d0 + 0x18), lVar25 == 0))
            goto LAB_055a90bc;
            uVar3 = *(uint *)(plVar15[5] + 0x18);
            if (*(uint *)(lVar25 + 0x18) <= uVar3) goto LAB_055a90d8;
            uVar28 = *(undefined8 *)(lVar25 + (long)(int)uVar3 * 8 + 0x20);
            uVar18 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_TryGetValue__
                                       );
            FUN_055a6158(uVar18,uVar20,uVar16,uVar28);
            FUN_055a2074(param_1,uVar18);
            if ((plVar15[5] == 0) || (lVar25 = *(long *)(local_d0 + 0x18), lVar25 == 0))
            goto LAB_055a90bc;
            uVar3 = *(uint *)(plVar15[5] + 0x18);
            if (*(uint *)(lVar25 + 0x18) <= uVar3) goto LAB_055a90d8;
            puVar13 = (undefined8 *)(lVar25 + (long)(int)uVar3 * 8 + 0x20);
            *puVar13 = 0;
            thunk_FUN_02bb0e9c(puVar13,0);
            puVar30 = PTR_DAT_06312310;
          }
        }
      }
      else {
        uVar12 = FUN_055aa688(uVar12,plVar15[5],plVar15[9],param_3,param_4 & 1);
        lVar25 = plVar15[8];
        if ((uVar12 & 1) == 0) {
          if (((lVar25 == 0) || (*(long *)(lVar25 + 0x58) == 0)) ||
             (lVar25 = *(long *)(*(long *)(lVar25 + 0x58) + 0x10), lVar25 == 0)) goto LAB_055a90bc;
          uVar12 = FUN_04d952d0(lVar25,0);
          if ((uVar12 & 1) == 0) {
            lVar25 = FUN_055aa170(uVar12,plVar15[5],param_3,param_4 & 1);
            if (lVar25 == 0) {
              if ((plVar15[8] == 0) || (lVar25 = *(long *)(plVar15[8] + 0x58), lVar25 == 0))
              goto LAB_055a90bc;
              lVar25 = FUN_055aa7d0(0,*(undefined8 *)(lVar25 + 0x10));
              FUN_055a9fdc(lVar25,plVar15[5],param_3,lVar25,param_4 & 1);
            }
            FUN_055a94f8(param_1,plVar15[8],0,lVar25,1);
          }
          else {
            lVar25 = FUN_055a94f8(param_1,plVar15[8],0,0,1);
            if ((lVar25 != 0) || ((char)plVar15[7] != '\0')) {
              FUN_055a9fdc(lVar25,plVar15[5],param_3,lVar25,param_4 & 1);
            }
          }
        }
        else {
          uVar20 = FUN_055aa170(uVar12,plVar15[5],param_3,param_4 & 1);
          FUN_055a94f8(param_1,lVar25,0,uVar20,0);
        }
      }
      if (plVar15[5] == 0) goto LAB_055a90bc;
      uVar3 = *(uint *)(plVar15[5] + 0x18);
      if (*(uint *)(lVar22 + 0x18) <= uVar3) goto LAB_055a90d8;
      *(undefined1 *)(lVar22 + (int)uVar3 + 0x20) = 1;
      goto LAB_055a80dc;
    }
    if (plVar15[5] == 0) goto LAB_055a90bc;
    uVar20 = thunk_FUN_02b4c898(plVar15[5],0);
    uVar16 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_GetEnumerator__;
    if (*(int *)(*(long *)(puVar30 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar30 + 0xe0));
    }
    uVar16 = FUN_04d8a7b0(uVar16,0);
    uVar12 = FUN_04d938a0(uVar20,uVar16,0);
    plVar14 = (long *)plVar15[5];
    if ((uVar12 & 1) != 0) {
      if (plVar14 == (long *)0x0) goto LAB_055a90bc;
      bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
LAB_055a9118:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar14);
      }
      if ((plVar11 == (long *)0x0) || (lVar23 == 0)) goto LAB_055a90bc;
      uVar3 = *(uint *)(plVar14 + 0xf);
      lVar25 = (long)(int)uVar3;
      if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_055a90d8;
      lVar29 = plVar14[5];
      iVar10 = *(int *)(lVar21 + lVar25 * 4);
      *(int *)(lVar21 + lVar25 * 4) = iVar10 + 1;
      uVar20 = FUN_055aa86c(param_1,plVar15);
      uVar16 = FUN_055aa688(uVar20,plVar15[5],plVar15[9],param_3,param_4 & 1);
      if (*(uint *)(plVar11 + 3) <= uVar3) goto LAB_055a90d8;
      uVar20 = FUN_055aa240(uVar16,lVar29,plVar11 + lVar25 + 4,iVar10,uVar20,
                            ((uint)uVar16 ^ 0xffffffff) & 1);
      puVar30 = PTR_DAT_06312310;
      if (plVar14[0xc] != 0) {
        if (local_b0 == (long *)0x0) goto LAB_055a90bc;
        uVar3 = *(uint *)(plVar14 + 0xf);
        if ((*(uint *)(lVar23 + 0x18) <= uVar3) || (*(uint *)(local_b0 + 3) <= uVar3))
        goto LAB_055a90d8;
        FUN_055aa240(uVar20,plVar14[0xe],local_b0 + (long)(int)uVar3 + 4,
                     *(int *)(lVar23 + (long)(int)uVar3 * 4 + 0x20) + -1,plVar15[6],1);
      }
      goto LAB_055a80dc;
    }
    if (plVar14 == (long *)0x0) goto LAB_055a90bc;
    uVar20 = thunk_FUN_02b4c898(plVar14,0);
    uVar16 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_Add__;
    if (*(int *)(*(long *)(puVar30 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar30 + 0xe0));
    }
    uVar16 = FUN_04d8a7b0(uVar16,0);
    uVar12 = FUN_04d938a0(uVar20,uVar16,0);
    plVar24 = (long *)plVar15[5];
    if ((uVar12 & 1) != 0) {
      if (plVar24 == (long *)0x0) goto LAB_055a90bc;
      bVar1 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__
                       + 0x130);
      plVar14 = plVar24;
      if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_RTHandle[]>_TryGetValue__))
      goto LAB_055a9118;
      if (plVar24[5] == 0) goto LAB_055a90bc;
      uVar12 = FUN_055902f4(plVar24[5],0);
      lVar25 = plVar24[5];
      if ((uVar12 & 1) == 0) {
        uVar17 = FUN_055aaa14(param_1,lVar25,0);
        uVar12 = uVar17;
        goto LAB_055a7f80;
      }
      if ((plVar11 == (long *)0x0) || (lVar23 == 0)) goto LAB_055a90bc;
      uVar3 = *(uint *)(plVar24 + 0xf);
      lVar29 = (long)(int)uVar3;
      if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_055a90d8;
      iVar10 = *(int *)(lVar21 + lVar29 * 4);
      *(int *)(lVar21 + lVar29 * 4) = iVar10 + 1;
      if (lVar25 == 0) goto LAB_055a90bc;
      uVar20 = FUN_0559102c(lVar25,0);
      uVar20 = FUN_055aaa14(param_1,uVar20,0);
      if (*(uint *)(plVar11 + 3) <= uVar3) goto LAB_055a90d8;
      FUN_055aa240(uVar20,lVar25,plVar11 + lVar29 + 4,iVar10,uVar20,1);
      goto LAB_055a80dc;
    }
    if (plVar24 == (long *)0x0) goto LAB_055a90bc;
    uVar20 = thunk_FUN_02b4c898(plVar24,0);
    uVar16 = *(undefined8 *)Method_System_Collections_Generic_Dictionary<int,_int>_Clear__;
    if (*(int *)(*(long *)(puVar30 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(puVar30 + 0xe0));
    }
    uVar16 = FUN_04d8a7b0(uVar16,0);
    uVar12 = FUN_04d938a0(uVar20,uVar16,0);
    if ((uVar12 & 1) == 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar20 = thunk_FUN_02b79644();
      uVar16 = thunk_FUN_02ba3594(
                                 Method_System_Collections_Generic_Dictionary<int,_int>_TryGetValue__
                                 );
      FUN_04d7b3f4(uVar20,uVar16,0);
LAB_055a9218:
      uVar16 = thunk_FUN_02ba3594(Method_System_Collections_Generic_Dictionary<int,_int>_get_Count__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar20,uVar16);
    }
    lVar25 = plVar15[5];
    if (lVar25 == 0) goto LAB_055a90bc;
    uVar3 = *(uint *)(lVar25 + 0x18);
    lVar29 = (long)(int)uVar3;
    if (*(uint *)(lVar22 + 0x18) <= uVar3) goto LAB_055a90d8;
    *(undefined1 *)(lVar22 + lVar29 + 0x20) = 1;
    if ((int)param_1[0x1b] != 0) {
      uVar20 = FUN_055aa86c(param_1,plVar15);
      FUN_055a9fdc(uVar20,lVar25,param_3,uVar20,param_4 & 1);
      if (plVar15[6] != 0) {
        plVar24 = (long *)plVar15[5];
        if (plVar24 == (long *)0x0) goto LAB_055a90bc;
        bVar1 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                         0x130);
        if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
LAB_055a9160:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44();
        }
        FUN_055b75ac(plVar24,param_3,plVar15[6],0);
      }
      goto LAB_055a80dc;
    }
    lVar25 = *(long *)(lVar25 + 0x28);
    if (lVar25 == 0) goto LAB_055a90bc;
    if (*(int *)(lVar25 + 0x20) == 1) {
      if ((local_d0 == 0) || (lVar26 = *(long *)(local_d0 + 0x18), lVar26 == 0)) goto LAB_055a90bc;
      if (*(uint *)(lVar26 + 0x18) <= uVar3) goto LAB_055a90d8;
      uVar12 = FUN_055a54cc(param_1,*(undefined8 *)(lVar25 + 0x18),*(undefined8 *)PTR_DAT_06321df8,0
                            ,lVar26 + lVar29 * 8 + 0x20);
    }
    else {
      if ((local_d0 == 0) || (lVar25 = *(long *)(local_d0 + 0x18), lVar25 == 0)) goto LAB_055a90bc;
      if (*(uint *)(lVar25 + 0x18) <= uVar3) goto LAB_055a90d8;
      uVar12 = FUN_055a5468(param_1,lVar25 + lVar29 * 8 + 0x20);
    }
    uVar17 = FUN_055b6730(plVar15,0);
    if ((uVar17 & 1) != 0) {
      plVar24 = (long *)plVar15[5];
      if ((plVar24 == (long *)0x0) || (lVar25 = *(long *)(local_d0 + 0x18), lVar25 == 0))
      goto LAB_055a90bc;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(plVar24 + 3)) goto LAB_055a90d8;
      if (*(long *)(lVar25 + (long)(int)*(uint *)(plVar24 + 3) * 8 + 0x20) == 0) goto LAB_055a7f80;
      goto LAB_055a80dc;
    }
    if (uVar12 == 0) goto LAB_055a80dc;
    plVar24 = (long *)plVar15[5];
  }
  else {
    plVar24 = (long *)param_1[3];
    if (plVar24 == (long *)0x0) goto LAB_055a90bc;
    iVar10 = (**(code **)(*plVar24 + 0x198))(plVar24,*(undefined8 *)(*plVar24 + 0x1a0));
    if (iVar10 != 3) {
      plVar24 = (long *)param_1[3];
      if (plVar24 != (long *)0x0) {
        iVar10 = (**(code **)(*plVar24 + 0x198))(plVar24,*(undefined8 *)(*plVar24 + 0x1a0));
        if (iVar10 == 4) goto LAB_055a7cec;
LAB_055a7e18:
        uVar20 = FUN_055a5c54(param_1,0);
        FUN_055a59dc(param_1,uVar20,param_3,0);
        goto LAB_055a80dc;
      }
      goto LAB_055a90bc;
    }
LAB_055a7cec:
    plVar24 = *(long **)(param_2 + 0x68);
    if (plVar24 == (long *)0x0) goto LAB_055a7e18;
    lVar25 = *plVar24;
    bVar1 = *(byte *)(lVar25 + 0x130);
    bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__
                     + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar25 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__)) {
      bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                       0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar25 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
        if (plVar24[5] == 0) goto LAB_055a90bc;
        lVar25 = FUN_0559102c(plVar24[5],0);
      }
      else {
        if ((plVar24[0x10] == 0) || (lVar25 = FUN_055ba48c(plVar24[0x10],0), lVar25 == 0))
        goto LAB_055a90bc;
        lVar25 = *(long *)(lVar25 + 0x48);
      }
      if (lVar25 != 0) {
        uVar20 = *(undefined8 *)(lVar25 + 0x10);
        lVar29 = *(long *)(puVar30 + 0x90);
        if (*(int *)(*(long *)(puVar30 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar16 = FUN_04d8a7b0(lVar29 + 0x20,0);
        uVar12 = FUN_04d938a0(uVar20,uVar16,0);
        if ((uVar12 & 1) == 0) {
          uVar20 = FUN_055aaa14(param_1,lVar25,0);
        }
        else {
          plVar14 = (long *)param_1[3];
          if (plVar14 == (long *)0x0) goto LAB_055a90bc;
          uVar20 = (**(code **)(*plVar14 + 0x528))(plVar14,*(undefined8 *)(*plVar14 + 0x530));
        }
        if ((plVar11 != (long *)0x0) && (lVar23 != 0)) {
          uVar3 = *(uint *)(plVar24 + 0xf);
          lVar25 = (long)(int)uVar3;
          if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_055a90d8;
          lVar29 = plVar24[5];
          iVar10 = *(int *)(lVar21 + lVar25 * 4);
          *(int *)(lVar21 + lVar25 * 4) = iVar10 + 1;
          if (*(uint *)(plVar11 + 3) <= uVar3) goto LAB_055a90d8;
          FUN_055aa240(uVar20,lVar29,plVar11 + lVar25 + 4,iVar10,uVar20,1);
          goto LAB_055a80dc;
        }
      }
      goto LAB_055a90bc;
    }
    bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__ +
                     0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar25 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)Method_System_Collections_Generic_Dictionary<int,_bool>__ctor__)) {
LAB_055a9104:
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(plVar24);
    }
    plVar14 = (long *)FUN_055b1960(plVar24,0);
    if ((plVar14 == (long *)0x0) ||
       (plVar14 = (long *)(**(code **)(*plVar14 + 0x2e8))
                                    (plVar14,0,*(undefined8 *)(*plVar14 + 0x2f0)),
       plVar14 == (long *)0x0)) goto LAB_055a90bc;
    bVar1 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__
                     + 0x130);
    if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_Add__))
    goto LAB_055a9118;
    if (plVar14[9] == 0) goto LAB_055a90bc;
    uVar20 = *(undefined8 *)(plVar14[9] + 0x10);
    lVar25 = *(long *)(puVar30 + 0x90);
    if (*(int *)(*(long *)(puVar30 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar16 = FUN_04d8a7b0(lVar25 + 0x20,0);
    uVar12 = FUN_04d938a0(uVar20,uVar16,0);
    plVar15 = (long *)param_1[3];
    if ((uVar12 & 1) == 0) {
      if (plVar15 != (long *)0x0) {
        uVar20 = (**(code **)(*plVar15 + 0x528))(plVar15,*(undefined8 *)(*plVar15 + 0x530));
        uVar17 = System_Net_HttpWebResponse__System_IDisposable_Dispose
                           (param_1,uVar20,plVar14[9],plVar14[8]);
        uVar12 = uVar17;
        goto LAB_055a7f80;
      }
      goto LAB_055a90bc;
    }
    if (plVar15 == (long *)0x0) goto LAB_055a90bc;
    uVar17 = (**(code **)(*plVar15 + 0x528))(plVar15,*(undefined8 *)(*plVar15 + 0x530));
    uVar12 = uVar17;
  }
LAB_055a7f80:
  FUN_055a9fdc(uVar17,plVar24,param_3,uVar12,param_4 & 1);
LAB_055a80dc:
  plVar24 = (long *)param_1[3];
  if (plVar24 == (long *)0x0) goto LAB_055a90bc;
  (**(code **)(*plVar24 + 0x538))(plVar24,*(undefined8 *)(*plVar24 + 0x540));
  plVar24 = (long *)param_1[3];
  if (plVar24 == (long *)0x0) goto LAB_055a90bc;
  goto LAB_055a7c24;
joined_r0x055a8b44:
  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar21 = *plVar24;
  lVar22 = *(long *)puVar6;
  uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar12 != 0) {
    piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == lVar22) {
        puVar13 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
        goto LAB_055a8ba0;
      }
      uVar12 = uVar12 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_02b7654c(plVar24,lVar22,0);
LAB_055a8ba0:
  uVar12 = (*(code *)*puVar13)(plVar24,puVar13[1]);
  puVar5 = PTR_DAT_06312f78;
  if ((uVar12 & 1) == 0) {
    plVar11 = (long *)thunk_FUN_02b79548(plVar24,*(undefined8 *)PTR_DAT_06312f78);
    if (plVar11 == (long *)0x0) goto LAB_055a8df0;
    lVar22 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar12 == 0) goto LAB_055a8db8;
    piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
    goto LAB_055a8da0;
  }
  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar21 = *plVar24;
  lVar22 = *(long *)puVar6;
  uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
  if (uVar12 != 0) {
    piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
    do {
      if (*(long *)(piVar27 + -2) == lVar22) {
        puVar13 = (undefined8 *)(lVar21 + (long)(*piVar27 + 1) * 0x10 + 0x138);
        goto LAB_055a8c08;
      }
      uVar12 = uVar12 - 1;
      piVar27 = piVar27 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_02b7654c(plVar24,lVar22,1);
LAB_055a8c08:
  plVar14 = (long *)(*(code *)*puVar13)(plVar24,puVar13[1]);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
  if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3ce44(plVar14);
  }
  if (*(uint *)(plVar11 + 3) <= *(uint *)(plVar14 + 0xf)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  if (plVar14[5] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar22 = *(long *)(plVar14[5] + 0x10);
  if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar15 = (long *)plVar11[(long)(int)*(uint *)(plVar14 + 0xf) + 4];
  plVar19 = (long *)FUN_04d952d0(lVar22,0);
  if (((ulong)plVar19 & 1) != 0) {
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(plVar14 + 0xf)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    if (plVar14[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    plVar19 = *(long **)(plVar14[5] + 0x10);
    if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar8 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(plVar14 + 0xf) * 4 + 0x20);
    uVar20 = (**(code **)(*plVar19 + 0x418))(plVar19,*(undefined8 *)(*plVar19 + 0x420));
    if (plVar15 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)(puVar30 + 0xa0) + 0x130);
      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(puVar30 + 0xa0))
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(plVar15);
      }
    }
    plVar19 = (long *)FUN_055a5dd8(uVar20,plVar15,uVar8,uVar20,1);
    plVar15 = plVar19;
  }
  uVar12 = FUN_055aa688(plVar19,plVar14,plVar14[5],param_3,param_4 & 1);
  if ((uVar12 & 1) == 0) {
    if (plVar14[5] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar22 = *(long *)(plVar14[5] + 0x10);
    if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar12 = FUN_04d952d0(lVar22,0);
    if ((uVar12 & 1) != 0) {
      FUN_055a9fdc(uVar12,plVar14,param_3,plVar15,param_4 & 1);
    }
  }
  goto joined_r0x055a8b44;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar27 = piVar27 + 4;
    if (uVar12 == 0) break;
LAB_055a8da0:
    if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_055a8dd4;
    }
  }
LAB_055a8db8:
  puVar13 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar5,0);
LAB_055a8dd4:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
LAB_055a8df0:
  if (local_b0 != (long *)0x0) {
    plVar11 = *(long **)(param_2 + 0x30);
    if (plVar11 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      puVar4 = Method_System_Collections_Generic_Dictionary<int,_int>_ContainsKey__;
      puVar6 = PTR_DAT_06312f90;
      do {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar21 = *plVar11;
        lVar22 = *(long *)puVar6;
        uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar12 != 0) {
          piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar22) {
              puVar13 = (undefined8 *)(lVar21 + (long)*piVar27 * 0x10 + 0x138);
              goto LAB_055a8e8c;
            }
            uVar12 = uVar12 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02b7654c(plVar11,lVar22,0);
LAB_055a8e8c:
        uVar12 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        puVar5 = PTR_DAT_06312f78;
        if ((uVar12 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_02b79548(plVar11,*(undefined8 *)PTR_DAT_06312f78);
          if (plVar11 == (long *)0x0) goto LAB_055a9084;
          lVar22 = *plVar11;
          uVar12 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar12 == 0) goto LAB_055a904c;
          piVar27 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          goto LAB_055a9034;
        }
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar21 = *plVar11;
        lVar22 = *(long *)puVar6;
        uVar12 = (ulong)*(ushort *)(lVar21 + 0x12e);
        if (uVar12 != 0) {
          piVar27 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
          do {
            if (*(long *)(piVar27 + -2) == lVar22) {
              puVar13 = (undefined8 *)(lVar21 + (long)(*piVar27 + 1) * 0x10 + 0x138);
              goto LAB_055a8ef4;
            }
            uVar12 = uVar12 - 1;
            piVar27 = piVar27 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02b7654c(plVar11,lVar22,1);
LAB_055a8ef4:
        plVar24 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
        if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar24 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar24 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar24);
        }
        uVar3 = *(uint *)(plVar24 + 0xf);
        if (*(uint *)(local_b0 + 3) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        plVar14 = (long *)local_b0[(long)(int)uVar3 + 4];
        if (plVar14 != (long *)0x0) {
          if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar23 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          if (plVar24[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar15 = *(long **)(plVar24[0xe] + 0x10);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar8 = *(undefined4 *)(lVar23 + (long)(int)uVar3 * 4 + 0x20);
          uVar20 = (**(code **)(*plVar15 + 0x418))(plVar15,*(undefined8 *)(*plVar15 + 0x420));
          bVar1 = *(byte *)(*(long *)(puVar30 + 0xa0) + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)(puVar30 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(plVar14);
          }
          uVar20 = FUN_055a5dd8(uVar20,plVar14,uVar8,uVar20,1);
          FUN_055b7064(param_3,plVar24[0xc],uVar20,0);
        }
      } while( true );
    }
    goto LAB_055a90bc;
  }
  goto LAB_055a9084;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar27 = piVar27 + 4;
    if (uVar12 == 0) break;
LAB_055a9034:
    if (*(long *)(piVar27 + -2) == *(long *)puVar5) {
      puVar13 = (undefined8 *)(lVar22 + (long)*piVar27 * 0x10 + 0x138);
      goto LAB_055a9068;
    }
  }
LAB_055a904c:
  puVar13 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar5,0);
LAB_055a9068:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
LAB_055a9084:
  FUN_055aa544(param_1,param_2,param_3,param_4 & 1);
  return;
}


