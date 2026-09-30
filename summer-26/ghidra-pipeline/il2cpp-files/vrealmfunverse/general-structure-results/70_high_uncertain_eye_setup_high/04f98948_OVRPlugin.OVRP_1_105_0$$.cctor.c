/*
FUNCTION_NAME: OVRPlugin.OVRP_1_105_0$$.cctor
ENTRY_POINT: 04f98948
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_105_0___cctor(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long unaff_x19;
  int iVar7;
  
  iVar5 = *(int *)(unaff_x19 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x18);
  if ((int)uVar6 < iVar5) {
LAB_04f98a0c:
                    /* try { // try from 04f98a0c to 05098a13 has its CatchHandler @ 04f98a1c */
                    /* try { // try from 04f98a14 to 05098a1f has its CatchHandler @ 04f9884c */
    thunk_FUN_02ba3594(PTR_DAT_06312bc0);
    uVar6 = thunk_FUN_02b79644();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f98a0c with catch @ 04f98a1c
                        */
    FUN_04db2a50(uVar6,0);
    uVar4 = thunk_FUN_02ba3594(System_Func<char,_bool>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6,uVar4);
  }
                    /* try { // try from 04f98958 to 05098983 has its CatchHandler @ 04f989d0 */
  iVar7 = *(int *)(param_2 + 0x18);
  do {
    iVar2 = (int)uVar6 - iVar5;
    iVar1 = iVar7;
    if (iVar2 <= iVar7) {
      iVar1 = iVar2;
    }
    FUN_04d9e334(param_2,0,param_3,iVar5,iVar1,0);
    param_3 = *(long *)(unaff_x19 + 0x18);
                    /* try { // try from 04f98988 to 0509898b has its CatchHandler @ 04f989c8 */
    iVar5 = iVar1 + *(int *)(unaff_x19 + 0x20);
                    /* try { // try from 04f9898c to 050989bb has its CatchHandler @ 04f9884c */
    *(int *)(unaff_x19 + 0x20) = iVar5;
    if (param_3 == 0) goto LAB_04f98a08;
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    iVar7 = iVar7 - iVar1;
    if ((int)uVar6 < iVar5) goto LAB_04f98a0c;
    if (iVar5 == (int)uVar6) {
      iVar5 = 0;
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
  } while (0 < iVar7);
                    /* try { // try from 04f989bc to 050989bf has its CatchHandler @ 04f989c4 */
                    /* try { // try from 04f989c0 to 050989eb has its CatchHandler @ 04f9884c */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f989bc with catch @ 04f989c4
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f98988 with catch @ 04f989c8
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04f98914 with catch @ 04f989cc
                        */
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(param_2 + 0x18) / DAT_010325c0;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar3 = FUN_05c31ee4(*(long *)(unaff_x19 + 0x10),0), lVar3 != 0)) {
    FUN_05c30f20(lVar3,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_04f98a08:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


