/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<MonetizationTeamAccountsObject>
ENTRY_POINT: 016a4178
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<MonetizationTeamAccountsObject>(void)

{
  wchar_t *__s1;
  long lVar1;
  size_t __n;
  ulong uVar2;
  long in_x9;
  byte *unaff_x19;
  size_t unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  wchar_t *unaff_x23;
  long unaff_x24;
  long unaff_x27;
  
  uVar2 = unaff_x20;
                    /* catch() { ... } // from try @ 016a4154 with catch @ 016a4180 */
  if ((unaff_x22 != unaff_x20) && (__n = in_x9 - unaff_x22, uVar2 = unaff_x22, __n != 0)) {
    __s1 = (wchar_t *)(unaff_x27 + unaff_x24 * 4);
    if (unaff_x20 < unaff_x22) {
      if (unaff_x20 != 0) {
        wmemmove(__s1,unaff_x23,unaff_x20);
      }
      wmemmove(__s1 + unaff_x20,__s1 + unaff_x22,__n);
      goto LAB_016a424c;
    }
    if ((__s1 < unaff_x23) && (unaff_x23 < (wchar_t *)(unaff_x27 + unaff_x21 * 4))) {
      if (unaff_x23 < __s1 + unaff_x22) {
        if (unaff_x22 != 0) {
          wmemmove(__s1,unaff_x23,unaff_x22);
        }
        unaff_x24 = unaff_x22 + unaff_x24;
        unaff_x23 = unaff_x23 + unaff_x20;
        unaff_x20 = unaff_x20 - unaff_x22;
        unaff_x22 = 0;
      }
      else {
        unaff_x23 = unaff_x23 + (unaff_x20 - unaff_x22);
      }
    }
    lVar1 = unaff_x27 + unaff_x24 * 4;
                    /* catch() { ... } // from try @ 016a4324 with catch @ 016a4228 */
    wmemmove((wchar_t *)(lVar1 + unaff_x20 * 4),(wchar_t *)(lVar1 + unaff_x22 * 4),__n);
    uVar2 = unaff_x22;
  }
  unaff_x22 = uVar2;
  if (unaff_x20 != 0) {
    wmemmove((wchar_t *)(unaff_x27 + unaff_x24 * 4),unaff_x23,unaff_x20);
  }
LAB_016a424c:
  lVar1 = (unaff_x20 - unaff_x22) + unaff_x21;
  if ((*unaff_x19 & 1) == 0) {
    *unaff_x19 = (byte)((int)lVar1 << 1);
  }
  else {
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(undefined4 *)(unaff_x27 + lVar1 * 4) = 0;
  return;
}


