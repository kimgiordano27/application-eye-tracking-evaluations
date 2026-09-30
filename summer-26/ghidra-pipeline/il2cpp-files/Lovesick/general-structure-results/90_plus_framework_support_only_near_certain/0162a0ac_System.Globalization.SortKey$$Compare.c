/*
FUNCTION_NAME: System.Globalization.SortKey$$Compare
ENTRY_POINT: 0162a0ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Globalization_SortKey__Compare(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int in_w8;
  long lVar11;
  int *piVar12;
  undefined4 *unaff_x19;
  long lVar13;
  long *plVar14;
  long *unaff_x21;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *unaff_x24;
  long lVar17;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000054;
  undefined4 *in_stack_00000058;
  
  puVar6 = StringLiteral_12790;
  puVar5 = Method_System_Collections_Generic_List<Vector2>_get_Count__;
  puVar4 = Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__;
  puVar18 = *(undefined8 **)(unaff_x28 + 0x288);
  lVar17 = *(long *)(unaff_x19 + 10);
  iStack0000000000000054 = in_w8;
  if (in_w8 == 0) {
LAB_0162a31c:
    in_stack_00000020 = (undefined1 *)&stack0x00000054;
    in_stack_00000028 = &stack0x00000058;
    in_stack_00000018 = 0;
    if (iStack0000000000000054 == 0) {
      _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
      *(undefined8 *)(unaff_x19 + 0x1a) = 0;
      *(undefined8 *)(unaff_x19 + 0x1c) = 0;
      iStack0000000000000054 = -1;
      *unaff_x19 = 0xffffffff;
LAB_0162a3f8:
      iVar8 = FUN_00bd8758(&stack0x00000040,*puVar18);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
LAB_0162a440:
      iVar2 = *(int *)(lVar17 + 0x48);
      if (iVar2 + iVar8 < *(int *)(lVar17 + 0x4c)) {
        FUN_0179eccc(*(undefined8 *)(in_stack_00000058 + 0x16),iVar2,*(undefined8 *)(lVar17 + 0x40),
                     iVar2,iVar8,0);
        *(int *)(lVar17 + 0x48) = iVar2 + iVar8;
      }
      else {
        FUN_0179eccc(*(undefined8 *)(lVar17 + 0x40),0,*(undefined8 *)(in_stack_00000058 + 0x16),0,
                     iVar2,0);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_00bd8038(&stack0x00000008,*(undefined8 *)(lVar17 + 0x40),0,
                     *(undefined4 *)(lVar17 + 0x48),*unaff_x24);
        FUN_0162ae10(in_stack_00000008,in_stack_00000010,0);
        iVar2 = *(int *)(lVar17 + 0x48);
        iVar1 = *(int *)(lVar17 + 0x4c);
        *(undefined4 *)(lVar17 + 0x48) = 0;
        iVar2 = iVar2 + iVar8;
        iVar8 = 0;
        if (iVar1 != 0) {
          iVar8 = iVar2 / iVar1;
        }
        iVar1 = iVar8 * iVar1;
        iVar2 = iVar2 - iVar1;
        if (iVar2 != 0) {
          *(int *)(lVar17 + 0x48) = iVar2;
          FUN_0179eccc(*(undefined8 *)(in_stack_00000058 + 0x16),iVar1,
                       *(undefined8 *)(lVar17 + 0x40),0,iVar2,0);
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar11 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar11 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        plVar14 = (long *)**(long **)(lVar11 + 0xb8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar15 = (**(code **)(*plVar14 + 0x178))
                           (plVar14,*(int *)(lVar17 + 0x5c) * iVar8,
                            *(undefined8 *)(*plVar14 + 0x180));
        *(undefined8 *)(in_stack_00000058 + 0x18) = uVar15;
        plVar14 = *(long **)(lVar17 + 0x30);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *plVar14;
        uVar16 = *(undefined8 *)(in_stack_00000058 + 0x16);
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_0162a5f0;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar9 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar14,*unaff_x27,3);
LAB_0162a5f0:
        iVar8 = (*(code *)*puVar10)(plVar14,uVar16,0,iVar1,uVar15,0,puVar10[1]);
        FUN_0179eccc(*(undefined8 *)(in_stack_00000058 + 0x18),0,
                     *(undefined8 *)(in_stack_00000058 + 0xc),in_stack_00000058[0x13],iVar8,0);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_00bd8038(&stack0x00000008,*(undefined8 *)(in_stack_00000058 + 0x18),0,iVar8,*unaff_x24);
        FUN_0162ae10(in_stack_00000008,in_stack_00000010,0);
        lVar13 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar11 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar11 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        plVar14 = (long *)**(long **)(lVar11 + 0xb8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar14 + 0x188))
                  (plVar14,*(undefined8 *)(in_stack_00000058 + 0x18),0,
                   *(undefined8 *)(*plVar14 + 400));
        *(undefined8 *)(in_stack_00000058 + 0x18) = 0;
        in_stack_00000058[0x12] = in_stack_00000058[0x12] - iVar8;
        in_stack_00000058[0x13] = in_stack_00000058[0x13] + iVar8;
      }
      iVar8 = 0x11;
    }
    else {
      if (*(char *)(unaff_x19 + 0xe) == '\0') {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar14 = *(long **)(lVar17 + 0x28);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar8 = (**(code **)(*plVar14 + 0x338))
                          (plVar14,*(undefined8 *)(unaff_x19 + 0x16),*(int *)(lVar17 + 0x48),
                           unaff_x19[0x14] - *(int *)(lVar17 + 0x48),
                           *(undefined8 *)(*plVar14 + 0x340));
        goto LAB_0162a440;
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar14 = *(long **)(lVar17 + 0x28);
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_00bd8314(&stack0x00000008,*(undefined8 *)(unaff_x19 + 0x16),*(int *)(lVar17 + 0x48),
                   unaff_x19[0x14] - *(int *)(lVar17 + 0x48),*(undefined8 *)puVar4);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      _in_stack_00000030 =
           (**(code **)(*plVar14 + 0x2c8))
                     (plVar14,in_stack_00000008,in_stack_00000010,
                      *(undefined8 *)(in_stack_00000058 + 0x10),*(undefined8 *)(*plVar14 + 0x2d0));
      _in_stack_00000040 = FUN_00bd8514(&stack0x00000030,*(undefined8 *)puVar5);
      uVar9 = FUN_00bd8690(&stack0x00000040,*(undefined8 *)puVar6);
      puVar7 = in_stack_00000058;
      if ((uVar9 & 1) != 0) goto LAB_0162a3f8;
      iStack0000000000000054 = 0;
      *in_stack_00000058 = 0;
      *(undefined1 (*) [16])(in_stack_00000058 + 0x1a) = _in_stack_00000040;
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(puVar7 + 2,&stack0x00000040,in_stack_00000058,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__);
      iVar8 = 0xc;
    }
    param_1 = FUN_00bd88c8(&stack0x00000018);
    if ((iVar8 != 0x11) && (iVar8 != 0)) {
      return;
    }
    *(undefined8 *)(in_stack_00000058 + 0x16) = 0;
    *(undefined8 *)(in_stack_00000058 + 0x18) = 0;
    unaff_x19 = in_stack_00000058;
  }
  else {
    if (in_w8 == 1) {
      _in_stack_00000040 = *(undefined1 (*) [16])(unaff_x19 + 0x1a);
      *(undefined8 *)(unaff_x19 + 0x1a) = 0;
      *(undefined8 *)(unaff_x19 + 0x1c) = 0;
      iStack0000000000000054 = -1;
      *unaff_x19 = 0xffffffff;
      goto System_Globalization_CultureData__get_CalendarIds;
    }
    iVar8 = unaff_x19[8];
    uVar3 = unaff_x19[9];
    unaff_x19[0x12] = iVar8;
    unaff_x19[0x13] = uVar3;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    iVar2 = *(int *)(lVar17 + 0x58);
    if (iVar2 != 0) {
      if (iVar8 < iVar2) {
        FUN_0179eccc(*(undefined8 *)(lVar17 + 0x50),0,*(undefined8 *)(unaff_x19 + 0xc),uVar3,iVar8,0
                    );
        FUN_0179eccc(*(undefined8 *)(lVar17 + 0x50),in_stack_00000058[8],
                     *(undefined8 *)(lVar17 + 0x50),0,*(int *)(lVar17 + 0x58) - in_stack_00000058[8]
                     ,0);
        lVar11 = *(long *)(lVar17 + 0x50);
        iVar8 = *(int *)(lVar17 + 0x58) - in_stack_00000058[8];
        *(int *)(lVar17 + 0x58) = iVar8;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        in_stack_00000018 = 0;
        in_stack_00000020 = (undefined1 *)0x0;
        FUN_00bd8038(&stack0x00000018,lVar11,iVar8,*(int *)(lVar11 + 0x18) - iVar8,*unaff_x24);
        FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
        unaff_x19 = in_stack_00000058;
        goto LAB_0162a8dc;
      }
      FUN_0179eccc(*(undefined8 *)(lVar17 + 0x50),0,*(undefined8 *)(unaff_x19 + 0xc),uVar3,iVar2,0);
      iVar8 = *(int *)(lVar17 + 0x58);
      in_stack_00000058[0x12] = in_stack_00000058[0x12] - iVar8;
      in_stack_00000058[0x13] = in_stack_00000058[0x13] + iVar8;
      lVar11 = *(long *)(lVar17 + 0x50);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000018 = 0;
      in_stack_00000020 = (undefined1 *)0x0;
      FUN_00bd8038(&stack0x00000018,lVar11,iVar8,*(int *)(lVar11 + 0x18) - iVar8,*unaff_x24);
      param_1 = FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
      *(undefined4 *)(lVar17 + 0x58) = 0;
      unaff_x19 = in_stack_00000058;
    }
    if (*(char *)(lVar17 + 0x62) != '\0') goto LAB_0162a868;
    iVar8 = 0;
    if (*(int *)(lVar17 + 0x5c) != 0) {
      iVar8 = (int)unaff_x19[0x12] / *(int *)(lVar17 + 0x5c);
    }
    if (1 < iVar8) {
      plVar14 = *(long **)(lVar17 + 0x30);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar11 = *plVar14;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0162a260;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar14,*unaff_x27,2);
LAB_0162a260:
      param_1 = (*(code *)*puVar10)(plVar14,puVar10[1]);
      unaff_x19 = in_stack_00000058;
      if ((param_1 & 1) != 0) {
        in_stack_00000058[0x14] = *(int *)(lVar17 + 0x4c) * iVar8;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar13 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar11 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar11 = *(long *)(lVar13 + 0x20);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
        if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
          lVar11 = FUN_00d5941c();
        }
        plVar14 = (long *)**(long **)(lVar11 + 0xb8);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar15 = (**(code **)(*plVar14 + 0x178))
                           (plVar14,in_stack_00000058[0x14],*(undefined8 *)(*plVar14 + 0x180));
        *(undefined8 *)(in_stack_00000058 + 0x16) = uVar15;
        *(undefined8 *)(in_stack_00000058 + 0x18) = 0;
        unaff_x19 = in_stack_00000058;
        goto LAB_0162a31c;
      }
    }
  }
  while (0 < (int)unaff_x19[0x12]) {
    while( true ) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar8 = *(int *)(lVar17 + 0x48);
      iVar2 = *(int *)(lVar17 + 0x4c);
      if (iVar2 - iVar8 == 0 || iVar2 < iVar8) break;
      plVar14 = *(long **)(lVar17 + 0x28);
      if (*(char *)(in_stack_00000058 + 0xe) == '\0') {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(param_1,*(undefined8 *)(lVar17 + 0x40),iVar8,iVar2 - iVar8);
        }
        param_1 = (**(code **)(*plVar14 + 0x338))(plVar14);
      }
      else {
        in_stack_00000018 = 0;
        in_stack_00000020 = (undefined1 *)0x0;
        FUN_00bd8314(&stack0x00000018);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar19 = (**(code **)(*plVar14 + 0x2c8))
                            (plVar14,in_stack_00000018,in_stack_00000020,
                             *(undefined8 *)(in_stack_00000058 + 0x10),
                             *(undefined8 *)(*plVar14 + 0x2d0));
        _in_stack_00000030 = auVar19;
        auVar19 = FUN_00bd8514(&stack0x00000030,*(undefined8 *)puVar5);
        _in_stack_00000040 = auVar19;
        uVar9 = FUN_00bd8690(&stack0x00000040,*(undefined8 *)puVar6);
        puVar7 = in_stack_00000058;
        if ((uVar9 & 1) == 0) {
          iStack0000000000000054 = 1;
          *in_stack_00000058 = 1;
          *(undefined1 (*) [16])(in_stack_00000058 + 0x1a) = _in_stack_00000040;
          if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0)
              == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(puVar7 + 2,&stack0x00000040,in_stack_00000058,
                       *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__);
          return;
        }
System_Globalization_CultureData__get_CalendarIds:
        param_1 = FUN_00bd8758(&stack0x00000040,*puVar18);
      }
      if ((int)param_1 == 0) {
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar14 = *(long **)(lVar17 + 0x30);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar11 = *plVar14;
        uVar15 = *(undefined8 *)(lVar17 + 0x40);
        uVar3 = *(undefined4 *)(lVar17 + 0x48);
        uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar9 == 0) goto LAB_0162aae0;
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0162aac8;
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) + (int)param_1;
    }
    plVar14 = *(long **)(lVar17 + 0x30);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar11 = *plVar14;
    uVar16 = *(undefined8 *)(lVar17 + 0x40);
    uVar15 = *(undefined8 *)(lVar17 + 0x50);
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x27) {
          puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_0162aa0c;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar14,*unaff_x27,3);
LAB_0162aa0c:
    iVar8 = (*(code *)*puVar10)(plVar14,uVar16,0,iVar2,uVar15,0,puVar10[1]);
    *(undefined4 *)(lVar17 + 0x48) = 0;
    if ((int)in_stack_00000058[0x12] < iVar8) {
      FUN_0179eccc(*(undefined8 *)(lVar17 + 0x50),0,*(undefined8 *)(in_stack_00000058 + 0xc),
                   in_stack_00000058[0x13],in_stack_00000058[0x12],0);
      iVar2 = in_stack_00000058[0x12];
      iVar8 = iVar8 - iVar2;
      *(int *)(lVar17 + 0x58) = iVar8;
      FUN_0179eccc(*(undefined8 *)(lVar17 + 0x50),iVar2,*(undefined8 *)(lVar17 + 0x50),0,iVar8,0);
      lVar11 = *(long *)(lVar17 + 0x50);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000018 = 0;
      in_stack_00000020 = (undefined1 *)0x0;
      FUN_00bd8038(&stack0x00000018,lVar11,*(int *)(lVar17 + 0x58),
                   *(int *)(lVar11 + 0x18) - *(int *)(lVar17 + 0x58),*unaff_x24);
      FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
      unaff_x19 = in_stack_00000058;
      break;
    }
    FUN_0179eccc(*(undefined8 *)(lVar17 + 0x50),0,*(undefined8 *)(in_stack_00000058 + 0xc),
                 in_stack_00000058[0x13],iVar8,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = (undefined1 *)0x0;
    FUN_00bd8038(&stack0x00000018,*(undefined8 *)(lVar17 + 0x50),0,iVar8,*unaff_x24);
    param_1 = FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
    in_stack_00000058[0x12] = in_stack_00000058[0x12] - iVar8;
    in_stack_00000058[0x13] = in_stack_00000058[0x13] + iVar8;
    unaff_x19 = in_stack_00000058;
  }
  goto LAB_0162a8dc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar12 = piVar12 + 4;
    if (uVar9 == 0) break;
LAB_0162aac8:
    if (*(long *)(piVar12 + -2) == *unaff_x27) {
      puVar18 = (undefined8 *)(lVar11 + (long)(*piVar12 + 4) * 0x10 + 0x138);
      goto LAB_0162ab64;
    }
  }
LAB_0162aae0:
  puVar18 = (undefined8 *)FUN_00d59724(plVar14,*unaff_x27,4);
LAB_0162ab64:
  lVar11 = (*(code *)*puVar18)(plVar14,uVar15,0,uVar3,puVar18[1]);
  *(long *)(lVar17 + 0x50) = lVar11;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar8 = *(int *)(lVar11 + 0x18);
  *(undefined1 *)(lVar17 + 0x62) = 1;
  *(int *)(lVar17 + 0x58) = iVar8;
  if (iVar8 <= (int)in_stack_00000058[0x12]) {
    FUN_0179eccc(lVar11,0,*(undefined8 *)(in_stack_00000058 + 0xc),in_stack_00000058[0x13],iVar8,0);
    puVar4 = Method_RCG_Lovesick_ControllerMapping_TempoReleased__;
    in_stack_00000058[0x12] = in_stack_00000058[0x12] - *(int *)(lVar17 + 0x58);
    *(undefined4 *)(lVar17 + 0x58) = 0;
    auVar19 = FUN_013aeef8(*(undefined8 *)(lVar17 + 0x50),*(undefined8 *)puVar4);
    FUN_0162ae10(auVar19._0_8_,auVar19._8_8_,0);
    unaff_x19 = in_stack_00000058;
LAB_0162a868:
    iVar8 = unaff_x19[8] - unaff_x19[0x12];
    goto LAB_0162a874;
  }
  FUN_0179eccc(lVar11,0,*(undefined8 *)(in_stack_00000058 + 0xc),in_stack_00000058[0x13],
               in_stack_00000058[0x12],0);
  iVar8 = in_stack_00000058[0x12];
  iVar2 = *(int *)(lVar17 + 0x58) - iVar8;
  *(int *)(lVar17 + 0x58) = iVar2;
  FUN_0179eccc(*(undefined8 *)(lVar17 + 0x50),iVar8,*(undefined8 *)(lVar17 + 0x50),0,iVar2,0);
  lVar11 = *(long *)(lVar17 + 0x50);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = (undefined1 *)0x0;
  FUN_00bd8038(&stack0x00000018,lVar11,*(int *)(lVar17 + 0x58),
               *(int *)(lVar11 + 0x18) - *(int *)(lVar17 + 0x58),*unaff_x24);
  FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
  unaff_x19 = in_stack_00000058;
LAB_0162a8dc:
  iVar8 = unaff_x19[8];
LAB_0162a874:
  *unaff_x19 = 0xfffffffe;
  puVar4 = StringLiteral_4871;
  if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,iVar8);
  FUN_011ccb9c(unaff_x19 + 2,&stack0x00000018,*(undefined8 *)puVar4);
  return;
}


