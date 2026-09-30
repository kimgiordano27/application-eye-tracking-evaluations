/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatHandling
ENTRY_POINT: 076132d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatHandling
               (long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar5 = thunk_FUN_040b4efc();
    uVar6 = thunk_FUN_040dedf8(PTR_DAT_092ab3d0);
    FUN_075ce0d0(uVar5,uVar6,0);
  }
  else {
    iVar1 = thunk_FUN_04086990(param_2,0);
    if (iVar1 == 1) {
                    /* try { // try from 07613308 to 0771330b has its CatchHandler @ 076134dc */
      if (param_3 < 0) {
        thunk_FUN_040dedf8(PTR_DAT_09288c08);
        uVar5 = thunk_FUN_040b4efc();
        uVar6 = thunk_FUN_040dedf8(PTR_DAT_092ac6f8);
        uVar4 = thunk_FUN_040dedf8(PTR_DAT_092b7018);
        FUN_075d19bc(uVar5,uVar6,uVar4,0);
      }
      else {
        iVar2 = FUN_0769286c(param_2,0);
        iVar1 = *(int *)(param_1 + 0x20);
        if (iVar1 <= iVar2 - param_3) {
          if (iVar1 == 0) {
            return;
          }
          lVar3 = *(long *)(param_1 + 0x10);
          if (lVar3 != 0) {
            iVar2 = *(int *)(lVar3 + 0x18) - *(int *)(param_1 + 0x18);
            if (iVar1 <= iVar2) {
              iVar2 = iVar1;
            }
            FUN_0769cb24(lVar3,*(int *)(param_1 + 0x18),param_2,param_3,iVar2,0);
            if (iVar1 - iVar2 < 1) {
              return;
            }
            lVar3 = *(long *)(param_1 + 0x10);
            if (lVar3 != 0) {
              FUN_0769cb24(lVar3,0,param_2,
                           (param_3 - *(int *)(param_1 + 0x18)) + *(int *)(lVar3 + 0x18),
                           iVar1 - iVar2,0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        thunk_FUN_040dedf8(PTR_DAT_09287028);
        uVar5 = thunk_FUN_040b4efc();
        uVar6 = thunk_FUN_040dedf8(PTR_DAT_092b7000);
        FUN_075d4b88(uVar5,uVar6,0);
      }
    }
    else {
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar5 = thunk_FUN_040b4efc();
      uVar6 = thunk_FUN_040dedf8(PTR_DAT_092b8db8);
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092ab3d0);
      FUN_075ce148(uVar5,uVar6,uVar4,0);
    }
  }
  uVar6 = thunk_FUN_040dedf8(PTR_DAT_092d8658);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar5,uVar6);
}


