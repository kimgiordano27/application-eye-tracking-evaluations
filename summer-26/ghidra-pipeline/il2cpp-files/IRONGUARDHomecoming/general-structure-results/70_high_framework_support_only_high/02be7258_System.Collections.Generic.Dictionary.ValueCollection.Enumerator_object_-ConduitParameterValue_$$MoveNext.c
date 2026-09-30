/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,-ConduitParameterValue>$$MoveNext
ENTRY_POINT: 02be7258
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02be7404) */

void System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_ConduitParameterValue>__MoveNext
               (long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x02be7258:
  param_1 = param_1 + 0x138;
  do {
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
    memcpy(unaff_x25,unaff_x24,unaff_x23);
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x21;
    (*(code *)puVar2[2])(uVar1);
    puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x22;
    (*(code *)puVar2[2])(uVar1);
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
    puVar2 = unaff_x21;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x70) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x21;
    }
    puVar4 = unaff_x22;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x78) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x22;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0x80);
    uVar1 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar4;
    (*(code *)puVar3[2])(uVar1);
    lVar5 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02be71e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02be71e4:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x26 == (long *)0x0) goto LAB_02be7390;
      lVar5 = *unaff_x26;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_02be7368;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    param_1 = *unaff_x26;
    uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          param_1 = param_1 + (long)*piVar7 * 0x10;
          goto code_r0x02be7258;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    param_1 = FUN_01ecb238();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02be7384;
    }
  }
LAB_02be7368:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02be7384:
  (*(code *)*puVar2)();
LAB_02be7390:
  if (*(long *)(*(long *)(unaff_x29 + -0x30) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


