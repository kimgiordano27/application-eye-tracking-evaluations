/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_SetHasEyeTrackingPermissions
ENTRY_POINT: 088a6fa4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup
*/


/* WARNING: Removing unreachable block (ram,0x088a7224) */

undefined1  [16]
UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetHasEyeTrackingPermissions
          (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;
  undefined8 *puVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  uint *puVar18;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  
  FUN_03d2d2b0(*(undefined8 *)(param_5 + 0xc88));
  FUN_03d2d2b0(PTR_DAT_091a1508);
  *(undefined1 *)(unaff_x20 + 0xf58) = 1;
  if (DAT_0984826c == '\0') {
    FUN_03d2d2b0(PTR_DAT_091f92c0);
    DAT_0984826c = '\x01';
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar15 = *unaff_x19;
  puVar18 = *(uint **)(*(long *)PTR_DAT_091f92c0 + 0xb8);
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  auVar19._4_4_ = 0;
  auVar19._0_4_ = *puVar18;
  uVar21 = 0;
  uVar22 = puVar18[1];
  uVar24 = puVar18[2];
  uVar26 = puVar18[3];
  if (uVar17 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_09291c80) {
        puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_088a7050;
      }
      uVar17 = uVar17 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar17 != 0);
  }
  puVar12 = (undefined8 *)FUN_03d8f370();
LAB_088a7050:
  puVar6 = PTR_DAT_091a14e0;
  plVar13 = (long *)(*(code *)*puVar12)();
  puVar8 = PTR_DAT_09291c88;
  puVar7 = PTR_DAT_091a1508;
  auVar19._8_8_ = uVar21;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  uVar17 = (ulong)uVar22;
  uVar9 = (ulong)uVar24;
  uVar10 = (ulong)uVar26;
  bVar11 = false;
LAB_088a7080:
  auVar5 = auVar19;
  bVar14 = bVar11;
  uVar27 = uVar10;
  uVar25 = uVar9;
  uVar23 = uVar17;
  uVar21 = auVar5._8_8_;
  lVar15 = *plVar13;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar17 != 0) {
    piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
        puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_088a70e0;
      }
      uVar17 = uVar17 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar17 != 0);
  }
  puVar12 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar7,0);
LAB_088a70e0:
  uVar17 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  if ((uVar17 & 1) != 0) {
    lVar15 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar8) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_088a713c;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar8,0);
LAB_088a713c:
    auVar19 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    uVar17 = param_2;
    uVar9 = param_3;
    uVar10 = param_4;
    bVar11 = true;
    if (bVar14) {
      fVar1 = auVar5._0_4_;
      if (auVar5._0_4_ <= auVar19._0_4_) {
        fVar1 = auVar19._0_4_;
      }
      fVar2 = (float)uVar23;
      if ((float)uVar23 <= (float)param_2) {
        fVar2 = (float)param_2;
      }
      fVar3 = (float)uVar25;
      if ((float)uVar25 <= (float)param_3) {
        fVar3 = (float)param_3;
      }
      fVar4 = (float)uVar27;
      if ((float)uVar27 <= (float)param_4) {
        fVar4 = (float)param_4;
      }
      uVar17 = (ulong)(uint)fVar2;
      uVar9 = (ulong)(uint)fVar3;
      uVar10 = (ulong)(uint)fVar4;
      bVar11 = true;
      auVar19 = ZEXT416((uint)fVar1);
    }
    goto LAB_088a7080;
  }
  if (plVar13 != (long *)0x0) {
    lVar15 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_088a71dc;
        }
        uVar17 = uVar17 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_03d8f370(plVar13,*(long *)puVar6,0);
LAB_088a71dc:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  auVar20._8_8_ = uVar21;
  auVar20._0_8_ = auVar5._0_8_;
  return auVar20;
}


