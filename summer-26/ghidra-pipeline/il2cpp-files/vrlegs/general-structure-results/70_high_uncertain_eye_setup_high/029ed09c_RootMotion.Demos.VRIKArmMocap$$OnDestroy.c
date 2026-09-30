/*
FUNCTION_NAME: RootMotion.Demos.VRIKArmMocap$$OnDestroy
ENTRY_POINT: 029ed09c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029ed320) */

void RootMotion_Demos_VRIKArmMocap__OnDestroy(void)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  uint uVar7;
  long unaff_x19;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  char cStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b8;
  
  uVar9 = *(undefined8 *)(unaff_x19 + 0xa0);
  cStack000000000000007c = '\0';
  FUN_027e0bd8(uVar9,&stack0x0000007c,0);
  cVar1 = *(char *)(in_stack_000000b8 + 0x9e);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    thunk_FUN_01a4b338();
    uVar7 = 4;
    *(undefined1 *)(in_stack_000000b8 + 0xac) = 1;
  }
  else {
    uVar7 = 3;
  }
  if (cStack000000000000007c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
  }
  puVar2 = PTR_DAT_03cbec30;
  if ((uVar7 | 4) != 4) {
    return;
  }
  if (*(long *)(in_stack_000000b8 + 0xc0) != 0) {
    plVar8 = *(long **)(*(long *)(in_stack_000000b8 + 0xc0) + 0x18);
    uVar9 = FUN_025b1328(*(undefined8 *)(in_stack_000000b8 + 0xb0),*(undefined8 *)PTR_DAT_03d09470,0
                        );
    lVar10 = *(long *)puVar2;
    lVar4 = *(long *)(lVar10 + 0x38);
    if (lVar4 == 0) {
      FUN_01a47054(lVar10);
      lVar4 = *(long *)(lVar10 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar4 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    puVar2 = PTR_DAT_03cdbd38;
    if (plVar8 != (long *)0x0) {
      lVar10 = *plVar8;
      uVar11 = **(undefined8 **)(lVar4 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03ccf278) {
            puVar3 = (undefined8 *)(lVar10 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_029ed1f4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03ccf278,2);
LAB_029ed1f4:
      (*(code *)*puVar3)(plVar8,uVar9,uVar11,puVar3[1]);
      uVar9 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_027d6e90(uVar9,0,0);
      *(undefined8 *)(in_stack_000000b8 + 0xe0) = uVar9;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(in_stack_000000b8 + 0xe0),uVar9);
      in_stack_00000070 = &stack0x000000b8;
      in_stack_00000068 = 0;
      FUN_03641bd4(0);
      uVar15 = *(undefined8 *)(in_stack_000000b8 + 0x28);
      uVar14 = *(undefined8 *)(in_stack_000000b8 + 0x20);
      uVar11 = *(undefined8 *)(in_stack_000000b8 + 0x38);
      uVar9 = *(undefined8 *)(in_stack_000000b8 + 0x30);
      uVar13 = *(undefined8 *)(in_stack_000000b8 + 0x18);
      uVar12 = *(undefined8 *)(in_stack_000000b8 + 0x10);
      plVar8 = *(long **)(in_stack_000000b8 + 0x48);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_03d09350) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_029ed2c0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03d09350,0);
LAB_029ed2c0:
      in_stack_00000080 = uVar12;
      in_stack_00000088 = uVar13;
      in_stack_00000090 = uVar14;
      in_stack_00000098 = uVar15;
      in_stack_000000a0 = uVar9;
      in_stack_000000a8 = uVar11;
      (*(code *)*puVar3)(plVar8,&stack0x00000080,puVar3[1]);
      while( true ) {
        cVar1 = *(char *)(in_stack_000000b8 + 0x9e);
        thunk_FUN_01a4b338();
        if (cVar1 != '\0') {
          FUN_019b3518(&stack0x00000068);
          thunk_FUN_01a4b338();
          *(undefined1 *)(in_stack_000000b8 + 0xac) = 0;
          return;
        }
        FUN_029e9d54(in_stack_000000b8);
        plVar8 = *(long **)(in_stack_000000b8 + 0xe0);
        if (plVar8 == (long *)0x0) break;
        (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


