/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 02244598
PROGRAM: vrfs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonWriter__BuildStateArray(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool in_ZR;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *unaff_x19;
  long lVar13;
  long lVar14;
  long *unaff_x23;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000080;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d8;
  
  if (!in_ZR) {
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06e57350);
    plVar9 = (long *)FUN_0160edfc(uVar8,4);
                    /* try { // try from 02244608 to 0234460f has its CatchHandler @ 02244990 */
    uVar6 = *(undefined4 *)(in_stack_000000d8 + 0x68);
    lVar13 = thunk_FUN_0159f088(PTR_DAT_06e62778);
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
                    /* try { // try from 0224462c to 02344637 has its CatchHandler @ 0224497c */
    lVar13 = FUN_02237d70(uVar6);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
                    /* try { // try from 0224464c to 02344673 has its CatchHandler @ 02244994 */
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
      uVar8 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar8,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
    plVar9[4] = lVar13;
                    /* try { // try from 02244680 to 0234468f has its CatchHandler @ 02244978 */
    thunk_FUN_01656ef8(plVar9 + 4,lVar13);
    if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    in_stack_000000b0 =
         CONCAT44(in_stack_000000b0._4_4_,
                  *(undefined4 *)(*(long *)(in_stack_000000d8 + 0x30) + 0x20));
                    /* try { // try from 022446a0 to 023446a3 has its CatchHandler @ 02244974 */
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06dffa58);
    lVar13 = thunk_FUN_015d01b0(uVar8,&stack0x000000b0);
                    /* try { // try from 022446b4 to 023446bb has its CatchHandler @ 02244970 */
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
      uVar8 = thunk_FUN_015f0d94();
                    /* try { // try from 022446d0 to 023446d3 has its CatchHandler @ 022449a0 */
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar8,0);
    }
    if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
                    /* try { // try from 022446e8 to 023446eb has its CatchHandler @ 0224496c */
    plVar9[5] = lVar13;
                    /* try { // try from 022446ec to 023446f7 has its CatchHandler @ 0224499c */
    thunk_FUN_01656ef8(plVar9 + 5,lVar13);
    uVar6 = FUN_02237bcc(*(undefined4 *)(in_stack_000000d8 + 0x68));
    in_stack_00000050 = CONCAT44(in_stack_00000050._4_4_,uVar6);
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06db9330);
    lVar13 = thunk_FUN_015d01b0(uVar8,&stack0x00000050);
                    /* try { // try from 02244718 to 0234473b has its CatchHandler @ 0224498c */
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
      uVar8 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar8,0);
    }
    if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eebc();
    }
                    /* try { // try from 02244754 to 0234475f has its CatchHandler @ 02244984 */
    plVar9[6] = lVar13;
    thunk_FUN_01656ef8(plVar9 + 6,lVar13);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,*(undefined4 *)(in_stack_000000d8 + 0x40));
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06db9330);
                    /* try { // try from 02244778 to 02344793 has its CatchHandler @ 02244998 */
    lVar13 = thunk_FUN_015d01b0(uVar8,&stack0x00000030);
    if ((lVar13 != 0) &&
       (lVar14 = thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar14 == 0)) {
      uVar8 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar8,0);
    }
    if (*(uint *)(plVar9 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02244800 to 0234480f has its CatchHandler @ 022444b4 */
      FUN_0160eebc();
    }
                    /* try { // try from 022447bc to 023447cb has its CatchHandler @ 022449a8 */
    plVar9[7] = lVar13;
    thunk_FUN_01656ef8(plVar9 + 7,lVar13);
                    /* try { // try from 022447cc to 023447fb has its CatchHandler @ 022444b4 */
    uVar8 = thunk_FUN_0159f088(PTR_DAT_06db5f40);
    uVar8 = FUN_0252739c(uVar8,plVar9,0);
    thunk_FUN_0159f088(PTR_DAT_06e0ea30);
    lVar13 = thunk_FUN_015d056c();
    if (lVar13 != 0) {
                    /* try { // try from 02244810 to 02344853 has its CatchHandler @ 022449ac */
      FUN_0321bdf8(lVar13,uVar8,0);
      uVar8 = thunk_FUN_0159f088(PTR_DAT_06e0d000);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(lVar13,uVar8);
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022447fc to 023447ff has its CatchHandler @ 022449a4 */
    FUN_0160eeb4();
  }
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x10) = *(undefined4 *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  FUN_02243030();
  if ((*(int *)(in_stack_000000d8 + 0x44) == 0) &&
     (uVar7 = Newtonsoft_Json_JsonTextReader_<ParseNumberAsync>d__29__SetStateMachine(),
     (uVar7 & 1) == 0)) {
    iVar5 = 0;
                    /* try { // try from 022445e4 to 023445e7 has its CatchHandler @ 02244968 */
    *(undefined4 *)(in_stack_000000d8 + 0x6c) = 0;
    while( true ) {
                    /* catch() { ... } // from try @ 02244868 with catch @ 02244988 */
                    /* catch() { ... } // from try @ 02244718 with catch @ 0224498c */
                    /* catch() { ... } // from try @ 02244608 with catch @ 02244990 */
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 0224464c with catch @ 02244994
                       catch() { ... } // from try @ 0224494c with catch @ 02244994 */
        thunk_FUN_016466fc();
      }
                    /* catch() { ... } // from try @ 02244778 with catch @ 02244998
                       catch() { ... } // from try @ 02244948 with catch @ 02244998 */
                    /* catch() { ... } // from try @ 022446ec with catch @ 0224499c */
      iVar4 = FUN_04ef5214(0);
                    /* catch() { ... } // from try @ 022446d0 with catch @ 022449a0 */
                    /* catch() { ... } // from try @ 022447fc with catch @ 022449a4 */
      if (iVar4 <= iVar5) goto LAB_022449a8;
                    /* try { // try from 02244940 to 02344943 has its CatchHandler @ 02244958 */
                    /* try { // try from 02244944 to 02344947 has its CatchHandler @ 02244954 */
      uVar6 = *(undefined4 *)(in_stack_000000d8 + 0x6c);
                    /* try { // try from 02244948 to 0234494b has its CatchHandler @ 02244998 */
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 0224494c to 0234494f has its CatchHandler @ 02244994 */
        thunk_FUN_016466fc();
      }
                    /* try { // try from 02244950 to 02344953 has its CatchHandler @ 02244978 */
                    /* catch() { ... } // from try @ 02244944 with catch @ 02244954
                       try { // try from 02244954 to 023449c3 has its CatchHandler @ 022444b4 */
                    /* catch() { ... } // from try @ 02244940 with catch @ 02244958 */
      uVar6 = FUN_04ef523c(uVar6,0);
                    /* catch() { ... } // from try @ 0224492c with catch @ 0224495c */
                    /* catch() { ... } // from try @ 0224491c with catch @ 02244960 */
                    /* catch() { ... } // from try @ 02244904 with catch @ 02244964 */
                    /* catch() { ... } // from try @ 022445e4 with catch @ 02244968 */
                    /* catch() { ... } // from try @ 022446e8 with catch @ 0224496c */
                    /* catch() { ... } // from try @ 022446b4 with catch @ 02244970 */
      uVar7 = FUN_04ef6ce8(uVar6,*(undefined4 *)(in_stack_000000d8 + 0x68),0);
                    /* catch() { ... } // from try @ 022446a0 with catch @ 02244974 */
      if ((uVar7 & 1) != 0) break;
                    /* catch() { ... } // from try @ 02244680 with catch @ 02244978
                       catch() { ... } // from try @ 02244950 with catch @ 02244978 */
                    /* catch() { ... } // from try @ 0224462c with catch @ 0224497c */
                    /* catch() { ... } // from try @ 022448ac with catch @ 02244980 */
      iVar5 = *(int *)(in_stack_000000d8 + 0x6c) + 1;
                    /* catch() { ... } // from try @ 02244754 with catch @ 02244984 */
      *(int *)(in_stack_000000d8 + 0x6c) = iVar5;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar8 = FUN_04ef59f4(uVar6,0);
    *(undefined8 *)(in_stack_000000d8 + 0x18) = uVar8;
    thunk_FUN_01656ef8();
    uVar6 = 2;
    goto LAB_02244f78;
  }
