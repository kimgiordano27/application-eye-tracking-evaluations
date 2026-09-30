/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetOverlayQuad3
ENTRY_POINT: 0569bc58
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


void OVRPlugin_OVRP_1_6_0__ovrp_SetOverlayQuad3(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  long lVar6;
  long unaff_x27;
  int iVar7;
  long in_stack_00000000;
  long in_stack_00000008;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (param_1 != 0) {
    FUN_04e935dc(param_1,unaff_x25,unaff_x27,
                 *(undefined8 *)Oculus_Platform_Request<ApplicationInviteList>_TypeInfo);
    puVar1 = Oculus_Platform_Request<AssetDetailsList>_TypeInfo;
    lVar5 = *(long *)(in_stack_00000000 + 0x18);
    in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) <= in_stack_00000018._4_4_) {
      return;
    }
    unaff_x25 = FUN_0400ff1c(lVar5,in_stack_00000018._4_4_,*unaff_x24);
    if (unaff_x19 == 0) break;
    uVar2 = FUN_03c2311c(unaff_x19,unaff_x25,
                         *(undefined8 *)System_Func<InteractorRegisteredEventArgs>_TypeInfo);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      unaff_x25 = FUN_0569bcb4(unaff_x25,unaff_x19);
    }
    if (((*(long *)(in_stack_00000000 + 0x20) == 0) ||
        (lVar5 = FUN_0400ff1c(*(long *)(in_stack_00000000 + 0x20),in_stack_00000018._4_4_,
                              *(undefined8 *)puVar1), lVar5 == 0)) ||
       (*(long *)(in_stack_00000000 + 0x28) == 0)) break;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar5 = FUN_0400ff1c(*(long *)(in_stack_00000000 + 0x28),in_stack_00000018._4_4_,
                         *(undefined8 *)puVar1);
    if (lVar5 == 0) break;
    lVar5 = *(long *)(lVar5 + 0x10);
    unaff_x27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
    FUN_04e92874(unaff_x27,*(undefined8 *)PTR_DAT_069ff508);
    if (lVar6 == 0) break;
    if (0 < *(int *)(lVar6 + 0x18)) {
      iVar7 = 0;
      do {
        uVar3 = FUN_0400ff1c(lVar6,iVar7,*unaff_x24);
        uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                    Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
        FUN_048a20e0(uVar4,unaff_x25,uVar3,
                     *(undefined8 *)Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo)
        ;
        if (unaff_x22 == 0) goto LAB_0569bc90;
        uVar2 = FUN_03c2311c();
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02df485c();
          }
          uVar3 = FUN_0569bdf0(unaff_x25,uVar3);
        }
        if ((lVar5 == 0) || (uVar4 = FUN_0400ff1c(lVar5,iVar7,*unaff_x24), unaff_x23 == 0))
        goto LAB_0569bc90;
        uVar2 = FUN_03c2311c();
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)Oculus_Platform_Request<AssetFileDeleteResult>_TypeInfo + 0xe4) == 0
             ) {
            thunk_FUN_02df485c();
          }
          uVar4 = FUN_0569bcb4(uVar4);
        }
        FUN_03c23c0c();
        FUN_03c23c0c();
        if (unaff_x27 == 0) goto LAB_0569bc90;
        FUN_04e935f0(unaff_x27,uVar3,uVar4,*(undefined8 *)PTR_DAT_069ff500);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar6 + 0x18));
    }
    FUN_03c23c0c(in_stack_00000008,unaff_x25,*(undefined8 *)System_Func<MouseCaptureEvent>_TypeInfo)
    ;
    unaff_x19 = in_stack_00000008;
    param_1 = *in_stack_00000010;
  }
LAB_0569bc90:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


