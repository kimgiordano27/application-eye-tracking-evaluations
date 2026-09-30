/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector4s>
ENTRY_POINT: 02fb3db8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector4s>(ulong param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long in_x9;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte in_w10;
  ulong uVar8;
  undefined4 unaff_w19;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  char *unaff_x27;
  char *pcVar10;
  long unaff_x29;
  char *in_stack_00000008;
  long in_stack_00000010;
  char *in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  
code_r0x02fb3db8:
  lVar9 = unaff_x24;
  if ((in_w10 & 1) != 0) {
    lVar9 = in_x9;
  }
  if (unaff_w23 == *(byte *)(lVar9 + param_1)) {
    puVar6 = (undefined4 *)*unaff_x20;
    unaff_w23 = 0;
    *puVar6 = unaff_w19;
    bVar3 = *(byte *)(unaff_x29 + -0x28);
    uVar8 = *(ulong *)(unaff_x29 + -0x20);
    *unaff_x20 = (long)(puVar6 + 1);
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = uVar8;
    }
    if (param_1 < uVar2 - 1) {
      unaff_w22 = unaff_w22 + 1;
    }
  }
  while( true ) {
    uVar4 = (**(code **)(*unaff_x25 + 0x58))();
    puVar6 = (undefined4 *)*unaff_x20;
    unaff_x26 = unaff_x26 + -1;
    unaff_w23 = unaff_w23 + 1;
    *puVar6 = uVar4;
    *unaff_x20 = (long)(puVar6 + 1);
    if (unaff_x26 == 0) break;
    in_x9 = *(long *)(unaff_x29 + -0x18);
    param_1 = (ulong)unaff_w22;
    lVar9 = unaff_x24;
    if ((*(byte *)(unaff_x29 + -0x28) & 1) != 0) {
      lVar9 = in_x9;
    }
    if (*(char *)(lVar9 + param_1) != '\0') goto code_r0x02fb3db4;
  }
  puVar1 = (undefined4 *)(in_stack_00000010 + (unaff_x21 - in_stack_00000030) * 4);
  if ((puVar1 != puVar6 + 1) && (puVar1 < puVar6)) {
    puVar1 = (undefined4 *)(in_stack_00000010 + in_stack_00000030 * -4 + unaff_x21 * 4);
    do {
      puVar7 = puVar1 + 1;
      uVar4 = *puVar1;
      *puVar1 = *puVar6;
      puVar5 = puVar6 + -1;
      *puVar6 = uVar4;
      puVar6 = puVar5;
      puVar1 = puVar7;
    } while (puVar7 < puVar5);
  }
  if (unaff_x27 < in_stack_00000008) {
    lVar9 = (long)in_stack_00000008 - (long)unaff_x27;
    pcVar10 = unaff_x27;
    do {
      if (*pcVar10 == '.') {
        uVar4 = (**(code **)(*in_stack_00000028 + 0x18))(in_stack_00000028);
        puVar6 = (undefined4 *)*unaff_x20;
        *puVar6 = uVar4;
        *unaff_x20 = (long)(puVar6 + 1);
        unaff_x27 = pcVar10 + 1;
        break;
      }
      uVar4 = (**(code **)(*unaff_x25 + 0x58))();
      puVar6 = (undefined4 *)*unaff_x20;
      lVar9 = lVar9 + -1;
      *puVar6 = uVar4;
      *unaff_x20 = (long)(puVar6 + 1);
      unaff_x27 = in_stack_00000008;
      pcVar10 = pcVar10 + 1;
    } while (lVar9 != 0);
  }
  (**(code **)(*unaff_x25 + 0x60))();
  lVar9 = *unaff_x20 + ((long)in_stack_00000008 - (long)unaff_x27) * 4;
  bVar3 = *(byte *)(unaff_x29 + -0x28);
  *unaff_x20 = lVar9;
  if (in_stack_00000018 != in_stack_00000008) {
    lVar9 = in_stack_00000010 + ((long)in_stack_00000018 - in_stack_00000030) * 4;
  }
  *in_stack_00000020 = lVar9;
  if ((bVar3 & 1) != 0) {
    operator_delete(*(void **)(unaff_x29 + -0x18));
  }
  return;
code_r0x02fb3db4:
  in_w10 = *(byte *)(unaff_x29 + -0x28);
  goto code_r0x02fb3db8;
}


