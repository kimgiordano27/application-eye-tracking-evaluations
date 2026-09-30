/*
FUNCTION_NAME: OVRManager$$StaticInitializeMixedRealityCapture
ENTRY_POINT: 05120120
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051203e4) */

void OVRManager__StaticInitializeMixedRealityCapture(void)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  
  while ((bool)in_ZR) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_0512017c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_0512017c:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) != 0) {
      lVar5 = thunk_FUN_02dc61f4(PTR_DAT_0675eef8);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_04f8e414(0);
      lVar5 = unaff_x22[0xc];
      uVar4 = thunk_FUN_02dc61f4(PTR_DAT_06780c48);
      uVar3 = FUN_050f0ec0(uVar4,uVar3,lVar5,0);
      thunk_FUN_02dc61f4(PTR_DAT_0677d960);
      uVar4 = thunk_FUN_02d9d534();
      FUN_050931fc(uVar4,uVar3,0);
      uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06780c50);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,uVar3);
    }
                    /* try { // try from 05120198 to 0522022f has its CatchHandler @ 05120198
                       catch() { ... } // from try @ 05120198 with catch @ 05120198
                       catch() { ... } // from try @ 05120238 with catch @ 05120198
                       catch() { ... } // from try @ 05120288 with catch @ 05120198
                       catch() { ... } // from try @ 051203d0 with catch @ 05120198
                       catch() { ... } // from try @ 051203f8 with catch @ 05120198
                       catch() { ... } // from try @ 05120428 with catch @ 05120198
                       catch() { ... } // from try @ 05120454 with catch @ 05120198
                       catch() { ... } // from try @ 051204cc with catch @ 05120198 */
    FUN_0512f954(unaff_x22,0);
    FUN_0511d858();
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_0512003c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_0512003c:
    (*(code *)*puVar2)();
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05120088;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05120088:
    uVar6 = (*(code *)*puVar2)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_05120250;
                    /* try { // try from 05120230 to 05220237 has its CatchHandler @ 0512042c */
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_05120238;
    }
    lVar5 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_051200e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_051200e4:
    unaff_x22 = (long *)(*(code *)*puVar2)();
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    bVar1 = *(byte *)(*unaff_x27 + 0x130);
    if (*(byte *)(*unaff_x22 + 0x130) < bVar1) break;
    in_ZR = *(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x27;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88(unaff_x22);
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_05120238:
                    /* try { // try from 05120238 to 0522027f has its CatchHandler @ 05120198 */
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0512026c;
    }
  }
LAB_05120250:
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_0512026c:
  (*(code *)*puVar2)();
                    /* try { // try from 05120280 to 05220287 has its CatchHandler @ 051203d0 */
                    /* try { // try from 05120288 to 052203bf has its CatchHandler @ 05120198 */
  return;
}


