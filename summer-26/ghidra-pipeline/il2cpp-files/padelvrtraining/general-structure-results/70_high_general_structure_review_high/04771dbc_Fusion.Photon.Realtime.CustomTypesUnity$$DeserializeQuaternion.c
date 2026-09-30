/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$DeserializeQuaternion
ENTRY_POINT: 04771dbc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__DeserializeQuaternion
               (ulong param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0f20);
                    /* try { // try from 04771dd4 to 04871ddb has its CatchHandler @ 04771f94 */
    *(undefined1 *)(unaff_x23 + 0xf64) = 1;
  }
  if (*(char *)((long)param_2 + 0x9d) == '\0') {
                    /* try { // try from 04771de4 to 04871e3b has its CatchHandler @ 04771f9c */
    lVar5 = param_2[10];
    thunk_FUN_03d187c8();
    if ((char)lVar5 == '\0') {
      if (param_2[0x14] == 0) {
LAB_04771f20:
                    /* WARNING: Subroutine does not return */
        FUN_03d2d548();
      }
      iVar3 = FUN_045595cc(param_2[0x14],0);
      if ((iVar3 == 0) &&
         (uVar4 = (**(code **)(*param_2 + 0x2e8))
                            (param_2,param_3,unaff_w21,unaff_w20,*(undefined8 *)(*param_2 + 0x2f0)),
         (uVar4 & 1) != 0)) {
        lVar5 = param_2[10];
        thunk_FUN_03d187c8();
        if ((char)lVar5 == '\0') {
          return;
        }
      }
      else {
        puVar2 = PTR_DAT_091a0f20;
        if (param_2[0x14] == 0) goto LAB_04771f20;
                    /* try { // try from 04771e44 to 04871eb7 has its CatchHandler @ 04771fa4 */
        FUN_04559344(param_2[0x14],param_3,unaff_w21,unaff_w20,0);
        do {
          if (param_2[0x14] == 0) goto LAB_04771f20;
          iVar3 = FUN_045595cc(param_2[0x14],0);
          if (iVar3 < 5) {
            return;
          }
          uVar6 = FUN_03d2d394(*(undefined8 *)puVar2,5);
          if (param_2[0x14] == 0) goto LAB_04771f20;
          iVar3 = FUN_0455935c(param_2[0x14],uVar6,0);
          if (iVar3 != 5) goto LAB_04771f24;
          lVar5 = (**(code **)(*param_2 + 0x2c8))(param_2,uVar6,*(undefined8 *)(*param_2 + 0x2d0));
                    /* try { // try from 04771ec8 to 04871ed3 has its CatchHandler @ 04771f9c */
                    /* try { // try from 04771ed4 to 04871f6f has its CatchHandler @ 04771b94 */
          if ((param_2[0x14] == 0) || (iVar3 = FUN_045595cc(param_2[0x14],0), lVar5 == 0))
          goto LAB_04771f20;
          if (iVar3 < *(int *)(lVar5 + 0x10)) {
            return;
          }
          (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
          lVar5 = param_2[10];
          thunk_FUN_03d187c8();
        } while ((char)lVar5 == '\0');
      }
      cVar1 = *(char *)((long)param_2 + 0x52);
      thunk_FUN_03d187c8();
      if (cVar1 != '\0') {
        return;
      }
LAB_04771f24:
      thunk_FUN_03d1e194(PTR_DAT_091c6fe0);
      uVar6 = thunk_FUN_03d2ef40();
      Fusion_UTF32Tools__Convert(uVar6,0x50);
    }
    else {
                    /* catch() { ... } // from try @ 04771f84 with catch @ 04771f90 */
                    /* catch() { ... } // from try @ 04771dd4 with catch @ 04771f94 */
      thunk_FUN_03d1e194(PTR_DAT_091ae3f0);
                    /* catch() { ... } // from try @ 04771f7c with catch @ 04771f98 */
      uVar6 = thunk_FUN_03d2ef40();
                    /* catch() { ... } // from try @ 04771de4 with catch @ 04771f9c
                       catch() { ... } // from try @ 04771ec8 with catch @ 04771f9c */
                    /* catch() { ... } // from try @ 04771f74 with catch @ 04771fa0 */
                    /* catch() { ... } // from try @ 04771e44 with catch @ 04771fa4 */
                    /* catch() { ... } // from try @ 04771d9c with catch @ 04771fa8 */
      uVar7 = thunk_FUN_03d1e194(PTR_DAT_091d2a40);
                    /* catch() { ... } // from try @ 04771f70 with catch @ 04771fac */
                    /* catch() { ... } // from try @ 04771d3c with catch @ 04771fb0 */
                    /* catch() { ... } // from try @ 04771ce0 with catch @ 04771fb4 */
      FUN_070b2bb8(uVar6,uVar7,0);
    }
  }
  else {
    thunk_FUN_03d1e194(PTR_DAT_091aa550);
    uVar6 = thunk_FUN_03d2ef40();
                    /* try { // try from 04771f70 to 04871f73 has its CatchHandler @ 04771fac */
                    /* try { // try from 04771f74 to 04871f7b has its CatchHandler @ 04771fa0 */
    uVar7 = thunk_FUN_03d1e194(PTR_DAT_091d2a88);
                    /* try { // try from 04771f7c to 04871f83 has its CatchHandler @ 04771f98 */
                    /* try { // try from 04771f84 to 04871f87 has its CatchHandler @ 04771f90 */
    Newtonsoft_Json_Serialization_JsonFormatterConverter__ToInt16(uVar6,uVar7,0);
                    /* try { // try from 04771f88 to 04871fc3 has its CatchHandler @ 04771b94 */
  }
  uVar7 = thunk_FUN_03d1e194(PTR_DAT_091d2a80);
                    /* WARNING: Subroutine does not return */
  FUN_03d2d414(uVar6,uVar7);
}


