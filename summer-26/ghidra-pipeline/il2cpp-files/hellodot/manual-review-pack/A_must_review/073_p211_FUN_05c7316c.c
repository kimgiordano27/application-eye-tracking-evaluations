/*
FUNCTION_NAME: FUN_05c7316c
ENTRY_POINT: 05c7316c
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_10;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


/* WARNING: Removing unreachable block (ram,0x05c73968) */
/* WARNING: Removing unreachable block (ram,0x05c73818) */
/* WARNING: Removing unreachable block (ram,0x05c73bc4) */

long FUN_05c7316c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  
  puVar3 = Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_var;
  puVar2 = Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_var;
  puVar1 = PTR_DAT_065de3b8;
  if ((DAT_06a79ebb & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Nullable<byte>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Nullable<char>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(int___var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a48);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (
              UnityEngine_ResourceManagement_AsyncOperations_ProviderOperation<ContentCatalogData>_var
              );
    AkMIDIEventCallbackInfo__get_byProgramNum(long___var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ed330);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ed338);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Tuple<Vector3,_float>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(object___var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_RaycastHit___var);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de3b8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dce20);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c89e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_RaycastHit2D___var);
    DAT_06a79ebb = 1;
  }
  lVar7 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  FUN_04678954(lVar7,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (DAT_06a79f60 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065de3b8);
    DAT_06a79f60 = '\x01';
  }
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar8 = *(long *)puVar1;
  }
  plVar16 = *(long **)(*(long *)(lVar8 + 0xb8) + 0x10);
  if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar8 = *plVar16;
  uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) ==
          *(long *)
           UnityEngine_ResourceManagement_AsyncOperations_ProviderOperation<ContentCatalogData>_var)
      {
        puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
        goto FUN_05c73350;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_02ce0a7c(plVar16,*(long *)
                                 UnityEngine_ResourceManagement_AsyncOperations_ProviderOperation<ContentCatalogData>_var
                        ,0);
FUN_05c73350:
  puVar6 = UnityEngine_RaycastHit2D___var;
  puVar5 = object___var;
  puVar4 = System_Nullable<char>_var;
  puVar3 = System_Nullable<byte>_var;
  puVar2 = PTR_DAT_065c8d08;
  puVar1 = PTR_DAT_065c8c48;
  plVar16 = (long *)(*(code *)*puVar9)(plVar16,puVar9[1]);
  do {
    if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05c733e4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar16,*(long *)puVar2,0);
LAB_05c733e4:
    uVar14 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar16 == (long *)0x0) {
        return lVar7;
      }
      lVar8 = *plVar16;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 == 0) goto LAB_05c73ae8;
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar16;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)System_Tuple<Vector3,_float>_var) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000120_PostfixBurstDelegate__EndInvoke
          ;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar16,*(long *)System_Tuple<Vector3,_float>_var,0);

    UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween_00000120_PostfixBurstDelegate__EndInvoke
    :
    uVar10 = (*(code *)*puVar9)(plVar16,puVar9[1]);
    if (*(int *)(*(long *)PTR_DAT_065dce20 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    plVar11 = (long *)FUN_05c70b04(uVar10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar8 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065ed330) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05c734d8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065ed330,0);
LAB_05c734d8:
    plVar11 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
LAB_05c734ec:
    lVar8 = *plVar11;
    uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_05c73538;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)puVar2,0);
LAB_05c73538:
    uVar14 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar14 & 1) != 0) {
      lVar8 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065ed338) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05c7359c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065ed338,0);
LAB_05c7359c:
      plVar12 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
      uVar10 = *(undefined8 *)UnityEngine_RaycastHit___var;
      if (*(int *)(*(long *)PTR_DAT_065c89e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = FUN_04f3fb68(uVar10,0);
      uVar10 = FUN_04f5c108(plVar12,uVar10,0,0);
      plVar13 = (long *)FUN_033c4480(uVar10,*(undefined8 *)int___var);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar8 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)long___var) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05c73674;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)long___var,0);
LAB_05c73674:
      plVar13 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
LAB_05c73688:
      lVar8 = *plVar13;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05c736d4;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar2,0);
LAB_05c736d4:
      uVar14 = (*(code *)*puVar9)(plVar13,puVar9[1]);
      if ((uVar14 & 1) != 0) {
        lVar8 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05c73730;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)puVar5,0);
LAB_05c73730:
        lVar8 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        uVar10 = *(undefined8 *)(lVar8 + 0x10);
        uVar14 = FUN_04679480(lVar7,uVar10,*(undefined8 *)puVar4);
        if ((uVar14 & 1) == 0) {
          FUN_0467928c(lVar7,uVar10,plVar12,*(undefined8 *)puVar3);
        }
        else {
          uVar10 = FUN_04db9ab4(*(undefined8 *)puVar6,uVar10,plVar12,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          FUN_05eb364c(uVar10,0);
        }
        goto LAB_05c73688;
      }
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065c8a48) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_05c73808;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(plVar13,*(long *)PTR_DAT_065c8a48,0);
LAB_05c73808:
        (*(code *)*puVar9)(plVar13,puVar9[1]);
      }
      goto LAB_05c734ec;
    }
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065c8a48) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05c73958;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_02ce0a7c(plVar11,*(long *)PTR_DAT_065c8a48,0);
LAB_05c73958:
      (*(code *)*puVar9)(plVar11,puVar9[1]);
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar9 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_05c73b04;
    }
  }
LAB_05c73ae8:
  puVar9 = (undefined8 *)FUN_02ce0a7c(plVar16,*(long *)PTR_DAT_065c8a48,0);
LAB_05c73b04:
  (*(code *)*puVar9)(plVar16,puVar9[1]);
  return lVar7;
}


