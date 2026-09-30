/*
FUNCTION_NAME: FUN_015d1b44
ENTRY_POINT: 015d1b44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_015d1b44(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_50;
  long local_48;
  
  puVar1 = OVRPlugin_TrackingConfidence___TypeInfo;
                    /* try { // try from 015d1b44 to 016d1b8f has its CatchHandler @ 015d1ea4 */
  if ((DAT_03777ee1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_ComponentModel_DateTimeConverter_ConvertFrom__);
    thunk_FUN_00d48444(OVRPlugin_TrackingConfidence___TypeInfo);
                    /* try { // try from 015d1b94 to 016d1b9f has its CatchHandler @ 015d1eb0 */
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(StringLiteral_11055);
                    /* try { // try from 015d1bb0 to 016d1bb7 has its CatchHandler @ 015d1ea0 */
    DAT_03777ee1 = 1;
  }
  local_50 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar3 = FUN_015d1808(param_3);
  plVar4 = (long *)FUN_0161ca54(0);
  if ((param_2 != 0) && (uVar5 = FUN_0160429c(param_2,0), plVar4 != (long *)0x0)) {
                    /* try { // try from 015d1bfc to 016d1c2f has its CatchHandler @ 015d1e84 */
    lVar6 = (**(code **)(*plVar4 + 600))(plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x260));
    plVar4 = (long *)FUN_0161ca54(0);
    if (plVar4 != (long *)0x0) {
      lVar7 = (**(code **)(*plVar4 + 600))(plVar4,param_4,*(undefined8 *)(*plVar4 + 0x260));
      puVar2 = StringLiteral_11055;
      puVar1 = Method_System_ComponentModel_DateTimeConverter_ConvertFrom__;
      if ((lVar6 != 0) && (lVar7 != 0)) {
                    /* try { // try from 015d1c40 to 016d1c6b has its CatchHandler @ 015d1eb4 */
        uVar5 = FUN_00da4fb8(*(undefined8 *)
                              Method_System_ComponentModel_DateTimeConverter_ConvertFrom__,
                             *(int *)(lVar7 + 0x18) + *(int *)(lVar6 + 0x18));
        FUN_017953b8(lVar6,uVar5,0,0);
        FUN_01795470(lVar7,0,uVar5,*(undefined4 *)(lVar6 + 0x18),*(undefined4 *)(lVar7 + 0x18),0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar6 != 0) {
          FUN_0163005c(lVar6,lVar3,0);
          lVar7 = FUN_0162cbac(lVar6,uVar5,0);
          if (lVar3 != 0) {
            FUN_0179519c(lVar3,0,*(undefined4 *)(lVar3 + 0x18),0);
            FUN_0162cee8(lVar6,0);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar2 = StringLiteral_2672;
            if (lVar3 != 0) {
              FUN_0163005c(lVar3,lVar7,0);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              local_50 = FUN_0174f730(0);
              lVar6 = FUN_0174d880(&local_50,0);
              lVar8 = FUN_00da4fb8(*(undefined8 *)puVar1,8);
              plVar4 = (long *)FUN_01631728(0);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x198))(plVar4,lVar8,*(undefined8 *)(*plVar4 + 0x1a0));
                if (((param_1 != 0) && (lVar9 = System_IO_Directory__Delete(param_1), lVar9 != 0))
                   && (lVar9 = FUN_00da4fb8(*(undefined8 *)puVar1,*(int *)(lVar9 + 0x18) + 0x1c),
                      lVar9 != 0)) {
                  if ((*(int *)(lVar9 + 0x18) == 0) ||
                     (*(undefined1 *)(lVar9 + 0x20) = 1, *(int *)(lVar9 + 0x18) == 1)) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  local_48 = lVar6 + -0x701ce1722770000;
                  *(undefined1 *)(lVar9 + 0x21) = 1;
                  uVar5 = FUN_015c0130(&local_48);
                  FUN_0179eccc(uVar5,0,lVar9,8,8,0);
                  FUN_0179eccc(lVar8,0,lVar9,0x10,8,0);
                  uVar5 = System_IO_Directory__Delete(param_1);
                  lVar6 = System_IO_Directory__Delete(param_1);
                  if (lVar6 != 0) {
                    FUN_0179eccc(uVar5,0,lVar9,0x1c,*(undefined4 *)(lVar6 + 0x18),0);
                    lVar6 = FUN_015d1ff0(param_1);
                    if (lVar6 != 0) {
                      lVar10 = FUN_00da4fb8(*(undefined8 *)puVar1,
                                            *(int *)(lVar9 + 0x18) + *(int *)(lVar6 + 0x18));
                      FUN_017953b8(lVar6,lVar10,0,0);
                      FUN_017953b8(lVar9,lVar10,*(undefined4 *)(lVar6 + 0x18),0);
                      lVar6 = FUN_0162cbac(lVar3,lVar10,0);
                      if (lVar6 != 0) {
                        uVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,
                                             *(int *)(lVar6 + 0x18) + *(int *)(lVar9 + 0x18));
                        FUN_017953b8(lVar6,uVar5,0,0);
                        FUN_017953b8(lVar9,uVar5,*(undefined4 *)(lVar6 + 0x18),0);
                        if (lVar7 != 0) {
                          FUN_0179519c(lVar7,0,*(undefined4 *)(lVar7 + 0x18),0);
                          FUN_0162cee8(lVar3,0);
                          if (lVar8 != 0) {
                            FUN_0179519c(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
                            FUN_0179519c(lVar9,0,*(undefined4 *)(lVar9 + 0x18),0);
                            if (lVar10 != 0) {
                              FUN_0179519c(lVar10,0,*(undefined4 *)(lVar10 + 0x18),0);
                              FUN_0179519c(lVar6,0,*(undefined4 *)(lVar6 + 0x18),0);
                              return uVar5;
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
  FUN_00da518c();
}


