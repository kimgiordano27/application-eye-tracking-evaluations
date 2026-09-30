/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 02c22890
PROGRAM: sharks-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


ulong OVRPlugin__set_fixedFoveatedRenderingLevel(ulong param_1)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  long unaff_x20;
  long unaff_x21;
  ulong uVar5;
  ulong unaff_x23;
  long lVar6;
  ulong unaff_x28;
  
  lVar6 = param_1 << 0x20;
  do {
    iVar4 = System_IO_BinaryReader__ReadDecimal();
    if ((long)iVar4 <= (long)unaff_x23) goto LAB_02c228f0;
    uVar3 = FUN_02a59a84();
    if (unaff_x21 == 0) goto LAB_02c228f4;
    if ((ulong)*(uint *)(unaff_x21 + 0x18) <= (param_1 & 0xffffffff) + unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    unaff_x23 = unaff_x23 + 1;
    lVar1 = lVar6 >> 0x1f;
    lVar6 = lVar6 + 0x100000000;
    *(undefined2 *)(unaff_x21 + lVar1 + 0x20) = uVar3;
  } while (unaff_x28 != unaff_x23);
  unaff_x23 = unaff_x28 & 0xffffffff;
LAB_02c228f0:
  if (unaff_x20 != 0) {
    iVar4 = System_IO_BinaryReader__ReadDecimal();
    if ((int)unaff_x23 < iVar4) {
      uVar5 = unaff_x23 & 0xffffffff;
      do {
        FUN_02a59a84();
        FUN_02c21778();
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar2;
        iVar4 = System_IO_BinaryReader__ReadDecimal();
      } while ((int)uVar2 < iVar4);
    }
    return unaff_x23 & 0xffffffff;
  }
LAB_02c228f4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


