/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GenerateRandomPositionInRoom
ENTRY_POINT: 07738afc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GenerateRandomPositionInRoom(void)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  int in_w8;
  uint uVar4;
  undefined8 in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long lVar5;
  long unaff_x24;
  int unaff_w25;
  uint unaff_w26;
  int iVar6;
  int unaff_w27;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while( true ) {
    unaff_w26 = unaff_w26 - 1;
    *(undefined8 *)(*(long *)(unaff_x21 + 0x60) + (long)(unaff_w25 + in_w8) * 8) = in_x9;
    iVar6 = unaff_w27;
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w26 == 0) {
      do {
        unaff_x24 = unaff_x24 + 1;
        if (*(int *)(unaff_x19 + 0x30) <= unaff_x24) {
          lVar5 = *unaff_x20;
          if (lVar5 == 0) goto LAB_07738d08;
          uVar2 = *(uint *)(lVar5 + 0x18);
          if ((int)uVar2 < 1) goto LAB_07738b54;
          uVar4 = 0;
          goto LAB_07738b40;
        }
        bVar1 = *(byte *)(*(long *)(unaff_x19 + 0x108) + unaff_x24);
        unaff_w26 = (uint)bVar1;
        *(byte *)(*(long *)(unaff_x21 + 0x50) + (long)((int)unaff_x24 + unaff_w22)) = bVar1;
      } while (bVar1 == 0);
      iVar6 = unaff_w27 + (uint)bVar1;
      unaff_w25 = unaff_w27;
    }
    in_stack_00000008 = *(undefined8 *)(*(long *)(unaff_x19 + 0x118) + (long)unaff_w25 * 8);
    uVar2 = FUN_094fdbc8(&stack0x00000008,0);
    if (unaff_x23 == 0) goto LAB_07738d08;
    if (*(uint *)(unaff_x23 + 0x18) <= uVar2) break;
    FUN_094fdbd0(&stack0x00000008,*(undefined4 *)(unaff_x23 + (long)(int)uVar2 * 4 + 0x20),0);
    in_w8 = *(int *)(unaff_x21 + 0x44);
    in_x9 = in_stack_00000008;
    unaff_w27 = iVar6;
  }
  goto LAB_07738d0c;
  while (uVar4 = uVar4 + 1, (int)uVar4 < (int)uVar2) {
LAB_07738b40:
    if (uVar2 <= uVar4) goto LAB_07738d0c;
  }
LAB_07738b54:
  *(long *)(unaff_x19 + 0x40) = lVar5;
  thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x40),lVar5);
  *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x19 + 0x38) + *(int *)(unaff_x21 + 0x44);
  if (*(int *)(unaff_x21 + 0x10) < 5) {
LAB_07738c9c:
    *(undefined8 *)(unaff_x19 + 0xf0) = 0;
    thunk_FUN_044bb4b4();
    *(undefined8 *)(unaff_x19 + 0xd8) = 0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0xd8),0);
    *(undefined8 *)(unaff_x19 + 0xe0) = 0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0xe0),0);
    *(undefined8 *)(unaff_x19 + 0xf8) = 0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0xf8),0);
    *(undefined8 *)(unaff_x19 + 0xe8) = 0;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0xe8),0);
    return;
  }
  lVar5 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
  if (lVar5 == 0) {
LAB_07738d08:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_09f31a70;
    thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x20));
    if (1 < *(uint *)(lVar5 + 0x18)) {
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
      thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x28));
      if (2 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_09f31a80;
        thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x30));
        in_stack_00000000._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
        uVar3 = FUN_07a3b850((long)&stack0x00000000 + 4,0);
        if (3 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x38) = uVar3;
          thunk_FUN_044bb4b4((undefined8 *)(lVar5 + 0x38),uVar3);
          if (4 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_09f31a78;
            thunk_FUN_044bb4b4();
            uVar3 = FUN_078b57fc(lVar5,0);
            if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
              thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
            }
            FUN_094c652c(uVar3,0);
            goto LAB_07738c9c;
          }
        }
      }
    }
  }
LAB_07738d0c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


