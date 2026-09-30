/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$<GetEntitlementInformation>g__CheckEntitlement|1
ENTRY_POINT: 07766f90
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__CheckEntitlement_1
               (void)

{
  float fVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x24;
  int unaff_w25;
  uint uVar9;
  float *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  int unaff_w29;
  int iVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int unaff_s8;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  
  while ((lVar4 = FUN_05badb74(), lVar4 != 0 && (unaff_x24 != 0))) {
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x22) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    iVar12 = *(int *)(lVar4 + 0x18);
    unaff_x26[-3] = (float)unaff_w29;
    unaff_x26[-2] = (float)unaff_s8;
    unaff_x26[-1] = (float)unaff_w19;
    *unaff_x26 = (float)iVar12;
    lVar4 = FUN_05badb74();
    if ((lVar4 == 0) || (unaff_x21 == 0)) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x22)
    goto 
    Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
    ;
    unaff_x26 = unaff_x26 + 4;
    *(undefined4 *)(unaff_x27 + unaff_x22 * 4) = *(undefined4 *)(lVar4 + 0x10);
    unaff_x22 = unaff_x22 + 1;
    if ((long)*(int *)(unaff_x28 + 0x18) <= (long)unaff_x22) {
      do {
        *(long *)(unaff_x20 + 0x20) = unaff_x24;
        thunk_FUN_044bb4b4((long *)(unaff_x20 + 0x20),unaff_x24);
        *(long *)(unaff_x20 + 0x30) = unaff_x21;
        thunk_FUN_044bb4b4((long *)(unaff_x20 + 0x30),unaff_x21);
        iVar12 = *(int *)(unaff_x28 + 0x18);
        *(undefined4 *)(unaff_x28 + 0x18) = 0;
        *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
        if (0 < iVar12) {
          FUN_07a61000(*(undefined8 *)(unaff_x28 + 0x10),0,iVar12,0);
        }
        if (in_stack_00000068 == 0) goto LAB_07767440;
        *(undefined4 *)(in_stack_00000068 + 0x18) = 0;
        *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
        if (in_stack_00000078 == 0) goto LAB_07767440;
        lVar4 = *(long *)(in_stack_00000078 + 0x10);
        lVar8 = *(long *)PTR_DAT_09f32cb8;
        *(int *)(in_stack_00000078 + 0x1c) = *(int *)(in_stack_00000078 + 0x1c) + 1;
        if (lVar4 == 0) goto LAB_07767440;
        uVar9 = *(uint *)(in_stack_00000078 + 0x18);
        if (uVar9 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(in_stack_00000078 + 0x18) = uVar9 + 1;
          plVar5 = (long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          *plVar5 = unaff_x20;
          thunk_FUN_044bb4b4(plVar5,unaff_x20);
        }
        else {
          FUN_05bade44(in_stack_00000078,unaff_x20,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        iVar12 = 0;
        uVar9 = in_stack_00000088._4_4_;
        while( true ) {
          fVar1 = DAT_01c7661c;
          if (*(int *)(in_stack_00000070 + 0x18) < 1) {
            if (unaff_x28 == 0) goto LAB_07767440;
            if (*(int *)(unaff_x28 + 0x18) < 1) {
              if (in_stack_00000078 == 0) goto LAB_07767440;
              iVar12 = *(int *)(in_stack_00000078 + 0x18);
              if (iVar12 < 1) goto LAB_0776738c;
              iVar10 = 0;
              goto LAB_07767220;
            }
          }
          else if (unaff_x28 == 0) goto LAB_07767440;
          lVar4 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                            (in_stack_00000090,in_stack_00000070,uVar9,in_stack_00000088._4_4_,
                             *(int *)(unaff_x28 + 0x18) == 0);
          if (lVar4 == 0) break;
          *(undefined4 *)(lVar4 + 0x1c) = 0;
          *(int *)(lVar4 + 0x20) = iVar12;
          lVar8 = *(long *)(unaff_x28 + 0x10);
          *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_07767440;
          uVar9 = *(uint *)(unaff_x28 + 0x18);
          if (uVar9 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(unaff_x28 + 0x18) = uVar9 + 1;
            plVar5 = (long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
            *plVar5 = lVar4;
            thunk_FUN_044bb4b4(plVar5,lVar4);
          }
          else {
            FUN_05bade44();
          }
          if (in_stack_00000068 == 0) goto LAB_07767440;
          iVar10 = *(int *)(lVar4 + 0x14);
          iVar13 = *(int *)(lVar4 + 0x18);
          lVar8 = *(long *)(in_stack_00000068 + 0x10);
          lVar7 = *(long *)PTR_DAT_09f32e10;
          *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_07767440;
          uVar9 = *(uint *)(in_stack_00000068 + 0x18);
          if (uVar9 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar9 * 0x10;
            *(uint *)(in_stack_00000068 + 0x18) = uVar9 + 1;
            *(undefined4 *)(lVar8 + 0x20) = 0;
            *(float *)(lVar8 + 0x24) = (float)iVar12;
            *(float *)(lVar8 + 0x28) = (float)iVar10;
            *(float *)(lVar8 + 0x2c) = (float)iVar13;
          }
          else {
            FUN_05c21a38(0,in_stack_00000068,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          iVar12 = *(int *)(lVar4 + 0x18) + iVar12;
          if (unaff_w25 <= *(int *)(lVar4 + 0x14)) {
            unaff_w25 = *(int *)(lVar4 + 0x14);
          }
          uVar9 = in_stack_00000088._4_4_ - iVar12;
        }
        if (3 < *(int *)(in_stack_00000090 + 0x10)) {
          if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
        }
        if (in_stack_00000080 == 0) goto LAB_07767440;
        uVar3 = FUN_05a2ad3c(in_stack_00000080,*(undefined8 *)PTR_DAT_09f32cc8);
        unaff_x20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
        FUN_07a80df4(unaff_x20,0);
        *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
        thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x28),uVar3);
        *(int *)(unaff_x20 + 0x10) = unaff_w25;
        *(int *)(unaff_x20 + 0x14) = iVar12;
        unaff_x24 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(unaff_x28 + 0x18));
        unaff_x21 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(unaff_x28 + 0x18));
      } while (*(int *)(unaff_x28 + 0x18) < 1);
      unaff_x22 = 0;
      unaff_x27 = unaff_x21 + 0x20;
      unaff_x26 = (float *)(unaff_x24 + 0x2c);
    }
    lVar4 = FUN_05badb74();
    if (lVar4 == 0) break;
    unaff_w29 = *(int *)(lVar4 + 0x1c);
    lVar4 = FUN_05badb74();
    if (lVar4 == 0) break;
    unaff_s8 = *(int *)(lVar4 + 0x20);
    unaff_w19 = unaff_w25;
    if (*(char *)(in_stack_00000090 + 0x1c) == '\0') {
      lVar4 = FUN_05badb74();
      if (lVar4 == 0) break;
      unaff_w19 = *(int *)(lVar4 + 0x14);
    }
  }
LAB_07767440:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
  while( true ) {
    uVar9 = *(uint *)(lVar4 + 0x14);
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_07767440;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar11 = logf((float)(int)uVar9);
      fVar11 = exp2f((float)(int)(fVar11 / fVar1));
      uVar9 = 0x80000000;
      if (fVar11 != INFINITY) {
        uVar9 = (int)fVar11;
      }
      if (uVar9 < 3) {
        uVar9 = 2;
      }
    }
    puVar2 = PTR_DAT_09f32e38;
    if ((int)in_stack_00000088._4_4_ <= (int)uVar9) {
      uVar9 = in_stack_00000088._4_4_;
    }
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar4 == 0) goto LAB_07767440;
    *(uint *)(lVar4 + 0x14) = uVar9;
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_07767440;
    iVar12 = *(int *)(lVar4 + 0x10);
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)puVar2);
    if ((lVar4 == 0) || (in_stack_00000080 == 0)) goto LAB_07767440;
    iVar13 = *(int *)(lVar4 + 0x14);
    FUN_05a28f70(in_stack_00000080,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar12,(float)iVar13,in_stack_00000090);
    iVar10 = iVar10 + 1;
    iVar12 = *(int *)(in_stack_00000078 + 0x18);
    if (iVar12 <= iVar10) break;
LAB_07767220:
    puVar2 = PTR_DAT_09f32e38;
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar4 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar2 = PTR_DAT_09f32e38;
  if (0 < iVar12) {
    iVar12 = 0;
    do {
      uVar3 = FUN_05badb74(in_stack_00000078,iVar12,*(undefined8 *)puVar2);
      if (in_stack_00000080 == 0) goto LAB_07767440;
      uVar6 = FUN_05a28f70(in_stack_00000080,iVar12,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar6,uVar3,uVar6);
      lVar4 = FUN_05badb74(in_stack_00000078,iVar12,*(undefined8 *)puVar2);
      if (lVar4 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(in_stack_00000078 + 0x18));
  }
  FUN_05baf9bc(in_stack_00000078,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


