/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 02906f6c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06deb360);
    thunk_FUN_0159f088(PTR_DAT_06db34c8);
    thunk_FUN_0159f088(PTR_DAT_06e0b310);
    *(undefined1 *)(unaff_x20 + 0xcb2) = 1;
  }
  plVar2 = (long *)thunk_FUN_015d0480();
  puVar1 = PTR_DAT_06db34c8;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)thunk_FUN_015d0480();
    if (plVar2 == (long *)0x0) {
      if (unaff_x21 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02907094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*unaff_x21 + 0x168))();
        return uVar4;
      }
      return **(undefined8 **)(*(long *)PTR_DAT_06e0b310 + 0xb8);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_029070a4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_015c2a80(plVar2,*(long *)puVar1,0);
LAB_029070a4:
                    /* WARNING: Could not recover jumptable at 0x029070c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)*puVar3)(plVar2,0);
    return uVar4;
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_0290705c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80(plVar2,*unaff_x22,0xf);
LAB_0290705c:
                    /* WARNING: Could not recover jumptable at 0x02907074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2);
  return uVar4;
}


