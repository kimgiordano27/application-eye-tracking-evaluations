/*
FUNCTION_NAME: FUN_072ccf50
ENTRY_POINT: 072ccf50
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_072ccf50(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_07d96380;
                    /* try { // try from 072ccf58 to 073ccf7f has its CatchHandler @ 072cd060 */
  if ((DAT_08268ad6 & 1) == 0) {
    FUN_0373b518(System_Collections_Generic_IReadOnlyDictionary<ulong,_PendingClient>_TypeInfo);
                    /* try { // try from 072ccf90 to 073ccf93 has its CatchHandler @ 072cd050 */
                    /* try { // try from 072ccf94 to 073ccfa3 has its CatchHandler @ 072cd05c */
    FUN_0373b518(OVRPlugin_Quatf___TypeInfo);
    FUN_0373b518(PTR_DAT_07d96380);
                    /* try { // try from 072ccfac to 073ccfb7 has its CatchHandler @ 072cd058 */
    FUN_0373b518(PTR_DAT_07db3780);
                    /* try { // try from 072ccfb8 to 073cd037 has its CatchHandler @ 072ccd84 */
    FUN_0373b518(PTR_DAT_07d96398);
    FUN_0373b518(PTR_DAT_07d868a0);
    DAT_08268ad6 = 1;
  }
  puVar1 = PTR_DAT_07d868a0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar7 = FUN_07223f4c(*(undefined8 *)puVar1,0);
  if (lVar7 != 0) {
    FUN_03f3d768(lVar7,param_2,0,
                 *(undefined8 *)
                  System_Collections_Generic_IReadOnlyDictionary<ulong,_PendingClient>_TypeInfo);
    lVar7 = FUN_07223f4c(*(undefined8 *)puVar1,0);
    puVar2 = PTR_DAT_07db3780;
    if ((param_1 != 0) && (lVar7 != 0)) {
                    /* try { // try from 072cd038 to 073cd03b has its CatchHandler @ 072cd054 */
                    /* try { // try from 072cd03c to 073cd03f has its CatchHandler @ 072ccd84 */
                    /* try { // try from 072cd040 to 073cd043 has its CatchHandler @ 072cd04c */
      FUN_03f3e2e0(lVar7,param_2,*(undefined4 *)(param_1 + 0x10),
                   *(undefined8 *)OVRPlugin_Quatf___TypeInfo);
                    /* try { // try from 072cd044 to 073cd073 has its CatchHandler @ 072ccd84 */
      if (param_2 < 1) {
                    /* try { // try from 072cd074 to 073cd077 has its CatchHandler @ 072cd088 */
        uVar3 = 0;
      }
      else {
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072cd040 with catch @ 072cd04c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072ccf90 with catch @ 072cd050
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072cd038 with catch @ 072cd054
                        */
        uVar3 = FUN_060bb390(param_1,param_2 + -1,0);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072ccfac with catch @ 072cd058
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072ccf94 with catch @ 072cd05c
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072ccf58 with catch @ 072cd060
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 072ccefc with catch @ 072cd064
                        */
        local_44 = 0;
        FUN_04e5a2ac(&local_44,uVar3,*(undefined8 *)puVar2);
        uVar3 = local_44;
      }
      puVar1 = PTR_DAT_07d96398;
                    /* catch() { ... } // from try @ 072cd074 with catch @ 072cd088 */
      uVar4 = FUN_060bb390(param_1,param_2,0);
      uVar5 = 0;
      if (param_2 < *(int *)(param_1 + 0x10) + -1) {
        uVar5 = FUN_060bb390(param_1,param_2 + 1,0);
                    /* try { // try from 072cd0c0 to 073cd0e7 has its CatchHandler @ 072cd0fc */
        local_48 = 0;
        FUN_04e5a2ac(&local_48,uVar5,*(undefined8 *)puVar2);
        uVar5 = local_48;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
                    /* try { // try from 072cd0e8 to 073cd0f3 has its CatchHandler @ 072ccd84 */
      uVar6 = FUN_072ccc88(uVar3,uVar4,uVar5);
                    /* try { // try from 072cd0f4 to 073cd0fb has its CatchHandler @ 072cd0fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 072cd0c0 with catch @ 072cd0fc
                       catch(type#2 @ 00000000) { ... } // from try @ 072cd0f4 with catch @ 072cd0fc
                        */
      return uVar6 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


