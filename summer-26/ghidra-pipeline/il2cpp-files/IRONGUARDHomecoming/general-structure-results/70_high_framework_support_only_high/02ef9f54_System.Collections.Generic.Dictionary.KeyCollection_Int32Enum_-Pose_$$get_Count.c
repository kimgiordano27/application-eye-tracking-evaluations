/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<Int32Enum,-Pose>$$get_Count
ENTRY_POINT: 02ef9f54
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

uint System_Collections_Generic_Dictionary_KeyCollection<Int32Enum,_Pose>__get_Count(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
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
  
code_r0x02ef9f54:
  lVar3 = param_1 + in_x9 * 0x10 + 0x138;
  while( true ) {
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    puVar4 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar3 + 0x98) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x24;
    }
    puVar2 = *(undefined8 **)(lVar3 + 0x188);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar4;
    (*(code *)puVar2[2])(uVar1);
    if (*(char *)(unaff_x29 + -0xc) != '\0') break;
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02ef9ee0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02ef9ee0:
    unaff_w26 = (*(code *)*puVar4)();
    if ((unaff_w26 & 1) == 0) {
      unaff_w26 = 0;
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    param_1 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          in_x9 = (long)*piVar6;
          goto code_r0x02ef9f54;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
  }
  if (unaff_x19 != (long *)0x0) {
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02efa048;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02efa048:
    (*(code *)*puVar4)();
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w26 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


