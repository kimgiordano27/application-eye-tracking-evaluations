/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 02c22844
PROGRAM: sharks-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_foveation_hits_2;functionality_foveated_rendering
*/


int OVRPlugin__get_fixedFoveatedRenderingLevel(void)

{
  long lVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  ulong uVar6;
  int unaff_w24;
  long lVar7;
  ulong unaff_x28;
  uint unaff_w29;
  ulong in_stack_00000000;
  int iStack0000000000000008;
  byte bStack000000000000000c;
  
code_r0x02c22844:
  FUN_02a5ae94();
  do {
    if (unaff_w23 != 0) {
      FUN_02c225cc();
    }
    do {
      if ((int)unaff_x22 == 0xd) {
        FUN_02c22620();
        *(undefined8 *)(unaff_x19 + 0x100) = 0xffffffffffffffff;
        if (0 < iStack0000000000000008) {
          uVar6 = 0;
          lVar7 = (in_stack_00000000 >> 0x20) << 0x20;
          goto LAB_02c2289c;
        }
        iVar4 = 0;
        goto LAB_02c228fc;
      }
      uVar6 = FUN_02c22174();
      unaff_x22 = uVar6 >> 0x20;
      unaff_w23 = (uint)bStack000000000000000c | unaff_w29 & 1;
      unaff_w29 = (uint)(unaff_w23 != 0);
      iVar4 = (int)(uVar6 >> 0x20);
      if (iVar4 != 8) {
        if (iVar4 == 0xd) {
          if (unaff_x20 == 0) goto LAB_02c228f4;
          unaff_w24 = System_IO_BinaryReader__ReadDecimal();
        }
        else if (unaff_x20 == 0) goto LAB_02c228f4;
        goto code_r0x02c22844;
      }
      if (unaff_x20 == 0) goto LAB_02c228f4;
      iVar4 = System_IO_BinaryReader__ReadDecimal();
    } while (iVar4 <= unaff_w24);
    System_IO_BinaryReader__ReadDecimal();
    FUN_02a596b4();
  } while( true );
  while( true ) {
    uVar3 = FUN_02a59a84();
    if (unaff_x21 == 0) goto LAB_02c228f4;
    if ((ulong)*(uint *)(unaff_x21 + 0x18) <= (in_stack_00000000 >> 0x20) + uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    uVar6 = uVar6 + 1;
    lVar1 = lVar7 >> 0x1f;
    lVar7 = lVar7 + 0x100000000;
    *(undefined2 *)(unaff_x21 + lVar1 + 0x20) = uVar3;
    if (unaff_x28 == uVar6) break;
LAB_02c2289c:
    iVar4 = System_IO_BinaryReader__ReadDecimal();
    if ((long)iVar4 <= (long)uVar6) goto LAB_02c228f0;
  }
  uVar6 = unaff_x28 & 0xffffffff;
LAB_02c228f0:
  iVar4 = (int)uVar6;
  if (unaff_x20 != 0) {
LAB_02c228fc:
    iVar5 = System_IO_BinaryReader__ReadDecimal();
    iVar2 = iVar4;
    if (iVar4 < iVar5) {
      do {
        FUN_02a59a84();
        FUN_02c21778();
        iVar2 = iVar2 + 1;
        iVar5 = System_IO_BinaryReader__ReadDecimal();
      } while (iVar2 < iVar5);
    }
    return iVar4;
  }
LAB_02c228f4:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


