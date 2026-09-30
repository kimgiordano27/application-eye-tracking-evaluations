/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 0368cee0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 109
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_12;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 OVRPlugin__get_eyeTrackingEnabled(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  float *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
code_r0x0368cee0:
  do {
    uVar5 = (*(code *)*param_1)(unaff_x22);
    if ((uVar5 & 1) != 0) {
      fVar9 = fStack0000000000000000 - fStack0000000000000004 * unaff_s12;
      fVar8 = fStack0000000000000000 + fStack0000000000000004 * unaff_s12;
      if (unaff_s10 <= fVar9) {
        unaff_s10 = fVar9;
      }
      if (fVar8 <= unaff_s11) {
        unaff_s11 = fVar8;
      }
      if (fStack0000000000000008 <= fStack000000000000000c) {
        if (unaff_s8 <= fStack0000000000000008) {
          unaff_s8 = fStack0000000000000008;
        }
        unaff_w23 = 0;
        if (fStack000000000000000c <= unaff_s9) {
          unaff_s9 = fStack000000000000000c;
        }
      }
      unaff_x27 = 1;
    }
    do {
      unaff_w21 = unaff_w21 + 1;
      lVar6 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0368ce1c;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0368ce1c:
      iVar3 = (*(code *)*puVar4)();
      uVar1 = _DAT_00c91620;
      if (iVar3 <= unaff_w21) {
        if ((unaff_x27 & 1) == 0) {
          *(undefined8 *)(unaff_x19 + 2) = _UNK_00c91628;
          *(undefined8 *)unaff_x19 = uVar1;
        }
        else {
          if ((unaff_s11 < unaff_s10) || ((unaff_s9 < unaff_s8 && (((unaff_w23 ^ 1) & 1) != 0)))) {
            unaff_x19[0] = 0.0;
            unaff_x19[1] = 0.0;
            unaff_x19[2] = 0.0;
            unaff_x19[3] = 0.0;
            return 0;
          }
          fVar8 = fmodf(unaff_s10 + (unaff_s11 - unaff_s10) * 0.5,360.0);
          bVar2 = (unaff_w23 & 1) == 0;
          *unaff_x19 = fVar8;
          unaff_x19[1] = unaff_s11 - unaff_s10;
          fVar8 = -1.0;
          if (bVar2) {
            fVar8 = unaff_s9;
          }
          fVar9 = 1.0;
          if (bVar2) {
            fVar9 = unaff_s8;
          }
          unaff_x19[2] = fVar9;
          unaff_x19[3] = fVar8;
        }
        return 1;
      }
      lVar6 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0368ce7c;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238();
LAB_0368ce7c:
      unaff_x22 = (long *)(*(code *)*puVar4)();
    } while (unaff_x22 == (long *)0x0);
    lVar6 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          param_1 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto code_r0x0368cee0;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    param_1 = (undefined8 *)FUN_01ecb238(unaff_x22,*unaff_x26,0);
  } while( true );
}


