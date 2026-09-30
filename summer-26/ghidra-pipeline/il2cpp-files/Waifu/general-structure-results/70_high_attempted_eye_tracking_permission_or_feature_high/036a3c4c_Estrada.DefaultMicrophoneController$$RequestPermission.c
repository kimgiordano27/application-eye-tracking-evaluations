/*
FUNCTION_NAME: Estrada.DefaultMicrophoneController$$RequestPermission
ENTRY_POINT: 036a3c4c
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


void Estrada_DefaultMicrophoneController__RequestPermission(code *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  do {
    *(code **)(unaff_x28 + 400) = param_1;
    do {
      lVar2 = (*param_1)(unaff_x26);
      if (lVar2 == 0) goto LAB_036a3d6c;
      pcVar4 = *(code **)(unaff_x24 + 0x278);
      if (unaff_w20 == unaff_w21) {
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
          *(code **)(unaff_x24 + 0x278) = pcVar4;
        }
        (*pcVar4)(lVar2,1);
        if (unaff_x25 == 0) goto LAB_036a3d6c;
        pcVar4 = *(code **)(unaff_x28 + 400);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68();
          *(code **)(unaff_x28 + 400) = pcVar4;
        }
        lVar2 = (*pcVar4)(unaff_x25);
        if (lVar2 == 0) goto LAB_036a3d6c;
        pcVar4 = *(code **)(unaff_x24 + 0x278);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
          *(code **)(unaff_x24 + 0x278) = pcVar4;
        }
        uVar3 = 0;
      }
      else {
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
          *(code **)(unaff_x24 + 0x278) = pcVar4;
        }
        (*pcVar4)(lVar2,0);
        if (unaff_x25 == 0) goto LAB_036a3d6c;
        pcVar4 = *(code **)(unaff_x28 + 400);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68();
          *(code **)(unaff_x28 + 400) = pcVar4;
        }
        lVar2 = (*pcVar4)(unaff_x25);
        if (lVar2 == 0) goto LAB_036a3d6c;
        pcVar4 = *(code **)(unaff_x24 + 0x278);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
          *(code **)(unaff_x24 + 0x278) = pcVar4;
        }
        uVar3 = 1;
      }
      (*pcVar4)(lVar2,uVar3);
      unaff_w20 = unaff_w20 + 1;
      if (*(long *)(unaff_x19 + 0x50) == 0) {
LAB_036a3d6c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (*(int *)(*(long *)(unaff_x19 + 0x50) + 0x18) <= unaff_w20) {
        return;
      }
      lVar2 = *(long *)(unaff_x19 + 0x40);
      if (lVar2 == 0) goto LAB_036a3d6c;
      pcVar4 = *(code **)(unaff_x27 + 0x930);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68("UnityEngine.Transform::GetChild(System.Int32)");
        *(code **)(unaff_x27 + 0x930) = pcVar4;
      }
      lVar2 = (*pcVar4)(lVar2,unaff_w20);
      if (lVar2 == 0) goto LAB_036a3d6c;
      pcVar4 = *(code **)(unaff_x28 + 400);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68();
        *(code **)(unaff_x28 + 400) = pcVar4;
      }
      lVar2 = (*pcVar4)(lVar2);
      if (lVar2 == 0) goto LAB_036a3d6c;
      pcVar4 = *(code **)(unaff_x29 + 0x250);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        *(code **)(unaff_x29 + 0x250) = pcVar4;
      }
      lVar1 = (*pcVar4)(lVar2);
      if (lVar1 == 0) goto LAB_036a3d6c;
      unaff_x26 = FUN_07a1ba3c(lVar1,DAT_08442728,0);
      pcVar4 = *(code **)(unaff_x29 + 0x250);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::get_transform()");
        *(code **)(unaff_x29 + 0x250) = pcVar4;
      }
      lVar2 = (*pcVar4)(lVar2);
      if ((lVar2 == 0) ||
         (unaff_x25 = FUN_07a1ba3c(lVar2,*(undefined8 *)(unaff_x23 + 0x680),0), unaff_x26 == 0))
      goto LAB_036a3d6c;
      param_1 = *(code **)(unaff_x28 + 400);
      unaff_w21 = *(int *)(unaff_x19 + 0x28);
    } while (param_1 != (code *)0x0);
    param_1 = (code *)FUN_033d1b68();
  } while( true );
}


