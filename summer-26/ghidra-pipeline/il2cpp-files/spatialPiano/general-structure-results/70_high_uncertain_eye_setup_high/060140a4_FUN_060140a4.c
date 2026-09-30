/*
FUNCTION_NAME: FUN_060140a4
ENTRY_POINT: 060140a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_060140a4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_128__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_127__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_126__;
  if ((DAT_06bc5327 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_128__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_129__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_127__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_126__);
    FUN_02f08768(PTR_DAT_067cc250);
    FUN_02f08768(PTR_DAT_067cc258);
    FUN_02f08768(PTR_DAT_067cc260);
    FUN_02f08768(PTR_DAT_067cc268);
    FUN_02f08768(PTR_DAT_067cc270);
    FUN_02f08768(PTR_DAT_067cc278);
    FUN_02f08768(PTR_DAT_067cc280);
    DAT_06bc5327 = 1;
  }
  FUN_05116b38(param_1,0);
  lVar5 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_03abf108(lVar5,*(undefined8 *)puVar3);
  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_05116b38(lVar6,0);
  if ((lVar6 != 0) &&
     (*(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_067cc258,
     puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_129__, lVar5 != 0)) {
    lVar7 = *(long *)(lVar5 + 0x10);
    lVar8 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_129__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
      }
      else {
        FUN_03abf904(lVar5,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
      FUN_05116b38(lVar6,0);
      if (lVar6 != 0) {
        lVar8 = *(long *)puVar2;
        uVar9 = *(undefined8 *)PTR_DAT_067cc250;
        lVar7 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        *(undefined8 *)(lVar6 + 0x10) = uVar9;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
          }
          else {
            FUN_03abf904(lVar5,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
          FUN_05116b38(lVar6,0);
          if (lVar6 != 0) {
            lVar8 = *(long *)puVar2;
            uVar9 = *(undefined8 *)PTR_DAT_067cc280;
            lVar7 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            *(undefined8 *)(lVar6 + 0x10) = uVar9;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
              }
              else {
                FUN_03abf904(lVar5,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
              FUN_05116b38(lVar6,0);
              if (lVar6 != 0) {
                lVar8 = *(long *)puVar2;
                uVar9 = *(undefined8 *)PTR_DAT_067cc270;
                lVar7 = *(long *)(lVar5 + 0x10);
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                *(undefined8 *)(lVar6 + 0x10) = uVar9;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                  }
                  else {
                    FUN_03abf904(lVar5,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                  FUN_05116b38(lVar6,0);
                  if (lVar6 != 0) {
                    lVar8 = *(long *)puVar2;
                    uVar9 = *(undefined8 *)PTR_DAT_067cc278;
                    lVar7 = *(long *)(lVar5 + 0x10);
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    *(undefined8 *)(lVar6 + 0x10) = uVar9;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                      }
                      else {
                        FUN_03abf904(lVar5,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                      FUN_05116b38(lVar6,0);
                      if (lVar6 != 0) {
                        lVar8 = *(long *)puVar2;
                        uVar9 = *(undefined8 *)PTR_DAT_067cc260;
                        lVar7 = *(long *)(lVar5 + 0x10);
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        *(undefined8 *)(lVar6 + 0x10) = uVar9;
                        if (lVar7 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                          }
                          else {
                            FUN_03abf904(lVar5,lVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                          FUN_05116b38(lVar6,0);
                          if (lVar6 != 0) {
                            lVar8 = *(long *)puVar2;
                            uVar9 = *(undefined8 *)PTR_DAT_067cc268;
                            lVar7 = *(long *)(lVar5 + 0x10);
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            *(undefined8 *)(lVar6 + 0x10) = uVar9;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = lVar6;
                              }
                              else {
                                FUN_03abf904(lVar5,lVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(param_1 + 0x10) = lVar5;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


