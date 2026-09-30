/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem.NativeApi$$UnityOpenXRMeta_Session_Start
ENTRY_POINT: 06c5e414
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_NativeApi__UnityOpenXRMeta_Session_Start
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  uint uVar6;
  
  FUN_031f20f4();
  *(undefined1 *)(unaff_x21 + 0x5b6) = 1;
  puVar2 = 
  System_Func<Vector3,_Vector3,_ValueTuple<EventModifiers,_Nullable<int>>,_EventBase>_TypeInfo;
  puVar1 = PTR_DAT_075d8500;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 != 0) {
    lVar5 = 4;
    do {
      uVar6 = (int)lVar5 - 4;
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)uVar6) {
        lVar4 = *(long *)(unaff_x20 + 0x30);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) {
LAB_06c5e4fc:
                    /* WARNING: Subroutine does not return */
            FUN_031f2398();
          }
          if (*(long *)(lVar4 + 0x20) != 0) {
            FUN_06e03bb0(*(long *)(lVar4 + 0x20),0,0);
            return;
          }
        }
        break;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_06c5e4fc;
      lVar4 = *(long *)(lVar4 + lVar5 * 8);
      if (lVar4 == 0) break;
      uVar3 = FUN_06e59884(lVar4,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar1);
      }
      FUN_03ffd21c(unaff_w19 & 1,uVar3,*(undefined8 *)puVar2);
      lVar4 = *(long *)(unaff_x20 + 0x30);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_06c5e4fc;
      lVar4 = *(long *)(lVar4 + lVar5 * 8);
      if (lVar4 == 0) break;
      FUN_06e03bb0(lVar4,unaff_w19 & 1,0);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


