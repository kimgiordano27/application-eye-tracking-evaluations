/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorLocalStorageManagerBuildingBlock$$RemoveAnchorFromLocalStorage
ENTRY_POINT: 0142db90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_BuildingBlocks_SpatialAnchorLocalStorageManagerBuildingBlock__RemoveAnchorFromLocalStorage
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined4 in_stack_00000008;
  
  lVar4 = thunk_FUN_00d6225c(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar4 != 0) {
    if ((int)unaff_x22[3] != 0) {
      unaff_x22[4] = *unaff_x23;
      if (*(long *)(unaff_x19 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      in_stack_00000008 = *(undefined4 *)(*(long *)(unaff_x19 + 0x98) + 0x18);
      lVar4 = FUN_0176eb1c(&stack0x00000008,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
      goto LAB_0142de9c;
      puVar1 = Method_UnityEngine_GameObject_AddComponent<ScrollRect>__;
      uVar3 = *(uint *)(unaff_x22 + 3);
      if (1 < uVar3) {
        unaff_x22[5] = lVar4;
        lVar4 = *(long *)puVar1;
        if (lVar4 != 0) {
          lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40));
          if (lVar4 == 0) goto LAB_0142de9c;
          uVar3 = *(uint *)(unaff_x22 + 3);
        }
        if (2 < uVar3) {
          unaff_x22[6] = *(long *)puVar1;
          if (unaff_x20 == 0) {
            in_stack_00000008 = 0;
          }
          else {
            in_stack_00000008 = *(undefined4 *)(unaff_x20 + 0x18);
          }
          lVar4 = FUN_0176eb1c(&stack0x00000008,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
          goto LAB_0142de9c;
          puVar1 = PTR_DAT_033f0e50;
          uVar3 = *(uint *)(unaff_x22 + 3);
          if (3 < uVar3) {
            unaff_x22[7] = lVar4;
            lVar4 = *(long *)puVar1;
            if (lVar4 != 0) {
              lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40));
              if (lVar4 == 0) goto LAB_0142de9c;
              uVar3 = *(uint *)(unaff_x22 + 3);
            }
            if (4 < uVar3) {
              unaff_x22[8] = *(long *)puVar1;
              if (unaff_x21 == 0) {
                in_stack_00000008 = 0;
              }
              else {
                in_stack_00000008 = *(undefined4 *)(unaff_x21 + 0x18);
              }
              lVar4 = FUN_0176eb1c(&stack0x00000008,0);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0))
              goto LAB_0142de9c;
              puVar1 = 
              Method_Oculus_Interaction_DistanceReticles_ReticleGhostDrawer_<Start>b__18_0__;
              uVar3 = *(uint *)(unaff_x22 + 3);
              if (5 < uVar3) {
                unaff_x22[9] = lVar4;
                lVar4 = *(long *)puVar1;
                if (lVar4 != 0) {
                  lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40));
                  if (lVar4 == 0) goto LAB_0142de9c;
                  uVar3 = *(uint *)(unaff_x22 + 3);
                }
                puVar2 = StringLiteral_9958;
                if (6 < uVar3) {
                  unaff_x22[10] = *(long *)puVar1;
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  lVar4 = FUN_016f5f58(&stack0x0000000c,0);
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)),
                     lVar5 == 0)) goto LAB_0142de9c;
                  puVar1 = System_Collections_Generic_IEnumerator<ShapeRecognizer>_TypeInfo;
                  uVar3 = *(uint *)(unaff_x22 + 3);
                  if (7 < uVar3) {
                    unaff_x22[0xb] = lVar4;
                    lVar4 = *(long *)puVar1;
                    if (lVar4 != 0) {
                      lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40));
                      if (lVar4 == 0) goto LAB_0142de9c;
                      uVar3 = *(uint *)(unaff_x22 + 3);
                    }
                    if (8 < uVar3) {
                      unaff_x22[0xc] = *(long *)puVar1;
                      lVar4 = FUN_0176eb1c(unaff_x19 + 0xa0,0);
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x22 + 0x40)),
                         lVar5 == 0)) goto LAB_0142de9c;
                      puVar1 = Method_System_Data_SqlTypes_SqlMoney_op_UnaryNegation__;
                      if (9 < *(uint *)(unaff_x22 + 3)) {
                        unaff_x22[0xd] = lVar4;
                        uVar6 = FUN_01600844();
                        lVar5 = *(long *)puVar1;
                        lVar4 = *(long *)(lVar5 + 0x38);
                        if (lVar4 == 0) {
                          FUN_00d59478(lVar5);
                          lVar4 = *(long *)(lVar5 + 0x38);
                        }
                        lVar4 = *(long *)(lVar4 + 0x10);
                        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                          lVar4 = FUN_00d5941c();
                        }
                        if (*(int *)(lVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
                        if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
                          lVar4 = FUN_00d5941c();
                        }
                        FUN_013f38b0(uVar6,**(undefined8 **)(lVar4 + 0xb8),0);
                        uVar3 = FUN_0142ed58();
                        *(undefined4 *)(unaff_x19 + 0x10) = 1;
                        return uVar3 & 1;
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
    FUN_00da5194();
  }
LAB_0142de9c:
  uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,0);
}


