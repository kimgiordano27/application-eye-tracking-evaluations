/*
FUNCTION_NAME: OVRPlugin$$AddCustomMetadata
ENTRY_POINT: 06ac2d04
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


void OVRPlugin__AddCustomMetadata(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  ulong in_x9;
  int *in_x10;
  long unaff_x19;
  int unaff_w20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
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
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138);
      goto LAB_06ac2d34;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_0338f71c(unaff_x27,param_3,9);
LAB_06ac2d34:
        uVar3 = (*(code *)*puVar2)(unaff_x27,unaff_w20,&stack0x00000008,puVar2[1]);
        if ((uVar3 & 1) == 0) goto LAB_06ac2e04;
        if (in_stack_00000028 == 0) {
OVRPlugin__GetAdaptiveGPUPerformanceScale:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d3c();
        }
        FUN_07a85e8c(uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                     in_stack_00000028,0);
        if ((in_stack_00000028 == 0) ||
           (FUN_07a85f24(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                         in_stack_00000020,in_stack_00000028,0), unaff_x26 == 0))
        goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
        pcVar4 = *(code **)(unaff_x29 + 0x280);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)FUN_033d1b68();
          *(code **)(unaff_x29 + 0x280) = pcVar4;
        }
        uVar3 = (*pcVar4)(unaff_x26);
        if ((uVar3 & 1) == 0) {
          pcVar4 = *(code **)(unaff_x23 + 0x278);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
            *(code **)(unaff_x23 + 0x278) = pcVar4;
          }
          (*pcVar4)(unaff_x26,1);
          lVar1 = in_stack_00000028;
          if (in_stack_00000028 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
          if (DAT_086f1ee0 == (code *)0x0) {
            DAT_086f1ee0 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::WakeUp()");
          }
          (*DAT_086f1ee0)(lVar1);
        }
        while( true ) {
          do {
            unaff_w20 = unaff_w20 + 1;
            if (unaff_w20 == 0x13) {
              return;
            }
            uVar3 = FUN_06ac2164();
            lVar1 = in_stack_00000028;
          } while ((uVar3 & 1) == 0);
          if (in_stack_00000028 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
          pcVar4 = *(code **)(unaff_x28 + 400);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68();
            *(code **)(unaff_x28 + 400) = pcVar4;
          }
          unaff_x26 = (*pcVar4)(lVar1);
          if (*(char *)(unaff_x19 + 0x80) != '\0') break;
LAB_06ac2e04:
          if (unaff_x26 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
          pcVar4 = *(code **)(unaff_x29 + 0x280);
          if (pcVar4 == (code *)0x0) {
            pcVar4 = (code *)FUN_033d1b68();
            *(code **)(unaff_x29 + 0x280) = pcVar4;
          }
          uVar3 = (*pcVar4)(unaff_x26);
          lVar1 = in_stack_00000028;
          if ((uVar3 & 1) != 0) {
            if (in_stack_00000028 == 0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
            pcVar4 = *(code **)(unaff_x25 + 0xed0);
            if (pcVar4 == (code *)0x0) {
              pcVar4 = (code *)FUN_033d1b68("UnityEngine.Rigidbody::Sleep()");
              *(code **)(unaff_x25 + 0xed0) = pcVar4;
            }
            (*pcVar4)(lVar1);
            pcVar4 = *(code **)(unaff_x23 + 0x278);
            if (pcVar4 == (code *)0x0) {
              pcVar4 = (code *)FUN_033d1b68("UnityEngine.GameObject::SetActive(System.Boolean)");
              *(code **)(unaff_x23 + 0x278) = pcVar4;
            }
            (*pcVar4)(unaff_x26,0);
          }
        }
        unaff_x27 = *(long **)(unaff_x19 + 0x38);
        if (unaff_x27 == (long *)0x0) goto OVRPlugin__GetAdaptiveGPUPerformanceScale;
        param_1 = *unaff_x27;
        param_3 = *(long *)(unaff_x24 + 0xa30);
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


