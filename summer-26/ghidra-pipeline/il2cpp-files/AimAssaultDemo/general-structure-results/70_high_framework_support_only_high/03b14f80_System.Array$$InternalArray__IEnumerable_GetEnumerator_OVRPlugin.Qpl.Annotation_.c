/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03b14f80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03b15154) */

void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_Qpl_Annotation>
               (ulong param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 unaff_x24;
  void *unaff_x25;
  long lVar6;
  long unaff_x28;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03775678();
  }
  lVar6 = *(long *)(*(long *)(param_2 + 0xb8) + 8);
  if (lVar6 == 0) {
    memcpy(unaff_x23,unaff_x25,unaff_x22);
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03775678();
    }
    uVar2 = **(undefined8 **)(lVar6 + 0xb8);
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d95a58);
    FUN_044a3874(lVar6,uVar2,*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x30),0);
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    *(long *)(*(long *)(lVar1 + 0xb8) + 8) = lVar6;
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x28);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03775678();
    }
    thunk_FUN_037aeb94(*(long *)(lVar1 + 0xb8) + 8,lVar6);
    unaff_x25 = unaff_x23;
  }
  memcpy(unaff_x21,unaff_x25,unaff_x22);
  puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x38);
  uVar2 = *puVar3;
  if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x18) + 0x28)) {
    unaff_x21 = (undefined8 *)*unaff_x21;
  }
  *(long **)(unaff_x29 + -0x40) = unaff_x19;
  *(undefined8 *)(unaff_x29 + -0x38) = unaff_x24;
  *(undefined8 **)(unaff_x29 + -0x30) = unaff_x21;
  *(long *)(unaff_x29 + -0x28) = lVar6;
  *(undefined1 *)(unaff_x29 + -0xc) = 1;
  *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0xc;
  (*(code *)puVar3[2])(uVar2,puVar3,0,unaff_x29 + -0x40,unaff_x29 + -0xc);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_07231eb4();
  lVar6 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_03b15110;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_03b15110:
  (*(code *)*puVar3)();
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


