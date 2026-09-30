/*
FUNCTION_NAME: FUN_0550895c
ENTRY_POINT: 0550895c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0550895c(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
                    /* try { // try from 0550896c to 0560896f has its CatchHandler @ 0550985c */
  if ((DAT_06bbf574 & 1) == 0) {
                    /* try { // try from 0550898c to 05608993 has its CatchHandler @ 055097cc */
    FUN_02f08768(OVRPlugin_OVRP_1_1_0_TypeInfo);
                    /* try { // try from 05508994 to 0560899b has its CatchHandler @ 055097c8 */
    DAT_06bbf574 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_054f6fe4();
                    /* try { // try from 055089a4 to 056089cb has its CatchHandler @ 055098e4 */
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar7 = FUN_054fb910(*(long *)(param_1 + 0x10));
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar8 = FUN_054fc088(*(long *)(param_1 + 0x10),lVar7);
        FUN_05506338(param_1,4);
        if (param_2 != (long *)0x0) {
          uVar9 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
          lVar12 = *(long *)(PTR_DAT_067c9338 + 0x20);
          if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
          }
          uVar10 = FUN_050e4454(lVar12 + 0x20,0);
          uVar4 = FUN_050edfb8(uVar9,uVar10,0);
          if ((uVar4 & 1) == 0) {
            FUN_05501c04(param_1,param_2[3]);
          }
          else {
            FUN_05500c08(param_1);
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar5 = FUN_054f6fe4();
            if (*(long *)(param_1 + 0x10) != 0) {
              FUN_054fbbac(*(long *)(param_1 + 0x10),lVar7,uVar4 & 1,uVar4 & 1,uVar4 & 1);
              FUN_05506338(param_1,6);
              if (*(long *)(param_1 + 0x10) != 0) {
                lVar12 = FUN_054fb910();
                if ((*(long *)(param_1 + 0x10) != 0) && (lVar12 != 0)) {
                  FUN_054eb158(lVar12,*(long *)(param_1 + 0x10),0);
                  if (*(long *)(param_1 + 0x10) != 0) {
                    FUN_054fc1f4(*(long *)(param_1 + 0x10),lVar12);
                    FUN_05501c04(param_1,param_2[6]);
                    if (*(long *)(param_1 + 0x10) != 0) {
                      FUN_054fc278();
                      puVar2 = OVRPlugin_OVRP_1_1_0_TypeInfo;
                      if (*(long *)(param_1 + 0x10) != 0) {
                        uVar1 = *(undefined4 *)(lVar12 + 0x10);
                        uVar6 = FUN_054f6fe4();
                        lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                        FUN_05116b38(lVar12,0);
                        *(undefined4 *)(lVar12 + 0x10) = uVar3;
                        *(undefined4 *)(lVar12 + 0x14) = uVar5;
                        *(undefined4 *)(lVar12 + 0x18) = uVar1;
                        *(undefined4 *)(lVar12 + 0x1c) = uVar6;
                        if (lVar8 != 0) {
                          lVar11 = *(long *)(param_1 + 0x30);
                          *(long *)(lVar8 + 0x18) = lVar12;
                          if (lVar11 != 0) {
                            lVar8 = *(long *)(lVar11 + 0x20);
                            *(long *)(param_1 + 0x30) = lVar8;
                            if (lVar8 != 0) {
                              *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar8 + 0x20);
                              if ((*(long *)(param_1 + 0x10) != 0) && (lVar7 != 0)) {
                                FUN_054eb158(lVar7,*(long *)(param_1 + 0x10),0);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


