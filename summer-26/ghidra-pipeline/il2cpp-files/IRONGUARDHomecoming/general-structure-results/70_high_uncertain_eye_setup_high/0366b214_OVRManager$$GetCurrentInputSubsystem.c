/*
FUNCTION_NAME: OVRManager$$GetCurrentInputSubsystem
ENTRY_POINT: 0366b214
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentInputSubsystem(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool in_CY;
  long lVar3;
  long in_x9;
  long lVar4;
  long lVar5;
  long in_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar6;
  
  if (in_CY) {
    FUN_030ba904(param_2,0,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    param_2 = *unaff_x20;
    if (param_2 == 0) goto LAB_0366b5dc;
  }
  else {
    *(int *)(param_2 + 0x18) = (int)in_x10 + 1;
    *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = 0;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *unaff_x21;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
                    /* try { // try from 0366b26c to 0376b27b has its CatchHandler @ 0366b27c */
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    /* catch() { ... } // from try @ 0366b1f4 with catch @ 0366b27c
                       catch() { ... } // from try @ 0366b26c with catch @ 0366b27c */
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
                    /* try { // try from 0366b280 to 0376b283 has its CatchHandler @ 0366b28c */
      *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 1;
                    /* try { // try from 0366b284 to 0376b28f has its CatchHandler @ 0366b1c8 */
    }
    else {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0366b280 with catch @ 0366b28c
                        */
      FUN_030ba904(param_2,1,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      param_2 = *unaff_x20;
      if (param_2 == 0) goto LAB_0366b5dc;
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *unaff_x21;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 2;
      }
      else {
        FUN_030ba904(param_2,2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        param_2 = *unaff_x20;
        if (param_2 == 0) goto LAB_0366b5dc;
      }
      lVar3 = *(long *)(param_2 + 0x10);
      lVar4 = *unaff_x21;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 0;
        }
        else {
          FUN_030ba904(param_2,0,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          param_2 = *unaff_x20;
          if (param_2 == 0) goto LAB_0366b5dc;
        }
        lVar3 = *(long *)(param_2 + 0x10);
        lVar4 = *unaff_x21;
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 2;
          }
          else {
            FUN_030ba904(param_2,2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                        );
            param_2 = *unaff_x20;
            if (param_2 == 0) goto LAB_0366b5dc;
          }
          lVar3 = *(long *)(param_2 + 0x10);
          lVar4 = *unaff_x21;
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(param_2 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) = 3;
            }
            else {
              FUN_030ba904(param_2,3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                  FUN_0317d87c(0,0,lVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                  );
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
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
      }
    }
  }
LAB_0366b5dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


