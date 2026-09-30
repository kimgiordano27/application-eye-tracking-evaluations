/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<long,-uint>$$<Handle>b__1
ENTRY_POINT: 02459a48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02459c0c) */

void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<long,_uint>__<Handle>b__1
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong in_x9;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  size_t unaff_x22;
  void *unaff_x23;
  undefined8 *unaff_x24;
  void *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
code_r0x02459a48:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_02459a3c;
LAB_02459a54:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02459bc8;
      lVar4 = *unaff_x20;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_02459ba0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar6 = *unaff_x20;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02459ae4;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_02459ae4:
    *(void **)(unaff_x29 + -0x18) = unaff_x23;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
                    /* try { // try from 02459b00 to 02559b03 has its CatchHandler @ 02459b8c */
                    /* try { // try from 02459b04 to 02559b07 has its CatchHandler @ 02459b88 */
                    /* try { // try from 02459b08 to 02559b0b has its CatchHandler @ 02459b80 */
                    /* try { // try from 02459b0c to 02559b0f has its CatchHandler @ 02459b78 */
    memcpy(unaff_x25,unaff_x23,unaff_x22);
                    /* try { // try from 02459b10 to 02559b13 has its CatchHandler @ 02459b6c */
                    /* try { // try from 02459b14 to 02559b17 has its CatchHandler @ 02459b68 */
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar1 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x28)) {
      puVar1 = (undefined8 *)*unaff_x24;
    }
    puVar5 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x40);
    uVar3 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar1;
    (*(code *)puVar5[2])(uVar3);
    param_1 = *unaff_x20;
    param_3 = *unaff_x27;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (in_x9 == 0) goto LAB_02459a54;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_02459a3c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x02459a48;
    puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_02459bbc;
    }
  }
LAB_02459ba0:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02459bbc:
  (*(code *)*puVar1)();
LAB_02459bc8:
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


