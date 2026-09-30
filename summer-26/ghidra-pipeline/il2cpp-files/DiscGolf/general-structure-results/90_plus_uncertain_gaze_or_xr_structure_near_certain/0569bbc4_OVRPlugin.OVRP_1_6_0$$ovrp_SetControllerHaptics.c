/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetControllerHaptics
ENTRY_POINT: 0569bbc4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_7;functionality_data_collection_or_telemetry_hits_7
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetControllerHaptics(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    unaff_x21 = FUN_0569bcb4(unaff_x21);
    do {
      FUN_03c23c0c();
      FUN_03c23c0c();
      if (unaff_x27 == 0) {
LAB_0569bc90:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04e935f0(unaff_x27,unaff_x20,unaff_x21,*(undefined8 *)PTR_DAT_069ff500);
      unaff_w29 = unaff_w29 + 1;
      if (*(int *)(unaff_x26 + 0x18) <= unaff_w29) {
        do {
          FUN_03c23c0c(in_stack_00000008,unaff_x25,
                       *(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo);
          if (*in_stack_00000010 == 0) goto LAB_0569bc90;
          FUN_04e935dc(*in_stack_00000010,unaff_x25,unaff_x27,
                       *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
          puVar1 = Oculus_Platform_Request<AssetDetailsList>_TypeInfo;
          lVar4 = *(long *)(in_stack_00000000 + 0x18);
          in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
          if (lVar4 == 0) goto LAB_0569bc90;
          if (*(int *)(lVar4 + 0x18) <= in_stack_00000018._4_4_) {
            return;
          }
          unaff_x25 = FUN_0400ff1c(lVar4,in_stack_00000018._4_4_,*unaff_x24);
          if (in_stack_00000008 == 0) goto LAB_0569bc90;
          uVar2 = FUN_03c2311c(in_stack_00000008,unaff_x25,
                               *(undefined8 *)System_Func<InteractorRegisteredEventArgs>_TypeInfo);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02df485c();
            }
            unaff_x25 = FUN_0569bcb4(unaff_x25,in_stack_00000008);
          }
          if (((*(long *)(in_stack_00000000 + 0x20) == 0) ||
              (lVar4 = FUN_0400ff1c(*(long *)(in_stack_00000000 + 0x20),in_stack_00000018._4_4_,
                                    *(undefined8 *)puVar1), lVar4 == 0)) ||
             (*(long *)(in_stack_00000000 + 0x28) == 0)) goto LAB_0569bc90;
          unaff_x26 = *(long *)(lVar4 + 0x10);
          lVar4 = FUN_0400ff1c(*(long *)(in_stack_00000000 + 0x28),in_stack_00000018._4_4_,
                               *(undefined8 *)puVar1);
          if (lVar4 == 0) goto LAB_0569bc90;
          unaff_x28 = *(long *)(lVar4 + 0x10);
          unaff_x27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
          FUN_04e92874(unaff_x27,*(undefined8 *)PTR_DAT_069ff508);
          if (unaff_x26 == 0) goto LAB_0569bc90;
        } while (*(int *)(unaff_x26 + 0x18) < 1);
        unaff_w29 = 0;
      }
      unaff_x20 = FUN_0400ff1c(unaff_x26,unaff_w29,*unaff_x24);
      uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
      FUN_048a20e0(uVar3,unaff_x25,unaff_x20,
                   *(undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
      if (unaff_x22 == 0) goto LAB_0569bc90;
      uVar2 = FUN_03c2311c();
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02df485c();
        }
        unaff_x20 = FUN_0569bdf0(unaff_x25,unaff_x20);
      }
      if ((unaff_x28 == 0) ||
         (unaff_x21 = FUN_0400ff1c(unaff_x28,unaff_w29,*unaff_x24), unaff_x23 == 0))
      goto LAB_0569bc90;
      uVar2 = FUN_03c2311c();
    } while ((uVar2 & 1) == 0);
    if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
  } while( true );
}


