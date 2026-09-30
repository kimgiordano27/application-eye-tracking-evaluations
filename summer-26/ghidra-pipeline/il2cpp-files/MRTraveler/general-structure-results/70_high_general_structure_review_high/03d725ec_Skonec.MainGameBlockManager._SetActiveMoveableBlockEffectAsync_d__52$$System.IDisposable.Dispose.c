/*
FUNCTION_NAME: Skonec.MainGameBlockManager.<SetActiveMoveableBlockEffectAsync>d__52$$System.IDisposable.Dispose
ENTRY_POINT: 03d725ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Skonec_MainGameBlockManager_<SetActiveMoveableBlockEffectAsync>d__52__System_IDisposable_Dispose
               (ulong param_1)

{
  long lVar1;
  ulong uVar2;
  wchar_t *in_x7;
  long in_x9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *unaff_x19
  ;
  ulong unaff_x20;
  ulong unaff_x21;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  
  uVar2 = in_x9 - 1;
  if (uVar2 - unaff_x21 < unaff_x20) {
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    __grow_by_and_replace
              (unaff_x19,uVar2,(unaff_x21 + unaff_x20) - uVar2,unaff_x21,unaff_x21,0,unaff_x20,in_x7
              );
  }
  else if (unaff_x20 != 0) {
    if ((param_1 & 1) == 0) {
      pbVar3 = unaff_x19 + 4;
    }
    else {
      pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(unaff_x19 + 0x10);
    }
    wmemcpy((wchar_t *)(pbVar3 + unaff_x21 * 4),in_x7,unaff_x20);
    lVar1 = unaff_x21 + unaff_x20;
    if (((byte)*unaff_x19 & 1) == 0) {
      *unaff_x19 = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(unaff_x19 + 8) = lVar1;
    }
    *(undefined4 *)(pbVar3 + lVar1 * 4) = 0;
  }
  return;
}


