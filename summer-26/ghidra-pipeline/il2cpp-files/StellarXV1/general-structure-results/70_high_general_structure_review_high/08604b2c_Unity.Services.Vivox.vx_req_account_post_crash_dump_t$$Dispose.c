/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_account_post_crash_dump_t$$Dispose
ENTRY_POINT: 08604b2c
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


undefined8 Unity_Services_Vivox_vx_req_account_post_crash_dump_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined4 unaff_w24;
  undefined8 uVar17;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined4 uStack0000000000000050;
  long in_stack_00000060;
  long in_stack_00000068;
  
  FUN_04077588();
                    /* try { // try from 08604b34 to 08704b3b has its CatchHandler @ 08605314 */
  FUN_04077588(PTR_DAT_09333080);
  FUN_04077588(PTR_DAT_092a6380);
                    /* try { // try from 08604b4c to 08704b53 has its CatchHandler @ 08605310 */
  FUN_04077588(PTR_DAT_09288cd0);
                    /* try { // try from 08604b54 to 08704b67 has its CatchHandler @ 0860530c */
  FUN_04077588(PTR_DAT_092a6388);
  FUN_04077588(PTR_DAT_09333088);
                    /* try { // try from 08604b6c to 08704b77 has its CatchHandler @ 08605308 */
  *(undefined1 *)(unaff_x20 + 0xbd) = 1;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
                    /* try { // try from 08604b88 to 08704b93 has its CatchHandler @ 08605304 */
  _uStack0000000000000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,unaff_w24);
  uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x00000020);
  lVar4 = thunk_FUN_040b4efc(*unaff_x19);
  FUN_077a7b94(lVar4,*unaff_x21,uVar3,0);
  puVar1 = PTR_DAT_09333070;
  if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x10) != 0)) {
                    /* try { // try from 08604bd8 to 08704c0f has its CatchHandler @ 0860532c */
    FUN_06e24db8(*(long *)(unaff_x22 + 0x10),unaff_w24,&stack0x00000068,
                 *(undefined8 *)PTR_DAT_09333058);
    uVar3 = *(undefined8 *)puVar1;
    if (in_stack_00000068 == 0) {
      uVar6 = *(undefined8 *)PTR_DAT_092a6380;
    }
    else {
      plVar5 = (long *)thunk_FUN_0408781c(in_stack_00000068,0);
      if (plVar5 == (long *)0x0) goto LAB_086050b4;
      uVar6 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
                    /* try { // try from 08604c14 to 08704c1f has its CatchHandler @ 086052fc */
    }
    puVar2 = PTR_DAT_09333078;
    puVar1 = PTR_DAT_092942a0;
    lVar7 = thunk_FUN_040b4efc(*unaff_x19);
    FUN_077a7b94(lVar7,uVar3,uVar6,0);
    lVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
                    /* try { // try from 08604c5c to 08704c93 has its CatchHandler @ 08605328 */
    FUN_0779adf0(lVar8,0);
    lVar9 = thunk_FUN_040b4efc(*unaff_x19);
    FUN_077a7b94(lVar9,*(undefined8 *)puVar2,lVar8,0);
    if (*(long *)(unaff_x22 + 0x20) != 0) {
      uVar10 = FUN_06e24db8(*(long *)(unaff_x22 + 0x20),unaff_w24,&stack0x00000060,
                            *(undefined8 *)PTR_DAT_09333050);
      if ((uVar10 & 1) != 0) {
        if (in_stack_00000060 == 0) goto LAB_086050b4;
        FUN_05bcaf84(&stack0x00000020,in_stack_00000060,*(undefined8 *)PTR_DAT_092b8a00);
        _uStack0000000000000050 = in_stack_00000030;
        in_stack_00000048 = in_stack_00000028;
        in_stack_00000040 = in_stack_00000020;
        in_stack_00000020 = 0;
        in_stack_00000028 = &stack0x00000040;
        while (uVar11 = FUN_07128b70(&stack0x00000040,*(undefined8 *)PTR_DAT_092b89f0),
              uVar10 = _uStack0000000000000050, (uVar11 & 1) != 0) {
          in_stack_00000018._4_4_ = uStack0000000000000050;
          uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),
                                     (long)&stack0x00000018 + 4);
          lVar12 = thunk_FUN_040b4efc(*unaff_x19);
          FUN_077a7b94(lVar12,*(undefined8 *)PTR_DAT_09333080,uVar3,0);
          if (*(long *)(unaff_x22 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_06e24db8(*(long *)(unaff_x22 + 0x28),uVar10 & 0xffffffff,&stack0x00000038,
                       *(undefined8 *)PTR_DAT_092b7850);
          uVar3 = FUN_086055d8(in_stack_00000038);
          lVar13 = thunk_FUN_040b4efc(*unaff_x19);
          FUN_077a7b94(lVar13,*(undefined8 *)PTR_DAT_09333060,uVar3,0);
          uVar10 = FUN_0860557c();
          uVar17 = *(undefined8 *)PTR_DAT_09333068;
          uVar3 = *(undefined8 *)PTR_DAT_092a6388;
          uVar6 = *(undefined8 *)PTR_DAT_09288cd0;
          lVar14 = thunk_FUN_040b4efc(*unaff_x19);
          if ((uVar10 & 1) == 0) {
            uVar3 = uVar6;
          }
          FUN_077a7b94(lVar14,uVar17,uVar3,0);
          uVar10 = FUN_086054fc();
          uVar17 = *(undefined8 *)PTR_DAT_09333088;
          uVar3 = *(undefined8 *)PTR_DAT_092a6388;
          uVar6 = *(undefined8 *)PTR_DAT_09288cd0;
          lVar15 = thunk_FUN_040b4efc(*unaff_x19);
          if ((uVar10 & 1) == 0) {
            uVar3 = uVar6;
          }
          FUN_077a7b94(lVar15,uVar17,uVar3,0);
          plVar5 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,4);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if ((lVar12 != 0) &&
             (lVar16 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar16 == 0)) {
            uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar3,0);
          }
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[4] = lVar12;
          thunk_FUN_040ec700(plVar5 + 4,lVar12);
          if ((lVar13 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar13,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
            uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar3,0);
          }
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[5] = lVar13;
          thunk_FUN_040ec700(plVar5 + 5,lVar13);
          if ((lVar14 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
            uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar3,0);
          }
          if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[6] = lVar14;
          thunk_FUN_040ec700(plVar5 + 6,lVar14);
          if ((lVar15 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar15,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
            uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar3,0);
          }
          if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[7] = lVar15;
          thunk_FUN_040ec700(plVar5 + 7,lVar15);
          uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928e018);
          thunk_FUN_077a5e98(uVar3,plVar5,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0779bbb8(lVar8,uVar3,0);
        }
        FUN_07128b6c(&stack0x00000040,*(undefined8 *)PTR_DAT_092b89e8);
      }
      plVar5 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
      if (plVar5 != (long *)0x0) {
        if ((lVar4 != 0) &&
           (lVar8 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_086050bc:
          uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar3,0);
        }
        if ((int)plVar5[3] != 0) {
          plVar5[4] = lVar4;
          thunk_FUN_040ec700(plVar5 + 4,lVar4);
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
          goto LAB_086050bc;
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
            plVar5[5] = lVar7;
            thunk_FUN_040ec700(plVar5 + 5,lVar7);
            if ((lVar9 != 0) &&
               (lVar4 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
            goto LAB_086050bc;
            if (2 < *(uint *)(plVar5 + 3)) {
              plVar5[6] = lVar9;
              thunk_FUN_040ec700(plVar5 + 6,lVar9);
              uVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928e018);
              thunk_FUN_077a5e98(uVar3,plVar5,0);
              return uVar3;
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


