/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 02fc7970
PROGRAM: vrfs-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRManager__GetFixedFoveatedRenderingSupported(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar8;
  undefined4 uStack000000000000000c;
  
  uVar1 = *(uint *)(unaff_x22 + 8);
  FUN_031dd848(param_1);
  uStack000000000000000c = 0;
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0xa8);
  if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
    lVar6 = FUN_015c2790();
  }
  lVar6 = thunk_FUN_015d01b0(lVar6,&stack0x0000000c);
  if (((lVar6 == 0) && ((unaff_x26 & 1) != 0)) && (0 < (int)uVar1)) {
    if (unaff_x23 == 0) goto LAB_02fc7ac4;
    uVar7 = (ulong)*(uint *)(unaff_x23 + 0x18);
    uVar8 = 0;
    lVar6 = unaff_x23 + 0x28;
    do {
      if (uVar7 <= uVar8) goto LAB_02fc7ac0;
      if (-1 < *(int *)(lVar6 + -8)) {
        uVar5 = FUN_031d7008(lVar6,*(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x25 + 0x20) + 0xc0) + 0x130));
        uVar7 = (ulong)*(uint *)(unaff_x23 + 0x18);
        if (uVar7 <= uVar8) goto LAB_02fc7ac0;
        *(uint *)(lVar6 + -8) = uVar5 & 0x7fffffff;
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar1 != uVar8);
  }
  if (0 < (int)uVar1) {
    if (unaff_x23 == 0) {
LAB_02fc7ac4:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    uVar5 = *(uint *)(unaff_x23 + 0x18);
    uVar8 = 0;
    do {
      if (uVar5 <= uVar8) {
LAB_02fc7ac0:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      iVar2 = *(int *)(unaff_x23 + uVar8 * 0x10 + 0x20);
      if (-1 < iVar2) {
        if (unaff_x21 == 0) goto LAB_02fc7ac4;
        iVar4 = 0;
        if (unaff_w20 != 0) {
          iVar4 = iVar2 / unaff_w20;
        }
        uVar3 = iVar2 - iVar4 * unaff_w20;
        if (*(uint *)(unaff_x21 + 0x18) <= uVar3) goto LAB_02fc7ac0;
        lVar6 = unaff_x21 + (long)(int)uVar3 * 4;
        *(int *)(unaff_x23 + uVar8 * 0x10 + 0x24) = *(int *)(lVar6 + 0x20) + -1;
        *(int *)(lVar6 + 0x20) = (int)uVar8 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  *(long *)(unaff_x19 + 0x10) = unaff_x21;
  thunk_FUN_01656ef8((long *)(unaff_x19 + 0x10));
  *(long *)(unaff_x19 + 0x18) = unaff_x23;
  thunk_FUN_01656ef8();
  return;
}


