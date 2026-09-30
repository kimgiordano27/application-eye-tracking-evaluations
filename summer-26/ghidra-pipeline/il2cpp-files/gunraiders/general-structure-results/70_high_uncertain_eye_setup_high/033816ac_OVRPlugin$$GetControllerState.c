/*
FUNCTION_NAME: OVRPlugin$$GetControllerState
ENTRY_POINT: 033816ac
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03381d38) */
/* WARNING: Removing unreachable block (ram,0x03381e04) */
/* WARNING: Removing unreachable block (ram,0x03381f10) */
/* WARNING: Removing unreachable block (ram,0x03381f30) */

long OVRPlugin__GetControllerState(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x20;
  undefined4 unaff_w21;
  long lVar18;
  long *unaff_x26;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033816a4 with catch @ 033816b0
                        */
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
              );
  FUN_01c5d288(System_Runtime_Remoting_InternalRemotingServices_TypeInfo);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_Dispose__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
              );
  *(undefined1 *)(unaff_x20 + 0x60a) = 1;
  lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                            );
  FUN_02d4f880(lVar8,*(undefined8 *)
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_get_Current__
              );
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_03382024();
  puVar5 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_Dispose__
  ;
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_get_Current__;
  if (lVar8 != 0) {
    FUN_02d50250(lVar8,uVar9,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_Dispose__
                );
    uVar9 = FUN_0338213c();
    FUN_02d50250(lVar8,uVar9,*(undefined8 *)puVar4);
    uVar1 = *(undefined4 *)(lVar8 + 0x18);
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                               );
    FUN_02d4f8ec(lVar10,uVar1,*(undefined8 *)puVar5);
    lVar11 = *(long *)puVar3;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar11 = *(long *)puVar3;
    }
    puVar4 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_MoveNext__
    ;
    lVar18 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (lVar18 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar11 = *(long *)puVar3;
      }
      uVar9 = **(undefined8 **)(lVar11 + 0xb8);
      lVar18 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_Dispose__
                                 );
      FUN_02b6841c(lVar18,uVar9,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_Dispose__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = lVar18;
    }
    plVar12 = (long *)FUN_023464b8(lVar8,lVar18,*(undefined8 *)puVar4);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_MoveNext__
             ) {
            puVar13 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0338189c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar13 = (undefined8 *)
                FUN_01c72498(plVar12,*(long *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_MoveNext__
                             ,0);
LAB_0338189c:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar6 = 
      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_get_Current__
      ;
      puVar5 = 
      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
      ;
      puVar4 = Oculus_Platform_Models_LivestreamingStatus_TypeInfo;
      puVar3 = PTR_DAT_04230960;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      do {
        lVar11 = *plVar12;
        lVar8 = *(long *)puVar3;
        uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar8) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0338191c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_01c72498(plVar12,lVar8,0);
LAB_0338191c:
        uVar16 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar16 & 1) == 0) {
          if (plVar12 == (long *)0x0) {
            return lVar10;
          }
          lVar8 = *plVar12;
          uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar16 == 0) goto LAB_03381e48;
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_03381e30;
        }
        lVar8 = *plVar12;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
               ) {
              puVar13 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03381980;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01c72498(plVar12,*(long *)
                                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
                               ,0);
LAB_03381980:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        iVar7 = FUN_0233de64(plVar14,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_get_Current__
                            );
        if (iVar7 == 1) {
          uVar9 = FUN_02342f08(plVar14,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_Dispose__
                              );
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar8 = *(long *)(lVar10 + 0x10);
          lVar11 = *(long *)puVar5;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          }
          else {
            FUN_02d5004c(lVar10,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                                    );
          FUN_02d4f880(lVar8,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_get_Current__
                      );
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar11 = *plVar14;
          uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
                puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03381a94;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)
                    FUN_01c72498(plVar14,*(long *)
                                          Oculus_Platform_Models_LivestreamingStartResult_TypeInfo,0
                                );
LAB_03381a94:
          plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
LAB_03381aa8:
          lVar18 = *plVar14;
          lVar11 = *(long *)puVar3;
          uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar11) {
                puVar13 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_03381af4;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar13 = (undefined8 *)FUN_01c72498(plVar14,lVar11,0);
LAB_03381af4:
          uVar16 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          if ((uVar16 & 1) != 0) {
            lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
            FUN_03313b6c(lVar11,0);
            lVar18 = *plVar14;
            uVar16 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
                  puVar13 = (undefined8 *)(lVar18 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03381b64;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_01c72498(plVar14,*(long *)puVar4,0);
LAB_03381b64:
            uVar9 = (*(code *)*puVar13)(plVar14,puVar13[1]);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            *(undefined8 *)(lVar11 + 0x10) = uVar9;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*(int *)(lVar8 + 0x18) != 0) {
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar16 = FUN_03382444(uVar9,unaff_w21);
              if ((uVar16 & 1) != 0) goto code_r0x03381ba8;
              goto LAB_03381bd4;
            }
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar18 = *(long *)puVar5;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4a4();
            }
            if (*(int *)(lVar11 + 0x18) == 0) {
              FUN_02d5004c(lVar8,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
            }
            else {
              *(undefined4 *)(lVar8 + 0x18) = 1;
              *(undefined8 *)(lVar11 + 0x20) = uVar9;
            }
            goto LAB_03381aa8;
          }
          if (plVar14 != (long *)0x0) {
            lVar11 = *plVar14;
            uVar16 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
                  puVar13 = (undefined8 *)(lVar11 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_03381d20;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar13 = (undefined8 *)FUN_01c72498(plVar14,*(long *)PTR_DAT_0422fce8,0);
LAB_03381d20:
            (*(code *)*puVar13)(plVar14,puVar13[1]);
          }
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          FUN_02d50250(lVar10,lVar8,
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
  plVar15 = *(long **)(lVar11 + 0x10);
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar9 = (**(code **)(*plVar15 + 0x1b8))(plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
  uVar16 = thunk_FUN_03152714(uVar9,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
                              ,0);
  if ((uVar16 & 1) != 0) {
LAB_03381bd4:
    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                              );
    FUN_02b67c90(uVar9,lVar11,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
                 ,0);
    uVar16 = FUN_023376f8(lVar8,uVar9,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_MoveNext__
                         );
    if ((uVar16 & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar11 + 0x10);
      lVar11 = *(long *)(lVar8 + 0x10);
      lVar18 = *(long *)puVar5;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        *(undefined8 *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
      }
      else {
        FUN_02d5004c(lVar8,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
  }
  goto LAB_03381aa8;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_03381e30:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar13 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03381e64;
    }
  }
LAB_03381e48:
  puVar13 = (undefined8 *)FUN_01c72498(plVar12,*(long *)PTR_DAT_0422fce8,0);
LAB_03381e64:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
  return lVar10;
}


