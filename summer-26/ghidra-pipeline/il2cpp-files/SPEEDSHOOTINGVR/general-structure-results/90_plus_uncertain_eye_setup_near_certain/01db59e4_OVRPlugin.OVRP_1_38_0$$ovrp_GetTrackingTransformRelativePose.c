/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 01db59e4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 in_stack_00000008;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_0235a5c8);
  FUN_00fdc2e4(PTR_DAT_0235a5d0);
  FUN_00fdc2e4(PTR_DAT_0235a5d8);
  FUN_00fdc2e4(PTR_DAT_0235a5e0);
  FUN_00fdc2e4(PTR_DAT_0235a5e8);
  FUN_00fdc2e4(PTR_DAT_0234be70);
  FUN_00fdc2e4(PTR_DAT_0235a5f0);
  *(undefined1 *)(unaff_x20 + 0xa16) = 1;
  puVar5 = PTR_DAT_0235a5f0;
  puVar4 = PTR_DAT_0235a5d0;
  puVar3 = PTR_DAT_0235a5c0;
  lVar8 = thunk_FUN_01027094();
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  if (cVar1 != '\0') {
    lVar11 = *(long *)(unaff_x19 + 0x18);
    in_stack_00000008 = 0;
    plVar9 = (long *)thunk_FUN_0103fd0c(*(undefined8 *)puVar5,&stack0x00000008);
    uVar10 = thunk_FUN_010400dc(*(undefined8 *)puVar3);
    if ((plVar9 == (long *)0x0) ||
       (FUN_01359ba8(uVar10,plVar9,*(undefined8 *)(*plVar9 + 400),0), lVar11 == 0))
    goto LAB_01db5d34;
    FUN_017d4928(lVar11,uVar10,*(undefined8 *)puVar4);
    thunk_FUN_00ffe618();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  puVar6 = PTR_DAT_0235a5e8;
  puVar5 = PTR_DAT_0235a5e0;
  puVar4 = PTR_DAT_0235a5c8;
  puVar3 = PTR_DAT_0234be70;
  lVar11 = *(long *)(unaff_x19 + 0x18);
  if (lVar11 != 0) {
    iVar13 = 0;
    lVar12 = 0x7fffffffffffffff;
    do {
      if (*(int *)(lVar11 + 0x18) <= iVar13) {
        if (*(int *)(lVar11 + 0x18) < 1) goto LAB_01db5c38;
        iVar13 = 0;
        goto LAB_01db5b9c;
      }
      lVar11 = FUN_017d2d60(lVar11,iVar13,*(undefined8 *)puVar5);
      if (lVar11 == 0) break;
      if (*(char *)(lVar11 + 0x41) == '\0') {
        lVar14 = *(long *)(lVar11 + 0x38);
        if (lVar14 <= lVar8) {
          FUN_01db5fd4(lVar11,lVar11);
          lVar14 = *(long *)(lVar11 + 0x38);
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar12 = FUN_01d4b068(lVar12,lVar14,0);
        if ((lVar8 < *(long *)(lVar11 + 0x38)) && (*(long *)(lVar11 + 0x38) != 0x7fffffffffffffff))
        {
          *(undefined1 *)(lVar11 + 0x41) = 0;
        }
      }
      lVar11 = *(long *)(unaff_x19 + 0x18);
      iVar13 = iVar13 + 1;
    } while (lVar11 != 0);
  }
LAB_01db5d34:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
  while (iVar13 = iVar13 + 1, iVar13 < *(int *)(lVar11 + 0x18)) {
LAB_01db5b9c:
    lVar8 = FUN_017d2d60(lVar11,iVar13,*(undefined8 *)puVar5);
    if (lVar8 == 0) goto LAB_01db5d34;
    if (*(char *)(lVar8 + 0x41) == '\0') {
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) goto LAB_01db5d34;
    }
    else {
      *(undefined1 *)(lVar8 + 0x42) = 0;
      thunk_FUN_00ffe618();
      lVar8 = *(long *)(unaff_x19 + 0x18);
      *(undefined1 *)(unaff_x19 + 0x10) = 1;
      if (lVar8 == 0) goto LAB_01db5d34;
      uVar10 = FUN_017d2d60(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)puVar5);
      FUN_017d2db4(lVar8,iVar13,uVar10,*(undefined8 *)puVar6);
      lVar8 = *(long *)(unaff_x19 + 0x18);
      if (lVar8 == 0) goto LAB_01db5d34;
      FUN_017d4638(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar11 = *(long *)(unaff_x19 + 0x18);
      if (lVar11 == 0) goto LAB_01db5d34;
      if (*(int *)(lVar11 + 0x18) == 0) break;
      iVar13 = iVar13 + -1;
    }
  }
LAB_01db5c38:
  cVar1 = *(char *)(unaff_x19 + 0x10);
  thunk_FUN_00ffe618();
  if (cVar1 != '\0') {
    lVar8 = *(long *)(unaff_x19 + 0x18);
    plVar9 = (long *)thunk_FUN_0103fd0c(*(undefined8 *)PTR_DAT_0235a5f0);
    uVar10 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a5c0);
    if ((plVar9 == (long *)0x0) ||
       (FUN_01359ba8(uVar10,plVar9,*(undefined8 *)(*plVar9 + 400),0), lVar8 == 0))
    goto LAB_01db5d34;
    FUN_017d4928(lVar8,uVar10,*(undefined8 *)PTR_DAT_0235a5d0);
    thunk_FUN_00ffe618();
    *(undefined1 *)(unaff_x19 + 0x10) = 0;
  }
  *(long *)(unaff_x19 + 0x20) = lVar12;
  if (lVar12 == 0x7fffffffffffffff) {
    uVar7 = 0xffffffff;
  }
  else {
    lVar8 = thunk_FUN_01027094();
    if (lVar12 - lVar8 < 0x138800000000) {
      auVar2 = SEXT816(lVar12 - lVar8) * SEXT816(0x346dc5d63886594b);
      uVar7 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar7 = 0x7ffffffe;
    }
  }
  return uVar7;
}


