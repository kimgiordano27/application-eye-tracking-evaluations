/*
FUNCTION_NAME: FUN_052d9db8
ENTRY_POINT: 052d9db8
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


void FUN_052d9db8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
                    /* try { // try from 052d9dbc to 053d9dc7 has its CatchHandler @ 052d9e2c */
                    /* try { // try from 052d9dcc to 053d9dd7 has its CatchHandler @ 052d9e30 */
                    /* try { // try from 052d9de0 to 053d9dff has its CatchHandler @ 052d9e34 */
  if ((DAT_06a52871 & 1) == 0) {
                    /* try { // try from 052d9e00 to 053d9e1b has its CatchHandler @ 052d9c58 */
    FUN_02d4dc40(
                PlayFab_Events_PlayFabEvents_PlayFabResultEvent<UnlinkNintendoSwitchDeviceIdResult>_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_0664b428);
    FUN_02d4dc40(PTR_DAT_06648af8);
                    /* try { // try from 052d9e1c to 053d9e2b has its CatchHandler @ 052d9e44 */
    FUN_02d4dc40(Oculus_Platform_Request<PurchaseList>_TypeInfo);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9dbc with catch @ 052d9e2c
                        */
    DAT_06a52871 = 1;
  }
  puVar1 = PTR_DAT_06648af8;
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9da4 with catch @ 052d9e30
                       catch(type#1 @ 06204328) { ... } // from try @ 052d9dcc with catch @ 052d9e30
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9de0 with catch @ 052d9e34
                        */
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9d8c with catch @ 052d9e38
                        */
  if ((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x10), lVar6 == 0)) {
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9d88 with catch @ 052d9e3c
                        */
    lVar6 = *(long *)(param_1 + 0x18);
  }
  lVar7 = *(long *)(param_1 + 0x10);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9d54 with catch @ 052d9e44
                       catch(type#1 @ 06204328) { ... } // from try @ 052d9e1c with catch @ 052d9e44
                        */
  if (lVar7 == 0) {
                    /* try { // try from 052d9e4c to 053d9e4f has its CatchHandler @ 052d9e8c */
                    /* try { // try from 052d9e50 to 053d9e6f has its CatchHandler @ 052d9c58 */
    lVar7 = *(long *)PTR_DAT_06648af8;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  }
  if (lVar6 != 0) {
                    /* try { // try from 052d9e70 to 053d9e73 has its CatchHandler @ 052d9e78 */
                    /* catch() { ... } // from try @ 052d9e70 with catch @ 052d9e78 */
    uVar3 = FUN_04e7faf0(*(undefined8 *)(lVar6 + 0x20),0);
    puVar2 = Oculus_Platform_Request<PurchaseList>_TypeInfo;
    puVar1 = 
    PlayFab_Events_PlayFabEvents_PlayFabResultEvent<UnlinkNintendoSwitchDeviceIdResult>_TypeInfo;
                    /* try { // try from 052d9e7c to 053d9e83 has its CatchHandler @ 052d9e8c */
    if ((uVar3 & 1) == 0) {
                    /* try { // try from 052d9e84 to 053d9e8f has its CatchHandler @ 052d9c58 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052d9e4c with catch @ 052d9e8c
                       catch(type#2 @ 00000000) { ... } // from try @ 052d9e7c with catch @ 052d9e8c
                        */
                    /* catch() { ... } // from try @ 052d9ecc with catch @ 052d9e90
                       catch() { ... } // from try @ 052d9f24 with catch @ 052d9e90
                       catch() { ... } // from try @ 052da250 with catch @ 052d9e90 */
      if (*(int *)(*(long *)PTR_DAT_0664b428 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
                    /* try { // try from 052d9eb8 to 053d9ecb has its CatchHandler @ 052d9ef4 */
                    /* try { // try from 052d9ecc to 053d9f0b has its CatchHandler @ 052d9e90 */
      FUN_032f1ac8(*(undefined8 *)puVar2,param_2,4,param_3,param_4,param_5,param_6,lVar6,lVar7,
                   param_1,*(undefined8 *)puVar1);
                    /* catch(type#1 @ 06204328) { ... } // from try @ 052d9eb8 with catch @ 052d9ef4
                        */
      return;
    }
    thunk_FUN_02db45e8(PTR_DAT_0664b438);
    uVar4 = thunk_FUN_02d8a638();
                    /* try { // try from 052d9f0c to 053d9f23 has its CatchHandler @ 052da248 */
    uVar5 = thunk_FUN_02db45e8(PTR_DAT_0664b440);
                    /* try { // try from 052d9f24 to 053da237 has its CatchHandler @ 052d9e90 */
    FUN_052d18d8(uVar4,4,uVar5);
    uVar5 = thunk_FUN_02db45e8(
                              ExitGames_Client_Photon_StructWrapping_StructWrapper<Vector3>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d4ddac(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


