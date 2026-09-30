/*
FUNCTION_NAME: System.Collections.Generic.KeyValuePair<BinaryOperatorHandler.OperatorQuery,-BinaryOperatorHandler.OperatorQuery>$$.ctor
ENTRY_POINT: 02f1f304
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f1f3f4) */

void System_Collections_Generic_KeyValuePair<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>___ctor
               (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  byte in_w8;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  undefined8 unaff_x24;
  long *unaff_x25;
  
  while( true ) {
    if ((in_w8 & 1) == 0) {
      FUN_01ecaf44();
    }
    uVar1 = FUN_02f1fe48(unaff_x24);
    unaff_w22 = unaff_w22 + -1;
    *(undefined8 *)(*(long *)(unaff_x20 + 2) + (long)unaff_w21 * 8) = uVar1;
    unaff_w21 = unaff_w21 + 1;
    *unaff_x20 = *unaff_x20 + 1;
    if (unaff_w22 == 0) break;
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f1f268;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02f1f268:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) break;
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar3 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f1f2ec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02f1f2ec:
    unaff_x24 = (*(code *)*puVar2)();
    in_w8 = *(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135);
  }
  if (unaff_x23 != (long *)0x0) {
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02f1f390;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02f1f390:
    (*(code *)*puVar2)();
  }
  return;
}


