/*
FUNCTION_NAME: FUN_086042c8
ENTRY_POINT: 086042c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08604920) */

void FUN_086042c8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *local_b8;
  long **pplStack_b0;
  ulong local_a8;
  long *local_a0;
  long **pplStack_98;
  ulong local_90;
  long *local_80;
  long **pplStack_78;
  ulong local_70;
  long *local_68;
  
  puVar1 = PTR_DAT_09332fe8;
  puVar4 = PTR_DAT_092bc9f0;
  puVar3 = PTR_DAT_092942a0;
  if ((DAT_0989e0ba & 1) == 0) {
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
    DAT_0989e0ba = 1;
  }
  puVar2 = PTR_DAT_0928e018;
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_a0 = (long *)0x0;
  pplStack_98 = (long **)0x0;
  local_90 = 0;
  lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_0779adf0(lVar9,0);
  lVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_077a7b94(lVar10,*(undefined8 *)puVar1,lVar9,0);
  if (param_2 != (long *)0x0) {
    lVar18 = *param_2;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_092fae48) {
          puVar11 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_086044b4;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar11 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092fae48,0);
LAB_086044b4:
    puVar5 = PTR_DAT_092fae50;
    puVar1 = PTR_DAT_092860c8;
    local_68 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
    pplStack_b0 = &local_68;
    local_b8 = (long *)0x0;
    do {
      plVar16 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar18 = *local_68;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_08604530;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar1,0);
LAB_08604530:
      uVar19 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      plVar16 = local_68;
      if ((uVar19 & 1) == 0) {
        if (local_68 == (long *)0x0) break;
        lVar9 = *local_68;
        uVar19 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar19 == 0) goto LAB_08604628;
        piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_08604610;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar18 = *local_68;
      uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_08604594;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar11 = (undefined8 *)FUN_040b1e00(local_68,*(long *)puVar5,0);
LAB_08604594:
      uVar8 = (*(code *)*puVar11)(plVar16,puVar11[1]);
      uVar12 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose(param_1,uVar8);
      uVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
      FUN_077a5da0(uVar13,uVar12,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0779bbb8(lVar9,uVar13,0);
    } while( true );
  }
  goto LAB_08604654;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_08604610:
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_08604644;
    }
  }
LAB_08604628:
  puVar11 = (undefined8 *)FUN_040b1e00(local_68,*(long *)PTR_DAT_092860c0,0);
LAB_08604644:
  (*(code *)*puVar11)(plVar16,puVar11[1]);
LAB_08604654:
  puVar1 = PTR_DAT_09333040;
  lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_0779adf0(lVar9,0);
  lVar18 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_077a7b94(lVar18,*(undefined8 *)puVar1,lVar9,0);
  if (((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (lVar14 = FUN_06e22f84(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_09332ff8),
     puVar7 = PTR_DAT_09333018, puVar6 = PTR_DAT_09333010, puVar5 = PTR_DAT_09333008,
     puVar1 = PTR_DAT_092b6918, lVar14 != 0)) {
    FUN_059ad2b0(&local_b8,lVar14,*(undefined8 *)PTR_DAT_09333038);
    local_70 = local_a8;
    pplStack_78 = pplStack_b0;
    local_80 = local_b8;
    local_b8 = (long *)0x0;
    pplStack_b0 = &local_80;
    while (uVar19 = FUN_05365548(&local_80,*(undefined8 *)puVar7), (uVar19 & 1) != 0) {
      uVar12 = Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose
                         (param_1,local_70 & 0xffffffff);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830(uVar12,uVar12);
      }
      FUN_0779bbb8(lVar9,uVar12,0);
    }
    FUN_05365544(&local_80,*(undefined8 *)puVar5);
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
    FUN_0779adf0(lVar9,0);
    lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
    FUN_077a7b94(lVar14,*(undefined8 *)puVar1,lVar9,0);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar15 = FUN_06e22f84(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_09332ff0),
       lVar15 != 0)) {
      FUN_059ad2b0(&local_b8,lVar15,*(undefined8 *)PTR_DAT_09333030);
      local_90 = local_a8;
      pplStack_98 = pplStack_b0;
      local_a0 = local_b8;
      local_b8 = (long *)0x0;
      pplStack_b0 = &local_a0;
      while (uVar19 = FUN_05365548(&local_a0,*(undefined8 *)puVar6), (uVar19 & 1) != 0) {
        uVar12 = FUN_08605178(param_1,local_90 & 0xffffffff);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830(uVar12,uVar12);
        }
        FUN_0779bbb8(lVar9,uVar12,0);
      }
      FUN_05365544(&local_a0,*(undefined8 *)PTR_DAT_09333000);
      plVar16 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
      if (plVar16 != (long *)0x0) {
        if ((lVar10 != 0) &&
           (lVar9 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0)) {
LAB_08604914:
          uVar12 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar12,0);
        }
        if ((int)plVar16[3] != 0) {
          plVar16[4] = lVar10;
          thunk_FUN_040ec700(plVar16 + 4,lVar10);
          if ((lVar18 != 0) &&
             (lVar9 = thunk_FUN_040b4e00(lVar18,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
          goto LAB_08604914;
          if ((*(uint *)(plVar16 + 3) & 0xfffffffe) != 0) {
            plVar16[5] = lVar18;
            thunk_FUN_040ec700(plVar16 + 5,lVar18);
            if ((lVar14 != 0) &&
               (lVar9 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0))
            goto LAB_08604914;
            if (2 < *(uint *)(plVar16 + 3)) {
              plVar16[6] = lVar14;
              thunk_FUN_040ec700(plVar16 + 6,lVar14);
              plVar17 = (long *)thunk_FUN_040b4efc(*(undefined8 *)puVar2);
              thunk_FUN_077a5e98(plVar17,plVar16,0);
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170));
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


