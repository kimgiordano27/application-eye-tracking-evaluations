/*
FUNCTION_NAME: FUN_035c075c
ENTRY_POINT: 035c075c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void FUN_035c075c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_04537ca7 & 1) == 0) {
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_UxmlFactory<ButtonStripField,_ButtonStripField_UxmlTraits>__ctor__
                );
    DAT_04537ca7 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    plVar1 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
    if (plVar1 != (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x50);
      if ((lVar7 != 0) &&
         (lVar2 = thunk_FUN_01c495e4(lVar7,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
        uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,0);
      }
      if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar1[4] = lVar7;
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        uVar8 = *(undefined8 *)
                 Method_UnityEngine_UIElements_UxmlFactory<ButtonStripField,_ButtonStripField_UxmlTraits>__ctor__
        ;
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
              puVar3 = (undefined8 *)(lVar7 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_035c085c;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_01c72498(plVar6,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035c085c:
        (*(code *)*puVar3)(plVar6,3,uVar8,plVar1,puVar3[1]);
        FUN_035c08c0(param_1);
        lVar7 = *(long *)(param_1 + 0x48);
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))
                    (*(undefined8 *)(lVar7 + 0x40),param_1,*(undefined8 *)(lVar7 + 0x28));
        }
        FUN_035c0a7c(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


