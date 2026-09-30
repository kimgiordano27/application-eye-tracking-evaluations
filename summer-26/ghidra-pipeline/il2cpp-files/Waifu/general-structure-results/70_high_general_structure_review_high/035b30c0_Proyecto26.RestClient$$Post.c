/*
FUNCTION_NAME: Proyecto26.RestClient$$Post
ENTRY_POINT: 035b30c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Proyecto26_RestClient__Post(void)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 unaff_w21;
  long lVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08455230,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x553) = unaff_w21;
  fVar14 = *(float *)(unaff_x19 + 0x30);
  if (DAT_086ef698 == (code *)0x0) {
    DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
  }
  fVar13 = (float)(*DAT_086ef698)();
  *(float *)(unaff_x19 + 0x30) = fVar14 + fVar13;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x420);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = FUN_07a119fc(uVar10,0,0);
  if ((uVar8 & 1) != 0) {
    FUN_07a0f654(DAT_08455230,0);
    lVar9 = FUN_03c89df4();
    *(long *)(unaff_x19 + 0x2c8) = lVar9;
    if (DAT_08908cd0 != 0) {
      plVar1 = (long *)(unaff_x19 + 0x2c8);
      puVar2 = &DAT_0873ccb0 + ((ulong)plVar1 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << ((ulong)plVar1 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar9 = *plVar1;
    }
    if (lVar9 == 0) goto LAB_035b37d0;
    FUN_035cc6b8(lVar9,0);
  }
  if ((*(int *)(unaff_x19 + 0xd04) == 1) && (*(int *)(unaff_x19 + 0xd7c) == 1)) {
    FUN_035b2a14();
  }
  if ((*(int *)(unaff_x19 + 0xc9c) != 1) && (*(int *)(unaff_x19 + 0xd04) != 0)) {
    return;
  }
  lVar9 = *(long *)(unaff_x19 + 0xf78);
  if (lVar9 == 0) goto LAB_035b37d0;
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  if (DAT_086ec888 == (code *)0x0) {
    DAT_086ec888 = (code *)FUN_033d1b68(
                                       "UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)"
                                       );
  }
  (*DAT_086ec888)(lVar9,0,0,&stack0x00000030);
  *(undefined4 *)(unaff_x19 + 0x148) = in_stack_00000050;
  *(undefined8 *)(unaff_x19 + 0x130) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x128) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0x140) = in_stack_00000048;
  *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000040;
  FUN_035b37d4();
  if (*(char *)(unaff_x19 + 0x357) == '\0') {
    lVar9 = *(long *)(unaff_x19 + 0x420);
    if (lVar9 == 0) goto LAB_035b37d0;
    uVar6 = *(undefined4 *)(unaff_x19 + 1000);
    if (DAT_086ebf30 == (code *)0x0) {
      DAT_086ebf30 = (code *)FUN_033d1b68(
                                         "UnityEngine.AI.NavMeshAgent::set_angularSpeed(System.Single)"
                                         );
    }
    (*DAT_086ebf30)(uVar6,lVar9);
    if (*(int *)(unaff_x19 + 0xca8) == 1) goto LAB_035b32d4;
  }
  else {
    *(undefined1 *)(unaff_x19 + 0x353) = 0;
    if (*(int *)(unaff_x19 + 0xca8) == 1) {
      *(undefined4 *)(unaff_x19 + 0x3f8) = *(undefined4 *)(unaff_x19 + 0x3f4);
LAB_035b32d4:
      if (*(char *)(unaff_x19 + 0xa44) == '\0') {
        FUN_035b3c00();
      }
    }
    else if (*(int *)(unaff_x19 + 0xca8) == 0) {
      *(undefined4 *)(unaff_x19 + 0x3f8) = *(undefined4 *)(unaff_x19 + 0x3ec);
    }
  }
  piVar12 = (int *)(unaff_x19 + 0xca8);
  if (*(char *)(unaff_x19 + 0xa44) != '\0') {
    fVar14 = *(float *)(unaff_x19 + 0xa48);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar13 = (float)(*DAT_086ef698)();
    fVar14 = fVar14 + fVar13;
    *(float *)(unaff_x19 + 0xa48) = fVar14;
    if (*(float *)(unaff_x19 + 0xa40) < fVar14) {
      if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_035b37d0;
      FUN_0359d424(*(long *)(unaff_x19 + 0x2d8),0);
    }
  }
  lVar9 = *(long *)(unaff_x19 + 0x420);
  if (lVar9 == 0) goto LAB_035b37d0;
  if (DAT_086ef160 == (code *)0x0) {
    DAT_086ef160 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_enabled()");
  }
  bVar5 = (*DAT_086ef160)(lVar9);
  *(byte *)(unaff_x19 + 0xdda) = bVar5 & 1;
  fVar14 = *(float *)(unaff_x19 + 0x14c);
  if (DAT_086ef698 == (code *)0x0) {
    DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
  }
  fVar13 = (float)(*DAT_086ef698)();
  *(float *)(unaff_x19 + 0x14c) = fVar14 + fVar13;
  if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_035b37d0;
  FUN_035a0fb4(*(long *)(unaff_x19 + 0x2d8),0);
  if (((*(char *)(unaff_x19 + 0xdda) == '\0') || (*piVar12 != 0)) ||
     (*(char *)(unaff_x19 + 0xa44) != '\0')) {
    lVar9 = *(long *)(unaff_x19 + 0x420);
    if (lVar9 == 0) goto LAB_035b37d0;
    if (DAT_086ebed8 == (code *)0x0) {
      DAT_086ebed8 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::get_hasPath()");
    }
    uVar8 = (*DAT_086ebed8)(lVar9);
    if ((((uVar8 & 1) != 0) && (*(int *)(unaff_x19 + 0xc8c) == 1)) &&
       (0 < *(int *)(unaff_x19 + 0xc98))) {
      lVar9 = *(long *)(unaff_x19 + 0x420);
      if (lVar9 == 0) goto LAB_035b37d0;
      if (DAT_086ebef8 == (code *)0x0) {
        DAT_086ebef8 = (code *)FUN_033d1b68("UnityEngine.AI.NavMeshAgent::ResetPath()");
      }
      (*DAT_086ebef8)(lVar9);
    }
  }
  else {
    if ((*(int *)(unaff_x19 + 0xc8c) == 2) || (*(int *)(unaff_x19 + 0xc8c) == 4)) {
      uVar10 = *(undefined8 *)(unaff_x19 + 0xdb8);
      if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar8 = FUN_07a0d2c4(uVar10,0,0);
      if ((uVar8 & 1) != 0) {
        FUN_035b4bec();
        goto LAB_035b3488;
      }
    }
    FUN_035b42b8();
  }
LAB_035b3488:
  if (((*(char *)(unaff_x19 + 0x357) == '\0') && (*(char *)(unaff_x19 + 0x358) == '\0')) &&
     (*(char *)(unaff_x19 + 0x1e8) == '\0')) {
    FUN_035b4d24();
  }
  if (*(char *)(unaff_x19 + 0x18c) != '\0') {
    fVar14 = *(float *)(unaff_x19 + 0x194);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar13 = (float)(*DAT_086ef698)();
    fVar14 = fVar14 + fVar13;
    *(float *)(unaff_x19 + 0x194) = fVar14;
    if (((float)*(int *)(unaff_x19 + 400) <= fVar14) &&
       (*(float *)(unaff_x19 + 0x390) < *(float *)(unaff_x19 + 900))) {
      *(undefined4 *)(unaff_x19 + 0x194) = 0;
      *(undefined1 *)(unaff_x19 + 0x18c) = 0;
    }
  }
  cVar3 = *(char *)(unaff_x19 + 0xdda);
  if (cVar3 != '\0') {
    if (*piVar12 == 1) {
      *(undefined4 *)(unaff_x19 + 0x3dc) = *(undefined4 *)(unaff_x19 + 0x3e4);
      *(undefined4 *)(unaff_x19 + 0x268) = *(undefined4 *)(unaff_x19 + 0x260);
      *(undefined4 *)(unaff_x19 + 0x410) = *(undefined4 *)(unaff_x19 + 0x418);
      uVar10 = *(undefined8 *)(unaff_x19 + 0xbf4);
    }
    else {
      if (*piVar12 != 0) goto LAB_035b355c;
      *(undefined4 *)(unaff_x19 + 0x3dc) = *(undefined4 *)(unaff_x19 + 0x3e0);
      *(undefined4 *)(unaff_x19 + 0x268) = *(undefined4 *)(unaff_x19 + 0x25c);
      *(undefined4 *)(unaff_x19 + 0x410) = *(undefined4 *)(unaff_x19 + 0x414);
      uVar10 = *(undefined8 *)(unaff_x19 + 0xbec);
    }
    *(undefined8 *)(unaff_x19 + 0xbe4) = uVar10;
  }
LAB_035b355c:
  iVar7 = *(int *)(unaff_x19 + 0xc8c);
  if (iVar7 == 1) {
    bVar4 = *(int *)(unaff_x19 + 0xca8) == 1;
    if (*(int *)(unaff_x19 + 0xc98) == 0) {
      if (cVar3 != '\0' && bVar4) {
        if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_035b37d0;
        FUN_035a05a0(*(long *)(unaff_x19 + 0x2d8),0);
      }
    }
    else if (cVar3 != '\0' && bVar4) {
      if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_035b37d0;
      FUN_035a0aac(*(long *)(unaff_x19 + 0x2d8),0);
    }
  }
  else if (iVar7 == 2) {
    if (cVar3 != '\0') {
      if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_035b37d0;
      FUN_035a0118(*(long *)(unaff_x19 + 0x2d8),0);
    }
  }
  else if (((iVar7 == 3) && (cVar3 != '\0')) && (*piVar12 == 1)) {
    if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_035b37d0;
    FUN_0359c1e8(*(long *)(unaff_x19 + 0x2d8),0);
  }
  if (*(int *)(unaff_x19 + 0xcdc) == 1) {
    if (*(char *)(unaff_x19 + 0x358) == '\0') {
      FUN_035b583c();
    }
  }
  else if ((*(int *)(unaff_x19 + 0xcdc) == 0) && (*(char *)(unaff_x19 + 0x358) == '\0')) {
    FUN_035b506c();
  }
  if (((*(char *)(unaff_x19 + 0xf22) == '\0') || (*(int *)(unaff_x19 + 0xccc) != 1)) ||
     (*piVar12 != 1)) goto LAB_035b37a8;
  if (*(long *)(unaff_x19 + 0x2c0) == 0) goto LAB_035b37d0;
  uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x2c0) + 0x30);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = FUN_07a0d2c4(uVar10,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x2c0) == 0) ||
     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2c0) + 0x30), lVar9 == 0)) goto LAB_035b37d0;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x9b0);
  if (DAT_086ef2c0 == (code *)0x0) {
    DAT_086ef2c0 = (code *)FUN_033d1b68("UnityEngine.GameObject::CompareTag(System.String)");
  }
  uVar8 = (*DAT_086ef2c0)(lVar9,uVar10);
  if ((uVar8 & 1) == 0) {
    return;
  }
  fVar14 = *(float *)(unaff_x19 + 0x204);
  if (DAT_086ef698 == (code *)0x0) {
    DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
  }
  fVar13 = (float)(*DAT_086ef698)();
  fVar14 = fVar14 + fVar13;
  *(float *)(unaff_x19 + 0x204) = fVar14;
  if (fVar14 < 2.5) {
    return;
  }
  if (((*(long *)(unaff_x19 + 0x2c0) == 0) ||
      (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x2c0) + 0x30), lVar9 == 0)) ||
     ((lVar9 = FUN_03fa1bc8(lVar9,DAT_0840cb48), lVar9 == 0 || (*(long *)(unaff_x19 + 0xe58) == 0)))
     ) goto LAB_035b37d0;
  uVar6 = *(undefined4 *)(lVar9 + 0x598);
  uVar8 = FUN_04a02c14(*(long *)(unaff_x19 + 0xe58),uVar6,DAT_083f1fc0);
  if ((uVar8 & 1) == 0) {
LAB_035b3790:
    lVar9 = *(long *)(unaff_x19 + 0x2c0);
    if (lVar9 == 0) {
LAB_035b37d0:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    *(undefined1 *)(lVar9 + 0x21) = 1;
  }
  else {
    lVar9 = *(long *)(unaff_x19 + 0xe58);
    if (lVar9 == 0) goto LAB_035b37d0;
    lVar11 = *(long *)(unaff_x19 + 0x5a0);
    uVar6 = FUN_0383fdc0(*(undefined8 *)(lVar9 + 0x10),uVar6,0,*(undefined4 *)(lVar9 + 0x18),
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083f1fd8 + 0x20) + 0xc0) + 0x150));
    if (lVar11 == 0) goto LAB_035b37d0;
    iVar7 = FUN_04a02654(lVar11,uVar6,DAT_083f2020);
    if (iVar7 != 0) goto LAB_035b3790;
    lVar9 = *(long *)(unaff_x19 + 0x2c0);
    if (lVar9 == 0) goto LAB_035b37d0;
  }
  FUN_035c7828(lVar9,0);
LAB_035b37a8:
  *(undefined4 *)(unaff_x19 + 0x204) = 0;
  return;
}


