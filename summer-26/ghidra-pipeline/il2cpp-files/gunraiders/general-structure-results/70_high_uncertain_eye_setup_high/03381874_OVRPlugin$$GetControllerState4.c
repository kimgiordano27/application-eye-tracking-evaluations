/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 03381874
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_18;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03381d38) */
/* WARNING: Removing unreachable block (ram,0x03381e04) */
/* WARNING: Removing unreachable block (ram,0x03381f10) */
/* WARNING: Removing unreachable block (ram,0x03381f30) */

long OVRPlugin__GetControllerState4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_x9;
  ulong uVar15;
  int *in_x10;
  int *piVar16;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x26;
  long in_stack_00000008;
  
  do {
    in_x9 = in_x9 + -1;
    piVar16 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar7 = (undefined8 *)FUN_01c72498();
      goto LAB_0338189c;
    }
    plVar8 = (long *)(in_x10 + 2);
    in_x10 = piVar16;
  } while (*plVar8 != param_3);
  puVar7 = (undefined8 *)(param_1 + (long)*piVar16 * 0x10 + 0x138);
LAB_0338189c:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_get_Current__
  ;
  puVar4 = 
  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_MoveNext__
  ;
  puVar3 = Oculus_Platform_Models_LivestreamingStatus_TypeInfo;
  puVar2 = PTR_DAT_04230960;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar13 = *plVar8;
    lVar12 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0338191c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar8,lVar12,0);
LAB_0338191c:
    uVar15 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar15 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return unaff_x22;
      }
      lVar12 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar15 == 0) goto LAB_03381e48;
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_03381e30;
    }
    lVar12 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
           ) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03381980;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01c72498(plVar8,*(long *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
                          ,0);
LAB_03381980:
    plVar9 = (long *)(*(code *)*puVar7)(plVar8,puVar7[1]);
    iVar6 = FUN_0233de64(plVar9,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_get_Current__
                        );
    if (iVar6 == 1) {
      uVar10 = FUN_02342f08(plVar9,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_Dispose__
                           );
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar12 = *(long *)(unaff_x22 + 0x10);
      lVar13 = *(long *)puVar4;
      *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      }
      else {
        FUN_02d5004c(unaff_x22,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      lVar12 = thunk_FUN_01c496e0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                                 );
      FUN_02d4f880(lVar12,*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_get_Current__
                  );
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03381a94;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01c72498(plVar9,*(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo
                            ,0);
LAB_03381a94:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
LAB_03381aa8:
      lVar14 = *plVar9;
      lVar13 = *(long *)puVar2;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_03381af4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar7 = (undefined8 *)FUN_01c72498(plVar9,lVar13,0);
LAB_03381af4:
      uVar15 = (*(code *)*puVar7)(plVar9,puVar7[1]);
      if ((uVar15 & 1) != 0) {
        lVar13 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
        FUN_03313b6c(lVar13,0);
        lVar14 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03381b64;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar9,*(long *)puVar3,0);
LAB_03381b64:
        uVar10 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        *(undefined8 *)(lVar13 + 0x10) = uVar10;
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)(lVar12 + 0x18) != 0) {
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar15 = FUN_03382444(uVar10,unaff_w21);
          if ((uVar15 & 1) != 0) break;
          goto LAB_03381bd4;
        }
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        if (*(int *)(lVar13 + 0x18) == 0) {
          FUN_02d5004c(lVar12,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        else {
          *(undefined4 *)(lVar12 + 0x18) = 1;
          *(undefined8 *)(lVar13 + 0x20) = uVar10;
        }
        goto LAB_03381aa8;
      }
      if (plVar9 != (long *)0x0) {
        lVar13 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0422fce8) {
              puVar7 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03381d20;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar9,*(long *)PTR_DAT_0422fce8,0);
LAB_03381d20:
        (*(code *)*puVar7)(plVar9,puVar7[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_02d50250(in_stack_00000008,lVar12,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_Dispose__
                  );
      unaff_x22 = in_stack_00000008;
      unaff_x26 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
    }
  } while( true );
  plVar11 = *(long **)(lVar13 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar10 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
  uVar15 = thunk_FUN_03152714(uVar10,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
                              ,0);
  if ((uVar15 & 1) != 0) {
LAB_03381bd4:
    uVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                               );
    FUN_02b67c90(uVar10,lVar13,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
                 ,0);
    uVar15 = FUN_023376f8(lVar12,uVar10,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_MoveNext__
                         );
    if ((uVar15 & 1) == 0) {
      uVar10 = *(undefined8 *)(lVar13 + 0x10);
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar14 = *(long *)puVar4;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      }
      else {
        FUN_02d5004c(lVar12,uVar10,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  goto LAB_03381aa8;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_03381e30:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03381e64;
    }
  }
LAB_03381e48:
  puVar7 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_03381e64:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return unaff_x22;
}


