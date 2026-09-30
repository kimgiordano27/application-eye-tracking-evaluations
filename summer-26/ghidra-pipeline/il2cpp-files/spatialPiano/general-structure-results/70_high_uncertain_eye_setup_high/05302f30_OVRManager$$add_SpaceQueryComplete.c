/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 05302f30
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_SpaceQueryComplete(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  long unaff_x19;
  long unaff_x21;
  long unaff_x23;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined8 uStack00000000000000d4;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000e4;
  undefined4 uStack00000000000000ec;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  long in_stack_00000108;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0x8d0));
  *(undefined1 *)(unaff_x23 + 0x112) = 1;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000014 = 0;
  FUN_037dbf9c();
  FUN_053023b4(&stack0x000000c0);
  uVar13 = FUN_05302e0c();
  uVar12 = FUN_037dbfdc();
  uVar10 = uStack00000000000000d0;
  uVar9 = uStack00000000000000c8;
  uVar8 = in_stack_000000c0;
  puVar6 = UnityEngine_ContactFilter2D_TypeInfo;
  if ((uVar13 & 1) == 0) {
    if ((DAT_06bbb0bf & 1) == 0) {
      FUN_02f08768(UnityEngine_ContactFilter2D_TypeInfo);
      DAT_06bbb0bf = 1;
    }
    lVar1 = **(long **)(*(long *)puVar6 + 0xb8) + 1;
    **(long **)(*(long *)puVar6 + 0xb8) = lVar1;
    lVar15 = *(long *)(unaff_x19 + 0x170);
    if (lVar15 != 0) {
      in_stack_00000100 = 0;
      in_stack_000000f8 = uStack00000000000000d4;
      uStack00000000000000f4 = uStack00000000000000d0;
      uStack00000000000000e4 = in_stack_000000c0;
      in_stack_00000108 = lVar1;
      uStack00000000000000ec = uStack00000000000000c8;
LAB_053030e4:
      in_stack_000000e0 = uVar12;
      (**(code **)(lVar15 + 0x18))
                (*(undefined8 *)(lVar15 + 0x40),&stack0x000000e0,*(undefined8 *)(lVar15 + 0x28));
      return;
    }
  }
  else if (unaff_x21 != 0) {
    uVar5 = CONCAT44(uStack00000000000000d0,uStack00000000000000cc);
    bVar3 = *(byte *)(unaff_x21 + 0xe0);
    bVar11 = *(char *)(unaff_x21 + 0xe1) != '\0';
    in_stack_00000068 = uStack00000000000000c8;
    in_stack_00000060 = in_stack_000000c0;
    uStack0000000000000074 = (undefined4)uStack00000000000000d4;
    in_stack_00000078 = SUB84(uStack00000000000000d4,4);
    uVar7 = in_stack_00000078;
    uStack000000000000006c = uStack00000000000000cc;
    in_stack_00000070 = uStack00000000000000d0;
    puVar2 = &stack0x00000080;
    if (bVar11) {
      puVar2 = &stack0x000000a0;
    }
    uVar14 = 2;
    if (bVar11) {
      uVar14 = 3;
    }
    puVar2[1] = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
    *puVar2 = uVar8;
    uVar4 = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
    *(undefined8 *)((long)puVar2 + 0x14) = uStack00000000000000d4;
    *(undefined8 *)((long)puVar2 + 0xc) = uVar5;
    puVar2 = &stack0x00000020;
    if (bVar3 != 0) {
      puVar2 = &stack0x00000040;
    }
    puVar2[1] = uVar4;
    *puVar2 = uVar8;
    *(undefined8 *)((long)puVar2 + 0x14) = uStack00000000000000d4;
    *(ulong *)((long)puVar2 + 0xc) = CONCAT44(uVar10,uStack00000000000000cc);
    uStack000000000000000c = uStack00000000000000cc;
    uStack0000000000000014 = uStack0000000000000074;
    if ((DAT_06bbb0bf & 1) == 0) {
      FUN_02f08768(UnityEngine_ContactFilter2D_TypeInfo);
      DAT_06bbb0bf = 1;
    }
    lVar1 = **(long **)(*(long *)UnityEngine_ContactFilter2D_TypeInfo + 0xb8) + 1;
    **(long **)(*(long *)UnityEngine_ContactFilter2D_TypeInfo + 0xb8) = lVar1;
    lVar15 = *(long *)(unaff_x19 + 0x170);
    if (lVar15 != 0) {
      in_stack_000000f8 = CONCAT44(uVar7,uStack0000000000000014);
      uStack00000000000000f4 = uVar10;
      in_stack_00000100 = CONCAT44((uint)bVar3 << 1,uVar14);
      uStack00000000000000e4 = uVar8;
      in_stack_00000108 = lVar1;
      uStack00000000000000ec = uVar9;
      goto LAB_053030e4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


