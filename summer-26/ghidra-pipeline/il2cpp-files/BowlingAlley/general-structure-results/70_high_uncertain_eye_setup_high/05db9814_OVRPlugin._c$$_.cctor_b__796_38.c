/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__796_38
ENTRY_POINT: 05db9814
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_<>c__<_cctor>b__796_38(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x19;
  
  lVar1 = FUN_05db9964();
  uVar2 = FUN_057ab1f0();
  uVar3 = FUN_057ab1f0(lVar1,0);
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      plVar6 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,2);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if ((lVar1 != 0) &&
         (lVar7 = thunk_FUN_032a55a4(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_05db9954:
        uVar4 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar4,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar1;
        thunk_FUN_0333a630(plVar6 + 4,lVar1);
        if ((unaff_x19 != 0) && (lVar1 = thunk_FUN_032a55a4(), lVar1 == 0)) goto LAB_05db9954;
        if (1 < *(uint *)(plVar6 + 3)) {
          plVar6[5] = unaff_x19;
          thunk_FUN_0333a630();
          if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_06bb3188(*(undefined8 *)PTR_DAT_072b24a0,plVar6,0);
          return unaff_x19;
        }
      }
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
  }
  else {
    unaff_x19 = lVar1;
    if ((uVar3 & 1) != 0) {
      thunk_FUN_032e1da0(PTR_DAT_072816d0);
      uVar4 = thunk_FUN_032a56a0();
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_072b24a8);
      FUN_06bea858(uVar4,uVar5,0);
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_072b24b0);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar4,uVar5);
    }
  }
  return unaff_x19;
}


