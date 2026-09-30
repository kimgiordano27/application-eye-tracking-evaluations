/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04654228
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x046543a8) */

void System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
               (code *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long unaff_x25;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0338f618(lVar2);
    }
    lVar5 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_046542a4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c();
LAB_046542a4:
    uVar4 = (*(code *)*puVar3)();
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    uVar4 = FUN_04654e70(uVar4);
    unaff_w22 = unaff_w22 + -1;
    *(undefined8 *)(*(long *)(unaff_x20 + 2) + (long)unaff_w21 * 8) = uVar4;
    unaff_w21 = unaff_w21 + 1;
    *unaff_x20 = *unaff_x20 + 1;
    if (unaff_w22 == 0) break;
    lVar2 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x25 + 0x870)) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04654220;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c();
LAB_04654220:
    param_1 = (code *)*puVar3;
  }
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04654344;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0338f71c();
LAB_04654344:
    (*(code *)*puVar3)();
  }
  return;
}


