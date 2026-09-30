/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 03381c80
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03381f30) */
/* WARNING: Removing unreachable block (ram,0x03381d38) */
/* WARNING: Removing unreachable block (ram,0x03381e04) */
/* WARNING: Removing unreachable block (ram,0x03381f10) */

long OVRPlugin__SetControllerLocalizedVibration(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 in_w9;
  ulong uVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  do {
    *(undefined4 *)(unaff_x22 + 0x18) = in_w9;
    *(undefined8 *)(param_1 + 0x20) = unaff_x25;
LAB_03381aa8:
    lVar6 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03381af4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(unaff_x23,*unaff_x27,0);
LAB_03381af4:
    uVar8 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (unaff_x23 != (long *)0x0) {
        lVar6 = *unaff_x23;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0422fce8) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03381d20;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)FUN_01c72498(unaff_x23,*(long *)PTR_DAT_0422fce8,0);
LAB_03381d20:
        (*(code *)*puVar3)(unaff_x23,puVar3[1]);
      }
      if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_02d50250(in_stack_00000008,unaff_x22,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_Dispose__
                  );
      unaff_x26 = (long *)System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
LAB_033818d0:
      lVar6 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0338191c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498();
LAB_0338191c:
      uVar8 = (*(code *)*puVar3)();
      if ((uVar8 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) {
          return in_stack_00000008;
        }
        lVar6 = *unaff_x20;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_03381e48;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        break;
      }
      lVar6 = *unaff_x20;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_ResourceLocationBase>_get_Current__
             ) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03381980;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498();
LAB_03381980:
      plVar4 = (long *)(*(code *)*puVar3)();
      iVar2 = FUN_0233de64(plVar4,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_get_Current__
                          );
      if (iVar2 == 1) {
        uVar5 = FUN_02342f08(plVar4,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_Dispose__
                            );
        if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar6 = *(long *)(in_stack_00000008 + 0x10);
        lVar7 = *unaff_x28;
        *(int *)(in_stack_00000008 + 0x1c) = *(int *)(in_stack_00000008 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar1 = *(uint *)(in_stack_00000008 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(in_stack_00000008 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        }
        else {
          FUN_02d5004c(in_stack_00000008,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_033818d0;
      }
      unaff_x22 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                                    );
      FUN_02d4f880(unaff_x22,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SchemaNotation>_get_Current__
                  );
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03381a94;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01c72498(plVar4,*(long *)Oculus_Platform_Models_LivestreamingStartResult_TypeInfo
                            ,0);
LAB_03381a94:
      unaff_x23 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      goto LAB_03381aa8;
    }
    lVar6 = thunk_FUN_01c496e0(*unaff_x19);
    FUN_03313b6c(lVar6,0);
    lVar7 = *unaff_x23;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x29) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03381b64;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(unaff_x23,*unaff_x29,0);
LAB_03381b64:
    unaff_x25 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    *(undefined8 *)(lVar6 + 0x10) = unaff_x25;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(unaff_x22 + 0x18) != 0) {
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_03382444(unaff_x25,unaff_w21);
      if ((uVar8 & 1) != 0) {
        plVar4 = *(long **)(lVar6 + 0x10);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar5 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        uVar8 = thunk_FUN_03152714(uVar5,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary_Enumerator<string,_StringBuilder>_Dispose__
                                   ,0);
        if ((uVar8 & 1) == 0) goto LAB_03381aa8;
      }
      uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_RenderGraphDebugData>_get_Current__
                                );
      FUN_02b67c90(uVar5,lVar6,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_string>_MoveNext__
                   ,0);
      uVar8 = FUN_023376f8(unaff_x22,uVar5,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_ProbeVolumeBakingProcessSettings>_MoveNext__
                          );
      if ((uVar8 & 1) == 0) {
        uVar5 = *(undefined8 *)(lVar6 + 0x10);
        lVar6 = *(long *)(unaff_x22 + 0x10);
        lVar7 = *unaff_x28;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar1 = *(uint *)(unaff_x22 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        }
        else {
          FUN_02d5004c(unaff_x22,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
      }
      goto LAB_03381aa8;
    }
    param_1 = *(long *)(unaff_x22 + 0x10);
    lVar6 = *unaff_x28;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      FUN_02d5004c(unaff_x22,unaff_x25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      goto LAB_03381aa8;
    }
    in_w9 = 1;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03381e64;
    }
  }
LAB_03381e48:
  puVar3 = (undefined8 *)FUN_01c72498();
LAB_03381e64:
  (*(code *)*puVar3)();
  return in_stack_00000008;
}


