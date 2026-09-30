/*
FUNCTION_NAME: OVRAnchor$$CreateSpatialAnchorAsync
ENTRY_POINT: 04ee7cf8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRAnchor__CreateSpatialAnchorAsync(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  
  FUN_02b3c81c(System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo);
  FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_UI_PointerHitData_var);
  *(undefined1 *)(unaff_x22 + 0x630) = 1;
  lVar4 = *(long *)(unaff_x19 + 0x1a0);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= unaff_w21) {
LAB_04ee7f48:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)unaff_w21 * 8 + 0x20);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x10) != '\0') {
        return;
      }
      if (*(long *)(unaff_x19 + 0x1a8) != 0) {
        FUN_04ee8144(*(long *)(unaff_x19 + 0x1a8),unaff_w21,*(undefined8 *)(unaff_x19 + 0x1b0));
        lVar6 = *(long *)(unaff_x19 + 0x1a8);
        if (lVar6 != 0) {
          FUN_04eea4b8(lVar6,unaff_w21,0);
          uVar2 = FUN_04eea7e4(unaff_s10,unaff_s9,lVar6);
          if ((uVar2 & 1) != 0) {
            return;
          }
          if (*(long *)(unaff_x19 + 0x1a8) != 0) {
            uVar2 = FUN_04ee82b4(unaff_s10,unaff_s9,*(long *)(unaff_x19 + 0x1a8),unaff_w21,
                                 *(undefined8 *)(unaff_x19 + 0x1b0),
                                 *(undefined8 *)(unaff_x19 + 0x1b8));
            if ((uVar2 & 1) == 0) {
              return;
            }
            *(undefined4 *)(lVar4 + 0x2c) = 0;
            *(undefined2 *)(lVar4 + 0x10) = 0x101;
            if (*(long *)(unaff_x19 + 0x1a8) != 0) {
              FUN_04ee860c(*(long *)(unaff_x19 + 0x1a8),*(undefined8 *)(lVar4 + 0x18),
                           *(undefined8 *)(lVar4 + 0x20),1);
              if (*(long *)(lVar4 + 0x18) != 0) {
                lVar6 = FUN_02b3c908(*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_UI_PointerHitData_var,
                                     *(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18));
                lVar5 = *(long *)(lVar4 + 0x18);
                if (lVar5 != 0) {
                  uVar2 = 0;
                  lVar7 = 0x20;
                  while ((long)uVar2 < (long)(int)*(uint *)(lVar5 + 0x18)) {
                    if (*(long *)(unaff_x19 + 0x1a8) == 0) goto LAB_04ee7f28;
                    if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_04ee7f48;
                    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10);
                    if ((lVar3 == 0) ||
                       (FUN_04f91cec(&stack0x00000020 + 4,lVar3,
                                     *(undefined4 *)(lVar5 + uVar2 * 4 + 0x20),0), lVar6 == 0))
                    goto LAB_04ee7f28;
                    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_04ee7f48;
                    puVar1 = (undefined8 *)(lVar6 + lVar7);
                    lVar7 = lVar7 + 0x1c;
                    uVar2 = uVar2 + 1;
                    *(undefined4 *)(puVar1 + 3) = uStack000000000000003c;
                    puVar1[2] = CONCAT44(uStack0000000000000038,uStack0000000000000034);
                    puVar1[1] = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
                    *puVar1 = in_stack_00000020._4_8_;
                    lVar5 = *(long *)(lVar4 + 0x18);
                    if (lVar5 == 0) goto LAB_04ee7f28;
                  }
                  if (*(int *)(*(long *)System_Action<OVRPlugin_BoundaryVisibility>_TypeInfo + 0xe4)
                      == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  uVar8 = FUN_04f1e218(lVar6,0);
                  lVar6 = *(long *)(lVar4 + 0x18);
                  *(undefined4 *)(lVar4 + 0x28) = uVar8;
                  if (lVar6 != 0) {
                    uVar2 = 0;
                    goto LAB_04ee7eb4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_04ee7f28;
  while( true ) {
    lVar7 = *(long *)(unaff_x19 + 0x1b0);
    uVar8 = *(undefined4 *)(lVar6 + uVar2 * 4 + 0x20);
    FUN_04f91b7c(&stack0x00000020 + 4,lVar5,uVar8,0);
    if (lVar7 == 0) break;
    FUN_04f91bbc(lVar7,uVar8);
    lVar6 = *(long *)(lVar4 + 0x18);
    uVar2 = uVar2 + 1;
    if (lVar6 == 0) break;
LAB_04ee7eb4:
    if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar2) {
      return;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_04ee7f48;
    if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
       (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10), lVar5 == 0)) break;
  }
LAB_04ee7f28:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


