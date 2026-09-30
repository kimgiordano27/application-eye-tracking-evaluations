/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<int,-byte>$$<Handle>b__1
ENTRY_POINT: 02457a94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02457bfc) */

void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<int,_byte>__<Handle>b__1
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  long lVar5;
  uint unaff_w27;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(unaff_x19 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = (long)(int)unaff_w27;
    memcpy((void *)((long)unaff_x19 + (ulong)*(uint *)(*unaff_x19 + 0x104) * lVar5 + 0x20),unaff_x24
           ,unaff_x22);
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x40);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 02457b10 to 02557b37 has its CatchHandler @ 02457e68 */
      lVar2 = FUN_01ecaf44();
    }
    if (*(uint *)(unaff_x19 + 3) <= unaff_w27) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    unaff_w27 = unaff_w27 + 1;
    FUN_01f087b0(lVar2,(long)unaff_x19 + (ulong)*(uint *)(*unaff_x19 + 0x104) * lVar5 + 0x20);
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_02457a1c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02457a1c:
    uVar3 = (*(code *)*puVar1)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02457bac;
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 == 0) goto LAB_02457b84;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x30);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar5 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar2) {
          param_1 = lVar5 + (long)*piVar4 * 0x10 + 0x138;
          goto LAB_02457a90;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    param_1 = FUN_01ecb238();
LAB_02457a90:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_02457ba0;
    }
  }
LAB_02457b84:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02457ba0:
  (*(code *)*puVar1)();
LAB_02457bac:
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


