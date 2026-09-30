/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeSerialize
ENTRY_POINT: 07769ca8
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x07769d4c) */

void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeSerialize(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  while (uVar1 = FUN_07769e4c(), (uVar1 & 1) != 0) {
    lVar5 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x22 + 0x870)) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07769c40;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_07769c40:
    uVar1 = (*(code *)*puVar2)();
    if ((uVar1 & 1) == 0) goto LAB_07769cc8;
    lVar5 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x23 + 0x5c8)) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07769c9c;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_07769c9c:
    (*(code *)*puVar2)();
  }
  if ((unaff_x21 & 1) != 0) {
                    /* try { // try from 07769d58 to 07869d5f has its CatchHandler @ 07769e10 */
    FUN_0335b6c8(&DAT_083cbdb0,1);
    uVar3 = FUN_03398a84();
    FUN_07769970(uVar3,in_stack_00000008);
    uVar4 = FUN_0335b6c8(&DAT_0840d510,1);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar3,uVar4);
  }
LAB_07769cc8:
  if (unaff_x19 != (long *)0x0) {
    lVar5 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07769d20;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0338f71c();
LAB_07769d20:
    (*(code *)*puVar2)();
  }
  return;
}


