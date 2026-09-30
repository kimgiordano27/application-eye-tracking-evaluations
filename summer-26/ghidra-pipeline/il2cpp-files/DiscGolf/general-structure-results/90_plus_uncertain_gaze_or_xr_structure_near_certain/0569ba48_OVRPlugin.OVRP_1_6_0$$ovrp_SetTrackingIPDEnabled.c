/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 0569ba48
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(undefined **param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  long lVar5;
  long unaff_x27;
  long lVar6;
  int iVar7;
  long in_stack_00000000;
  long in_stack_00000008;
  long *in_stack_00000010;
  
  do {
    if (*(int *)(*(long *)param_1[0xea] + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    unaff_x25 = FUN_0569bcb4(unaff_x25,unaff_x19);
    do {
      if (((*(long *)(unaff_x27 + 0x20) == 0) ||
          (lVar1 = FUN_0400ff1c(*(long *)(unaff_x27 + 0x20),unaff_w21,*unaff_x20), lVar1 == 0)) ||
         (*(long *)(unaff_x27 + 0x28) == 0)) {
LAB_0569bc90:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(lVar1 + 0x10);
      lVar1 = FUN_0400ff1c(*(long *)(unaff_x27 + 0x28),unaff_w21,*unaff_x20);
      if (lVar1 == 0) goto LAB_0569bc90;
      lVar6 = *(long *)(lVar1 + 0x10);
      lVar1 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
      FUN_04e92874(lVar1,*(undefined8 *)PTR_DAT_069ff508);
      if (lVar5 == 0) goto LAB_0569bc90;
      if (0 < *(int *)(lVar5 + 0x18)) {
        iVar7 = 0;
        do {
          uVar2 = FUN_0400ff1c(lVar5,iVar7,*unaff_x24);
          uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
          FUN_048a20e0(uVar3,unaff_x25,uVar2,
                       *(undefined8 *)
                        Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
          if (unaff_x22 == 0) goto LAB_0569bc90;
          uVar4 = FUN_03c2311c();
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02df485c();
            }
            uVar2 = FUN_0569bdf0(unaff_x25,uVar2);
          }
          if ((lVar6 == 0) || (uVar3 = FUN_0400ff1c(lVar6,iVar7,*unaff_x24), unaff_x23 == 0))
          goto LAB_0569bc90;
          uVar4 = FUN_03c2311c();
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02df485c();
            }
            uVar3 = FUN_0569bcb4(uVar3);
          }
          FUN_03c23c0c();
          FUN_03c23c0c();
          if (lVar1 == 0) goto LAB_0569bc90;
          FUN_04e935f0(lVar1,uVar2,uVar3,*(undefined8 *)PTR_DAT_069ff500);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(lVar5 + 0x18));
      }
      FUN_03c23c0c(in_stack_00000008,unaff_x25,
                   *(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo);
      if (*in_stack_00000010 == 0) goto LAB_0569bc90;
      FUN_04e935dc(*in_stack_00000010,unaff_x25,lVar1,
                   *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
      unaff_x20 = (undefined8 *)Oculus_Platform_Request<AssetDetailsList>_TypeInfo;
      lVar1 = *(long *)(in_stack_00000000 + 0x18);
      unaff_w21 = unaff_w21 + 1;
      if (lVar1 == 0) goto LAB_0569bc90;
      if (*(int *)(lVar1 + 0x18) <= unaff_w21) {
        return;
      }
      unaff_x25 = FUN_0400ff1c(lVar1,unaff_w21,*unaff_x24);
      if (in_stack_00000008 == 0) goto LAB_0569bc90;
      uVar4 = FUN_03c2311c(in_stack_00000008,unaff_x25,
                           *(undefined8 *)System_Func<InteractorRegisteredEventArgs>_TypeInfo);
      unaff_x27 = in_stack_00000000;
    } while ((uVar4 & 1) == 0);
    param_1 = &OVRResult<Guid,_Int32Enum>_TypeInfo;
    unaff_x19 = in_stack_00000008;
  } while( true );
}


