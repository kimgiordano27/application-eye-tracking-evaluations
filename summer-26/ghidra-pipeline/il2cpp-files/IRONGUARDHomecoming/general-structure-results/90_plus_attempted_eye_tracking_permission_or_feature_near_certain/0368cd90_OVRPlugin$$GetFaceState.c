/*
FUNCTION_NAME: OVRPlugin$$GetFaceState
ENTRY_POINT: 0368cd90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_12;validity_or_gating_hits_12;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OVRPlugin__GetFaceState(long *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  float fVar9;
  long lVar10;
  float fVar11;
  ulong uVar12;
  int *piVar13;
  float *unaff_x19;
  int iVar14;
  long unaff_x24;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__653_32__;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__653_30__;
  plVar15 = *(long **)(unaff_x24 + 0xe58);
  fVar9 = 3.4028235e+38;
  fVar11 = -3.4028235e+38;
  bVar1 = false;
  iVar14 = 0;
  bVar2 = true;
  fVar19 = fVar9;
  fVar18 = fVar11;
  do {
    lVar10 = *param_1;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *plVar15) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0368ce1c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(param_1,*plVar15,0);
LAB_0368ce1c:
    iVar6 = (*(code *)*puVar7)(param_1,puVar7[1]);
    uVar3 = _DAT_00c91620;
    if (iVar6 <= iVar14) {
      if (bVar1) {
        if ((fVar9 < fVar11) || ((fVar19 < fVar18 && (!bVar2)))) {
          unaff_x19[0] = 0.0;
          unaff_x19[1] = 0.0;
          unaff_x19[2] = 0.0;
          unaff_x19[3] = 0.0;
          return 0;
        }
        fVar16 = fmodf(fVar11 + (fVar9 - fVar11) * 0.5,360.0);
        *unaff_x19 = fVar16;
        unaff_x19[1] = fVar9 - fVar11;
        fVar11 = -1.0;
        if (!bVar2) {
          fVar11 = fVar19;
        }
        fVar9 = 1.0;
        if (!bVar2) {
          fVar9 = fVar18;
        }
        unaff_x19[2] = fVar9;
        unaff_x19[3] = fVar11;
      }
      else {
        *(undefined8 *)(unaff_x19 + 2) = _UNK_00c91628;
        *(undefined8 *)unaff_x19 = uVar3;
      }
      return 1;
    }
    lVar10 = *param_1;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0368ce7c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar5,0);
LAB_0368ce7c:
    plVar8 = (long *)(*(code *)*puVar7)(param_1,iVar14,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto OVRPlugin__get_eyeTrackingEnabled;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
OVRPlugin__get_eyeTrackingEnabled:
      uVar12 = (*(code *)*puVar7)(plVar8);
      if ((uVar12 & 1) != 0) {
        fVar17 = fStack0000000000000000 - fStack0000000000000004 * 0.5;
        fVar16 = fStack0000000000000000 + fStack0000000000000004 * 0.5;
        if (fVar11 <= fVar17) {
          fVar11 = fVar17;
        }
        if (fVar16 <= fVar9) {
          fVar9 = fVar16;
        }
        if (fStack0000000000000008 <= fStack000000000000000c) {
          if (fVar18 <= fStack0000000000000008) {
            fVar18 = fStack0000000000000008;
          }
          bVar2 = false;
          if (fStack000000000000000c <= fVar19) {
            fVar19 = fStack000000000000000c;
          }
        }
        bVar1 = true;
      }
    }
    iVar14 = iVar14 + 1;
  } while( true );
}


