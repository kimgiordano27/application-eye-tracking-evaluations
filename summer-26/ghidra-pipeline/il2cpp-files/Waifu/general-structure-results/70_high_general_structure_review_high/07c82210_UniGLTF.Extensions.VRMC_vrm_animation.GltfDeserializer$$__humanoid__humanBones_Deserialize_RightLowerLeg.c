/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_vrm_animation.GltfDeserializer$$__humanoid__humanBones_Deserialize_RightLowerLeg
ENTRY_POINT: 07c82210
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_8;telemetry_or_network_hits_4
*/


long UniGLTF_Extensions_VRMC_vrm_animation_GltfDeserializer____humanoid__humanBones_Deserialize_RightLowerLeg
               (void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x28;
  long in_stack_00000008;
  
  do {
    lVar2 = FUN_04ab0b48();
    if (lVar2 == 0) goto LAB_07c824f0;
    pcVar6 = *(code **)(unaff_x25 + 400);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = (code *)FUN_033d1b68("UnityEngine.Component::get_gameObject()");
      *(code **)(unaff_x25 + 400) = pcVar6;
    }
    uVar3 = (*pcVar6)(lVar2);
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(unaff_x28 + 0x570)) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07c8229c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0338f71c();
LAB_07c8229c:
    uVar5 = (*(code *)*puVar4)();
    if (*(int *)(*(long *)(unaff_x19 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870(*(long *)(unaff_x19 + 0x7d8));
    }
    uVar8 = FUN_07a119fc(uVar3,uVar5,0);
    if ((uVar8 & 1) == 0) {
      pcVar6 = *(code **)(unaff_x24 + 0x170);
      if (pcVar6 == (code *)0x0) {
        pcVar6 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_isActiveAndEnabled()");
        *(code **)(unaff_x24 + 0x170) = pcVar6;
      }
      uVar8 = (*pcVar6)(lVar2);
      if ((uVar8 & 1) != 0) {
        lVar7 = *unaff_x21;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_07c823c4;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_07c823ac;
      }
    }
    unaff_w23 = unaff_w23 + 1;
  } while (unaff_w23 < *(int *)(unaff_x20 + 0x18));
  lVar2 = 0;
  goto LAB_07c82324;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_07c823ac:
    if (*(long *)(piVar9 + -2) == *(long *)(unaff_x28 + 0x570)) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_07c823e0;
    }
  }
LAB_07c823c4:
  puVar4 = (undefined8 *)FUN_0338f71c();
LAB_07c823e0:
  lVar7 = (*(code *)*puVar4)();
  if ((lVar7 == 0) || (FUN_03fa3170(lVar7,0,in_stack_00000008,DAT_0840d080), in_stack_00000008 == 0)
     ) {
LAB_07c824f0:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  iVar1 = *(int *)(in_stack_00000008 + 0x18);
  do {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) goto LAB_07c82324;
      lVar7 = FUN_04ab0b48(in_stack_00000008,iVar1,DAT_083f0118);
      if (lVar7 == 0) goto LAB_07c824f0;
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar3 = (*DAT_086ef188)(lVar7);
      if (DAT_086ef188 == (code *)0x0) {
        DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
      }
      uVar5 = (*DAT_086ef188)(lVar2);
      uVar8 = FUN_07c82a58(uVar3,uVar5);
    } while ((uVar8 & 1) != 0);
    lVar7 = FUN_04ab0b48(in_stack_00000008,iVar1,DAT_083f0118);
    if (lVar7 == 0) goto LAB_07c824f0;
    if (DAT_086f3b20 == (code *)0x0) {
      DAT_086f3b20 = (code *)FUN_033d1b68("UnityEngine.Canvas::get_overrideSorting()");
    }
    uVar8 = (*DAT_086f3b20)(lVar7);
  } while ((uVar8 & 1) == 0);
  lVar2 = 0;
LAB_07c82324:
  if (*(int *)(DAT_083bedc0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_05a3a884();
  if (*(int *)(DAT_083bed80 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_05a3a884(in_stack_00000008,DAT_083df510);
  return lVar2;
}


