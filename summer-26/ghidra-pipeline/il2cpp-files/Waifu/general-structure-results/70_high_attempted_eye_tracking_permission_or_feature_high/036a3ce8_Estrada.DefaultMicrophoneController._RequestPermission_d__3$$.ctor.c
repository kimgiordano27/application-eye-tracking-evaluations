/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController.<RequestPermission>d__3$$.ctor
ENTRY_POINT: 036a3ce8
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Estrada_DefaultMicrophoneController_<RequestPermission>d__3___ctor(code *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x19;
  int unaff_w20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  while( true ) {
    if (param_1 == (code *)0x0) {
      param_1 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x24 + 0x278) = param_1;
    }
    (*param_1)(unaff_x26,0);
    if (unaff_x25 == 0) break;
    pcVar5 = *(code **)(unaff_x28 + 400);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = (code *)FUN_033d1b68();
      *(code **)(unaff_x28 + 400) = pcVar5;
    }
    lVar3 = (*pcVar5)(unaff_x25);
    if (lVar3 == 0) break;
    pcVar5 = *(code **)(unaff_x24 + 0x278);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
      *(code **)(unaff_x24 + 0x278) = pcVar5;
    }
    uVar4 = 1;
    while( true ) {
      (*pcVar5)(lVar3,uVar4);
      unaff_w20 = unaff_w20 + 1;
      if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_036a3d6c;
      if (*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) <= unaff_w20) {
        return;
      }
      lVar3 = *(long *)(unaff_x19 + 0x40);
      if (lVar3 == 0) goto LAB_036a3d6c;
      pcVar5 = *(code **)(unaff_x27 + 0x930);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)FUN_033d1b68("UnityEngine.Transform::GetChild(System.Int32)");
        *(code **)(unaff_x27 + 0x930) = pcVar5;
      }
      lVar3 = (*pcVar5)(lVar3,unaff_w20);
      if (lVar3 == 0) goto LAB_036a3d6c;
      pcVar5 = *(code **)(unaff_x28 + 400);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)FUN_033d1b68();
        *(code **)(unaff_x28 + 400) = pcVar5;
      }
      lVar3 = (*pcVar5)(lVar3);
      if (lVar3 == 0) goto LAB_036a3d6c;
      pcVar5 = *(code **)(unaff_x29 + 0x250);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        *(code **)(unaff_x29 + 0x250) = pcVar5;
      }
      lVar2 = (*pcVar5)(lVar3);
      if (lVar2 == 0) goto LAB_036a3d6c;
      lVar2 = FUN_07a1ba3c(lVar2,DAT_08442728,0);
      pcVar5 = *(code **)(unaff_x29 + 0x250);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        *(code **)(unaff_x29 + 0x250) = pcVar5;
      }
      lVar3 = (*pcVar5)(lVar3);
      if ((lVar3 == 0) ||
         (unaff_x25 = FUN_07a1ba3c(lVar3,*(undefined8 *)(unaff_x23 + 0x680),0), lVar2 == 0))
      goto LAB_036a3d6c;
      pcVar5 = *(code **)(unaff_x28 + 400);
      iVar1 = *(int *)(unaff_x19 + 0x28);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)FUN_033d1b68();
        *(code **)(unaff_x28 + 400) = pcVar5;
      }
      unaff_x26 = (*pcVar5)(lVar2);
      if (unaff_x26 == 0) goto LAB_036a3d6c;
      param_1 = *(code **)(unaff_x24 + 0x278);
      if (unaff_w20 != iVar1) break;
      if (param_1 == (code *)0x0) {
        param_1 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x24 + 0x278) = param_1;
      }
      (*param_1)(unaff_x26,1);
      if (unaff_x25 == 0) goto LAB_036a3d6c;
      pcVar5 = *(code **)(unaff_x28 + 400);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)FUN_033d1b68();
        *(code **)(unaff_x28 + 400) = pcVar5;
      }
      lVar3 = (*pcVar5)(unaff_x25);
      if (lVar3 == 0) goto LAB_036a3d6c;
      pcVar5 = *(code **)(unaff_x24 + 0x278);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x24 + 0x278) = pcVar5;
      }
      uVar4 = 0;
    }
  }
LAB_036a3d6c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


