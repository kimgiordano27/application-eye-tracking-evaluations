/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03b0cf88
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *plVar6;
  long unaff_x21;
  long lVar7;
  
  FUN_037756d4();
  lVar1 = *unaff_x19;
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar1 = FUN_053bd690(**(undefined8 **)(unaff_x21 + 0x38));
    *unaff_x19 = lVar1;
    thunk_FUN_037aeb94();
    plVar6 = (long *)*unaff_x19;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar1 = *(long *)(unaff_x21 + 0x20);
    lVar7 = unaff_x19[1];
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678(lVar1);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar1) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_03b0d054;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar6,lVar1,1);
LAB_03b0d054:
    (*(code *)*puVar2)(plVar6,lVar7,puVar2[1]);
    lVar1 = *unaff_x19;
  }
  return lVar1;
}


