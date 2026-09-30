/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$MoveNext
ENTRY_POINT: 0581f990
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__MoveNext
               (long *param_1,long param_2)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  undefined8 *in_x9;
  long unaff_x19;
  size_t unaff_x20;
  long *unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  int unaff_w26;
  long unaff_x29;
  
  do {
    lVar2 = param_1[2];
    *(undefined8 **)(unaff_x29 + -0x18) = in_x9;
    FUN_02fe9dc8(param_2,lVar2);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
LAB_0581fa34:
      if (*(long *)(*(long *)(unaff_x29 + -0x28) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return unaff_w24;
    }
    do {
      unaff_w24 = unaff_w24 - 1;
      if ((int)unaff_w24 < unaff_w26) {
        unaff_w24 = 0xffffffff;
        goto LAB_0581fa34;
      }
      if (*(uint *)(unaff_x21 + 3) <= unaff_w24) goto LAB_0581fa70;
      memcpy(unaff_x23,
             (void *)((long)unaff_x21 +
                     (ulong)*(uint *)(*unaff_x21 + 0x104) * (long)(int)unaff_w24 + 0x20),unaff_x20);
      uVar1 = FUN_02fe94a8(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
    } while ((uVar1 & 1) == 0);
    lVar2 = *(long *)(unaff_x19 + 0x20);
    __src = unaff_x22;
    if (-1 < *(int *)(**(long **)(lVar2 + 0xc0) + 0x28)) {
      __src = (void *)(unaff_x29 + -0x20);
    }
    memcpy(unaff_x23,__src,unaff_x20);
    param_1 = *(long **)(lVar2 + 0xc0);
    param_2 = *param_1;
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      param_2 = FUN_02feb2c4();
      param_1 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_w24) {
LAB_0581fa70:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    in_x9 = unaff_x23;
    if (-1 < *(int *)(*param_1 + 0x28)) {
      in_x9 = (undefined8 *)*unaff_x23;
    }
  } while( true );
}


