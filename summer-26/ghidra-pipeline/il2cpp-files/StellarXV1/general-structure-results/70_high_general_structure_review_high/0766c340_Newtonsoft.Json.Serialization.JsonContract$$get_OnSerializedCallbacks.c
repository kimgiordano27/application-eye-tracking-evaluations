/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 0766c340
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  double *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  undefined1 unaff_w26;
  int unaff_w27;
  double unaff_d8;
  double dVar4;
  
  while (iVar2 = FUN_0766f4c0(), unaff_w27 < iVar2) {
    if (*(uint *)(unaff_x21 + 1) <= *(uint *)(unaff_x21 + 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar1 = *(ushort *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (9 < uVar1 - 0x30) break;
    dVar4 = *unaff_x19;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    iVar2 = FUN_07670848();
    unaff_w24 = unaff_w24 + 1;
                    /* try { // try from 0766c3b0 to 0776c3b7 has its CatchHandler @ 0766c404 */
    dVar4 = dVar4 * unaff_d8 + (double)iVar2;
                    /* try { // try from 0766c3b8 to 0776c41b has its CatchHandler @ 0766c240 */
    *unaff_x19 = dVar4;
    iVar2 = unaff_w20;
    if (unaff_w20 == unaff_w24) goto FUN_0766c3ec;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (*(char *)(unaff_x25 + 0x166) == '\0') {
      FUN_04077588();
      FUN_04077588();
      *(undefined1 *)(unaff_x25 + 0x166) = unaff_w26;
    }
    iVar2 = *(int *)(*unaff_x22 + 0xe4);
    unaff_w27 = (int)unaff_x21[2] + 1;
    *(int *)(unaff_x21 + 2) = unaff_w27;
    if (iVar2 == 0) {
      thunk_FUN_040d65a8();
    }
  }
  dVar4 = *unaff_x19;
  *(int *)(unaff_x21 + 2) = (int)unaff_x21[2] + -1;
  iVar2 = unaff_w24;
FUN_0766c3ec:
  lVar3 = FUN_075e6a70(iVar2,0);
  *unaff_x19 = dVar4 / (double)lVar3;
  return iVar2 == unaff_w20;
}


