/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 02c22710
PROGRAM: sharks-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_foveation_hits_2;functionality_foveated_rendering
*/


int OVRPlugin__set_foveatedRenderingLevel(ulong param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  long *plVar8;
  int extraout_var;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w23;
  ulong uVar9;
  ulong uVar10;
  int unaff_w24;
  long lVar11;
  long *unaff_x26;
  uint unaff_w27;
  uint uStack0000000000000004;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((bool)in_ZR) {
      if (unaff_x20 == 0) goto LAB_02c228f4;
      iVar5 = System_IO_BinaryReader__ReadDecimal();
      if (unaff_w24 < iVar5) {
        System_IO_BinaryReader__ReadDecimal();
        FUN_02a596b4();
      }
    }
    else {
      if ((int)param_1 == 0xd) {
        if (unaff_x20 == 0) goto LAB_02c228f4;
        unaff_w24 = System_IO_BinaryReader__ReadDecimal();
      }
      else if (unaff_x20 == 0) goto LAB_02c228f4;
      FUN_02a5ae94();
    }
    plVar8 = (long *)FUN_02c219a4();
    if (plVar8 == (long *)0x0) break;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*unaff_x26 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    puVar7 = (ulong *)thunk_FUN_01861d10();
    param_1 = *puVar7 >> 0x20;
    in_ZR = (int)(*puVar7 >> 0x20) == 8;
  }
  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0x18);
  uStack0000000000000004 = unaff_w23;
  bVar3 = false;
  do {
    FUN_02c22174();
    if (extraout_var == 8) {
      if (unaff_x20 == 0) goto LAB_02c228f4;
      iVar5 = System_IO_BinaryReader__ReadDecimal();
      if (unaff_w24 < iVar5) {
        System_IO_BinaryReader__ReadDecimal();
        FUN_02a596b4();
        goto joined_r0x02c22830;
      }
    }
    else {
      if (extraout_var == 0xd) {
        if (unaff_x20 == 0) goto LAB_02c228f4;
        unaff_w24 = System_IO_BinaryReader__ReadDecimal();
      }
      else if (unaff_x20 == 0) goto LAB_02c228f4;
      FUN_02a5ae94();
joined_r0x02c22830:
      if (in_stack_00000008._4_1_ != '\0' || bVar3) {
        FUN_02c225cc();
      }
    }
    bVar3 = in_stack_00000008._4_1_ != '\0' || bVar3;
  } while (extraout_var != 0xd);
  FUN_02c22620();
  *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
  if ((int)unaff_w27 < 1) {
    iVar5 = 0;
  }
  else {
    uVar9 = 0;
    lVar11 = (ulong)uStack0000000000000004 << 0x20;
    do {
      iVar5 = System_IO_BinaryReader__ReadDecimal();
      uVar10 = uVar9;
      if ((long)iVar5 <= (long)uVar9) break;
      uVar4 = FUN_02a59a84();
      if (unaff_x21 == 0) goto LAB_02c228f4;
      if ((ulong)*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000004 + uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      uVar9 = uVar9 + 1;
      lVar1 = lVar11 >> 0x1f;
      lVar11 = lVar11 + 0x100000000;
      *(undefined2 *)(unaff_x21 + lVar1 + 0x20) = uVar4;
      uVar10 = (ulong)unaff_w27;
    } while (unaff_w27 != uVar9);
    iVar5 = (int)uVar10;
    if (unaff_x20 == 0) {
LAB_02c228f4:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  iVar6 = System_IO_BinaryReader__ReadDecimal();
  iVar2 = iVar5;
  if (iVar5 < iVar6) {
    do {
      FUN_02a59a84();
      FUN_02c21778();
      iVar2 = iVar2 + 1;
      iVar6 = System_IO_BinaryReader__ReadDecimal();
    } while (iVar2 < iVar6);
  }
  return iVar5;
}


