/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<BoneWeight>
ENTRY_POINT: 02385110
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


/* WARNING: Removing unreachable block (ram,0x02385290) */

undefined8
System_Array__InternalArray__ICollection_Add<BoneWeight>
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
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  size_t unaff_x24;
  void *unaff_x25;
  undefined8 *unaff_x26;
  void *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
code_r0x02385110:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_02385100;
LAB_02385118:
  lVar1 = FUN_01ecb238();
  do {
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    memcpy(unaff_x27,unaff_x25,unaff_x24);
    memcpy(unaff_x26,unaff_x27,unaff_x24);
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar5 = unaff_x26;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x20) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x26;
    }
    puVar3 = *(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x30);
    uVar2 = *puVar3;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar3[2])(uVar2);
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x38))
                      (*(undefined8 *)(unaff_x29 + -0x10));
    unaff_x21 = (*(code *)**(undefined8 **)(*(long *)(unaff_x22 + 0x38) + 0x40))(unaff_x21,uVar2);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar1 = *unaff_x19;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar5 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023850c0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_023850c0:
    uVar4 = (*(code *)*puVar5)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02385248;
      lVar1 = *unaff_x19;
      uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar4 == 0) goto LAB_02385220;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    param_3 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_01ecaf44(param_3);
    }
    param_1 = *unaff_x19;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02385118;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02385100:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x02385110;
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
      goto LAB_0238523c;
    }
  }
LAB_02385220:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0238523c:
  (*(code *)*puVar5)();
LAB_02385248:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x21;
}


