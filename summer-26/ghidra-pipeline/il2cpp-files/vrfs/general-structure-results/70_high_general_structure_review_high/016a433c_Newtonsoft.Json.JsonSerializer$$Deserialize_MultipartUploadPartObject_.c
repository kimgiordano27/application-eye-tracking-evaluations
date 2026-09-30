/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<MultipartUploadPartObject>
ENTRY_POINT: 016a433c
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_6
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<MultipartUploadPartObject>
               (ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_x9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *unaff_x19
  ;
  ulong unaff_x20;
  wchar_t unaff_w21;
  ulong unaff_x22;
  ulong unaff_x23;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  
  uVar2 = param_1;
  if (param_4 <= param_1) {
    uVar2 = param_4;
  }
  if ((in_x9 & 1) == 0) {
                    /* catch() { ... } // from try @ 016a4318 with catch @ 016a4348 */
    uVar3 = 4;
  }
  else {
                    /* catch() { ... } // from try @ 016a42f8 with catch @ 016a4350 */
    uVar3 = (*(ulong *)unaff_x19 & 0xfffffffffffffffe) - 1;
  }
                    /* catch() { ... } // from try @ 016a42a8 with catch @ 016a4364 */
  if ((uVar2 - unaff_x22) + uVar3 < unaff_x20) {
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __grow_by(unaff_x19,uVar3,((unaff_x22 + unaff_x20) - uVar2) - uVar3,unaff_x22,unaff_x23,uVar2,
              unaff_x20);
    pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(unaff_x19 + 0x10);
  }
  else {
    if ((in_x9 & 1) == 0) {
      pbVar4 = unaff_x19 + 4;
    }
    else {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(unaff_x19 + 0x10);
    }
    if ((uVar2 != unaff_x20) && (param_1 - uVar2 != 0)) {
      wmemmove((wchar_t *)(pbVar4 + unaff_x20 * 4 + unaff_x23 * 4),
               (wchar_t *)(pbVar4 + uVar2 * 4 + unaff_x23 * 4),param_1 - uVar2);
    }
    if (unaff_x20 == 0) goto LAB_016a43e4;
  }
  wmemset((wchar_t *)(pbVar4 + unaff_x23 * 4),unaff_w21,unaff_x20);
LAB_016a43e4:
  lVar1 = (unaff_x20 - uVar2) + unaff_x22;
  if (((byte)*unaff_x19 & 1) == 0) {
    *unaff_x19 = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(undefined4 *)(pbVar4 + lVar1 * 4) = 0;
  return;
}


