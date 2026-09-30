/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$HookGetInstanceProcAddr
ENTRY_POINT: 06969e78
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__HookGetInstanceProcAddr(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  undefined4 uVar8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  while( true ) {
    fVar5 = (float)(*in_x9)(param_1,param_2);
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (lVar4 == 0) break;
    fVar5 = (unaff_s8 * unaff_s10) / fVar5;
    fVar6 = unaff_s11;
    if (fVar5 <= unaff_s11) {
      fVar6 = fVar5;
    }
    fVar7 = unaff_s9;
    if (0.0 <= fVar5) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(lVar4 + 0xa8) + (unaff_s12 + unaff_s13) * fVar7 * *(float *)(lVar4 + 0x7c);
    fVar5 = unaff_s11;
    if (fVar6 <= unaff_s11) {
      fVar5 = fVar6;
    }
    fVar7 = unaff_s9;
    if (0.0 <= fVar6) {
      fVar7 = fVar5;
    }
    fVar7 = *(float *)(unaff_x20 + 0x24) * fVar7;
    fVar5 = *(float *)(unaff_x20 + 0x38);
    if (fVar7 <= *(float *)(unaff_x20 + 0x38)) {
      fVar5 = fVar7;
    }
    fVar6 = unaff_s9;
    if (0.0 <= fVar7) {
      fVar6 = fVar5;
    }
    do {
      do {
        if ((*(long *)(unaff_x20 + 0x60) == 0) ||
           (lVar4 = FUN_04de82e0(*(long *)(unaff_x20 + 0x60),unaff_w21,*unaff_x27), lVar4 == 0))
        goto LAB_06969f7c;
        FUN_06968960(fVar6,*(undefined4 *)(unaff_x19 + 0x28),lVar4,*(undefined4 *)(unaff_x22 + 0x70)
                    );
        unaff_w21 = unaff_w21 + 1;
        if (unaff_w24 == unaff_w21) {
          uVar8 = *(undefined4 *)(unaff_x19 + 0x28);
          uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487fd0);
          FUN_07ca4ee0(uVar8,uVar3,0);
          *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
          thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x18),uVar3);
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return;
        }
        if ((((*(long *)(unaff_x20 + 0x10) == 0) ||
             (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0xe8), lVar4 == 0)) ||
            (lVar4 = *(long *)(lVar4 + 0x58), lVar4 == 0)) ||
           (unaff_x22 = FUN_04de82e0(lVar4,unaff_w21,*unaff_x25), unaff_x22 == 0))
        goto LAB_06969f7c;
        lVar4 = *(long *)(unaff_x22 + 0x78);
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar1 = FUN_07c9c218(lVar4,0,0);
        fVar6 = 0.0;
      } while ((uVar1 & 1) == 0);
      if (lVar4 == 0) goto LAB_06969f7c;
    } while (*(char *)(lVar4 + 0x98) == '\0');
    plVar2 = *(long **)(unaff_x22 + 0x80);
    if (plVar2 == (long *)0x0) break;
    fVar5 = (float)(**(code **)(*plVar2 + 0x528))(plVar2,*(undefined8 *)(*plVar2 + 0x530));
    if (*(long *)(unaff_x20 + 0x10) == 0) break;
    plVar2 = *(long **)(unaff_x22 + 0x80);
    fVar5 = fVar5 - *(float *)(*(long *)(unaff_x20 + 0x10) + 0x108);
    unaff_s12 = unaff_s9;
    if (0.0 <= fVar5) {
      unaff_s12 = fVar5;
    }
    if (plVar2 == (long *)0x0) break;
    fVar5 = (float)(**(code **)(*plVar2 + 0x4e8))(plVar2,*(undefined8 *)(*plVar2 + 0x4f0));
    if (*(long *)(unaff_x20 + 0x10) == 0) break;
    plVar2 = *(long **)(unaff_x22 + 0x80);
    fVar5 = fVar5 - *(float *)(*(long *)(unaff_x20 + 0x10) + 0x10c);
    unaff_s13 = unaff_s9;
    if (0.0 <= fVar5) {
      unaff_s13 = fVar5;
    }
    if (plVar2 == (long *)0x0) break;
    unaff_s8 = (float)(**(code **)(*plVar2 + 0x2b8))(plVar2,*(undefined8 *)(*plVar2 + 0x2c0));
    param_1 = *(long **)(unaff_x22 + 0x80);
    if (param_1 == (long *)0x0) break;
    in_x9 = *(code **)(*param_1 + 0x2c8);
    param_2 = *(undefined8 *)(*param_1 + 0x2d0);
  }
LAB_06969f7c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


