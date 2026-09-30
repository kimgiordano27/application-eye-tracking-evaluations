/*
FUNCTION_NAME: FUN_0676643c
ENTRY_POINT: 0676643c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


uint FUN_0676643c(long param_1,uint param_2,byte param_3,long param_4,long param_5)

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
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  short sVar17;
  float fVar18;
  undefined4 extraout_s0;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 local_98;
  int local_94;
  undefined8 local_88;
  
                    /* try { // try from 0676643c to 0686643f has its CatchHandler @ 067665f4 */
                    /* try { // try from 06766440 to 06866443 has its CatchHandler @ 067665f0 */
                    /* try { // try from 06766444 to 06866447 has its CatchHandler @ 067665ec */
                    /* try { // try from 06766448 to 0686644b has its CatchHandler @ 067665e8 */
                    /* try { // try from 0676644c to 0686644f has its CatchHandler @ 067665e4 */
                    /* try { // try from 06766450 to 06866453 has its CatchHandler @ 067665e0 */
                    /* try { // try from 06766454 to 06866457 has its CatchHandler @ 067665dc */
                    /* try { // try from 06766458 to 0686645b has its CatchHandler @ 067665d8 */
                    /* try { // try from 0676645c to 0686645f has its CatchHandler @ 067665cc */
                    /* try { // try from 06766460 to 06866463 has its CatchHandler @ 067665c8 */
                    /* try { // try from 06766464 to 06866467 has its CatchHandler @ 067665c4 */
                    /* try { // try from 06766468 to 0686646b has its CatchHandler @ 067665c0 */
                    /* try { // try from 0676646c to 0686646f has its CatchHandler @ 067665b8 */
                    /* try { // try from 06766470 to 06866473 has its CatchHandler @ 067665b4 */
  if ((DAT_075585c7 & 1) == 0) {
    FUN_03188a78(Fusion_Photon_Realtime_Player_TypeInfo);
    FUN_03188a78(PTR_DAT_070c4240);
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(PTR_DAT_070c6140);
    FUN_03188a78(OVREyeGaze_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVRGLTFAnimatinonNode_TypeInfo);
    FUN_03188a78(PTR_DAT_070f2ff8);
    FUN_03188a78(PTR_DAT_070f93a8);
    FUN_03188a78(Oculus_Platform_Models_SendInvitesResult_TypeInfo);
    FUN_03188a78(UnityEngine_SendMouseEvents_TypeInfo);
    DAT_075585c7 = 1;
  }
  puVar4 = OVRGLTFAnimatinonNode_TypeInfo;
  local_88 = 0;
  if ((param_2 & 1) == 0) {
LAB_06766928:
    return param_2 & 1;
  }
  if (param_5 != 0) {
    *(undefined1 *)(param_5 + 0x58) = 1;
    lVar9 = *(long *)puVar4;
    uVar19 = *(undefined4 *)(param_1 + 0xd0);
    uVar20 = *(undefined4 *)(param_1 + 0xd4);
    *(undefined1 *)(param_1 + 200) = 1;
    iVar8 = *(int *)(lVar9 + 0xe4);
    *(undefined1 *)(param_1 + 0x52) = 0;
    *(byte *)(param_1 + 0xc9) = param_3 & 1;
    if (iVar8 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0673090c(uVar19,uVar20,(long)&local_88 + 4,&local_88,0);
    puVar4 = Fusion_Photon_Realtime_Player_TypeInfo;
    uVar19 = (undefined4)local_88;
    uVar20 = local_88._4_4_;
    lVar9 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_031e5338(lVar9);
      lVar9 = *(long *)puVar4;
    }
    lVar13 = *(long *)(lVar9 + 0xb8);
    *(undefined4 *)(lVar13 + 0x1c) = uVar20;
    *(undefined4 *)(lVar13 + 0x20) = uVar19;
    *(undefined4 *)(lVar13 + 0x24) = 0;
    *(undefined4 *)(lVar13 + 0x28) = 0;
    if ((param_4 != 0) && (lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x30), lVar13 != 0)) {
      uVar1 = *(undefined8 *)(param_4 + 0x20);
      uVar2 = *(ulong *)(param_4 + 0x28);
      iVar8 = (int)uVar2;
      if (*(int *)(lVar13 + 0x18) < iVar8) {
        uVar10 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c6140,uVar2 & 0xffffffff);
        uVar12 = *(undefined8 *)PTR_DAT_070c4240;
        *(undefined8 *)(param_1 + 0xf0) = uVar10;
        uVar10 = FUN_03188b1c(uVar12,uVar2 & 0xffffffff);
        puVar5 = PTR_DAT_070f93a8;
        *(undefined8 *)(param_1 + 0xe8) = uVar10;
        uVar10 = FUN_03188b1c(*(undefined8 *)puVar5,uVar2 & 0xffffffff);
        lVar9 = *(long *)puVar4;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar9);
          lVar9 = *(long *)puVar4;
        }
        lVar13 = *(long *)(lVar9 + 0xb8);
        *(undefined8 *)(lVar13 + 0x30) = uVar10;
        *(undefined1 *)(lVar13 + 0x38) = 1;
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar9);
        lVar9 = *(long *)puVar4;
      }
      lVar13 = *(long *)(lVar9 + 0xb8);
      if (*(char *)(lVar13 + 0x38) != '\0') {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_031e5338(lVar9);
          lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
        }
        puVar4 = PTR_DAT_070c1958;
        *(undefined1 *)(lVar13 + 0x38) = 0;
        local_94 = iVar8;
        uVar10 = thunk_FUN_031c39fc(*(undefined8 *)(puVar4 + 0x48),&local_94);
        if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)PTR_DAT_070f2ff8);
        }
        local_98 = FUN_0674c3f0(0);
        uVar12 = thunk_FUN_031c39fc(*(undefined8 *)(puVar4 + 0x48),&local_98);
        uVar10 = FUN_057c02e8(*(undefined8 *)Oculus_Platform_Models_SendInvitesResult_TypeInfo,
                              uVar10,uVar12,0);
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
          if (uVar14 != *(uint *)(param_4 + 0x10)) {
            uVar10 = FUN_03b26540(uVar1,uVar2,uVar14 & 0xffffffff,*(undefined8 *)puVar5);
            lVar9 = FUN_06a1536c(uVar10,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)puVar4);
            }
            uVar11 = FUN_069d8404(lVar9,0,0);
            if ((uVar11 & 1) == 0) {
              if (lVar9 == 0) goto LAB_0676695c;
              iVar8 = FUN_069a86c4(lVar9,0);
              fVar18 = 1.0;
              if (iVar8 != 2) {
                fVar18 = -1.0;
              }
              fVar21 = 0.0;
              if (iVar8 != 0) {
                fVar21 = fVar18;
              }
              if (0.0 <= fVar21) {
                iVar8 = FUN_069a958c(lVar9,0);
                puVar6 = Fusion_Photon_Realtime_Player_TypeInfo;
                if (iVar8 == 0) {
                  lVar13 = *(long *)Fusion_Photon_Realtime_Player_TypeInfo;
                  if (*(int *)(lVar13 + 0xe4) == 0) {
                    thunk_FUN_031e5338();
                    lVar13 = *(long *)puVar6;
                  }
                  lVar16 = *(long *)(lVar13 + 0xb8);
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
                  cVar3 = *(char *)(param_5 + 0x3c);
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
                  if (*(uint *)(lVar15 + 0x18) <= (uint)(int)sVar17) goto LAB_06766960;
                  fVar18 = (float)(int)sVar17;
                  lVar15 = lVar15 + (long)sVar17 * 0x10;
                  uVar19 = extraout_s0;
                }
                *(undefined4 *)(lVar15 + 0x20) = uVar19;
                *(undefined4 *)(lVar15 + 0x24) = uVar20;
                *(float *)(lVar15 + 0x28) = fVar21;
                *(float *)(lVar15 + 0x2c) = fVar18;
                lVar15 = *(long *)(param_1 + 0xf0);
                if (lVar15 == 0) goto LAB_0676695c;
                if (*(uint *)(lVar15 + 0x18) <= uVar14) {
LAB_06766960:
                    /* WARNING: Subroutine does not return */
                  FUN_03188ce0();
                }
                lVar16 = *(long *)(param_1 + 0xe8);
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
      goto LAB_06766928;
    }
  }
LAB_0676695c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


