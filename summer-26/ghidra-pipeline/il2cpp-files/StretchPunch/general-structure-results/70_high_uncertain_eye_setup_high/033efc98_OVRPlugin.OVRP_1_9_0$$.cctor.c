/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 033efc98
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_9_0___cctor(void)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *unaff_x19;
  uint *unaff_x20;
  int unaff_w22;
  ulong uVar10;
  uint uVar11;
  ulong unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  uint uStack0000000000000028;
  uint uStack000000000000002c;
  uint in_stack_00000030;
  long in_stack_00000048;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
  ;
  bVar4 = false;
  uVar11 = (uint)unaff_x23;
  if (unaff_w26 == 0) goto LAB_033efcdc;
LAB_033efca8:
  uVar10 = _uStack0000000000000028;
  if (unaff_w22 != 0x1c) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033f2328(&stack0x00000028,unaff_w22);
    uVar10 = _uStack0000000000000028;
    if (uVar5 != 0) {
      bVar4 = true;
      do {
        lVar7 = *unaff_x25;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar7 = *unaff_x25;
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        uVar10 = (ulong)*(uint *)(lVar7 + (long)(int)uVar5 * 4 + 0x20);
        in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + uVar5;
        iVar6 = FUN_033f1490(&stack0x00000028,uVar10);
        if (iVar6 != 0) {
          thunk_FUN_01dd295c(StringLiteral_1150);
          uVar8 = thunk_FUN_01de27b8();
          uVar9 = thunk_FUN_01dd295c(StringLiteral_8348);
          FUN_03390704(uVar8,uVar9,0);
          uVar9 = thunk_FUN_01dd295c(StringLiteral_9345);
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar8,uVar9);
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        iVar6 = in_stack_00000020._4_4_;
        uVar10 = uVar10 * unaff_w26;
        uVar1 = 0;
        if (unaff_x23 != 0) {
          uVar1 = uVar10 / unaff_x23;
        }
        unaff_w26 = (int)uVar10 - uVar11 * (int)uVar1;
        bVar3 = CARRY8(_uStack0000000000000028,uVar1 & 0xffffffff);
        _uStack0000000000000028 = _uStack0000000000000028 + (uVar1 & 0xffffffff);
        if ((bVar3) &&
           (bVar3 = 0xfffffffe < in_stack_00000030, in_stack_00000030 = in_stack_00000030 + 1, bVar3
           )) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          unaff_w22 = FUN_033f21d0(&stack0x00000028,iVar6,unaff_w26 != 0);
          in_stack_00000020._4_4_ = unaff_w22;
          uVar10 = _uStack0000000000000028;
LAB_033efe58:
          if (bVar4) goto FUN_033efe84;
          _uStack0000000000000028 = uVar10;
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          *(ulong *)(unaff_x19 + 2) = uVar10;
          unaff_x19[1] = in_stack_00000030;
          goto LAB_033efed0;
        }
        unaff_w22 = in_stack_00000020._4_4_;
        if (unaff_w26 != 0) goto LAB_033efca8;
LAB_033efcdc:
        uVar10 = _uStack0000000000000028;
        if (-1 < unaff_w22) goto LAB_033efe58;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar5 = FUN_033946d4(9,-unaff_w22,0);
      } while( true );
    }
  }
  iVar6 = in_stack_00000020._4_4_;
  uVar5 = unaff_w26 << 1;
  if ((((uVar5 < unaff_w26) || ((uVar11 <= uVar5 && ((uVar11 < uVar5 || ((uVar10 & 1) != 0)))))) &&
      (bVar4 = uVar10 == 0xffffffffffffffff, _uStack0000000000000028 = uVar10 + 1,
      uVar10 = _uStack0000000000000028, bVar4)) &&
     (bVar4 = in_stack_00000030 == 0xffffffff, in_stack_00000030 = in_stack_00000030 + 1, bVar4)) {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    in_stack_00000020._4_4_ = FUN_033f21d0(&stack0x00000028,iVar6,1);
    uVar10 = _uStack0000000000000028;
  }
FUN_033efe84:
  uVar5 = in_stack_00000030;
  uStack000000000000002c = (uint)(uVar10 >> 0x20);
  uVar11 = uStack000000000000002c;
  uStack0000000000000028 = (uint)uVar10;
  in_stack_00000008._4_4_ = uStack0000000000000028;
  _uStack0000000000000028 = uVar10;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033ff354((long)&stack0x00000008 + 4);
  unaff_x19[2] = in_stack_00000008._4_4_;
  unaff_x19[3] = uVar11;
  unaff_x19[1] = uVar5;
  unaff_w22 = in_stack_00000020._4_4_;
LAB_033efed0:
  *unaff_x19 = (*unaff_x20 ^ *unaff_x19) & 0x80000000 | unaff_w22 << 0x10;
  if (*(long *)(unaff_x24 + 0x28) != in_stack_00000048) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


