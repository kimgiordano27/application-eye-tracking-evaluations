/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner$$TrySpawnObject
ENTRY_POINT: 06766534
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__TrySpawnObject(void)

{
  undefined8 uVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 in_w8;
  undefined8 uVar12;
  long *in_x9;
  long lVar13;
  long in_x10;
  long unaff_x20;
  byte unaff_w23;
  ulong uVar14;
  long lVar15;
  long lVar16;
  short sVar17;
  long unaff_x29;
  float fVar18;
  undefined4 extraout_s0;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
                    /* catch() { ... } // from try @ 06765884 with catch @ 06766534 */
  lVar9 = *in_x9;
                    /* catch() { ... } // from try @ 067664c0 with catch @ 06766538 */
  uVar19 = *(undefined4 *)(in_x10 + 0xd0);
  uVar20 = *(undefined4 *)(in_x10 + 0xd4);
                    /* catch() { ... } // from try @ 067664bc with catch @ 0676653c */
  *(undefined1 *)(in_x10 + 200) = in_w8;
                    /* catch() { ... } // from try @ 06765868 with catch @ 06766540 */
                    /* catch() { ... } // from try @ 0676600c with catch @ 06766544 */
  iVar8 = *(int *)(lVar9 + 0xe4);
                    /* catch() { ... } // from try @ 067664b8 with catch @ 06766548 */
  *(undefined1 *)(in_x10 + 0x52) = 0;
                    /* catch() { ... } // from try @ 067664b4 with catch @ 0676654c */
  *(byte *)(in_x10 + 0xc9) = unaff_w23 & 1;
                    /* catch() { ... } // from try @ 067664b0 with catch @ 06766550 */
  if (iVar8 == 0) {
                    /* catch() { ... } // from try @ 06765e7c with catch @ 06766554 */
    thunk_FUN_031e5338();
  }
                    /* catch() { ... } // from try @ 067664ac with catch @ 06766558 */
                    /* catch() { ... } // from try @ 06765b9c with catch @ 0676655c */
                    /* catch() { ... } // from try @ 067664a8 with catch @ 06766560 */
                    /* catch() { ... } // from try @ 067664a4 with catch @ 06766564 */
                    /* catch() { ... } // from try @ 06765f40 with catch @ 06766568 */
                    /* catch() { ... } // from try @ 06765d40 with catch @ 0676656c */
  FUN_0673090c(uVar19,uVar20,(long)&stack0x00000028 + 4,&stack0x00000028,0);
  uVar19 = uStack0000000000000028;
  puVar4 = Fusion_Photon_Realtime_Player_TypeInfo;
                    /* catch() { ... } // from try @ 06765a9c with catch @ 06766570 */
                    /* catch() { ... } // from try @ 06765ff4 with catch @ 06766574 */
                    /* catch() { ... } // from try @ 067664a0 with catch @ 06766578 */
                    /* catch() { ... } // from try @ 0676649c with catch @ 0676657c */
  lVar9 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
                    /* catch() { ... } // from try @ 06766498 with catch @ 06766580 */
                    /* catch() { ... } // from try @ 06765e44 with catch @ 06766584 */
  if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 06766494 with catch @ 06766588 */
                    /* catch() { ... } // from try @ 06765b64 with catch @ 0676658c */
    thunk_FUN_031e5338(lVar9);
                    /* catch() { ... } // from try @ 06766490 with catch @ 06766590 */
    lVar9 = *(long *)puVar4;
  }
                    /* catch() { ... } // from try @ 0676648c with catch @ 06766594 */
  lVar13 = *(long *)(lVar9 + 0xb8);
                    /* catch() { ... } // from try @ 06765f50 with catch @ 06766598 */
  *(undefined4 *)(lVar13 + 0x1c) = uStack000000000000002c;
  *(undefined4 *)(lVar13 + 0x20) = uVar19;
                    /* catch() { ... } // from try @ 06765aac with catch @ 0676659c */
  *(undefined4 *)(lVar13 + 0x24) = 0;
  *(undefined4 *)(lVar13 + 0x28) = 0;
                    /* catch() { ... } // from try @ 06765f08 with catch @ 067665a0 */
                    /* catch() { ... } // from try @ 06766484 with catch @ 067665a4 */
                    /* catch() { ... } // from try @ 0676647c with catch @ 067665a8 */
                    /* catch() { ... } // from try @ 06766478 with catch @ 067665ac */
  if ((unaff_x20 != 0) && (lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30), lVar13 != 0)) {
                    /* catch() { ... } // from try @ 06766474 with catch @ 067665b0 */
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(ulong *)(unaff_x20 + 0x28);
                    /* catch() { ... } // from try @ 06766470 with catch @ 067665b4 */
                    /* catch() { ... } // from try @ 0676646c with catch @ 067665b8 */
    iVar8 = (int)uVar2;
                    /* catch() { ... } // from try @ 06765ee4 with catch @ 067665bc */
    if (*(int *)(lVar13 + 0x18) < iVar8) {
                    /* catch() { ... } // from try @ 06766468 with catch @ 067665c0 */
                    /* catch() { ... } // from try @ 06766464 with catch @ 067665c4 */
                    /* catch() { ... } // from try @ 06766460 with catch @ 067665c8 */
                    /* catch() { ... } // from try @ 0676645c with catch @ 067665cc */
                    /* catch() { ... } // from try @ 06765d50 with catch @ 067665d0 */
      uVar10 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c6140,uVar2 & 0xffffffff);
                    /* catch() { ... } // from try @ 06766480 with catch @ 067665d4
                       catch() { ... } // from try @ 06766488 with catch @ 067665d4 */
                    /* catch() { ... } // from try @ 06766458 with catch @ 067665d8 */
                    /* catch() { ... } // from try @ 06766454 with catch @ 067665dc */
                    /* catch() { ... } // from try @ 06766450 with catch @ 067665e0 */
                    /* catch() { ... } // from try @ 0676644c with catch @ 067665e4 */
      uVar12 = *(undefined8 *)PTR_DAT_070c4240;
                    /* catch() { ... } // from try @ 06766448 with catch @ 067665e8 */
      *(undefined8 *)(in_stack_00000010 + 0xf0) = uVar10;
                    /* catch() { ... } // from try @ 06766444 with catch @ 067665ec */
                    /* catch() { ... } // from try @ 06766440 with catch @ 067665f0 */
      uVar10 = FUN_03188b1c(uVar12,uVar2 & 0xffffffff);
      puVar5 = PTR_DAT_070f93a8;
                    /* catch() { ... } // from try @ 0676643c with catch @ 067665f4 */
                    /* catch() { ... } // from try @ 06766438 with catch @ 067665f8 */
                    /* catch() { ... } // from try @ 06766434 with catch @ 067665fc */
                    /* catch() { ... } // from try @ 06766128 with catch @ 06766600 */
      *(undefined8 *)(in_stack_00000010 + 0xe8) = uVar10;
                    /* catch() { ... } // from try @ 06766430 with catch @ 06766604 */
                    /* catch() { ... } // from try @ 0676642c with catch @ 06766608 */
                    /* catch() { ... } // from try @ 06766428 with catch @ 0676660c */
      uVar10 = FUN_03188b1c(*(undefined8 *)puVar5,uVar2 & 0xffffffff);
                    /* catch() { ... } // from try @ 067662f8 with catch @ 06766610 */
      lVar9 = *(long *)puVar4;
                    /* catch() { ... } // from try @ 067663a4 with catch @ 06766614 */
                    /* catch() { ... } // from try @ 067662cc with catch @ 06766618 */
                    /* catch() { ... } // from try @ 0676636c with catch @ 0676661c */
      if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 06766340 with catch @ 06766620 */
                    /* catch() { ... } // from try @ 06766314 with catch @ 06766624 */
        thunk_FUN_031e5338(lVar9);
                    /* catch() { ... } // from try @ 06766210 with catch @ 06766628 */
        lVar9 = *(long *)puVar4;
      }
                    /* catch() { ... } // from try @ 06766424 with catch @ 0676662c */
      lVar13 = *(long *)(lVar9 + 0xb8);
                    /* catch() { ... } // from try @ 06766230 with catch @ 06766630 */
                    /* catch() { ... } // from try @ 067661e4 with catch @ 06766634 */
      *(undefined8 *)(lVar13 + 0x30) = uVar10;
                    /* catch() { ... } // from try @ 06766260 with catch @ 06766638 */
      *(undefined1 *)(lVar13 + 0x38) = 1;
    }
                    /* catch() { ... } // from try @ 067660e4 with catch @ 0676663c */
                    /* catch() { ... } // from try @ 06766178 with catch @ 06766640 */
    if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 06766420 with catch @ 06766644 */
                    /* catch() { ... } // from try @ 067660cc with catch @ 06766648 */
      thunk_FUN_031e5338(lVar9);
                    /* catch() { ... } // from try @ 06766148 with catch @ 0676664c */
      lVar9 = *(long *)puVar4;
    }
    lVar13 = *(long *)(lVar9 + 0xb8);
    if (*(char *)(lVar13 + 0x38) != '\0') {
      if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* try { // try from 06766664 to 06866667 has its CatchHandler @ 06766688 */
                    /* try { // try from 06766668 to 0686668b has its CatchHandler @ 067656dc */
        thunk_FUN_031e5338(lVar9);
        lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      puVar4 = PTR_DAT_070c1958;
      *(undefined1 *)(lVar13 + 0x38) = 0;
                    /* catch() { ... } // from try @ 06766664 with catch @ 06766688 */
      iStack000000000000001c = iVar8;
                    /* try { // try from 0676668c to 06866697 has its CatchHandler @ 067666ac */
      uVar10 = thunk_FUN_031c39fc(*(undefined8 *)(puVar4 + 0x48),(long)&stack0x00000018 + 4);
                    /* try { // try from 06766698 to 068666a3 has its CatchHandler @ 067656dc */
                    /* try { // try from 067666a4 to 068666ab has its CatchHandler @ 067666ac */
      if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0676668c with catch @ 067666ac
                       catch() { ... } // from try @ 067666a4 with catch @ 067666ac */
        thunk_FUN_031e5338(*(long *)PTR_DAT_070f2ff8);
      }
                    /* try { // try from 067666b0 to 0686678f has its CatchHandler @ 067666b0
                       catch() { ... } // from try @ 067666b0 with catch @ 067666b0
                       catch() { ... } // from try @ 06766ad0 with catch @ 067666b0
                       catch() { ... } // from try @ 06766b20 with catch @ 067666b0
                       catch() { ... } // from try @ 06766b88 with catch @ 067666b0
                       catch() { ... } // from try @ 06766bac with catch @ 067666b0 */
      uStack0000000000000018 = FUN_0674c3f0(0);
      uVar12 = thunk_FUN_031c39fc(*(undefined8 *)(puVar4 + 0x48),&stack0x00000018);
      uVar10 = FUN_057c02e8(*(undefined8 *)Oculus_Platform_Models_SendInvitesResult_TypeInfo,uVar10,
                            uVar12,0);
      uVar10 = FUN_057b27f0(uVar10,*(undefined8 *)UnityEngine_SendMouseEvents_TypeInfo,0);
      if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070c2418);
      }
      FUN_0698c5bc(uVar10,0);
    }
    puVar5 = OVREyeGaze_TypeInfo;
    puVar4 = PTR_DAT_070c1b68;
    if (0 < iVar8) {
      uVar14 = 0;
      sVar17 = 0;
      do {
        if (uVar14 != *(uint *)(unaff_x20 + 0x10)) {
          uVar10 = FUN_03b26540(uVar1,uVar2,uVar14 & 0xffffffff,*(undefined8 *)puVar5);
          lVar9 = FUN_06a1536c(uVar10,0);
                    /* try { // try from 06766790 to 0686679f has its CatchHandler @ 06766b24 */
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)puVar4);
          }
          uVar11 = FUN_069d8404(lVar9,0,0);
          if ((uVar11 & 1) == 0) {
            if (lVar9 == 0) goto LAB_0676695c;
            iVar8 = FUN_069a86c4(lVar9,0);
            fVar18 = 1.0;
                    /* try { // try from 067667c8 to 068667cf has its CatchHandler @ 06766b48 */
            if (iVar8 != 2) {
              fVar18 = -1.0;
            }
            fVar21 = 0.0;
            if (iVar8 != 0) {
              fVar21 = fVar18;
            }
            if (0.0 <= fVar21) {
                    /* try { // try from 067667dc to 068667e3 has its CatchHandler @ 06766b4c */
              iVar8 = FUN_069a958c(lVar9,0);
              puVar6 = Fusion_Photon_Realtime_Player_TypeInfo;
              if (iVar8 == 0) {
                    /* try { // try from 06766888 to 0686688f has its CatchHandler @ 06766b2c */
                lVar13 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                  lVar13 = *(long *)puVar6;
                }
                lVar16 = *(long *)(lVar13 + 0xb8);
                    /* try { // try from 067668a0 to 068668a7 has its CatchHandler @ 06766b28 */
                lVar15 = *(long *)(lVar16 + 0x30);
                if (lVar15 == 0) goto LAB_0676695c;
                if (*(uint *)(lVar15 + 0x18) <= (uint)(int)sVar17) goto LAB_06766960;
                uVar19 = *(undefined4 *)(lVar16 + 0xc);
                uVar20 = *(undefined4 *)(lVar16 + 0x10);
                lVar15 = lVar15 + (long)sVar17 * 0x10;
                fVar21 = *(float *)(lVar16 + 0x14);
                fVar18 = *(float *)(lVar16 + 0x18);
              }
              else {
                    /* try { // try from 067667fc to 06866843 has its CatchHandler @ 06766b28 */
                cVar3 = *(char *)(unaff_x29 + 0x3c);
                if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                uVar20 = FUN_06731528(lVar9,iVar8 != 2 && cVar3 != '\0',0);
                puVar6 = Fusion_Photon_Realtime_Player_TypeInfo;
                lVar13 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
                if (*(int *)(lVar13 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                  lVar13 = *(long *)puVar6;
                }
                lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
                lVar13 = FUN_069a9640(lVar9,0);
                if (lVar15 == 0) goto LAB_0676695c;
                    /* try { // try from 0676686c to 06866877 has its CatchHandler @ 06766b30 */
                if (*(uint *)(lVar15 + 0x18) <= (uint)(int)sVar17) goto LAB_06766960;
                fVar18 = (float)(int)sVar17;
                lVar15 = lVar15 + (long)sVar17 * 0x10;
                uVar19 = extraout_s0;
              }
              *(undefined4 *)(lVar15 + 0x20) = uVar19;
              *(undefined4 *)(lVar15 + 0x24) = uVar20;
              *(float *)(lVar15 + 0x28) = fVar21;
              *(float *)(lVar15 + 0x2c) = fVar18;
              lVar15 = *(long *)(in_stack_00000010 + 0xf0);
                    /* try { // try from 067668d0 to 068668d3 has its CatchHandler @ 06766b20 */
              if (lVar15 == 0) goto LAB_0676695c;
              if (*(uint *)(lVar15 + 0x18) <= uVar14) {
LAB_06766960:
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              lVar16 = *(long *)(in_stack_00000010 + 0xe8);
              *(short *)(lVar15 + uVar14 * 2 + 0x20) = sVar17;
              bVar7 = FUN_067649f4(lVar13,lVar9);
              if (lVar16 == 0) goto LAB_0676695c;
              if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_06766960;
              sVar17 = sVar17 + 1;
              *(byte *)(lVar16 + uVar14 + 0x20) = bVar7 & 1;
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while ((uVar2 & 0xffffffff) != uVar14);
    }
    return in_stack_00000008._4_4_ & 1;
  }
LAB_0676695c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


