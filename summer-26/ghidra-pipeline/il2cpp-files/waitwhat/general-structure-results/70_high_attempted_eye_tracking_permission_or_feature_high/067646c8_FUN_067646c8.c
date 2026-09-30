/*
FUNCTION_NAME: FUN_067646c8
ENTRY_POINT: 067646c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_18;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


ulong FUN_067646c8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined4 uVar21;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_68;
  
  if ((DAT_075585c4 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c24e0);
    FUN_03188a78(OVREyeGaze_TypeInfo);
    FUN_03188a78(OVRGLTFAnimatinonNode_TypeInfo);
    DAT_075585c4 = 1;
  }
  puVar3 = OVRGLTFAnimatinonNode_TypeInfo;
  puVar2 = OVREyeGaze_TypeInfo;
  if (param_2 != 0) {
    uVar18 = *(undefined8 *)(param_2 + 0x28);
    iVar7 = (int)uVar18;
    if (iVar7 < 1) {
      uVar10 = 0;
      uVar17 = 0;
      uVar16 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
    }
    else {
      local_80 = 0;
      local_78 = 0;
      local_68 = 0;
      uVar19 = *(undefined8 *)(param_2 + 0x20);
      iVar20 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      do {
        uVar8 = FUN_03b26540(uVar19,uVar18,iVar20,*(undefined8 *)puVar2);
        lVar9 = FUN_06a1536c(uVar8,0);
        uVar4 = FUN_06a153f8(uVar8,0);
        if (lVar9 == 0) goto LAB_067649d0;
        uVar5 = FUN_069a958c(lVar9,0);
        uVar21 = FUN_069a9640(lVar9,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar10 = FUN_06731b88(uVar21,param_2,iVar20,uVar4,uVar5,0);
        if ((uVar10 & 1) != 0) {
          iVar6 = FUN_06a153f8(uVar8,0);
          if (iVar6 == 2) {
            local_78 = local_78 + 1;
          }
          else if (iVar6 == 0) {
            local_68 = local_68 + 1;
          }
          if ((param_3 == 0) || (*(long *)(param_3 + 0x50) == 0)) goto LAB_067649d0;
          iVar6 = FUN_04281f90(*(long *)(param_3 + 0x50),iVar20,*(undefined8 *)PTR_DAT_070c24e0);
          if (iVar6 < 0x201) {
            if (iVar6 == 0x80) {
              local_a8 = local_a8 + 1;
            }
            else if (iVar6 == 0x100) {
              local_a0 = local_a0 + 1;
            }
            else if (iVar6 == 0x200) {
              local_98 = local_98 + 1;
            }
          }
          else if (iVar6 == 0x400) {
            local_90 = local_90 + 1;
          }
          else if (iVar6 == 0x800) {
            local_88 = local_88 + 1;
          }
          else if (iVar6 == 0x1000) {
            local_80 = local_80 + 1;
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar7 != iVar20);
      uVar12 = local_68 << 0xb;
      uVar11 = local_78 << 3;
      uVar17 = local_88 << 0x32;
      uVar10 = local_80 << 0x39;
      uVar13 = local_a8 << 0x13;
      uVar14 = local_a0 << 0x1b;
      uVar15 = local_98 << 0x23;
      uVar16 = local_90 << 0x2b;
    }
    if (param_3 != 0) {
      iVar20 = *(int *)(param_3 + 0x34);
      iVar7 = 0x1000;
      if (iVar20 < 0x401) {
        iVar7 = 0x400;
      }
      lVar9 = 0xc;
      if (iVar20 < 0x401) {
        lVar9 = 10;
      }
      iVar6 = 0x800;
      if (iVar20 < 0x401) {
        iVar6 = 0x200;
      }
      lVar1 = 0xb;
      if (iVar20 < 0x401) {
        lVar1 = 9;
      }
      if (iVar7 != iVar20) {
        lVar9 = 8;
      }
      if (iVar6 != iVar20) {
        lVar1 = lVar9;
      }
      return uVar17 | uVar10 | uVar16 | uVar15 | uVar14 | uVar13 | uVar12 | lVar1 - 8U | uVar11;
    }
  }
LAB_067649d0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


