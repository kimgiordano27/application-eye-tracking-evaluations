/*
FUNCTION_NAME: Sirenix.Serialization.BinaryDataReader$$ReadExternalReference
ENTRY_POINT: 037dba70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Sirenix_Serialization_BinaryDataReader__ReadExternalReference(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool in_ZR;
  bool in_CY;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long unaff_x19;
  long *plVar10;
  long *unaff_x20;
  int iVar11;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined4 unaff_s9;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined1 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined1 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined1 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined1 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  byte bStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined4 uStack0000000000000098;
  byte bStack000000000000009c;
  byte in_stack_000000a0;
  undefined4 in_stack_000000a8;
  
  if (in_CY && !in_ZR) {
    unaff_x22[5] = unaff_x23;
    thunk_FUN_01f51358();
    in_stack_000000a8 = unaff_s9;
    lVar5 = thunk_FUN_01f113fc(*unaff_x25,&stack0x000000a8);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar6 == 0)) {
LAB_037dc180:
      uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,0);
    }
    if (2 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[6] = lVar5;
      thunk_FUN_01f51358(unaff_x22 + 6,lVar5);
      lVar5 = thunk_FUN_01f113fc(*unaff_x25,&stack0x000000a4);
      if ((lVar5 != 0) &&
         (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*unaff_x22 + 0x40)), lVar6 == 0))
      goto LAB_037dc180;
      if (3 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[7] = lVar5;
        thunk_FUN_01f51358(unaff_x22 + 7,lVar5);
        puVar2 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<Touch>_GetEnumerator__;
        puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
        ;
        if (unaff_x21 != 0) {
          FUN_0341a07c();
          lVar5 = *unaff_x20;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          in_stack_000000a0 = FUN_03787e38(0);
          in_stack_000000a0 = in_stack_000000a0 & 1;
          uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x000000a0);
          if (lVar5 != 0) {
            FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1302,uVar7,0);
            bStack000000000000009c = FUN_03787f08(0xffffffff,0,(undefined4 *)(unaff_x19 + 0x38),0);
            lVar5 = *(long *)(unaff_x19 + 0x30);
            bStack000000000000009c = bStack000000000000009c & 1;
            uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,(long)&stack0x00000098 + 4);
            puVar2 = StringLiteral_1294;
            if (lVar5 != 0) {
              FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1304,uVar7,0);
              uStack0000000000000098 = *(undefined4 *)(unaff_x19 + 0x38);
              lVar5 = *unaff_x20;
              uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&stack0x00000098);
              puVar3 = Method_FlashlightController_Release__;
              if (lVar5 != 0) {
                FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1307,uVar7,0);
                uStack0000000000000084 = *(undefined8 *)(unaff_x19 + 0x50);
                in_stack_00000070 = *(undefined8 *)(unaff_x19 + 0x3c);
                lVar5 = *(long *)(unaff_x19 + 0x30);
                uStack0000000000000080 =
                     (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x48) >> 0x20);
                uStack0000000000000078 = (undefined4)*(undefined8 *)(unaff_x19 + 0x44);
                uStack000000000000007c =
                     (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x44) >> 0x20);
                uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000070);
                puVar4 = StringLiteral_1300;
                if (lVar5 != 0) {
                  FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1309,uVar7,0);
                  uStack000000000000006c = *(undefined4 *)(unaff_x19 + 0x90);
                  lVar5 = *(long *)(unaff_x19 + 0x30);
                  uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,(long)&stack0x00000068 + 4);
                  if (lVar5 != 0) {
                    FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1310,uVar7,0);
                    bStack0000000000000068 =
                         FUN_03787f08(0xffffffff,1,(undefined4 *)(unaff_x19 + 0xb0),0);
                    lVar5 = *(long *)(unaff_x19 + 0x30);
                    bStack0000000000000068 = bStack0000000000000068 & 1;
                    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000068);
                    if (lVar5 != 0) {
                      FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1314,uVar7,0);
                      in_stack_00000060._4_4_ = *(undefined4 *)(unaff_x19 + 0xb0);
                      lVar5 = *unaff_x20;
                      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,(long)&stack0x00000060 + 4);
                      if (lVar5 != 0) {
                        FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1318,uVar7,0);
                        uStack0000000000000054 = *(undefined8 *)(unaff_x19 + 200);
                        in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0xb4);
                        lVar5 = *(long *)(unaff_x19 + 0x30);
                        uStack0000000000000050 =
                             (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0xc0) >> 0x20);
                        uStack0000000000000048 = (undefined4)*(undefined8 *)(unaff_x19 + 0xbc);
                        uStack000000000000004c =
                             (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0xbc) >> 0x20);
                        uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000040);
                        if (lVar5 != 0) {
                          FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1316,uVar7,0);
                          uStack000000000000003c = *(undefined4 *)(unaff_x19 + 0x108);
                          lVar5 = *(long *)(unaff_x19 + 0x30);
                          uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar4,
                                                     (long)&stack0x00000038 + 4);
                          if (lVar5 != 0) {
                            FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1311,uVar7,0);
                            uStack0000000000000038 = *(undefined1 *)(unaff_x19 + 0x178);
                            lVar5 = *(long *)(unaff_x19 + 0x30);
                            uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000038);
                            puVar2 = StringLiteral_1299;
                            if (lVar5 != 0) {
                              FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1305,uVar7,0);
                              uStack0000000000000034 = *(undefined4 *)(unaff_x19 + 0x128);
                              lVar5 = *(long *)(unaff_x19 + 0x30);
                              uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,
                                                         (long)&stack0x00000030 + 4);
                              puVar3 = Method_Unity_VisualScripting_Comparison_<Definition>b__36_3__
                              ;
                              if (lVar5 != 0) {
                                FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1308,uVar7,0);
                                uStack0000000000000030 = *(undefined4 *)(unaff_x19 + 300);
                                lVar5 = *(long *)(unaff_x19 + 0x30);
                                uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000030);
                                if (lVar5 != 0) {
                                  FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1301,uVar7,0);
                                  uStack000000000000002c = *(undefined1 *)(unaff_x19 + 0x179);
                                  lVar5 = *(long *)(unaff_x19 + 0x30);
                                  uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,
                                                             (long)&stack0x00000028 + 4);
                                  if (lVar5 != 0) {
                                    FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1320,uVar7,0);
                                    uStack0000000000000028 = *(undefined4 *)(unaff_x19 + 0x148);
                                    lVar5 = *(long *)(unaff_x19 + 0x30);
                                    uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,
                                                               &stack0x00000028);
                                    if (lVar5 != 0) {
                                      FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1321,uVar7,0);
                                      uStack0000000000000024 = *(undefined4 *)(unaff_x19 + 0x14c);
                                      lVar5 = *(long *)(unaff_x19 + 0x30);
                                      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,
                                                                 (long)&stack0x00000020 + 4);
                                      if (lVar5 != 0) {
                                        FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1319,uVar7,0
                                                    );
                                        uStack0000000000000020 = *(undefined1 *)(unaff_x19 + 0x17a);
                                        lVar5 = *(long *)(unaff_x19 + 0x30);
                                        uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,
                                                                   &stack0x00000020);
                                        if (lVar5 != 0) {
                                          FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1315,uVar7
                                                       ,0);
                                          puVar2 = StringLiteral_1297;
                                          if (*(long *)(unaff_x19 + 0x168) != 0) {
                                            uStack000000000000001c =
                                                 *(undefined4 *)
                                                  (*(long *)(unaff_x19 + 0x168) + 0x10);
                                            lVar5 = *(long *)(unaff_x19 + 0x30);
                                            uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                                                        StringLiteral_1297,
                                                                       (long)&stack0x00000018 + 4);
                                            if (lVar5 != 0) {
                                              FUN_0341944c(lVar5,*(undefined8 *)StringLiteral_1303,
                                                           uVar7,0);
                                              if (*(long *)(unaff_x19 + 0x168) != 0) {
                                                uStack0000000000000018 =
                                                     *(undefined4 *)
                                                      (*(long *)(unaff_x19 + 0x168) + 0x14);
                                                lVar5 = *(long *)(unaff_x19 + 0x30);
                                                uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,
                                                                           &stack0x00000018);
                                                if (lVar5 != 0) {
                                                  FUN_0341944c(lVar5,*(undefined8 *)
                                                                      StringLiteral_1317,uVar7,0);
                                                  uStack0000000000000014 =
                                                       *(undefined1 *)(unaff_x19 + 0x17b);
                                                  lVar5 = *(long *)(unaff_x19 + 0x30);
                                                  uVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,
                                                                             (long)&stack0x00000010
                                                                             + 4);
                                                  if (lVar5 != 0) {
                                                    FUN_0341944c(lVar5,*(undefined8 *)
                                                                        StringLiteral_1306,uVar7,0);
                                                    if (*(long *)(unaff_x19 + 0x170) != 0) {
                                                      uStack0000000000000010 =
                                                           *(undefined4 *)
                                                            (*(long *)(unaff_x19 + 0x170) + 0x10);
                                                      lVar5 = *(long *)(unaff_x19 + 0x30);
                                                      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                                                                  puVar2,&
                                                  stack0x00000010);
                                                  if (lVar5 != 0) {
                                                    FUN_0341944c(lVar5,*(undefined8 *)
                                                                        StringLiteral_1313,uVar7,0);
                                                    if (*(long *)(unaff_x19 + 0x170) != 0) {
                                                      in_stack_00000008._4_4_ =
                                                           *(undefined4 *)
                                                            (*(long *)(unaff_x19 + 0x170) + 0x14);
                                                      lVar5 = *(long *)(unaff_x19 + 0x30);
                                                      uVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                                                                  puVar3,(long)&
                                                  stack0x00000008 + 4);
                                                  if (lVar5 != 0) {
                                                    FUN_0341944c(lVar5,*(undefined8 *)
                                                                        StringLiteral_1312,uVar7,0);
                                                    puVar2 = StringLiteral_1296;
                                                    puVar1 = 
                                                  Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__
                                                  ;
                                                  lVar5 = *(long *)(unaff_x19 + 0x28);
                                                  if (lVar5 != 0) {
                                                    iVar11 = 0;
                                                    while (iVar11 < *(int *)(lVar5 + 0x18)) {
                                                      lVar5 = FUN_030f28e4(lVar5,iVar11,
                                                                           *(undefined8 *)puVar2);
                                                      if (lVar5 == 0) goto LAB_037dc0f8;
                                                      FUN_037dc18c();
                                                      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
                                                         (lVar5 = FUN_030f28e4(*(long *)(unaff_x19 +
                                                                                        0x28),iVar11
                                                                               ,*(undefined8 *)
                                                                                 puVar2), lVar5 == 0
                                                         )) goto LAB_037dc0f8;
                                                      FUN_037dc21c();
                                                      lVar5 = *(long *)(unaff_x19 + 0x28);
                                                      iVar11 = iVar11 + 1;
                                                      if (lVar5 == 0) goto LAB_037dc0f8;
                                                    }
                                                    uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
                                                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                                      thunk_FUN_01ee6d7c();
                                                    }
                                                    uVar8 = FUN_04073094(uVar7,0,0);
                                                    if ((uVar8 & 1) == 0) {
                                                      return;
                                                    }
                                                    plVar9 = *(long **)(unaff_x19 + 0x30);
                                                    if (plVar9 != (long *)0x0) {
                                                      plVar10 = *(long **)(unaff_x19 + 0x20);
                                                      uVar7 = (**(code **)(*plVar9 + 0x168))
                                                                        (plVar9,*(undefined8 *)
                                                                                 (*plVar9 + 0x170));
                                                      if (plVar10 != (long *)0x0) {
                                                        (**(code **)(*plVar10 + 0x5e8))
                                                                  (plVar10,uVar7,
                                                                   *(undefined8 *)(*plVar10 + 0x5f0)
                                                                  );
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
LAB_037dc0f8:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


