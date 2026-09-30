/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<RequestScenePermissionIfNeeded>d__13$$SetStateMachine
ENTRY_POINT: 0581f914
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13__SetStateMachine
               (void)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x19;
  size_t unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  int unaff_w26;
  long lVar5;
  long unaff_x29;
  
  do {
    uVar1 = FUN_02fe94a8(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
    if ((uVar1 & 1) != 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      __src = unaff_x22;
      if (-1 < *(int *)(**(long **)(lVar5 + 0xc0) + 0x28)) {
        __src = (void *)(unaff_x29 + -0x20);
      }
      memcpy(unaff_x23,__src,unaff_x20);
      plVar3 = *(long **)(lVar5 + 0xc0);
      lVar5 = *plVar3;
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4();
        plVar3 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      }
      if (*(uint *)(unaff_x21 + 3) <= unaff_w24) {
LAB_0581fa70:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      puVar4 = unaff_x23;
      if (-1 < *(int *)(*plVar3 + 0x28)) {
        puVar4 = (undefined8 *)*unaff_x23;
      }
      lVar2 = plVar3[2];
      *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
      FUN_02fe9dc8(lVar5,lVar2);
      if (*(char *)(unaff_x29 + -0xc) != '\0') goto LAB_0581fa34;
    }
    unaff_w24 = unaff_w24 - 1;
    if ((int)unaff_w24 < unaff_w26) {
      unaff_w24 = 0xffffffff;
LAB_0581fa34:
      if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return unaff_w24;
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_w24) goto LAB_0581fa70;
    memcpy(unaff_x23,
           (void *)((long)unaff_x21 +
                   (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w24 + 0x20),unaff_x20);
  } while( true );
}


