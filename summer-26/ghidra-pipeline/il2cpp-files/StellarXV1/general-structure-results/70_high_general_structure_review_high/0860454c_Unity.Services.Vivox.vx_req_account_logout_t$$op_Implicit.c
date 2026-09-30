/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_logout_t$$op_Implicit
ENTRY_POINT: 0860454c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08604920) */

void Unity_Services_Vivox_vx_req_account_logout_t__op_Implicit(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
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
  
  do {
    uVar14 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(param_1 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08604594;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(unaff_x22,*unaff_x28,0);
LAB_08604594:
    (*(code *)*puVar5)(unaff_x22,puVar5[1]);
    uVar6 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose();
    uVar7 = thunk_FUN_040b4efc(*unaff_x24);
    FUN_077a5da0(uVar7,uVar6,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0779bbb8();
    plVar11 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar13 = *in_stack_00000058;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_08604530;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*unaff_x27,0);
LAB_08604530:
    uVar14 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    plVar11 = in_stack_00000058;
    if ((uVar14 & 1) == 0) {
      if (in_stack_00000058 == (long *)0x0) goto LAB_08604650;
      lVar13 = *in_stack_00000058;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 == 0) goto LAB_08604628;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    param_1 = *in_stack_00000058;
    unaff_x22 = in_stack_00000058;
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_08604644;
    }
  }
LAB_08604628:
  puVar5 = (undefined8 *)FUN_040b1e00(in_stack_00000058,*(long *)PTR_DAT_092860c0,0);
LAB_08604644:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_08604650:
  puVar1 = PTR_DAT_09333040;
  lVar13 = thunk_FUN_040b4efc(*unaff_x26);
  FUN_0779adf0(lVar13,0);
  lVar8 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_077a7b94(lVar8,*(undefined8 *)puVar1,lVar13,0);
  if (((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x10) != 0)) &&
     (lVar9 = FUN_06e22f84(*(long *)(unaff_x19 + 0x10),*(undefined8 *)PTR_DAT_09332ff8),
     puVar4 = PTR_DAT_09333018, puVar3 = PTR_DAT_09333010, puVar2 = PTR_DAT_09333008,
     puVar1 = PTR_DAT_092b6918, lVar9 != 0)) {
    FUN_059ad2b0(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_09333038);
    in_stack_00000050 = in_stack_00000018;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000040;
    while (uVar14 = FUN_05365548(&stack0x00000040,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
      uVar6 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose();
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(uVar6,uVar6);
      }
      FUN_0779bbb8(lVar13,uVar6,0);
    }
    FUN_05365544(&stack0x00000040,*(undefined8 *)puVar2);
    lVar13 = thunk_FUN_040b4efc(*unaff_x26);
    FUN_0779adf0(lVar13,0);
    lVar9 = thunk_FUN_040b4efc(*unaff_x25);
    FUN_077a7b94(lVar9,*(undefined8 *)puVar1,lVar13,0);
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar10 = FUN_06e22f84(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_09332ff0),
       lVar10 != 0)) {
      FUN_059ad2b0(&stack0x00000008,lVar10,*(undefined8 *)PTR_DAT_09333030);
      in_stack_00000030 = in_stack_00000018;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000020;
      while (uVar14 = FUN_05365548(&stack0x00000020,*(undefined8 *)puVar3), (uVar14 & 1) != 0) {
        uVar6 = FUN_08605178();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar6,uVar6);
        }
        FUN_0779bbb8(lVar13,uVar6,0);
      }
      FUN_05365544(&stack0x00000020,*(undefined8 *)PTR_DAT_09333000);
      plVar11 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
      if (plVar11 != (long *)0x0) {
        if ((unaff_x20 != 0) && (lVar13 = thunk_FUN_040b4e00(), lVar13 == 0)) {
LAB_08604914:
          uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar6,0);
        }
        if ((int)plVar11[3] != 0) {
          plVar11[4] = unaff_x20;
          thunk_FUN_040ec700();
          if ((lVar8 != 0) &&
             (lVar13 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
          goto LAB_08604914;
          if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
            plVar11[5] = lVar8;
            thunk_FUN_040ec700(plVar11 + 5,lVar8);
            if ((lVar9 != 0) &&
               (lVar13 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
            goto LAB_08604914;
            if (2 < *(uint *)(plVar11 + 3)) {
              plVar11[6] = lVar9;
              thunk_FUN_040ec700(plVar11 + 6,lVar9);
              plVar12 = (long *)thunk_FUN_040b4efc(*unaff_x24);
              thunk_FUN_077a5e98(plVar12,plVar11,0);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
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


