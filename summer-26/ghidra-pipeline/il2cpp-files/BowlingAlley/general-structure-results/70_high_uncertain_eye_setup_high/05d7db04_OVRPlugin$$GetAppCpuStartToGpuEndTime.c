/*
FUNCTION_NAME: OVRPlugin$$GetAppCpuStartToGpuEndTime
ENTRY_POINT: 05d7db04
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppCpuStartToGpuEndTime(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint in_w8;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long lVar7;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
code_r0x05d7db04:
  *(undefined1 *)(unaff_x22 + 0x829) = 1;
  do {
    puVar6 = *(undefined4 **)(*unaff_x27 + 0xb8);
    uVar12 = *puVar6;
    uVar13 = puVar6[1];
    uVar10 = (ulong)(uint)puVar6[2];
    if (in_w8 == 0) {
      thunk_FUN_032e1da0();
      *(undefined1 *)(unaff_x24 + 0x761) = 1;
    }
    puVar6 = *(undefined4 **)(*unaff_x21 + 0xb8);
    uVar11 = *puVar6;
    in_stack_00000070 = 0;
    uStack0000000000000078 = 0;
    uStack000000000000007c = 0;
    in_stack_00000088 = 0;
    uStack0000000000000080 = 0;
    uStack0000000000000084 = 0;
    FUN_06bf2b34(uVar12,uVar13,uVar10,uVar11,puVar6[1],puVar6[2],puVar6[3],&stack0x00000070,0);
    if (unaff_x23 == 0) {
LAB_05d7dbd4:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar4 = CONCAT44(in_stack_00000088,uStack0000000000000084);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_x20) {
LAB_05d7dbd8:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar8 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar5 = (undefined8 *)(unaff_x23 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar5 + 0x14) = uVar4;
      *(undefined8 *)((long)puVar5 + 0xc) = uVar8;
      puVar5[1] = uVar9;
      *puVar5 = in_stack_00000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d7dbd4;
      uVar4 = in_stack_00000070;
      lVar1 = FUN_041e29a8(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_0727b658);
      uVar12 = (undefined4)uVar4;
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
      }
      uVar2 = FUN_06bece64(lVar1,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d7dbd4;
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar2 & 1) != 0) break;
      if (((lVar1 == 0) || (lVar3 = FUN_06be6b04(lVar1,0), lVar3 == 0)) ||
         (uVar13 = FUN_06bf4b0c(lVar3,0), lVar7 == 0)) goto LAB_05d7dbd4;
      if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_05d7dbd8;
      puVar6 = (undefined4 *)(lVar7 + unaff_x29);
      puVar6[-3] = uVar13;
      puVar6[-2] = uVar12;
      puVar6[-1] = (int)uVar10;
      *puVar6 = uVar11;
      uVar4 = FUN_06be6b04(lVar1,0);
      FUN_05cf0ff4(&stack0x00000070,uVar4,0,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar4 = FUN_06be6b04();
      FUN_05d05654(&stack0x00000070,uVar4,&stack0x00000090,0);
      in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      in_stack_00000090 = in_stack_00000070;
      *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
      *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d7dbd4;
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      uVar4 = *(undefined8 *)(unaff_x25 + 0x14);
      uVar8 = *(undefined8 *)(unaff_x25 + 0xc);
      uStack0000000000000084 = (undefined4)uVar4;
      in_stack_00000088 = (undefined4)((ulong)uVar4 >> 0x20);
      uStack000000000000007c = (undefined4)uVar8;
      uStack0000000000000080 = (undefined4)((ulong)uVar8 >> 0x20);
      if (lVar1 == 0) goto LAB_05d7dbd4;
      if (*(uint *)(lVar1 + 0x18) <= unaff_x20) goto LAB_05d7dbd8;
      uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar5 = (undefined8 *)(lVar1 + unaff_x28);
    }
    if (*(char *)(unaff_x24 + 0x761) == '\0') {
      thunk_FUN_032e1da0();
      *(undefined1 *)(unaff_x24 + 0x761) = 1;
    }
    if (lVar7 == 0) goto LAB_05d7dbd4;
    if (*(uint *)(lVar7 + 0x18) <= unaff_x20) goto LAB_05d7dbd8;
    uVar4 = **(undefined8 **)(*unaff_x21 + 0xb8);
    *(undefined8 *)(lVar7 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    *(undefined8 *)(lVar7 + unaff_x29 + -0xc) = uVar4;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d7dbd4;
    unaff_x23 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    if (*(char *)(unaff_x22 + 0x829) == '\0') break;
    in_w8 = 1;
  } while( true );
  thunk_FUN_032e1da0();
  in_w8 = (uint)*(byte *)(unaff_x24 + 0x761);
  goto code_r0x05d7db04;
}


