/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetTrackingIPDEnabled
ENTRY_POINT: 0369c1c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetTrackingIPDEnabled(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((DAT_04833f31 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_0__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    DAT_04833f31 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x84);
    fVar10 = (float)FUN_0369abd0();
    puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar4 = FUN_0365102c(*(long *)(param_1 + 0x80),0);
      lVar5 = *(long *)puVar3;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar5);
        lVar5 = *(long *)puVar3;
      }
      uVar2 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (fVar10 <= 0.0) {
        if (iVar1 == 2) {
          puVar6 = (undefined4 *)(param_1 + 0xcc);
          puVar7 = (undefined4 *)(param_1 + 0xd0);
          puVar8 = (undefined4 *)(param_1 + 0xd4);
          puVar9 = (undefined4 *)(param_1 + 0xd8);
        }
        else {
          puVar6 = (undefined4 *)(param_1 + 0xbc);
          puVar7 = (undefined4 *)(param_1 + 0xc0);
          puVar8 = (undefined4 *)(param_1 + 0xc4);
          puVar9 = (undefined4 *)(param_1 + 200);
        }
        if (lVar4 == 0) goto LAB_0369c390;
        thunk_FUN_0404b1d4(*puVar6,*puVar7,*puVar8,*puVar9,lVar4,uVar2,0);
        if (*(long *)(param_1 + 0x88) == 0) goto LAB_0369c390;
        lVar4 = FUN_0365102c(*(long *)(param_1 + 0x88),0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        if (lVar4 == 0) goto LAB_0369c390;
        uVar13 = *(undefined4 *)(param_1 + 0xb4);
        uVar14 = *(undefined4 *)(param_1 + 0xb8);
        uVar11 = *(undefined4 *)(param_1 + 0xac);
        uVar12 = *(undefined4 *)(param_1 + 0xb0);
        uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      }
      else {
        if (lVar4 == 0) goto LAB_0369c390;
        thunk_FUN_0404b1d4(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),
                           *(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8),lVar4,
                           uVar2,0);
        if (*(long *)(param_1 + 0x88) == 0) goto LAB_0369c390;
        lVar4 = FUN_0365102c(*(long *)(param_1 + 0x88),0);
        if (iVar1 == 2) {
          puVar6 = (undefined4 *)(param_1 + 0xcc);
          puVar7 = (undefined4 *)(param_1 + 0xd0);
          puVar8 = (undefined4 *)(param_1 + 0xd4);
          puVar9 = (undefined4 *)(param_1 + 0xd8);
        }
        else {
          puVar6 = (undefined4 *)(param_1 + 0xbc);
          puVar7 = (undefined4 *)(param_1 + 0xc0);
          puVar8 = (undefined4 *)(param_1 + 0xc4);
          puVar9 = (undefined4 *)(param_1 + 200);
        }
        if (lVar4 == 0) goto LAB_0369c390;
        uVar14 = *puVar9;
        uVar13 = *puVar8;
        uVar12 = *puVar7;
        uVar11 = *puVar6;
        uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
      }
      thunk_FUN_0404b1d4(uVar11,uVar12,uVar13,uVar14,lVar4,uVar2,0);
      if (*(long *)(param_1 + 0x80) != 0) {
        FUN_0365109c(*(long *)(param_1 + 0x80),0);
        if (*(long *)(param_1 + 0x88) != 0) {
          FUN_0365109c(*(long *)(param_1 + 0x88),0);
          return;
        }
      }
    }
  }
LAB_0369c390:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


