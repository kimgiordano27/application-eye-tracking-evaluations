/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$get_ToggleColliders
ENTRY_POINT: 08a32394
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a3278c) */

long Meta_XR_MRUtilityKit_EffectMesh__get_ToggleColliders(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  int iVar7;
  long lVar8;
  long lStack0000000000000008;
  undefined1 *puStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 uStack0000000000000050;
  undefined8 *puStack0000000000000058;
  long lStack0000000000000060;
  
  puStack0000000000000010 = (undefined1 *)&stack0x00000050;
  puStack0000000000000058 = in_stack_00000020;
  uStack0000000000000050 = in_stack_00000018;
  lStack0000000000000008 = 0;
  lStack0000000000000060 = param_1;
LAB_08a323b0:
  do {
    do {
      while( true ) {
        uVar1 = FUN_05fefd38(&stack0x00000050,*unaff_x25);
        lVar2 = lStack0000000000000060;
        if ((uVar1 & 1) == 0) {
          lVar2 = 0;
          goto LAB_08a32668;
        }
        if (lStack0000000000000060 != 0) break;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (DAT_0b32acf7 == '\0') {
          FUN_04947ee4();
          DAT_0b32acf7 = '\x01';
        }
        lVar2 = *unaff_x20;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar2 = *unaff_x20;
        }
        plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
        uVar3 = FUN_08bcc3c0(*unaff_x26);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar2 = *plVar6;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 3) * 0x10 + 0x138);
              goto LAB_08a32520;
            }
            uVar1 = uVar1 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x24,3);
LAB_08a32520:
        (*(code *)*puVar4)(plVar6,uVar3,puVar4[1]);
      }
      lVar8 = *(long *)(lStack0000000000000060 + 0x40);
    } while ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) == '\0'));
    if (*(long *)(lVar8 + 0x40) == 0) {
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      if (DAT_0b32acf7 == '\0') {
        FUN_04947ee4();
        DAT_0b32acf7 = '\x01';
      }
      lVar2 = *unaff_x20;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar2 = *unaff_x20;
      }
      plVar6 = (long *)**(undefined8 **)(lVar2 + 0xb8);
      uVar3 = FUN_08bcc3c0(*unaff_x27,*(undefined8 *)(lVar8 + 0x28),0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar2 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_08a32540;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x24,0);
LAB_08a32540:
      (*(code *)*puVar4)(plVar6,uVar3,puVar4[1]);
      goto LAB_08a323b0;
    }
    FUN_06b8097c(&stack0x00000018,*(long *)(lVar8 + 0x40),*(undefined8 *)PTR_DAT_0ac0bc90);
    in_stack_00000040 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000020;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000018 = 0;
    in_stack_00000020 = &stack0x00000030;
    do {
      uVar1 = FUN_05fefd38(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac0bc48);
      uVar3 = in_stack_00000040;
      if ((uVar1 & 1) == 0) {
        lVar2 = 0;
        iVar7 = 3;
        goto LAB_08a325fc;
      }
      if (*(char *)(lVar8 + 0x20) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_0ac09850 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        uVar1 = FUN_09aca80c();
        if ((uVar1 & 1) != 0) break;
      }
      uVar1 = thunk_FUN_08bd7c8c(uVar3);
    } while ((uVar1 & 1) == 0);
    iVar7 = 10;
LAB_08a325fc:
    FUN_05fefd34(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac0bc40);
    if ((iVar7 != 3) && (iVar7 != 0)) {
LAB_08a32668:
      lVar8 = lStack0000000000000008;
      FUN_05fefd34(puStack0000000000000010,*(undefined8 *)PTR_DAT_0ac4f6b0);
      if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04948184(lVar8);
      }
      return lVar2;
    }
  } while( true );
}


