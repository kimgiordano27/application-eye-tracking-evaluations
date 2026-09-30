/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 076daf54
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  bool bVar1;
  long lVar2;
  float *unaff_x19;
  long unaff_x20;
  float *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  float fVar3;
  undefined8 uVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar5;
  float unaff_s14;
  float fVar6;
  float unaff_s15;
  float fVar7;
  undefined8 in_stack_00000000;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined4 in_stack_00000020;
  
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x28) != 1) &&
       ((*(int *)(param_1 + 0x28) == 2 ||
        (unaff_s10 <
         SQRT(in_stack_00000000._4_4_ * in_stack_00000000._4_4_ +
              param_3 * param_3 + (unaff_s11 - unaff_s15) * (unaff_s11 - unaff_s15)))))) {
      unaff_s8 = -unaff_s8;
      unaff_s9 = -unaff_s9;
      param_4 = -param_4;
    }
    unaff_x19[0] = 0.0;
    unaff_x19[1] = 0.0;
    unaff_x19[2] = 0.0;
    unaff_x19[3] = 0.0;
    unaff_x19[6] = 0.0;
    unaff_x19[4] = 0.0;
    unaff_x19[5] = 0.0;
    if (((*(long *)(unaff_x20 + 0x20) != 0) &&
        (lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x20), lVar2 != 0)) &&
       (lVar2 = FUN_085849e0(lVar2,0), lVar2 != 0)) {
      fVar3 = (float)FUN_08596980(in_stack_00000020,lVar2,0);
      *unaff_x19 = fVar3;
      unaff_x19[1] = unaff_s14;
      unaff_x19[2] = unaff_s12;
      fVar5 = *unaff_x21;
      fVar7 = unaff_x21[1];
      fVar6 = unaff_x21[2];
      if (*(char *)(unaff_x23 + 0xe19) == '\0') {
        FUN_0403162c(PTR_DAT_08f65580);
        *(undefined1 *)(unaff_x23 + 0xe19) = 1;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      lVar2 = *(long *)(unaff_x20 + 0x20);
      unaff_x19[6] = SQRT((fVar6 - unaff_s12) * (fVar6 - unaff_s12) +
                          (fVar5 - fVar3) * (fVar5 - fVar3) +
                          (fVar7 - unaff_s14) * (fVar7 - unaff_s14));
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
         (lVar2 = FUN_085849e0(lVar2,0), lVar2 != 0)) {
        fVar3 = (float)FUN_08599d5c(unaff_s8,lVar2,0);
        if (*(char *)(unaff_x24 + 0xe18) == '\0') {
          FUN_0403162c(PTR_DAT_08f65580);
          *(undefined1 *)(unaff_x24 + 0xe18) = 1;
        }
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        fVar5 = SQRT(param_4 * param_4 + fVar3 * fVar3 + unaff_s9 * unaff_s9);
        if (fVar5 <= fStack0000000000000008) {
          if (DAT_09539c10 == '\0') {
            FUN_0403162c(PTR_DAT_08f65568);
            DAT_09539c10 = '\x01';
          }
          uVar4 = **(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8);
          param_4 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08f65568 + 0xb8) + 1);
        }
        else {
          param_4 = param_4 / fVar5;
          uVar4 = CONCAT44(unaff_s9 / fVar5,fVar3 / fVar5);
        }
        *(undefined8 *)(unaff_x19 + 3) = uVar4;
        unaff_x19[5] = param_4;
        if (fStack000000000000000c <= 0.0) {
          bVar1 = true;
        }
        else {
          bVar1 = unaff_x19[6] <= fStack000000000000000c;
        }
        return bVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


