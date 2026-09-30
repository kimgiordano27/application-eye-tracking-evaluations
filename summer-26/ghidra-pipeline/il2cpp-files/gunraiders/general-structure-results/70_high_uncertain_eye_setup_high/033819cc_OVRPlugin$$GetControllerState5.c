/*
FUNCTION_NAME: OVRPlugin$$GetControllerState5
ENTRY_POINT: 033819cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03381d38) */
/* WARNING: Removing unreachable block (ram,0x03381e04) */
/* WARNING: Removing unreachable block (ram,0x03381f10) */
/* WARNING: Removing unreachable block (ram,0x03381f30) */

long OVRPlugin__GetControllerState5(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int in_w10;
  int *piVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
code_r0x033819cc:
  lVar10 = *unaff_x28;
  *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
  }
  else {
    FUN_02d5004c(unaff_x22,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  do {
    lVar10 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0338191c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_0338191c:
    uVar9 = (*(code *)*puVar3)();
    if ((uVar9 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return unaff_x22;
      }
      lVar10 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar9 == 0) goto LAB_03381e48;
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_03381e30;
    }
    lVar10 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
           ) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03381980;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498();
LAB_03381980:
    plVar4 = (long *)(*(code *)*puVar3)();
    iVar2 = FUN_0233de64(plVar4,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_get_Current__
                        );
    if (iVar2 == 1) break;
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                               );
    FUN_02d4f880(lVar10,*(undefined8 *)
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_get_Current__
                );
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03381a94;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar4,*(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo,0
                         );
LAB_03381a94:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_03381aa8:
    lVar7 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03381af4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(plVar4,*unaff_x27,0);
LAB_03381af4:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) != 0) {
      lVar7 = thunk_FUN_01c496e0(*unaff_x19);
      FUN_03313b6c(lVar7,0);
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x29) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03381b64;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar4,*unaff_x29,0);
LAB_03381b64:
      uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(int *)(lVar10 + 0x18) != 0) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_03382444(uVar5,unaff_w21);
        if ((uVar9 & 1) != 0) goto code_r0x03381ba8;
        goto LAB_03381bd4;
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar8 = *unaff_x28;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(int *)(lVar7 + 0x18) == 0) {
        FUN_02d5004c(lVar10,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      else {
        *(undefined4 *)(lVar10 + 0x18) = 1;
        *(undefined8 *)(lVar7 + 0x20) = uVar5;
      }
      goto LAB_03381aa8;
    }
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03381d20;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar4,*(long *)PTR_DAT_0422fce8,0);
LAB_03381d20:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_02d50250(in_stack_00000008,lVar10,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_Dispose__
                );
    unaff_x22 = in_stack_00000008;
    unaff_x26 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  } while( true );
  param_3 = FUN_02342f08(plVar4,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_Dispose__
                        );
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  in_w10 = *(int *)(unaff_x22 + 0x1c);
  param_1 = *(long *)(unaff_x22 + 0x10);
  goto code_r0x033819cc;
code_r0x03381ba8:
  plVar6 = *(long **)(lVar7 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar5 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  uVar9 = thunk_FUN_03152714(uVar5,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
                             ,0);
  if ((uVar9 & 1) != 0) {
LAB_03381bd4:
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                              );
    FUN_02b67c90(uVar5,lVar7,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
                 ,0);
    uVar9 = FUN_023376f8(lVar10,uVar5,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_MoveNext__
                        );
    if ((uVar9 & 1) == 0) {
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar8 = *unaff_x28;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      }
      else {
        FUN_02d5004c(lVar10,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
    }
  }
  goto LAB_03381aa8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_03381e30:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar3 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03381e64;
    }
  }
LAB_03381e48:
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_03381e64:
  (*(code *)*puVar3)();
  return unaff_x22;
}


