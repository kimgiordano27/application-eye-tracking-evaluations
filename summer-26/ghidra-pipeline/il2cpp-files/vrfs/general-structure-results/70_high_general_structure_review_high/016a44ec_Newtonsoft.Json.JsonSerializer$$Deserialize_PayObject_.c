/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<PayObject>
ENTRY_POINT: 016a44ec
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Deserialize<PayObject>
               (wchar_t *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  wchar_t __c;
  size_t __n;
  int iVar1;
  long lVar2;
  wchar_t *unaff_x19;
  wchar_t *pwVar3;
  long unaff_x23;
  wchar_t *unaff_x24;
  
  __n = (param_4 << 2) >> 2;
  lVar2 = (long)unaff_x24 - (long)param_1 >> 2;
  pwVar3 = unaff_x24;
  if ((long)__n <= lVar2) {
    __c = *unaff_x19;
    do {
      pwVar3 = unaff_x24;
      if (((0xfffffffffffffffe < lVar2 - __n) ||
          (param_1 = wmemchr(param_1,__c,(lVar2 - __n) + 1), param_1 == (wchar_t *)0x0)) ||
         (iVar1 = wmemcmp(param_1,unaff_x19,__n), pwVar3 = param_1, iVar1 == 0)) break;
      param_1 = param_1 + 1;
      lVar2 = (long)unaff_x24 - (long)param_1 >> 2;
      pwVar3 = unaff_x24;
    } while ((long)__n <= lVar2);
  }
                    /* try { // try from 016a454c to 017a457b has its CatchHandler @ 016a454c
                       catch() { ... } // from try @ 016a454c with catch @ 016a454c
                       catch() { ... } // from try @ 016a4588 with catch @ 016a454c */
  lVar2 = (long)pwVar3 - unaff_x23 >> 2;
  if (pwVar3 == unaff_x24) {
    lVar2 = -1;
  }
                    /* try { // try from 016a457c to 017a4587 has its CatchHandler @ 016a45a0 */
  return lVar2;
}


