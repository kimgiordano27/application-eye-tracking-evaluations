/*
FUNCTION_NAME: DigitalOpus.MB.Core.DRect$$Encloses
ENTRY_POINT: 013319e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void DigitalOpus_MB_Core_DRect__Encloses(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long *unaff_x26;
  long *in_stack_00000020;
  
  uVar1 = thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x8b8));
  if (unaff_x23 == 0) {
    lVar4 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar4 = *(long *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x38);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      lVar4 = FUN_00d5941c();
    }
    uVar2 = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_00d48444(Method_Sirenix_Utilities_PropertyInfoExtensions_DeAliasProperty__);
    lVar4 = thunk_FUN_00d62348();
    if (lVar4 == 0) goto LAB_013320b8;
    FUN_012d239c(lVar4,uVar2,*(undefined8 *)(*(long *)(*in_stack_00000020 + 0xc0) + 0x48),0);
    lVar6 = *(long *)(*in_stack_00000020 + 0xc0);
    lVar5 = *(long *)(lVar6 + 0x38);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_00d5941c();
      lVar6 = *(long *)(*in_stack_00000020 + 0xc0);
    }
    *(long *)(*(long *)(lVar5 + 0xb8) + 0x10) = lVar4;
    if ((*(byte *)(*(long *)(lVar6 + 0x38) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
  }
  else {
    uVar1 = thunk_FUN_00d48444(PTR_DAT_033f38b8);
  }
  thunk_FUN_00d48444(Method_System_Collections_Stack_CopyTo__);
  uVar2 = FUN_010dcdb8();
  uVar3 = thunk_FUN_00d48444(PTR_DAT_033f0aa0);
  uVar2 = FUN_010df6b8(uVar2,uVar3);
  lVar4 = FUN_01600f98(uVar1,uVar2,0);
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0)) {
LAB_013320c0:
    uVar1 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar1,0);
  }
  if (5 < *(uint *)(unaff_x26 + 3)) {
    unaff_x26[9] = lVar4;
    lVar4 = thunk_FUN_00d48444(
                              Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                              );
    if ((lVar4 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x26 + 0x40)), lVar4 == 0))
    goto LAB_013320c0;
    lVar4 = thunk_FUN_00d48444(
                              Method_System_Net_WebSockets_ManagedWebSocket_<>c_<SendKeepAliveFrameAsync>b__58_0__
                              );
    if (6 < *(uint *)(unaff_x26 + 3)) {
      unaff_x26[10] = lVar4;
      if (unaff_x21 == (long *)0x0) {
LAB_013320b8:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar1 = FUN_017a9c58();
      lVar4 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Clear__);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = FUN_01c4b4e0(uVar1,0);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0))
      goto LAB_013320c0;
      if (7 < *(uint *)(unaff_x26 + 3)) {
        unaff_x26[0xb] = lVar4;
        lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
        if ((lVar4 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x26 + 0x40)), lVar4 == 0))
        goto LAB_013320c0;
        lVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_39__);
        if (8 < *(uint *)(unaff_x26 + 3)) {
          unaff_x26[0xc] = lVar4;
          lVar4 = (**(code **)(*unaff_x21 + 0x188))();
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0))
          goto LAB_013320c0;
          if (9 < *(uint *)(unaff_x26 + 3)) {
            unaff_x26[0xd] = lVar4;
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


