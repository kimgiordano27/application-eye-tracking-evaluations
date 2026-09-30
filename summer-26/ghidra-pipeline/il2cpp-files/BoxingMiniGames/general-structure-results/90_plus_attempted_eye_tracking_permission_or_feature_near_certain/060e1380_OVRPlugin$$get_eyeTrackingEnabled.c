/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 060e1380
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong in_x10;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long *unaff_x23;
  undefined4 uVar6;
  
  while (!(bool)in_CY) {
    unaff_w21 = unaff_w21 + 1;
    uVar1 = unaff_x22 + 3;
    *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = param_4;
    if (unaff_w21 == 0x18) {
      return;
    }
    lVar3 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_060e1338;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30();
LAB_060e1338:
    uVar6 = (*(code *)*puVar2)();
    param_1 = *(long *)(unaff_x20 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar4 = (ulong)*(uint *)(param_1 + 0x18);
    if (uVar4 <= uVar1) break;
    *(undefined4 *)(param_1 + uVar1 * 4 + 0x20) = uVar6;
    if (uVar4 <= unaff_x22 + 4) break;
    in_x10 = unaff_x22 + 5;
    *(undefined4 *)(param_1 + (unaff_x22 + 4) * 4 + 0x20) = param_3;
    unaff_x22 = uVar1;
    in_CY = uVar4 <= in_x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


