/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 06ac2de0
PROGRAM: Waifu-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_11;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_9
*/


void OVRPlugin__SetDeveloperMode(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  int unaff_w20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *plVar7;
  long unaff_x28;
  long unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long in_stack_00000028;
  
  do {
    DAT_086f1ee0 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::WakeUp()");
    do {
      (*DAT_086f1ee0)(unaff_x26);
      do {
        while( true ) {
          do {
            unaff_w20 = unaff_w20 + 1;
            if (unaff_w20 == 0x13) {
              return;
            }
            uVar1 = FUN_06ac2164();
            lVar2 = in_stack_00000028;
          } while ((uVar1 & 1) == 0);
          if (in_stack_00000028 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
          pcVar4 = *(code **)(unaff_x28 + 400);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68();
            *(code **)(unaff_x28 + 400) = pcVar4;
          }
          lVar2 = (*pcVar4)(lVar2);
          if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_06ac2e04:
          if (lVar2 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
          pcVar4 = *(code **)(unaff_x29 + 0x280);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68();
            *(code **)(unaff_x29 + 0x280) = pcVar4;
          }
          uVar1 = (*pcVar4)(lVar2);
          lVar5 = in_stack_00000028;
          if ((uVar1 & 1) != 0) {
            if (in_stack_00000028 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
            pcVar4 = *(code **)(unaff_x25 + 0xed0);
            if (pcVar4 == (code *)0x0) {
              pcVar4 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::Sleep()");
              *(code **)(unaff_x25 + 0xed0) = pcVar4;
            }
            (*pcVar4)(lVar5);
            pcVar4 = *(code **)(unaff_x23 + 0x278);
            if (pcVar4 == (code *)0x0) {
              pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
              *(code **)(unaff_x23 + 0x278) = pcVar4;
            }
            (*pcVar4)(lVar2,0);
          }
        }
        plVar7 = *(long **)(unaff_x19 + 0x38);
        if (plVar7 == (long *)0x0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
        lVar5 = *plVar7;
        uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)(unaff_x24 + 0xa30)) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_06ac2d34;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar3 = (undefined8 *)FUN_0338f71c(plVar7,*(long *)(unaff_x24 + 0xa30),9);
LAB_06ac2d34:
        uVar1 = (*(code *)*puVar3)(plVar7,unaff_w20,&stack0x00000008,puVar3[1]);
        if ((uVar1 & 1) == 0) goto LAB_06ac2e04;
        if (in_stack_00000028 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
        FUN_07a85e8c(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                     in_stack_00000028,0);
        if ((in_stack_00000028 == 0) ||
           (FUN_07a85f24(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                         in_stack_00000020,in_stack_00000028,0), lVar2 == 0))
        goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
        pcVar4 = *(code **)(unaff_x29 + 0x280);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68();
          *(code **)(unaff_x29 + 0x280) = pcVar4;
        }
        uVar1 = (*pcVar4)(lVar2);
      } while ((uVar1 & 1) != 0);
      pcVar4 = *(code **)(unaff_x23 + 0x278);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
        *(code **)(unaff_x23 + 0x278) = pcVar4;
      }
      (*pcVar4)(lVar2,1);
      if (in_stack_00000028 == 0) {
OVRPlugin__GetAdaptiveGPUPerformanceScale:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      unaff_x26 = in_stack_00000028;
    } while (DAT_086f1ee0 != (code *)0x0);
  } while( true );
}


