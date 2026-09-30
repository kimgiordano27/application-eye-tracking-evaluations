/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 05d7da48
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEyeRecommendedResolutionScale
               (undefined4 *param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
               undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  
  while( true ) {
    param_1[-3] = param_2;
    param_1[-2] = (int)param_3;
    param_1[-1] = (int)param_4;
    *param_1 = param_5;
    uVar3 = FUN_06be6b04(unaff_x23,0);
    FUN_05cf0ff4(&stack0x00000070,uVar3,0,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    uVar3 = FUN_06be6b04();
    FUN_05d05654(&stack0x00000070,uVar3,&stack0x00000090,0);
    in_stack_00000098 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    in_stack_00000090 = in_stack_00000070;
    *(ulong *)(unaff_x25 + 0x14) = CONCAT44(in_stack_00000088,uStack0000000000000084);
    *(ulong *)(unaff_x25 + 0xc) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
    if (*(long *)(unaff_x19 + 0x48) == 0) break;
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    uVar8 = *(undefined8 *)(unaff_x25 + 0x14);
    uVar3 = *(undefined8 *)(unaff_x25 + 0xc);
    uStack0000000000000084 = (undefined4)uVar8;
    in_stack_00000088 = (undefined4)((ulong)uVar8 >> 0x20);
    uStack000000000000007c = (undefined4)uVar3;
    uStack0000000000000080 = (undefined4)((ulong)uVar3 >> 0x20);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) {
LAB_05d7dbd8:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
    puVar6 = (undefined8 *)(lVar5 + unaff_x28);
    while( true ) {
      unaff_x29 = unaff_x29 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      *(undefined8 *)((long)puVar6 + 0x14) = uVar8;
      *(undefined8 *)((long)puVar6 + 0xc) = uVar3;
      puVar6[1] = uVar9;
      *puVar6 = in_stack_00000070;
      if (unaff_x29 == 0x1cc) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05d7dbd4;
      param_3 = in_stack_00000070;
      unaff_x23 = FUN_041e29a8(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,
                               *(undefined8 *)PTR_DAT_0727b658);
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)PTR_DAT_072794f0);
      }
      uVar1 = FUN_06bece64(unaff_x23,0,0);
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d7dbd4;
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x48);
      if ((uVar1 & 1) == 0) break;
      if (*(char *)(unaff_x24 + 0x761) == '\0') {
        thunk_FUN_032e1da0();
        *(undefined1 *)(unaff_x24 + 0x761) = 1;
      }
      if (lVar5 == 0) goto LAB_05d7dbd4;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_05d7dbd8;
      uVar3 = **(undefined8 **)(*unaff_x21 + 0xb8);
      *(undefined8 *)(lVar5 + unaff_x29 + -4) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
      *(undefined8 *)(lVar5 + unaff_x29 + -0xc) = uVar3;
      if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05d7dbd4;
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
      if (*(char *)(unaff_x26 + 0x829) == '\0') {
        thunk_FUN_032e1da0();
        cVar4 = *(char *)(unaff_x24 + 0x761);
        *(undefined1 *)(unaff_x26 + 0x829) = 1;
      }
      else {
        cVar4 = '\x01';
      }
      puVar7 = *(undefined4 **)(*unaff_x27 + 0xb8);
      uVar10 = *puVar7;
      uVar11 = puVar7[1];
      param_4 = (ulong)(uint)puVar7[2];
      if (cVar4 == '\0') {
        thunk_FUN_032e1da0();
        *(undefined1 *)(unaff_x24 + 0x761) = 1;
      }
      puVar7 = *(undefined4 **)(*unaff_x21 + 0xb8);
      param_5 = *puVar7;
      in_stack_00000070 = 0;
      uStack0000000000000078 = 0;
      uStack000000000000007c = 0;
      in_stack_00000088 = 0;
      uStack0000000000000080 = 0;
      uStack0000000000000084 = 0;
      FUN_06bf2b34(uVar10,uVar11,param_4,param_5,puVar7[1],puVar7[2],puVar7[3],&stack0x00000070,0);
      if (lVar5 == 0) goto LAB_05d7dbd4;
      uVar8 = CONCAT44(in_stack_00000088,uStack0000000000000084);
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_05d7dbd8;
      uVar3 = CONCAT44(uStack0000000000000080,uStack000000000000007c);
      uVar9 = CONCAT44(uStack000000000000007c,uStack0000000000000078);
      puVar6 = (undefined8 *)(lVar5 + unaff_x28);
    }
    if (((unaff_x23 == 0) || (lVar2 = FUN_06be6b04(unaff_x23,0), lVar2 == 0)) ||
       (param_2 = FUN_06bf4b0c(lVar2,0), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_05d7dbd8;
    param_1 = (undefined4 *)(lVar5 + unaff_x29);
  }
LAB_05d7dbd4:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


