/*
FUNCTION_NAME: Sirenix.Serialization.UnitySerializationUtility.<>c$$<SerializePrefabModifications>b__33_0
ENTRY_POINT: 0383b108
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_8;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_UnitySerializationUtility_<>c__<SerializePrefabModifications>b__33_0
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0x48) = **(undefined8 **)(param_1 + 0xa30);
  thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x48));
  if (6 < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)PTR_DAT_046989c0;
    thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x50));
    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
      *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)PTR_DAT_046989d8;
      thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x58));
      if (8 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)PTR_DAT_04698a50;
        thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x60));
        if (9 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)PTR_DAT_04698a60;
          thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x68));
          if (10 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)PTR_DAT_04698a80;
            thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x70));
            if (0xb < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)PTR_DAT_046989b0;
              thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x78));
              if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)PTR_DAT_046989f8;
                thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x80));
                if (0xd < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)PTR_DAT_04698970;
                  thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x88));
                  if (0xe < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)PTR_DAT_046989e0;
                    thunk_FUN_020ccb58((undefined8 *)(unaff_x19 + 0x90));
                    if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff0) != 0) {
                      *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)PTR_DAT_04698a68;
                      thunk_FUN_020ccb58();
                      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
                      thunk_FUN_020ccb58();
                      lVar10 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x21,4);
                      if (lVar10 == 0) {
LAB_0383b7bc:
                    /* WARNING: Subroutine does not return */
                        FUN_0206154c();
                      }
                      if (*(int *)(lVar10 + 0x18) != 0) {
                        *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_04698a48;
                        thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x20));
                        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                          *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_046989a0;
                          thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x28));
                          if (2 < *(uint *)(lVar10 + 0x18)) {
                            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_04698980;
                            thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x30));
                            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                              *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)PTR_DAT_04698a00;
                              thunk_FUN_020ccb58();
                              plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
                              *plVar11 = lVar10;
                              thunk_FUN_020ccb58(plVar11,lVar10);
                              lVar10 = RootMotion_Dynamics_Muscle__get_colliders(*unaff_x21,0xc);
                              if (lVar10 == 0) goto LAB_0383b7bc;
                              if (*(int *)(lVar10 + 0x18) != 0) {
                                *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_04698a40;
                                thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x20));
                                if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                                  *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)PTR_DAT_04698a88;
                                  thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x28));
                                  if (2 < *(uint *)(lVar10 + 0x18)) {
                                    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)PTR_DAT_046989a8
                                    ;
                                    thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x30));
                                    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) != 0) {
                                      *(undefined8 *)(lVar10 + 0x38) =
                                           *(undefined8 *)PTR_DAT_04698958;
                                      thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x38));
                                      if (4 < *(uint *)(lVar10 + 0x18)) {
                                        *(undefined8 *)(lVar10 + 0x40) =
                                             *(undefined8 *)PTR_DAT_04698960;
                                        thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x40));
                                        if (5 < *(uint *)(lVar10 + 0x18)) {
                                          *(undefined8 *)(lVar10 + 0x48) =
                                               *(undefined8 *)PTR_DAT_04698a38;
                                          thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x48));
                                          if (6 < *(uint *)(lVar10 + 0x18)) {
                                            *(undefined8 *)(lVar10 + 0x50) =
                                                 *(undefined8 *)PTR_DAT_04698a08;
                                            thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x50));
                                            if ((*(uint *)(lVar10 + 0x18) & 0xfffffff8) != 0) {
                                              *(undefined8 *)(lVar10 + 0x58) =
                                                   *(undefined8 *)PTR_DAT_04698a28;
                                              thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x58));
                                              if (8 < *(uint *)(lVar10 + 0x18)) {
                                                *(undefined8 *)(lVar10 + 0x60) =
                                                     *(undefined8 *)PTR_DAT_04698a18;
                                                thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x60));
                                                if (9 < *(uint *)(lVar10 + 0x18)) {
                                                  *(undefined8 *)(lVar10 + 0x68) =
                                                       *(undefined8 *)PTR_DAT_04698968;
                                                  thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x68));
                                                  if (10 < *(uint *)(lVar10 + 0x18)) {
                                                    *(undefined8 *)(lVar10 + 0x70) =
                                                         *(undefined8 *)PTR_DAT_046989d0;
                                                    thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x70)
                                                                      );
                                                    if (0xb < *(uint *)(lVar10 + 0x18)) {
                                                      *(undefined8 *)(lVar10 + 0x78) =
                                                           *(undefined8 *)PTR_DAT_046989b8;
                                                      thunk_FUN_020ccb58();
                                                      plVar11 = (long *)(*(long *)(*unaff_x22 + 0xb8
                                                                                  ) + 0x18);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_020ccb58(plVar11,lVar10);
                                                      lVar10 = 
                                                  RootMotion_Dynamics_Muscle__get_colliders
                                                            (*unaff_x21,5);
                                                  if (lVar10 == 0) goto LAB_0383b7bc;
                                                  if (*(int *)(lVar10 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)PTR_DAT_04698a98;
                                                    thunk_FUN_020ccb58((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0
                                                       ) {
                                                      *(undefined8 *)(lVar10 + 0x28) =
                                                           *(undefined8 *)PTR_DAT_04698978;
                                                      thunk_FUN_020ccb58((undefined8 *)
                                                                         (lVar10 + 0x28));
                                                      if (2 < *(uint *)(lVar10 + 0x18)) {
                                                        *(undefined8 *)(lVar10 + 0x30) =
                                                             *(undefined8 *)PTR_DAT_04698a10;
                                                        thunk_FUN_020ccb58((undefined8 *)
                                                                           (lVar10 + 0x30));
                                                        if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc)
                                                            != 0) {
                                                          *(undefined8 *)(lVar10 + 0x38) =
                                                               *(undefined8 *)PTR_DAT_046989c8;
                                                          thunk_FUN_020ccb58((undefined8 *)
                                                                             (lVar10 + 0x38));
                                                          puVar9 = PTR_DAT_04698950;
                                                          puVar8 = PTR_DAT_04698948;
                                                          puVar7 = PTR_DAT_04698940;
                                                          puVar6 = PTR_DAT_04698938;
                                                          puVar5 = PTR_DAT_04698930;
                                                          puVar4 = PTR_DAT_046930e0;
                                                          puVar3 = PTR_DAT_046930c0;
                                                          puVar2 = PTR_DAT_04692648;
                                                          puVar1 = StringLiteral_9132;
                                                          if (4 < *(uint *)(lVar10 + 0x18)) {
                                                            *(undefined8 *)(lVar10 + 0x40) =
                                                                 *(undefined8 *)PTR_DAT_04698a20;
                                                            thunk_FUN_020ccb58();
                                                            plVar11 = (long *)(*(long *)(*unaff_x22
                                                                                        + 0xb8) +
                                                                              0x20);
                                                            *plVar11 = lVar10;
                                                            thunk_FUN_020ccb58(plVar11,lVar10);
                                                            uVar12 = 
                                                  RootMotion_Dynamics_Muscle__get_colliders
                                                            (*(undefined8 *)puVar1,0x100);
                                                  FUN_037a6ee0(uVar12,*(undefined8 *)puVar8,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x22 + 0xb8) + 0x28);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_020ccb58(puVar13,uVar12);
                                                  uVar12 = RootMotion_Dynamics_Muscle__get_colliders
                                                                     (*(undefined8 *)puVar4,0x1e);
                                                  FUN_037a6ee0(uVar12,*(undefined8 *)puVar9,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x22 + 0xb8) + 0x30);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_020ccb58(puVar13,uVar12);
                                                  uVar12 = RootMotion_Dynamics_Muscle__get_colliders
                                                                     (*(undefined8 *)puVar2,0xf);
                                                  FUN_037a6ee0(uVar12,*(undefined8 *)puVar7,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x22 + 0xb8) + 0x38);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_020ccb58(puVar13,uVar12);
                                                  uVar12 = RootMotion_Dynamics_Muscle__get_colliders
                                                                     (*(undefined8 *)puVar4,0x2a);
                                                  FUN_037a6ee0(uVar12,*(undefined8 *)puVar6,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x22 + 0xb8) + 0x40);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_020ccb58(puVar13,uVar12);
                                                  uVar12 = RootMotion_Dynamics_Muscle__get_colliders
                                                                     (*(undefined8 *)puVar3,0x15);
                                                  FUN_037a6ee0(uVar12,*(undefined8 *)puVar5,0);
                                                  puVar13 = (undefined8 *)
                                                            (*(long *)(*unaff_x22 + 0xb8) + 0x48);
                                                  *puVar13 = uVar12;
                                                  thunk_FUN_020ccb58(puVar13,uVar12);
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
  FUN_02061554();
}


