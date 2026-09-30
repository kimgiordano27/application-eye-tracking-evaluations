/*
FUNCTION_NAME: DigitalOpus.MB.Core.DRect$$GetHashCode
ENTRY_POINT: 01331a54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void DigitalOpus_MB_Core_DRect__GetHashCode(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  long *unaff_x26;
  long *in_stack_00000020;
  
  uVar5 = *param_1;
  thunk_FUN_00d48444(*(undefined8 *)(param_2 + 0x350));
  lVar1 = thunk_FUN_00d62348();
  if (lVar1 == 0) {
LAB_013320b8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_012d239c(lVar1,uVar5,*(undefined8 *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x48),0);
  lVar4 = *(long *)(*in_stack_00000020 + 0xc0);
  lVar2 = *(long *)(lVar4 + 0x38);
  if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
    lVar2 = FUN_00d5941c();
    lVar4 = *(long *)(*in_stack_00000020 + 0xc0);
  }
  *(long *)(*(long *)(lVar2 + 0xb8) + 0x10) = lVar1;
  if ((*(byte *)(*(long *)(lVar4 + 0x38) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
  uVar5 = FUN_010dcdb8();
  uVar3 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
  FUN_010df6b8(uVar5,uVar3);
  lVar1 = FUN_01600f98();
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0)) {
LAB_013320c0:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if (5 < *(uint *)(unaff_x26 + 3)) {
    unaff_x26[9] = lVar1;
    lVar1 = thunk_FUN_00d48444(
                              Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                              );
    if ((lVar1 != 0) &&
       (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar1 == 0))
    goto LAB_013320c0;
    lVar1 = thunk_FUN_00d48444(
                              Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                              );
    if (6 < *(uint *)(unaff_x26 + 3)) {
      unaff_x26[10] = lVar1;
      if (unaff_x21 == (long *)0x0) goto LAB_013320b8;
      uVar5 = FUN_017a9c58();
      lVar1 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = FUN_01c4b4e0(uVar5,0);
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0))
      goto LAB_013320c0;
      if (7 < *(uint *)(unaff_x26 + 3)) {
        unaff_x26[0xb] = lVar1;
        lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
        if ((lVar1 != 0) &&
           (lVar1 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar1 == 0))
        goto LAB_013320c0;
        lVar1 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
        if (8 < *(uint *)(unaff_x26 + 3)) {
          unaff_x26[0xc] = lVar1;
          lVar1 = (**(code **)(*unaff_x21 + 0x188))();
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0))
          goto LAB_013320c0;
          if (9 < *(uint *)(unaff_x26 + 3)) {
            unaff_x26[0xd] = lVar1;
            FUN_01600844();
            if (unaff_x20 != 0) {
              FUN_01c25764();
              return;
            }
            goto LAB_013320b8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


