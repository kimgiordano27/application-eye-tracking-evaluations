/*
FUNCTION_NAME: UnityEngine.Mesh.MeshDataArray$$.ctor
ENTRY_POINT: 068ae974
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_Mesh_MeshDataArray___ctor(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_042e4a64(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
  lVar4 = *(long *)(unaff_x19 + 0x160);
  if (lVar4 == 0) {
LAB_068aec40:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar7 = *(long *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x148);
  lVar8 = *unaff_x20;
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (lVar7 == 0) goto LAB_068aec40;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
  }
  else {
    FUN_042e4a64(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
  }
  lVar4 = FUN_069d3b50();
  puVar3 = PTR_DAT_070c2418;
  puVar2 = PTR_DAT_070c1b68;
  if (lVar4 == 0) goto LAB_068aec40;
  FUN_03ac34dc(lVar4,1,*(undefined8 *)
                        Best_HTTP_SecureProtocol_Org_BouncyCastle_Asn1_CryptoPro_ECGost3410NamedCurves_Holder_id_tc26_gost_3410_12_512_paramSetC_TypeInfo
              );
  FUN_068aed20();
  if (*(char *)(unaff_x19 + 0x1b0) != '\0') {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x1b8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_069d8404(uVar6,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      FUN_0698f53c(*(undefined8 *)OVRPlugin_OVRP_1_50_0_TypeInfo);
    }
  }
  if (*(char *)(unaff_x19 + 0x1c1) == '\0') {
LAB_068aeaa4:
    if (*(char *)(unaff_x19 + 0x1d0) != '\0') {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x1d8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_069d69b8(uVar6,0,0);
      if ((uVar5 & 1) != 0) goto LAB_068aeb94;
    }
    if (*(char *)(unaff_x19 + 0x1e0) != '\0') {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x1e8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_069d69b8(uVar6,0,0);
      if ((uVar5 & 1) != 0) goto LAB_068aeb94;
    }
    if (*(char *)(unaff_x19 + 0x1f0) != '\0') {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x1f8);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_069d69b8(uVar6,0,0);
      if ((uVar5 & 1) != 0) goto LAB_068aeb94;
    }
    if (*(char *)(unaff_x19 + 0x200) != '\0') {
      uVar6 = *(undefined8 *)(unaff_x19 + 0x208);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar5 = FUN_069d69b8(uVar6,0,0);
      if ((uVar5 & 1) != 0) goto LAB_068aeb94;
    }
    if (*(char *)(unaff_x19 + 0x210) == '\0') goto LAB_068aebc4;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x218);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_069d69b8(uVar6,0,0);
    if ((uVar5 & 1) == 0) goto LAB_068aebc4;
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x1c8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_069d69b8(uVar6,0,0);
    if ((uVar5 & 1) == 0) goto LAB_068aeaa4;
  }
LAB_068aeb94:
  puVar2 = OVRPlugin_OVRP_1_52_0_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)puVar2);
  FUN_068aedb8();
LAB_068aebc4:
  puVar2 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  if ((((*(char *)(unaff_x19 + 0x221) == '\0') && (*(char *)(unaff_x19 + 0x22c) == '\0')) &&
      (*(char *)(unaff_x19 + 0x238) == '\0')) &&
     (((*(char *)(unaff_x19 + 0x244) == '\0' && (*(char *)(unaff_x19 + 0x250) == '\0')) &&
      (*(char *)(unaff_x19 + 0x25c) == '\0')))) {
    return;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)puVar2);
  FUN_068aeefc();
  return;
}


