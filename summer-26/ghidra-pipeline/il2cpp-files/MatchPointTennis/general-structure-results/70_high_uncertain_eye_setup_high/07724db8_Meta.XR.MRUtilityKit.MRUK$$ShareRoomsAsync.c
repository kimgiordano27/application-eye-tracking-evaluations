/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$ShareRoomsAsync
ENTRY_POINT: 07724db8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__ShareRoomsAsync(float param_1,float param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  float *unaff_x19;
  float *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  float unaff_s8;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  long in_stack_00000008;
  
  while( true ) {
    fVar4 = SQRT(param_2 + param_1);
    if (SQRT(param_2 + param_1) <= unaff_s8) {
      fVar4 = unaff_s8;
    }
    unaff_s8 = fVar4;
    if ((((param_3 == 0) || (lVar2 = FUN_05badb74(param_3,unaff_w24,*unaff_x27), lVar2 == 0)) ||
        (*(long *)(lVar2 + 0x20) == 0)) ||
       (uVar3 = FUN_04d7a1ac(*(long *)(lVar2 + 0x20),*unaff_x26), unaff_x23 == 0)) break;
    lVar2 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar2 == 0) break;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44();
    }
    do {
      lVar2 = *(long *)(unaff_x22 + 0x10);
      unaff_w24 = unaff_w24 + 1;
      if (lVar2 == 0) goto LAB_07724e54;
      if (*(int *)(lVar2 + 0x18) <= unaff_w24) {
        lVar2 = *(long *)(unaff_x22 + 0x18);
        if (lVar2 != 0) {
          if (unaff_w21 < *(uint *)(lVar2 + 0x18)) {
            lVar2 = lVar2 + in_stack_00000008 * 0xc;
            fVar4 = *(float *)(lVar2 + 0x28);
            *(undefined8 *)unaff_x20 = *(undefined8 *)(lVar2 + 0x20);
            unaff_x20[2] = fVar4;
            *unaff_x19 = unaff_s8;
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        goto LAB_07724e54;
      }
      lVar2 = FUN_05badb74(lVar2,unaff_w24,*unaff_x27);
      if (lVar2 == 0) goto LAB_07724e54;
    } while (*(uint *)(lVar2 + 0x28) != unaff_w21);
    if (*(long *)(unaff_x22 + 0x10) == 0) break;
    fVar4 = *unaff_x20;
    uVar3 = *(undefined8 *)(unaff_x20 + 1);
    lVar2 = FUN_05badb74(*(long *)(unaff_x22 + 0x10),unaff_w24,*unaff_x27);
    if (lVar2 == 0) break;
    fVar5 = *(float *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x14);
    if (*(char *)(unaff_x28 + 10) == '\0') {
      FUN_04447ba8();
      *(undefined1 *)(unaff_x28 + 10) = 1;
    }
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar4 = fVar4 - fVar5;
    fVar5 = (float)uVar3 - (float)uVar6;
    param_2 = (float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar6 >> 0x20);
    param_2 = param_2 * param_2;
    param_1 = fVar4 * fVar4 + fVar5 * fVar5;
    param_3 = *(long *)(unaff_x22 + 0x10);
  }
LAB_07724e54:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


