/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox2D
ENTRY_POINT: 0322e824
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceBoundingBox2D(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  ulong in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  ulong in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined4 in_stack_00000298;
  undefined4 in_stack_0000029c;
  undefined4 in_stack_000002a0;
  undefined4 in_stack_000002a4;
  undefined4 in_stack_000002a8;
  undefined4 in_stack_000002ac;
  ulong in_stack_000002b0;
  undefined8 in_stack_000002b8;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12a);
  if (uVar4 != 0) {
                    /* try { // try from 0322e834 to 0332e84b has its CatchHandler @ 0322e8b8 */
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_0322e870;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
                    /* try { // try from 0322e84c to 0332e8a7 has its CatchHandler @ 0322e74c */
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_015c2a80();
LAB_0322e870:
  (*(code *)*puVar2)();
  FUN_0322ebb8();
  if (*(char *)(unaff_x19 + 0x88) == '\0') {
    return;
  }
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_016466fc();
                    /* try { // try from 0322e8a8 to 0332e8b7 has its CatchHandler @ 0322e8b8 */
    lVar3 = *unaff_x21;
  }
  plVar6 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (plVar6 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0322e834 with catch @ 0322e8b8
                       catch() { ... } // from try @ 0322e8a8 with catch @ 0322e8b8 */
    lVar3 = *plVar6;
                    /* try { // try from 0322e8bc to 0332e8bf has its CatchHandler @ 0322e8c8 */
                    /* try { // try from 0322e8c0 to 0332e8cb has its CatchHandler @ 0322e74c */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322e8bc with catch @ 0322e8c8
                        */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_0322e90c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x23,3);
LAB_0322e90c:
    (*(code *)*puVar2)(&stack0x00000280,plVar6,0,puVar2[1]);
    lVar3 = *unaff_x21;
    *(ulong *)(unaff_x22 + 0x24) = CONCAT44(in_stack_000002a8,in_stack_000002a4);
    *(ulong *)(unaff_x22 + 0x1c) = CONCAT44(in_stack_000002a0,in_stack_0000029c);
    puVar1 = PTR_DAT_06e20db8;
    plVar6 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_0322e9a0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_015c2a80(plVar6,*unaff_x23,3);
LAB_0322e9a0:
      (*(code *)*puVar2)(&stack0x00000280,plVar6,1,puVar2[1]);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      FUN_0322edc4(in_stack_000002ac,in_stack_000002b0 & 0xffffffff);
      thunk_FUN_0488420c(*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 8),0);
      FUN_0322ee6c();
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x18), lVar3 != 0)) {
        FUN_04f1b7fc(&stack0x00000280,lVar3,0);
        lVar3 = *(long *)(unaff_x19 + 0x90);
        FUN_0322ef18(&stack0x000001c0,&stack0x00000240);
        in_stack_00000180 = in_stack_00000280;
        in_stack_00000188 = in_stack_00000288;
        in_stack_00000190 = in_stack_00000290;
        in_stack_00000198 = CONCAT44(in_stack_0000029c,in_stack_00000298);
        in_stack_000001a0 = CONCAT44(in_stack_000002a4,in_stack_000002a0);
        in_stack_000001a8 = CONCAT44(in_stack_000002ac,in_stack_000002a8);
        in_stack_000001b0 = in_stack_000002b0;
        in_stack_000001b8 = in_stack_000002b8;
        FUN_051d2378(&stack0x00000200,&stack0x000001c0,&stack0x00000180,0);
        if (lVar3 != 0) {
          if (*(int *)(lVar3 + 0x18) != 0) {
            *(undefined8 *)(lVar3 + 0x48) = in_stack_00000228;
            *(undefined8 *)(lVar3 + 0x40) = in_stack_00000220;
            *(undefined8 *)(lVar3 + 0x58) = in_stack_00000238;
            *(undefined8 *)(lVar3 + 0x50) = in_stack_00000230;
            *(undefined8 *)(lVar3 + 0x28) = in_stack_00000208;
            *(undefined8 *)(lVar3 + 0x20) = in_stack_00000200;
            *(undefined8 *)(lVar3 + 0x38) = in_stack_00000218;
            *(undefined8 *)(lVar3 + 0x30) = in_stack_00000210;
            lVar3 = *(long *)(unaff_x19 + 0x90);
            in_stack_00000100 = in_stack_00000280;
            in_stack_00000108 = in_stack_00000288;
            in_stack_00000110 = in_stack_00000290;
            in_stack_00000118 = CONCAT44(in_stack_0000029c,in_stack_00000298);
            in_stack_00000120 = CONCAT44(in_stack_000002a4,in_stack_000002a0);
            in_stack_00000128 = CONCAT44(in_stack_000002ac,in_stack_000002a8);
            in_stack_00000130 = (int)in_stack_000002b0;
            in_stack_00000140 = in_stack_00000200;
            in_stack_00000148 = in_stack_00000208;
            in_stack_00000150 = in_stack_00000210;
            in_stack_00000158 = in_stack_00000218;
            in_stack_00000160 = in_stack_00000220;
            in_stack_00000168 = in_stack_00000228;
            in_stack_00000170 = in_stack_00000230;
            in_stack_00000178 = in_stack_00000238;
            FUN_0322ef18(&stack0x00000080,&stack0x00000100);
            in_stack_00000040 = in_stack_00000280;
            in_stack_00000048 = in_stack_00000288;
            in_stack_00000050 = in_stack_00000290;
            in_stack_00000058 = CONCAT44(in_stack_0000029c,in_stack_00000298);
            in_stack_00000060 = CONCAT44(in_stack_000002a4,in_stack_000002a0);
            in_stack_00000068 = CONCAT44(in_stack_000002ac,in_stack_000002a8);
            in_stack_00000070 = in_stack_000002b0;
            in_stack_00000078 = in_stack_000002b8;
            FUN_051d2378(&stack0x000000c0,&stack0x00000080,&stack0x00000040,0);
            if (lVar3 == 0) goto LAB_0322ebb0;
            if (1 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x88) = in_stack_000000e8;
              *(undefined8 *)(lVar3 + 0x80) = in_stack_000000e0;
              *(undefined8 *)(lVar3 + 0x98) = in_stack_000000f8;
              *(undefined8 *)(lVar3 + 0x90) = in_stack_000000f0;
              *(undefined8 *)(lVar3 + 0x68) = in_stack_000000c8;
              *(undefined8 *)(lVar3 + 0x60) = in_stack_000000c0;
              *(undefined8 *)(lVar3 + 0x78) = in_stack_000000d8;
              *(undefined8 *)(lVar3 + 0x70) = in_stack_000000d0;
              FUN_04885f14(*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 4),
                           *(undefined8 *)(unaff_x19 + 0x90),0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
      }
    }
  }
LAB_0322ebb0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


