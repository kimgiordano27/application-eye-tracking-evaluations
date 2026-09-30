/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03eb1fc4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>
               (void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 auVar6 [16];
  undefined8 in_stack_00000008;
  
  if (*(int *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x23;
  auVar6 = thunk_FUN_036b7ad0();
  uVar2 = auVar6._0_8_;
  uVar4 = auVar6._8_8_;
  if (unaff_x21 != (long *)0x0) {
    lVar1 = (**(code **)(*unaff_x21 + 0x3f8))();
    uVar2 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4558,0);
    uVar4 = in_stack_00000008;
    if (lVar1 != 0) {
      lVar1 = FUN_05d477ec(lVar1,in_stack_00000008,uVar2,0);
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_0367fd24(lVar1,lVar5);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(lVar1,lVar5);
        }
      }
      return lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18(uVar2,uVar4);
}


