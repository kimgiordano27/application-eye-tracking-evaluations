/*
FUNCTION_NAME: OVRGLTFAnimatinonNode$$UpdatePose
ENTRY_POINT: 05619f90
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRGLTFAnimatinonNode__UpdatePose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  
  uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar9 = *(undefined8 *)System_Func<KeyValuePair<string,_SessionProperty>,_DataObject>_TypeInfo;
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar9 = FUN_054f73b4(uVar9,0);
  FUN_0561a6c8(uVar9,uVar8,uVar9);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar8 = FUN_054f73b4(*(undefined8 *)
                        System_Func<KeyValuePair<string,_JsonParser_JsonValue>,_string>_TypeInfo,0);
  FUN_0561a6c8(uVar8,uVar9,uVar8);
  FUN_0561aa70();
  OVRGLTFAnimatinonNode___cctor();
  if (*unaff_x21 != 0) {
    in_stack_00000040 = *(undefined4 *)(*unaff_x21 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x19 + 0x30);
    in_stack_00000030 =
         *(undefined8 *)System_Func<KeyValuePair<string,_SessionProperty>,_string>_TypeInfo;
    in_stack_00000038 = 0xffffffffffffffff;
    uVar8 = FUN_0551e574(&stack0x00000030,0);
    uVar3 = FUN_0561b010(uVar8,uVar9,uVar8);
    if (*unaff_x21 != 0) {
      in_stack_00000028 = *(undefined4 *)(*unaff_x21 + 0x24);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x38);
      in_stack_00000018 = *(undefined8 *)System_Func<KeyValuePair<string,_string>,_string>_TypeInfo;
      in_stack_00000020 = 0xffffffffffffffff;
      uVar8 = FUN_0551e574(&stack0x00000018,0);
      uVar4 = FUN_0561b010(uVar8,uVar9,uVar8);
      if (*unaff_x21 != 0) {
        uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
        uVar8 = FUN_0551e574();
        uVar5 = FUN_0561b010(uVar8,uVar9,uVar8);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x138);
          if (lVar6 != 0) {
            FUN_06363784(lVar6,0);
            if ((*(long *)(unaff_x19 + 0x38) != 0) &&
               (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x138), lVar6 != 0)) {
              FUN_06363784(lVar6,0);
              if ((*(long *)(unaff_x19 + 0x40) != 0) &&
                 (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x138), lVar6 != 0)) {
                FUN_06363784(lVar6,0);
                if ((*(long *)(unaff_x19 + 0x48) != 0) &&
                   (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x138), lVar6 != 0)) {
                  FUN_06363784(lVar6,0);
                  if (*(long *)(unaff_x19 + 0x30) != 0) {
                    FUN_0643c63c(*(long *)(unaff_x19 + 0x30),uVar3,0);
                    if (*(long *)(unaff_x19 + 0x38) != 0) {
                      FUN_0643c63c(*(long *)(unaff_x19 + 0x38),uVar4,0);
                      if (*(long *)(unaff_x19 + 0x40) != 0) {
                        FUN_0643c63c(*(long *)(unaff_x19 + 0x40),uVar5,0);
                        if (*unaff_x21 != 0) {
                          lVar6 = *(long *)(*unaff_x21 + 0x58);
                          uVar8 = 0;
                          if (lVar6 != 0) {
                            FUN_04169960(lVar6,0,*(undefined8 *)
                                                  System_Func<KeyValuePair<string,_object>,_string>_TypeInfo
                                        );
                            uVar8 = extraout_x1;
                          }
                          uVar7 = FUN_054e5e7c(uVar8,&stack0x0000004c,0);
                          if ((uVar7 & 1) != 0) {
                            lVar6 = *(long *)(unaff_x19 + 0x48);
                            uVar8 = FUN_054e5768(&stack0x0000004c,0);
                            uVar3 = FUN_0561b010(uVar8,lVar6,uVar8);
                            if (lVar6 == 0) goto LAB_0561a340;
                            FUN_0643c63c(lVar6,uVar3,0);
                          }
                          puVar1 = PTR_DAT_069fc8f0;
                          if (*(long *)(unaff_x19 + 0x30) != 0) {
                            lVar6 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x138);
                            uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc8f0);
                            FUN_0494d130();
                            puVar2 = PTR_DAT_069fc8f8;
                            if (lVar6 != 0) {
                              FUN_0494fa18(lVar6,uVar8,*(undefined8 *)PTR_DAT_069fc8f8);
                              if (*(long *)(unaff_x19 + 0x38) != 0) {
                                lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x138);
                                uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
                                FUN_0494d130();
                                if (lVar6 != 0) {
                                  FUN_0494fa18(lVar6,uVar8,*(undefined8 *)puVar2);
                                  if (*(long *)(unaff_x19 + 0x40) != 0) {
                                    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x40) + 0x138);
                                    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
                                    FUN_0494d130();
                                    if (lVar6 != 0) {
                                      FUN_0494fa18(lVar6,uVar8,*(undefined8 *)puVar2);
                                      if ((*(long *)(unaff_x19 + 0x50) != 0) &&
                                         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x118),
                                         lVar6 != 0)) {
                                        FUN_06363784(lVar6,0);
                                        if (*(long *)(unaff_x19 + 0x50) != 0) {
                                          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x118);
                                          uVar8 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc8e8
                                                                    );
                                          FUN_0494cf14();
                                          if (lVar6 != 0) {
                                            FUN_0494eb44(lVar6,uVar8,*(undefined8 *)PTR_DAT_069fc900
                                                        );
                                            if ((*unaff_x21 != 0) &&
                                               (*(long *)(unaff_x19 + 0x50) != 0)) {
                                              FUN_0662c300(*(long *)(unaff_x19 + 0x50),
                                                           *(undefined1 *)(*unaff_x21 + 0x54),0);
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
LAB_0561a340:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


