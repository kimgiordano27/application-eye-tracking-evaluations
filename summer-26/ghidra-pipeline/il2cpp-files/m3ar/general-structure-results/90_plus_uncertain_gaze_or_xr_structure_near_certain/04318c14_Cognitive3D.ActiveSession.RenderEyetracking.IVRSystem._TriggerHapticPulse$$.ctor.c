/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._TriggerHapticPulse$$.ctor
ENTRY_POINT: 04318c14
PROGRAM: m3ar-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__TriggerHapticPulse___ctor
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint in_w9;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float unaff_s14;
  float unaff_s15;
  
  while( true ) {
    if (in_w9 <= unaff_w22) goto LAB_04318e2c;
    lVar4 = (long)(int)unaff_w22;
    lVar1 = *(long *)(param_1 + lVar4 * 8 + 0x20);
    if (lVar1 == 0) break;
    uVar5 = FUN_08598884(lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    lVar1 = *(long *)(lVar1 + lVar4 * 8 + 0x20);
    if (lVar1 == 0) break;
    uVar7 = param_3;
    uVar8 = param_4;
    uVar6 = FUN_08599040(lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    lVar1 = *(long *)(lVar1 + lVar4 * 8 + 0x20);
    if ((lVar1 == 0) || (lVar1 = FUN_08584ab0(lVar1,0), lVar1 == 0)) break;
    FUN_08588638(lVar1,1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    lVar1 = *(long *)(lVar1 + lVar4 * 8 + 0x20);
    FUN_08598884(*(long *)(unaff_x19 + 0x40),0);
    if (lVar1 == 0) break;
    FUN_0859895c(lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    lVar1 = *(long *)(lVar1 + lVar4 * 8 + 0x20);
    if (*(char *)(unaff_x28 + 0xc10) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x28 + 0xc10) = unaff_w27;
    }
    if (lVar1 == 0) break;
    puVar3 = *(undefined4 **)(*unaff_x20 + 0xb8);
    UnityEngine_UI_Dropdown__OnSubmit(*puVar3,puVar3[1],puVar3[2],lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w22) {
LAB_04318e2c:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    uVar2 = FUN_0450c22c(uVar5,param_3,param_4,*(undefined4 *)(unaff_x19 + 0x38),
                         *(undefined4 *)(unaff_x19 + 0x30),*(undefined8 *)(lVar1 + lVar4 * 8 + 0x20)
                         ,1,0,0);
    uVar2 = FUN_04d5988c(unaff_s14 + *(float *)(unaff_x19 + 0x2c),uVar2,*unaff_x23);
    FUN_04d59a90(uVar2,1,*unaff_x24);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    unaff_w22 = unaff_w22 + 1;
    uVar2 = FUN_0450a268(uVar6,uVar7,uVar8,*(float *)(unaff_x19 + 0x30) * unaff_s15,
                         *(undefined8 *)(lVar1 + lVar4 * 8 + 0x20),0);
    uVar2 = FUN_04d5988c(unaff_s14 + *(float *)(unaff_x19 + 0x2c),uVar2,*unaff_x25);
    FUN_04d59a90(uVar2,0x1b,*unaff_x26);
    param_1 = *(long *)(unaff_x19 + 0x48);
    unaff_s14 = unaff_s14 + *(float *)(unaff_x19 + 0x34);
    if (param_1 == 0) break;
    in_w9 = *(uint *)(param_1 + 0x18);
    param_3 = uVar7;
    param_4 = uVar8;
    if ((int)in_w9 <= (int)unaff_w22) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


