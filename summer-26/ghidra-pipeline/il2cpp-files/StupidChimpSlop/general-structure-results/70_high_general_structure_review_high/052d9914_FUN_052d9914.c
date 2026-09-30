/*
FUNCTION_NAME: FUN_052d9914
ENTRY_POINT: 052d9914
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_052d9914(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
                    /* catch() { ... } // from try @ 052d9958 with catch @ 052d9940
                       catch() { ... } // from try @ 052d9990 with catch @ 052d9940
                       catch() { ... } // from try @ 052d99b8 with catch @ 052d9940 */
  if ((DAT_06a5286e & 1) == 0) {
                    /* try { // try from 052d9954 to 053d9957 has its CatchHandler @ 052d9970 */
                    /* try { // try from 052d9958 to 053d998b has its CatchHandler @ 052d9940 */
    FUN_02d4dc40(
                PlayFab_Events_PlayFabEvents_PlayFabResultEvent<UnlinkNintendoSwitchDeviceIdResult>_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0664b428);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9954 with catch @ 052d9970
                        */
    FUN_02d4dc40(PTR_DAT_06648af8);
    FUN_02d4dc40(Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo);
    DAT_06a5286e = 1;
  }
  puVar1 = PTR_DAT_06648af8;
                    /* try { // try from 052d998c to 053d998f has its CatchHandler @ 052d99ac */
                    /* try { // try from 052d9990 to 053d99af has its CatchHandler @ 052d9940 */
  if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x10), lVar6 == 0)) {
    lVar6 = *(long *)(param_1 + 0x18);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 052d998c with catch @ 052d99ac */
    lVar7 = *(long *)PTR_DAT_06648af8;
                    /* try { // try from 052d99b0 to 053d99b7 has its CatchHandler @ 052d99c0 */
    if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 052d99b8 to 053d99c3 has its CatchHandler @ 052d9940 */
      thunk_FUN_02dabd98();
      lVar7 = *(long *)puVar1;
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052d99b0 with catch @ 052d99c0
                        */
                    /* catch() { ... } // from try @ 052d99fc with catch @ 052d99c4
                       catch() { ... } // from try @ 052d9a50 with catch @ 052d99c4
                       catch() { ... } // from try @ 052d9ad8 with catch @ 052d99c4 */
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  }
  if (lVar6 != 0) {
    uVar3 = FUN_04e7faf0(*(undefined8 *)(lVar6 + 0x20),0);
    puVar2 = Oculus_Platform_Request<MicrophoneAvailabilityState>_TypeInfo;
    puVar1 = 
    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<UnlinkNintendoSwitchDeviceIdResult>_TypeInfo;
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 052d99f0 to 053d99fb has its CatchHandler @ 052d9a20 */
                    /* try { // try from 052d99fc to 053d9a37 has its CatchHandler @ 052d99c4 */
      if (*(int *)(*(long *)PTR_DAT_0664b428 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d99f0 with catch @ 052d9a20
                        */
      FUN_032f1ac8(*(undefined8 *)puVar2,param_2,4,param_3,param_4,param_5,param_6,lVar6,lVar7,
                   param_1,*(undefined8 *)puVar1);
      return;
    }
    thunk_FUN_02db45e8(PTR_DAT_0664b438);
    uVar4 = thunk_FUN_02d8a638();
    uVar5 = thunk_FUN_02db45e8(PTR_DAT_0664b440);
    FUN_052d18d8(uVar4,4,uVar5);
    uVar5 = thunk_FUN_02db45e8(
                              ExitGames_Client_Photon_StructWrapping_StructWrapper<Quaternion>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


