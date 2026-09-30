/*
FUNCTION_NAME: System.Array$$Resize<OVRPlugin.Quatf>
ENTRY_POINT: 019b779c
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Resize<OVRPlugin_Quatf>
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,float param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  
  if ((unaff_x19 == 0) || (plVar6 = *(long **)(unaff_x19 + 0x48), plVar6 == (long *)0x0))
  goto LAB_019b7b74;
  lVar11 = *plVar6;
  if (lVar11 == *(long *)PTR_DAT_037f2c60) {
    lVar11 = FUN_033e98f0(plVar6,0);
  }
  else {
    bVar2 = *(byte *)(*(long *)PTR_DAT_037f8108 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_037f8108)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    lVar11 = FUN_033e6c1c(plVar6,0);
  }
  if (*(int *)(unaff_x19 + 0x144) == 1) {
    if (lVar11 == 0) goto LAB_019b7b74;
    uVar7 = FUN_033f2cf8(lVar11,0);
    *(undefined8 *)(unaff_x19 + 0x188) = uVar7;
    thunk_FUN_0188fd20(unaff_x19 + 0x188);
  }
  lVar10 = *(long *)(unaff_x19 + 0x130);
  if (lVar10 == 0) goto LAB_019b7b74;
  if (*(char *)(lVar10 + 0x3c) != '\0') goto LAB_019b7b48;
  lVar10 = *(long *)(unaff_x19 + 0x1b0);
  if (lVar10 == 0) goto LAB_019b7b74;
  uVar7 = (**(code **)(lVar10 + 0x18))
                    (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
  lVar10 = *(long *)(unaff_x19 + 0x130);
  memcpy(&stack0x00000000,(void *)(unaff_x19 + 0x140),0x70);
  if (lVar10 == 0) goto LAB_019b7b74;
  memcpy((void *)(lVar10 + 0x58),&stack0x00000000,0x70);
  thunk_FUN_0188fd20(lVar10 + 0x78,0);
  plVar6 = (long *)(lVar10 + 0x18);
  if ((*plVar6 == 0) || (plVar8 = *(long **)(lVar10 + 0xd8), plVar8 == (long *)0x0))
  goto LAB_019b7b74;
  uVar18 = *(ulong *)(*plVar6 + 0x18);
  iVar5 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
  iVar17 = (int)uVar18;
  if (iVar5 < iVar17) {
    lVar12 = *plVar6;
    if (lVar12 == 0) goto LAB_019b7b74;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_019b7b78;
    uVar24 = *(undefined4 *)(lVar12 + 0x20);
    uVar20 = *(undefined4 *)(lVar12 + 0x24);
    uVar22 = *(undefined4 *)(lVar12 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_037f7590 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar19 = uVar7;
    uVar9 = FUN_019cb3dc(uVar24,uVar20,uVar22,uVar7,param_2,param_3,0);
    param_4 = (float)uVar19;
    if ((uVar9 & 1) == 0) goto LAB_019b7928;
    uVar16 = 0;
  }
  else {
LAB_019b7928:
    uVar16 = 1;
  }
  if (*(char *)(unaff_x19 + 0x150) == '\0') {
LAB_019b7a08:
    bVar4 = false;
    uVar3 = uVar16;
  }
  else {
    lVar12 = *plVar6;
    if (lVar12 == 0) goto LAB_019b7b74;
    if (*(uint *)(lVar12 + 0x18) <= iVar17 - 1U) goto LAB_019b7b78;
    lVar14 = lVar12 + (long)(int)(iVar17 - 1U) * 0xc;
    fVar21 = *(float *)(lVar14 + 0x20);
    fVar23 = *(float *)(lVar14 + 0x24);
    fVar25 = *(float *)(lVar14 + 0x28);
    if (*(int *)(lVar10 + 0x20) == 2) {
      if (iVar17 < 3) {
        if (*(int *)(*(long *)PTR_DAT_037f2d40 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        FUN_033bd548(*(undefined8 *)PTR_DAT_037f8110,0);
      }
      else {
        if (*(uint *)(lVar12 + 0x18) <= (uint)((long)iVar17 + -3)) goto LAB_019b7b78;
        lVar12 = lVar12 + ((long)iVar17 + -3) * 0xc;
        fVar21 = *(float *)(lVar12 + 0x20);
        fVar23 = *(float *)(lVar12 + 0x24);
        fVar25 = *(float *)(lVar12 + 0x28);
      }
    }
    fVar21 = fVar21 - (float)uVar7;
    fVar23 = fVar23 - (float)param_2;
    fVar25 = fVar25 - (float)param_3;
    param_4 = DAT_009a6238;
    if (fVar25 * fVar25 + fVar21 * fVar21 + fVar23 * fVar23 < DAT_009a6238) goto LAB_019b7a08;
    bVar4 = true;
    uVar3 = uVar16 + 1;
  }
  lVar12 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5108,uVar3 + iVar17);
  if (uVar16 != 0) {
    if (lVar12 == 0) goto LAB_019b7b74;
    if (*(int *)(lVar12 + 0x18) == 0) goto LAB_019b7b78;
    *(float *)(lVar12 + 0x20) = (float)uVar7;
    *(float *)(lVar12 + 0x24) = (float)param_2;
    *(float *)(lVar12 + 0x28) = (float)param_3;
  }
  if (0 < iVar17) {
    uVar9 = 0;
    lVar14 = 0x20;
    do {
      lVar15 = *plVar6;
      if (lVar15 == 0) goto LAB_019b7b74;
      if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_019b7b78;
      if (lVar12 == 0) goto LAB_019b7b74;
      if ((ulong)*(uint *)(lVar12 + 0x18) <= uVar16 + uVar9) goto LAB_019b7b78;
      puVar13 = (undefined8 *)(lVar15 + lVar14);
      uVar20 = *(undefined4 *)(puVar13 + 1);
      uVar9 = uVar9 + 1;
      puVar1 = (undefined8 *)(lVar12 + (ulong)uVar16 * 0xc + lVar14);
      lVar14 = lVar14 + 0xc;
      *puVar1 = *puVar13;
      *(undefined4 *)(puVar1 + 1) = uVar20;
    } while ((uVar18 & 0xffffffff) != uVar9);
  }
  if (bVar4) {
    if (lVar12 == 0) goto LAB_019b7b74;
    iVar5 = (int)*(undefined8 *)(lVar12 + 0x18);
    if (iVar5 == 0) {
LAB_019b7b78:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar20 = *(undefined4 *)(lVar12 + 0x28);
    puVar13 = (undefined8 *)(lVar12 + 0x20 + (long)(iVar5 + -1) * 0xc);
    *puVar13 = *(undefined8 *)(lVar12 + 0x20);
    *(undefined4 *)(puVar13 + 1) = uVar20;
  }
  *(long *)(lVar10 + 0x18) = lVar12;
  thunk_FUN_0188fd20(plVar6);
  *(char *)(lVar10 + 0x54) = (char)uVar16;
  *(bool *)(lVar10 + 0x55) = bVar4;
  FUN_019b7ba0(uVar7,lVar10,*(undefined1 *)(unaff_x19 + 0x150),*(undefined4 *)(unaff_x19 + 0x148));
  uVar22 = (undefined4)param_3;
  uVar20 = (undefined4)param_2;
  if (lVar11 != 0) {
    uVar24 = FUN_033f174c(lVar11,0);
    *(undefined4 *)(unaff_x19 + 0x194) = uVar24;
    *(undefined4 *)(unaff_x19 + 0x198) = uVar20;
    *(undefined4 *)(unaff_x19 + 0x19c) = uVar22;
    *(float *)(unaff_x19 + 0x1a0) = param_4;
    FUN_033f2fc0(lVar11,0);
    lVar10 = *(long *)(unaff_x19 + 0x130);
    *(undefined4 *)(unaff_x19 + 0x1a4) = uVar22;
LAB_019b7b48:
    *(long *)(unaff_x19 + 0x138) = lVar10;
    thunk_FUN_0188fd20(unaff_x19 + 0x138);
    return;
  }
LAB_019b7b74:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


