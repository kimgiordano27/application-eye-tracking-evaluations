/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$ovrp_RetrieveSpaceDiscoveryResults
ENTRY_POINT: 04f97368
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_97_0__ovrp_RetrieveSpaceDiscoveryResults
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined4 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x23;
  
  *(undefined4 *)(unaff_x20 + 0x35c) = in_w8;
  *(long *)(unaff_x20 + 0x368) = param_1._8_8_;
  *(long *)(unaff_x20 + 0x360) = param_1._0_8_;
  *(long *)(unaff_x20 + 0x374) = param_2._8_8_;
  *(long *)(unaff_x20 + 0x36c) = param_2._0_8_;
  *(undefined4 *)(unaff_x20 + 0x37c) = 0;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
    thunk_FUN_02bb0e9c();
    **(long **)(*unaff_x23 + 0xb8) = unaff_x19;
    thunk_FUN_02bb0e9c(*(undefined8 *)(*unaff_x23 + 0xb8));
    lVar6 = thunk_FUN_02b79644(*unaff_x23);
    FUN_04f965b8();
    puVar5 = System_Func<AndroidAxis,_string>_TypeInfo;
    puVar4 = System_Func<float[],_Vector4>_TypeInfo;
    puVar3 = System_Func<float[],_Vector3>_TypeInfo;
    puVar2 = System_Func<float[],_Vector2>_TypeInfo;
    puVar1 = System_Func<float[],_Quaternion>_TypeInfo;
    if (**(long **)(*unaff_x23 + 0xb8) != 0) {
      lVar7 = *(long *)System_Func<AndroidAxis,_string>_TypeInfo;
      uVar10 = *(undefined8 *)(**(long **)(*unaff_x23 + 0xb8) + 0x10);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar7 = *(long *)puVar5;
      }
      uVar11 = **(undefined8 **)(lVar7 + 0xb8);
      uVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
      FUN_049bccb8(uVar8,uVar11,*(undefined8 *)puVar4,0);
      uVar10 = FUN_031bc914(uVar10,uVar8,*(undefined8 *)puVar1);
      uVar10 = FUN_031c7164(uVar10,*(undefined8 *)puVar2);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        thunk_FUN_02bb0e9c();
        plVar9 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        *plVar9 = lVar6;
        thunk_FUN_02bb0e9c(plVar9,lVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


