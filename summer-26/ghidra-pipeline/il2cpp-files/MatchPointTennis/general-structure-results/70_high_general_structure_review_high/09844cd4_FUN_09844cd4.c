/*
FUNCTION_NAME: FUN_09844cd4
ENTRY_POINT: 09844cd4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x09845804) */

undefined8 FUN_09844cd4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  
  puVar2 = PTR_DAT_09f22aa0;
  if ((DAT_0a5483d8 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1f008);
    FUN_04447ba8(System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
                );
    FUN_04447ba8(PTR_DAT_09f1fbc0);
    FUN_04447ba8(System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo);
    FUN_04447ba8(PTR_DAT_09f22aa0);
    FUN_04447ba8(PTR_DAT_09f1e5f0);
    FUN_04447ba8(PTR_DAT_09f63c30);
    FUN_04447ba8(System_Collections_Generic_IEnumerator<DebugUI_Widget>_TypeInfo);
    FUN_04447ba8(
                System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
                );
    FUN_04447ba8(System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo);
    FUN_04447ba8(
                System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
                );
    DAT_0a5483d8 = 1;
  }
  puVar4 = System_Collections_Generic_IEnumerator<DebugUI_Widget>_TypeInfo;
  puVar3 = PTR_DAT_09f63c30;
  puVar1 = PTR_DAT_09f1fbc0;
  plVar8 = (long *)PTR_DAT_09f1f008;
  plVar6 = (long *)thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_079e7df4(plVar6,0x400,0);
  puVar2 = 
  System_Collections_Generic_IEnumerator<PlayerEditorConnectionEvents_MessageTypeSubscribers>_TypeInfo
  ;
  lVar15 = *(long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (lVar15 != 0) {
      iVar17 = 0;
      do {
        if (*(int *)(lVar15 + 0x18) <= iVar17) {
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          goto LAB_098456a8;
        }
        plVar12 = (long *)System_Diagnostics_Debugger__Log(0);
        if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        uVar9 = FUN_05badb74(*(long *)(param_1 + 0x18),iVar17,*(undefined8 *)puVar1);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44(uVar9,uVar9);
        }
        uVar9 = (**(code **)(*plVar12 + 0x268))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x270));
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar15 = FUN_09845d28(uVar9);
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_05badb74(*(long *)(param_1 + 0x10),iVar17,
                     *(undefined8 *)
                      System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo
                    );
        lVar7 = FUN_09845d28();
        if (iVar17 != 0) {
          lVar13 = *(long *)puVar3;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar13 = *(long *)puVar3;
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          (**(code **)(*plVar6 + 0x398))
                    (plVar6,lVar13,0,*(undefined4 *)(lVar13 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0)
                    );
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        lVar15 = *(long *)puVar3;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar15 = *(long *)puVar3;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x38);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar7,0,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        lVar15 = *(long *)(param_1 + 0x10);
        iVar17 = iVar17 + 1;
      } while (lVar15 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (lVar15 != 0) {
    iVar17 = 0;
    do {
      plVar8 = (long *)PTR_DAT_09f1f008;
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0x18) <= iVar17) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar3;
        }
        lVar15 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        lVar15 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        lVar15 = *(long *)(param_1 + 0x30);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        lVar15 = **(long **)(*(long *)puVar3 + 0xb8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
LAB_098456a8:
        uVar9 = (**(code **)(*plVar6 + 0x408))(plVar6,*(undefined8 *)(*plVar6 + 0x410));
        lVar15 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *plVar8) {
              puVar14 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_09845710;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_044822ac(plVar6,*plVar8,0);
LAB_09845710:
        (*(code *)*puVar14)(plVar6,puVar14[1]);
        return uVar9;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *(long *)puVar3;
      }
      lVar15 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = **(long **)(*(long *)puVar3 + 0xb8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)(param_1 + 0x30);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      plVar8 = (long *)System_Diagnostics_Debugger__Log(0);
      if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar9 = FUN_05badb74(*(long *)(param_1 + 0x28),iVar17,*(undefined8 *)puVar1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44(uVar9,uVar9);
      }
      lVar15 = (**(code **)(*plVar8 + 0x268))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x270));
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      plVar8 = (long *)System_Diagnostics_Debugger__Log(0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = FUN_05badb74(*(long *)(param_1 + 0x18),iVar17,*(undefined8 *)puVar1);
      uVar10 = System_Diagnostics_Debugger__Log(0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar11 = FUN_09845ac0(lVar15,uVar10);
      if ((uVar11 & 1) == 0) {
LAB_09845008:
        lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_044bb4b4();
        if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar7 + 0x28) = uVar9;
        thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x28),uVar9);
        if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar7 + 0x30) =
             *(undefined8 *)
              System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo;
        thunk_FUN_044bb4b4();
        uVar10 = System_Diagnostics_Debugger__Log(0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar10 = FUN_09845c34(lVar15,uVar10);
        if (*(uint *)(lVar7 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar7 + 0x38) = uVar10;
        thunk_FUN_044bb4b4();
        if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        *(undefined8 *)(lVar7 + 0x40) =
             *(undefined8 *)
              System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo;
        thunk_FUN_044bb4b4();
        lVar15 = FUN_078b57fc(lVar7,0);
      }
      else {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        iVar5 = System_Globalization_TaiwanCalendar__get_MinSupportedDateTime
                          (lVar15,*(undefined8 *)puVar2,0);
        if (-1 < iVar5) goto LAB_09845008;
      }
      plVar8 = (long *)System_Diagnostics_Debugger__Log(0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = (**(code **)(*plVar8 + 0x268))(plVar8,lVar15,*(undefined8 *)(*plVar8 + 0x270));
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar15 = *(long *)puVar3;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x20);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = FUN_05badb74(*(long *)(param_1 + 0x20),iVar17,*(undefined8 *)puVar1);
      if (lVar15 != 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar15 = FUN_05badb74(*(long *)(param_1 + 0x20),iVar17,*(undefined8 *)puVar1);
        uVar10 = System_Diagnostics_Debugger__Log(0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar11 = FUN_09845ac0(lVar15,uVar10);
        if ((uVar11 & 1) == 0) {
LAB_098451e8:
          lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
          thunk_FUN_044bb4b4();
          if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined8 *)(lVar7 + 0x28) = uVar9;
          thunk_FUN_044bb4b4((undefined8 *)(lVar7 + 0x28),uVar9);
          if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined8 *)(lVar7 + 0x30) =
               *(undefined8 *)
                System_Collections_Generic_IEnumerator<RigBuilderUtils_PlayableChain>_TypeInfo;
          thunk_FUN_044bb4b4();
          uVar9 = System_Diagnostics_Debugger__Log(0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar9 = FUN_09845c34(lVar15,uVar9);
          if (*(uint *)(lVar7 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined8 *)(lVar7 + 0x38) = uVar9;
          thunk_FUN_044bb4b4();
          if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          *(undefined8 *)(lVar7 + 0x40) =
               *(undefined8 *)
                System_Collections_Generic_IEnumerator<ShapeRecognizer_FingerFeatureConfig>_TypeInfo
          ;
          thunk_FUN_044bb4b4();
          lVar15 = FUN_078b57fc(lVar7,0);
        }
        else {
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          iVar5 = System_Globalization_TaiwanCalendar__get_MinSupportedDateTime
                            (lVar15,*(undefined8 *)puVar2,0);
          if (-1 < iVar5) goto LAB_098451e8;
        }
        plVar8 = (long *)System_Diagnostics_Debugger__Log(0);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        lVar15 = (**(code **)(*plVar8 + 0x268))(plVar8,lVar15,*(undefined8 *)(*plVar8 + 0x270));
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
          lVar7 = *(long *)puVar3;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar7,0,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
        lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        (**(code **)(*plVar6 + 0x398))
                  (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      }
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar15 = *(long *)puVar3;
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar15 = FUN_05badb74(*(long *)(param_1 + 0x10),iVar17,
                            *(undefined8 *)
                             System_Collections_Generic_IEnumerator<OVRSemanticLabels_Classification>_TypeInfo
                           );
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      (**(code **)(*plVar6 + 0x398))
                (plVar6,lVar15,0,*(undefined4 *)(lVar15 + 0x18),*(undefined8 *)(*plVar6 + 0x3a0));
      lVar15 = *(long *)(param_1 + 0x10);
      iVar17 = iVar17 + 1;
    } while (lVar15 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


