/*
FUNCTION_NAME: FUN_060929b0
ENTRY_POINT: 060929b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_060929b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  
  puVar8 = Method_System_Net_Dns_GetHostEntry__;
  if ((DAT_06dc4ec1 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__);
    FUN_02d965b8(Method_System_Convert_ThrowInt64OverflowException__);
    FUN_02d965b8(Method_System_Net_Dns_GetHostEntry__);
    FUN_02d965b8(Method_System_Net_Dns_GetHostEntry__);
    DAT_06dc4ec1 = 1;
  }
  lVar2 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  FUN_0552aca4(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    LeanTween__value((long *)(lVar2 + 0x10),param_1);
    uVar3 = FUN_0536c9e8(param_2,0);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_0536c9e8(param_3,0);
      puVar1 = Method_System_Net_Dns_GetHostEntry__;
      puVar8 = Method_System_Convert_ThrowInt64OverflowException__;
      if ((uVar3 & 1) == 0) {
        plVar11 = *(long **)(param_1 + 0x38);
        if (plVar11 == (long *)0x0) {
          uVar6 = 0;
          uVar5 = 0;
        }
        else {
          lVar9 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_System_Convert_ThrowInt64OverflowException__) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06092adc;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)
                   FUN_02dd004c(plVar11,*(long *)Method_System_Convert_ThrowInt64OverflowException__
                                ,0);
LAB_06092adc:
          lVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
          if (lVar9 == 0) {
            uVar5 = 0;
          }
          else {
            plVar11 = *(long **)(param_1 + 0x30);
            if (plVar11 == (long *)0x0) {
              uVar5 = 0;
            }
            else {
              lVar9 = *plVar11;
              uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      *(long *)
                       Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__
                     ) {
                    puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_06092b60;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar4 = (undefined8 *)
                       FUN_02dd004c(plVar11,*(long *)
                                             Method_UnityEngine_UIElements_BaseTreeView_<SetSelectionInternalById>b__60_0__
                                    ,0);
LAB_06092b60:
              uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
            }
            uVar3 = FUN_0536ba54(uVar5,param_3,0);
            uVar5 = param_3;
            if ((uVar3 & 1) == 0) {
              uVar5 = 0;
            }
          }
          plVar11 = *(long **)(param_1 + 0x38);
          if (plVar11 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            lVar9 = *plVar11;
            uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar3 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar8) {
                  puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_06092bf0;
                }
                uVar3 = uVar3 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar3 != 0);
            }
            puVar4 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar8,0);
LAB_06092bf0:
            uVar6 = (*(code *)*puVar4)(plVar11,puVar4[1]);
          }
        }
        uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
        FUN_06092ce4(uVar7,param_2,param_3,uVar6,uVar5);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x18) = uVar7;
          LeanTween__value((undefined8 *)(lVar2 + 0x18),uVar7);
          FUN_06092dec(lVar2);
          return;
        }
        goto LAB_06092c5c;
      }
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar5 = thunk_FUN_02dd3144();
      puVar8 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateSelectedCoursePropertyAsync>d__68>__
      ;
    }
    else {
      thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
      uVar5 = thunk_FUN_02dd3144();
      puVar8 = Method_System_Net_Mail_DomainLiteralReader_ReadReverse__;
    }
    uVar6 = thunk_FUN_02dfd288(puVar8);
    uVar7 = thunk_FUN_02dfd288(
                              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__
                              );
    FUN_05453ed4(uVar5,uVar6,uVar7,0);
    uVar6 = thunk_FUN_02dfd288(Method_System_DomainNameHelper_IdnEquivalent__);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar6);
  }
LAB_06092c5c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


