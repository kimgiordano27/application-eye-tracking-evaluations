/*
FUNCTION_NAME: Unity.VisualScripting.UnityMessageListener$$OnMouseDown
ENTRY_POINT: 0362140c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


undefined1  [16] Unity_VisualScripting_UnityMessageListener__OnMouseDown(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  long unaff_x22;
  long *plVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar3 = *(long **)(unaff_x22 + 0xcf8);
  if ((*(byte *)(unaff_x21 + 0x200) & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0x200) = 1;
  }
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar1 = FUN_03922f24(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    return ZEXT416(**(uint **)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                              + 0xb8));
  }
  if (param_2 < 0) {
    if ((param_1 != 0) && (lVar2 = FUN_0391c27c(param_1,0), lVar2 != 0)) {
      FUN_039274a0(lVar2,0);
      auVar5._4_4_ = extraout_var_00;
      auVar5._0_4_ = extraout_s0_00;
      auVar5._8_8_ = extraout_var_02;
      return auVar5;
    }
  }
  else {
    lVar2 = FUN_01b47fd0(*(undefined8 *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                         ,1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(int *)(lVar2 + 0x20) = param_2;
        FUN_036202c8(param_1);
        auVar4._4_4_ = extraout_var;
        auVar4._0_4_ = extraout_s0;
        auVar4._8_8_ = extraout_var_01;
        return auVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


