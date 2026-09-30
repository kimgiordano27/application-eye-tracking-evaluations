/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameSize
ENTRY_POINT: 06971ab0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameSize
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x24;
  long *unaff_x25;
  float fVar9;
  float fVar10;
  ulong uVar11;
  
  plVar3 = (long *)(**(code **)(in_x9 + 0x2f8))(param_1,param_2,*(undefined8 *)(in_x9 + 0x300));
  if ((plVar3 != (long *)0x0) &&
     ((**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
     unaff_x25 != (long *)0x0)) {
    (**(code **)(*unaff_x25 + 0x5e8))();
    lVar6 = *unaff_x20;
    if (lVar6 != 0) {
      fVar9 = (float)*(undefined8 *)(unaff_x24 + 0x18);
      fVar10 = (float)((ulong)*(undefined8 *)(unaff_x24 + 0x18) >> 0x20);
      uVar11 = NEON_scvtf(CONCAT44((int)fVar10,(int)fVar9),4);
      *(ulong *)(lVar6 + 0x48) =
           uVar11 ^ (uVar11 ^ 0xcf000000cf000000) &
                    CONCAT44(-(uint)(fVar10 == INFINITY),-(uint)(fVar9 == INFINITY));
      fVar9 = -2.1474836e+09;
      if (*(float *)(unaff_x24 + 0x20) != INFINITY) {
        fVar9 = (float)(int)*(float *)(unaff_x24 + 0x20);
      }
      *(float *)(lVar6 + 0x50) = fVar9;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar6 + 0x30) != 0) {
        lVar6 = *(long *)(*(long *)(lVar6 + 0x30) + 0x100);
        uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
        FUN_07cb26a0();
        if (lVar6 != 0) {
          FUN_07cb2770(lVar6,uVar4,0);
          if ((*unaff_x20 != 0) && (lVar6 = *(long *)(*unaff_x20 + 0x38), lVar6 != 0)) {
            lVar6 = *(long *)(lVar6 + 0x100);
            uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
            FUN_07cb26a0();
            if (lVar6 != 0) {
              FUN_07cb2770(lVar6,uVar4,0);
              lVar6 = *(long *)(unaff_x19 + 0x20);
              if (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x10);
                lVar5 = *unaff_x20;
                lVar8 = *(long *)PTR_DAT_084b72c0;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    plVar3 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar3 = lVar5;
                    thunk_FUN_03afed3c(plVar3);
                  }
                  else {
                    FUN_04de85b0(lVar6,lVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


