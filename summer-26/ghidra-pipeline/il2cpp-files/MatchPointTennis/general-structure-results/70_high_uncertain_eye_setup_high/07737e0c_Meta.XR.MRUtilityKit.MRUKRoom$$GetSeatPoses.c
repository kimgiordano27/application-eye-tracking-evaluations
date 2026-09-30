/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetSeatPoses
ENTRY_POINT: 07737e0c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_MRUtilityKit_MRUKRoom__GetSeatPoses(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long lVar11;
  int unaff_w20;
  int iVar12;
  ulong uVar13;
  long unaff_x22;
  long unaff_x24;
  undefined8 uVar14;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar15;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000078;
  undefined4 uStack00000000000000c8;
  uint uStack00000000000000cc;
  undefined8 in_stack_00000118;
  
  while( true ) {
    *(undefined8 *)(unaff_x26 + 0x28) = param_2;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x28));
    uVar5 = FUN_07a3b850((long)&stack0x00000118 + 4,0);
    if (*(uint *)(unaff_x26 + 0x18) < 3) break;
    *(undefined8 *)(unaff_x27 + 0x30) = uVar5;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x27 + 0x30),uVar5);
    if (*(uint *)(unaff_x27 + 0x18) < 4) break;
    *(undefined8 *)(unaff_x27 + 0x38) = *(undefined8 *)PTR_DAT_09f31a00;
    thunk_FUN_044bb4b4();
    if (unaff_x25 == 0) goto LAB_07738234;
    uStack00000000000000c8 = (undefined4)*(undefined8 *)(unaff_x25 + 0x18);
    uVar5 = FUN_07a3b850(&stack0x000000c8,0);
    if (*(uint *)(unaff_x27 + 0x18) < 5) break;
    *(undefined8 *)(unaff_x27 + 0x40) = uVar5;
    thunk_FUN_044bb4b4();
    uVar5 = FUN_078b57fc(unaff_x27,0);
    if (in_stack_00000018 == 0) goto LAB_07738234;
    FUN_078c335c(in_stack_00000018,uVar5,0);
    do {
      do {
        unaff_w20 = unaff_w20 + 1;
        if (*(int *)(unaff_x24 + 0x18) <= unaff_w20) {
          if (in_stack_00000020 == 0) goto LAB_07738234;
          if (*(int *)(in_stack_00000020 + 0x18) < 1) goto LAB_07738188;
          iVar12 = 0;
          goto LAB_07737ee4;
        }
        lVar6 = FUN_05badb74(unaff_x24,unaff_w20,*(undefined8 *)PTR_DAT_09f31320);
        if (lVar6 == 0) goto LAB_07738234;
      } while (*(char *)(lVar6 + 0xb9) != '\0');
      lVar6 = FUN_05badb74(unaff_x24,unaff_w20,*(undefined8 *)PTR_DAT_09f31320);
      if (lVar6 == 0) goto LAB_07738234;
      *(int *)(unaff_x19 + 0x40) = *(int *)(lVar6 + 0x38) + *(int *)(unaff_x19 + 0x40);
      if (*(long *)(lVar6 + 0xe8) == 0) goto LAB_07738234;
      uVar13 = *(ulong *)(*(long *)(lVar6 + 0xe8) + 0x18);
      unaff_x25 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,uVar13 & 0xffffffff);
      in_stack_00000118._4_4_ = 0;
      if (0 < (int)uVar13) {
        uVar8 = 0;
        lVar7 = 0x20;
        do {
          lVar15 = *(long *)(lVar6 + 0x128);
          if (lVar15 == 0) goto LAB_07738234;
          if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_07738238;
          if (*(char *)(lVar15 + uVar8 + 0x20) != '\0') {
            lVar15 = *(long *)(lVar6 + 0xe8);
            if (lVar15 == 0) goto LAB_07738234;
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_07738238;
            memcpy(&stack0x000000d0,(void *)(lVar15 + lVar7),0x48);
            memcpy(&stack0x00000120,(void *)(lVar15 + lVar7),0x48);
            if (unaff_x22 == 0) goto LAB_07738234;
            memcpy(&stack0x00000168,&stack0x00000120,0x48);
            uVar4 = FUN_0753d6ec();
            if ((uVar4 & 1) == 0) {
              memcpy(&stack0x00000030,&stack0x000000d0,0x48);
              if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07738234;
              memcpy(&stack0x00000168,&stack0x00000030,0x48);
              FUN_0753b6b4();
              lVar15 = *(long *)(unaff_x19 + 0x28);
              if (lVar15 == 0) goto LAB_07738234;
              uVar3 = *(uint *)(lVar15 + 0x18);
              in_stack_00000118._4_4_ = in_stack_00000118._4_4_ + 1;
              lVar10 = *(long *)PTR_DAT_09f319e8;
              uStack00000000000000cc = uVar3;
              memcpy(&stack0x00000120,&stack0x000000d0,0x48);
              lVar9 = *(long *)(lVar15 + 0x10);
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_07738234;
              if (uVar3 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar3 + 1;
                pvVar1 = (void *)(lVar9 + (long)(int)uVar3 * 0x48 + 0x20);
                memcpy(pvVar1,&stack0x00000120,0x48);
                thunk_FUN_044bb4b4(pvVar1,0);
              }
              else {
                uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
                memcpy(&stack0x00000168,&stack0x00000120,0x48);
                FUN_05da2e8c(lVar15,&stack0x00000168,uVar5);
              }
            }
            if (unaff_x25 == 0) goto LAB_07738234;
            if (*(uint *)(unaff_x25 + 0x18) <= uVar8) goto LAB_07738238;
            *(uint *)(unaff_x25 + 0x20 + uVar8 * 4) = uStack00000000000000cc;
          }
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x48;
        } while ((uVar13 & 0xffffffff) != uVar8);
      }
      *(long *)(lVar6 + 0xf0) = unaff_x25;
      thunk_FUN_044bb4b4((long *)(lVar6 + 0xf0),unaff_x25);
      unaff_x24 = in_stack_00000010;
    } while (*(int *)(unaff_x19 + 0x10) < 5);
    unaff_x26 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
    if (unaff_x26 == 0) goto LAB_07738234;
    if (*(int *)(unaff_x26 + 0x18) == 0) break;
    *(undefined8 *)(unaff_x26 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x26 + 0x20));
    if (*(uint *)(unaff_x26 + 0x18) < 2) break;
    param_2 = *(undefined8 *)PTR_DAT_09f319f8;
    unaff_x27 = unaff_x26;
  }
