/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 01a1f9d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetHandTrackingEnabled(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong in_x9;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined4 unaff_w21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 uVar8;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined4 uStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
                    /* try { // try from 01a1f9d0 to 01b1f9f7 has its CatchHandler @ 01a1f864 */
    if (in_x9 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
                    /* catch() { ... } // from try @ 01a1f9fc with catch @ 01a1fa04 */
                    /* catch() { ... } // from try @ 01a1f9f8 with catch @ 01a1fa08 */
                    /* catch() { ... } // from try @ 01a1f9ac with catch @ 01a1fa0c */
                    /* catch() { ... } // from try @ 01a1f954 with catch @ 01a1fa10 */
          puVar2 = (undefined8 *)(param_1 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_01a1fa14;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
                    /* try { // try from 01a1f9f8 to 01b1f9fb has its CatchHandler @ 01a1fa08 */
                    /* try { // try from 01a1f9fc to 01b1f9ff has its CatchHandler @ 01a1fa04 */
    puVar2 = (undefined8 *)FUN_00d59724();
                    /* try { // try from 01a1fa00 to 01b1fa2b has its CatchHandler @ 01a1f864 */
LAB_01a1fa14:
                    /* catch() { ... } // from try @ 01a1f9bc with catch @ 01a1fa14 */
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 01a1fa2c to 01b1fa2f has its CatchHandler @ 01a1fa50 */
      lVar6 = *unaff_x20;
                    /* try { // try from 01a1fa30 to 01b1fa57 has its CatchHandler @ 01a1f864 */
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
                    /* catch() { ... } // from try @ 01a1f964 with catch @ 01a1fa6c
                       try { // try from 01a1fa6c to 01b1fa83 has its CatchHandler @ 01a1f864 */
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_01a1fa7c;
          }
                    /* catch() { ... } // from try @ 01a1fa2c with catch @ 01a1fa50 */
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
                    /* try { // try from 01a1fa58 to 01b1fa6b has its CatchHandler @ 01a1facc */
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1fa7c:
                    /* try { // try from 01a1fa84 to 01b1fa87 has its CatchHandler @ 01a1faa8 */
                    /* try { // try from 01a1fa88 to 01b1faaf has its CatchHandler @ 01a1f864 */
      uVar3 = (*(code *)*puVar2)();
      if ((uVar3 & 1) != 0) {
        lVar6 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_01a1fae0;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1fae0:
        plVar4 = (long *)(*(code *)*puVar2)();
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar6 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_01a1fb44;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x25,1);
LAB_01a1fb44:
        uVar3 = (*(code *)*puVar2)(plVar4,unaff_w21,(undefined1 *)((long)&stack0x00000080 + 0xc),
                                   puVar2[1]);
        puVar1 = StringLiteral_3629;
        if ((uVar3 & 1) != 0) {
          lVar6 = *(long *)(unaff_x19 + 0x28);
          uStack0000000000000084 = *(undefined8 *)(unaff_x26 + 0x14);
          uVar5 = *(undefined8 *)(unaff_x26 + 0xc);
          uStack0000000000000064 = *(undefined8 *)(unaff_x26 + 0x34);
          uVar8 = *(undefined8 *)(unaff_x26 + 0x2c);
          uStack0000000000000078 = (undefined4)in_stack_00000098;
          in_stack_00000070 = in_stack_00000090;
          uStack000000000000007c = (undefined4)uVar5;
          uStack0000000000000080 = (undefined4)((ulong)uVar5 >> 0x20);
          uStack0000000000000058 = (undefined4)in_stack_000000b8;
          in_stack_00000050 = in_stack_000000b0;
          uStack000000000000005c = (undefined4)uVar8;
          uStack0000000000000060 = (undefined4)((ulong)uVar8 >> 0x20);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uStack0000000000000014 = uStack000000000000008c;
          *(undefined8 *)((long)unaff_x24 + 0x14) = uStack0000000000000084;
          *(undefined8 *)((long)unaff_x24 + 0xc) = uVar5;
          unaff_x24[1] = CONCAT44(uStack000000000000007c,uStack0000000000000078);
          *unaff_x24 = in_stack_00000090;
          *(undefined8 *)((long)unaff_x29 + 0x14) = uStack0000000000000064;
          *(undefined8 *)((long)unaff_x29 + 0xc) = uVar8;
          uVar5 = *(undefined8 *)puVar1;
          unaff_x29[1] = CONCAT44(uStack000000000000005c,uStack0000000000000058);
          *unaff_x29 = in_stack_000000b0;
          uStack0000000000000010 = unaff_w21;
          FUN_00bfe630(lVar6,&stack0x00000010,uVar5);
        }
      }
    }
    uVar3 = FUN_012b69b4(&stack0x000000d0,*unaff_x27);
    if ((uVar3 & 1) == 0) {
      FUN_012b69b0(&stack0x000000d0,
                   *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__);
      *(undefined4 *)(unaff_x19 + 0x20) = 1;
      FUN_01a1fcc4();
      lVar6 = *(long *)(unaff_x19 + 0x18);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    unaff_w21 = FUN_00bf9134(&stack0x000000d0,*unaff_x28);
    param_1 = *unaff_x20;
    param_3 = *unaff_x23;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
  } while( true );
}


