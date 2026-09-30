/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_GetTrackingIPDEnabled
ENTRY_POINT: 0569b9e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_7;functionality_data_collection_or_telemetry_hits_7
*/


void OVRPlugin_OVRP_1_6_0__ovrp_GetTrackingIPDEnabled(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  int iVar8;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long lVar9;
  long unaff_x27;
  long lVar10;
  int iVar11;
  
  puVar1 = PTR_DAT_069fdf78;
  lVar3 = unaff_x24[1];
  if (lVar3 != 0) {
    iVar8 = 0;
    while( true ) {
      puVar2 = Oculus_Platform_Request<AssetDetailsList>_TypeInfo;
      if (*(int *)(lVar3 + 0x18) <= iVar8) {
        return;
      }
      uVar4 = FUN_0400ff1c(lVar3,iVar8,*(undefined8 *)puVar1);
      if (unaff_x19 == 0) break;
      uVar5 = FUN_03c2311c(unaff_x19,uVar4,
                           *(undefined8 *)System_Func<InteractorRegisteredEventArgs>_TypeInfo);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0569bcb4(uVar4,unaff_x19);
      }
      if (((*(long *)(unaff_x27 + 0x20) == 0) ||
          (lVar3 = FUN_0400ff1c(*(long *)(unaff_x27 + 0x20),iVar8,*(undefined8 *)puVar2), lVar3 == 0
          )) || (*(long *)(unaff_x27 + 0x28) == 0)) break;
      lVar9 = *(long *)(lVar3 + 0x10);
      lVar3 = FUN_0400ff1c(*(long *)(unaff_x27 + 0x28),iVar8,*(undefined8 *)puVar2);
      if (lVar3 == 0) break;
      lVar10 = *(long *)(lVar3 + 0x10);
      lVar3 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
      FUN_04e92874(lVar3,*(undefined8 *)PTR_DAT_069ff508);
      if (lVar9 == 0) break;
      if (0 < *(int *)(lVar9 + 0x18)) {
        iVar11 = 0;
        do {
          uVar6 = FUN_0400ff1c(lVar9,iVar11,*(undefined8 *)puVar1);
          uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
          FUN_048a20e0(uVar7,uVar4,uVar6,
                       *(undefined8 *)
                        Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
          if (unaff_x22 == 0) goto LAB_0569bc90;
          uVar5 = FUN_03c2311c();
          if ((uVar5 & 1) != 0) {
            if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02df485c();
            }
            uVar6 = FUN_0569bdf0(uVar4,uVar6);
          }
          if ((lVar10 == 0) ||
             (uVar7 = FUN_0400ff1c(lVar10,iVar11,*(undefined8 *)puVar1), unaff_x23 == 0))
          goto LAB_0569bc90;
          uVar5 = FUN_03c2311c();
          if ((uVar5 & 1) != 0) {
            if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02df485c();
            }
            uVar7 = FUN_0569bcb4(uVar7);
          }
          FUN_03c23c0c();
          FUN_03c23c0c();
          if (lVar3 == 0) goto LAB_0569bc90;
          FUN_04e935f0(lVar3,uVar6,uVar7,*(undefined8 *)PTR_DAT_069ff500);
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar9 + 0x18));
      }
      FUN_03c23c0c(unaff_x19,uVar4,*(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo);
      if (*unaff_x24 == 0) break;
      FUN_04e935dc(*unaff_x24,uVar4,lVar3,
                   *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
      lVar3 = *(long *)(unaff_x27 + 0x18);
      iVar8 = iVar8 + 1;
      if (lVar3 == 0) break;
    }
  }
LAB_0569bc90:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


