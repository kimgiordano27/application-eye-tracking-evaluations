/*
FUNCTION_NAME: OVRPlugin$$GetAdaptiveGPUPerformanceScale
ENTRY_POINT: 01a1f8f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAdaptiveGPUPerformanceScale(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x25;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined8 uStack00000000000000a4;
  undefined8 in_stack_000000b0;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  plVar4 = (long *)(*(code *)*param_1)();
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_11555) {
                    /* try { // try from 01a1f954 to 01b1f95b has its CatchHandler @ 01a1fa10 */
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_01a1f964;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar4,*(long *)StringLiteral_11555,1);
LAB_01a1f964:
                    /* try { // try from 01a1f964 to 01b1f977 has its CatchHandler @ 01a1fa6c */
    puVar2 = Method_System_String_Compare__;
    puVar1 = System_Collections_Generic_IList<Expression>_TypeInfo;
                    /* try { // try from 01a1f978 to 01b1f9ab has its CatchHandler @ 01a1f864 */
    (*(code *)*puVar5)(&stack0x00000070,plVar4,puVar5[1]);
    in_stack_000000d8 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_000000e0 = CONCAT44(uStack0000000000000084,uStack0000000000000080);
    in_stack_000000d0 = in_stack_00000070;
                    /* try { // try from 01a1f9ac to 01b1f9b3 has its CatchHandler @ 01a1fa0c */
    while (uVar7 = FUN_012b69b4(&stack0x000000d0,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
                    /* try { // try from 01a1f9bc to 01b1f9cf has its CatchHandler @ 01a1fa14 */
      uVar3 = FUN_00bf9134(&stack0x000000d0,*(undefined8 *)puVar1);
      lVar6 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
            goto LAB_01a1fa14;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_01a1fa14:
      uVar7 = (*(code *)*puVar5)();
      if ((uVar7 & 1) != 0) {
        lVar6 = *unaff_x20;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x23) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
              goto LAB_01a1fa7c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_00d59724();
LAB_01a1fa7c:
        uVar7 = (*(code *)*puVar5)();
        if ((uVar7 & 1) != 0) {
          lVar6 = *unaff_x20;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x23) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_01a1fae0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724();
LAB_01a1fae0:
          plVar4 = (long *)(*(code *)*puVar5)();
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *unaff_x25) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_01a1fb44;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar4,*unaff_x25,1);
LAB_01a1fb44:
          uVar7 = (*(code *)*puVar5)(plVar4,uVar3,(long)&stack0x00000088 + 4,puVar5[1]);
          if ((uVar7 & 1) != 0) {
            uStack0000000000000078 = in_stack_00000098;
            in_stack_00000070 = in_stack_00000090;
            uStack0000000000000084 = (undefined4)uStack00000000000000a4;
            uStack0000000000000088 = SUB84(uStack00000000000000a4,4);
            uStack0000000000000080 = uStack00000000000000a0;
            in_stack_00000058 = uStack00000000000000b8;
            in_stack_00000050 = in_stack_000000b0;
            uStack0000000000000064 = uStack00000000000000c4;
            uStack0000000000000060 = uStack00000000000000c0;
            if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            uStack0000000000000014 = uStack000000000000008c;
            in_stack_00000028 = uStack00000000000000a0;
            in_stack_00000020 = in_stack_00000098;
            in_stack_00000018 = in_stack_00000090;
            in_stack_00000048 = uStack00000000000000c4;
            uStack0000000000000044 = uStack00000000000000c0;
            in_stack_00000030._12_4_ = uStack00000000000000b8;
            uStack0000000000000040 = uStack00000000000000bc;
            in_stack_00000030._4_8_ = in_stack_000000b0;
            uStack0000000000000010 = uVar3;
            FUN_00bfe630(*(long *)(unaff_x19 + 0x28),&stack0x00000010,
                         *(undefined8 *)StringLiteral_3629);
          }
        }
      }
    }
    FUN_012b69b0(&stack0x000000d0,
                 *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__);
    *(undefined4 *)(unaff_x19 + 0x20) = 1;
    FUN_01a1fcc4();
    lVar6 = *(long *)(unaff_x19 + 0x18);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


