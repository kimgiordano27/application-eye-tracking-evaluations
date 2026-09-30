/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<ModCollectionObject>
ENTRY_POINT: 016a3dd8
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *
Newtonsoft_Json_JsonSerializer__Deserialize<ModCollectionObject>
          (ulong param_1,
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong unaff_x20;
  wchar_t unaff_w21;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  
  if ((param_1 & 1) == 0) {
    uVar3 = param_1 >> 1;
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  if (param_3 <= uVar3) {
    if (unaff_x20 != 0) {
      if ((param_1 & 1) == 0) {
        uVar2 = 4;
      }
      else {
        uVar2 = (*(ulong *)param_2 & 0xfffffffffffffffe) - 1;
      }
      if (uVar2 - uVar3 < unaff_x20) {
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        __grow_by(param_2,uVar2,(uVar3 + unaff_x20) - uVar2,uVar3,param_3,0,unaff_x20);
        pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(param_2 + 0x10);
      }
      else {
        if ((param_1 & 1) == 0) {
          pbVar4 = param_2 + 4;
        }
        else {
          pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                     **)(param_2 + 0x10);
        }
        if (uVar3 - param_3 != 0) {
          wmemmove((wchar_t *)(pbVar4 + param_3 * 4 + unaff_x20 * 4),
                   (wchar_t *)(pbVar4 + param_3 * 4),uVar3 - param_3);
        }
      }
      wmemset((wchar_t *)(pbVar4 + param_3 * 4),unaff_w21,unaff_x20);
      lVar1 = uVar3 + unaff_x20;
      if (((byte)*param_2 & 1) == 0) {
        *param_2 = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(param_2 + 8) = lVar1;
      }
      *(undefined4 *)(pbVar4 + lVar1 * 4) = 0;
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01597c78(param_2);
}


