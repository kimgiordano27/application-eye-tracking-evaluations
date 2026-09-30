/*
FUNCTION_NAME: OVRPlugin.Media$$UseMrcDebugCamera
ENTRY_POINT: 06031b80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__UseMrcDebugCamera(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  ulong uVar15;
  long *plVar16;
  long *unaff_x26;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000064;
  long in_stack_00000078;
  
  puVar11 = *(undefined4 **)(*(long *)PTR_DAT_075b55e8 + 0xb8);
  FUN_06e6ac78(*puVar11,puVar11[1],puVar11[2],puVar11[3]);
  lVar6 = FUN_06e550fc();
  if (lVar6 != 0) {
    FUN_06e59a08(lVar6,*(undefined4 *)(unaff_x19 + 0x4c),0);
    lVar6 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f78e8);
    FUN_047aec7c(lVar6,0x1a,*(undefined8 *)PTR_DAT_075f78e0);
    plVar16 = (long *)(unaff_x19 + 0x68);
    *plVar16 = lVar6;
    thunk_FUN_0329bf60(plVar16,lVar6);
    if (*plVar16 != 0) {
      uVar7 = FUN_047af668(*plVar16,*(undefined8 *)PTR_DAT_075f78d8);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar7;
      thunk_FUN_0329bf60();
      puVar5 = PTR_DAT_075f78d0;
      puVar4 = PTR_DAT_075f78c8;
      puVar3 = PTR_DAT_075f2ea8;
      uVar15 = 2;
      do {
        lVar6 = *(long *)puVar3;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar6 == 0) goto LAB_06031f80;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) {
LAB_06031f84:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        uVar1 = *(uint *)(lVar6 + uVar15 * 4 + 0x20);
        if ((uVar1 != 0xffffffff) &&
           ((*(uint *)(unaff_x19 + 0x50) >> (ulong)((uint)uVar15 & 0x1f) & 1) != 0)) {
          plVar16 = *(long **)(unaff_x19 + 0x38);
          if (plVar16 == (long *)0x0) goto LAB_06031f80;
          lVar6 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto LAB_06031ce4;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0322c1e8(plVar16,*unaff_x26,9);
LAB_06031ce4:
          (*(code *)*puVar8)(plVar16,uVar1,&stack0x00000050,puVar8[1]);
          uVar12 = FUN_06031f94();
          if ((uVar12 & 1) == 0) {
            in_stack_00000010 = CONCAT44(uStack0000000000000054,uStack0000000000000050);
            in_stack_00000018 = in_stack_00000058;
            uStack0000000000000024 = uStack0000000000000064;
            uStack0000000000000020 = uStack0000000000000060;
            lVar6 = FUN_0603205c();
            plVar16 = *(long **)(unaff_x19 + 0x78);
            in_stack_00000078 = lVar6;
            if (plVar16 == (long *)0x0) goto LAB_06031f80;
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_0322f04c(lVar6,*(undefined8 *)(*plVar16 + 0x40)), lVar9 == 0)) {
              uVar7 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
              FUN_031f225c(uVar7,0);
            }
            if (*(uint *)(plVar16 + 3) <= uVar1) goto LAB_06031f84;
            plVar16[(long)(int)uVar1 + 4] = lVar6;
            thunk_FUN_0329bf60(plVar16 + (long)(int)uVar1 + 4,lVar6);
          }
          uStack000000000000000c = uVar1;
          uVar7 = thunk_FUN_0322ed78(*(undefined8 *)puVar4,(long)&stack0x00000008 + 4);
          uStack0000000000000008 = (uint)uVar15;
          uVar10 = thunk_FUN_0322ed78(*(undefined8 *)puVar4,&stack0x00000008);
          FUN_05c89614(*(undefined8 *)PTR_DAT_075f7900,uVar7,uVar10,0);
          if (*(long *)(unaff_x19 + 0x40) == 0) goto LAB_06031f80;
          uVar7 = FUN_06033f9c(*(long *)(unaff_x19 + 0x40),uVar1,0);
          plVar16 = *(long **)(unaff_x19 + 0x38);
          uVar2 = (int)uVar7;
          if (uVar1 != 0) {
            uVar2 = 0;
          }
          if (plVar16 == (long *)0x0) goto LAB_06031f80;
          lVar6 = *plVar16;
          uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *unaff_x26) {
                puVar8 = (undefined8 *)(lVar6 + (long)(*piVar14 + 9) * 0x10 + 0x138);
                goto LAB_06031e3c;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_0322c1e8(plVar16,*unaff_x26,9);
LAB_06031e3c:
          (*(code *)*puVar8)(plVar16,uVar15 & 0xffffffff,&stack0x00000030,puVar8[1]);
          if (in_stack_00000078 == 0) goto LAB_06031f80;
          FUN_06e5502c(in_stack_00000078,0);
          uVar7 = FUN_0603221c(uStack0000000000000050,uStack0000000000000054,in_stack_00000058,
                               uStack0000000000000030,uStack0000000000000034,in_stack_00000038,uVar7
                               ,uVar2);
          lVar6 = in_stack_00000078;
          uVar10 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075f78c0);
          FUN_06032bd8(uVar10,uVar1,uVar15 & 0xffffffff,lVar6,uVar7,0);
          lVar6 = *(long *)(unaff_x19 + 0x68);
          if (lVar6 == 0) goto LAB_06031f80;
          lVar9 = *(long *)(lVar6 + 0x10);
          lVar13 = *(long *)puVar5;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_06031f80;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            puVar8 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *puVar8 = uVar10;
            thunk_FUN_0329bf60(puVar8,uVar10);
          }
          else {
            FUN_047af440(lVar6,uVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x1a);
      FUN_06032484();
      lVar6 = *(long *)(unaff_x19 + 0x58);
      *(undefined1 *)(unaff_x19 + 0x81) = 1;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
        return;
      }
    }
  }
LAB_06031f80:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


