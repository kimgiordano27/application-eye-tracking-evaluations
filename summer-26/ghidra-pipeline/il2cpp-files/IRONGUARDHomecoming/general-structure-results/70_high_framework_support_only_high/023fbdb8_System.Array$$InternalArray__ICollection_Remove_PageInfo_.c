/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<PageInfo>
ENTRY_POINT: 023fbdb8
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

float System_Array__InternalArray__ICollection_Remove<PageInfo>
                (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong in_x9;
  undefined8 *puVar5;
  int *in_x10;
  int *piVar6;
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
  
code_r0x023fbdb8:
  if (!(bool)in_ZR) goto LAB_023fbda4;
LAB_023fbdbc:
  lVar1 = FUN_01ecb238();
  do {
    *(void **)(unaff_x29 + -0x20) = unaff_x23;
    (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x20) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x30);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x20) = puVar5;
    (*(code *)puVar3[2])(uVar2);
    unaff_s8 = unaff_s8 * *(float *)(unaff_x29 + -0x14);
    lVar1 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023fbd64;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_023fbd64:
    uVar4 = (*(code *)*puVar5)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_023fbec4;
      lVar1 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 == 0) goto LAB_023fbe9c;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x19;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_023fbdbc;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_023fbda4:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x023fbdb8;
    }
    lVar1 = param_1 + (long)*in_x10 * 0x10 + 0x138;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar6 = piVar6 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_023fbeb8;
    }
  }
LAB_023fbe9c:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_023fbeb8:
  (*(code *)*puVar5)();
LAB_023fbec4:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_s8;
}


