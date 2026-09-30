/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 0569b870
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 130
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_20;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_20
*/


void OVRPlugin_OVRP_1_3_0___cctor(long param_1)

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
  long unaff_x20;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *puVar14;
  long unaff_x23;
  undefined8 *puVar15;
  undefined8 *unaff_x24;
  long *plVar16;
  long unaff_x25;
  long lVar17;
  long lVar18;
  int iVar19;
  
  puVar12 = *(undefined8 **)(unaff_x20 + 0x6f0);
  puVar15 = *(undefined8 **)(unaff_x23 + 0x720);
  puVar14 = *(undefined8 **)(unaff_x22 + 0x728);
  if ((*(byte *)(unaff_x25 + 0x876) & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff500);
    FUN_02d965b8(Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff508);
    FUN_02d965b8(Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff510);
    FUN_02d965b8(Oculus_Platform_Request<AchievementProgressList>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<ApplicationVersion>_TypeInfo);
    FUN_02d965b8(System_Func<MouseCaptureEvent>_TypeInfo);
    FUN_02d965b8(System_Func<InteractorRegisteredEventArgs>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetDetails>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
    FUN_02d965b8(System_Func<InteractorUnregisteredEventArgs>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AppDownloadProgressResult>_TypeInfo);
    FUN_02d965b8(System_Func<JSONNode>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fda98);
    FUN_02d965b8(PTR_DAT_069fdf78);
    FUN_02d965b8(Oculus_Platform_Request<AssetDetailsList>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
    *(undefined1 *)(unaff_x25 + 0x876) = 1;
  }
  lVar3 = thunk_FUN_02dd3144(*unaff_x24);
  FUN_04e92874(lVar3,*unaff_x19);
  plVar16 = (long *)(param_1 + 0x10);
  *plVar16 = lVar3;
  LeanTween__value(plVar16,lVar3);
  lVar3 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_03c22a18(lVar3,*puVar12);
  lVar4 = thunk_FUN_02dd3144(*puVar15);
  FUN_03c22a18(lVar4,*puVar14);
  lVar5 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_03c22a18(lVar5,*puVar12);
  puVar1 = PTR_DAT_069fdf78;
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    iVar13 = 0;
    while( true ) {
      puVar2 = Oculus_Platform_Request<AssetDetailsList>_TypeInfo;
      if (*(int *)(lVar6 + 0x18) <= iVar13) {
        return;
      }
      uVar7 = FUN_0400ff1c(lVar6,iVar13,*(undefined8 *)puVar1);
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
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (lVar6 = FUN_0400ff1c(*(long *)(param_1 + 0x20),iVar13,*(undefined8 *)puVar2), lVar6 == 0)
          ) || (*(long *)(param_1 + 0x28) == 0)) break;
      lVar17 = *(long *)(lVar6 + 0x10);
      lVar6 = FUN_0400ff1c(*(long *)(param_1 + 0x28),iVar13,*(undefined8 *)puVar2);
      if (lVar6 == 0) break;
      lVar18 = *(long *)(lVar6 + 0x10);
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
      FUN_04e92874(lVar6,*(undefined8 *)PTR_DAT_069ff508);
      if (lVar17 == 0) break;
      if (0 < *(int *)(lVar17 + 0x18)) {
        iVar19 = 0;
        do {
          uVar9 = FUN_0400ff1c(lVar17,iVar19,*(undefined8 *)puVar1);
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
          if ((lVar18 == 0) ||
             (uVar11 = FUN_0400ff1c(lVar18,iVar19,*(undefined8 *)puVar1), lVar5 == 0))
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
          iVar19 = iVar19 + 1;
        } while (iVar19 < *(int *)(lVar17 + 0x18));
      }
      FUN_03c23c0c(lVar3,uVar7,*(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo);
      if (*plVar16 == 0) break;
      FUN_04e935dc(*plVar16,uVar7,lVar6,
                   *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
      lVar6 = *(long *)(param_1 + 0x18);
      iVar13 = iVar13 + 1;
      if (lVar6 == 0) break;
    }
  }
LAB_0569bc90:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


