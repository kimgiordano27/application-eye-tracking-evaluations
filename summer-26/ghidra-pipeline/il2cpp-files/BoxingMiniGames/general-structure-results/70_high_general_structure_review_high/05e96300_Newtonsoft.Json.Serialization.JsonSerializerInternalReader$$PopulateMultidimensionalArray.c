/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateMultidimensionalArray
ENTRY_POINT: 05e96300
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateMultidimensionalArray
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long lVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  uint unaff_w24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  uint unaff_w28;
  
  while (puVar3 = PTR_DAT_079fd3d0, unaff_w24 = unaff_w24 + 1, param_1 != 0) {
    if ((int)*(uint *)(param_1 + 0x18) <= (int)unaff_w24) {
                    /* try { // try from 05e9630c to 05f9631b has its CatchHandler @ 05e9631c */
      if (unaff_x21 != 0) {
                    /* catch() { ... } // from try @ 05e96270 with catch @ 05e9631c
                       catch() { ... } // from try @ 05e9630c with catch @ 05e9631c */
                    /* try { // try from 05e96320 to 05f96323 has its CatchHandler @ 05e9632c */
                    /* try { // try from 05e96324 to 05f9632f has its CatchHandler @ 05e96174 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05e96320 with catch @ 05e9632c
                        */
        FUN_05e8dc14();
        return;
      }
      if (unaff_x20 != 0) {
        thunk_FUN_03650fbc();
        FUN_05e90c08(unaff_x20);
        FUN_05e8d2b0();
        return;
      }
      if ((*(int *)(*(long *)PTR_DAT_079fd3d0 + 0xe4) == 0) &&
         (thunk_FUN_036a1978(), *(int *)(*(long *)puVar3 + 0xe4) == 0)) {
        thunk_FUN_036a1978();
      }
      if (DAT_07ed8c6c == '\0') {
        FUN_03642964(PTR_DAT_079fd3d0);
        FUN_03642964(PTR_DAT_079f5558);
        DAT_07ed8c6c = '\x01';
      }
      puVar2 = PTR_DAT_079f5558;
      lVar7 = *(long *)PTR_DAT_079f5558;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar7 = *(long *)puVar2;
      }
      if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_05e8e0d0();
      }
      Unity_Properties_TypeConverter<bool,_object>___ctor();
      return;
    }
    if (*(uint *)(param_1 + 0x18) <= unaff_w24) {
LAB_05e9643c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar7 = *(long *)(param_1 + (long)(int)unaff_w24 * 8 + 0x20);
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar7 + 0x38);
    thunk_FUN_03650fbc();
    if ((uVar1 >> 0x15 & 1) == 0) {
      uVar1 = *(uint *)(lVar7 + 0x38);
      thunk_FUN_03650fbc();
      lVar6 = lVar7;
      if (unaff_x20 != 0 || (uVar1 & 0x600000) != unaff_w28) {
        lVar6 = unaff_x20;
      }
    }
    else {
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_0367fe20(*unaff_x25);
        FUN_047e0b70(unaff_x21,*unaff_x26);
        uVar4 = FUN_05e90a5c(lVar7);
        if (unaff_x21 == 0) break;
      }
      else {
        uVar4 = FUN_05e90a5c(lVar7);
      }
      FUN_047e13bc(unaff_x21,uVar4,*unaff_x27);
      lVar6 = unaff_x20;
    }
    uVar1 = *(uint *)(lVar7 + 0x38);
    thunk_FUN_03650fbc();
    if ((uVar1 >> 0x1c & 1) == 0) {
      lVar7 = *(long *)(unaff_x19 + 0x58);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= unaff_w24) goto LAB_05e9643c;
      puVar5 = (undefined8 *)(lVar7 + (long)(int)unaff_w24 * 8 + 0x20);
      *puVar5 = 0;
      thunk_FUN_036b7ad0(puVar5,0);
    }
    else {
      FUN_05e8f6a8();
    }
    unaff_x20 = lVar6;
    param_1 = *(long *)(unaff_x19 + 0x58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


