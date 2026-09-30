/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCurrentCameraAnchorHandle
ENTRY_POINT: 0697467c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCurrentCameraAnchorHandle(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long *plVar11;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar12;
  long unaff_x23;
  undefined8 uVar13;
  ulong uVar14;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x438));
  *(undefined1 *)(unaff_x23 + 0x117) = 1;
  uVar13 = _DAT_015c7e80;
  uVar4 = *unaff_x21;
  *(undefined8 *)(unaff_x20 + 0xbc) = _UNK_015c7e88;
  *(undefined8 *)(unaff_x20 + 0xb4) = uVar13;
  lVar5 = thunk_FUN_03ac74bc(uVar4);
  FUN_04de7d48(lVar5,*unaff_x19);
  plVar11 = (long *)(unaff_x20 + 200);
  *plVar11 = lVar5;
  thunk_FUN_03afed3c(plVar11,lVar5);
  lVar5 = FUN_0447b578();
  puVar3 = PTR_DAT_084b7438;
  puVar2 = PTR_DAT_084b7430;
  if (lVar5 != 0) {
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar14 = 0;
      uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        uVar13 = *(undefined8 *)(lVar5 + 0x20 + uVar14 * 8);
        lVar12 = *plVar11;
        lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
        FUN_0679343c(lVar6,0);
        if (lVar6 == 0) goto LAB_069747e4;
        *(undefined8 *)(lVar6 + 0x18) = uVar13;
        thunk_FUN_03afed3c((undefined8 *)(lVar6 + 0x18),uVar13);
        *(undefined1 *)(lVar6 + 0x10) = 1;
        *(bool *)(lVar6 + 0x11) = uVar14 < 2;
        *(bool *)(lVar6 + 0x12) = 1 < uVar14;
        if (lVar12 == 0) goto LAB_069747e4;
        lVar9 = *(long *)(lVar12 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_069747e4;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = lVar6;
          thunk_FUN_03afed3c(plVar7,lVar6);
        }
        else {
          FUN_04de85b0(lVar12,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((long)uVar14 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    return;
  }
LAB_069747e4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


