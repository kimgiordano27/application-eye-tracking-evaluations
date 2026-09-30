/*
FUNCTION_NAME: FUN_05f65918
ENTRY_POINT: 05f65918
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_21;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


ulong FUN_05f65918(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,int param_6,long param_7,long param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined8 in_stack_fffffffffffffeb0;
  undefined8 in_stack_fffffffffffffeb8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar17 = (undefined4)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  uVar18 = (undefined4)((ulong)in_stack_fffffffffffffeb8 >> 0x20);
  if ((DAT_066dd128 & 1) == 0) {
    FUN_02b3c81c(Unity_Burst_BurstCompileAttribute_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06322158);
    FUN_02b3c81c(
                Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                );
    FUN_02b3c81c(Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__);
    FUN_02b3c81c(Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    FUN_02b3c81c(
                Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                );
    DAT_066dd128 = 1;
  }
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (0x20020 < param_6) {
    uVar4 = 0;
    if (param_6 < 0x30009) {
      if (0x30004 < param_6) {
        if (param_6 < 0x30007) {
          if (param_6 == 0x30005) {
            if (*(int *)(param_8 + 4) == 4) {
              if (*(int *)(*(long *)
                            Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              iVar2 = UnityEngine_UI_Slider__set_direction(0);
            }
            else {
              iVar2 = -0x80000000;
              if (*(float *)(param_8 + 8) != INFINITY) {
                iVar2 = (int)*(float *)(param_8 + 8);
              }
            }
            if (param_5 != 0) {
              plVar6 = (long *)FUN_05deabf0(param_5,0);
              lVar7 = FUN_03f122e0(param_7 + 0x10,
                                   *(undefined8 *)
                                    Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                                  );
              if (plVar6 != (long *)0x0) {
                lVar14 = *plVar6;
                uVar17 = *(undefined4 *)(lVar7 + 0x34);
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                      puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_05f67564;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,1);
LAB_05f67564:
                UNRECOVERED_JUMPTABLE = (code *)*puVar8;
                uVar10 = puVar8[1];
                uVar4 = 0x30005;
                goto LAB_05f689e8;
              }
            }
          }
          else {
            if (param_6 != 0x30006) goto switchD_05f65a18_caseD_70005;
            if (*(int *)(param_8 + 4) == 4) {
              if (*(int *)(*(long *)
                            Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              iVar2 = FUN_05e8d524(0);
            }
            else {
              iVar2 = -0x80000000;
              if (*(float *)(param_8 + 8) != INFINITY) {
                iVar2 = (int)*(float *)(param_8 + 8);
              }
            }
            if (param_5 != 0) {
              plVar6 = (long *)FUN_05deabf0(param_5,0);
              lVar7 = FUN_03f122e0(param_7 + 0x10,
                                   *(undefined8 *)
                                    Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                                  );
              if (plVar6 != (long *)0x0) {
                lVar14 = *plVar6;
                uVar17 = *(undefined4 *)(lVar7 + 0x38);
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                      puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                      goto LAB_05f675f4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,1);
LAB_05f675f4:
                UNRECOVERED_JUMPTABLE = (code *)*puVar8;
                uVar10 = puVar8[1];
                uVar4 = 0x30006;
                goto LAB_05f689e8;
              }
            }
          }
        }
        else if (param_6 == 0x30007) {
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar17 = FUN_05e8d59c(0);
          }
          else {
            uVar17 = *(undefined4 *)(param_8 + 8);
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_05deabf0(param_5,0);
            lVar7 = FUN_03f122e0(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar18 = *(undefined4 *)(lVar7 + 0x3c);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                    puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_05f675a8;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,0);
LAB_05f675a8:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar19 = 0x30007;
              goto LAB_05f687b4;
            }
          }
        }
        else {
          if (param_6 != 0x30008) goto switchD_05f65a18_caseD_70005;
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar2 = FUN_05e8d614(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_05deabf0(param_5,0);
            lVar7 = FUN_03f122e0(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x40);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_05f6763c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,1);
LAB_05f6763c:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar4 = 0x30008;
              goto LAB_05f689e8;
            }
          }
        }
        goto LAB_05f68be0;
      }
      if (0x30002 < param_6) {
        if (param_6 == 0x30003) {
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar2 = FUN_05e8d348(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_05deabf0(param_5,0);
            lVar7 = FUN_03f122e0(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x2c);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                    goto LAB_05f67588;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f67588:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar4 = 0x30003;
              goto LAB_05f689e8;
            }
          }
        }
        else {
          if (param_6 != 0x30004) goto switchD_05f65a18_caseD_70005;
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar2 = FUN_05e8d434(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_05deabf0(param_5,0);
            lVar7 = FUN_03f122e0(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x30);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
                    goto LAB_05f67618;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,1);
LAB_05f67618:
              UNRECOVERED_JUMPTABLE = (code *)*puVar8;
              uVar10 = puVar8[1];
              uVar4 = 0x30004;
              goto LAB_05f689e8;
            }
          }
        }
        goto LAB_05f68be0;
      }
      if (param_6 == 0x30001) {
        if (*(int *)(param_8 + 4) == 4) {
          if (*(int *)(*(long *)
                        Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar2 = FUN_05e8cc94(0);
        }
        else {
          iVar2 = -0x80000000;
          if (*(float *)(param_8 + 8) != INFINITY) {
            iVar2 = (int)*(float *)(param_8 + 8);
          }
        }
        if (param_5 != 0) {
          plVar6 = (long *)FUN_05deabf0(param_5,0);
          lVar7 = FUN_03f122e0(param_7 + 0x10,
                               *(undefined8 *)
                                Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                              );
          if (plVar6 != (long *)0x0) {
            lVar14 = *plVar6;
            uVar17 = *(undefined4 *)(lVar7 + 0x18);
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                  puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                  goto LAB_05f67504;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f67504:
                    /* WARNING: Could not recover jumptable at 0x05f67550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar15 = (*(code *)*puVar8)(plVar6,0x30001,uVar17,iVar2,param_9,param_10,param_11,
                                        puVar8[1]);
            return uVar15;
          }
        }
        goto LAB_05f68be0;
      }
      if (param_6 != 0x30002) goto switchD_05f65a18_caseD_70005;
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8d0f8(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      plVar6 = (long *)FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f122e0(param_7 + 0x10,
                           *(undefined8 *)
                            Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                          );
      if (plVar6 == (long *)0x0) goto LAB_05f68be0;
      lVar14 = *plVar6;
      uVar19 = *(undefined4 *)(lVar7 + 0x24);
      uVar18 = *(undefined4 *)(lVar7 + 0x28);
      uVar21 = *(undefined4 *)(lVar7 + 0x1c);
      uVar20 = *(undefined4 *)(lVar7 + 0x20);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_05f675cc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,3);
LAB_05f675cc:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar11 = 0x30002;
LAB_05f688d0:
      uVar15 = (*UNRECOVERED_JUMPTABLE)
                         (uVar21,uVar20,uVar19,uVar18,uVar17,param_2,param_3,param_4,plVar6,uVar11,
                          param_9,param_10,param_11,uVar10);
      goto joined_r0x05f672a4;
    }
    switch(param_6) {
    case 0x70000:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8b4cc(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      puVar5 = (undefined4 *)
               FUN_03f131c0(param_7 + 0x28,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                           );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar11 = 0x70000;
      uVar20 = puVar5[2];
      uVar21 = puVar5[3];
      uVar18 = *puVar5;
      uVar19 = puVar5[1];
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      break;
    case 0x70001:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        UnityEngine_UI_Selectable__set_transition(&local_f0,0);
      }
      else {
        if (*(long *)(param_8 + 8) == 0) {
          uStack_c8 = 0;
          local_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          uVar10 = FUN_05f6a138(param_8 + 8,0);
          FUN_05dcbf3c(&local_d0,uVar10,0);
        }
        uStack_e8 = uStack_c8;
        local_f0 = local_d0;
        uStack_d8 = uStack_b8;
        uStack_e0 = uStack_c0;
      }
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      if (param_5 != 0) {
        lVar7 = FUN_05deabf0(param_5,0);
        lVar14 = FUN_03f131c0(param_7 + 0x28,
                              *(undefined8 *)
                               Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                             );
        if (lVar7 != 0) {
          uStack_108 = *(undefined8 *)(lVar14 + 0x18);
          local_110 = *(undefined8 *)(lVar14 + 0x10);
          uStack_f8 = *(undefined8 *)(lVar14 + 0x28);
          uStack_100 = *(undefined8 *)(lVar14 + 0x20);
          uStack_128 = uStack_a8;
          local_130 = local_b0;
          uStack_118 = uStack_98;
          uStack_120 = uStack_a0;
          uVar4 = FUN_02b37184(5,*(undefined8 *)PTR_DAT_06322158,lVar7,0x70001,&local_110,&local_130
                               ,param_9,param_10,param_11);
          goto switchD_05f65a18_caseD_70005;
        }
      }
      goto LAB_05f68be0;
    case 0x70002:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        auVar22 = FUN_05e8b5c8(0);
      }
      else {
        auVar22._12_4_ = 0;
        auVar22._0_12_ = *(undefined1 (*) [12])(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f131c0(param_7 + 0x28,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                           );
      if (lVar7 == 0) goto LAB_05f68be0;
      uVar19 = *(undefined4 *)(lVar14 + 0x38);
      uVar11 = *(undefined8 *)(lVar14 + 0x30);
      uVar20 = 0x70002;
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      goto LAB_05f671c0;
    case 0x70003:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        auVar22 = FUN_05e8b648(0);
      }
      else {
        auVar22._12_4_ = 0;
        auVar22._0_12_ = *(undefined1 (*) [12])(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f131c0(param_7 + 0x28,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                           );
      if (lVar7 == 0) goto LAB_05f68be0;
      uVar19 = *(undefined4 *)(lVar14 + 0x44);
      uVar11 = *(undefined8 *)(lVar14 + 0x3c);
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      uVar20 = 0x70003;
LAB_05f671c0:
      uVar4 = FUN_02b37254(0xd,uVar10,lVar7,uVar20,uVar11,uVar19,auVar22._0_8_,
                           auVar22._8_8_ & 0xffffffff,CONCAT44(uVar17,param_9),
                           CONCAT44(uVar18,param_10),param_11);
      goto switchD_05f65a18_caseD_70005;
    case 0x70004:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05e8b6c8(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        lVar7 = FUN_05deabf0(param_5,0);
        lVar14 = FUN_03f131c0(param_7 + 0x28,
                              *(undefined8 *)
                               Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                             );
        if (lVar7 != 0) {
          uVar4 = FUN_02b37318(0xe,*(undefined8 *)PTR_DAT_06322158,lVar7,0x70004,
                               *(undefined8 *)(lVar14 + 0x48),uVar10,param_9,param_10,param_11);
          goto switchD_05f65a18_caseD_70005;
        }
      }
      goto LAB_05f68be0;
    case 0x70005:
      goto switchD_05f65a18_caseD_70005;
    case 0x70006:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = UnityEngine_UI_Selectable__get_interactable(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar20 = *(undefined4 *)(lVar7 + 0x6c);
      uVar21 = *(undefined4 *)(lVar7 + 0x70);
      uVar18 = *(undefined4 *)(lVar7 + 100);
      uVar19 = *(undefined4 *)(lVar7 + 0x68);
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      uVar11 = 0x70006;
      break;
    case 0x70007:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05e8b844(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar13 = *(undefined8 *)(lVar7 + 0x74);
      uVar11 = *(undefined8 *)PTR_DAT_06322158;
      uVar12 = 0x70007;
      goto LAB_05f68020;
    case 0x70008:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05e8b8bc(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar13 = *(undefined8 *)(lVar7 + 0x7c);
      uVar11 = *(undefined8 *)PTR_DAT_06322158;
      uVar12 = 0x70008;
      goto LAB_05f68020;
    case 0x70009:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8b9ac(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar20 = *(undefined4 *)(lVar7 + 0x8c);
      uVar21 = *(undefined4 *)(lVar7 + 0x90);
      uVar18 = *(undefined4 *)(lVar7 + 0x84);
      uVar19 = *(undefined4 *)(lVar7 + 0x88);
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      uVar11 = 0x70009;
      break;
    case 0x7000a:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8baa0(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar20 = *(undefined4 *)(lVar7 + 0x9c);
      uVar21 = *(undefined4 *)(lVar7 + 0xa0);
      uVar18 = *(undefined4 *)(lVar7 + 0x94);
      uVar19 = *(undefined4 *)(lVar7 + 0x98);
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      uVar11 = 0x7000a;
      break;
    case 0x7000b:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8bb94(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar20 = *(undefined4 *)(lVar7 + 0xac);
      uVar21 = *(undefined4 *)(lVar7 + 0xb0);
      uVar18 = *(undefined4 *)(lVar7 + 0xa4);
      uVar19 = *(undefined4 *)(lVar7 + 0xa8);
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      uVar11 = 0x7000b;
      break;
    case 0x7000c:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05e8bc10(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar13 = *(undefined8 *)(lVar7 + 0xb4);
      uVar11 = *(undefined8 *)PTR_DAT_06322158;
      uVar12 = 0x7000c;
      goto LAB_05f68020;
    case 0x7000d:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = UnityEngine_UI_Selectable__IsInteractable(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar13 = *(undefined8 *)(lVar7 + 0xbc);
      uVar11 = *(undefined8 *)PTR_DAT_06322158;
      uVar12 = 0x7000d;
      goto LAB_05f68020;
    case 0x7000e:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8c7d0(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        lVar7 = FUN_05deabf0(param_5,0);
        lVar14 = FUN_03f131c0(param_7 + 0x28,
                              *(undefined8 *)
                               Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                             );
        if (lVar7 != 0) {
          uVar18 = *(undefined4 *)(lVar14 + 0xc4);
          uVar10 = 0x7000e;
          goto LAB_05f67e6c;
        }
      }
      goto LAB_05f68be0;
    case 0x7000f:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar2 = FUN_05e8c848(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) goto LAB_05f68be0;
      lVar14 = FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f131c0(param_7 + 0x28,
                           *(undefined8 *)
                            Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_StringValue__
                          );
      if (lVar14 == 0) goto LAB_05f68be0;
      uVar17 = *(undefined4 *)(lVar7 + 200);
      uVar10 = *(undefined8 *)PTR_DAT_06322158;
      uVar11 = 0x7000f;
      goto LAB_05f67b5c;
    default:
      if (param_6 != 0x30009) {
        if (param_6 == 0x3000b) {
          if (*(int *)(param_8 + 4) == 4) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            iVar2 = FUN_05e8d960(0);
          }
          else {
            iVar2 = -0x80000000;
            if (*(float *)(param_8 + 8) != INFINITY) {
              iVar2 = (int)*(float *)(param_8 + 8);
            }
          }
          if (param_5 != 0) {
            plVar6 = (long *)FUN_05deabf0(param_5,0);
            lVar7 = FUN_03f122e0(param_7 + 0x10,
                                 *(undefined8 *)
                                  Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                                );
            if (plVar6 != (long *)0x0) {
              lVar14 = *plVar6;
              uVar17 = *(undefined4 *)(lVar7 + 0x5c);
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                    puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                    goto LAB_05f68708;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f68708:
                    /* WARNING: Could not recover jumptable at 0x05f6875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar15 = (*(code *)*puVar8)(plVar6,0x3000b,uVar17,iVar2,param_9,param_10,param_11,
                                          puVar8[1]);
              return uVar15;
            }
          }
          goto LAB_05f68be0;
        }
        goto switchD_05f65a18_caseD_70005;
      }
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar2 = FUN_05e8d68c(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) goto LAB_05f68be0;
      plVar6 = (long *)FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f122e0(param_7 + 0x10,
                           *(undefined8 *)
                            Method_RoomMeshAnchor_<GenerateRoomMesh>d__15_System_Collections_IEnumerator_Reset__
                          );
      if (plVar6 == (long *)0x0) goto LAB_05f68be0;
      lVar14 = *plVar6;
      uVar17 = *(undefined4 *)(lVar7 + 0x44);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_05f68770;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f68770:
      uVar4 = 0x30001;
      goto LAB_05f68920;
    }
    uVar15 = FUN_02b37090(uVar18,uVar19,uVar20,uVar21,uVar17,param_2,param_3,param_4,3,uVar10,lVar14
                          ,uVar11,param_9,param_10,param_11);
joined_r0x05f672a4:
    if ((uVar15 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_05ded3f4(param_5,0);
      if ((uVar4 >> 3 & 1) == 0) {
        uVar4 = FUN_05ded3f4(param_5,0);
        FUN_05ded414(param_5,uVar4 | 8,0);
      }
      uVar4 = 1;
    }
    goto switchD_05f65a18_caseD_70005;
  }
  uVar4 = 0;
  switch(param_6) {
  case 0x20000:
    iVar1 = *(int *)(param_8 + 4);
    if (iVar1 == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar3 = FUN_05e8b364(0);
      iVar1 = *(int *)(param_8 + 4);
    }
    else {
      iVar3 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar3 = (int)*(float *)(param_8 + 8);
      }
    }
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar3;
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    puVar5 = (undefined4 *)
             FUN_03f11de4(param_7 + 8,
                          *(undefined8 *)
                           Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar11 = 0x20000;
    uVar17 = *puVar5;
    uVar10 = *(undefined8 *)PTR_DAT_06322158;
    goto LAB_05f67b5c;
  case 0x20001:
    iVar1 = *(int *)(param_8 + 4);
    if (iVar1 == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar3 = FUN_05e8b3dc(0);
      iVar1 = *(int *)(param_8 + 4);
    }
    else {
      iVar3 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar3 = (int)*(float *)(param_8 + 8);
      }
    }
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar3;
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar17 = *(undefined4 *)(lVar7 + 4);
    uVar10 = *(undefined8 *)PTR_DAT_06322158;
    uVar11 = 0x20001;
    goto LAB_05f67b5c;
  case 0x20002:
    iVar1 = *(int *)(param_8 + 4);
    if (iVar1 == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar3 = FUN_05e8b454(0);
      iVar1 = *(int *)(param_8 + 4);
    }
    else {
      iVar3 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar3 = (int)*(float *)(param_8 + 8);
      }
    }
    iVar2 = 0;
    if (iVar1 != 2) {
      iVar2 = iVar3;
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar11 = 0x20002;
    uVar17 = *(undefined4 *)(lVar7 + 8);
    goto LAB_05f67b50;
  case 0x20003:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_05e8b934(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f11de4(param_7 + 8,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20003;
        uVar18 = *(undefined4 *)(lVar14 + 0xc);
LAB_05f67e6c:
        uVar15 = FUN_02b373c4(uVar18,uVar17,0,*(undefined8 *)PTR_DAT_06322158,lVar7,uVar10,param_9,
                              param_10,param_11);
        return uVar15;
      }
    }
    goto LAB_05f68be0;
  case 0x20004:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_05e8ba28(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f11de4(param_7 + 8,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20004;
        uVar18 = *(undefined4 *)(lVar14 + 0x10);
        goto LAB_05f67e6c;
      }
    }
    goto LAB_05f68be0;
  case 0x20005:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_05e8bb1c(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f11de4(param_7 + 8,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20005;
        uVar18 = *(undefined4 *)(lVar14 + 0x14);
        goto LAB_05f67e6c;
      }
    }
    goto LAB_05f68be0;
  case 0x20006:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_05e8bd00(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f11de4(param_7 + 8,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x20006;
        uVar18 = *(undefined4 *)(lVar14 + 0x18);
        goto LAB_05f67e6c;
      }
    }
    goto LAB_05f68be0;
  case 0x20007:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8bd78(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20007;
    uVar13 = *(undefined8 *)(lVar7 + 0x1c);
    break;
  case 0x20008:
    goto switchD_05f65a18_caseD_70005;
  case 0x20009:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8bf68(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20009;
    uVar13 = *(undefined8 *)(lVar7 + 0x28);
    break;
  case 0x2000a:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar2 = FUN_05e8bfe0(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar11 = 0x2000a;
    uVar17 = *(undefined4 *)(lVar7 + 0x30);
    goto LAB_05f67b50;
  case 0x2000b:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_05e8c058(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f11de4(param_7 + 8,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x2000b;
        uVar18 = *(undefined4 *)(lVar14 + 0x34);
        goto LAB_05f67e6c;
      }
    }
    goto LAB_05f68be0;
  case 0x2000c:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar17 = FUN_05e8c0d0(0);
    }
    else {
      uVar17 = *(undefined4 *)(param_8 + 8);
    }
    if (param_5 != 0) {
      lVar7 = FUN_05deabf0(param_5,0);
      lVar14 = FUN_03f11de4(param_7 + 8,
                            *(undefined8 *)
                             Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__
                           );
      if (lVar7 != 0) {
        uVar10 = 0x2000c;
        uVar18 = *(undefined4 *)(lVar14 + 0x38);
        goto LAB_05f67e6c;
      }
    }
    goto LAB_05f68be0;
  case 0x2000d:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar2 = FUN_05e8c148(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar11 = 0x2000d;
    uVar17 = *(undefined4 *)(lVar7 + 0x3c);
    goto LAB_05f67b50;
  case 0x2000e:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c234(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x2000e;
    uVar13 = *(undefined8 *)(lVar7 + 0x40);
    break;
  case 0x2000f:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar2 = FUN_05e8c2ac(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar11 = 0x2000f;
    uVar17 = *(undefined4 *)(lVar7 + 0x48);
    goto LAB_05f67b50;
  case 0x20010:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c324(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20010;
    uVar13 = *(undefined8 *)(lVar7 + 0x4c);
    break;
  case 0x20011:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c410(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20011;
    uVar13 = *(undefined8 *)(lVar7 + 0x54);
    break;
  case 0x20012:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c488(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20012;
    uVar13 = *(undefined8 *)(lVar7 + 0x5c);
    break;
  case 0x20013:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c500(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20013;
    uVar13 = *(undefined8 *)(lVar7 + 100);
    break;
  case 0x20014:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c578(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20014;
    uVar13 = *(undefined8 *)(lVar7 + 0x6c);
    break;
  case 0x20015:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c5f0(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20015;
    uVar13 = *(undefined8 *)(lVar7 + 0x74);
    break;
  case 0x20016:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c668(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20016;
    uVar13 = *(undefined8 *)(lVar7 + 0x7c);
    break;
  case 0x20017:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c6e0(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20017;
    uVar13 = *(undefined8 *)(lVar7 + 0x84);
    break;
  case 0x20018:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c758(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20018;
    uVar13 = *(undefined8 *)(lVar7 + 0x8c);
    break;
  case 0x20019:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c8c0(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x20019;
    uVar13 = *(undefined8 *)(lVar7 + 0x94);
    break;
  case 0x2001a:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c938(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x2001a;
    uVar13 = *(undefined8 *)(lVar7 + 0x9c);
    break;
  case 0x2001b:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8c9b0(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x2001b;
    uVar13 = *(undefined8 *)(lVar7 + 0xa4);
    break;
  case 0x2001c:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8ca28(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x2001c;
    uVar13 = *(undefined8 *)(lVar7 + 0xac);
    break;
  case 0x2001d:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar2 = FUN_05e8caa0(0);
    }
    else {
      iVar2 = -0x80000000;
      if (*(float *)(param_8 + 8) != INFINITY) {
        iVar2 = (int)*(float *)(param_8 + 8);
      }
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar11 = 0x2001d;
    uVar17 = *(undefined4 *)(lVar7 + 0xb4);
LAB_05f67b50:
    uVar10 = *(undefined8 *)PTR_DAT_06322158;
LAB_05f67b5c:
    uVar4 = FUN_02b36fe4(4,uVar10,lVar14,uVar11,uVar17,iVar2,param_9,param_10,param_11);
    goto switchD_05f65a18_caseD_70005;
  case 0x2001e:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8cb18(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x2001e;
    uVar13 = *(undefined8 *)(lVar7 + 0xb8);
    break;
  case 0x2001f:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8cd90(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar12 = 0x2001f;
    uVar13 = *(undefined8 *)(lVar7 + 0xc0);
    break;
  case 0x20020:
    if (*(int *)(param_8 + 4) == 4) {
      if (*(int *)(*(long *)
                    Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                  + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_05e8dac0(0);
    }
    else {
      uVar10 = *(undefined8 *)(param_8 + 8);
    }
    if (param_5 == 0) goto LAB_05f68be0;
    lVar14 = FUN_05deabf0(param_5,0);
    lVar7 = FUN_03f11de4(param_7 + 8,
                         *(undefined8 *)
                          Method_UnityEngine_TextCore_RichTextTagParser_TagValue_get_ColorValue__);
    if (lVar14 == 0) goto LAB_05f68be0;
    uVar13 = *(undefined8 *)(lVar7 + 200);
    uVar12 = 0x20020;
    uVar11 = *(undefined8 *)PTR_DAT_06322158;
    goto LAB_05f68020;
  default:
    switch(param_6) {
    case 0x10000:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8bdf0(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 == 0) break;
      plVar6 = (long *)FUN_05deabf0(param_5,0);
      puVar5 = (undefined4 *)
               FUN_03f118e8(param_7,*(undefined8 *)
                                     Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                           );
      if (plVar6 == (long *)0x0) break;
      lVar7 = *plVar6;
      uVar19 = puVar5[2];
      uVar18 = puVar5[3];
      uVar21 = *puVar5;
      uVar20 = puVar5[1];
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar16 + 3) * 0x10 + 0x138);
            goto LAB_05f688c4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,3);
LAB_05f688c4:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar11 = 0x10000;
      goto LAB_05f688d0;
    case 0x10001:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar10 = FUN_05e8c1c0(0);
      }
      else {
        uVar10 = *(undefined8 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar11 = *(undefined8 *)(lVar7 + 0x10);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_05f6893c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,2);
LAB_05f6893c:
                    /* WARNING: Could not recover jumptable at 0x05f68984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*(code *)*puVar8)(plVar6,0x10001,uVar11,uVar10,param_9,param_10,param_11,
                                      puVar8[1]);
          return uVar15;
        }
      }
      break;
    case 0x10002:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar6 = (long *)FUN_05e8c39c(0);
      }
      else {
        plVar6 = *(long **)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x18);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_05f688a4;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)PTR_DAT_06322158,2);
LAB_05f688a4:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x10002;
LAB_05f68b04:
                    /* WARNING: Could not recover jumptable at 0x05f68b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*UNRECOVERED_JUMPTABLE)
                             (plVar9,uVar12,uVar10,plVar6,param_9,param_10,param_11,uVar11);
          return uVar15;
        }
      }
      break;
    default:
      goto switchD_05f65a18_caseD_70005;
    case 0x10005:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar6 = (long *)FUN_05e8d1e8(0);
      }
      else if ((*(long *)(param_8 + 8) == 0) ||
              (plVar6 = (long *)FUN_05f6a138(param_8 + 8,0), plVar6 == (long *)0x0)) {
        plVar6 = (long *)0x0;
      }
      else if (*plVar6 != *(long *)Unity_Burst_BurstCompileAttribute_TypeInfo) {
        plVar6 = (long *)0x0;
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x40);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 7) * 0x10 + 0x138);
                goto LAB_05f68af8;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)PTR_DAT_06322158,7);
LAB_05f68af8:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x10005;
          goto LAB_05f68b04;
        }
      }
      break;
    case 0x10006:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        auVar22 = FUN_05e8d25c(0);
      }
      else if (*(long *)(param_8 + 8) == 0) {
        auVar22 = ZEXT816(0);
      }
      else {
        uVar10 = FUN_05f6a138(param_8 + 8,0);
        auVar22 = FUN_05dcf4fc(uVar10,0);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar10 = *(undefined8 *)(lVar7 + 0x48);
          uVar11 = *(undefined8 *)(lVar7 + 0x50);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 6) * 0x10 + 0x138);
                goto LAB_05f68998;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,6);
LAB_05f68998:
          uVar4 = (*(code *)*puVar8)(plVar6,0x10006,uVar10,uVar11,auVar22._0_8_,auVar22._8_8_,
                                     param_9,param_10,param_11,puVar8[1]);
          goto switchD_05f65a18_caseD_70005;
        }
      }
      break;
    case 0x10007:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar2 = FUN_05e8d2d4(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) break;
      plVar6 = (long *)FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                    Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                          );
      if (plVar6 == (long *)0x0) break;
      lVar14 = *plVar6;
      uVar17 = *(undefined4 *)(lVar7 + 0x58);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_05f689dc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f689dc:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar4 = 0x10007;
      goto LAB_05f689e8;
    case 0x10008:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar6 = (long *)FUN_05e8d3c0(0);
      }
      else {
        plVar6 = *(long **)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x5c);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_05f68a3c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)PTR_DAT_06322158,2);
LAB_05f68a3c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x10008;
          goto LAB_05f68b04;
        }
      }
      break;
    case 0x10009:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar2 = FUN_05e8d704(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 == 0) break;
      plVar6 = (long *)FUN_05deabf0(param_5,0);
      lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                    Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                          );
      if (plVar6 == (long *)0x0) break;
      lVar14 = *plVar6;
      uVar17 = *(undefined4 *)(lVar7 + 100);
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
            puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
            goto LAB_05f6891c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f6891c:
      uVar4 = 0x10001;
LAB_05f68920:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar10 = puVar8[1];
      uVar4 = uVar4 | 8;
LAB_05f689e8:
                    /* WARNING: Could not recover jumptable at 0x05f68a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar15 = (*UNRECOVERED_JUMPTABLE)(plVar6,uVar4,uVar17,iVar2,param_9,param_10,param_11,uVar10);
      return uVar15;
    case 0x1000b:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8d874(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
        param_2 = *(undefined4 *)(param_8 + 0xc);
        param_3 = *(undefined4 *)(param_8 + 0x10);
        param_4 = *(undefined4 *)(param_8 + 0x14);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar19 = *(undefined4 *)(lVar7 + 0x74);
          uVar18 = *(undefined4 *)(lVar7 + 0x78);
          uVar21 = *(undefined4 *)(lVar7 + 0x6c);
          uVar20 = *(undefined4 *)(lVar7 + 0x70);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 3) * 0x10 + 0x138);
                goto LAB_05f68828;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,3);
LAB_05f68828:
                    /* WARNING: Could not recover jumptable at 0x05f68890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*(code *)*puVar8)(uVar21,uVar20,uVar19,uVar18,uVar17,param_2,param_3,param_4,
                                      plVar6,0x1000b,param_9,param_10,param_11,puVar8[1]);
          return uVar15;
        }
      }
      break;
    case 0x1000c:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar17 = FUN_05e8d8ec(0);
      }
      else {
        uVar17 = *(undefined4 *)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar18 = *(undefined4 *)(lVar7 + 0x7c);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_05f687a8;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,0);
LAB_05f687a8:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar10 = puVar8[1];
          uVar19 = 0x1000c;
LAB_05f687b4:
                    /* WARNING: Could not recover jumptable at 0x05f687f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*UNRECOVERED_JUMPTABLE)
                             (uVar18,uVar17,plVar6,uVar19,param_9,param_10,param_11,uVar10);
          return uVar15;
        }
      }
      break;
    case 0x1000d:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar2 = FUN_05e8d9d8(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar17 = *(undefined4 *)(lVar7 + 0x80);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_05f6878c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f6878c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar10 = puVar8[1];
          uVar4 = 0x1000d;
          goto LAB_05f689e8;
        }
      }
      break;
    case 0x1000e:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        iVar2 = FUN_05e8da4c(0);
      }
      else {
        iVar2 = -0x80000000;
        if (*(float *)(param_8 + 8) != INFINITY) {
          iVar2 = (int)*(float *)(param_8 + 8);
        }
      }
      if (param_5 != 0) {
        plVar6 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar17 = *(undefined4 *)(lVar7 + 0x84);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                goto LAB_05f68808;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)PTR_DAT_06322158,4);
LAB_05f68808:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar10 = puVar8[1];
          uVar4 = 0x1000e;
          goto LAB_05f689e8;
        }
      }
      break;
    case 0x1000f:
      if (*(int *)(param_8 + 4) == 4) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_Serialization_XmlObjectSerializer_ReadObjectHandleExceptions__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        plVar6 = (long *)FUN_05e8db38(0);
      }
      else {
        plVar6 = *(long **)(param_8 + 8);
      }
      if (param_5 != 0) {
        plVar9 = (long *)FUN_05deabf0(param_5,0);
        lVar7 = FUN_03f118e8(param_7,*(undefined8 *)
                                      Method_UnityEngine_Animations_Rigging_RigUtils_<>c_<ExtractNestedPropertyType>b__6_0__
                            );
        if (plVar9 != (long *)0x0) {
          lVar14 = *plVar9;
          uVar10 = *(undefined8 *)(lVar7 + 0x88);
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06322158) {
                puVar8 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
                goto LAB_05f68a5c;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)FUN_02b7654c(plVar9,*(long *)PTR_DAT_06322158,2);
LAB_05f68a5c:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar11 = puVar8[1];
          uVar12 = 0x1000f;
          goto LAB_05f68b04;
        }
      }
    }
LAB_05f68be0:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar11 = *(undefined8 *)PTR_DAT_06322158;
LAB_05f68020:
  uVar4 = FUN_02b37318(2,uVar11,lVar14,uVar12,uVar13,uVar10,param_9,param_10,param_11);
switchD_05f65a18_caseD_70005:
  return (ulong)(uVar4 & 1);
}


