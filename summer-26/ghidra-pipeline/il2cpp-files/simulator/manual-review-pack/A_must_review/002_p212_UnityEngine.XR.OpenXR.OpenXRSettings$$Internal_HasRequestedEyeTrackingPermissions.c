/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_HasRequestedEyeTrackingPermissions
ENTRY_POINT: 02ef9804
PROGRAM: simulator-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_14;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  long unaff_x25;
  undefined4 uVar7;
  long in_stack_00000028;
  
  FUN_0308a9e0();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_02ef99bc;
    lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
    if (lVar4 != 0) {
      lVar6 = *(long *)(unaff_x19 + 0x30);
      uVar2 = FUN_01b5eed0(lVar4,*(undefined8 *)PTR_DAT_034c6ec8);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) {
LAB_02ef99bc:
                    /* WARNING: Subroutine does not return */
          FUN_018c4b04();
        }
        *(undefined8 *)(lVar6 + unaff_x25 * 8 + 0x20) = uVar2;
        puVar1 = PTR_DAT_03499cd8;
        uVar7 = DAT_009cf868;
        lVar4 = *(long *)(unaff_x19 + 0x30);
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_02ef99bc;
          lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
          if (lVar4 != 0) {
            FUN_0305c38c(DAT_009cf868,lVar4,0);
            FUN_0305c304(uVar7,lVar4,0);
            lVar4 = *(long *)puVar1;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_018cd5b0();
              lVar4 = *(long *)puVar1;
            }
            if (unaff_x21 != 0) {
              lVar4 = **(long **)(lVar4 + 0xb8);
              uVar7 = FUN_0308a1c8();
              if (lVar4 != 0) {
                if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_02ef99bc;
                *(undefined4 *)(lVar4 + 0x30) = param_2;
                *(undefined4 *)(lVar4 + 0x34) = param_3;
                *(undefined4 *)(lVar4 + 0x20) = uVar7;
                *(undefined4 *)(lVar4 + 0x24) = param_2;
                *(undefined4 *)(lVar4 + 0x28) = param_3;
                *(undefined4 *)(lVar4 + 0x2c) = uVar7;
                lVar4 = *(long *)(unaff_x19 + 0x30);
                if (lVar4 != 0) {
                  if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_02ef99bc;
                  lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
                  if (lVar4 != 0) {
                    FUN_0305c924(lVar4,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
                    lVar4 = *(long *)(unaff_x19 + 0x20);
                    if (lVar4 != 0) {
                      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) goto LAB_02ef99bc;
                      lVar4 = *(long *)(lVar4 + unaff_x25 * 8 + 0x20);
                      if (lVar4 != 0) {
                        uVar3 = FUN_01b601ec(lVar4,&stack0x00000028,*(undefined8 *)PTR_DAT_034c6ed0)
                        ;
                        lVar4 = in_stack_00000028;
                        if ((uVar3 & 1) != 0) {
                          plVar5 = *(long **)(unaff_x19 + 0x38);
                          if (plVar5 == (long *)0x0) goto LAB_02ef99b8;
                          if ((in_stack_00000028 != 0) &&
                             (lVar6 = thunk_FUN_018af234(in_stack_00000028,
                                                         *(undefined8 *)(*plVar5 + 0x40)),
                             lVar6 == 0)) {
                            uVar2 = thunk_FUN_01867f60();
                    /* WARNING: Subroutine does not return */
                            FUN_018c49d0(uVar2,0);
                          }
                          if (*(uint *)(plVar5 + 3) <= unaff_w20) goto LAB_02ef99bc;
                          plVar5[unaff_x25 + 4] = lVar4;
                        }
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
LAB_02ef99b8:
                    /* WARNING: Subroutine does not return */
  FUN_018c4afc();
}


