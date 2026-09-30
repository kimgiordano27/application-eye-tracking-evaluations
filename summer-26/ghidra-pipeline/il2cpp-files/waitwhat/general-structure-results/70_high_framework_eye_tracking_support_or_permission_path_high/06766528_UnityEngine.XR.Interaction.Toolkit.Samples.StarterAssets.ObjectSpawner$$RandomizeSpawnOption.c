/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner$$RandomizeSpawnOption
ENTRY_POINT: 06766528
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


uint UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__RandomizeSpawnOption
               (void)

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
  long in_x9;
  long *plVar13;
  long lVar14;
  long unaff_x20;
  byte unaff_w23;
  ulong uVar15;
  long lVar16;
  long lVar17;
  short sVar18;
  long unaff_x29;
  float fVar19;
  undefined4 extraout_s0;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  int iStack000000000000001c;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
                    /* catch() { ... } // from try @ 067658dc with catch @ 06766528 */
  plVar13 = *(long **)(in_x9 + 0xcb0);
                    /* catch() { ... } // from try @ 067658b8 with catch @ 0676652c */
                    /* catch() { ... } // from try @ 06765890 with catch @ 06766530 */
  *(undefined1 *)(unaff_x29 + 0x58) = in_w8;
  lVar9 = *plVar13;
  uVar20 = *(undefined4 *)(in_stack_00000010 + 0xd0);
  uVar21 = *(undefined4 *)(in_stack_00000010 + 0xd4);
  *(undefined1 *)(in_stack_00000010 + 200) = in_w8;
  iVar8 = *(int *)(lVar9 + 0xe4);
  *(undefined1 *)(in_stack_00000010 + 0x52) = 0;
  *(byte *)(in_stack_00000010 + 0xc9) = unaff_w23 & 1;
  if (iVar8 == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0673090c(uVar20,uVar21,(long)&stack0x00000028 + 4,&stack0x00000028,0);
  uVar20 = uStack0000000000000028;
  puVar4 = Fusion_Photon_Realtime_Player_TypeInfo;
  lVar9 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar9);
    lVar9 = *(long *)puVar4;
  }
  lVar14 = *(long *)(lVar9 + 0xb8);
  *(undefined4 *)(lVar14 + 0x1c) = uStack000000000000002c;
  *(undefined4 *)(lVar14 + 0x20) = uVar20;
  *(undefined4 *)(lVar14 + 0x24) = 0;
  *(undefined4 *)(lVar14 + 0x28) = 0;
  if ((unaff_x20 != 0) && (lVar14 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30), lVar14 != 0)) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(ulong *)(unaff_x20 + 0x28);
    iVar8 = (int)uVar2;
    if (*(int *)(lVar14 + 0x18) < iVar8) {
      uVar10 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c6140,uVar2 & 0xffffffff);
      uVar12 = *(undefined8 *)PTR_DAT_070c4240;
      *(undefined8 *)(in_stack_00000010 + 0xf0) = uVar10;
      uVar10 = FUN_03188b1c(uVar12,uVar2 & 0xffffffff);
      puVar5 = PTR_DAT_070f93a8;
      *(undefined8 *)(in_stack_00000010 + 0xe8) = uVar10;
      uVar10 = FUN_03188b1c(*(undefined8 *)puVar5,uVar2 & 0xffffffff);
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar9);
        lVar9 = *(long *)puVar4;
      }
      lVar14 = *(long *)(lVar9 + 0xb8);
      *(undefined8 *)(lVar14 + 0x30) = uVar10;
      *(undefined1 *)(lVar14 + 0x38) = 1;
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar9);
      lVar9 = *(long *)puVar4;
    }
    lVar14 = *(long *)(lVar9 + 0xb8);
    if (*(char *)(lVar14 + 0x38) != '\0') {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar9);
        lVar14 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      puVar4 = PTR_DAT_070c1958;
      *(undefined1 *)(lVar14 + 0x38) = 0;
      iStack000000000000001c = iVar8;
      uVar10 = thunk_FUN_031c39fc(*(undefined8 *)(puVar4 + 0x48),(long)&stack0x00000018 + 4);
      if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)PTR_DAT_070f2ff8);
      }
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
      uVar15 = 0;
      sVar18 = 0;
      do {
        if (uVar15 != *(uint *)(unaff_x20 + 0x10)) {
          uVar10 = FUN_03b26540(uVar1,uVar2,uVar15 & 0xffffffff,*(undefined8 *)puVar5);
          lVar9 = FUN_06a1536c(uVar10,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)puVar4);
          }
          uVar11 = FUN_069d8404(lVar9,0,0);
          if ((uVar11 & 1) == 0) {
            if (lVar9 == 0) goto LAB_0676695c;
            iVar8 = FUN_069a86c4(lVar9,0);
            fVar19 = 1.0;
            if (iVar8 != 2) {
              fVar19 = -1.0;
            }
            fVar22 = 0.0;
            if (iVar8 != 0) {
              fVar22 = fVar19;
            }
            if (0.0 <= fVar22) {
              iVar8 = FUN_069a958c(lVar9,0);
              puVar6 = Fusion_Photon_Realtime_Player_TypeInfo;
              if (iVar8 == 0) {
                lVar14 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                  lVar14 = *(long *)puVar6;
                }
                lVar17 = *(long *)(lVar14 + 0xb8);
                lVar16 = *(long *)(lVar17 + 0x30);
                if (lVar16 == 0) goto LAB_0676695c;
                if (*(uint *)(lVar16 + 0x18) <= (uint)(int)sVar18) goto LAB_06766960;
                uVar20 = *(undefined4 *)(lVar17 + 0xc);
                uVar21 = *(undefined4 *)(lVar17 + 0x10);
                lVar16 = lVar16 + (long)sVar18 * 0x10;
                fVar22 = *(float *)(lVar17 + 0x14);
                fVar19 = *(float *)(lVar17 + 0x18);
              }
              else {
                cVar3 = *(char *)(unaff_x29 + 0x3c);
                if (*(int *)(*(long *)OVRGLTFAnimatinonNode_TypeInfo + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                }
                uVar21 = FUN_06731528(lVar9,iVar8 != 2 && cVar3 != '\0',0);
                puVar6 = Fusion_Photon_Realtime_Player_TypeInfo;
                lVar14 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_031e5338();
                  lVar14 = *(long *)puVar6;
                }
                lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x30);
                lVar14 = FUN_069a9640(lVar9,0);
                if (lVar16 == 0) goto LAB_0676695c;
                if (*(uint *)(lVar16 + 0x18) <= (uint)(int)sVar18) goto LAB_06766960;
                fVar19 = (float)(int)sVar18;
                lVar16 = lVar16 + (long)sVar18 * 0x10;
                uVar20 = extraout_s0;
              }
              *(undefined4 *)(lVar16 + 0x20) = uVar20;
              *(undefined4 *)(lVar16 + 0x24) = uVar21;
              *(float *)(lVar16 + 0x28) = fVar22;
              *(float *)(lVar16 + 0x2c) = fVar19;
              lVar16 = *(long *)(in_stack_00000010 + 0xf0);
              if (lVar16 == 0) goto LAB_0676695c;
              if (*(uint *)(lVar16 + 0x18) <= uVar15) {
LAB_06766960:
                    /* WARNING: Subroutine does not return */
                FUN_03188ce0();
              }
              lVar17 = *(long *)(in_stack_00000010 + 0xe8);
              *(short *)(lVar16 + uVar15 * 2 + 0x20) = sVar18;
              bVar7 = FUN_067649f4(lVar14,lVar9);
              if (lVar17 == 0) goto LAB_0676695c;
              if (*(uint *)(lVar17 + 0x18) <= uVar15) goto LAB_06766960;
              sVar18 = sVar18 + 1;
              *(byte *)(lVar17 + uVar15 + 0x20) = bVar7 & 1;
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while ((uVar2 & 0xffffffff) != uVar15);
    }
    return in_stack_00000008._4_4_ & 1;
  }
LAB_0676695c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


