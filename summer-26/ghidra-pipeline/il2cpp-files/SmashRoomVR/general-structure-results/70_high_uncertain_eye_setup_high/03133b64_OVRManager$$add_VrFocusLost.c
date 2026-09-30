/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 03133b64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_VrFocusLost(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  long unaff_x25;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float unaff_s14;
  undefined8 in_stack_00000010;
  
  lVar1 = FUN_0391c27c();
  lVar2 = FUN_0391c27c();
  if (lVar2 != 0) {
    fVar3 = (float)FUN_03928d34(lVar2,0);
    fVar5 = param_3;
    fVar8 = param_2;
    lVar2 = FUN_0391c27c();
    if ((lVar2 != 0) && (fVar4 = (float)FUN_039291ac(lVar2,0), lVar1 != 0)) {
      uVar11 = (ulong)(uint)(param_3 - fVar5);
      uVar9 = (ulong)(uint)(param_2 - fVar8);
      FUN_03928dd4(fVar3 - fVar4,uVar9,uVar11,lVar1,0);
      if (*(long *)(unaff_x21 + 0x70) != 0) {
        lVar1 = FUN_0391c27c(*(long *)(unaff_x21 + 0x70),0);
        lVar2 = FUN_0391c27c();
        if (lVar2 != 0) {
          uVar6 = FUN_03928d34(lVar2,0);
          uVar10 = uVar9;
          uVar12 = uVar11;
          lVar2 = FUN_0391c27c();
          if ((lVar2 != 0) && (uVar7 = FUN_03929130(lVar2,0), lVar1 != 0)) {
            thunk_FUN_0392a110(uVar6,uVar9,uVar11,uVar7,uVar10,uVar12,lVar1,0);
            if (*(long *)(unaff_x21 + 0x70) != 0) {
              fVar5 = (float)FUN_038f13a0(*(long *)(unaff_x21 + 0x70),0);
              *(float *)(unaff_x19 + 0x104) = fVar5;
              *(float *)(unaff_x19 + 0x108) = unaff_s14;
              if (*unaff_x20 == '\0') {
                uVar6 = CONCAT44(unaff_s14 - (float)((ulong)in_stack_00000010 >> 0x20),
                                 fVar5 - (float)in_stack_00000010);
              }
              else {
                if (DAT_03fed2da == '\0') {
                  thunk_FUN_01ad9084(
                                    Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                    );
                  DAT_03fed2da = '\x01';
                }
                uVar6 = **(undefined8 **)
                          (*(long *)
                            Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ +
                          0xb8);
              }
              *(undefined8 *)(unaff_x25 + 8) = uVar6;
              *(undefined4 *)(unaff_x19 + 0x148) = 0;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


