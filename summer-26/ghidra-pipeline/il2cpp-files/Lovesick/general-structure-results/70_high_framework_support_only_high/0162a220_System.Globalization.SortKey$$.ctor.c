/*
FUNCTION_NAME: System.Globalization.SortKey$$.ctor
ENTRY_POINT: 0162a220
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_20;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Globalization_SortKey___ctor(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long in_x9;
  int *piVar11;
  long lVar12;
  undefined4 *puVar13;
  int unaff_w20;
  long *unaff_x21;
  undefined8 uVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 *in_stack_00000058;
  
  piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
                    /* try { // try from 0162a22c to 0172a38b has its CatchHandler @ 0162a22c
                       catch() { ... } // from try @ 0162a22c with catch @ 0162a22c
                       catch() { ... } // from try @ 0162a598 with catch @ 0162a22c
                       catch() { ... } // from try @ 0162a674 with catch @ 0162a22c
                       catch() { ... } // from try @ 0162a70c with catch @ 0162a22c
                       catch() { ... } // from try @ 0162a75c with catch @ 0162a22c */
    if (*(long *)(piVar11 + -2) == param_3) {
      puVar6 = (undefined8 *)(param_1 + (long)(*piVar11 + 2) * 0x10 + 0x138);
      goto LAB_0162a260;
    }
    in_x9 = in_x9 + -1;
    piVar11 = piVar11 + 4;
  } while (in_x9 != 0);
  puVar6 = (undefined8 *)FUN_00d59724();
