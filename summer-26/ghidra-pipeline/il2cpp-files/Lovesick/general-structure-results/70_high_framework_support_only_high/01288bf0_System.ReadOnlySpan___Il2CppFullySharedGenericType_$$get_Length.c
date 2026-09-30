/*
FUNCTION_NAME: System.ReadOnlySpan<__Il2CppFullySharedGenericType>$$get_Length
ENTRY_POINT: 01288bf0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ray_or_cast_sink_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_ReadOnlySpan<__Il2CppFullySharedGenericType>__get_Length(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x26;
  
  uVar1 = FUN_010dcdb8();
  uVar2 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
  FUN_010df6b8(uVar1,uVar2);
  lVar3 = FUN_01600f98();
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0)) {
LAB_012892f0:
    uVar1 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar1,0);
  }
  if (5 < *(uint *)(unaff_x22 + 3)) {
    unaff_x22[9] = lVar3;
    lVar3 = thunk_FUN_00d48444(
                              Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                              );
    if ((lVar3 != 0) &&
       (lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
    goto LAB_012892f0;
    lVar3 = thunk_FUN_00d48444(
                              Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                              );
    if (6 < *(uint *)(unaff_x22 + 3)) {
      unaff_x22[10] = lVar3;
      if (unaff_x26 == (long *)0x0) {
LAB_012892e8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = FUN_017a9c58();
      lVar3 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar3 = FUN_01c4b4e0(uVar1,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
      goto LAB_012892f0;
      if (7 < *(uint *)(unaff_x22 + 3)) {
        unaff_x22[0xb] = lVar3;
        lVar3 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
        if ((lVar3 != 0) &&
           (lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0))
        goto LAB_012892f0;
        lVar3 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
        if (8 < *(uint *)(unaff_x22 + 3)) {
          unaff_x22[0xc] = lVar3;
          lVar3 = (**(code **)(*unaff_x26 + 0x188))();
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar4 == 0))
          goto LAB_012892f0;
          if (9 < *(uint *)(unaff_x22 + 3)) {
            unaff_x22[0xd] = lVar3;
            FUN_01600844();
            if (unaff_x20 != 0) {
              FUN_01c25764();
              return;
            }
            goto LAB_012892e8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


