/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.RoomFace>
ENTRY_POINT: 03eb1f84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_RoomFace>
               (long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  
  uVar1 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
  auVar5 = FUN_03caf32c(uVar1,*(undefined8 *)PTR_DAT_079fedb8);
  lVar3 = auVar5._0_8_;
  uVar1 = auVar5._8_8_;
  if (unaff_x22 != (long *)0x0) {
    if ((lVar3 != 0) &&
       (lVar2 = thunk_FUN_0367fd24(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar1 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar1,0);
    }
    if ((int)unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    unaff_x22[4] = lVar3;
    auVar5 = thunk_FUN_036b7ad0(unaff_x22 + 4,lVar3);
    lVar3 = auVar5._0_8_;
    uVar1 = auVar5._8_8_;
    if (unaff_x21 != (long *)0x0) {
      lVar2 = (**(code **)(*unaff_x21 + 0x3f8))();
      lVar3 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,0);
      uVar1 = in_stack_00000008;
      if (lVar2 != 0) {
        lVar3 = FUN_05d477ec(lVar2,in_stack_00000008,lVar3,0);
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0367c9fc(lVar2);
        }
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = thunk_FUN_0367fd24(lVar3,lVar2);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03643084(lVar3,lVar2);
          }
        }
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18(lVar3,uVar1);
}


