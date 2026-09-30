/*
FUNCTION_NAME: FUN_05492e7c
ENTRY_POINT: 05492e7c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_05492e7c(long *param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined *puVar8;
  
                    /* try { // try from 05492e84 to 05592e8b has its CatchHandler @ 05493000 */
                    /* try { // try from 05492e94 to 05592ea3 has its CatchHandler @ 0549300c */
  if ((DAT_06b7e9fb & 1) == 0) {
                    /* try { // try from 05492eb4 to 05592ebb has its CatchHandler @ 05493004 */
    FUN_02d6084c(TMPro_FloatTween_var);
                    /* try { // try from 05492ec0 to 05592edf has its CatchHandler @ 05493020 */
    FUN_02d6084c(PTR_DAT_0676bc98);
    FUN_02d6084c(PTR_DAT_0676bca0);
    FUN_02d6084c(PTR_DAT_06773050);
    DAT_06b7e9fb = 1;
  }
  if (*(int *)((long)param_1 + 0x4c) == 3) {
    (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  }
  else {
                    /* try { // try from 05492ef8 to 05592f67 has its CatchHandler @ 05493480 */
    if (*(int *)((long)param_1 + 0x4c) == 5) {
                    /* WARNING: Subroutine does not return */
      FUN_054925ac();
    }
  }
  if ((param_3 == 0) ||
     ((*(int *)(param_3 + 0x10) == 0 &&
      (uVar3 = FUN_04e8c024(*param_2,*(undefined8 *)PTR_DAT_0676bca0,0), (uVar3 & 1) != 0)))) {
                    /* try { // try from 054932b4 to 055932b7 has its CatchHandler @ 05493430 */
                    /* try { // try from 054932b8 to 055932bf has its CatchHandler @ 05493440 */
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar6 = thunk_FUN_02d9d534();
                    /* try { // try from 054932c0 to 055932c3 has its CatchHandler @ 05493404 */
                    /* try { // try from 054932c4 to 055932c7 has its CatchHandler @ 054933f0 */
                    /* try { // try from 054932c8 to 055932cf has its CatchHandler @ 0549342c */
    uVar5 = thunk_FUN_02dc61f4(System_Xml_XmlNode_var);
                    /* try { // try from 054932d0 to 055932d3 has its CatchHandler @ 054933d8 */
                    /* try { // try from 054932d4 to 055932e3 has its CatchHandler @ 054933a0 */
    FUN_04f77010(uVar6,uVar5,0);
                    /* try { // try from 054932e4 to 055932eb has its CatchHandler @ 0549340c */
    goto LAB_05493548;
  }
  puVar8 = PTR_DAT_06773050;
  if (*(int *)((long)param_1 + 0x4c) != 2) {
                    /* try { // try from 054932ec to 055932ef has its CatchHandler @ 054933b4 */
                    /* try { // try from 054932f0 to 055932f3 has its CatchHandler @ 054933f8 */
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
                    /* try { // try from 054932f4 to 055932f7 has its CatchHandler @ 054933a8 */
                    /* try { // try from 054932f8 to 055932fb has its CatchHandler @ 054933e4 */
    uVar5 = FUN_02d60934(uVar5,2);
                    /* try { // try from 054932fc to 055932ff has its CatchHandler @ 054933e0 */
    FUN_028f4e40();
    puVar8 = UnityEngine_Awaitable_Awaiter_var;
                    /* try { // try from 0549330c to 05593313 has its CatchHandler @ 05493384 */
    uVar6 = thunk_FUN_02dc61f4(UnityEngine_Awaitable_Awaiter_var);
                    /* try { // try from 0549331c to 0559333b has its CatchHandler @ 05493380 */
    FUN_028f7030(uVar5,uVar6);
    uVar6 = thunk_FUN_02dc61f4(puVar8);
    FUN_028f7064(uVar5,0,uVar6);
    uVar2 = (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
                    /* try { // try from 0549334c to 05593353 has its CatchHandler @ 05493614 */
                    /* catch() { ... } // from try @ 054931d8 with catch @ 05493354
                       try { // try from 05493354 to 055934f7 has its CatchHandler @ 05492210 */
    local_58 = thunk_FUN_02dc61f4(UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
    uStack_50 = 0xffffffffffffffff;
    local_48 = uVar2;
                    /* catch() { ... } // from try @ 05492b2c with catch @ 05493368 */
    uVar6 = FUN_0503c914(&local_58,0);
                    /* catch() { ... } // from try @ 05493050 with catch @ 05493374 */
    FUN_028f4e40(uVar5);
                    /* catch() { ... } // from try @ 0549331c with catch @ 05493380 */
                    /* catch() { ... } // from try @ 0549330c with catch @ 05493384 */
                    /* catch() { ... } // from try @ 05492b80 with catch @ 05493388 */
    FUN_028f7030(uVar5,uVar6);
                    /* catch() { ... } // from try @ 05492b5c with catch @ 0549338c */
                    /* catch() { ... } // from try @ 054926c0 with catch @ 05493390 */
                    /* catch() { ... } // from try @ 054926b8 with catch @ 05493394 */
                    /* catch() { ... } // from try @ 054926a0 with catch @ 05493398 */
    FUN_028f7064(uVar5,1,uVar6);
                    /* catch() { ... } // from try @ 05492690 with catch @ 0549339c */
                    /* catch() { ... } // from try @ 054932d4 with catch @ 054933a0 */
                    /* catch() { ... } // from try @ 054924fc with catch @ 054933a4 */
    uVar6 = thunk_FUN_02dc61f4(RootMotion_Demos_AnimationWarping_Warp_var);
                    /* catch() { ... } // from try @ 054932f4 with catch @ 054933a8 */
                    /* catch() { ... } // from try @ 05492518 with catch @ 054933ac */
                    /* catch() { ... } // from try @ 054924dc with catch @ 054933b0 */
    uVar5 = FUN_054f97f0(uVar6,uVar5,0);
                    /* catch() { ... } // from try @ 054932ec with catch @ 054933b4 */
                    /* catch() { ... } // from try @ 05492cb8 with catch @ 054933b8 */
                    /* catch() { ... } // from try @ 0549263c with catch @ 054933bc */
                    /* catch() { ... } // from try @ 05492630 with catch @ 054933c0 */
    thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
                    /* catch() { ... } // from try @ 05492628 with catch @ 054933c4 */
    uVar6 = thunk_FUN_02d9d534();
                    /* catch() { ... } // from try @ 05492620 with catch @ 054933c8 */
                    /* catch() { ... } // from try @ 0549246c with catch @ 054933cc */
                    /* catch() { ... } // from try @ 05493284 with catch @ 054933d0 */
                    /* catch() { ... } // from try @ 05492b54 with catch @ 054933d4 */
    FUN_05007004(uVar6,uVar5,0);
                    /* catch() { ... } // from try @ 054932d0 with catch @ 054933d8 */
    goto LAB_05493548;
  }
  lVar9 = *param_2;
  if (lVar9 == 0) {
    uVar3 = thunk_FUN_04e8bd3c(param_4,*(undefined8 *)PTR_DAT_0676bc98,0);
    puVar1 = PTR_DAT_0676bca0;
                    /* try { // try from 05492f7c to 05592f87 has its CatchHandler @ 05493034 */
                    /* try { // try from 05492f8c to 05592f93 has its CatchHandler @ 0549302c */
    if (((uVar3 & 1) == 0) ||
       (uVar3 = FUN_04e8c024(param_3,*(undefined8 *)PTR_DAT_0676bca0,0), (uVar3 & 1) == 0)) {
                    /* try { // try from 05492fa0 to 05592fa3 has its CatchHandler @ 05493014 */
                    /* try { // try from 05492fa8 to 05592fab has its CatchHandler @ 05493010 */
                    /* try { // try from 05492fb0 to 05592fb3 has its CatchHandler @ 05493008 */
      uVar3 = thunk_FUN_04e8bd3c(param_4,*(undefined8 *)TMPro_FloatTween_var,0);
                    /* try { // try from 05492fb8 to 05592fbb has its CatchHandler @ 05492ffc */
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 05492fd0 to 05592fd3 has its CatchHandler @ 05492ff0 */
                    /* try { // try from 05492fd8 to 05592fdb has its CatchHandler @ 05492fec */
        lVar9 = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
                    /* try { // try from 05492fe0 to 05592fe3 has its CatchHandler @ 05492fe8 */
        *param_2 = lVar9;
      }
      else {
                    /* try { // try from 05492fc0 to 05592fc3 has its CatchHandler @ 05492ff8 */
        *param_2 = *(long *)puVar8;
        lVar9 = *(long *)puVar8;
                    /* try { // try from 05492fc8 to 05592fcb has its CatchHandler @ 05492ff4 */
      }
    }
    else {
      *param_2 = *(long *)puVar1;
                    /* try { // try from 05492f98 to 05592f9b has its CatchHandler @ 05493018 */
      lVar9 = *(long *)puVar1;
    }
                    /* try { // try from 05492fe4 to 0559304f has its CatchHandler @ 05492210 */
                    /* catch() { ... } // from try @ 05492fe0 with catch @ 05492fe8 */
    thunk_FUN_02dd37b4(param_2,lVar9);
                    /* catch() { ... } // from try @ 05492fd8 with catch @ 05492fec */
    lVar9 = *param_2;
                    /* catch() { ... } // from try @ 05492fd0 with catch @ 05492ff0 */
    if (lVar9 == 0) goto LAB_054933dc;
  }
  puVar1 = PTR_DAT_0676bca0;
                    /* catch() { ... } // from try @ 05492fc8 with catch @ 05492ff4 */
                    /* catch() { ... } // from try @ 05492fc0 with catch @ 05492ff8 */
                    /* catch() { ... } // from try @ 05492fb8 with catch @ 05492ffc */
                    /* catch() { ... } // from try @ 05492e84 with catch @ 05493000 */
                    /* catch() { ... } // from try @ 05492eb4 with catch @ 05493004 */
                    /* catch() { ... } // from try @ 05492fb0 with catch @ 05493008 */
                    /* catch() { ... } // from try @ 05492e94 with catch @ 0549300c */
                    /* catch() { ... } // from try @ 05492fa8 with catch @ 05493010 */
                    /* catch() { ... } // from try @ 05492fa0 with catch @ 05493014 */
  if ((*(int *)(lVar9 + 0x10) == 0) &&
     (uVar3 = thunk_FUN_04e8bd3c(param_3,*(undefined8 *)PTR_DAT_0676bca0,0), (uVar3 & 1) != 0)) {
                    /* catch() { ... } // from try @ 05492f98 with catch @ 05493018 */
                    /* catch() { ... } // from try @ 05492e04 with catch @ 0549301c */
                    /* catch() { ... } // from try @ 05492ec0 with catch @ 05493020 */
    *param_2 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 05492da4 with catch @ 05493024 */
                    /* catch() { ... } // from try @ 05492d48 with catch @ 05493028 */
    thunk_FUN_02dd37b4(param_2,*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 05492f8c with catch @ 0549302c */
                    /* catch() { ... } // from try @ 05492e58 with catch @ 05493030 */
                    /* catch() { ... } // from try @ 05492f7c with catch @ 05493034 */
    param_3 = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  }
  *(undefined2 *)(param_1 + 9) = 0;
                    /* try { // try from 05493050 to 05593053 has its CatchHandler @ 05493374 */
  uVar3 = thunk_FUN_04e8bd3c(*param_2,*(undefined8 *)puVar8,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = thunk_FUN_04e8bd3c(*param_2,*(undefined8 *)PTR_DAT_0676bca0,0);
    if ((uVar3 & 1) != 0) {
      if ((param_4 != 0) &&
         (uVar3 = FUN_04e8c024(param_4,*(undefined8 *)PTR_DAT_0676bc98,0), (uVar3 & 1) != 0)) {
                    /* catch() { ... } // from try @ 05492410 with catch @ 05493444 */
                    /* catch() { ... } // from try @ 054925dc with catch @ 05493448 */
                    /* catch() { ... } // from try @ 05492540 with catch @ 0549344c */
        uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
                    /* catch() { ... } // from try @ 054923f4 with catch @ 05493450
                       catch() { ... } // from try @ 05493270 with catch @ 05493450 */
                    /* catch() { ... } // from try @ 054923d8 with catch @ 05493454 */
        uVar5 = FUN_02d60934(uVar5,3);
                    /* catch() { ... } // from try @ 0549259c with catch @ 05493458
                       catch() { ... } // from try @ 054932ac with catch @ 05493458 */
        FUN_028f4e40();
        puVar8 = PTR_DAT_0676bca0;
                    /* catch() { ... } // from try @ 0549325c with catch @ 05493464 */
                    /* catch() { ... } // from try @ 05493258 with catch @ 05493468 */
                    /* catch() { ... } // from try @ 05493254 with catch @ 0549346c */
        uVar6 = thunk_FUN_02dc61f4(PTR_DAT_0676bca0);
                    /* catch() { ... } // from try @ 05492d0c with catch @ 05493470 */
                    /* catch() { ... } // from try @ 05492ce8 with catch @ 05493474 */
                    /* catch() { ... } // from try @ 05493250 with catch @ 05493478 */
        FUN_028f7030(uVar5,uVar6);
                    /* catch() { ... } // from try @ 0549324c with catch @ 0549347c */
                    /* catch() { ... } // from try @ 05492ef8 with catch @ 05493480 */
        uVar6 = thunk_FUN_02dc61f4(puVar8);
        FUN_028f7064(uVar5,0,uVar6);
                    /* catch() { ... } // from try @ 05492c28 with catch @ 05493494 */
                    /* catch() { ... } // from try @ 05492c44 with catch @ 05493498 */
        FUN_028f4e40(uVar5);
                    /* catch() { ... } // from try @ 05493248 with catch @ 0549349c */
                    /* catch() { ... } // from try @ 05493244 with catch @ 054934a0 */
        puVar8 = PTR_DAT_0676bc98;
        goto LAB_054934a4;
      }
      *(undefined1 *)((long)param_1 + 0x49) = 1;
      goto LAB_054930c8;
    }
    if (param_4 == 0) {
      lVar9 = *param_2;
      if (lVar9 == 0) goto LAB_054933dc;
      if (*(int *)(lVar9 + 0x10) == 0) goto LAB_054930f8;
      if (param_1[4] == 0) goto LAB_054933dc;
      lVar9 = FUN_054985a4(param_1[4],lVar9,0);
      if (lVar9 != 0) goto LAB_054930f8;
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
      uVar5 = FUN_02d60934(uVar5,1);
      lVar9 = *param_2;
      FUN_028f4e40();
      FUN_028f7030(uVar5,lVar9);
      FUN_028f7064(uVar5,0,lVar9);
      uVar6 = thunk_FUN_02dc61f4(UnityEngine_Awaitable_AwaitableAndFrameIndex_var);
                    /* try { // try from 054931c0 to 055931d7 has its CatchHandler @ 05492210 */
      uVar5 = FUN_054f97f0(uVar6,uVar5,0);
LAB_054931e4:
                    /* try { // try from 054931e8 to 0559321f has its CatchHandler @ 05493614 */
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar6 = thunk_FUN_02d9d534();
      puVar8 = PTR_DAT_06775f88;
      goto LAB_0549352c;
    }
    lVar9 = *param_2;
    if (lVar9 == 0) goto LAB_054933dc;
    if (*(int *)(param_4 + 0x10) == 0) {
      if (*(int *)(lVar9 + 0x10) == 0) goto LAB_054930f8;
                    /* try { // try from 054931d8 to 055931db has its CatchHandler @ 05493354 */
      uVar5 = thunk_FUN_02dc61f4(UnityEngine_Awaitable_AwaitableAsyncMethodBuilder_var);
      uVar5 = FUN_054f9054(uVar5,0);
      goto LAB_054931e4;
    }
    lVar4 = param_1[4];
    if (*(int *)(lVar9 + 0x10) != 0) {
      if (lVar4 != 0) {
        FUN_05497f84(lVar4,lVar9,param_4,param_5,0);
        goto LAB_054930f8;
      }
LAB_054933dc:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05492bd8 with catch @ 054933dc */
      FUN_02d60ae8();
    }
    if (lVar4 == 0) goto LAB_054933dc;
    lVar9 = FUN_05498a68(lVar4,param_4,0);
    *param_2 = lVar9;
                    /* try { // try from 05493220 to 05593223 has its CatchHandler @ 054934c8 */
                    /* try { // try from 05493224 to 05593227 has its CatchHandler @ 054934c4 */
    thunk_FUN_02dd37b4(param_2,lVar9);
                    /* try { // try from 05493228 to 0559322b has its CatchHandler @ 054934c0 */
                    /* try { // try from 0549322c to 0559322f has its CatchHandler @ 054934bc */
    if (*param_2 != 0) goto LAB_054930f8;
                    /* try { // try from 05493230 to 05593233 has its CatchHandler @ 054934b8 */
                    /* try { // try from 05493234 to 05593237 has its CatchHandler @ 054934b4 */
                    /* try { // try from 05493238 to 0559323f has its CatchHandler @ 054934ac */
    lVar9 = *(long *)PTR_DAT_0676bc98;
    if (lVar9 == 0) goto LAB_054933dc;
                    /* try { // try from 05493240 to 05593243 has its CatchHandler @ 054934a4 */
                    /* try { // try from 05493244 to 05593247 has its CatchHandler @ 054934a0 */
                    /* try { // try from 05493248 to 0559324b has its CatchHandler @ 0549349c */
                    /* try { // try from 0549324c to 0559324f has its CatchHandler @ 0549347c */
                    /* try { // try from 05493250 to 05593253 has its CatchHandler @ 05493478 */
                    /* try { // try from 05493254 to 05593257 has its CatchHandler @ 0549346c */
                    /* try { // try from 05493258 to 0559325b has its CatchHandler @ 05493468 */
                    /* try { // try from 0549325c to 05593263 has its CatchHandler @ 05493464 */
    if ((*(int *)(param_4 + 0x10) == *(int *)(lVar9 + 0x10)) &&
       (uVar3 = thunk_FUN_04e8bd3c(param_4,lVar9,0), (uVar3 & 1) != 0)) {
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
      uVar5 = FUN_02d60934(uVar5,2);
                    /* try { // try from 05493580 to 05593587 has its CatchHandler @ 05493614 */
      FUN_028f4e40();
      puVar8 = PTR_DAT_0676bca0;
                    /* try { // try from 05493588 to 055935a7 has its CatchHandler @ 05492210 */
LAB_054935b8:
                    /* try { // try from 054935b8 to 055935ff has its CatchHandler @ 05493614 */
      uVar6 = thunk_FUN_02dc61f4(puVar8);
                    /* catch() { ... } // from try @ 05493564 with catch @ 054935c0 */
      FUN_028f7030(uVar5,uVar6);
                    /* catch() { ... } // from try @ 054935a8 with catch @ 054935cc */
      uVar6 = thunk_FUN_02dc61f4(puVar8);
      FUN_028f7064(uVar5,0,uVar6);
      FUN_028f4e40(uVar5);
      FUN_028f7030(uVar5,param_4);
                    /* try { // try from 05493600 to 0559360b has its CatchHandler @ 05492210 */
      FUN_028f7064(uVar5,1,param_4);
                    /* try { // try from 0549360c to 05593613 has its CatchHandler @ 05493614 */
      uVar6 = thunk_FUN_02dc61f4(
                                UnityEngine_XR_OpenXR_Features_Meta_BatchSaveAnchors_SaveRequest_var
                                );
                    /* catch() { ... } // from try @ 054930e0 with catch @ 05493614
                       catch() { ... } // from try @ 054931e8 with catch @ 05493614
                       catch() { ... } // from try @ 0549334c with catch @ 05493614
                       catch() { ... } // from try @ 0549351c with catch @ 05493614
                       catch() { ... } // from try @ 05493580 with catch @ 05493614
                       catch() { ... } // from try @ 054935b8 with catch @ 05493614
                       catch() { ... } // from try @ 0549360c with catch @ 05493614 */
      uVar5 = FUN_054f97f0(uVar6,uVar5,0);
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
      uVar6 = thunk_FUN_02d9d534();
      FUN_04f7d8e0(uVar6,uVar5,0);
      goto LAB_05493548;
    }
                    /* try { // try from 05493264 to 0559326f has its CatchHandler @ 05492210 */
    lVar9 = *(long *)TMPro_FloatTween_var;
    if (lVar9 == 0) goto LAB_054933dc;
                    /* try { // try from 05493270 to 05593273 has its CatchHandler @ 05493450 */
                    /* try { // try from 05493278 to 0559327f has its CatchHandler @ 05493424 */
                    /* try { // try from 05493284 to 055932ab has its CatchHandler @ 054933d0 */
    if ((*(int *)(param_4 + 0x10) == *(int *)(lVar9 + 0x10)) &&
       (uVar3 = thunk_FUN_04e8bd3c(param_4,lVar9,0), (uVar3 & 1) != 0)) {
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
      uVar5 = FUN_02d60934(uVar5,2);
                    /* try { // try from 054935a8 to 055935ab has its CatchHandler @ 054935cc */
      FUN_028f4e40();
      puVar8 = PTR_DAT_06773050;
      goto LAB_054935b8;
    }
    param_3 = FUN_05492a30(param_1,param_4,param_5);
    *param_2 = param_3;
                    /* try { // try from 054932ac to 055932b3 has its CatchHandler @ 05493458 */
  }
  else {
                    /* try { // try from 0549306c to 0559307b has its CatchHandler @ 0549340c */
    if ((param_4 != 0) &&
       (uVar3 = FUN_04e8c024(param_4,*(undefined8 *)TMPro_FloatTween_var,0), (uVar3 & 1) != 0)) {
                    /* catch() { ... } // from try @ 054926d4 with catch @ 054933e0
                       catch() { ... } // from try @ 054932fc with catch @ 054933e0 */
                    /* catch() { ... } // from try @ 05492680 with catch @ 054933e4
                       catch() { ... } // from try @ 054932f8 with catch @ 054933e4 */
                    /* catch() { ... } // from try @ 05492660 with catch @ 054933e8 */
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
                    /* catch() { ... } // from try @ 054924ac with catch @ 054933ec */
                    /* catch() { ... } // from try @ 054932c4 with catch @ 054933f0 */
      uVar5 = FUN_02d60934(uVar5,3);
                    /* catch() { ... } // from try @ 05492494 with catch @ 054933f4 */
                    /* catch() { ... } // from try @ 05492508 with catch @ 054933f8
                       catch() { ... } // from try @ 054932f0 with catch @ 054933f8 */
      FUN_028f4e40();
      puVar8 = PTR_DAT_06773050;
                    /* catch() { ... } // from try @ 054924c4 with catch @ 054933fc */
                    /* catch() { ... } // from try @ 05492454 with catch @ 05493400 */
                    /* catch() { ... } // from try @ 054932c0 with catch @ 05493404 */
                    /* catch() { ... } // from try @ 054924bc with catch @ 05493408 */
      uVar6 = thunk_FUN_02dc61f4(PTR_DAT_06773050);
                    /* catch() { ... } // from try @ 0549306c with catch @ 0549340c
                       catch() { ... } // from try @ 054932e4 with catch @ 0549340c */
                    /* catch() { ... } // from try @ 05492704 with catch @ 05493410 */
                    /* catch() { ... } // from try @ 054926e4 with catch @ 05493414 */
      FUN_028f7030(uVar5,uVar6);
      uVar6 = thunk_FUN_02dc61f4(puVar8);
                    /* catch() { ... } // from try @ 05492610 with catch @ 05493420 */
                    /* catch() { ... } // from try @ 05493278 with catch @ 05493424 */
                    /* catch() { ... } // from try @ 0549241c with catch @ 05493428 */
                    /* catch() { ... } // from try @ 05492c94 with catch @ 0549342c
                       catch() { ... } // from try @ 054932c8 with catch @ 0549342c */
      FUN_028f7064(uVar5,0,uVar6);
                    /* catch() { ... } // from try @ 054932b4 with catch @ 05493430 */
                    /* catch() { ... } // from try @ 054925f4 with catch @ 05493434 */
      FUN_028f4e40(uVar5);
      puVar8 = TMPro_FloatTween_var;
                    /* catch() { ... } // from try @ 054925c0 with catch @ 05493438 */
                    /* catch() { ... } // from try @ 05492430 with catch @ 0549343c */
                    /* catch() { ... } // from try @ 05492bac with catch @ 05493440
                       catch() { ... } // from try @ 054932b8 with catch @ 05493440 */
LAB_054934a4:
                    /* catch() { ... } // from try @ 05493240 with catch @ 054934a4 */
                    /* catch() { ... } // from try @ 05492c5c with catch @ 054934a8 */
      uVar6 = thunk_FUN_02dc61f4(puVar8);
                    /* catch() { ... } // from try @ 05493238 with catch @ 054934ac */
                    /* catch() { ... } // from try @ 0549279c with catch @ 054934b0 */
                    /* catch() { ... } // from try @ 05493234 with catch @ 054934b4 */
      FUN_028f7030(uVar5,uVar6);
                    /* catch() { ... } // from try @ 05493230 with catch @ 054934b8 */
                    /* catch() { ... } // from try @ 0549322c with catch @ 054934bc */
      uVar6 = thunk_FUN_02dc61f4(puVar8);
                    /* catch() { ... } // from try @ 05493228 with catch @ 054934c0 */
                    /* catch() { ... } // from try @ 05493224 with catch @ 054934c4 */
                    /* catch() { ... } // from try @ 05493220 with catch @ 054934c8 */
                    /* catch() { ... } // from try @ 054927ac with catch @ 054934cc */
      FUN_028f7064(uVar5,1,uVar6);
                    /* catch() { ... } // from try @ 05492770 with catch @ 054934d0 */
                    /* catch() { ... } // from try @ 054927d0 with catch @ 054934d4 */
      FUN_028f4e40(uVar5);
                    /* catch() { ... } // from try @ 05492780 with catch @ 054934d8 */
                    /* catch() { ... } // from try @ 05492c00 with catch @ 054934dc */
      FUN_028f7030(uVar5,param_4);
      FUN_028f7064(uVar5,2,param_4);
                    /* try { // try from 054934f8 to 055934fb has its CatchHandler @ 05493538 */
      uVar6 = thunk_FUN_02dc61f4(
                                UnityEngine_XR_OpenXR_Features_Meta_BatchEraseAnchors_EraseRequest_var
                                );
      uVar5 = FUN_054f97f0(uVar6,uVar5,0);
      thunk_FUN_02dc61f4(PTR_DAT_06763b78);
                    /* try { // try from 0549351c to 05593537 has its CatchHandler @ 05493614 */
      uVar6 = thunk_FUN_02d9d534();
      puVar8 = Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_var;
LAB_0549352c:
      uVar7 = thunk_FUN_02dc61f4(puVar8);
                    /* catch() { ... } // from try @ 054934f8 with catch @ 05493538
                       try { // try from 05493538 to 05593563 has its CatchHandler @ 05492210 */
      FUN_04f77088(uVar6,uVar5,uVar7,0);
LAB_05493548:
                    /* catch() { ... } // from try @ 05492a04 with catch @ 05493548 */
      uVar5 = FUN_054f9058(uVar6,0);
      uVar6 = thunk_FUN_02dc61f4(
                                UnityEngine_XR_OpenXR_Features_Meta_BatchLoadAnchors_LoadRequest_var
                                );
                    /* try { // try from 05493564 to 05593567 has its CatchHandler @ 054935c0 */
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar5,uVar6);
    }
                    /* try { // try from 0549307c to 055930df has its CatchHandler @ 05492210 */
    *(undefined1 *)(param_1 + 9) = 1;
LAB_054930c8:
                    /* try { // try from 054930e0 to 055931bf has its CatchHandler @ 05493614 */
    param_1[8] = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    thunk_FUN_02dd37b4();
    param_2 = param_1 + 7;
    *param_2 = param_3;
  }
  thunk_FUN_02dd37b4(param_2,param_3);
LAB_054930f8:
  *(undefined4 *)((long)param_1 + 0x4c) = 3;
  return;
}


