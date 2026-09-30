/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 02c228e4
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


ulong OVRPlugin__get_useDynamicFoveatedRendering(long param_1,undefined2 param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  int iVar2;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x28;
  
  while (*(undefined2 *)(param_1 + 0x20) = param_2, !(bool)in_ZR) {
    iVar2 = System_IO_BinaryReader__ReadDecimal();
    if ((long)iVar2 <= (long)unaff_x23) goto LAB_02c228f0;
    param_2 = FUN_02a59a84();
    if (unaff_x21 == 0) goto LAB_02c228f4;
    if ((ulong)*(uint *)(unaff_x21 + 0x18) <= unaff_x22 + unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    unaff_x23 = unaff_x23 + 1;
    param_1 = unaff_x21 + (unaff_x24 >> 0x1f);
    unaff_x24 = unaff_x24 + unaff_x25;
    in_ZR = unaff_x28 == unaff_x23;
  }
  unaff_x23 = unaff_x28 & 0xffffffff;
LAB_02c228f0:
  if (unaff_x20 != 0) {
    iVar2 = System_IO_BinaryReader__ReadDecimal();
    if ((int)unaff_x23 < iVar2) {
      uVar3 = unaff_x23 & 0xffffffff;
      do {
        FUN_02a59a84();
        FUN_02c21778();
        uVar1 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar1;
        iVar2 = System_IO_BinaryReader__ReadDecimal();
      } while ((int)uVar1 < iVar2);
    }
    return unaff_x23 & 0xffffffff;
  }
LAB_02c228f4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


