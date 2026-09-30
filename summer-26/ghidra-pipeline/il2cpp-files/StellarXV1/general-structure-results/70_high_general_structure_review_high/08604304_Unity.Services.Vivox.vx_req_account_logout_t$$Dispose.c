/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_logout_t$$Dispose
ENTRY_POINT: 08604304
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

void Unity_Services_Vivox_vx_req_account_logout_t__Dispose(ulong param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000050;
  long *in_stack_00000058;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09332ff0);
    FUN_04077588(PTR_DAT_09332ff8);
    FUN_04077588(PTR_DAT_09333000);
    FUN_04077588(PTR_DAT_09333008);
    FUN_04077588(PTR_DAT_09333010);
    FUN_04077588(PTR_DAT_09333018);
    FUN_04077588(PTR_DAT_09333020);
    FUN_04077588(PTR_DAT_09333028);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092fae48);
    FUN_04077588(PTR_DAT_092fae50);
    FUN_04077588(PTR_DAT_092860c8);
    FUN_04077588(PTR_DAT_092942a0);
    FUN_04077588(PTR_DAT_0928e018);
    FUN_04077588(PTR_DAT_092bc9f0);
    FUN_04077588(PTR_DAT_09333030);
    FUN_04077588(PTR_DAT_09333038);
    FUN_04077588(PTR_DAT_09287040);
    FUN_04077588(PTR_DAT_09332fe8);
    FUN_04077588(PTR_DAT_092b6918);
    FUN_04077588(PTR_DAT_09333040);
    *(undefined1 *)(unaff_x21 + 0xba) = 1;
  }
  puVar2 = PTR_DAT_0928e018;
  in_stack_00000050 = 0;
  in_stack_00000058 = (long *)0x0;
  in_stack_00000040 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  lVar7 = thunk_FUN_040b4efc(*unaff_x26);
  FUN_0779adf0(lVar7,0);
  lVar8 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_077a7b94(lVar8,*unaff_x20,lVar7,0);
  if (param_3 != (long *)0x0) {
    lVar16 = *param_3;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092fae48) {
          puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_086044b4;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_040b1e00(param_3,*(long *)PTR_DAT_092fae48,0);
LAB_086044b4:
    puVar3 = PTR_DAT_092fae50;
    puVar1 = PTR_DAT_092860c8;
    in_stack_00000058 = (long *)(*(code *)*puVar9)(param_3,puVar9[1]);
    in_stack_00000010 = &stack0x00000058;
    in_stack_00000008 = 0;
    do {
      plVar14 = in_stack_00000058;
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar16 = *in_stack_00000058;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_08604530;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)puVar1,0);
LAB_08604530:
      uVar17 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      plVar14 = in_stack_00000058;
      if ((uVar17 & 1) == 0) {
        if (in_stack_00000058 == (long *)0x0) break;
        lVar7 = *in_stack_00000058;
        uVar17 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar17 == 0) goto LAB_08604628;
        piVar18 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_08604610;
      }
      if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar16 = *in_stack_00000058;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_08604594;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)puVar3,0);
LAB_08604594:
      uVar6 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar10 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose(param_2,uVar6);
      uVar11 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_077a5da0(uVar11,uVar10,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0779bbb8(lVar7,uVar11,0);
    } while( true );
  }
  goto LAB_08604654;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_08604610:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_08604644;
    }
  }
LAB_08604628:
  puVar9 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)PTR_DAT_092860c0,0);
LAB_08604644:
  (*(code *)*puVar9)(plVar14,puVar9[1]);
LAB_08604654:
  puVar1 = PTR_DAT_09333040;
  lVar7 = thunk_FUN_040b4efc(*unaff_x26);
  FUN_0779adf0(lVar7,0);
  lVar16 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_077a7b94(lVar16,*(undefined8 *)puVar1,lVar7,0);
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar12 = FUN_06e22f84(*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_09332ff8),
     puVar5 = PTR_DAT_09333018, puVar4 = PTR_DAT_09333010, puVar3 = PTR_DAT_09333008,
     puVar1 = PTR_DAT_092b6918, lVar12 != 0)) {
    FUN_059ad2b0(&stack0x00000008,lVar12,*(undefined8 *)PTR_DAT_09333038);
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000040;
    while (uVar17 = FUN_05365548(&stack0x00000040,*(undefined8 *)puVar5), (uVar17 & 1) != 0) {
      uVar10 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose
                         (param_2,in_stack_00000050 & 0xffffffff);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(uVar10,uVar10);
      }
      FUN_0779bbb8(lVar7,uVar10,0);
    }
    FUN_05365544(&stack0x00000040,*(undefined8 *)puVar3);
    lVar7 = thunk_FUN_040b4efc(*unaff_x26);
    FUN_0779adf0(lVar7,0);
    lVar12 = thunk_FUN_040b4efc(*unaff_x25);
    FUN_077a7b94(lVar12,*(undefined8 *)puVar1,lVar7,0);
    if ((*(long *)(param_2 + 0x28) != 0) &&
       (lVar13 = FUN_06e22f84(*(long *)(param_2 + 0x28),*(undefined8 *)PTR_DAT_09332ff0),
       lVar13 != 0)) {
      FUN_059ad2b0(&stack0x00000008,lVar13,*(undefined8 *)PTR_DAT_09333030);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      while (uVar17 = FUN_05365548(&stack0x00000020,*(undefined8 *)puVar4), (uVar17 & 1) != 0) {
        uVar10 = FUN_08605178(param_2,in_stack_00000030 & 0xffffffff);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar10,uVar10);
        }
        FUN_0779bbb8(lVar7,uVar10,0);
      }
      FUN_05365544(&stack0x00000020,*(undefined8 *)PTR_DAT_09333000);
      plVar14 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
      if (plVar14 != (long *)0x0) {
        if ((lVar8 != 0) &&
           (lVar7 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
LAB_08604914:
          uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar10,0);
        }
        if ((int)plVar14[3] != 0) {
          plVar14[4] = lVar8;
          thunk_FUN_040ec700(plVar14 + 4,lVar8);
          if ((lVar16 != 0) &&
             (lVar7 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
          goto LAB_08604914;
          if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
            plVar14[5] = lVar16;
            thunk_FUN_040ec700(plVar14 + 5,lVar16);
            if ((lVar12 != 0) &&
               (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
            goto LAB_08604914;
            if (2 < *(uint *)(plVar14 + 3)) {
              plVar14[6] = lVar12;
              thunk_FUN_040ec700(plVar14 + 6,lVar12);
              plVar15 = (long *)thunk_FUN_040b4efc(*(undefined8 *)puVar2);
              thunk_FUN_077a5e98(plVar15,plVar14,0);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
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


