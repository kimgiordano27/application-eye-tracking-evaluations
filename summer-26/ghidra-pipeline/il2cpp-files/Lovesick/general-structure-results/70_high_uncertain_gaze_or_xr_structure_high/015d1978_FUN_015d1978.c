/*
FUNCTION_NAME: FUN_015d1978
ENTRY_POINT: 015d1978
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_gaze_retrieval_or_extraction
*/


void FUN_015d1978(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
                    /* try { // try from 015d1994 to 016d19a3 has its CatchHandler @ 015d19a4 */
                    /* catch() { ... } // from try @ 015d192c with catch @ 015d19a4
                       catch() { ... } // from try @ 015d1994 with catch @ 015d19a4 */
                    /* try { // try from 015d19a8 to 016d19ab has its CatchHandler @ 015d19b4 */
                    /* try { // try from 015d19ac to 016d19b7 has its CatchHandler @ 015d15dc */
  if ((DAT_03777ee0 & 1) == 0) {
                    /* catch() { ... } // from try @ 015d19a8 with catch @ 015d19b4 */
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence___TypeInfo);
    DAT_03777ee0 = 1;
  }
  lVar3 = FUN_00da4fb8(*(undefined8 *)puVar2,8);
  plVar4 = (long *)FUN_01631728(0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x198))(plVar4,lVar3,*(undefined8 *)(*plVar4 + 0x1a0));
    if (param_2 != 0) {
      lVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,*(int *)(param_2 + 0x18) + 8);
      FUN_017953b8(param_2,lVar5,0,0);
      if (lVar3 != 0) {
        FUN_017953b8(lVar3,lVar5,*(undefined4 *)(param_2 + 0x18),0);
        uVar6 = FUN_00da4fb8(*(undefined8 *)puVar2,0x18);
        *param_3 = uVar6;
        FUN_017953b8(lVar3,uVar6,0,0);
        lVar7 = FUN_016316c4(0);
        puVar1 = OVRPlugin_TrackingConfidence___TypeInfo;
        if (lVar7 != 0) {
          lVar7 = FUN_0162cbac(lVar7,lVar5,0);
          lVar8 = FUN_00da4fb8(*(undefined8 *)puVar2,8);
          FUN_01796450(lVar7,lVar8,8,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_015d190c(param_1,lVar8);
          *param_4 = uVar6;
          FUN_0179519c(lVar3,0,*(undefined4 *)(lVar3 + 0x18),0);
          if (((lVar5 != 0) && (FUN_0179519c(lVar5,0,*(undefined4 *)(lVar5 + 0x18),0), lVar8 != 0))
             && (FUN_0179519c(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0), lVar7 != 0)) {
            FUN_0179519c(lVar7,0,*(undefined4 *)(lVar7 + 0x18),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


