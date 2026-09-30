/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetExternalCameraName
ENTRY_POINT: 01f985c4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraName(undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar2 = PTR_DAT_027b3ea8;
                    /* catch() { ... } // from try @ 01f985c0 with catch @ 01f985d8 */
                    /* try { // try from 01f985e4 to 020985ef has its CatchHandler @ 01f98604 */
  if ((DAT_0293df18 & 1) == 0) {
                    /* try { // try from 01f985f0 to 020985fb has its CatchHandler @ 01f984f8 */
    thunk_FUN_01279b34(PTR_DAT_027b3ea8);
                    /* try { // try from 01f985fc to 02098603 has its CatchHandler @ 01f98604 */
    thunk_FUN_01279b34(PTR_DAT_027b2a58);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f985e4 with catch @ 01f98604
                       catch(type#2 @ 00000000) { ... } // from try @ 01f985fc with catch @ 01f98604
                        */
    thunk_FUN_01279b34(PTR_DAT_027b5af0);
    thunk_FUN_01279b34(PTR_DAT_027bedb0);
    DAT_0293df18 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar3 = FUN_01f987bc(param_2);
  lVar4 = FUN_01f97d88(param_1,1);
  if ((lVar4 != 0) && (lVar8 = *(long *)(lVar4 + 0x10), lVar8 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x18);
    iVar1 = *(int *)(lVar8 + 0x18);
    plVar5 = (long *)thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027b2a58);
    FUN_01fe7f80(plVar5,0);
    puVar2 = PTR_DAT_027b5af0;
    uVar9 = iVar1 - 1;
    uVar10 = uVar3;
    if (-1 < (int)uVar9) {
      bVar7 = true;
      do {
        if (uVar9 == 0) {
          if (*(uint *)(lVar8 + 0x18) == 0) goto LAB_01f987b4;
          if (*(long *)(lVar8 + 0x20) == 0) break;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_01f987b4;
        uVar11 = *(ulong *)(lVar8 + (ulong)uVar9 * 8 + 0x20);
        if ((uVar11 & (uVar10 ^ 0xffffffffffffffff)) == 0) {
          if (!bVar7) {
            if (plVar5 == (long *)0x0) goto LAB_01f987b8;
            FUN_01fea2f8(plVar5,0,*(undefined8 *)puVar2,0);
          }
          if (lVar4 == 0) goto LAB_01f987b8;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_01f987b4;
          if (plVar5 == (long *)0x0) goto LAB_01f987b8;
          uVar10 = uVar10 - uVar11;
          FUN_01fea2f8(plVar5,0,*(undefined8 *)(lVar4 + (ulong)uVar9 * 8 + 0x20),0);
          bVar7 = false;
        }
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    if (uVar10 == 0) {
      if (uVar3 == 0) {
        if (*(long *)(lVar8 + 0x18) == 0) {
LAB_01f98778:
          return *(undefined8 *)PTR_DAT_027bedb0;
        }
        if ((int)*(long *)(lVar8 + 0x18) != 0) {
          if (*(long *)(lVar8 + 0x20) != 0) goto LAB_01f98778;
          if (lVar4 == 0) goto LAB_01f987b8;
          if (*(int *)(lVar4 + 0x18) != 0) {
            return *(undefined8 *)(lVar4 + 0x20);
          }
        }
LAB_01f987b4:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        goto LAB_01f98744;
      }
    }
    else if (param_2 != (long *)0x0) {
      lVar4 = *param_2;
      plVar5 = param_2;
LAB_01f98744:
                    /* WARNING: Could not recover jumptable at 0x01f98760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(lVar4 + 0x168))(plVar5,*(undefined8 *)(lVar4 + 0x170));
      return uVar6;
    }
  }
LAB_01f987b8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


