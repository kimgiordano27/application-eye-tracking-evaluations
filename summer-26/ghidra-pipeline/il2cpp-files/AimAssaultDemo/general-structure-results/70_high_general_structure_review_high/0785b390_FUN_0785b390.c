/*
FUNCTION_NAME: FUN_0785b390
ENTRY_POINT: 0785b390
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_7
*/


uint FUN_0785b390(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 0785b398 to 0795b39f has its CatchHandler @ 0785b418 */
                    /* try { // try from 0785b3a0 to 0795b3bb has its CatchHandler @ 0785ac3c */
  if ((DAT_08272708 & 1) == 0) {
                    /* try { // try from 0785b3bc to 0795b3bf has its CatchHandler @ 0785b3f4 */
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<CurveVisualController_AdjustCastHitEndPoint_00000C87_PostfixBurstDelegate>_get_Value__
                );
                    /* try { // try from 0785b3c0 to 0795b3df has its CatchHandler @ 0785ac3c */
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<CurveVisualController_ComputeFallBackLine_00000C88_PostfixBurstDelegate>_get_Value__
                );
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<CurveVisualController_GetAdjustedEndPointForMaxDistance_00000C85_PostfixBurstDelegate>_get_Value__
                );
                    /* try { // try from 0785b3e0 to 0795b403 has its CatchHandler @ 0785b418 */
    FUN_0373b518(PTR_DAT_07d990c8);
                    /* catch() { ... } // from try @ 0785b384 with catch @ 0785b3e8 */
    FUN_0373b518(
                Method_Unity_Burst_FunctionPointer<CurveVisualController_GetClosestPointOnLine_00000C86_PostfixBurstDelegate>_get_Value__
                );
                    /* catch() { ... } // from try @ 0785b3bc with catch @ 0785b3f4 */
    DAT_08272708 = 1;
  }
  puVar2 = 
  Method_Unity_Burst_FunctionPointer<CurveVisualController_ComputeFallBackLine_00000C88_PostfixBurstDelegate>_get_Value__
  ;
  puVar1 = 
  Method_Unity_Burst_FunctionPointer<CurveVisualController_AdjustCastHitEndPoint_00000C87_PostfixBurstDelegate>_get_Value__
  ;
  local_58 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
                    /* try { // try from 0785b404 to 0795b40f has its CatchHandler @ 0785ac3c */
  local_60 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* try { // try from 0785b410 to 0795b417 has its CatchHandler @ 0785b418 */
                    /* catch() { ... } // from try @ 0785b398 with catch @ 0785b418
                       catch() { ... } // from try @ 0785b3e0 with catch @ 0785b418
                       catch() { ... } // from try @ 0785b410 with catch @ 0785b418 */
                    /* try { // try from 0785b41c to 0795b68f has its CatchHandler @ 0785b41c
                       catch() { ... } // from try @ 0785b41c with catch @ 0785b41c
                       catch() { ... } // from try @ 0785b708 with catch @ 0785b41c
                       catch() { ... } // from try @ 0785b730 with catch @ 0785b41c
                       catch() { ... } // from try @ 0785b760 with catch @ 0785b41c
                       catch() { ... } // from try @ 0785b96c with catch @ 0785b41c */
  FUN_04998570(&local_80,*(long *)(param_1 + 0x18),
               *(undefined8 *)
                Method_Unity_Burst_FunctionPointer<CurveVisualController_GetClosestPointOnLine_00000C86_PostfixBurstDelegate>_get_Value__
              );
  uStack_48 = uStack_78;
  local_50 = local_80;
  local_38 = uStack_68;
  local_40 = uStack_70;
  do {
    uVar3 = FUN_05d5a898(&local_50,*(undefined8 *)puVar2);
    if ((uVar3 & 1) == 0) goto LAB_0785b4d8;
    local_60 = local_40;
    local_58 = (undefined4)local_38;
    uVar5 = FUN_07854dc0(&local_60,param_2);
  } while ((uVar5 & 1) == 0);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *param_2;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d990c8) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0785b4c8;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c(param_2,*(long *)PTR_DAT_07d990c8,0);
LAB_0785b4c8:
  uVar4 = (*(code *)*puVar6)(param_2,puVar6[1]);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
LAB_0785b4d8:
  FUN_05d5a894(&local_50,*(undefined8 *)puVar1);
  return uVar3 & 1;
}


