/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureSize
ENTRY_POINT: 060343e4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureSize(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long unaff_x21;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  if ((*(byte *)(unaff_x21 + 0xc16) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f2ea8);
    *(undefined1 *)(unaff_x21 + 0xc16) = 1;
  }
  puVar2 = PTR_DAT_075f2ea8;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  in_stack_00000020 = 0;
  _fStack0000000000000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  uStack000000000000000c = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000014 = 0;
  uVar6 = 1L << (param_2 & 0x3f);
  if ((*(ulong *)(param_1 + 0x40) & uVar6) == 0) {
    return;
  }
  lVar3 = *(long *)PTR_DAT_075f2ea8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
LAB_06034578:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar4 = (uint)param_2;
  if (uVar4 < *(uint *)(lVar3 + 0x18)) {
    lVar5 = (long)(int)uVar4;
    iVar1 = *(int *)(lVar3 + lVar5 * 4 + 0x20);
    if (iVar1 == -1) {
      uStack0000000000000000 = *(undefined8 *)(param_1 + 0x20);
      *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & (uVar6 ^ 0xffffffffffffffff);
      uStack0000000000000014 = (undefined4)*(undefined8 *)(param_1 + 0x34);
      uStack0000000000000018 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    }
    else {
      FUN_060343d0(param_1,iVar1);
      *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & (uVar6 ^ 0xffffffffffffffff);
      FUN_06034378(param_1,iVar1);
    }
    in_stack_00000048 = uStack0000000000000008;
    in_stack_00000040 = uStack0000000000000000;
    uStack0000000000000054 = uStack0000000000000014;
    in_stack_00000058 = uStack0000000000000018;
    uStack000000000000004c = uStack000000000000000c;
    in_stack_00000050 = uStack0000000000000010;
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) goto LAB_06034578;
    if (uVar4 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + lVar5 * 0x1c;
      in_stack_00000038 = *(undefined4 *)(lVar3 + 0x38);
      in_stack_00000030 = *(undefined8 *)(lVar3 + 0x30);
      fVar7 = *(float *)(param_1 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar3 + 0x28);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) * fVar7,
                    (float)*(undefined8 *)(lVar3 + 0x20) * fVar7);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar7);
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) goto LAB_06034578;
      if (uVar4 < *(uint *)(lVar3 + 0x18)) {
        FUN_05f975fc(&stack0x00000040,&stack0x00000020,lVar3 + lVar5 * 0x1c + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


