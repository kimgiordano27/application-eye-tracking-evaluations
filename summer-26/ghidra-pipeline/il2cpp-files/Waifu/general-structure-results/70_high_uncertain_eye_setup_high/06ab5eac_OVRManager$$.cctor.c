/*
FUNCTION_NAME: OVRManager$$.cctor
ENTRY_POINT: 06ab5eac
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager___cctor(long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  int in_w9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  pcVar3 = *(code **)(unaff_x23 + 0x188);
  if (pcVar3 == (code *)0x0) {
    pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    *(code **)(unaff_x23 + 0x188) = pcVar3;
  }
  lVar1 = (*pcVar3)();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar7 = *(long **)(unaff_x19 + 0x48);
    uVar8 = FUN_07a18d2c(*(long *)(unaff_x19 + 0x20),0);
    pcVar3 = *(code **)(unaff_x22 + 0x698);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
      *(code **)(unaff_x22 + 0x698) = pcVar3;
    }
    uVar9 = (*pcVar3)();
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)(unaff_x24 + 0xac8)) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_06ab5f88;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x24 + 0xac8),2);
LAB_06ab5f88:
      (*(code *)*puVar2)(uVar8,param_3,param_4,uVar9,plVar7,puVar2[1]);
      if (lVar1 != 0) {
        FUN_07a18dcc(lVar1,0);
        if (*(char *)(unaff_x19 + 0x38) == '\0') {
          pcVar3 = *(code **)(unaff_x23 + 0x188);
          if (pcVar3 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            *(code **)(unaff_x23 + 0x188) = pcVar3;
          }
          lVar1 = (*pcVar3)();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06ab6180;
          FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
        }
        else {
          plVar7 = *(long **)(unaff_x19 + 0x50);
          if (plVar7 == (long *)0x0) goto LAB_06ab6180;
          lVar1 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_083c3ab8) {
                puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_06ab6060;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083c3ab8,1);
LAB_06ab6060:
          (*(code *)*puVar2)(plVar7,unaff_x19 + 0x3c,puVar2[1]);
          pcVar3 = *(code **)(unaff_x23 + 0x188);
          if (pcVar3 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            *(code **)(unaff_x23 + 0x188) = pcVar3;
          }
          lVar1 = (*pcVar3)();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06ab6180;
          plVar7 = *(long **)(unaff_x19 + 0x50);
          uVar8 = FUN_07a172b0(*(long *)(unaff_x19 + 0x20),0);
          pcVar3 = *(code **)(unaff_x22 + 0x698);
          if (pcVar3 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
            *(code **)(unaff_x22 + 0x698) = pcVar3;
          }
          uVar10 = (*pcVar3)();
          if (plVar7 == (long *)0x0) goto LAB_06ab6180;
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_083c3ab8) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_06ab6134;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_0338f71c(plVar7,DAT_083c3ab8,2);
LAB_06ab6134:
          (*(code *)*puVar2)(uVar8,param_3,param_4,uVar9,uVar10,plVar7,puVar2[1]);
        }
        if (lVar1 != 0) {
          FUN_07a1914c(lVar1,0);
          return;
        }
      }
    }
  }
LAB_06ab6180:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


