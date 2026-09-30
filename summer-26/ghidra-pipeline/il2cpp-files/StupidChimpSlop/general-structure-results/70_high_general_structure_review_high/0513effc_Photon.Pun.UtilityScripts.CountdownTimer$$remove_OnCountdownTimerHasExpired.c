/*
FUNCTION_NAME: Photon.Pun.UtilityScripts.CountdownTimer$$remove_OnCountdownTimerHasExpired
ENTRY_POINT: 0513effc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void Photon_Pun_UtilityScripts_CountdownTimer__remove_OnCountdownTimerHasExpired(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *unaff_x19;
  undefined8 uVar10;
  long *unaff_x23;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  _in_stack_00000060 = FUN_03dad3a8(param_1,0,*(undefined8 *)PTR_DAT_0664e598);
  uVar7 = FUN_046f38f8(&stack0x00000060,*(undefined8 *)PTR_DAT_0664e590);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000060;
    thunk_FUN_02dc1ef0(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_02f2618c(unaff_x19 + 2,&stack0x00000060);
    return;
  }
  uVar7 = FUN_046f3940(&stack0x00000060,*(undefined8 *)PTR_DAT_0664e588);
  if ((uVar7 & 1) == 0) {
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar4 = thunk_FUN_02db45e8(System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10>_var);
    uVar4 = FUN_05091160(uVar10,uVar4,0);
    uVar10 = thunk_FUN_02db45e8(System_Runtime_Remoting_Messaging_AsyncResult_var);
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar4,uVar10);
  }
  uVar4 = thunk_FUN_02d8a53c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)PTR_DAT_0665d8f8);
  plVar5 = *(long **)(unaff_x19 + 8);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  if ((int)uVar3 < 4) {
    if (uVar3 == 1) {
      lVar6 = FUN_0512c534(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                           *(undefined8 *)(unaff_x19 + 0xc));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      _in_stack_00000050 =
           FUN_03db3f80(lVar6,0,*(undefined8 *)UnityEditor_Analytics_AssetImportStatusAnalytic_var);
      uVar7 = FUN_046f3edc(&stack0x00000050,*(undefined8 *)System_Reflection_AssemblyNameFlags_var);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000050;
        thunk_FUN_02dc1ef0(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_02f28184(unaff_x19 + 2,&stack0x00000050);
        return;
      }
      lVar6 = FUN_046f3f24(&stack0x00000050,*(undefined8 *)System_Collections_ArrayList_var);
    }
    else {
      if (uVar3 != 2) {
        if (uVar3 == 3) {
          lVar6 = FUN_051234c8(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                               *(undefined8 *)(unaff_x19 + 0xc));
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          _in_stack_00000030 =
               FUN_03db3f80(lVar6,0,*(undefined8 *)System_Threading_AsyncFlowControl_var);
          uVar7 = FUN_046f3edc(&stack0x00000030,*(undefined8 *)UnityEngine_AssetBundleRequest_var);
          if ((uVar7 & 1) == 0) {
            *unaff_x19 = 3;
            *(undefined1 (*) [16])(unaff_x19 + 0x1a) = _in_stack_00000030;
            thunk_FUN_02dc1ef0(unaff_x19 + 0x1a,0);
            if (*(int *)(*unaff_x23 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
            }
            FUN_02f28184(unaff_x19 + 2,&stack0x00000030);
            return;
          }
          lVar6 = FUN_046f3f24(&stack0x00000030,
                               *(undefined8 *)
                                System_Configuration_Assemblies_AssemblyHashAlgorithm_var);
          goto LAB_0513eb20;
        }
        goto LAB_0513f0a0;
      }
      lVar6 = FUN_0512187c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                           *(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      _in_stack_00000040 =
           FUN_03db3f80(lVar6,0,*(undefined8 *)UnityEngine_AsyncInstantiateOperation_var);
      uVar7 = FUN_046f3edc(&stack0x00000040,
                           *(undefined8 *)
                            System_Configuration_Assemblies_AssemblyVersionCompatibility_var);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000040;
        thunk_FUN_02dc1ef0(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_02f28184(unaff_x19 + 2,&stack0x00000040);
        return;
      }
      lVar6 = FUN_046f3f24(&stack0x00000040,*(undefined8 *)System_ComponentModel_ArrayConverter_var)
      ;
    }
  }
  else {
    if (uVar3 < 0x12) {
      if ((1 << (ulong)(uVar3 & 0x1f) & 0x30780U) != 0) {
        plVar5 = *(long **)(unaff_x19 + 8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar10 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
        lVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_0664abd8);
        FUN_05142848(lVar6,uVar10,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_051256cc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
        goto LAB_0513eb20;
      }
      if (uVar3 == 0xb) {
        lVar6 = FUN_0514095c(0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_051256cc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
        goto LAB_0513eb20;
      }
      if (uVar3 == 0xc) {
        lVar6 = FUN_05140a8c(0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        FUN_051256cc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
        goto LAB_0513eb20;
      }
    }
    if (uVar3 == 4) {
      lVar6 = FUN_05130f9c(*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                           *(undefined8 *)(unaff_x19 + 0xc));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      _in_stack_00000020 =
           FUN_03db3f80(lVar6,0,*(undefined8 *)
                                 System_Runtime_CompilerServices_AsyncMethodBuilderCore_var);
      uVar7 = FUN_046f3edc(&stack0x00000020,
                           *(undefined8 *)UnityEditor_Analytics_AssetExportAnalytic_var);
      if ((uVar7 & 1) == 0) {
        *unaff_x19 = 4;
        *(undefined1 (*) [16])(unaff_x19 + 0x1e) = _in_stack_00000020;
        thunk_FUN_02dc1ef0(unaff_x19 + 0x1e,0);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_02f28184(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      lVar6 = FUN_046f3f24(&stack0x00000020,*(undefined8 *)System_Reflection_AssemblyName_var);
    }
    else {
      if (uVar3 != 5) {
LAB_0513f0a0:
        uVar4 = *(undefined8 *)(unaff_x19 + 8);
        lVar6 = thunk_FUN_02db45e8(PTR_DAT_06649f98);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        uVar10 = FUN_04f9d780(0);
        plVar5 = *(long **)(unaff_x19 + 8);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uStack000000000000000c =
             (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        uVar8 = thunk_FUN_02db45e8(PTR_DAT_0665dae0);
        uVar8 = thunk_FUN_02d8a270(uVar8,&stack0x0000000c);
        uVar9 = thunk_FUN_02db45e8(
                                  System_Action<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12>_var
                                  );
        uVar10 = FUN_050ec388(uVar9,uVar10,uVar8,0);
        uVar4 = FUN_05091160(uVar4,uVar10,0);
        uVar10 = thunk_FUN_02db45e8(System_Runtime_Remoting_Messaging_AsyncResult_var);
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar4,uVar10);
      }
      plVar5 = *(long **)(unaff_x19 + 8);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      uVar10 = 0;
      if (plVar5 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      lVar6 = FUN_05140b94(uVar10,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      FUN_051256cc(lVar6,uVar4,*(undefined8 *)(unaff_x19 + 10));
    }
  }
LAB_0513eb20:
  puVar2 = System_AppDomain_var;
  iVar1 = *(int *)(*unaff_x23 + 0xe4);
  *unaff_x19 = 0xfffffffe;
  if (iVar1 == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_044ad980(unaff_x19 + 2,lVar6,*(undefined8 *)puVar2);
  return;
}


