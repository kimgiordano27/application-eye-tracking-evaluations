/*
FUNCTION_NAME: DigitalOpus.MB.Core.DRect$$Expand
ENTRY_POINT: 013319bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void DigitalOpus_MB_Core_DRect__Expand(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x26;
  long *in_stack_00000020;
  
  lVar1 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_00d5941c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  uVar2 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar1 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
    if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
      lVar1 = FUN_00d5941c();
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__);
    lVar1 = thunk_FUN_00d62348();
    if (lVar1 == 0) goto LAB_013320b8;
    FUN_012d239c(lVar1,uVar3,*(undefined8 *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x48),0);
    lVar6 = *(long *)(*in_stack_00000020 + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x38);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
      lVar6 = *(long *)(*in_stack_00000020 + 0xc0);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 0x10) = lVar1;
    if ((*(byte *)(*(long *)(lVar6 + 0x38) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
  }
  else {
    uVar2 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
  }
  thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
  uVar3 = FUN_010dcdb8();
  uVar4 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
  uVar3 = FUN_010df6b8(uVar3,uVar4);
  lVar1 = FUN_01600f98(uVar2,uVar3,0);
  if ((lVar1 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0)) {
LAB_013320c0:
    uVar2 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar2,0);
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
      if (unaff_x21 == (long *)0x0) {
LAB_013320b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar2 = FUN_017a9c58();
      lVar1 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar1 = FUN_01c4b4e0(uVar2,0);
      if ((lVar1 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0))
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
             (lVar5 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0))
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


