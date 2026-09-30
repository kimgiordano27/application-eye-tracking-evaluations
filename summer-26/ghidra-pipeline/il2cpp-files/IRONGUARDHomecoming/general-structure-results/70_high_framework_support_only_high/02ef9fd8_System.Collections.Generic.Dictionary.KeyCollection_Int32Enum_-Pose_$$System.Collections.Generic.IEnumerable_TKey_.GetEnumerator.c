/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<Int32Enum,-Pose>$$System.Collections.Generic.IEnumerable<TKey>.GetEnumerator
ENTRY_POINT: 02ef9fd8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02efa0cc) */

uint System_Collections_Generic_Dictionary_KeyCollection<Int32Enum,_Pose>__System_Collections_Generic_IEnumerable<TKey>_GetEnumerator
               (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint in_w8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  uint unaff_w26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while (in_w8 == 0) {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02ef9ee0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02ef9ee0:
    unaff_w26 = (*(code *)*puVar2)();
    if ((unaff_w26 & 1) == 0) {
      unaff_w26 = 0;
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar5) {
          lVar5 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02ef9f5c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar5 = FUN_01ecb238();
LAB_02ef9f5c:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar5 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar5 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar2 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar5 + 0x98) + 0x28)) {
      puVar2 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(lVar5 + 0x188);
    uVar1 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
    (*(code *)puVar3[2])(uVar1);
    in_w8 = (uint)*(byte *)(unaff_x29 + -0xc);
  }
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02efa048;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02efa048:
    (*(code *)*puVar2)();
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w26 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


