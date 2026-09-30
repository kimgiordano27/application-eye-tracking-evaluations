/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 036404b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03640aa0) */
/* WARNING: Removing unreachable block (ram,0x03640aa4) */
/* WARNING: Removing unreachable block (ram,0x036406b4) */
/* WARNING: Removing unreachable block (ram,0x03640720) */
/* WARNING: Removing unreachable block (ram,0x03640730) */
/* WARNING: Removing unreachable block (ram,0x0364074c) */
/* WARNING: Removing unreachable block (ram,0x03640754) */
/* WARNING: Removing unreachable block (ram,0x03640810) */
/* WARNING: Removing unreachable block (ram,0x03640760) */
/* WARNING: Removing unreachable block (ram,0x0364076c) */
/* WARNING: Removing unreachable block (ram,0x0364081c) */
/* WARNING: Removing unreachable block (ram,0x03640ac0) */
/* WARNING: Removing unreachable block (ram,0x03640830) */
/* WARNING: Removing unreachable block (ram,0x03640844) */
/* WARNING: Removing unreachable block (ram,0x03640854) */
/* WARNING: Removing unreachable block (ram,0x0364085c) */
/* WARNING: Removing unreachable block (ram,0x03640884) */
/* WARNING: Removing unreachable block (ram,0x03640868) */
/* WARNING: Removing unreachable block (ram,0x03640874) */
/* WARNING: Removing unreachable block (ram,0x03640890) */
/* WARNING: Removing unreachable block (ram,0x03640a1c) */
/* WARNING: Removing unreachable block (ram,0x03640a28) */
/* WARNING: Removing unreachable block (ram,0x03640a40) */
/* WARNING: Removing unreachable block (ram,0x03640a48) */
/* WARNING: Removing unreachable block (ram,0x03640a70) */
/* WARNING: Removing unreachable block (ram,0x03640a54) */
/* WARNING: Removing unreachable block (ram,0x03640a60) */
/* WARNING: Removing unreachable block (ram,0x03640a7c) */
/* WARNING: Removing unreachable block (ram,0x03640a88) */
/* WARNING: Removing unreachable block (ram,0x03640a8c) */
/* WARNING: Removing unreachable block (ram,0x036408a0) */
/* WARNING: Removing unreachable block (ram,0x036408b0) */
/* WARNING: Removing unreachable block (ram,0x036408b8) */
/* WARNING: Removing unreachable block (ram,0x036408e0) */
/* WARNING: Removing unreachable block (ram,0x036408c4) */
/* WARNING: Removing unreachable block (ram,0x036408d0) */
/* WARNING: Removing unreachable block (ram,0x036408ec) */
/* WARNING: Removing unreachable block (ram,0x03640980) */
/* WARNING: Removing unreachable block (ram,0x03640acc) */
/* WARNING: Removing unreachable block (ram,0x036409d8) */
/* WARNING: Removing unreachable block (ram,0x036409f0) */
/* WARNING: Removing unreachable block (ram,0x036409f4) */
/* WARNING: Removing unreachable block (ram,0x03640920) */
/* WARNING: Removing unreachable block (ram,0x03640aac) */
/* WARNING: Removing unreachable block (ram,0x03640944) */
/* WARNING: Removing unreachable block (ram,0x0364095c) */
/* WARNING: Removing unreachable block (ram,0x03640960) */
/* WARNING: Removing unreachable block (ram,0x036406bc) */
/* WARNING: Removing unreachable block (ram,0x036406c0) */
/* WARNING: Removing unreachable block (ram,0x03640700) */
/* WARNING: Removing unreachable block (ram,0x03640714) */
/* WARNING: Removing unreachable block (ram,0x03640ac4) */
/* WARNING: Removing unreachable block (ram,0x036406a8) */
/* WARNING: Removing unreachable block (ram,0x03640ab8) */

void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
               (undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar11;
  
  plVar4 = (long *)(*(code *)*param_1)();
  puVar3 = PTR_DAT_065dec70;
  puVar2 = PTR_DAT_065c8d08;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03640520;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar2,0);
LAB_03640520:
    uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_0364069c;
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03640674;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0364057c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)puVar3,0);
LAB_0364057c:
    (*(code *)*puVar5)(unaff_x29 + -0x40,plVar4,puVar5[1]);
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x30);
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30))
              (unaff_x29 + -0x40,unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x29 + -0x38);
    *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0x40);
    *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0x30);
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x40);
    uVar6 = *puVar5;
    *(undefined8 **)(unaff_x29 + -0x18) = unaff_x24;
    (*(code *)puVar5[2])(uVar6,puVar5,unaff_x29 + -0xa0,unaff_x29 + -0x18);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar5 = unaff_x24;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x10) + 0x28)) {
      puVar5 = (undefined8 *)*unaff_x24;
    }
    puVar7 = *(undefined8 **)(lVar8 + 0x50);
    uVar6 = *puVar7;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar5;
    (*(code *)puVar7[2])(uVar6);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03640690;
    }
  }
LAB_03640674:
  puVar5 = (undefined8 *)FUN_02ce0a7c(plVar4,*(long *)PTR_DAT_065c8a48,0);
LAB_03640690:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_0364069c:
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x58);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar6 = *puVar5;
  *(undefined1 *)(unaff_x29 + -0x1c) = 1;
  *(undefined1 *)(unaff_x29 + -0x20) = uVar1;
  *(long *)(unaff_x29 + -0x40) = unaff_x22;
  *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x1c;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x20;
  (*(code *)puVar5[2])(uVar6,puVar5,lVar8,unaff_x29 + -0x40,unaff_x29 + -0xd8);
  uVar11 = *(undefined8 *)(unaff_x29 + -0xd0);
  uVar6 = *(undefined8 *)(unaff_x29 + -0xd8);
  puVar5 = *(undefined8 **)(unaff_x29 + -0xe0);
  puVar5[2] = *(undefined8 *)(unaff_x29 + -200);
  puVar5[1] = uVar11;
  *puVar5 = uVar6;
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


