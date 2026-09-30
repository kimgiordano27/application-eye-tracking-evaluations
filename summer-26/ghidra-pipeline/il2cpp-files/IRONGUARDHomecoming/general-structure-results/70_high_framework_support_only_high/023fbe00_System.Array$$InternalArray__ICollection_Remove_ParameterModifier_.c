/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<ParameterModifier>
ENTRY_POINT: 023fbe00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x023fbf0c) */

float System_Array__InternalArray__ICollection_Remove<ParameterModifier>
                (void *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  float unaff_s8;
  
  do {
    memcpy(param_1,param_2,param_3);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar6 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x24;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar6;
    (*(code *)puVar2[2])(uVar1);
    unaff_s8 = unaff_s8 * *(float *)(unaff_x29 + -0x14);
    lVar3 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_023fbd64;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_023fbd64:
    uVar5 = (*(code *)*puVar6)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_023fbec4;
      lVar3 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 == 0) goto LAB_023fbe9c;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_023fbdd8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_023fbdd8:
    *(void **)(unaff_x29 + -0x20) = unaff_x23;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    param_1 = unaff_x25;
    param_2 = unaff_x23;
    param_3 = unaff_x22;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_023fbeb8;
    }
  }
LAB_023fbe9c:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_023fbeb8:
  (*(code *)*puVar6)();
LAB_023fbec4:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_s8;
}


