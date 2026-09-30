/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$ToggleEffectMeshColliders
ENTRY_POINT: 08a323d0
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

long Meta_XR_MRUtilityKit_EffectMesh__ToggleEffectMeshColliders(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x20;
  long unaff_x21;
  long *plVar6;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 unaff_w28;
  int iVar7;
  long unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000060;
  
  do {
    if (*(char *)(unaff_x29 + 0x10) != '\0') {
      if (*(long *)(unaff_x29 + 0x40) == 0) {
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (*(char *)(unaff_x23 + 0xcf7) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x23 + 0xcf7) = unaff_w28;
        }
        lVar1 = *unaff_x20;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar1 = *unaff_x20;
        }
        plVar6 = (long *)**(undefined8 **)(lVar1 + 0xb8);
        uVar2 = FUN_08bcc3c0(*unaff_x27,*(undefined8 *)(unaff_x29 + 0x28),0);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar1 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_08a32540;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x24,0);
LAB_08a32540:
        (*(code *)*puVar3)(plVar6,uVar2,puVar3[1]);
      }
      else {
        FUN_06b8097c(&stack0x00000018,*(long *)(unaff_x29 + 0x40),*(undefined8 *)PTR_DAT_0ac0bc90);
        in_stack_00000040 = in_stack_00000028;
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000018 = 0;
        in_stack_00000020 = &stack0x00000030;
        do {
          uVar4 = FUN_05fefd38(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac0bc48);
          uVar2 = in_stack_00000040;
          if ((uVar4 & 1) == 0) {
            unaff_x21 = 0;
            iVar7 = 3;
            goto LAB_08a325fc;
          }
          if (*(char *)(unaff_x29 + 0x20) != '\0') {
            if (*(int *)(*(long *)PTR_DAT_0ac09850 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            uVar4 = FUN_09aca80c();
            if ((uVar4 & 1) != 0) break;
          }
          uVar4 = thunk_FUN_08bd7c8c(uVar2);
        } while ((uVar4 & 1) == 0);
        iVar7 = 10;
LAB_08a325fc:
        FUN_05fefd34(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac0bc40);
        if ((iVar7 != 3) && (iVar7 != 0)) {
LAB_08a32668:
          FUN_05fefd34(in_stack_00000010,*(undefined8 *)PTR_DAT_0ac4f6b0);
          if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04948184(in_stack_00000008);
          }
          return unaff_x21;
        }
      }
    }
    do {
      while( true ) {
        uVar4 = FUN_05fefd38(&stack0x00000050,*unaff_x25);
        if ((uVar4 & 1) == 0) {
          unaff_x21 = 0;
          goto LAB_08a32668;
        }
        if (in_stack_00000060 != 0) break;
        if (*(int *)(*unaff_x20 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        if (*(char *)(unaff_x23 + 0xcf7) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x23 + 0xcf7) = unaff_w28;
        }
        lVar1 = *unaff_x20;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_049a583c();
          lVar1 = *unaff_x20;
        }
        plVar6 = (long *)**(undefined8 **)(lVar1 + 0xb8);
        uVar2 = FUN_08bcc3c0(*unaff_x26);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar1 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar5 + 3) * 0x10 + 0x138);
              goto LAB_08a32520;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x24,3);
LAB_08a32520:
        (*(code *)*puVar3)(plVar6,uVar2,puVar3[1]);
      }
      unaff_x29 = *(long *)(in_stack_00000060 + 0x40);
      unaff_x21 = in_stack_00000060;
    } while (unaff_x29 == 0);
  } while( true );
}


