/*
FUNCTION_NAME: System.ReadOnlySpan<__Il2CppFullySharedGenericType>$$GetHashCode
ENTRY_POINT: 01288c58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<__Il2CppFullySharedGenericType>__GetHashCode(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x26;
  
  lVar1 = thunk_FUN_00d48444();
  if ((lVar1 != 0) &&
     (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0))
  goto LAB_012892f0;
  lVar1 = thunk_FUN_00d48444(
                            Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                            );
  if (*(uint *)(unaff_x22 + 3) < 7) goto LAB_012892ec;
  unaff_x22[10] = lVar1;
  if (unaff_x26 == (long *)0x0) {
LAB_012892e8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 01288c94 to 01388ca7 has its CatchHandler @ 01288ef4 */
  uVar2 = FUN_017a9c58();
  lVar1 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar1 = FUN_01c4b4e0(uVar2,0);
  if ((lVar1 != 0) &&
     (lVar3 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
LAB_012892f0:
    uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar2,0);
  }
  if (7 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[0xb] = lVar1;
    lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
    if ((lVar1 != 0) &&
       (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar1 == 0))
    goto LAB_012892f0;
    lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
    if (8 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[0xc] = lVar1;
      lVar1 = (**(code **)(*unaff_x26 + 0x188))();
      if ((lVar1 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
      goto LAB_012892f0;
      if (9 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[0xd] = lVar1;
        FUN_01600844();
        if (unaff_x20 != 0) {
          FUN_01c25764();
          return;
        }
        goto LAB_012892e8;
      }
    }
  }
LAB_012892ec:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


