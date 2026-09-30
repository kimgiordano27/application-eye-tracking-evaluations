/*
FUNCTION_NAME: FUN_027861a8
ENTRY_POINT: 027861a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_027861a8(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 auVar8 [16];
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_00000120;
  undefined4 uStack0000000000000124;
  undefined4 in_stack_00000128;
  undefined4 uStack000000000000012c;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  
  in_stack_00000120 = (*(code *)*param_1)();
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
        goto LAB_02786208;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
LAB_02786208:
  uStack0000000000000124 = (*(code *)*puVar3)();
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
        goto UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_pressure;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_pressure:
  in_stack_00000128 = (*(code *)*puVar3)();
  lVar5 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_radiusVariance;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_00d59724();
UnityEngine_UIElements_PanelEventHandler_PointerEvent__set_radiusVariance:
  uStack000000000000012c = (*(code *)*puVar3)();
  if (*(long *)(unaff_x19 + 0x160) != 0) {
    in_stack_00000158 =
         FUN_02826878(*(undefined8 *)(unaff_x19 + 0x10),
                      *(undefined8 *)(*(long *)(unaff_x19 + 0x160) + 0x178),0);
    if (*(long *)(unaff_x19 + 0x160) != 0) {
      in_stack_00000160 =
           FUN_02826878(*(undefined8 *)(unaff_x19 + 0x10),
                        *(undefined8 *)(*(long *)(unaff_x19 + 0x160) + 0x180),0);
      if (*(long *)(unaff_x19 + 0x160) != 0) {
        in_stack_00000168 =
             FUN_02826878(*(undefined8 *)(unaff_x19 + 0x10),
                          *(undefined8 *)(*(long *)(unaff_x19 + 0x160) + 0x188),0);
        if (*(long *)(unaff_x19 + 0x160) != 0) {
          in_stack_00000170 =
               FUN_02826878(*(undefined8 *)(unaff_x19 + 0x10),
                            *(undefined8 *)(*(long *)(unaff_x19 + 0x160) + 400),0);
          if ((*(long *)(unaff_x19 + 0x160) != 0) &&
             (plVar4 = (long *)FUN_0274aad0(*(long *)(unaff_x19 + 0x160),0), plVar4 != (long *)0x0))
          {
            lVar5 = *plVar4;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    *(long *)
                     Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                   ) {
                  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                  goto LAB_027863b8;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_00d59724(plVar4,*(long *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                                  ,2);
LAB_027863b8:
            iVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            puVar1 = 
            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
            ;
            if (iVar2 == 1) {
              lVar5 = *(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
              ;
              if (*(int *)(lVar5 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar5 = *(long *)puVar1;
              }
              auVar8 = *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 0x18);
            }
            else {
              auVar8 = NEON_fmov(0x3f800000,4);
            }
            in_stack_000000d8 = auVar8._8_8_;
            in_stack_000000d0 = auVar8._0_8_;
            memcpy(&stack0x00000178,&stack0x000000c0,0xb8);
            FUN_02826bb8(*(undefined8 *)(unaff_x19 + 0x160),&stack0x000001e8,&stack0x00000200,
                         &stack0x000001f0,&stack0x000001f8,0);
            memcpy(&stack0x00000008,&stack0x00000178,0xb8);
            FUN_02784af0();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


