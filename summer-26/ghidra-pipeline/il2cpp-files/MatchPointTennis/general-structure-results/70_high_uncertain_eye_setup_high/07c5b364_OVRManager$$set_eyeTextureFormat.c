/*
FUNCTION_NAME: OVRManager$$set_eyeTextureFormat
ENTRY_POINT: 07c5b364
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeTextureFormat(undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  undefined1 in_w8;
  uint *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar3;
  long unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar14;
  ulong unaff_d8;
  float fVar15;
  ulong unaff_d9;
  float fVar16;
  ulong unaff_d10;
  ulong uVar13;
  
  *(undefined1 *)(unaff_x22 + 0x631) = in_w8;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar1 = FUN_0952c404(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (DAT_0a51bf45 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1eb60);
      DAT_0a51bf45 = '\x01';
    }
    puVar2 = *(uint **)(*(long *)PTR_DAT_09f1eb60 + 0xb8);
    uVar1 = (ulong)*puVar2;
    uVar9 = (ulong)puVar2[1];
    uVar11 = (ulong)puVar2[2];
    uVar13 = (ulong)puVar2[3];
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
    unaff_x19[2] = 0;
LAB_07c5b48c:
    FUN_09537b20(unaff_d8,unaff_d10,unaff_d9,uVar1,uVar9,uVar11,uVar13);
    return;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    fVar4 = (float)FUN_0953a4a4(*(long *)(unaff_x20 + 0x30),0);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      fVar12 = param_3;
      fVar7 = param_2;
      fVar5 = (float)FUN_0953a5a4(*(long *)(unaff_x20 + 0x30),0);
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        fVar10 = fVar12;
        fVar8 = fVar7;
        fVar6 = (float)FUN_0953a6a4(*(long *)(unaff_x20 + 0x30),0);
        if (*(long *)(unaff_x20 + 0x30) != 0) {
          fVar14 = (float)unaff_d8;
          fVar16 = (float)unaff_d10;
          fVar15 = (float)unaff_d9;
          uVar11 = (ulong)(uint)(fVar15 * fVar10);
          uVar9 = (ulong)(uint)(fVar15 * fVar8);
          fVar12 = fVar14 * param_3 + fVar16 * fVar12;
          uVar13 = (ulong)(uint)fVar12;
          unaff_d9 = (ulong)(uint)(fVar12 + fVar15 * fVar10);
          unaff_d10 = (ulong)(uint)(fVar14 * param_2 + fVar16 * fVar7 + fVar15 * fVar8);
          unaff_d8 = (ulong)(uint)(fVar14 * fVar4 + fVar16 * fVar5 + fVar15 * fVar6);
          uVar1 = FUN_09537fe0(*(long *)(unaff_x20 + 0x30),0);
          unaff_x19[1] = 0;
          unaff_x19[2] = 0;
          *unaff_x19 = 0;
          *(undefined4 *)(unaff_x19 + 3) = 0;
          goto LAB_07c5b48c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


