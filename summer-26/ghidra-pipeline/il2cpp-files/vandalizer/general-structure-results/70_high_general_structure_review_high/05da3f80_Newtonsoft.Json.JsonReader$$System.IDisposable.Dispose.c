/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$System.IDisposable.Dispose
ENTRY_POINT: 05da3f80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure
*/


uint Newtonsoft_Json_JsonReader__System_IDisposable_Dispose(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  uint uVar3;
  uint unaff_w20;
  uint uVar4;
  long *unaff_x21;
  
  while (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) <= (int)unaff_w20) {
      uVar4 = unaff_w19 | 1;
      uVar3 = unaff_w19;
      if (uVar4 != 0x7fffffff) {
        while( true ) {
          if (*(int *)(param_2 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar1 = FUN_05da3e68(uVar4);
          if ((((uVar1 & 1) != 0) && (uVar3 = uVar4, 0x288df0c < uVar4 * 0x7c32b16d + 0x8511be19))
             || (uVar3 = unaff_w19, uVar4 == 0x7ffffffd)) break;
          param_2 = *unaff_x21;
          uVar4 = uVar4 + 2;
        }
      }
      return uVar3;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      param_2 = *unaff_x21;
    }
    lVar2 = **(long **)(param_2 + 0xb8);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar4 = *(uint *)(lVar2 + (long)(int)unaff_w20 * 4 + 0x20);
    unaff_w20 = unaff_w20 + 1;
    if ((int)unaff_w19 <= (int)uVar4) {
      return uVar4;
    }
    if (*(int *)(param_2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      param_2 = *unaff_x21;
    }
    param_1 = **(long **)(param_2 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


