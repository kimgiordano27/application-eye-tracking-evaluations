/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_post_crash_dump_t$$Dispose
ENTRY_POINT: 08604a30
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  long local_70;
  long local_68;
  
  puVar1 = PTR_DAT_09333048;
  puVar2 = PTR_DAT_092bc9f0;
  if ((DAT_0989e0bd & 1) == 0) {
    FUN_04077588(PTR_DAT_09333050);
    FUN_04077588(PTR_DAT_092b7850);
    FUN_04077588(PTR_DAT_09333058);
    FUN_04077588(PTR_DAT_092b89e8);
    FUN_04077588(PTR_DAT_092b89f0);
    FUN_04077588(PTR_DAT_092b89f8);
    FUN_04077588(PTR_DAT_092942a0);
    FUN_04077588(PTR_DAT_0928e018);
    FUN_04077588(PTR_DAT_092bc9f0);
    FUN_04077588(PTR_DAT_092b8a00);
    FUN_04077588(PTR_DAT_09287040);
    FUN_04077588(PTR_DAT_09333060);
    FUN_04077588(PTR_DAT_09333068);
    FUN_04077588(PTR_DAT_09333070);
    FUN_04077588(PTR_DAT_09333048);
    FUN_04077588(PTR_DAT_09333078);
    FUN_04077588(PTR_DAT_09333080);
    FUN_04077588(PTR_DAT_092a6380);
    FUN_04077588(PTR_DAT_09288cd0);
    FUN_04077588(PTR_DAT_092a6388);
    FUN_04077588(PTR_DAT_09333088);
    DAT_0989e0bd = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_98 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,param_2);
  uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&local_b0);
  lVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_077a7b94(lVar5,*(undefined8 *)puVar1,uVar4,0);
  puVar1 = PTR_DAT_09333070;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    FUN_06e24db8(*(long *)(param_1 + 0x10),param_2,&local_68,*(undefined8 *)PTR_DAT_09333058);
    uVar4 = *(undefined8 *)puVar1;
    if (local_68 == 0) {
      uVar7 = *(undefined8 *)PTR_DAT_092a6380;
    }
    else {
      plVar6 = (long *)thunk_FUN_0408781c(local_68,0);
      if (plVar6 == (long *)0x0) goto LAB_086050b4;
      uVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    }
    puVar3 = PTR_DAT_09333078;
    puVar1 = PTR_DAT_092942a0;
    lVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_077a7b94(lVar8,uVar4,uVar7,0);
    lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
    FUN_0779adf0(lVar9,0);
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
    FUN_077a7b94(lVar10,*(undefined8 *)puVar3,lVar9,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar11 = FUN_06e24db8(*(long *)(param_1 + 0x20),param_2,&local_70,
                            *(undefined8 *)PTR_DAT_09333050);
      if ((uVar11 & 1) != 0) {
        if (local_70 == 0) goto LAB_086050b4;
        FUN_05bcaf84(&local_b0,local_70,*(undefined8 *)PTR_DAT_092b8a00);
        local_80 = local_a0;
        puStack_88 = puStack_a8;
        local_90 = local_b0;
        local_b0 = 0;
        puStack_a8 = &local_90;
        while (uVar12 = FUN_07128b70(&local_90,*(undefined8 *)PTR_DAT_092b89f0), uVar11 = local_80,
              (uVar12 & 1) != 0) {
          local_b4 = (undefined4)local_80;
          uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&local_b4);
          lVar13 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
          FUN_077a7b94(lVar13,*(undefined8 *)PTR_DAT_09333080,uVar4,0);
          if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_06e24db8(*(long *)(param_1 + 0x28),uVar11 & 0xffffffff,&local_98,
                       *(undefined8 *)PTR_DAT_092b7850);
          uVar4 = FUN_086055d8(local_98);
          lVar14 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
          FUN_077a7b94(lVar14,*(undefined8 *)PTR_DAT_09333060,uVar4,0);
          uVar12 = FUN_0860557c(param_1,uVar11 & 0xffffffff);
          uVar18 = *(undefined8 *)PTR_DAT_09333068;
          uVar4 = *(undefined8 *)PTR_DAT_092a6388;
          uVar7 = *(undefined8 *)PTR_DAT_09288cd0;
          lVar15 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
          if ((uVar12 & 1) == 0) {
            uVar4 = uVar7;
          }
          FUN_077a7b94(lVar15,uVar18,uVar4,0);
          uVar11 = FUN_086054fc(param_1,uVar11 & 0xffffffff);
          uVar18 = *(undefined8 *)PTR_DAT_09333088;
          uVar4 = *(undefined8 *)PTR_DAT_092a6388;
          uVar7 = *(undefined8 *)PTR_DAT_09288cd0;
          lVar16 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
          if ((uVar11 & 1) == 0) {
            uVar4 = uVar7;
          }
          FUN_077a7b94(lVar16,uVar18,uVar4,0);
          plVar6 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,4);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if ((lVar13 != 0) &&
             (lVar17 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar17 == 0)) {
            uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar4,0);
          }
          if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar6[4] = lVar13;
          thunk_FUN_040ec700(plVar6 + 4,lVar13);
          if ((lVar14 != 0) &&
             (lVar13 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
            uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar4,0);
          }
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar6[5] = lVar14;
          thunk_FUN_040ec700(plVar6 + 5,lVar14);
          if ((lVar15 != 0) &&
             (lVar13 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
            uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar4,0);
          }
          if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar6[6] = lVar15;
          thunk_FUN_040ec700(plVar6 + 6,lVar15);
          if ((lVar16 != 0) &&
             (lVar13 = thunk_FUN_040b4e00(lVar16,*(undefined8 *)(*plVar6 + 0x40)), lVar13 == 0)) {
            uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar4,0);
          }
          if ((*(uint *)(plVar6 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar6[7] = lVar16;
          thunk_FUN_040ec700(plVar6 + 7,lVar16);
          uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928e018);
          thunk_FUN_077a5e98(uVar4,plVar6,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0779bbb8(lVar9,uVar4,0);
        }
        FUN_07128b6c(&local_90,*(undefined8 *)PTR_DAT_092b89e8);
      }
      plVar6 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
      if (plVar6 != (long *)0x0) {
        if ((lVar5 != 0) &&
           (lVar9 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_086050bc:
          uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar4,0);
        }
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar5;
          thunk_FUN_040ec700(plVar6 + 4,lVar5);
          if ((lVar8 != 0) &&
             (lVar5 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
          goto LAB_086050bc;
          if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
            plVar6[5] = lVar8;
            thunk_FUN_040ec700(plVar6 + 5,lVar8);
            if ((lVar10 != 0) &&
               (lVar5 = thunk_FUN_040b4e00(lVar10,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
            goto LAB_086050bc;
            if (2 < *(uint *)(plVar6 + 3)) {
              plVar6[6] = lVar10;
              thunk_FUN_040ec700(plVar6 + 6,lVar10);
              uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928e018);
              thunk_FUN_077a5e98(uVar4,plVar6,0);
              return uVar4;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
    }
  }
LAB_086050b4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


