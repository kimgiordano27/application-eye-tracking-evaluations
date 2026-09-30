/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$.cctor
ENTRY_POINT: 0569b95c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 124
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_11;functionality_data_collection_or_telemetry_hits_11
*/


void OVRPlugin_OVRP_1_5_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  int iVar12;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *plVar13;
  long unaff_x25;
  long lVar14;
  long unaff_x27;
  long lVar15;
  int iVar16;
  
  FUN_02d965b8();
  FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
  FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
  *(undefined1 *)(unaff_x25 + 0x876) = 1;
  lVar3 = thunk_FUN_02dd3144(*unaff_x24);
  FUN_04e92874(lVar3,*unaff_x19);
  plVar13 = (long *)(unaff_x27 + 0x10);
  *plVar13 = lVar3;
  LeanTween__value(plVar13,lVar3);
  lVar3 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_03c22a18(lVar3,*unaff_x20);
  lVar4 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_03c22a18(lVar4,*unaff_x22);
  lVar5 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_03c22a18(lVar5,*unaff_x20);
  puVar1 = PTR_DAT_069fdf78;
  lVar6 = *(long *)(unaff_x27 + 0x18);
  if (lVar6 != 0) {
    iVar12 = 0;
    while( true ) {
      puVar2 = Oculus_Platform_Request<AssetDetailsList>_TypeInfo;
      if (*(int *)(lVar6 + 0x18) <= iVar12) {
        return;
      }
      uVar7 = FUN_0400ff1c(lVar6,iVar12,*(undefined8 *)puVar1);
      if (lVar3 == 0) break;
      uVar8 = FUN_03c2311c(lVar3,uVar7,
                           *(undefined8 *)System_Func<InteractorRegisteredEventArgs>_TypeInfo);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) == 0)
        {
          thunk_FUN_02df485c();
        }
        uVar7 = FUN_0569bcb4(uVar7,lVar3);
      }
      if (((*(long *)(unaff_x27 + 0x20) == 0) ||
          (lVar6 = FUN_0400ff1c(*(long *)(unaff_x27 + 0x20),iVar12,*(undefined8 *)puVar2),
          lVar6 == 0)) || (*(long *)(unaff_x27 + 0x28) == 0)) break;
      lVar14 = *(long *)(lVar6 + 0x10);
      lVar6 = FUN_0400ff1c(*(long *)(unaff_x27 + 0x28),iVar12,*(undefined8 *)puVar2);
      if (lVar6 == 0) break;
      lVar15 = *(long *)(lVar6 + 0x10);
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
      FUN_04e92874(lVar6,*(undefined8 *)PTR_DAT_069ff508);
      if (lVar14 == 0) break;
      if (0 < *(int *)(lVar14 + 0x18)) {
        iVar16 = 0;
        do {
          uVar9 = FUN_0400ff1c(lVar14,iVar16,*(undefined8 *)puVar1);
          uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                                       Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
          FUN_048a20e0(uVar10,uVar7,uVar9,
                       *(undefined8 *)
                        Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
          if (lVar4 == 0) goto LAB_0569bc90;
          uVar8 = FUN_03c2311c(lVar4,uVar10,
                               *(undefined8 *)Oculus_Platform_Request<AssetDetails>_TypeInfo);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02df485c();
            }
            uVar9 = FUN_0569bdf0(uVar7,uVar9,lVar4);
          }
          if ((lVar15 == 0) ||
             (uVar11 = FUN_0400ff1c(lVar15,iVar16,*(undefined8 *)puVar1), lVar5 == 0))
          goto LAB_0569bc90;
          uVar8 = FUN_03c2311c(lVar5,uVar11,
                               *(undefined8 *)System_Func<InteractorRegisteredEventArgs>_TypeInfo);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) ==
                0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_0569bcb4(uVar11,lVar5);
          }
          FUN_03c23c0c(lVar4,uVar10,
                       *(undefined8 *)Oculus_Platform_Request<ApplicationVersion>_TypeInfo);
          FUN_03c23c0c(lVar5,uVar11,*(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo);
          if (lVar6 == 0) goto LAB_0569bc90;
          FUN_04e935f0(lVar6,uVar9,uVar11,*(undefined8 *)PTR_DAT_069ff500);
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar14 + 0x18));
      }
      FUN_03c23c0c(lVar3,uVar7,*(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo);
      if (*plVar13 == 0) break;
      FUN_04e935dc(*plVar13,uVar7,lVar6,
                   *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
      lVar6 = *(long *)(unaff_x27 + 0x18);
      iVar12 = iVar12 + 1;
      if (lVar6 == 0) break;
    }
  }
LAB_0569bc90:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


