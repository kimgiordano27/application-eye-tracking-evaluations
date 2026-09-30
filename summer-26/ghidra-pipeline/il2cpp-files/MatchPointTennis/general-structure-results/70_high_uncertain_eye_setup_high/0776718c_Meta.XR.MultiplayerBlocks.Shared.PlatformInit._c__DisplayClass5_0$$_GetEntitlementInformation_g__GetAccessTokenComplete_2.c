/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$<GetEntitlementInformation>g__GetAccessTokenComplete|2
ENTRY_POINT: 0776718c
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


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0__<GetEntitlementInformation>g__GetAccessTokenComplete_2
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,int param_5)

{
  float fVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long in_x9;
  long in_x10;
  uint in_w11;
  int iVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong uVar11;
  int unaff_w25;
  uint uVar12;
  float *pfVar13;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  long in_stack_00000090;
  
  do {
    if ((uint)in_x10 < in_w11) {
      lVar4 = in_x9 + in_x10 * 0x10;
      *(uint *)(unaff_x21 + 0x18) = (uint)in_x10 + 1;
      *(undefined4 *)(lVar4 + 0x20) = 0;
      *(float *)(lVar4 + 0x24) = param_3;
      *(float *)(lVar4 + 0x28) = param_4;
      *(float *)(lVar4 + 0x2c) = (float)param_5;
    }
    else {
      FUN_05c21a38(0,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w22 = *(int *)(unaff_x20 + 0x18) + unaff_w22;
    if (unaff_w25 <= *(int *)(unaff_x20 + 0x14)) {
      unaff_w25 = *(int *)(unaff_x20 + 0x14);
    }
    uVar12 = in_stack_00000088._4_4_ - unaff_w22;
    while( true ) {
      fVar1 = DAT_01c7661c;
      if (*(int *)(in_stack_00000070 + 0x18) < 1) {
        if (unaff_x28 == 0) goto LAB_07767440;
        if (*(int *)(unaff_x28 + 0x18) < 1) {
          if (unaff_x27 == 0) goto LAB_07767440;
          iVar14 = *(int *)(unaff_x27 + 0x18);
          if (iVar14 < 1) goto LAB_0776738c;
          iVar10 = 0;
          goto LAB_07767220;
        }
      }
      else if (unaff_x28 == 0) goto LAB_07767440;
      unaff_x20 = Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__ColocateAutomaticallyInternal
                            (unaff_x19,in_stack_00000070,uVar12,in_stack_00000088._4_4_,
                             *(int *)(unaff_x28 + 0x18) == 0);
      if (unaff_x20 != 0) break;
      if (3 < *(int *)(unaff_x19 + 0x10)) {
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        FUN_094c652c(*(undefined8 *)PTR_DAT_09f32e48,0);
      }
      if (unaff_x26 == 0) goto LAB_07767440;
      uVar3 = FUN_05a2ad3c(unaff_x26,*(undefined8 *)PTR_DAT_09f32cc8);
      lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f32c88);
      FUN_07a80df4(lVar4,0);
      *(undefined8 *)(lVar4 + 0x28) = uVar3;
      thunk_FUN_044bb4b4((undefined8 *)(lVar4 + 0x28),uVar3);
      *(int *)(lVar4 + 0x10) = unaff_w25;
      *(int *)(lVar4 + 0x14) = unaff_w22;
      lVar5 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f313a0,*(undefined4 *)(unaff_x28 + 0x18));
      lVar6 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e6a8,*(undefined4 *)(unaff_x28 + 0x18));
      if (0 < *(int *)(unaff_x28 + 0x18)) {
        uVar11 = 0;
        pfVar13 = (float *)(lVar5 + 0x2c);
        do {
          lVar7 = FUN_05badb74();
          if (lVar7 == 0) goto LAB_07767440;
          iVar14 = *(int *)(lVar7 + 0x1c);
          lVar7 = FUN_05badb74();
          if (lVar7 == 0) goto LAB_07767440;
          iVar17 = *(int *)(lVar7 + 0x20);
          iVar10 = unaff_w25;
          if (*(char *)(unaff_x19 + 0x1c) == '\0') {
            lVar7 = FUN_05badb74();
            if (lVar7 == 0) goto LAB_07767440;
            iVar10 = *(int *)(lVar7 + 0x14);
          }
          lVar7 = FUN_05badb74();
          if ((lVar7 == 0) || (lVar5 == 0)) goto LAB_07767440;
          if (*(uint *)(lVar5 + 0x18) <= uVar11) {
Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          iVar16 = *(int *)(lVar7 + 0x18);
          pfVar13[-3] = (float)iVar14;
          pfVar13[-2] = (float)iVar17;
          pfVar13[-1] = (float)iVar10;
          *pfVar13 = (float)iVar16;
          lVar7 = FUN_05badb74();
          if ((lVar7 == 0) || (lVar6 == 0)) goto LAB_07767440;
          if (*(uint *)(lVar6 + 0x18) <= uVar11)
          goto 
          Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_1__<GetEntitlementInformation>b__3
          ;
          pfVar13 = pfVar13 + 4;
          *(undefined4 *)(lVar6 + 0x20 + uVar11 * 4) = *(undefined4 *)(lVar7 + 0x10);
          uVar11 = uVar11 + 1;
          unaff_x19 = in_stack_00000090;
        } while ((long)uVar11 < (long)*(int *)(unaff_x28 + 0x18));
      }
      *(long *)(lVar4 + 0x20) = lVar5;
      thunk_FUN_044bb4b4((long *)(lVar4 + 0x20),lVar5);
      *(long *)(lVar4 + 0x30) = lVar6;
      thunk_FUN_044bb4b4((long *)(lVar4 + 0x30),lVar6);
      iVar14 = *(int *)(unaff_x28 + 0x18);
      *(undefined4 *)(unaff_x28 + 0x18) = 0;
      *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
      if (0 < iVar14) {
        FUN_07a61000(*(undefined8 *)(unaff_x28 + 0x10),0,iVar14,0);
      }
      if (in_stack_00000068 == 0) goto LAB_07767440;
      *(undefined4 *)(in_stack_00000068 + 0x18) = 0;
      *(int *)(in_stack_00000068 + 0x1c) = *(int *)(in_stack_00000068 + 0x1c) + 1;
      if (in_stack_00000078 == 0) goto LAB_07767440;
      lVar5 = *(long *)(in_stack_00000078 + 0x10);
      lVar6 = *(long *)PTR_DAT_09f32cb8;
      *(int *)(in_stack_00000078 + 0x1c) = *(int *)(in_stack_00000078 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07767440;
      uVar12 = *(uint *)(in_stack_00000078 + 0x18);
      if (uVar12 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(in_stack_00000078 + 0x18) = uVar12 + 1;
        plVar8 = (long *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
        *plVar8 = lVar4;
        thunk_FUN_044bb4b4(plVar8,lVar4);
      }
      else {
        FUN_05bade44(in_stack_00000078,lVar4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      unaff_w22 = 0;
      unaff_x21 = in_stack_00000068;
      unaff_x26 = in_stack_00000080;
      unaff_x27 = in_stack_00000078;
      uVar12 = in_stack_00000088._4_4_;
    }
    *(undefined4 *)(unaff_x20 + 0x1c) = 0;
    *(int *)(unaff_x20 + 0x20) = unaff_w22;
    lVar4 = *(long *)(unaff_x28 + 0x10);
    *(int *)(unaff_x28 + 0x1c) = *(int *)(unaff_x28 + 0x1c) + 1;
    if (lVar4 == 0) goto LAB_07767440;
    uVar12 = *(uint *)(unaff_x28 + 0x18);
    if (uVar12 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x28 + 0x18) = uVar12 + 1;
      plVar8 = (long *)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
      *plVar8 = unaff_x20;
      thunk_FUN_044bb4b4(plVar8,unaff_x20);
    }
    else {
      FUN_05bade44();
    }
    if (unaff_x21 == 0) goto LAB_07767440;
    iVar14 = *(int *)(unaff_x20 + 0x14);
    param_5 = *(int *)(unaff_x20 + 0x18);
    in_x9 = *(long *)(unaff_x21 + 0x10);
    param_1 = *(long *)PTR_DAT_09f32e10;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_07767440;
    in_x10 = (long)*(int *)(unaff_x21 + 0x18);
    in_w11 = *(uint *)(in_x9 + 0x18);
    param_3 = (float)unaff_w22;
    param_4 = (float)iVar14;
  } while( true );
  while( true ) {
    uVar12 = *(uint *)(lVar4 + 0x14);
    lVar4 = FUN_05badb74(unaff_x27,iVar10,*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_07767440;
    if (*(char *)(in_stack_00000090 + 0x14) != '\0') {
      fVar15 = logf((float)(int)uVar12);
      fVar15 = exp2f((float)(int)(fVar15 / fVar1));
      uVar12 = 0x80000000;
      if (fVar15 != INFINITY) {
        uVar12 = (int)fVar15;
      }
      if (uVar12 < 3) {
        uVar12 = 2;
      }
    }
    puVar2 = PTR_DAT_09f32e38;
    if ((int)in_stack_00000088._4_4_ <= (int)uVar12) {
      uVar12 = in_stack_00000088._4_4_;
    }
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar4 == 0) goto LAB_07767440;
    *(uint *)(lVar4 + 0x14) = uVar12;
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)puVar2);
    if (lVar4 == 0) goto LAB_07767440;
    iVar14 = *(int *)(lVar4 + 0x10);
    lVar4 = FUN_05badb74(in_stack_00000078,iVar10,*(undefined8 *)puVar2);
    if ((lVar4 == 0) || (in_stack_00000080 == 0)) goto LAB_07767440;
    iVar17 = *(int *)(lVar4 + 0x14);
    FUN_05a28f70(in_stack_00000080,0,*(undefined8 *)PTR_DAT_09f32c78);
    FUN_07760c44((float)iVar14,(float)iVar17,in_stack_00000090);
    iVar10 = iVar10 + 1;
    iVar14 = *(int *)(in_stack_00000078 + 0x18);
    unaff_x27 = in_stack_00000078;
    unaff_x26 = in_stack_00000080;
    if (iVar14 <= iVar10) break;
LAB_07767220:
    puVar2 = PTR_DAT_09f32e38;
    lVar4 = FUN_05badb74(unaff_x27,iVar10,*(undefined8 *)PTR_DAT_09f32e38);
    if (lVar4 == 0) goto LAB_07767440;
  }
LAB_0776738c:
  puVar2 = PTR_DAT_09f32e38;
  if (0 < iVar14) {
    iVar14 = 0;
    do {
      uVar3 = FUN_05badb74(unaff_x27,iVar14,*(undefined8 *)puVar2);
      if (unaff_x26 == 0) {
LAB_07767440:
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar9 = FUN_05a28f70(unaff_x26,iVar14,*(undefined8 *)PTR_DAT_09f32c78);
      FUN_07761148(uVar9,uVar3,uVar9);
      lVar4 = FUN_05badb74(unaff_x27,iVar14,*(undefined8 *)puVar2);
      if (lVar4 == 0) goto LAB_07767440;
      FUN_077606dc();
      iVar14 = iVar14 + 1;
    } while (iVar14 < *(int *)(unaff_x27 + 0x18));
  }
  FUN_05baf9bc(unaff_x27,*(undefined8 *)PTR_DAT_09f32cd0);
  return;
}


