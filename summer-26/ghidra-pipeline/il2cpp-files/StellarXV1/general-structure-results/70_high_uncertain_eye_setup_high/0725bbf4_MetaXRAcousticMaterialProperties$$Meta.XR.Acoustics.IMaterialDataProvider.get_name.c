/*
FUNCTION_NAME: MetaXRAcousticMaterialProperties$$Meta.XR.Acoustics.IMaterialDataProvider.get_name
ENTRY_POINT: 0725bbf4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void MetaXRAcousticMaterialProperties__Meta_XR_Acoustics_IMaterialDataProvider_get_name
               (long param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int in_w8;
  long lVar6;
  uint uVar7;
  uint in_w9;
  long lVar8;
  uint uVar9;
  long unaff_x19;
  uint uVar10;
  ulong uVar11;
  uint unaff_w21;
  ulong unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  
code_r0x0725bbf4:
  iVar5 = in_w9 + in_w8;
  FUN_0725bca0(param_1,iVar5);
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = iVar5 + 1;
  }
  if (3 < iVar5) {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0725bc5c;
    FUN_07258ffc(*(long *)(unaff_x19 + 0x10),
                 unaff_w21 & (unaff_w24 << (ulong)((iVar2 >> 1) - 1U & 0x1f) ^ 0xffffffffU));
  }
  do {
    unaff_x22 = unaff_x22 + 1;
    if ((long)*(int *)(unaff_x19 + 0x40) <= (long)unaff_x22) {
      if (*(long *)(unaff_x19 + 0x18) != 0) {
        FUN_0725bca0(*(long *)(unaff_x19 + 0x18),0x100);
        return;
      }
      goto LAB_0725bc5c;
    }
    lVar6 = *(long *)(unaff_x19 + 0x38);
    if (lVar6 == 0) goto LAB_0725bc5c;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x22) {
LAB_0725bc60:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar8 = *(long *)(unaff_x19 + 0x30);
    if (lVar8 == 0) goto LAB_0725bc5c;
    if (*(uint *)(lVar8 + 0x18) <= unaff_x22) goto LAB_0725bc60;
    bVar3 = *(byte *)(lVar6 + unaff_x22 + 0x20);
    uVar11 = (ulong)bVar3;
    sVar4 = *(short *)(lVar8 + unaff_x22 * 2 + 0x20);
    uVar10 = (uint)bVar3;
    if (sVar4 != 0) break;
    if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_0725bc5c;
    FUN_0725bca0(*(long *)(unaff_x19 + 0x18),uVar11);
  } while( true );
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if (uVar10 == 0xff) {
    iVar5 = 0x11d;
  }
  else {
    iVar5 = 0x101;
    if (uVar10 < 8) {
      uVar9 = (uint)bVar3;
    }
    else {
      do {
        uVar9 = (uint)(uVar11 >> 1);
        uVar7 = (uint)uVar11;
        iVar5 = iVar5 + 4;
        uVar11 = uVar11 >> 1;
      } while (0xf < uVar7);
    }
    iVar5 = uVar9 + iVar5;
  }
  if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_0725bc5c;
  FUN_0725bca0(*(long *)(unaff_x19 + 0x18),iVar5);
  iVar2 = iVar5 + -0x102;
  if (-1 < iVar5 + -0x105) {
    iVar2 = iVar5 + -0x105;
  }
  if (0xffffffeb < iVar5 - 0x11dU) {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_0725bc5c;
    FUN_07258ffc(*(long *)(unaff_x19 + 0x10),
                 uVar10 & (unaff_w24 << (ulong)(iVar2 >> 2 & 0x1f) ^ 0xffffffffU));
  }
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  unaff_w21 = (int)sVar4 - 1;
  in_w8 = 0;
  uVar10 = unaff_w21;
  in_w9 = unaff_w21;
  if (4 < sVar4) {
    do {
      in_w9 = uVar10 >> 1;
      in_w8 = in_w8 + 2;
      bVar1 = 7 < uVar10;
      uVar10 = in_w9;
    } while (bVar1);
  }
  param_1 = *(long *)(unaff_x19 + 0x20);
  if (param_1 == 0) {
LAB_0725bc5c:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  goto code_r0x0725bbf4;
}


