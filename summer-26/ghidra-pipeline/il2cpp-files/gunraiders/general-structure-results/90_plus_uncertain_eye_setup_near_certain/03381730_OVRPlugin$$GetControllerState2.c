/*
FUNCTION_NAME: OVRPlugin$$GetControllerState2
ENTRY_POINT: 03381730
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03381d38) */
/* WARNING: Removing unreachable block (ram,0x03381e04) */
/* WARNING: Removing unreachable block (ram,0x03381f10) */
/* WARNING: Removing unreachable block (ram,0x03381f30) */

long OVRPlugin__GetControllerState2(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar19;
  long *unaff_x26;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_03382024();
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__;
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_get_Current__;
  if (unaff_x20 != 0) {
    FUN_02d50250();
    FUN_0338213c();
    FUN_02d50250();
    uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
    lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                              );
    FUN_02d4f8ec(lVar8,uVar1,*(undefined8 *)puVar4);
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar9 = *(long *)puVar3;
    }
    if (*(long *)(*(long *)(lVar9 + 0xb8) + 0x10) == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar9 = *(long *)puVar3;
      }
      uVar19 = **(undefined8 **)(lVar9 + 0xb8);
      uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_Dispose__
                                 );
      FUN_02b6841c(uVar10,uVar19,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_Dispose__
                   ,0);
      *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar10;
    }
    plVar11 = (long *)FUN_023464b8();
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_MoveNext__
             ) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0338189c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01c72498(plVar11,*(long *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_MoveNext__
                             ,0);
LAB_0338189c:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar6 = 
      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_get_Current__
      ;
      puVar5 = 
      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
      ;
      puVar4 = Oculus_Platform_Models_LivestreamingStatus_TypeInfo;
      puVar3 = PTR_DAT_04230960;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar15 = *plVar11;
        lVar9 = *(long *)puVar3;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar9) {
              puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0338191c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01c72498(plVar11,lVar9,0);
LAB_0338191c:
        uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar17 & 1) == 0) {
          if (plVar11 == (long *)0x0) {
            return lVar8;
          }
          lVar9 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar17 == 0) goto LAB_03381e48;
          piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03381e30;
        }
        lVar9 = *plVar11;
        uVar17 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
               ) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_03381980;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)
                  FUN_01c72498(plVar11,*(long *)
                                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
                               ,0);
LAB_03381980:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        iVar7 = FUN_0233de64(plVar13,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_get_Current__
                            );
        if (iVar7 == 1) {
          uVar10 = FUN_02342f08(plVar13,*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_Dispose__
                               );
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar15 = *(long *)puVar5;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
          }
          else {
            FUN_02d5004c(lVar8,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                                    );
          FUN_02d4f880(lVar9,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_get_Current__
                      );
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar15 = *plVar13;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03381a94;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)
                    FUN_01c72498(plVar13,*(long *)
                                          Oculus_Platform_Models_LivestreamingStartResult_TypeInfo,0
                                );
LAB_03381a94:
          plVar13 = (long *)(*(code *)*puVar12)(plVar13,puVar12[1]);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
LAB_03381aa8:
          lVar16 = *plVar13;
          lVar15 = *(long *)puVar3;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_03381af4;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar12 = (undefined8 *)FUN_01c72498(plVar13,lVar15,0);
LAB_03381af4:
          uVar17 = (*(code *)*puVar12)(plVar13,puVar12[1]);
          if ((uVar17 & 1) != 0) {
            lVar15 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
            FUN_03313b6c(lVar15,0);
            lVar16 = *plVar13;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_03381b64;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar4,0);
LAB_03381b64:
            uVar10 = (*(code *)*puVar12)(plVar13,puVar12[1]);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            *(undefined8 *)(lVar15 + 0x10) = uVar10;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*(int *)(lVar9 + 0x18) != 0) {
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar17 = FUN_03382444(uVar10,unaff_w21);
              if ((uVar17 & 1) != 0) goto code_r0x03381ba8;
              goto LAB_03381bd4;
            }
            lVar15 = *(long *)(lVar9 + 0x10);
            lVar16 = *(long *)puVar5;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*(int *)(lVar15 + 0x18) == 0) {
              FUN_02d5004c(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            else {
              *(undefined4 *)(lVar9 + 0x18) = 1;
              *(undefined8 *)(lVar15 + 0x20) = uVar10;
            }
            goto LAB_03381aa8;
          }
          if (plVar13 != (long *)0x0) {
            lVar15 = *plVar13;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0422fce8) {
                  puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_03381d20;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_0422fce8,0);
LAB_03381d20:
            (*(code *)*puVar12)(plVar13,puVar12[1]);
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          FUN_02d50250(lVar8,lVar9,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_Dispose__
                      );
          unaff_x26 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
code_r0x03381ba8:
  plVar14 = *(long **)(lVar15 + 0x10);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar10 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
  uVar17 = thunk_FUN_03152714(uVar10,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
                              ,0);
  if ((uVar17 & 1) != 0) {
LAB_03381bd4:
    uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                               );
    FUN_02b67c90(uVar10,lVar15,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
                 ,0);
    uVar17 = FUN_023376f8(lVar9,uVar10,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_MoveNext__
                         );
    if ((uVar17 & 1) == 0) {
      uVar10 = *(undefined8 *)(lVar15 + 0x10);
      lVar15 = *(long *)(lVar9 + 0x10);
      lVar16 = *(long *)puVar5;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
      }
      else {
        FUN_02d5004c(lVar9,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
  }
  goto LAB_03381aa8;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_03381e30:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_03381e64;
    }
  }
LAB_03381e48:
  puVar12 = (undefined8 *)FUN_01c72498(plVar11,*(long *)PTR_DAT_0422fce8,0);
LAB_03381e64:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return lVar8;
}