LAB_0162a260:
  uVar7 = (*(code *)*puVar6)();
  if ((uVar7 & 1) != 0) {
    in_stack_00000058[0x14] = *(int *)(unaff_x25 + 0x4c) * unaff_w20;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar12 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
    lVar8 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar8 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_00d5941c();
    }
    plVar9 = (long *)**(long **)(lVar8 + 0xb8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar10 = (**(code **)(*plVar9 + 0x178))
                       (plVar9,in_stack_00000058[0x14],*(undefined8 *)(*plVar9 + 0x180));
    *(undefined8 *)(in_stack_00000058 + 0x16) = uVar10;
    *(undefined8 *)(in_stack_00000058 + 0x18) = 0;
    in_stack_00000020 = (long)&stack0x00000050 + 4;
    in_stack_00000028 = &stack0x00000058;
    in_stack_00000018 = 0;
    if (in_stack_00000050._4_4_ == 0) {
      _in_stack_00000040 = *(undefined1 (*) [16])(in_stack_00000058 + 0x1a);
      *(undefined8 *)(in_stack_00000058 + 0x1a) = 0;
      *(undefined8 *)(in_stack_00000058 + 0x1c) = 0;
      in_stack_00000050._4_4_ = -1;
      *in_stack_00000058 = 0xffffffff;
LAB_0162a3f8:
      iVar5 = FUN_00bd8758(&stack0x00000040,*unaff_x28);
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
LAB_0162a440:
      iVar2 = *(int *)(unaff_x25 + 0x48);
      if (iVar2 + iVar5 < *(int *)(unaff_x25 + 0x4c)) {
        FUN_0179eccc(*(undefined8 *)(in_stack_00000058 + 0x16),iVar2,
                     *(undefined8 *)(unaff_x25 + 0x40),iVar2,iVar5,0);
        *(int *)(unaff_x25 + 0x48) = iVar2 + iVar5;
      }
      else {
        FUN_0179eccc(*(undefined8 *)(unaff_x25 + 0x40),0,*(undefined8 *)(in_stack_00000058 + 0x16),0
                     ,iVar2,0);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_00bd8038(&stack0x00000008,*(undefined8 *)(unaff_x25 + 0x40),0,
                     *(undefined4 *)(unaff_x25 + 0x48),*unaff_x24);
        FUN_0162ae10(in_stack_00000008,in_stack_00000010,0);
        iVar2 = *(int *)(unaff_x25 + 0x48);
        iVar1 = *(int *)(unaff_x25 + 0x4c);
        *(undefined4 *)(unaff_x25 + 0x48) = 0;
        iVar2 = iVar2 + iVar5;
        iVar5 = 0;
        if (iVar1 != 0) {
          iVar5 = iVar2 / iVar1;
        }
        iVar1 = iVar5 * iVar1;
        iVar2 = iVar2 - iVar1;
        if (iVar2 != 0) {
          *(int *)(unaff_x25 + 0x48) = iVar2;
          FUN_0179eccc(*(undefined8 *)(in_stack_00000058 + 0x16),iVar1,
                       *(undefined8 *)(unaff_x25 + 0x40),0,iVar2,0);
        }
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar12 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar8 = *(long *)(lVar12 + 0x20);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = *(long *)(lVar12 + 0x20);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        plVar9 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar10 = (**(code **)(*plVar9 + 0x178))
                           (plVar9,*(int *)(unaff_x25 + 0x5c) * iVar5,
                            *(undefined8 *)(*plVar9 + 0x180));
        *(undefined8 *)(in_stack_00000058 + 0x18) = uVar10;
        plVar9 = *(long **)(unaff_x25 + 0x30);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar8 = *plVar9;
        uVar14 = *(undefined8 *)(in_stack_00000058 + 0x16);
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x27) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_0162a5f0;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x27,3);
LAB_0162a5f0:
        iVar5 = (*(code *)*puVar6)(plVar9,uVar14,0,iVar1,uVar10,0,puVar6[1]);
        FUN_0179eccc(*(undefined8 *)(in_stack_00000058 + 0x18),0,
                     *(undefined8 *)(in_stack_00000058 + 0xc),in_stack_00000058[0x13],iVar5,0);
        in_stack_00000008 = 0;
        in_stack_00000010 = 0;
        FUN_00bd8038(&stack0x00000008,*(undefined8 *)(in_stack_00000058 + 0x18),0,iVar5,*unaff_x24);
        FUN_0162ae10(in_stack_00000008,in_stack_00000010,0);
        lVar12 = *(long *)OVRPlugin_OVRP_1_95_0_TypeInfo;
        lVar8 = *(long *)(lVar12 + 0x20);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar8 = *(long *)(lVar12 + 0x20);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
        if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
          lVar8 = FUN_00d5941c();
        }
        plVar9 = (long *)**(long **)(lVar8 + 0xb8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        (**(code **)(*plVar9 + 0x188))
                  (plVar9,*(undefined8 *)(in_stack_00000058 + 0x18),0,*(undefined8 *)(*plVar9 + 400)
                  );
        *(undefined8 *)(in_stack_00000058 + 0x18) = 0;
        in_stack_00000058[0x12] = in_stack_00000058[0x12] - iVar5;
        in_stack_00000058[0x13] = in_stack_00000058[0x13] + iVar5;
      }
      iVar5 = 0x11;
    }
    else {
      if (*(char *)(in_stack_00000058 + 0xe) == '\0') {
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar9 = *(long **)(unaff_x25 + 0x28);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        iVar5 = (**(code **)(*plVar9 + 0x338))
                          (plVar9,*(undefined8 *)(in_stack_00000058 + 0x16),
                           *(int *)(unaff_x25 + 0x48),
                           in_stack_00000058[0x14] - *(int *)(unaff_x25 + 0x48),
                           *(undefined8 *)(*plVar9 + 0x340));
        goto LAB_0162a440;
      }
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      plVar9 = *(long **)(unaff_x25 + 0x28);
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_00bd8314(&stack0x00000008,*(undefined8 *)(in_stack_00000058 + 0x16),
                   *(int *)(unaff_x25 + 0x48),in_stack_00000058[0x14] - *(int *)(unaff_x25 + 0x48),
                   *unaff_x29);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      _in_stack_00000030 =
           (**(code **)(*plVar9 + 0x2c8))
                     (plVar9,in_stack_00000008,in_stack_00000010,
                      *(undefined8 *)(in_stack_00000058 + 0x10),*(undefined8 *)(*plVar9 + 0x2d0));
      _in_stack_00000040 = FUN_00bd8514(&stack0x00000030,*unaff_x26);
      uVar7 = FUN_00bd8690(&stack0x00000040,*unaff_x23);
      puVar13 = in_stack_00000058;
      if ((uVar7 & 1) != 0) goto LAB_0162a3f8;
      in_stack_00000050._4_4_ = 0;
      *in_stack_00000058 = 0;
      *(undefined1 (*) [16])(in_stack_00000058 + 0x1a) = _in_stack_00000040;
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_01098fc0(puVar13 + 2,&stack0x00000040,in_stack_00000058,
                   *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__);
      iVar5 = 0xc;
    }
    uVar7 = FUN_00bd88c8(&stack0x00000018);
    if ((iVar5 != 0x11) && (iVar5 != 0)) {
      return;
    }
    *(undefined8 *)(in_stack_00000058 + 0x16) = 0;
    *(undefined8 *)(in_stack_00000058 + 0x18) = 0;
  }
  while (0 < (int)in_stack_00000058[0x12]) {
    while( true ) {
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      iVar5 = *(int *)(unaff_x25 + 0x48);
      iVar2 = *(int *)(unaff_x25 + 0x4c);
      if (iVar2 - iVar5 == 0 || iVar2 < iVar5) break;
      plVar9 = *(long **)(unaff_x25 + 0x28);
      if (*(char *)(in_stack_00000058 + 0xe) == '\0') {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c(uVar7,*(undefined8 *)(unaff_x25 + 0x40),iVar5,iVar2 - iVar5);
        }
        uVar7 = (**(code **)(*plVar9 + 0x338))(plVar9);
      }
      else {
        in_stack_00000018 = 0;
        in_stack_00000020 = 0;
        FUN_00bd8314(&stack0x00000018);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        auVar15 = (**(code **)(*plVar9 + 0x2c8))
                            (plVar9,in_stack_00000018,in_stack_00000020,
                             *(undefined8 *)(in_stack_00000058 + 0x10),
                             *(undefined8 *)(*plVar9 + 0x2d0));
        _in_stack_00000030 = auVar15;
        auVar15 = FUN_00bd8514(&stack0x00000030,*unaff_x26);
        _in_stack_00000040 = auVar15;
        uVar7 = FUN_00bd8690(&stack0x00000040,*unaff_x23);
        puVar13 = in_stack_00000058;
        if ((uVar7 & 1) == 0) {
          in_stack_00000050._4_4_ = 1;
          *in_stack_00000058 = 1;
          *(undefined1 (*) [16])(in_stack_00000058 + 0x1a) = _in_stack_00000040;
          if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0)
              == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01098fc0(puVar13 + 2,&stack0x00000040,in_stack_00000058,
                       *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__);
          return;
        }
        uVar7 = FUN_00bd8758(&stack0x00000040,*unaff_x28);
      }
      if ((int)uVar7 == 0) {
        if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        plVar9 = *(long **)(unaff_x25 + 0x30);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar8 = *plVar9;
        uVar10 = *(undefined8 *)(unaff_x25 + 0x40);
        uVar3 = *(undefined4 *)(unaff_x25 + 0x48);
        uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar7 == 0) goto LAB_0162aae0;
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0162aac8;
      }
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(int *)(unaff_x25 + 0x48) = *(int *)(unaff_x25 + 0x48) + (int)uVar7;
    }
    plVar9 = *(long **)(unaff_x25 + 0x30);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar8 = *plVar9;
    uVar14 = *(undefined8 *)(unaff_x25 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x25 + 0x50);
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_0162aa0c;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x27,3);
LAB_0162aa0c:
    iVar5 = (*(code *)*puVar6)(plVar9,uVar14,0,iVar2,uVar10,0,puVar6[1]);
    *(undefined4 *)(unaff_x25 + 0x48) = 0;
    if ((int)in_stack_00000058[0x12] < iVar5) {
      FUN_0179eccc(*(undefined8 *)(unaff_x25 + 0x50),0,*(undefined8 *)(in_stack_00000058 + 0xc),
                   in_stack_00000058[0x13],in_stack_00000058[0x12],0);
      iVar2 = in_stack_00000058[0x12];
      iVar5 = iVar5 - iVar2;
      *(int *)(unaff_x25 + 0x58) = iVar5;
      FUN_0179eccc(*(undefined8 *)(unaff_x25 + 0x50),iVar2,*(undefined8 *)(unaff_x25 + 0x50),0,iVar5
                   ,0);
      lVar8 = *(long *)(unaff_x25 + 0x50);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000018 = 0;
      in_stack_00000020 = 0;
      FUN_00bd8038(&stack0x00000018,lVar8,*(int *)(unaff_x25 + 0x58),
                   *(int *)(lVar8 + 0x18) - *(int *)(unaff_x25 + 0x58),*unaff_x24);
      FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
      break;
    }
    FUN_0179eccc(*(undefined8 *)(unaff_x25 + 0x50),0,*(undefined8 *)(in_stack_00000058 + 0xc),
                 in_stack_00000058[0x13],iVar5,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    FUN_00bd8038(&stack0x00000018,*(undefined8 *)(unaff_x25 + 0x50),0,iVar5,*unaff_x24);
    uVar7 = FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
    in_stack_00000058[0x12] = in_stack_00000058[0x12] - iVar5;
    in_stack_00000058[0x13] = in_stack_00000058[0x13] + iVar5;
  }
  goto LAB_0162a8dc;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar11 = piVar11 + 4;
    if (uVar7 == 0) break;
