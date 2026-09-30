/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 076d6a54
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d6cc0) */

void OVRPlugin__LoadRenderModel(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  long *in_stack_00000048;
  
  do {
                    /* try { // try from 076d6a58 to 077d6a5b has its CatchHandler @ 076d6a60 */
    if (in_x11 == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_076d6a84;
    }
                    /* try { // try from 076d6a5c to 077d6a8b has its CatchHandler @ 076d683c */
    in_x9 = in_x9 - 1;
                    /* catch() { ... } // from try @ 076d6a58 with catch @ 076d6a60 */
    in_x10 = in_x10 + 4;
                    /* catch() { ... } // from try @ 076d69e0 with catch @ 076d6a64 */
    if (in_x9 == 0) {
      do {
                    /* catch() { ... } // from try @ 076d69f8 with catch @ 076d6a68 */
        puVar2 = (undefined8 *)FUN_0406ae20(unaff_x20,param_3,0);
LAB_076d6a84:
                    /* try { // try from 076d6a8c to 077d6a8f has its CatchHandler @ 076d6be0 */
        uVar3 = (*(code *)*puVar2)(unaff_x20,puVar2[1]);
        plVar7 = in_stack_00000048;
                    /* try { // try from 076d6a90 to 077d6b83 has its CatchHandler @ 076d683c */
        if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 076d69a0 with catch @ 076d6c14 */
          if (in_stack_00000048 == (long *)0x0) {
            return;
          }
          lVar4 = *in_stack_00000048;
          uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar3 == 0) goto LAB_076d6c5c;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_076d6c44;
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar4 = *in_stack_00000048;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076d6ae8;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*unaff_x24,0);
LAB_076d6ae8:
        lVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x28);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar5 = *plVar7;
        uVar1 = *(undefined4 *)(lVar4 + 0x14);
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x25) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_076d6b60;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x25,9);
LAB_076d6b60:
        uVar3 = (*(code *)*puVar2)(plVar7,uVar1,&stack0x00000020,puVar2[1]);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x68);
                    /* try { // try from 076d6b84 to 077d6b8b has its CatchHandler @ 076d6c00 */
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar5 = *plVar7;
                    /* try { // try from 076d6b8c to 077d6b8f has its CatchHandler @ 076d6bf8 */
                    /* try { // try from 076d6b90 to 077d6be7 has its CatchHandler @ 076d683c */
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x26) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_076d6bd8;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*unaff_x26,1);
LAB_076d6bd8:
                    /* catch() { ... } // from try @ 076d6a8c with catch @ 076d6be0 */
                    /* try { // try from 076d6be8 to 077d6bef has its CatchHandler @ 076d6c50 */
          uVar3 = (*(code *)*puVar2)(plVar7,lVar4,&stack0x00000010,puVar2[1]);
          if ((uVar3 & 1) != 0) {
                    /* try { // try from 076d6bf0 to 077d6c2f has its CatchHandler @ 076d683c */
                    /* catch() { ... } // from try @ 076d6a2c with catch @ 076d6bf4 */
                    /* catch() { ... } // from try @ 076d6b8c with catch @ 076d6bf8 */
                    /* catch() { ... } // from try @ 076d6a48 with catch @ 076d6bfc */
                    /* catch() { ... } // from try @ 076d6b84 with catch @ 076d6c00 */
            FUN_076d6d34(uStack0000000000000020,uStack0000000000000024,in_stack_00000028,
                         uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                         uStack000000000000001c);
          }
        }
        if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 076d69bc with catch @ 076d6c10 */
          FUN_0403188c();
        }
        param_1 = *in_stack_00000048;
        param_3 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x20 = in_stack_00000048;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_076d6c44:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_076d6c78;
    }
  }
LAB_076d6c5c:
  puVar2 = (undefined8 *)FUN_0406ae20(in_stack_00000048,*(long *)PTR_DAT_08f65868,0);
LAB_076d6c78:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
  return;
}


