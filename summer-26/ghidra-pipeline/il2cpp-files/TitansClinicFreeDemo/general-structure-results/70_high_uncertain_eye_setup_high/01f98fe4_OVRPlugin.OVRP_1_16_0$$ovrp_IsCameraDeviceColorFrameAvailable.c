/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceColorFrameAvailable
ENTRY_POINT: 01f98fe4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceColorFrameAvailable(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint in_w8;
  ulong uVar4;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long *plVar5;
  long unaff_x26;
  uint unaff_w27;
  ulong uVar6;
  long unaff_x29;
  
code_r0x01f98fe4:
  if ((int)in_w8 <= (int)unaff_w27) {
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar3 = FUN_01f99958();
    *unaff_x19 = uVar3;
    thunk_FUN_01286abc();
    return 1;
  }
  if (in_w8 <= unaff_w27) goto LAB_01f9904c;
  plVar5 = (long *)(unaff_x24 + (long)(int)unaff_w27 * 8 + 0x20);
  if (*plVar5 != 0) {
    lVar2 = FUN_01e6ba9c(*plVar5,0);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w27) goto LAB_01f9904c;
    *plVar5 = lVar2;
    thunk_FUN_01286abc(plVar5,lVar2);
    if (unaff_x29 != 0) {
      if ((int)*(ulong *)(unaff_x29 + 0x18) < 1) {
LAB_01f98d84:
        FUN_01f99324();
        return 0;
      }
      uVar6 = 0;
      uVar4 = *(ulong *)(unaff_x29 + 0x18) & 0xffffffff;
      do {
        if ((uVar4 <= uVar6) || (*(uint *)(unaff_x24 + 0x18) <= unaff_w27)) goto LAB_01f9904c;
        lVar2 = *(long *)(unaff_x26 + uVar6 * 8);
        if ((unaff_x21 & 1) == 0) {
          if (lVar2 == 0) break;
          uVar4 = FUN_01e68100(lVar2,*plVar5,0);
          if ((uVar4 & 1) != 0) goto LAB_01f98fc0;
        }
        else {
          iVar1 = FUN_01e672c0(lVar2,*plVar5,5,0);
          if (iVar1 == 0) goto LAB_01f98fc0;
        }
        uVar4 = (ulong)*(uint *)(unaff_x29 + 0x18);
        uVar6 = uVar6 + 1;
        if ((long)(int)*(uint *)(unaff_x29 + 0x18) <= (long)uVar6) goto LAB_01f98d84;
      } while( true );
    }
  }
  goto LAB_01f99048;
LAB_01f98fc0:
  if (unaff_x23 == 0) {
LAB_01f99048:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  if (*(uint *)(unaff_x23 + 0x18) <= (uint)uVar6) {
LAB_01f9904c:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca8();
  }
  in_w8 = *(uint *)(unaff_x24 + 0x18);
  unaff_w27 = unaff_w27 + 1;
  goto code_r0x01f98fe4;
}


