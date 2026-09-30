/*
FUNCTION_NAME: FUN_03467a28
ENTRY_POINT: 03467a28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


long FUN_03467a28(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_048329e9 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Net_ServicePointScheduler_<Run>b__31_0__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer_Get<Color>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SetListItem_Set__);
    thunk_FUN_01efb3a4(Method_System_RuntimeType_InvokeMember__);
    DAT_048329e9 = 1;
  }
  if (param_2 != 0) {
    *(long *)(param_2 + 0x98) = param_1;
    thunk_FUN_01f51358((long *)(param_2 + 0x98),param_1);
    lVar2 = FUN_035d6f50(0);
    if (lVar2 != 0) {
      uVar3 = FUN_034674c4();
      if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x90) != '\0')) {
        lVar2 = FUN_0346fcf4(param_2);
      }
      else {
        lVar2 = FUN_035d6f50(0);
        if ((lVar2 == 0) || (plVar5 = (long *)FUN_0346757c(), plVar5 == (long *)0x0))
        goto LAB_03467c3c;
        lVar2 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__) {
              puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03467c28;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar5,*(long *)Method_Sirenix_Serialization_Serializer_Get<Color>__,0
                             );
LAB_03467c28:
        lVar2 = (*(code *)*puVar6)(plVar5,param_2,puVar6[1]);
      }
      puVar1 = Method_System_Net_ServicePointScheduler_<Run>b__31_0__;
      lVar4 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)
                                        Method_System_Net_ServicePointScheduler_<Run>b__31_0__);
      if (lVar4 != 0) {
        if (lVar2 == 0) goto LAB_03467c3c;
        uVar9 = *(undefined8 *)puVar1;
        lVar4 = thunk_FUN_01f116d0(lVar2,uVar9);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar2,uVar9);
        }
        uVar9 = *(undefined8 *)puVar1;
        lVar4 = *(long *)Method_Unity_VisualScripting_SetListItem_Set__;
        plVar5 = (long *)thunk_FUN_01f116d0(lVar2,uVar9);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar2,uVar9);
        }
        lVar7 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_03467b5c;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar4,0);
LAB_03467b5c:
        lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar4 == 0) {
          if (param_1 == 0) goto LAB_03467c3c;
          if (*(long *)(param_1 + 0x38) == 0) {
            if (*(int *)(*(long *)Method_System_RuntimeType_InvokeMember__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_034617a4(param_2);
            FUN_0346779c(param_1,uVar9);
          }
        }
      }
      return lVar2;
    }
  }
LAB_03467c3c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


