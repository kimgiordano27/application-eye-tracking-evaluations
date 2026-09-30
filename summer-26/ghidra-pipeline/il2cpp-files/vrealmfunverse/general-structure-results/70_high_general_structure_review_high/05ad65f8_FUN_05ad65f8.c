/*
FUNCTION_NAME: FUN_05ad65f8
ENTRY_POINT: 05ad65f8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8
FUN_05ad65f8(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_34;
  
  if ((DAT_066d4435 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_System_Runtime_Serialization_ExtensionDataReader_MoveToDeserializedObject__)
    ;
    FUN_02b3c81c(Method_Newtonsoft_Json_Converters_DataTableConverter_GetColumnDataType__);
                    /* try { // try from 05ad6644 to 05bd664b has its CatchHandler @ 05ad6788 */
    FUN_02b3c81c(Method_System_Runtime_Serialization_ExtensionDataReader_Read__);
    DAT_066d4435 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x44);
                    /* try { // try from 05ad665c to 05bd665f has its CatchHandler @ 05ad6784 */
  if (iVar1 != 1) {
    if (iVar1 != 0) {
                    /* try { // try from 05ad6670 to 05bd6677 has its CatchHandler @ 05ad6780 */
      local_34 = iVar1;
      uVar3 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)
                          Method_System_Runtime_Serialization_ExtensionDataReader_MoveToDeserializedObject__
                         ,&local_34);
                    /* try { // try from 05ad668c to 05bd6693 has its CatchHandler @ 05ad6778 */
                    /* try { // try from 05ad66a0 to 05bd66bf has its CatchHandler @ 05ad677c */
      uVar3 = FUN_04c0af28(*(undefined8 *)
                            Method_Newtonsoft_Json_Converters_DataTableConverter_GetColumnDataType__
                           ,*(undefined8 *)
                             Method_System_Runtime_Serialization_ExtensionDataReader_Read__,uVar3,0)
      ;
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c45068(uVar3,param_4,0);
    }
    cVar2 = *(char *)(param_4 + 0x34);
    lVar4 = FUN_05c89340(param_4,0);
                    /* try { // try from 05ad66e4 to 05bd66ef has its CatchHandler @ 05ad678c */
    if (cVar2 == '\0') {
      if (lVar4 == 0) goto LAB_05ad67c0;
      fVar5 = (float)FUN_05c9bf94(lVar4,0);
    }
    else {
      if (lVar4 == 0) goto LAB_05ad67c0;
      fVar5 = (float)FUN_05c9b434(lVar4,0);
    }
                    /* try { // try from 05ad6734 to 05bd676b has its CatchHandler @ 05ad65a8 */
    *param_5 = fVar5;
    param_5[1] = param_2;
    param_5[2] = param_3;
    return 0;
  }
                    /* try { // try from 05ad66fc to 05bd66ff has its CatchHandler @ 05ad6794 */
  lVar4 = *(long *)(param_4 + 0x20);
  if (*(char *)(param_4 + 0x34) == '\0') {
    if (lVar4 == 0) goto LAB_05ad67c0;
    fVar5 = (float)FUN_05c9bf94(lVar4,0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_05ad67c0;
                    /* try { // try from 05ad676c to 05bd676f has its CatchHandler @ 05ad6790 */
                    /* try { // try from 05ad6770 to 05bd6773 has its CatchHandler @ 05ad6794 */
                    /* try { // try from 05ad6774 to 05bd6777 has its CatchHandler @ 05ad6788 */
    fVar7 = *(float *)(param_4 + 0x2c);
    fVar8 = *(float *)(param_4 + 0x30);
                    /* catch() { ... } // from try @ 05ad668c with catch @ 05ad6778
                       try { // try from 05ad6778 to 05bd67af has its CatchHandler @ 05ad65a8 */
                    /* catch() { ... } // from try @ 05ad66a0 with catch @ 05ad677c */
                    /* catch() { ... } // from try @ 05ad6670 with catch @ 05ad6780 */
    fVar6 = (float)FUN_05c9da54(*(undefined4 *)(param_4 + 0x28),*(long *)(param_4 + 0x20),0);
                    /* catch() { ... } // from try @ 05ad665c with catch @ 05ad6784 */
    fVar5 = fVar5 + fVar6;
                    /* catch() { ... } // from try @ 05ad6644 with catch @ 05ad6788
                       catch() { ... } // from try @ 05ad6774 with catch @ 05ad6788 */
    param_2 = param_2 + fVar7;
    param_3 = param_3 + fVar8;
  }
  else {
    if (lVar4 == 0) goto LAB_05ad67c0;
    fVar5 = (float)FUN_05c9b434(lVar4,0);
                    /* try { // try from 05ad6710 to 05bd6733 has its CatchHandler @ 05ad6798 */
    param_3 = param_3 + *(float *)(param_4 + 0x30);
    fVar5 = fVar5 + *(float *)(param_4 + 0x28);
    param_2 = param_2 + *(float *)(param_4 + 0x2c);
  }
  *param_5 = fVar5;
  param_5[1] = param_2;
  param_5[2] = param_3;
  lVar4 = *(long *)(param_4 + 0x78);
  FUN_057e3040(0);
  if (lVar4 != 0) {
    uVar3 = FUN_05acfcbc(lVar4);
    return uVar3;
  }
LAB_05ad67c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