LAB_07738238:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
  while( true ) {
    *(int *)(unaff_x19 + 0x40) = *(int *)(lVar6 + 0x38) + *(int *)(unaff_x19 + 0x40);
    if (*(long *)(lVar6 + 0xe8) == 0) goto LAB_07738234;
    iVar2 = *(int *)(*(long *)(lVar6 + 0xe8) + 0x18);
    lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,iVar2);
    if (0 < iVar2) {
      uVar13 = 0;
      lVar15 = 0x20;
      do {
        lVar9 = *(long *)(lVar6 + 0x128);
        if (lVar9 == 0) goto LAB_07738234;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_07738238;
        if (*(char *)(lVar9 + uVar13 + 0x20) != '\0') {
          lVar9 = *(long *)(lVar6 + 0xe8);
          if (lVar9 == 0) goto LAB_07738234;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_07738238;
          memcpy(&stack0x00000080,(void *)(lVar9 + lVar15),0x48);
          memcpy(&stack0x00000120,(void *)(lVar9 + lVar15),0x48);
          if (unaff_x22 == 0) goto LAB_07738234;
          memcpy(&stack0x00000168,&stack0x00000120,0x48);
          uVar8 = FUN_0753d6ec();
          if ((uVar8 & 1) == 0) {
            memcpy(&stack0x00000030,&stack0x00000080,0x48);
            if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07738234;
            memcpy(&stack0x00000168,&stack0x00000030,0x48);
            FUN_0753b6b4();
            lVar9 = *(long *)(unaff_x19 + 0x28);
            if (lVar9 == 0) goto LAB_07738234;
            uVar3 = *(uint *)(lVar9 + 0x18);
            lVar11 = *(long *)PTR_DAT_09f319e8;
            in_stack_00000078._4_4_ = uVar3;
            memcpy(&stack0x00000120,&stack0x00000080,0x48);
            lVar10 = *(long *)(lVar9 + 0x10);
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_07738234;
            if (uVar3 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar3 + 1;
              pvVar1 = (void *)(lVar10 + (long)(int)uVar3 * 0x48 + 0x20);
              memcpy(pvVar1,&stack0x00000120,0x48);
              thunk_FUN_044bb4b4(pvVar1,0);
            }
            else {
              uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000168,&stack0x00000120,0x48);
              FUN_05da2e8c(lVar9,&stack0x00000168,uVar5);
            }
          }
          if (lVar7 == 0) goto LAB_07738234;
          if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_07738238;
          *(uint *)(lVar7 + 0x20 + uVar13 * 4) = in_stack_00000078._4_4_;
        }
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 0x48;
      } while ((long)iVar2 != uVar13);
    }
    *(long *)(lVar6 + 0xf0) = lVar7;
    thunk_FUN_044bb4b4((long *)(lVar6 + 0xf0),lVar7);
    if (4 < *(int *)(unaff_x19 + 0x10)) {
      if (lVar7 == 0) goto LAB_07738234;
      uVar14 = *(undefined8 *)(lVar6 + 0x20);
      uStack00000000000000c8 = (undefined4)*(undefined8 *)(lVar7 + 0x18);
      uVar5 = FUN_07a3b850(&stack0x000000c8,0);
      uVar5 = FUN_078b4f58(uVar14,*(undefined8 *)PTR_DAT_09f31a00,uVar5,0);
      if (in_stack_00000018 == 0) goto LAB_07738234;
      FUN_078c335c(in_stack_00000018,uVar5,0);
    }
    iVar12 = iVar12 + 1;
    if (*(int *)(in_stack_00000020 + 0x18) <= iVar12) break;
LAB_07737ee4:
    lVar6 = FUN_05badb74(in_stack_00000020,iVar12,*(undefined8 *)PTR_DAT_09f31320);
    if (lVar6 == 0) goto LAB_07738234;
  }
LAB_07738188:
  if (4 < *(int *)(unaff_x19 + 0x10)) {
    if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_07738234;
    uStack00000000000000c8 = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
    uVar5 = FUN_07a3b850(&stack0x000000c8,0);
    uVar5 = FUN_078a7764(*(undefined8 *)PTR_DAT_09f319f0,uVar5,0);
    if (in_stack_00000018 == 0) goto LAB_07738234;
    FUN_078c335c(in_stack_00000018,uVar5,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c652c(in_stack_00000018,0);
  }
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x18);
  }
LAB_07738234:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


