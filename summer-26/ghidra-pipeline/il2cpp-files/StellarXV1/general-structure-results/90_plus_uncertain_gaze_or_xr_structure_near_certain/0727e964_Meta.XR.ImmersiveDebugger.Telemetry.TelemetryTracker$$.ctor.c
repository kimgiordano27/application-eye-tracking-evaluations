/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$.ctor
ENTRY_POINT: 0727e964
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker___ctor(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x20;
  undefined8 uVar8;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09287040);
    FUN_04077588(PTR_DAT_092c17d0);
    FUN_04077588(PTR_DAT_092c1400);
    FUN_04077588(PTR_DAT_092c1408);
    FUN_04077588(PTR_DAT_0928b5e8);
    FUN_04077588(PTR_DAT_092a5fe8);
    FUN_04077588(PTR_DAT_09298c90);
    *(undefined1 *)(unaff_x21 + 0x76a) = 1;
  }
  puVar3 = PTR_DAT_092c1400;
  puVar2 = PTR_DAT_0928b5e8;
  puVar1 = PTR_DAT_09287040;
  lVar4 = *unaff_x20;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x20;
  }
  uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 8);
  plVar5 = (long *)FUN_04077674(*(undefined8 *)puVar1,3);
  uVar6 = FUN_07dfb290(*(undefined8 *)puVar2,0);
  lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_07df1964(lVar4,uVar6,param_2,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar4 != 0) &&
     (lVar7 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_0727eb90:
    uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar6,0);
  }
  puVar1 = PTR_DAT_09298c90;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar4;
    thunk_FUN_040ec700(plVar5 + 4,lVar4);
    uVar6 = FUN_07dfb290(*(undefined8 *)puVar1,0);
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
    FUN_07df1964(lVar4,uVar6);
    if ((lVar4 != 0) &&
       (lVar7 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_0727eb90;
    puVar1 = PTR_DAT_092a5fe8;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar4;
      thunk_FUN_040ec700(plVar5 + 5,lVar4);
      uVar6 = FUN_07dfb290(*(undefined8 *)puVar1,0);
      lVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
      FUN_07df1964(lVar4,uVar6);
      if ((lVar4 != 0) &&
         (lVar7 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_0727eb90;
      puVar1 = PTR_DAT_092c1408;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar4;
        thunk_FUN_040ec700(plVar5 + 6,lVar4);
        uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
        FUN_07df868c(uVar6,uVar8,plVar5,0);
        return uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


