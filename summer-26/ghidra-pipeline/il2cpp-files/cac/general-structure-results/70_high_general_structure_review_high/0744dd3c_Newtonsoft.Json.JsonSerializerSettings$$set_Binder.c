/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Binder
ENTRY_POINT: 0744dd3c
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Binder(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  ulong unaff_x25;
  
  while( true ) {
    if (in_NG == in_OV) {
      do {
        unaff_x25 = unaff_x25 + 1;
                    /* try { // try from 0744dd48 to 0754ddef has its CatchHandler @ 0744dd48
                       catch() { ... } // from try @ 0744dd48 with catch @ 0744dd48
                       catch() { ... } // from try @ 0744deb0 with catch @ 0744dd48
                       catch() { ... } // from try @ 0744df54 with catch @ 0744dd48 */
        if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)unaff_x25) {
          if (unaff_x20 != 0) {
            FUN_056b0ae0();
            FUN_056b23bc();
            return;
          }
          goto LAB_0744dda8;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
          FUN_03f13634();
        }
        unaff_x21 = *(long **)(unaff_x23 + unaff_x25 * 8 + 0x20);
        if (unaff_x21 == (long *)0x0) goto LAB_0744dda8;
        iVar2 = (**(code **)(*unaff_x21 + 0x178))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x180));
      } while (iVar2 < 1);
      unaff_w22 = 0;
    }
    uVar3 = (**(code **)(*unaff_x21 + 0x188))(unaff_x21,unaff_w22,*(undefined8 *)(*unaff_x21 + 400))
    ;
    if (unaff_x20 == 0) break;
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      thunk_FUN_03f86000();
    }
    else {
      FUN_056b08d0();
    }
    unaff_w22 = unaff_w22 + 1;
    iVar2 = (**(code **)(*unaff_x21 + 0x178))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x180));
    in_OV = SBORROW4(unaff_w22,iVar2);
    in_NG = unaff_w22 - iVar2 < 0;
  }
LAB_0744dda8:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


