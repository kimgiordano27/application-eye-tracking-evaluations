/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,-ConduitParameterValue>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02be71e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02be7404) */

void System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object,_ConduitParameterValue>__System_Collections_IEnumerator_Reset
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x02be71e0:
  puVar4 = (undefined8 *)(param_1 + 0x138);
                    /* try { // try from 02be71e8 to 02ce720f has its CatchHandler @ 02be7224 */
  while (uVar1 = (*(code *)*puVar4)(), (uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
                    /* try { // try from 02be7210 to 02ce721b has its CatchHandler @ 02be6d2c */
    }
    lVar7 = *unaff_x26;
    uVar1 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar3 = lVar7 + (long)*piVar8 * 0x10 + 0x138;
          goto LAB_02be725c;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_02be725c:
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x25,unaff_x24,unaff_x23);
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
    (*(code *)puVar4[2])(uVar2);
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar4[2])(uVar2);
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar4 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x70) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x21;
    }
    puVar6 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x78) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x22;
    }
    puVar5 = *(undefined8 **)(lVar3 + 0x80);
    uVar2 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar6;
    (*(code *)puVar5[2])(uVar2);
    param_1 = *unaff_x26;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x27) {
          param_1 = param_1 + (long)*piVar8 * 0x10;
          goto code_r0x02be71e0;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
  }
  if (unaff_x26 != (long *)0x0) {
    lVar3 = *unaff_x26;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02be7384;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02be7384:
    (*(code *)*puVar4)();
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


