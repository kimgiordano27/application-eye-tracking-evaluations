/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$EnsureDepthRaycastComponentIsPresent
ENTRY_POINT: 057bf4a4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__EnsureDepthRaycastComponentIsPresent
               (undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x21;
  
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_057bf4f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02feb5b8();
LAB_057bf4f0:
  (*(code *)*puVar3)();
  plVar4 = (long *)FUN_06abc65c();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f99260 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f99260)) {
      plVar4 = (long *)FUN_06b0d958(plVar4,0);
      goto LAB_057bf544;
    }
  }
  plVar4 = (long *)0x0;
LAB_057bf544:
  puVar2 = PTR_DAT_06f9b060;
  lVar5 = *(long *)PTR_DAT_06f9b060;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar5 = *(long *)puVar2;
  }
  FUN_06af9aa8(plVar4,*(undefined4 *)(*(long *)(lVar5 + 0xb8) + 8),0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06f9b068 + 0x130);
    if (((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
        (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06f9b068))
       && (plVar4 = (long *)FUN_06adcaf0(plVar4,0), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x057bf5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))(plVar4,0,*(undefined8 *)(*plVar4 + 0x180));
      return;
    }
  }
  return;
}


