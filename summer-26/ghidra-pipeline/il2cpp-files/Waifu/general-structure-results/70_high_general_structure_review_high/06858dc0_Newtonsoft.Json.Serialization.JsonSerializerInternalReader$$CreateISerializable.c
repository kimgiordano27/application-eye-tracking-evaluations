/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 06858dc0
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  int iVar5;
  int unaff_w23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *plVar6;
  long lVar7;
  long unaff_x28;
  
  while( true ) {
    iVar5 = unaff_w22;
    if (-1 < param_1) goto LAB_06858e28;
    lVar7 = *unaff_x21;
    if (lVar7 == 0) break;
    uVar2 = FUN_06848650(lVar7,unaff_w23,0);
    FUN_06853274(lVar7,uVar2,unaff_w23 + 1,0);
    lVar7 = unaff_x21[1];
                    /* try { // try from 06858df8 to 06958e0b has its CatchHandler @ 06858fdc */
    if (lVar7 != 0) {
      uVar2 = FUN_06848650(lVar7,unaff_w23,0);
      FUN_06853274(lVar7,uVar2,unaff_w23 + 1,0);
    }
    unaff_w23 = unaff_w23 + -1;
    while (iVar5 = unaff_w22, unaff_w23 < unaff_w20) {
LAB_06858e28:
      if (*unaff_x21 == 0) goto LAB_06858e84;
                    /* try { // try from 06858e3c to 06958e47 has its CatchHandler @ 06858fd4 */
      FUN_06853274(*unaff_x21,unaff_x25,unaff_w23 + 1,0);
      if (unaff_x21[1] != 0) {
        FUN_06853274(unaff_x21[1],unaff_x24,unaff_w23 + 1,0);
      }
                    /* try { // try from 06858e60 to 06958e63 has its CatchHandler @ 06858fd0 */
      if (iVar5 == unaff_w19) {
                    /* try { // try from 06858e6c to 06958e73 has its CatchHandler @ 06858fd8 */
                    /* try { // try from 06858e74 to 06958ff3 has its CatchHandler @ 06858cd0 */
        return;
      }
      if (*unaff_x21 == 0) goto LAB_06858e84;
      unaff_w22 = iVar5 + 1;
      unaff_x25 = FUN_06848650(*unaff_x21,unaff_w22,0);
      unaff_w23 = iVar5;
      if (unaff_x21[1] == 0) {
        unaff_x24 = 0;
      }
      else {
        unaff_x24 = FUN_06848650(unaff_x21[1],unaff_w22,0);
      }
    }
    if (*unaff_x21 == 0) break;
    plVar6 = (long *)unaff_x21[2];
    uVar2 = FUN_06848650(*unaff_x21,unaff_w23,0);
    if (plVar6 == (long *)0x0) break;
    lVar7 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(unaff_x28 + 0x5d0)) {
          puVar1 = (undefined8 *)(lVar7 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06858dac;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar6,*(long *)(unaff_x28 + 0x5d0),0);
LAB_06858dac:
    param_1 = (*(code *)*puVar1)(plVar6,unaff_x25,uVar2,puVar1[1]);
  }
LAB_06858e84:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


