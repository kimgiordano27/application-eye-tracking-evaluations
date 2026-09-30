/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 02c49218
PROGRAM: sharks-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(ulong param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  undefined *puVar4;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380c0c8);
    *(undefined1 *)(unaff_x20 + 0xd1) = 1;
  }
  if (unaff_x19 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar6 = thunk_FUN_01861bbc();
    uVar3 = thunk_FUN_01851c08(PTR_DAT_037fb630);
    FUN_02b3cbec(uVar6,uVar3,0);
  }
  else {
    uVar8 = *(ulong *)(unaff_x19 + 0x18);
    if (uVar8 != 0) {
      plVar1 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380c0c8,uVar8 & 0xffffffff);
      if (0 < (int)(uint)uVar8) {
        uVar7 = 0;
        do {
          if (*(uint *)(unaff_x19 + 0x18) <= uVar7) {
LAB_02c492d0:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          lVar9 = *(long *)(unaff_x19 + (long)(int)uVar7 * 8 + 0x20);
          if (lVar9 == 0) {
            thunk_FUN_01851c08(PTR_DAT_037f87a8);
            uVar6 = thunk_FUN_01861bbc();
            puVar4 = PTR_DAT_0380c838;
            goto LAB_02c492f0;
          }
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_017fc5a8();
          }
          lVar2 = thunk_FUN_01861ac0(lVar9,*(undefined8 *)(*plVar1 + 0x40));
          if (lVar2 == 0) {
            uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar6,0);
          }
          if (*(uint *)(plVar1 + 3) <= uVar7) goto LAB_02c492d0;
          plVar1[(long)(int)uVar7 + 4] = lVar9;
          thunk_FUN_0188fd20(plVar1 + (long)(int)uVar7 + 4,lVar9);
          uVar7 = uVar7 + 1;
        } while ((uint)uVar8 != uVar7);
      }
      FUN_02c49394(plVar1);
      return;
    }
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar6 = thunk_FUN_01861bbc();
    puVar4 = PTR_DAT_0380c848;
LAB_02c492f0:
    uVar3 = thunk_FUN_01851c08(puVar4);
    uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb630);
    FUN_02b3cc64(uVar6,uVar3,uVar5,0);
  }
  uVar3 = thunk_FUN_01851c08(PTR_DAT_0380c840);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar6,uVar3);
}


