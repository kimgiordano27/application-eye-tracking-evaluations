/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$DestroyColliders
ENTRY_POINT: 04a68fb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_MRUtilityKit_EffectMesh__DestroyColliders(undefined8 param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong unaff_x23;
  long *plVar10;
  long unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  do {
    if ((bool)in_ZR) {
      uVar5 = *(undefined8 *)(unaff_x28 + 0x18);
      uVar12 = *(undefined8 *)(unaff_x28 + 0x10);
      uVar11 = *(undefined8 *)(unaff_x28 + 8);
      uVar14 = unaff_x20[1];
      uVar13 = *unaff_x20;
      plVar10 = *(long **)(unaff_x21 + 0x30);
      uVar6 = unaff_x20[2];
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02b76218(lVar3);
      }
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04a69048;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02b7654c(plVar10,lVar3,0);
LAB_04a69048:
      in_stack_00000040 = uVar13;
      in_stack_00000048 = uVar14;
      in_stack_00000050 = uVar6;
      in_stack_00000060 = uVar11;
      in_stack_00000068 = uVar12;
      in_stack_00000070 = uVar5;
      uVar8 = (*(code *)*puVar2)(plVar10,&stack0x00000060,&stack0x00000040,puVar2[1]);
      if ((uVar8 & 1) != 0) goto LAB_04a690a8;
      param_1 = *(undefined8 *)(unaff_x25 + 0x18);
    }
    uVar4 = (uint)param_1;
    if ((int)uVar4 <= unaff_w26) {
      thunk_FUN_02ba3594(PTR_DAT_0631cb60);
      uVar5 = thunk_FUN_02b79644();
      uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322b90);
      FUN_04d7b3f4(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5);
    }
    if (uVar4 <= (uint)unaff_x23) {
LAB_04a690cc:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    uVar1 = *(uint *)(unaff_x28 + 4);
    unaff_x23 = (ulong)uVar1;
    unaff_w26 = unaff_w26 + 1;
    if ((int)uVar1 < 0) {
      unaff_x23 = 0xffffffff;
LAB_04a690a8:
      return unaff_x23 & 0xffffffff;
    }
    if (uVar4 <= uVar1) goto LAB_04a690cc;
    unaff_x28 = unaff_x27 + unaff_x23 * 0x20;
    in_ZR = *(int *)(unaff_x27 + unaff_x23 * 0x20) == unaff_w22;
  } while( true );
}


