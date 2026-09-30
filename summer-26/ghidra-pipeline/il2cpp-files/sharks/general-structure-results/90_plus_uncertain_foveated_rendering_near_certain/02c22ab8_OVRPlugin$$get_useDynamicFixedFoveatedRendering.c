/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 02c22ab8
PROGRAM: sharks-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFixedFoveatedRendering(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  uint unaff_w25;
  uint unaff_w26;
  uint unaff_w27;
  ulong unaff_x28;
  undefined8 in_stack_00000008;
  
code_r0x02c22ab8:
  if (unaff_x21 != (long *)0x0) {
    iVar2 = System_IO_BinaryReader__ReadDecimal();
    if (iVar2 == 0) {
      return 0;
    }
    if (((int)unaff_x28 == 0xd) && ((unaff_x20 & 1) != 0)) goto LAB_02c22ae8;
    do {
      if ((int)unaff_x28 == 8) {
        iVar2 = System_IO_BinaryReader__ReadDecimal();
        if (iVar2 < 1) goto LAB_02c22a7c;
        System_IO_BinaryReader__ReadDecimal();
        FUN_02a596b4();
      }
      else {
        FUN_02a5ae94();
      }
      bVar1 = false;
      while( true ) {
        if (unaff_w27 != 0) {
          FUN_02c225cc();
        }
        if (bVar1) {
          FUN_02c22620();
          *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
          if (unaff_x21 != (long *)0x0) {
            uVar4 = (**(code **)(*unaff_x21 + 0x168))();
            return uVar4;
          }
          goto LAB_02c22bb4;
        }
LAB_02c22a7c:
        uVar3 = FUN_02c22174();
        unaff_w27 = (uint)in_stack_00000008._4_1_ | unaff_w26 & 1;
        unaff_w26 = (uint)(unaff_w27 != 0);
        unaff_x28 = uVar3 >> 0x20;
        if ((unaff_w25 == ((uint)uVar3 & 0xffff)) && ((uVar3 & 0xffff) != 0)) goto code_r0x02c22ab8;
        if (((int)(uVar3 >> 0x20) != 0xd) || ((unaff_x20 & 1) == 0)) break;
LAB_02c22ae8:
        bVar1 = true;
      }
    } while (unaff_x21 != (long *)0x0);
  }
LAB_02c22bb4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


