/*
FUNCTION_NAME: FUN_03309364
ENTRY_POINT: 03309364
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_03309364(long *param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 03308f94 with catch @ 03309364 */
                    /* catch() { ... } // from try @ 03308fa4 with catch @ 03309368 */
                    /* catch() { ... } // from try @ 03308f2c with catch @ 0330936c */
                    /* catch() { ... } // from try @ 03308ed0 with catch @ 03309370 */
  if ((DAT_0453314a & 1) == 0) {
                    /* try { // try from 03309388 to 0340938b has its CatchHandler @ 03309398 */
    FUN_01c5d288(PTR_DAT_0422fd68);
                    /* catch() { ... } // from try @ 03309388 with catch @ 03309398 */
    FUN_01c5d288(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230aa8);
    FUN_01c5d288(System_Collections_Generic_List<InstalledApplication>_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary<string,_ProbeVolumePerSceneData_PerScenarioData>_Add__
                );
    DAT_0453314a = 1;
  }
  if ((param_3 & 1) == 0) {
LAB_03309418:
    uVar3 = FUN_03309124(param_1);
  }
  else {
                    /* try { // try from 033093d8 to 034093ff has its CatchHandler @ 03309414 */
    lVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) < 1)) goto LAB_03309418;
    uVar3 = FUN_03309124(param_1);
                    /* try { // try from 03309400 to 0340940b has its CatchHandler @ 03308cac */
                    /* try { // try from 0330940c to 03409413 has its CatchHandler @ 03309414 */
    uVar3 = FUN_03152fb8(uVar3,*(undefined8 *)PTR_DAT_04230aa8,lVar2,0);
                    /* catch() { ... } // from try @ 03309348 with catch @ 03309414
                       catch() { ... } // from try @ 033093d8 with catch @ 03309414
                       catch() { ... } // from try @ 0330940c with catch @ 03309414 */
  }
  if (param_1[5] == 0) {
LAB_033094f4:
    lVar2 = FUN_033091f0(param_1,param_2 & 1);
    if (lVar2 != 0) {
      uVar4 = FUN_03317620(0);
      uVar3 = FUN_03152fb8(uVar3,uVar4,lVar2,0);
      return uVar3;
    }
    return uVar3;
  }
  lVar2 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_0422fd68,6);
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) != 0) &&
       (*(undefined8 *)(lVar2 + 0x20) = uVar3, *(int *)(lVar2 + 0x18) != 1)) {
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo;
      if (param_1[5] == 0) goto LAB_03309548;
      uVar3 = FUN_03309364(param_1[5],param_2 & 1,param_3 & 1);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uVar3;
        uVar3 = FUN_03317620(0);
        if ((3 < *(uint *)(lVar2 + 0x18)) &&
           (*(undefined8 *)(lVar2 + 0x38) = uVar3,
           puVar1 = 
           Method_System_Collections_Generic_Dictionary<string,_ProbeVolumePerSceneData_PerScenarioData>_Add__
           , *(uint *)(lVar2 + 0x18) != 4)) {
          *(undefined8 *)(lVar2 + 0x40) =
               *(undefined8 *)System_Collections_Generic_List<InstalledApplication>_TypeInfo;
          uVar3 = FUN_03313b64(*(undefined8 *)puVar1,0);
          if (5 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x48) = uVar3;
            uVar3 = FUN_031533cc(lVar2,0);
            goto LAB_033094f4;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
LAB_03309548:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


