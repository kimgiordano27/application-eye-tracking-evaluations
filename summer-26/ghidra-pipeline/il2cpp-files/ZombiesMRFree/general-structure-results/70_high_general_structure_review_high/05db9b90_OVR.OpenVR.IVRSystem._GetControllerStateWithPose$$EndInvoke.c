/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 05db9b90
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  float unaff_s8;
  float fVar18;
  float unaff_s9;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (in_w8 == 0) {
    FUN_02fe925c(PTR_DAT_06f6d5d8);
    *(undefined1 *)(unaff_x20 + 0x660) = 1;
  }
  puVar1 = PTR_DAT_06f6d5d8;
  fVar4 = (float)FUN_068ed2ec(0);
  uVar12 = param_2;
  uVar15 = param_3;
  fVar5 = (float)FUN_068eec18(0);
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if (lVar2 != 0) {
      fVar21 = *(float *)(unaff_x19 + 0x30);
      uVar9 = FUN_0690449c(lVar2,0);
      if (DAT_0738e661 == '\0') {
        FUN_02fe925c(PTR_DAT_06f6d5d8);
        DAT_0738e661 = '\x01';
      }
      lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
      fVar6 = (float)FUN_068ed2ec(uVar9,uVar12,uVar15,param_4,*(undefined4 *)(lVar2 + 0x3c),
                                  *(undefined4 *)(lVar2 + 0x40),*(undefined4 *)(lVar2 + 0x44),0);
      fVar7 = (float)FUN_068eec18(0);
      fVar18 = *(float *)(unaff_x19 + 0x34);
      lVar2 = FUN_068f5d7c();
      if (lVar2 != 0) {
        fVar11 = fVar5 * unaff_s9 * (float)param_2;
        fVar14 = fVar5 * unaff_s9 * (float)param_3;
        fVar19 = fVar21 * fVar11;
        fVar20 = fVar21 * fVar14;
        fVar8 = (float)FUN_069042b4(lVar2,0);
        fVar4 = fVar21 * fVar5 * unaff_s9 * fVar4 + fVar18 * fVar7 * unaff_s8 * fVar6;
        uVar17 = (ulong)(uint)fVar4;
        uVar13 = (ulong)(uint)(fVar19 + fVar18 * fVar7 * unaff_s8 * (float)uVar12 + fVar11);
        uVar16 = (ulong)(uint)(fVar20 + fVar18 * fVar7 * unaff_s8 * (float)uVar15 + fVar14);
        FUN_06904354(fVar4 + fVar8,uVar13,uVar16,lVar2,0);
        if (*(int *)(*(long *)PTR_DAT_06f73560 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        lVar2 = FUN_05e00e84(0);
        if (((lVar2 != 0) && (uVar3 = FUN_06993d68(lVar2,0), (uVar3 & 1) != 0)) ||
           ((*(char *)(unaff_x19 + 0x21) == '\0' && (*(char *)(unaff_x19 + 0x20) == '\0')))) {
          return;
        }
        lVar2 = FUN_068f5d7c();
        if (lVar2 != 0) {
          uVar10 = FUN_0690449c(lVar2,0);
          uVar3 = uVar13;
          if (*(char *)(unaff_x19 + 0x21) != '\0') {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            fVar4 = (float)FUN_05df485c(2,0x80000000,0);
            fVar5 = (float)FUN_068eec18(0);
            fVar21 = *(float *)(unaff_x19 + 0x28);
            if (DAT_0738e662 == '\0') {
              FUN_02fe925c(PTR_DAT_06f6d5d8);
              DAT_0738e662 = '\x01';
            }
            lVar2 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
            fVar6 = *(float *)(lVar2 + 0x18);
            fVar7 = *(float *)(lVar2 + 0x1c);
            fVar18 = *(float *)(lVar2 + 0x20);
            fVar4 = (float)UnityEngine_UIElements_BackgroundRepeat__Initial
                                     (fVar4 * fVar5 * fVar21,fVar6,fVar7,fVar18,0);
            fVar11 = (float)uVar10;
            fVar5 = (float)uVar17;
            fVar8 = (float)uVar13;
            fVar21 = (float)uVar16;
            uVar13 = (ulong)(uint)(fVar8 * fVar6);
            uVar10 = (ulong)(uint)((fVar21 * fVar6 + fVar11 * fVar18 + fVar5 * fVar4) -
                                  fVar8 * fVar7);
            uVar3 = (ulong)(uint)((fVar11 * fVar7 + fVar8 * fVar18 + fVar5 * fVar6) - fVar21 * fVar4
                                 );
            uVar16 = (ulong)(uint)((fVar8 * fVar4 + fVar21 * fVar18 + fVar5 * fVar7) -
                                  fVar11 * fVar6);
            uVar17 = (ulong)(uint)(((fVar5 * fVar18 - fVar11 * fVar4) - fVar8 * fVar6) -
                                  fVar21 * fVar7);
          }
          fVar4 = (float)uVar13;
          if (*(char *)(unaff_x19 + 0x20) != '\0') {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            FUN_05df485c(2,0x80000000,0);
            if (DAT_01369908 < ABS(fVar4)) {
              if (*(char *)(unaff_x19 + 0x22) != '\0') {
                fVar4 = -fVar4;
              }
              fVar5 = (float)FUN_068eec18(0);
              fVar21 = *(float *)(unaff_x19 + 0x24);
              if (DAT_0738e8a3 == '\0') {
                FUN_02fe925c(PTR_DAT_06f6d5d8);
                DAT_0738e8a3 = '\x01';
              }
              lVar2 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
              fVar6 = *(float *)(lVar2 + 0x30);
              fVar7 = *(float *)(lVar2 + 0x34);
              fVar18 = *(float *)(lVar2 + 0x38);
              fVar4 = (float)UnityEngine_UIElements_BackgroundRepeat__Initial
                                       (fVar21 * fVar5 * fVar4,fVar6,fVar7,fVar18,0);
              fVar11 = (float)uVar10;
              fVar8 = (float)uVar3;
              fVar5 = (float)uVar17;
              fVar21 = (float)uVar16;
              uVar16 = (ulong)(uint)((fVar11 * fVar6 + fVar5 * fVar7 + fVar21 * fVar18) -
                                    fVar8 * fVar4);
              uVar10 = (ulong)(uint)((fVar8 * fVar7 + fVar5 * fVar4 + fVar11 * fVar18) -
                                    fVar21 * fVar6);
              uVar3 = (ulong)(uint)((fVar21 * fVar4 + fVar5 * fVar6 + fVar8 * fVar18) -
                                   fVar11 * fVar7);
              uVar17 = (ulong)(uint)(((fVar5 * fVar18 - fVar11 * fVar4) - fVar8 * fVar6) -
                                    fVar21 * fVar7);
            }
          }
          lVar2 = FUN_068f5d7c();
          if (lVar2 != 0) {
            FUN_06904520(uVar10,uVar3,uVar16,uVar17,lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


