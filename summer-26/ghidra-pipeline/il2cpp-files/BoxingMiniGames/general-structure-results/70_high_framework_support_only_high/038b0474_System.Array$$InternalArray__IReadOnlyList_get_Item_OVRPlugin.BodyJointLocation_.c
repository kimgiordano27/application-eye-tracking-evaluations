/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 038b0474
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BodyJointLocation>
          (long param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  size_t unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  if (unaff_x22 != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    *(long *)(unaff_x29 + -0x60) = unaff_x22;
    lVar8 = *(long *)(unaff_x22 + 0x28);
    if (-1 < iVar2) {
      param_3 = (void *)(unaff_x29 + -0x30);
    }
    memcpy(unaff_x20,param_3,param_4);
    iVar3 = *(int *)(unaff_x24 + 0x28);
    pvVar1 = *(void **)(unaff_x29 + -0x58);
    if (-1 < iVar3) {
      pvVar1 = (void *)(unaff_x29 + -0x38);
    }
    memcpy(unaff_x23,pvVar1,unaff_x28);
    iVar4 = *(int *)(unaff_x21 + 0x28);
    pvVar1 = *(void **)(unaff_x29 + -0x50);
    if (-1 < iVar4) {
      pvVar1 = (void *)(unaff_x29 + -0x40);
    }
    memcpy(unaff_x25,pvVar1,unaff_x27);
    puVar6 = *(undefined8 **)(unaff_x19 + 0x18);
    if (-1 < iVar2) {
      unaff_x20 = (undefined8 *)*unaff_x20;
    }
    uVar5 = *puVar6;
    if (-1 < iVar3) {
      unaff_x23 = (undefined8 *)*unaff_x23;
    }
    if (-1 < iVar4) {
      unaff_x25 = (undefined8 *)*unaff_x25;
    }
    *(undefined8 **)(unaff_x29 + -0x20) = unaff_x23;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
    pcVar7 = (code *)puVar6[2];
    *(undefined8 **)(unaff_x29 + -0x28) = unaff_x20;
    (*pcVar7)(uVar5,puVar6,0,unaff_x29 + -0x28,unaff_x29 + -0x10);
    if (lVar8 != 0) {
      puVar6 = (undefined8 *)(lVar8 + 0x20);
      *puVar6 = *(undefined8 *)(unaff_x29 + -0x10);
      thunk_FUN_036b7ad0(puVar6);
      if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return *(undefined8 *)(unaff_x29 + -0x60);
      }
      goto LAB_038b057c;
    }
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_038b057c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


