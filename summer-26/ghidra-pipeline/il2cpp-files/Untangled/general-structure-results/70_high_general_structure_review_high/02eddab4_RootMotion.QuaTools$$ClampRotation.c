/*
FUNCTION_NAME: RootMotion.QuaTools$$ClampRotation
ENTRY_POINT: 02eddab4
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


long * RootMotion_QuaTools__ClampRotation(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  byte bVar12;
  long *unaff_x19;
  long lVar13;
  long unaff_x21;
  long lVar14;
  undefined8 in_stack_00000000;
  char in_stack_00000010;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  char in_stack_00000038;
  
  lVar13 = *(long *)(unaff_x21 + 0x20);
  if (param_2 != 0) {
    uVar7 = FUN_02ec88b8(lVar13);
    lVar13 = FUN_02ebc87c(uVar7,1);
    if (lVar13 == 0) {
      plVar11 = (long *)0x0;
      goto LAB_02eddddc;
    }
  }
  plVar1 = unaff_x19 + 1;
  lVar8 = FUN_02ec8530(*(undefined8 *)(unaff_x21 + 0x30),*(undefined1 *)(unaff_x21 + 0x52),plVar1,1)
  ;
  FUN_02f22f9c(&stack0x00000020);
  if (in_stack_00000038 == '\0') {
LAB_02eddb5c:
    bVar12 = 0;
    uVar7 = 0x58;
  }
  else {
    lVar14 = *unaff_x19;
    uVar9 = FUN_02ec093c(*(undefined8 *)(lVar14 + 0x28));
    if ((uVar9 & 1) == 0) {
      bVar12 = *(byte *)(lVar14 + 0x52);
      if (bVar12 != 0) {
        uVar9 = 0;
        do {
          if (*(int *)(*(long *)(lVar8 + uVar9 * 8) + 8) < 0) {
            uVar10 = FUN_02ec093c(*(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar9 * 8));
            if ((uVar10 & 1) != 0) goto LAB_02eddb18;
            bVar12 = *(byte *)(lVar14 + 0x52);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < bVar12);
      }
      goto LAB_02eddb5c;
    }
LAB_02eddb18:
    bVar12 = 8;
    uVar7 = 0x70;
  }
  plVar11 = (long *)FUN_02ea7c94(1,uVar7);
  FUN_02edde48(&DAT_071d8460);
  plVar11[4] = lVar13;
  *(undefined2 *)((long)plVar11 + 0x4c) = *(undefined2 *)(unaff_x21 + 0x4c);
  *(undefined2 *)((long)plVar11 + 0x4e) = *(undefined2 *)(unaff_x21 + 0x4e);
  *(undefined2 *)(plVar11 + 10) = *(undefined2 *)(unaff_x21 + 0x50);
  plVar11[3] = *(long *)(unaff_x21 + 0x18);
  *(byte *)((long)plVar11 + 0x53) = *(byte *)((long)plVar11 + 0x53) & 0xfc | 2;
  *(undefined4 *)(plVar11 + 9) = *(undefined4 *)(unaff_x21 + 0x48);
  lVar14 = FUN_02ec85a4(*(undefined8 *)(unaff_x21 + 0x28),plVar1,1);
  plVar11[5] = lVar14;
  uVar3 = *(undefined1 *)(unaff_x21 + 0x52);
  plVar11[6] = lVar8;
  plVar11[8] = (long)unaff_x19;
  *(undefined1 *)((long)plVar11 + 0x52) = uVar3;
  if (unaff_x19[2] == 0) {
    if ((*(byte *)(unaff_x21 + 0x53) & 1) != 0) {
      *(byte *)((long)plVar11 + 0x53) = *(byte *)((long)plVar11 + 0x53) | 1;
    }
    if (*(long *)(lVar13 + 0x60) == 0) {
      plVar11[8] = *(long *)(unaff_x21 + 0x40);
    }
    lVar8 = *(long *)(unaff_x21 + 0x38);
LAB_02eddc78:
    plVar11[7] = lVar8;
  }
  else if ((*(long *)(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__ +
                     0x2f0) == 0) && (uVar9 = FUN_02ec8f20(), (uVar9 & 1) == 0)) {
    lVar8 = FUN_02ec8cc4(**(undefined8 **)(*unaff_x19 + 0x20),*(undefined4 *)(*unaff_x19 + 0x48),
                         plVar1,&stack0x00000048);
    goto LAB_02eddc78;
  }
  plVar11[1] = in_stack_00000028;
  *plVar11 = in_stack_00000020;
  if (in_stack_00000020 == 0) {
    lVar8 = FUN_02f15108();
    plVar11[2] = lVar8;
    FUN_02f207b4(plVar11);
    *plVar11 = (ulong)in_stack_00000000._4_4_ << 0x20;
    plVar11[1] = (long)unaff_x19;
  }
  else {
    plVar11[2] = in_stack_00000030;
  }
  puVar6 = Method_OVRTask_Awaiter<OVRResult<Guid,_OVRColocationSession_Result>>_GetResult__;
  *(byte *)((long)plVar11 + 0x53) = *(byte *)((long)plVar11 + 0x53) & 0xf7 | bVar12;
  plVar1 = (long *)(puVar6 + 0x30);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar9 = FUN_02eb37c0(plVar11);
  if ((uVar9 & 1) != 0) {
    lVar8 = *plVar11;
    lVar14 = plVar11[1];
    pcVar2 = FUN_02eddef8;
    if (lVar8 != lVar14) {
      pcVar2 = FUN_02edded8;
    }
    plVar11[0xb] = lVar14;
    plVar11[0xc] = lVar8;
    plVar11[0xd] = plVar11[2];
    plVar11[2] = (long)pcVar2;
    FUN_02f207b4();
    if (in_stack_00000010 == '\0') {
      *plVar11 = (long)FUN_02eddf00;
      plVar11[1] = (long)FUN_02eddf00;
      if (lVar8 != lVar14) {
        *plVar11 = (long)FUN_02eddf18;
      }
    }
    else {
      *plVar11 = (ulong)in_stack_00000000._4_4_ << 0x20;
      plVar11[1] = (long)unaff_x19;
    }
  }
  uVar9 = FUN_02eb33f4(plVar11);
  if ((uVar9 & 1) != 0) {
    FUN_02f20018(lVar13,&stack0x00000048);
  }
  FUN_02edde48(&DAT_071d83f0);
  FUN_02eddf30(&DAT_071d8460);
LAB_02eddddc:
  FUN_02ea552c(&stack0x00000048);
  return plVar11;
}


