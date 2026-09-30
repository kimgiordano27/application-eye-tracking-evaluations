/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetButtonIdNameFromEnum$$.ctor
ENTRY_POINT: 04318d54
PROGRAM: m3ar-libil2cpp.so
SCORE: 136
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetButtonIdNameFromEnum___ctor
               (long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  float unaff_s14;
  float unaff_s15;
  
  while( true ) {
    uVar1 = FUN_0450c22c(param_2,unaff_s12,unaff_s13,*(undefined4 *)(unaff_x19 + 0x38),
                         *(undefined4 *)(unaff_x19 + 0x30),*(undefined8 *)(param_1 + 0x20),1,0,0);
    uVar1 = FUN_04d5988c(unaff_s14 + *(float *)(unaff_x19 + 0x2c),uVar1,*unaff_x23);
    FUN_04d59a90(uVar1,1,*unaff_x24);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) {
LAB_04318e2c:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    unaff_w22 = unaff_w22 + 1;
    uVar1 = FUN_0450a268(unaff_s8,unaff_s9,unaff_s10,*(float *)(unaff_x19 + 0x30) * unaff_s15,
                         *(undefined8 *)(lVar3 + unaff_x29 * 8 + 0x20),0);
    uVar1 = FUN_04d5988c(unaff_s14 + *(float *)(unaff_x19 + 0x2c),uVar1,*unaff_x25);
    FUN_04d59a90(uVar1,0x1b,*unaff_x26);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    unaff_s14 = unaff_s14 + *(float *)(unaff_x19 + 0x34);
    if (lVar3 == 0) break;
    if ((int)*(uint *)(lVar3 + 0x18) <= (int)unaff_w22) {
      return;
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    unaff_x29 = (long)(int)unaff_w22;
    lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
    if (lVar3 == 0) break;
    param_2 = FUN_08598884(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
    if (lVar3 == 0) break;
    uVar4 = unaff_s9;
    uVar5 = unaff_s10;
    unaff_s8 = FUN_08599040(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
    if ((lVar3 == 0) || (lVar3 = FUN_08584ab0(lVar3,0), lVar3 == 0)) break;
    FUN_08588638(lVar3,1,0);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    if (*(long *)(unaff_x19 + 0x40) == 0) break;
    lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
    FUN_08598884(*(long *)(unaff_x19 + 0x40),0);
    if (lVar3 == 0) break;
    FUN_0859895c(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x48);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    lVar3 = *(long *)(lVar3 + unaff_x29 * 8 + 0x20);
    if (*(char *)(unaff_x28 + 0xc10) == '\0') {
      FUN_0403162c();
      *(undefined1 *)(unaff_x28 + 0xc10) = unaff_w27;
    }
    if (lVar3 == 0) break;
    puVar2 = *(undefined4 **)(*unaff_x20 + 0xb8);
    UnityEngine_UI_Dropdown__OnSubmit(*puVar2,puVar2[1],puVar2[2],lVar3,0);
    param_1 = *(long *)(unaff_x19 + 0x48);
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_w22) goto LAB_04318e2c;
    param_1 = param_1 + unaff_x29 * 8;
    unaff_s12 = unaff_s9;
    unaff_s13 = unaff_s10;
    unaff_s9 = uVar4;
    unaff_s10 = uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


