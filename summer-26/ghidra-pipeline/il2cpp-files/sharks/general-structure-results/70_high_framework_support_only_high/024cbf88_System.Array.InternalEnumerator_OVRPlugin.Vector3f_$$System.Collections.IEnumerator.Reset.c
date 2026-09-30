/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 024cbf88
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x024cc088) */

uint System_Array_InternalEnumerator<OVRPlugin_Vector3f>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long *unaff_x23;
  
code_r0x024cbf88:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while( true ) {
    (*(code *)*puVar3)();
    uVar2 = FUN_024ca1e4();
    if ((uVar2 & 1) != 0) break;
    lVar4 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_024cbf14;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0185dba8();
LAB_024cbf14:
    unaff_w22 = (*(code *)*puVar3)();
    if ((unaff_w22 & 1) == 0) {
      unaff_w22 = 0;
      uVar1 = 0;
      if (unaff_x19 != (long *)0x0) goto LAB_024cbfd0;
      goto LAB_024cc030;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4(lVar4);
    }
    param_1 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar4) {
          in_x9 = (long)*piVar5;
          goto code_r0x024cbf88;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0185dba8();
  }
  uVar1 = unaff_w22;
  if (unaff_x19 == (long *)0x0) goto LAB_024cc030;
LAB_024cbfd0:
  unaff_w22 = uVar1;
  lVar4 = *unaff_x19;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_037f3288) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_024cc024;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_0185dba8();
LAB_024cc024:
  (*(code *)*puVar3)();
LAB_024cc030:
  return unaff_w22 & 1;
}


