/*
FUNCTION_NAME: FUN_01629fbc
ENTRY_POINT: 01629fbc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_01629fbc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int *piVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int *piStack_a0;
  int **local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_6c;
  int *local_68;
  
  piVar12 = param_1;
  local_68 = param_1;
  if ((DAT_037781b8 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_95_0_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3600);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRNodeState>_Clear__);
    thunk_FUN_00d48444(StringLiteral_4871);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__);
    thunk_FUN_00d48444(Mono_Security_Interface_TlsException_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__
                      );
    thunk_FUN_00d48444(PTR_DAT_033edd40);
    thunk_FUN_00d48444(Method_RCG_Lovesick_ControllerMapping_TempoReleased__);
    thunk_FUN_00d48444(System_Data_ColumnTypeConverter_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12790);
    piVar12 = (int *)thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vector2>_get_Count__)
    ;
    DAT_037781b8 = 1;
  }
  puVar10 = StringLiteral_12790;
  puVar9 = Method_System_Collections_Generic_List<Vector2>_get_Count__;
  puVar8 = Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__;
  puVar7 = Mono_Security_Interface_TlsException_TypeInfo;
  puVar6 = System_Data_ColumnTypeConverter_TypeInfo;
  puVar5 = PTR_DAT_033f3600;
  puVar4 = PTR_DAT_033edd40;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_6c = *param_1;
  lVar20 = *(long *)(param_1 + 10);
  if (local_6c == 0) {
LAB_0162a31c:
    piStack_a0 = &local_6c;
    local_98 = &local_68;
    local_a8 = 0;
    if (local_6c == 0) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0x1a);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      local_6c = -1;
      *param_1 = -1;
LAB_0162a3f8:
      iVar11 = FUN_00bd8758(local_80,*(undefined8 *)puVar6);
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
LAB_0162a440:
      iVar1 = *(int *)(lVar20 + 0x48);
      if (iVar1 + iVar11 < *(int *)(lVar20 + 0x4c)) {
        FUN_0179eccc(*(undefined8 *)(local_68 + 0x16),iVar1,*(undefined8 *)(lVar20 + 0x40),iVar1,
                     iVar11,0);
        *(int *)(lVar20 + 0x48) = iVar1 + iVar11;
      }
      else {
        FUN_0179eccc(*(undefined8 *)(lVar20 + 0x40),0,*(undefined8 *)(local_68 + 0x16),0,iVar1,0);
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_00bd8038(&local_b8,*(undefined8 *)(lVar20 + 0x40),0,*(undefined4 *)(lVar20 + 0x48),
                     *(undefined8 *)puVar4);
        FUN_0162ae10(local_b8,uStack_b0,0);
        iVar1 = *(int *)(lVar20 + 0x48);
        iVar2 = *(int *)(lVar20 + 0x4c);
        *(undefined4 *)(lVar20 + 0x48) = 0;
        iVar1 = iVar1 + iVar11;
        iVar11 = 0;
        if (iVar2 != 0) {
          iVar11 = iVar1 / iVar2;
        }
        iVar2 = iVar11 * iVar2;
        iVar1 = iVar1 - iVar2;
        if (iVar1 != 0) {
          *(int *)(lVar20 + 0x48) = iVar1;
          FUN_0179eccc(*(undefined8 *)(local_68 + 0x16),iVar2,*(undefined8 *)(lVar20 + 0x40),0,iVar1
                       ,0);
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar16 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        plVar17 = (long *)**(long **)(lVar15 + 0xb8);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar18 = (**(code **)(*plVar17 + 0x178))
                           (plVar17,*(int *)(lVar20 + 0x5c) * iVar11,
                            *(undefined8 *)(*plVar17 + 0x180));
        *(undefined8 *)(local_68 + 0x18) = uVar18;
        plVar17 = *(long **)(lVar20 + 0x30);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *plVar17;
        uVar19 = *(undefined8 *)(local_68 + 0x16);
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar13 != 0) {
          piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
              puVar14 = (undefined8 *)(lVar15 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_0162a5f0;
            }
            uVar13 = uVar13 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar13 != 0);
        }
        puVar14 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar7,3);
LAB_0162a5f0:
        iVar11 = (*(code *)*puVar14)(plVar17,uVar19,0,iVar2,uVar18,0,puVar14[1]);
        FUN_0179eccc(*(undefined8 *)(local_68 + 0x18),0,*(undefined8 *)(local_68 + 0xc),
                     local_68[0x13],iVar11,0);
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_00bd8038(&local_b8,*(undefined8 *)(local_68 + 0x18),0,iVar11,*(undefined8 *)puVar4);
        FUN_0162ae10(local_b8,uStack_b0,0);
        lVar16 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        plVar17 = (long *)**(long **)(lVar15 + 0xb8);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar17 + 0x188))
                  (plVar17,*(undefined8 *)(local_68 + 0x18),0,*(undefined8 *)(*plVar17 + 400));
        iVar1 = local_68[0x12];
        iVar2 = local_68[0x13];
        local_68[0x18] = 0;
        local_68[0x19] = 0;
        local_68[0x12] = iVar1 - iVar11;
        local_68[0x13] = iVar2 + iVar11;
      }
      iVar11 = 0x11;
    }
    else {
      if ((char)param_1[0xe] == '\0') {
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar17 = *(long **)(lVar20 + 0x28);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar11 = (**(code **)(*plVar17 + 0x338))
                           (plVar17,*(undefined8 *)(param_1 + 0x16),*(int *)(lVar20 + 0x48),
                            param_1[0x14] - *(int *)(lVar20 + 0x48),
                            *(undefined8 *)(*plVar17 + 0x340));
        goto LAB_0162a440;
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar17 = *(long **)(lVar20 + 0x28);
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_00bd8314(&local_b8,*(undefined8 *)(param_1 + 0x16),*(int *)(lVar20 + 0x48),
                   param_1[0x14] - *(int *)(lVar20 + 0x48),*(undefined8 *)puVar8);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_90 = (**(code **)(*plVar17 + 0x2c8))
                           (plVar17,local_b8,uStack_b0,*(undefined8 *)(local_68 + 0x10),
                            *(undefined8 *)(*plVar17 + 0x2d0));
      local_80 = FUN_00bd8514(local_90,*(undefined8 *)puVar9);
      uVar13 = FUN_00bd8690(local_80,*(undefined8 *)puVar10);
      piVar12 = local_68;
      if ((uVar13 & 1) != 0) goto LAB_0162a3f8;
      local_6c = 0;
      *local_68 = 0;
      *(undefined1 (*) [16])(local_68 + 0x1a) = local_80;
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(piVar12 + 2,local_80,local_68,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__);
      iVar11 = 0xc;
    }
    piVar12 = (int *)FUN_00bd88c8(&local_a8);
    if ((iVar11 != 0x11) && (iVar11 != 0)) {
      return;
    }
    local_68[0x16] = 0;
    local_68[0x17] = 0;
    local_68[0x18] = 0;
    local_68[0x19] = 0;
    param_1 = local_68;
  }
  else {
    if (local_6c == 1) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0x1a);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      local_6c = -1;
      *param_1 = -1;
      local_90 = ZEXT816(0);
      goto System_Globalization_CultureData__get_CalendarIds;
    }
    iVar11 = param_1[8];
    iVar1 = param_1[9];
    param_1[0x12] = iVar11;
    param_1[0x13] = iVar1;
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar2 = *(int *)(lVar20 + 0x58);
    if (iVar2 != 0) {
      if (iVar11 < iVar2) {
        FUN_0179eccc(*(undefined8 *)(lVar20 + 0x50),0,*(undefined8 *)(param_1 + 0xc),iVar1,iVar11,0)
        ;
        FUN_0179eccc(*(undefined8 *)(lVar20 + 0x50),local_68[8],*(undefined8 *)(lVar20 + 0x50),0,
                     *(int *)(lVar20 + 0x58) - local_68[8],0);
        lVar15 = *(long *)(lVar20 + 0x50);
        iVar11 = *(int *)(lVar20 + 0x58) - local_68[8];
        *(int *)(lVar20 + 0x58) = iVar11;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        local_a8 = 0;
        piStack_a0 = (int *)0x0;
        FUN_00bd8038(&local_a8,lVar15,iVar11,*(int *)(lVar15 + 0x18) - iVar11,*(undefined8 *)puVar4)
        ;
        FUN_0162ae10(local_a8,piStack_a0,0);
        param_1 = local_68;
        goto LAB_0162a8dc;
      }
      FUN_0179eccc(*(undefined8 *)(lVar20 + 0x50),0,*(undefined8 *)(param_1 + 0xc),iVar1,iVar2,0);
      iVar11 = *(int *)(lVar20 + 0x58);
      local_68[0x12] = local_68[0x12] - iVar11;
      local_68[0x13] = local_68[0x13] + iVar11;
      lVar15 = *(long *)(lVar20 + 0x50);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_a8 = 0;
      piStack_a0 = (int *)0x0;
      FUN_00bd8038(&local_a8,lVar15,iVar11,*(int *)(lVar15 + 0x18) - iVar11,*(undefined8 *)puVar4);
      piVar12 = (int *)FUN_0162ae10(local_a8,piStack_a0,0);
      *(undefined4 *)(lVar20 + 0x58) = 0;
      param_1 = local_68;
    }
    if (*(char *)(lVar20 + 0x62) != '\0') goto LAB_0162a868;
    iVar11 = 0;
    if (*(int *)(lVar20 + 0x5c) != 0) {
      iVar11 = param_1[0x12] / *(int *)(lVar20 + 0x5c);
    }
    if (1 < iVar11) {
      plVar17 = *(long **)(lVar20 + 0x30);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar15 = *plVar17;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
            puVar14 = (undefined8 *)(lVar15 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0162a260;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar14 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar7,2);
LAB_0162a260:
      piVar12 = (int *)(*(code *)*puVar14)(plVar17,puVar14[1]);
      param_1 = local_68;
      if (((ulong)piVar12 & 1) != 0) {
        local_68[0x14] = *(int *)(lVar20 + 0x4c) * iVar11;
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar16 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar15 = *(long *)(lVar16 + 0x20);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 8);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          lVar15 = FUN_00d5941c();
        }
        plVar17 = (long *)**(long **)(lVar15 + 0xb8);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar18 = (**(code **)(*plVar17 + 0x178))
                           (plVar17,local_68[0x14],*(undefined8 *)(*plVar17 + 0x180));
        *(undefined8 *)(local_68 + 0x16) = uVar18;
        local_68[0x18] = 0;
        local_68[0x19] = 0;
        param_1 = local_68;
        goto LAB_0162a31c;
      }
    }
  }
  while (0 < param_1[0x12]) {
    while( true ) {
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar11 = *(int *)(lVar20 + 0x48);
      iVar1 = *(int *)(lVar20 + 0x4c);
      if (iVar1 - iVar11 == 0 || iVar1 < iVar11) break;
      plVar17 = *(long **)(lVar20 + 0x28);
      if ((char)local_68[0xe] == '\0') {
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(piVar12,*(undefined8 *)(lVar20 + 0x40),iVar11,iVar1 - iVar11);
        }
        piVar12 = (int *)(**(code **)(*plVar17 + 0x338))(plVar17);
      }
      else {
        local_a8 = 0;
        piStack_a0 = (int *)0x0;
        FUN_00bd8314(&local_a8);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar21 = (**(code **)(*plVar17 + 0x2c8))
                            (plVar17,local_a8,piStack_a0,*(undefined8 *)(local_68 + 0x10),
                             *(undefined8 *)(*plVar17 + 0x2d0));
        local_90 = auVar21;
        auVar21 = FUN_00bd8514(local_90,*(undefined8 *)puVar9);
        local_80 = auVar21;
        uVar13 = FUN_00bd8690(local_80,*(undefined8 *)puVar10);
        piVar12 = local_68;
        if ((uVar13 & 1) == 0) {
          local_6c = 1;
          *local_68 = 1;
          *(undefined1 (*) [16])(local_68 + 0x1a) = local_80;
          if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0)
              == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(piVar12 + 2,local_80,local_68,
                       *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__);
          return;
        }
System_Globalization_CultureData__get_CalendarIds:
        piVar12 = (int *)FUN_00bd8758(local_80,*(undefined8 *)puVar6);
      }
      if ((int)piVar12 == 0) {
        if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar17 = *(long **)(lVar20 + 0x30);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar15 = *plVar17;
        uVar18 = *(undefined8 *)(lVar20 + 0x40);
        uVar3 = *(undefined4 *)(lVar20 + 0x48);
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar13 == 0) goto LAB_0162aae0;
        piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_0162aac8;
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(int *)(lVar20 + 0x48) = *(int *)(lVar20 + 0x48) + (int)piVar12;
    }
    plVar17 = *(long **)(lVar20 + 0x30);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar15 = *plVar17;
    uVar19 = *(undefined8 *)(lVar20 + 0x40);
    uVar18 = *(undefined8 *)(lVar20 + 0x50);
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
          puVar14 = (undefined8 *)(lVar15 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0162aa0c;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar14 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar7,3);
LAB_0162aa0c:
    iVar11 = (*(code *)*puVar14)(plVar17,uVar19,0,iVar1,uVar18,0,puVar14[1]);
    *(undefined4 *)(lVar20 + 0x48) = 0;
    if (local_68[0x12] < iVar11) {
      FUN_0179eccc(*(undefined8 *)(lVar20 + 0x50),0,*(undefined8 *)(local_68 + 0xc),local_68[0x13],
                   local_68[0x12],0);
      iVar1 = local_68[0x12];
      iVar11 = iVar11 - iVar1;
      *(int *)(lVar20 + 0x58) = iVar11;
      FUN_0179eccc(*(undefined8 *)(lVar20 + 0x50),iVar1,*(undefined8 *)(lVar20 + 0x50),0,iVar11,0);
      lVar15 = *(long *)(lVar20 + 0x50);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      local_a8 = 0;
      piStack_a0 = (int *)0x0;
      FUN_00bd8038(&local_a8,lVar15,*(int *)(lVar20 + 0x58),
                   *(int *)(lVar15 + 0x18) - *(int *)(lVar20 + 0x58),*(undefined8 *)puVar4);
      FUN_0162ae10(local_a8,piStack_a0,0);
      param_1 = local_68;
      break;
    }
    FUN_0179eccc(*(undefined8 *)(lVar20 + 0x50),0,*(undefined8 *)(local_68 + 0xc),local_68[0x13],
                 iVar11,0);
    local_a8 = 0;
    piStack_a0 = (int *)0x0;
    FUN_00bd8038(&local_a8,*(undefined8 *)(lVar20 + 0x50),0,iVar11,*(undefined8 *)puVar4);
    piVar12 = (int *)FUN_0162ae10(local_a8,piStack_a0,0);
    local_68[0x12] = local_68[0x12] - iVar11;
    local_68[0x13] = local_68[0x13] + iVar11;
    param_1 = local_68;
  }
  goto LAB_0162a8dc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar12 = piVar12 + 4;
    if (uVar13 == 0) break;
LAB_0162aac8:
    if (*(long *)(piVar12 + -2) == *(long *)puVar7) {
      puVar14 = (undefined8 *)(lVar15 + (long)(*piVar12 + 4) * 0x10 + 0x138);
      goto LAB_0162ab64;
    }
  }
LAB_0162aae0:
  puVar14 = (undefined8 *)FUN_00d59724(plVar17,*(long *)puVar7,4);
LAB_0162ab64:
  lVar15 = (*(code *)*puVar14)(plVar17,uVar18,0,uVar3,puVar14[1]);
  *(long *)(lVar20 + 0x50) = lVar15;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar11 = *(int *)(lVar15 + 0x18);
  *(undefined1 *)(lVar20 + 0x62) = 1;
  *(int *)(lVar20 + 0x58) = iVar11;
  if (iVar11 <= local_68[0x12]) {
    FUN_0179eccc(lVar15,0,*(undefined8 *)(local_68 + 0xc),local_68[0x13],iVar11,0);
    puVar4 = Method_RCG_Lovesick_ControllerMapping_TempoReleased__;
    local_68[0x12] = local_68[0x12] - *(int *)(lVar20 + 0x58);
    *(undefined4 *)(lVar20 + 0x58) = 0;
    auVar21 = FUN_013aeef8(*(undefined8 *)(lVar20 + 0x50),*(undefined8 *)puVar4);
    FUN_0162ae10(auVar21._0_8_,auVar21._8_8_,0);
    param_1 = local_68;
LAB_0162a868:
    iVar11 = param_1[8] - param_1[0x12];
    goto LAB_0162a874;
  }
  FUN_0179eccc(lVar15,0,*(undefined8 *)(local_68 + 0xc),local_68[0x13],local_68[0x12],0);
  iVar11 = local_68[0x12];
  iVar1 = *(int *)(lVar20 + 0x58) - iVar11;
  *(int *)(lVar20 + 0x58) = iVar1;
  FUN_0179eccc(*(undefined8 *)(lVar20 + 0x50),iVar11,*(undefined8 *)(lVar20 + 0x50),0,iVar1,0);
  lVar15 = *(long *)(lVar20 + 0x50);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_a8 = 0;
  piStack_a0 = (int *)0x0;
  FUN_00bd8038(&local_a8,lVar15,*(int *)(lVar20 + 0x58),
               *(int *)(lVar15 + 0x18) - *(int *)(lVar20 + 0x58),*(undefined8 *)puVar4);
  FUN_0162ae10(local_a8,piStack_a0,0);
  param_1 = local_68;
LAB_0162a8dc:
  iVar11 = param_1[8];
LAB_0162a874:
  *param_1 = -2;
  puVar4 = StringLiteral_4871;
  if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  local_a8 = CONCAT44(local_a8._4_4_,iVar11);
  FUN_011ccb9c(param_1 + 2,&local_a8,*(undefined8 *)puVar4);
  return;
}