LAB_022449a8:
                    /* catch() { ... } // from try @ 022447bc with catch @ 022449a8 */
                    /* catch() { ... } // from try @ 02244810 with catch @ 022449ac */
  *(undefined4 *)(in_stack_000000d8 + 0x68) = 0;
  if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  uVar7 = FUN_04ef67cc(*(long *)(in_stack_000000d8 + 0x30) + 0x10,0);
                    /* try { // try from 022449c4 to 023449db has its CatchHandler @ 02244a30 */
  if ((uVar7 & 1) == 0) {
    if (*(int *)(in_stack_000000d8 + 0x44) == 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
                    /* try { // try from 022449dc to 02344a1f has its CatchHandler @ 022444b4 */
      if (unaff_x19[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_02b07d0c(unaff_x19[0xd],*(undefined8 *)PTR_DAT_06e59e48);
    }
    if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar7 = FUN_042a4114(*(long *)(in_stack_000000d8 + 0x30) + 0x20,0);
    if ((uVar7 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar7 = FUN_02242650();
      if ((uVar7 & 1) == 0) {
        if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        in_stack_000000b0 =
             CONCAT44(in_stack_000000b0._4_4_,
                      *(undefined4 *)(*(long *)(in_stack_000000d8 + 0x30) + 0x20));
        uVar8 = thunk_FUN_015d01b0(*(undefined8 *)PTR_DAT_06dffa58,&stack0x000000b0);
        FUN_0251daf0(*(undefined8 *)PTR_DAT_06e28870,uVar8,0);
        if (cRam000000000722eb9f == '\0') {
          thunk_FUN_0159f088(PTR_DAT_06db6eb8);
          cRam000000000722eb9f = '\x01';
        }
        plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_06db6eb8 + 0xb8) + 0x18);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x188))();
        }
        lVar14 = *(long *)PTR_DAT_06de7ce8;
        lVar13 = **(long **)(lVar14 + 0x38);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          lVar13 = FUN_015c2790();
        }
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        lVar13 = **(long **)(lVar14 + 0x38);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          lVar13 = FUN_015c2790();
        }
        in_stack_00000080 = **(long **)(lVar13 + 0xb8);
      }
      *(undefined8 *)(in_stack_000000d8 + 0x78) = 0;
      thunk_FUN_01656ef8((undefined8 *)(in_stack_000000d8 + 0x78),0);
      lVar13 = in_stack_00000080;
      if (in_stack_00000080 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (0 < (int)*(ulong *)(in_stack_00000080 + 0x18)) {
        uVar7 = 0;
        uVar12 = *(ulong *)(in_stack_00000080 + 0x18) & 0xffffffff;
        lVar14 = in_stack_00000080 + 0x20;
        do {
          if (uVar12 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eeb4();
          }
          uVar8 = *(undefined8 *)(lVar14 + uVar7 * 8);
          uVar12 = FUN_042a4254(*(long *)(in_stack_000000d8 + 0x30) + 0x20,uVar8,0);
          if ((uVar12 & 1) != 0) {
            *(undefined8 *)(in_stack_000000d8 + 0x78) = uVar8;
            thunk_FUN_01656ef8((undefined8 *)(in_stack_000000d8 + 0x78),uVar8);
            break;
          }
          uVar12 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar13 + 0x18));
      }
      lVar13 = *(long *)(in_stack_000000d8 + 0x78);
      if (lVar13 == 0) {
        if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        in_stack_000000b0 =
             CONCAT44(in_stack_000000b0._4_4_,
                      *(undefined4 *)(*(long *)(in_stack_000000d8 + 0x30) + 0x20));
        uVar8 = thunk_FUN_0159f088(PTR_DAT_06dffa58);
        uVar8 = thunk_FUN_015d01b0(uVar8,&stack0x000000b0);
        uVar11 = thunk_FUN_0159f088(PTR_DAT_06d998d0);
        uVar8 = FUN_0251daf0(uVar11,uVar8,0);
        thunk_FUN_0159f088(PTR_DAT_06e0ea30);
        lVar13 = thunk_FUN_015d056c();
        if (lVar13 != 0) {
          FUN_0321bdf8(lVar13,uVar8,0);
          uVar8 = thunk_FUN_0159f088(PTR_DAT_06e0d000);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar13,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(in_stack_000000d8 + 0x40) != 0) {
        thunk_FUN_0159f088(PTR_DAT_06e0ea30);
        lVar13 = thunk_FUN_015d056c();
        if (lVar13 != 0) {
          uVar8 = thunk_FUN_0159f088(PTR_DAT_06e54bb8);
          FUN_0321bdf8(lVar13,uVar8,0);
          uVar8 = thunk_FUN_0159f088(PTR_DAT_06e0d000);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar13,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar6 = *(undefined4 *)(in_stack_000000d8 + 0x44);
      if (*(int *)(*(long *)PTR_DAT_06e51ff8 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_031f6f20(&stack0x000000b0,lVar13,uVar6,1,100,0);
      in_stack_00000058 = in_stack_000000b8;
      in_stack_00000050 = in_stack_000000b0;
      in_stack_00000068 = in_stack_000000c8;
      in_stack_00000060 = in_stack_000000c0;
      *(undefined8 *)(in_stack_000000d8 + 0x88) = in_stack_000000b8;
      *(undefined8 *)(in_stack_000000d8 + 0x80) = in_stack_000000b0;
      *(undefined8 *)(in_stack_000000d8 + 0x98) = in_stack_000000c8;
      *(undefined8 *)(in_stack_000000d8 + 0x90) = in_stack_000000c0;
      thunk_FUN_01656ef8(in_stack_000000d8 + 0x80,0);
      lVar13 = in_stack_000000d8;
      puVar1 = PTR_DAT_06e21288;
      if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      *(undefined4 *)(*(long *)(in_stack_000000d8 + 0x30) + 0x10) = 0;
      uVar8 = *(undefined8 *)(in_stack_000000d8 + 0x30);
      lVar14 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_048cef8c(lVar14,uVar8,*(undefined8 *)PTR_DAT_06deaae0,0);
      FUN_04d66078(lVar13 + 0x80,lVar14,*(undefined8 *)PTR_DAT_06df3190);
      lVar13 = in_stack_000000d8;
      uVar8 = *(undefined8 *)(in_stack_000000d8 + 0x30);
      lVar14 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e21918);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_048d27ac(lVar14,uVar8,*(undefined8 *)PTR_DAT_06e119d8,0);
      FUN_04d664b4(lVar13 + 0x80,lVar14,*(undefined8 *)PTR_DAT_06dd1a10);
      if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      in_stack_00000038 = *(undefined8 *)(in_stack_000000d8 + 0x88);
      in_stack_00000030 = *(undefined8 *)(in_stack_000000d8 + 0x80);
      in_stack_00000048 = *(undefined8 *)(in_stack_000000d8 + 0x98);
      in_stack_00000040 = *(undefined8 *)(in_stack_000000d8 + 0x90);
      uVar6 = *(undefined4 *)(*(long *)(in_stack_000000d8 + 0x30) + 0x20);
      if (unaff_x19[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4(0,uVar6);
      }
      in_stack_000000b0 = in_stack_00000030;
      in_stack_000000b8 = in_stack_00000038;
      in_stack_000000c0 = in_stack_00000040;
      in_stack_000000c8 = in_stack_00000048;
      FUN_02b07ab8(unaff_x19[0xd],uVar6,&stack0x000000b0,*(undefined8 *)PTR_DAT_06de0748);
      uVar7 = FUN_04d66904(in_stack_000000d8 + 0x80,*(undefined8 *)PTR_DAT_06e157b8);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_04d66b08(in_stack_000000d8 + 0x80,*(undefined8 *)PTR_DAT_06e05290);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        (**(code **)(*unaff_x19 + 0x368))();
        *(undefined8 *)(in_stack_000000d8 + 0x18) = 0;
        thunk_FUN_01656ef8((undefined8 *)(in_stack_000000d8 + 0x18),0);
        uVar6 = 4;
        goto LAB_02244f78;
      }
      uVar7 = FUN_04d669dc(in_stack_000000d8 + 0x80,*(undefined8 *)PTR_DAT_06e251c8);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        in_stack_000000b0 =
             CONCAT44(in_stack_000000b0._4_4_,
                      *(undefined4 *)(*(long *)(in_stack_000000d8 + 0x30) + 0x20));
        uVar8 = thunk_FUN_0159f088(PTR_DAT_06dffa58);
        uVar8 = thunk_FUN_015d01b0(uVar8,&stack0x000000b0);
        uVar11 = thunk_FUN_0159f088(PTR_DAT_06e62cc0);
        uVar8 = FUN_0251daf0(uVar11,uVar8,0);
        thunk_FUN_0159f088(PTR_DAT_06e0ea30);
        lVar13 = thunk_FUN_015d056c();
        if (lVar13 != 0) {
          FUN_0321bdf8(lVar13,uVar8,0);
          uVar8 = thunk_FUN_0159f088(PTR_DAT_06e0d000);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar13,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      iVar5 = FUN_04d66da0(in_stack_000000d8 + 0x80,*(undefined8 *)PTR_DAT_06dc8c60);
      if (iVar5 == 2) {
        in_stack_00000058 = *(undefined8 *)(in_stack_000000d8 + 0x88);
        in_stack_00000050 = *(undefined8 *)(in_stack_000000d8 + 0x80);
        in_stack_00000068 = *(undefined8 *)(in_stack_000000d8 + 0x98);
        in_stack_00000060 = *(undefined8 *)(in_stack_000000d8 + 0x90);
        lVar13 = thunk_FUN_0159f088(PTR_DAT_06e51ff8);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar3 = in_stack_00000068;
        uVar2 = in_stack_00000060;
        uVar11 = in_stack_00000058;
        uVar8 = in_stack_00000050;
        uVar10 = thunk_FUN_0159f088(PTR_DAT_06db0b38);
        in_stack_000000b8 = uVar11;
        in_stack_000000b0 = uVar8;
        in_stack_000000c8 = uVar3;
        in_stack_000000c0 = uVar2;
        FUN_03a35f3c(&stack0x000000b0,uVar10);
        uVar11 = *(undefined8 *)(in_stack_000000d8 + 0x78);
        uVar8 = thunk_FUN_0159f088(PTR_DAT_06dd25c8);
        uVar8 = FUN_02519a6c(uVar8,uVar11,0);
        thunk_FUN_0159f088(PTR_DAT_06e0ea30);
        lVar13 = thunk_FUN_015d056c();
        if (lVar13 != 0) {
          FUN_0321bdf8(lVar13,uVar8,0);
          uVar8 = thunk_FUN_0159f088(PTR_DAT_06e0d000);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar13,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      *(undefined8 *)(in_stack_000000d8 + 0x78) = 0;
      thunk_FUN_01656ef8((undefined8 *)(in_stack_000000d8 + 0x78),0);
      *(undefined8 *)(in_stack_000000d8 + 0x88) = 0;
      *(undefined8 *)(in_stack_000000d8 + 0x80) = 0;
      *(undefined8 *)(in_stack_000000d8 + 0x98) = 0;
      *(undefined8 *)(in_stack_000000d8 + 0x90) = 0;
    }
    else {
      in_stack_000000b0 = 0;
                    /* try { // try from 02244a20 to 02344a2f has its CatchHandler @ 02244a30 */
      FUN_04ef4924(&stack0x000000b0,*(undefined4 *)(in_stack_000000d8 + 0x44),
                   *(undefined4 *)(in_stack_000000d8 + 0x40),0);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 022449c4 with catch @ 02244a30
                       catch() { ... } // from try @ 02244a20 with catch @ 02244a30 */
        thunk_FUN_016466fc();
      }
                    /* try { // try from 02244a34 to 02344a37 has its CatchHandler @ 02244a40 */
                    /* try { // try from 02244a38 to 02344a43 has its CatchHandler @ 022444b4 */
                    /* catch() { ... } // from try @ 02244a34 with catch @ 02244a40 */
      uVar8 = FUN_04ef5564(*(undefined8 *)PTR_DAT_06de1788,in_stack_000000b0,0);
      *(undefined8 *)(in_stack_000000d8 + 0x70) = uVar8;
      thunk_FUN_01656ef8();
      lVar13 = *(long *)(in_stack_000000d8 + 0x30);
      if (*(long *)(in_stack_000000d8 + 0x70) == 0) {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        uVar6 = FUN_042a4124(lVar13 + 0x20,0);
        in_stack_000000b0 = CONCAT44(in_stack_000000b0._4_4_,uVar6);
        uVar8 = thunk_FUN_0159f088(PTR_DAT_06e1faf8);
        uVar8 = thunk_FUN_015d01b0(uVar8,&stack0x000000b0);
        uVar11 = thunk_FUN_0159f088(PTR_DAT_06dca298);
        uVar8 = FUN_0251daf0(uVar11,uVar8,0);
        thunk_FUN_0159f088(PTR_DAT_06e0ea30);
        lVar13 = thunk_FUN_015d056c();
        if (lVar13 != 0) {
          FUN_0321bdf8(lVar13,uVar8,0);
          uVar8 = thunk_FUN_0159f088(PTR_DAT_06e0d000);
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(lVar13,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      iVar5 = FUN_04ef5214(0);
      uVar6 = FUN_04ef523c(iVar5 + -1,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      *(undefined4 *)(lVar13 + 0x10) = uVar6;
      if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      FUN_02243030();
      if (*(long *)(in_stack_000000d8 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar7 = FUN_051e1cd0(*(long *)(in_stack_000000d8 + 0x70),0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        if (*(long *)(in_stack_000000d8 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
        FUN_051e1db4(*(long *)(in_stack_000000d8 + 0x70),0);
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eeb4();
        }
                    /* try { // try from 02244b0c to 02344c4b has its CatchHandler @ 02244b0c
                       catch() { ... } // from try @ 02244b0c with catch @ 02244b0c
                       catch() { ... } // from try @ 02244c58 with catch @ 02244b0c
                       catch() { ... } // from try @ 02244d08 with catch @ 02244b0c
                       catch() { ... } // from try @ 02244d2c with catch @ 02244b0c
                       catch() { ... } // from try @ 02244d88 with catch @ 02244b0c
                       catch() { ... } // from try @ 02244e3c with catch @ 02244b0c
                       catch() { ... } // from try @ 02244f80 with catch @ 02244b0c
                       catch() { ... } // from try @ 02245024 with catch @ 02244b0c
                       catch() { ... } // from try @ 02245094 with catch @ 02244b0c */
        (**(code **)(*unaff_x19 + 0x368))();
        *(undefined8 *)(in_stack_000000d8 + 0x18) = 0;
        thunk_FUN_01656ef8((undefined8 *)(in_stack_000000d8 + 0x18),0);
        uVar6 = 3;
        goto LAB_02244f78;
      }
      *(undefined8 *)(in_stack_000000d8 + 0x70) = 0;
      thunk_FUN_01656ef8((undefined8 *)(in_stack_000000d8 + 0x70),0);
    }
  }
  *(undefined4 *)(in_stack_000000d8 + 0x10) = 0xffffffff;
  if (*(long *)(in_stack_000000d8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  *(undefined1 *)(*(long *)(in_stack_000000d8 + 0x38) + 0x50) = 0;
  *(undefined8 *)(in_stack_000000d8 + 0x38) = 0;
  if (*(long *)(in_stack_000000d8 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  (**(code **)(*unaff_x19 + 0x358))();
  uVar8 = FUN_051e4284();
  *(undefined8 *)(in_stack_000000d8 + 0x18) = uVar8;
  thunk_FUN_01656ef8();
  uVar6 = 5;
LAB_02244f78:
  *(undefined4 *)(in_stack_000000d8 + 0x10) = uVar6;
  return 1;
}


