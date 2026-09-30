/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 033e3db0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  uint unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long lVar6;
  ulong uStack0000000000000000;
  undefined8 in_stack_00000008;
  undefined *puVar3;
  
  FUN_033e42bc();
  if (((int)unaff_w20 < 0) || (*(int *)(unaff_x21 + 0x7c) <= (int)unaff_w20)) {
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar4 = thunk_FUN_01de27b8();
    uVar5 = thunk_FUN_01dd295c(StringLiteral_917);
    puVar3 = StringLiteral_9251;
  }
  else {
    if ((-1 < (int)unaff_w19) && ((int)unaff_w19 < *(int *)(unaff_x21 + 0x78))) {
      lVar6 = *(long *)(unaff_x21 + 200);
      if (lVar6 != 0) {
        lVar1 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_9250,2);
        in_stack_00000008 = 0;
        uStack0000000000000000 = (ulong)unaff_w19;
        thunk_FUN_01e10808(&stack0x00000008,0);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(int *)(lVar1 + 0x18) != 0) {
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000008;
          *(ulong *)(lVar1 + 0x20) = uStack0000000000000000;
          thunk_FUN_01e10808((undefined8 *)(lVar1 + 0x28),0);
          in_stack_00000008 = 0;
          uStack0000000000000000 = (ulong)unaff_w20;
          thunk_FUN_01e10808(&stack0x00000008,0);
          if (1 < *(uint *)(lVar1 + 0x18)) {
            *(ulong *)(lVar1 + 0x30) = uStack0000000000000000;
            *(undefined8 *)(lVar1 + 0x38) = in_stack_00000008;
            thunk_FUN_01e10808((undefined8 *)(lVar1 + 0x38),0);
            FUN_033e5640(lVar6,lVar1);
            FUN_033e2bc4();
            *(uint *)(unaff_x21 + 0x18) = unaff_w20;
            *(uint *)(unaff_x21 + 0x1c) = unaff_w19;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      thunk_FUN_01dd295c(
                        Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                        );
      uVar4 = thunk_FUN_01de27b8();
      uVar5 = thunk_FUN_01dd295c(StringLiteral_9254);
      FUN_0338ed78(uVar4,uVar5,0);
      goto LAB_033e3f50;
    }
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar4 = thunk_FUN_01de27b8();
    uVar5 = thunk_FUN_01dd295c(StringLiteral_9252);
    puVar3 = StringLiteral_9253;
  }
  uVar2 = thunk_FUN_01dd295c(puVar3);
  FUN_0328a910(uVar4,uVar5,uVar2,0);
LAB_033e3f50:
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9255);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar5);
}


