/*
FUNCTION_NAME: OVRPlugin$$GetTrackerFrustum
ENTRY_POINT: 076c6018
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerFrustum(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool in_ZR;
  long lVar3;
  undefined8 uVar4;
  undefined4 in_w9;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(undefined4 *)(param_1 + 0x20) = in_w9;
  if (!in_ZR) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    *(undefined4 *)(param_1 + 0x24) = 0x15;
    if (2 < uVar1) {
      *(long *)(unaff_x19 + 0x30) = param_1;
      lVar3 = FUN_040316d0(*unaff_x21,2);
      if (lVar3 == 0) {
LAB_076c6230:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if ((*(int *)(lVar3 + 0x18) != 0) &&
         (*(undefined4 *)(lVar3 + 0x20) = 0x13, *(int *)(lVar3 + 0x18) != 1)) {
        *(undefined4 *)(lVar3 + 0x24) = 0x16;
        if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffffc) != 0) {
          *(long *)(unaff_x19 + 0x38) = lVar3;
          lVar3 = FUN_040316d0(*unaff_x21,2);
          if (lVar3 == 0) goto LAB_076c6230;
          if ((*(int *)(lVar3 + 0x18) != 0) &&
             (*(undefined4 *)(lVar3 + 0x20) = 0x13, *(int *)(lVar3 + 0x18) != 1)) {
            uVar1 = *(uint *)(unaff_x19 + 0x18);
            *(undefined4 *)(lVar3 + 0x24) = 0x17;
            if (4 < uVar1) {
              *(long *)(unaff_x19 + 0x40) = lVar3;
              puVar2 = PTR_DAT_08fad9a0;
              uVar4 = *unaff_x22;
              *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
              lVar3 = FUN_040316d0(uVar4,5);
              uVar4 = FUN_040316d0(*unaff_x21,4);
              FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
              if (lVar3 == 0) goto LAB_076c6230;
              if (*(int *)(lVar3 + 0x18) != 0) {
                *(undefined8 *)(lVar3 + 0x20) = uVar4;
                puVar2 = PTR_DAT_08fad9f0;
                uVar4 = FUN_040316d0(*unaff_x21,4);
                FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar3 + 0x28) = uVar4;
                  puVar2 = PTR_DAT_08fad998;
                  uVar4 = FUN_040316d0(*unaff_x21,4);
                  FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                  if (2 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x30) = uVar4;
                    puVar2 = PTR_DAT_08fad9a8;
                    uVar4 = FUN_040316d0(*unaff_x21,4);
                    FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar3 + 0x38) = uVar4;
                      puVar2 = PTR_DAT_08fad9c0;
                      uVar4 = FUN_040316d0(*unaff_x21,4);
                      FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                      if (4 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x40) = uVar4;
                        puVar2 = PTR_DAT_08fad9f8;
                        uVar4 = *unaff_x21;
                        *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = lVar3;
                        uVar4 = FUN_040316d0(uVar4,5);
                        FUN_0740c2a4(uVar4,*(undefined8 *)puVar2,0);
                        *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28) = uVar4;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04031894();
}


