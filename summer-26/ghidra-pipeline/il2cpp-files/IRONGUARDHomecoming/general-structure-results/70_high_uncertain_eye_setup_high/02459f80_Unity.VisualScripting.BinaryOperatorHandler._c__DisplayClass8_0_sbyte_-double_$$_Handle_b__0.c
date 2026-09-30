/*
FUNCTION_NAME: Unity.VisualScripting.BinaryOperatorHandler.<>c__DisplayClass8_0<sbyte,-double>$$<Handle>b__0
ENTRY_POINT: 02459f80
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0245a120) */

void Unity_VisualScripting_BinaryOperatorHandler_<>c__DisplayClass8_0<sbyte,_double>__<Handle>b__0
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
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
  
code_r0x02459f80:
  puVar5 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar5)(), (uVar1 & 1) != 0) {
                    /* try { // try from 02459f9c to 02559fa7 has its CatchHandler @ 0245a314 */
    lVar3 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar6 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
                    /* try { // try from 02459fc0 to 02559fdb has its CatchHandler @ 0245a2d8 */
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar6 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_02459ffc;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
                    /* try { // try from 02459fdc to 02559fe7 has its CatchHandler @ 0245a2c8 */
      } while (uVar1 != 0);
    }
    lVar3 = FUN_01ecb238();
LAB_02459ffc:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
                    /* try { // try from 0245a010 to 0255a013 has its CatchHandler @ 0245a2b0 */
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    memcpy(unaff_x25,unaff_x23,unaff_x22);
                    /* try { // try from 0245a02c to 0255a03f has its CatchHandler @ 0245a2b8 */
    memcpy(unaff_x24,unaff_x25,unaff_x22);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x21 + 0x38) + 0x38) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    puVar4 = *(undefined8 **)(*(long *)(unaff_x21 + 0x38) + 0x40);
    uVar2 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x10) = puVar5;
    (*(code *)puVar4[2])(uVar2);
    param_1 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          in_x9 = (long)*piVar7;
          goto code_r0x02459f80;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
  }
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0245a0d0;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
                    /* try { // try from 0245a0b4 to 0255a0bb has its CatchHandler @ 0245a2d0 */
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0245a0d0:
    (*(code *)*puVar5)();
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


