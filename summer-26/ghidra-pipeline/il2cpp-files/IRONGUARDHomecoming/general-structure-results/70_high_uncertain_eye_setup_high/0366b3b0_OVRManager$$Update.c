/*
FUNCTION_NAME: OVRManager$$Update
ENTRY_POINT: 0366b3b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__Update(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 uVar6;
  
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *unaff_x21;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 3;
      }
      else {
        FUN_030ba904(param_1,3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      puVar2 = Method_TMPro_TMP_ListPool<Canvas>_Get__;
      lVar3 = *unaff_x19;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)Method_TMPro_TMP_ListPool<Canvas>_Get__;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = 0;
          }
          else {
            FUN_0317d87c(0,0,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                        );
          }
          lVar3 = *unaff_x19;
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x10);
            lVar5 = *(long *)puVar2;
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            uVar6 = DAT_00c8e790;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              }
              else {
                FUN_0317d87c(0,0x3f800000,lVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar3 = *unaff_x19;
              if (lVar3 != 0) {
                lVar4 = *(long *)(lVar3 + 0x10);
                lVar5 = *(long *)puVar2;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    uVar6 = NEON_fmov(0x3f800000,4);
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  }
                  else {
                    FUN_0317d87c(0x3f800000,0x3f800000,lVar3,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar3 = *unaff_x19;
                  if (lVar3 != 0) {
                    lVar4 = *(long *)(lVar3 + 0x10);
                    lVar5 = *(long *)puVar2;
                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                    uVar6 = DAT_00c8d7f0;
                    if (lVar4 != 0) {
                      uVar1 = *(uint *)(lVar3 + 0x18);
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                        return;
                      }
                      FUN_0317d87c(0x3f800000,0,lVar3,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                  );
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


