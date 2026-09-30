/*
FUNCTION_NAME: FUN_035b467c
ENTRY_POINT: 035b467c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


void FUN_035b467c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_DAT_0422f9e8;
  if ((DAT_04537c51 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(Method_System_Tuple<TextWriter,_string>_get_Item2__);
    DAT_04537c51 = 1;
  }
  FUN_03cf96c0(*(undefined8 *)(param_1 + 0x20),0);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03d4f3bc(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar7 = FUN_03d468e8(*(long *)(param_1 + 0x10),0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar4);
    }
    FUN_03d4ea0c(uVar7,0);
    plVar6 = *(long **)(param_1 + 0x28);
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
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar7 = **(undefined8 **)(lVar4 + 0xb8);
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar9 = *(undefined8 *)Method_System_Tuple<TextWriter,_string>_get_Item2__;
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_035b480c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar6,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1)
      ;
LAB_035b480c:
                    /* WARNING: Could not recover jumptable at 0x035b4828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar6,3,uVar9,uVar7,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


