/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_GetSkeleton3
ENTRY_POINT: 05d51708
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d517b0) */

void OVRPlugin_OVRP_1_92_0__ovrp_GetSkeleton3(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long *plStack0000000000000008;
  long *in_stack_00000018;
  
  puVar1 = PTR_DAT_06f99248;
  plStack0000000000000008 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_05d5187c;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_06f99248;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_05d5187c;
    uVar3 = System_Array_EmptyInternalEnumerator<FeatureStateProvider_FeatureStateSnapshot<Int32Enum,_object>>___cctor
                      (**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),&stack0x00000018,
                       *(undefined8 *)PTR_DAT_06fb9420);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        FUN_05359548(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)PTR_DAT_06fb9410);
        return;
      }
      goto LAB_05d5187c;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_05d5187c:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  uVar3 = System_Array_EmptyInternalEnumerator<Dictionary_Entry<Vector3Int,_object>>__System_Collections_IEnumerator_get_Current
                    (lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000008,
                     *(undefined8 *)PTR_DAT_06fb9418);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      thunk_FUN_03048534((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (plStack0000000000000008 == (long *)0x0) goto LAB_05d5187c;
    (**(code **)(*plStack0000000000000008 + 0x178))();
  }
  return;
}


