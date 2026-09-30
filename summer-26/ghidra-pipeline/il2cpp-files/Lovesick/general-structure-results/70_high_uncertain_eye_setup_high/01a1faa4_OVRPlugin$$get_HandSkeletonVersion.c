/*
FUNCTION_NAME: OVRPlugin$$get_HandSkeletonVersion
ENTRY_POINT: 01a1faa4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_HandSkeletonVersion(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
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
                    /* catch() { ... } // from try @ 01a1fa84 with catch @ 01a1faa8 */
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 01a1fab0 to 01b1fab7 has its CatchHandler @ 01a1facc */
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_01a1fae0;
      }
                    /* try { // try from 01a1fab8 to 01b1fac3 has its CatchHandler @ 01a1f864 */
      in_x9 = in_x9 - 1;
      piVar7 = piVar7 + 4;
    } while (in_x9 != 0);
    do {
                    /* try { // try from 01a1fac4 to 01b1facb has its CatchHandler @ 01a1facc */
                    /* catch() { ... } // from try @ 01a1fa58 with catch @ 01a1facc
                       catch() { ... } // from try @ 01a1fab0 with catch @ 01a1facc
                       catch() { ... } // from try @ 01a1fac4 with catch @ 01a1facc */
      puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1fae0:
      plVar3 = (long *)(*(code *)*puVar2)();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_01a1fb44;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_00d59724(plVar3,*unaff_x25,1);
LAB_01a1fb44:
      uVar6 = (*(code *)*puVar2)(plVar3,unaff_w21,(undefined1 *)((long)&stack0x00000080 + 0xc),
                                 puVar2[1]);
      puVar1 = StringLiteral_3629;
      if ((uVar6 & 1) != 0) {
        lVar5 = *(long *)(unaff_x19 + 0x28);
        uStack0000000000000084 = *(undefined8 *)(unaff_x26 + 0x14);
        uVar4 = *(undefined8 *)(unaff_x26 + 0xc);
        uStack0000000000000064 = *(undefined8 *)(unaff_x26 + 0x34);
        uVar8 = *(undefined8 *)(unaff_x26 + 0x2c);
        uStack0000000000000078 = (undefined4)in_stack_00000098;
        in_stack_00000070 = in_stack_00000090;
        uStack000000000000007c = (undefined4)uVar4;
        uStack0000000000000080 = (undefined4)((ulong)uVar4 >> 0x20);
        uStack0000000000000058 = (undefined4)in_stack_000000b8;
        in_stack_00000050 = in_stack_000000b0;
        uStack000000000000005c = (undefined4)uVar8;
        uStack0000000000000060 = (undefined4)((ulong)uVar8 >> 0x20);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uStack0000000000000014 = uStack000000000000008c;
        *(undefined8 *)((long)unaff_x24 + 0x14) = uStack0000000000000084;
        *(undefined8 *)((long)unaff_x24 + 0xc) = uVar4;
        unaff_x24[1] = CONCAT44(uStack000000000000007c,uStack0000000000000078);
        *unaff_x24 = in_stack_00000090;
        *(undefined8 *)((long)unaff_x29 + 0x14) = uStack0000000000000064;
        *(undefined8 *)((long)unaff_x29 + 0xc) = uVar8;
        uVar4 = *(undefined8 *)puVar1;
        unaff_x29[1] = CONCAT44(uStack000000000000005c,uStack0000000000000058);
        *unaff_x29 = in_stack_000000b0;
        uStack0000000000000010 = unaff_w21;
        FUN_00bfe630(lVar5,&stack0x00000010,uVar4);
      }
      do {
        do {
          uVar6 = FUN_012b69b4(&stack0x000000d0,*unaff_x27);
          if ((uVar6 & 1) == 0) {
            FUN_012b69b0(&stack0x000000d0,
                         *(undefined8 *)
                          Method_UnityEngine_GameObject_AddComponent<AudioReverbFilter>__);
            *(undefined4 *)(unaff_x19 + 0x20) = 1;
            FUN_01a1fcc4();
            lVar5 = *(long *)(unaff_x19 + 0x18);
            if (lVar5 != 0) {
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          unaff_w21 = FUN_00bf9134(&stack0x000000d0,*unaff_x28);
          lVar5 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *unaff_x23) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_01a1fa14;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1fa14:
          uVar6 = (*(code *)*puVar2)();
        } while ((uVar6 & 1) == 0);
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
              goto LAB_01a1fa7c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_00d59724();
LAB_01a1fa7c:
        uVar6 = (*(code *)*puVar2)();
      } while ((uVar6 & 1) == 0);
      param_1 = *unaff_x20;
      param_3 = *unaff_x23;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
    } while (in_x9 == 0);
  } while( true );
}


