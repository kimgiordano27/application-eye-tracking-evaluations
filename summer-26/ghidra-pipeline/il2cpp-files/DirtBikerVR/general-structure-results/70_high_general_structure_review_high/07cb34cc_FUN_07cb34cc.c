/*
FUNCTION_NAME: FUN_07cb34cc
ENTRY_POINT: 07cb34cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3
*/


void FUN_07cb34cc(undefined4 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if ((DAT_08997119 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08486798);
    FUN_03a8a718(PTR_DAT_0848ef28);
    FUN_03a8a718(NWH_VehiclePhysics2_Modules_Trailer_TrailerHitchModule_TypeInfo);
                    /* try { // try from 07cb3510 to 07db354b has its CatchHandler @ 07cb38a8 */
    FUN_03a8a718(NWH_VehiclePhysics2_Modules_Trailer_TrailerModule_TypeInfo);
    DAT_08997119 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar1 = FUN_04de8118(param_2,*(undefined8 *)
                                NWH_VehiclePhysics2_Modules_Trailer_TrailerHitchModule_TypeInfo);
  uVar3 = *param_1;
                    /* try { // try from 07cb354c to 07db3557 has its CatchHandler @ 07cb3894 */
  if (DAT_08997108 == (code *)0x0) {
                    /* try { // try from 07cb3558 to 07db356b has its CatchHandler @ 07cb3890 */
    DAT_08997108 = (code *)FUN_03a8a6dc(
                                       "UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)"
                                       );
  }
  iVar2 = (*DAT_08997108)(uVar3);
                    /* try { // try from 07cb3570 to 07db357b has its CatchHandler @ 07cb388c */
  if (iVar1 < iVar2) {
    uVar3 = *param_1;
    if (DAT_08997108 == (code *)0x0) {
      DAT_08997108 = (code *)FUN_03a8a6dc(
                                         "UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)"
                                         );
                    /* try { // try from 07cb358c to 07db358f has its CatchHandler @ 07cb382c */
                    /* try { // try from 07cb3590 to 07db359f has its CatchHandler @ 07cb3870 */
    }
    uVar3 = (*DAT_08997108)(uVar3);
                    /* try { // try from 07cb35a0 to 07db35ab has its CatchHandler @ 07cb3868 */
    FUN_04de8130(param_2,uVar3,
                 *(undefined8 *)NWH_VehiclePhysics2_Modules_Trailer_TrailerModule_TypeInfo);
  }
  iVar1 = *(int *)(param_2 + 0x18);
                    /* try { // try from 07cb35c0 to 07db35c3 has its CatchHandler @ 07cb3820 */
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
                    /* try { // try from 07cb35c4 to 07db35d3 has its CatchHandler @ 07cb384c */
  if (0 < iVar1) {
                    /* try { // try from 07cb35d4 to 07db35df has its CatchHandler @ 07cb3848 */
    Newtonsoft_Json_Schema_ValidationEventArgs__get_Path(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
  }
  uVar3 = *param_1;
  if (DAT_089970f0 == (code *)0x0) {
                    /* try { // try from 07cb35f0 to 07db35f3 has its CatchHandler @ 07cb3884 */
    DAT_089970f0 = (code *)FUN_03a8a6dc(
                                       "UnityEngine.SceneManagement.Scene::IsValidInternal(System.Int32)"
                                       );
                    /* try { // try from 07cb35f4 to 07db35ff has its CatchHandler @ 07cb3824 */
  }
  uVar4 = (*DAT_089970f0)(uVar3);
  if ((uVar4 & 1) != 0) {
                    /* try { // try from 07cb3610 to 07db3617 has its CatchHandler @ 07cb3888 */
    if (*(int *)(*(long *)PTR_DAT_08486798 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar4 = FUN_07c43018(0);
    if ((uVar4 & 1) == 0) {
      uVar3 = *param_1;
                    /* try { // try from 07cb3634 to 07db3637 has its CatchHandler @ 07cb3884 */
      if (DAT_089970f8 == (code *)0x0) {
                    /* try { // try from 07cb3644 to 07db364b has its CatchHandler @ 07cb387c */
        DAT_089970f8 = (code *)FUN_03a8a6dc(
                                           "UnityEngine.SceneManagement.Scene::GetIsLoadedInternal(System.Int32)"
                                           );
      }
      uVar4 = (*DAT_089970f8)(uVar3);
      if ((uVar4 & 1) == 0) {
                    /* try { // try from 07cb36fc to 07db370b has its CatchHandler @ 07cb3858 */
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar5 = thunk_FUN_03ac74bc();
        puVar7 = Unity_Services_Analytics_TransactionEvent_TypeInfo;
        goto LAB_07cb3714;
      }
    }
                    /* try { // try from 07cb365c to 07db365f has its CatchHandler @ 07cb3834 */
                    /* try { // try from 07cb3660 to 07db366b has its CatchHandler @ 07cb3880 */
    uVar3 = *param_1;
    if (DAT_08997108 == (code *)0x0) {
      DAT_08997108 = (code *)FUN_03a8a6dc(
                                         "UnityEngine.SceneManagement.Scene::GetRootCountInternal(System.Int32)"
                                         );
    }
    iVar1 = (*DAT_08997108)(uVar3);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      if (DAT_08997110 == (code *)0x0) {
        DAT_08997110 = (code *)FUN_03a8a6dc(
                                           "UnityEngine.SceneManagement.Scene::GetRootGameObjectsInternal(System.Int32,System.Object)"
                                           );
                    /* try { // try from 07cb36a8 to 07db36b3 has its CatchHandler @ 07cb38a4 */
      }
                    /* try { // try from 07cb36bc to 07db36bf has its CatchHandler @ 07cb3884 */
                    /* WARNING: Could not recover jumptable at 0x07cb36c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_08997110)(uVar3,param_2);
      return;
    }
                    /* try { // try from 07cb36cc to 07db36d3 has its CatchHandler @ 07cb3860 */
    return;
  }
  thunk_FUN_03af1434(PTR_DAT_08488490);
                    /* try { // try from 07cb36e4 to 07db36e7 has its CatchHandler @ 07cb3828 */
  uVar5 = thunk_FUN_03ac74bc();
  puVar7 = Unity_Services_Analytics_TransactionCurrencyConverter_TypeInfo;
                    /* try { // try from 07cb36e8 to 07db36f3 has its CatchHandler @ 07cb385c */
LAB_07cb3714:
  uVar6 = thunk_FUN_03af1434(puVar7);
                    /* try { // try from 07cb3720 to 07db3743 has its CatchHandler @ 07cb38a4 */
  FUN_066b6070(uVar5,uVar6,0);
  uVar6 = thunk_FUN_03af1434(Unity_Services_Analytics_TransactionVirtualCurrency_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar5,uVar6);
}


