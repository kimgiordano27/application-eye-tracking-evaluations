/*
FUNCTION_NAME: FUN_035bdbc0
ENTRY_POINT: 035bdbc0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_035bdbc0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_0422f9e8;
  if ((DAT_04537c8f & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<string>_Invoke__);
    DAT_04537c8f = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03d4dc54(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    lVar8 = *(long *)PTR_DAT_0422f958;
    lVar4 = *(long *)(lVar8 + 0x38);
    if (lVar4 == 0) {
      FUN_01c723f0(lVar8);
      lVar4 = *(long *)(lVar8 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394();
    }
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar9 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<string>_Invoke__;
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_035bdd20;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar7,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1)
      ;
LAB_035bdd20:
      (*(code *)*puVar3)(plVar7,3,uVar9,uVar6,puVar3[1]);
      FUN_035b9f04(param_1);
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_035bdd60(*(long *)(param_1 + 0x50),param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


