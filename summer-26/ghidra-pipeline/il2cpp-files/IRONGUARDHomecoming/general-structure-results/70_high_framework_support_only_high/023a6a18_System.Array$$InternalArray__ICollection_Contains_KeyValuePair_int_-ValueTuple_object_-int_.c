/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<KeyValuePair<int,-ValueTuple<object,-int>>>
ENTRY_POINT: 023a6a18
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023a6c48) */
/* WARNING: Removing unreachable block (ram,0x023a7250) */

void System_Array__InternalArray__ICollection_Contains<KeyValuePair<int,_ValueTuple<object,_int>>>
               (void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  void *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  void *unaff_x25;
  void *unaff_x27;
  size_t unaff_x28;
  long unaff_x29;
  
  do {
    lVar3 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023a6a68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_023a6a68:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(*unaff_x20 + 0xf8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_023a6adc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_023a6adc:
    *(void **)(unaff_x29 + -0x28) = unaff_x19;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x25,unaff_x19,unaff_x28);
    memcpy(unaff_x27,unaff_x25,unaff_x28);
    puVar1 = *(undefined8 **)(*unaff_x20 + 0x70);
    uVar2 = *puVar1;
    *(int *)(unaff_x29 + -0x14) = unaff_w23;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
    *(void **)(unaff_x29 + -0x20) = unaff_x27;
    (*(code *)puVar1[2])(uVar2,puVar1,unaff_x29 + -0x80,unaff_x29 + -0x28);
    unaff_w23 = unaff_w23 + 1;
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_023a6c30;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
FUN_023a6c30:
    (*(code *)*puVar1)();
  }
  *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x78);
  *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
  if (*(long *)(*(long *)(unaff_x29 + -0xe0) + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x29 + -0x40),*(undefined8 *)(unaff_x29 + -0x38));
  }
  return;
}


