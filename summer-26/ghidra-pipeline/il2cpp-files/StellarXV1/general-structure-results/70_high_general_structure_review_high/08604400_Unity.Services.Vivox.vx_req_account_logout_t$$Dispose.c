/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_logout_t$$Dispose
ENTRY_POINT: 08604400
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08604920) */

void Unity_Services_Vivox_vx_req_account_logout_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  FUN_04077588(PTR_DAT_09333040);
  *(undefined1 *)(unaff_x21 + 0xba) = 1;
  puVar2 = PTR_DAT_0928e018;
  in_stack_00000050 = 0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  lVar6 = thunk_FUN_040b4efc(*unaff_x26);
  FUN_0779adf0(lVar6,0);
  lVar7 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_077a7b94(lVar7,*unaff_x20,lVar6,0);
  if (unaff_x22 != (long *)0x0) {
    lVar15 = *unaff_x22;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092fae48) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_086044b4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00();
LAB_086044b4:
    puVar3 = PTR_DAT_092fae50;
    puVar1 = PTR_DAT_092860c8;
    in_stack_00000058 = (long *)(*(code *)*puVar8)();
    in_stack_00000010 = &stack0x00000058;
    in_stack_00000008 = 0;
    do {
      plVar13 = in_stack_00000058;
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *in_stack_00000058;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_08604530;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)puVar1,0);
LAB_08604530:
      uVar16 = (*(code *)*puVar8)(plVar13,puVar8[1]);
      plVar13 = in_stack_00000058;
      if ((uVar16 & 1) == 0) {
        if (in_stack_00000058 == (long *)0x0) break;
        lVar6 = *in_stack_00000058;
        uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar16 == 0) goto LAB_08604628;
        piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_08604610;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar15 = *in_stack_00000058;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_08604594;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)puVar3,0);
LAB_08604594:
      (*(code *)*puVar8)(plVar13,puVar8[1]);
      uVar9 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose();
      uVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_077a5da0(uVar10,uVar9,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0779bbb8(lVar6,uVar10,0);
    } while( true );
  }
  goto LAB_08604654;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_08604610:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_08604644;
    }
  }
LAB_08604628:
  puVar8 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)PTR_DAT_092860c0,0);
LAB_08604644:
  (*(code *)*puVar8)(plVar13,puVar8[1]);
LAB_08604654:
  puVar1 = PTR_DAT_09333040;
  lVar6 = thunk_FUN_040b4efc(*unaff_x26);
  FUN_0779adf0(lVar6,0);
  lVar15 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_077a7b94(lVar15,*(undefined8 *)puVar1,lVar6,0);
  if (((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) &&
     (lVar11 = FUN_06e22f84(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_09332ff8),
     puVar5 = PTR_DAT_09333018, puVar4 = PTR_DAT_09333010, puVar3 = PTR_DAT_09333008,
     puVar1 = PTR_DAT_092b6918, lVar11 != 0)) {
    FUN_059ad2b0(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_09333038);
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000040;
    while (uVar16 = FUN_05365548(&stack0x00000040,*(undefined8 *)puVar5), (uVar16 & 1) != 0) {
      uVar9 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(uVar9,uVar9);
      }
      FUN_0779bbb8(lVar6,uVar9,0);
    }
    FUN_05365544(&stack0x00000040,*(undefined8 *)puVar3);
    lVar6 = thunk_FUN_040b4efc(*unaff_x26);
    FUN_0779adf0(lVar6,0);
    lVar11 = thunk_FUN_040b4efc(*unaff_x25);
    FUN_077a7b94(lVar11,*(undefined8 *)puVar1,lVar6,0);
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar12 = FUN_06e22f84(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_09332ff0),
       lVar12 != 0)) {
      FUN_059ad2b0(&stack0x00000008,lVar12,*(undefined8 *)PTR_DAT_09333030);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      while (uVar16 = FUN_05365548(&stack0x00000020,*(undefined8 *)puVar4), (uVar16 & 1) != 0) {
        uVar9 = FUN_08605178();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar9,uVar9);
        }
        FUN_0779bbb8(lVar6,uVar9,0);
      }
      FUN_05365544(&stack0x00000020,*(undefined8 *)PTR_DAT_09333000);
      plVar13 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
      if (plVar13 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar6 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0)) {
LAB_08604914:
          uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar9,0);
        }
        if ((int)plVar13[3] != 0) {
          plVar13[4] = lVar7;
          thunk_FUN_040ec700(plVar13 + 4,lVar7);
          if ((lVar15 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0))
          goto LAB_08604914;
          if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
            plVar13[5] = lVar15;
            thunk_FUN_040ec700(plVar13 + 5,lVar15);
            if ((lVar11 != 0) &&
               (lVar6 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0))
            goto LAB_08604914;
            if (2 < *(uint *)(plVar13 + 3)) {
              plVar13[6] = lVar11;
              thunk_FUN_040ec700(plVar13 + 6,lVar11);
              plVar14 = (long *)thunk_FUN_040b4efc(*(undefined8 *)puVar2);
              thunk_FUN_077a5e98(plVar14,plVar13,0);
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
                return;
              }
              goto LAB_0860490c;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
    }
  }
LAB_0860490c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