LAB_0162aac8:
    if (*(long *)(piVar11 + -2) == *unaff_x27) {
      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 4) * 0x10 + 0x138);
      goto LAB_0162ab64;
    }
  }
LAB_0162aae0:
  puVar6 = (undefined8 *)FUN_00d59724(plVar9,*unaff_x27,4);
LAB_0162ab64:
  lVar8 = (*(code *)*puVar6)(plVar9,uVar10,0,uVar3,puVar6[1]);
  *(long *)(unaff_x25 + 0x50) = lVar8;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar5 = *(int *)(lVar8 + 0x18);
  *(undefined1 *)(unaff_x25 + 0x62) = 1;
  *(int *)(unaff_x25 + 0x58) = iVar5;
  if (iVar5 <= (int)in_stack_00000058[0x12]) {
    FUN_0179eccc(lVar8,0,*(undefined8 *)(in_stack_00000058 + 0xc),in_stack_00000058[0x13],iVar5,0);
    puVar4 = Method_RCG_Lovesick_ControllerMapping_TempoReleased__;
    in_stack_00000058[0x12] = in_stack_00000058[0x12] - *(int *)(unaff_x25 + 0x58);
    *(undefined4 *)(unaff_x25 + 0x58) = 0;
    auVar15 = FUN_013aeef8(*(undefined8 *)(unaff_x25 + 0x50),*(undefined8 *)puVar4);
    FUN_0162ae10(auVar15._0_8_,auVar15._8_8_,0);
    iVar5 = in_stack_00000058[8] - in_stack_00000058[0x12];
    goto LAB_0162a874;
  }
  FUN_0179eccc(lVar8,0,*(undefined8 *)(in_stack_00000058 + 0xc),in_stack_00000058[0x13],
               in_stack_00000058[0x12],0);
  iVar5 = in_stack_00000058[0x12];
  iVar2 = *(int *)(unaff_x25 + 0x58) - iVar5;
  *(int *)(unaff_x25 + 0x58) = iVar2;
  FUN_0179eccc(*(undefined8 *)(unaff_x25 + 0x50),iVar5,*(undefined8 *)(unaff_x25 + 0x50),0,iVar2,0);
  lVar8 = *(long *)(unaff_x25 + 0x50);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_00bd8038(&stack0x00000018,lVar8,*(int *)(unaff_x25 + 0x58),
               *(int *)(lVar8 + 0x18) - *(int *)(unaff_x25 + 0x58),*unaff_x24);
  FUN_0162ae10(in_stack_00000018,in_stack_00000020,0);
LAB_0162a8dc:
  iVar5 = in_stack_00000058[8];
LAB_0162a874:
  puVar13 = in_stack_00000058 + 2;
  *in_stack_00000058 = 0xfffffffe;
  puVar4 = StringLiteral_4871;
  if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_high_n_s32__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  in_stack_00000018 = CONCAT44(in_stack_00000018._4_4_,iVar5);
  FUN_011ccb9c(puVar13,&stack0x00000018,*(undefined8 *)puVar4);
  return;
}


