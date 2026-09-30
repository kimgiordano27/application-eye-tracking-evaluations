/*
FUNCTION_NAME: UniGLTF.Extensions.VRMC_vrm_animation.GltfDeserializer$$__humanoid__humanBones_Deserialize_Neck
ENTRY_POINT: 07c7f8d0
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


undefined1  [16]
UniGLTF_Extensions_VRMC_vrm_animation_GltfDeserializer____humanoid__humanBones_Deserialize_Neck
          (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong in_x9;
  int *piVar10;
  ulong *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int unaff_w29;
  undefined1 auVar11 [16];
  undefined8 unaff_d9;
  undefined8 in_register_00005128;
  long *in_stack_00000008;
  
code_r0x07c7f8d0:
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)(*piVar10 + 8) * 0x10 + 0x138);
      goto LAB_07c7f910;
    }
    in_x9 = in_x9 - 1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
LAB_07c7f8f0:
  puVar9 = (undefined8 *)FUN_0338f71c(unaff_x24,param_3,8);
LAB_07c7f910:
  iVar6 = (*(code *)*puVar9)(unaff_x24,puVar9[1]);
  auVar4._8_8_ = in_register_00005128;
  auVar4._0_8_ = unaff_d9;
  if (unaff_w29 <= iVar6) {
    if (unaff_x20 == 0) goto LAB_07c7fa0c;
    auVar11 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x24,
                         *(undefined8 *)(unaff_x20 + 0x28));
    auVar5._8_8_ = in_register_00005128;
    auVar5._0_8_ = unaff_d9;
    auVar4._8_8_ = in_register_00005128;
    if (0.0 <= auVar11._0_4_) {
      auVar4 = auVar11;
      if (unaff_w29 < iVar6) {
        *in_stack_00000008 = (long)unaff_x24;
        unaff_w29 = iVar6;
        if (DAT_08908cd0 != 0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
            if (bVar3) {
              *unaff_x19 = *unaff_x19 | unaff_x26;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        auVar4 = auVar5;
        if (((float)unaff_d9 < auVar11._0_4_) &&
           (*in_stack_00000008 = (long)unaff_x24, auVar4 = auVar11, DAT_08908cd0 != 0)) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(unaff_x19,0x10);
            if (bVar3) {
              *unaff_x19 = *unaff_x19 | unaff_x26;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
    }
  }
  while( true ) {
    in_register_00005128 = auVar4._8_8_;
    unaff_d9 = auVar4._0_8_;
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == unaff_w28) {
      if (*(int *)(DAT_083bed98 + 0xe0) == 0) {
        FUN_033b9870();
      }
      FUN_05a3a884();
      auVar11._8_8_ = in_register_00005128;
      auVar11._0_8_ = unaff_d9;
      return auVar11;
    }
    uVar7 = FUN_04ab0b48();
    unaff_x24 = (long *)FUN_0339898c(uVar7,*(undefined8 *)(unaff_x23 + 0xc20));
    if (unaff_x24 == (long *)0x0) break;
    param_1 = *unaff_x24;
    bVar1 = *(byte *)(*(long *)(unaff_x27 + 0xf70) + 0x130);
    if ((*(byte *)(param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)(unaff_x27 + 0xf70))
       ) goto LAB_07c7f8c4;
    if (DAT_086ef170 == (code *)0x0) {
      DAT_086ef170 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_isActiveAndEnabled()");
    }
    uVar8 = (*DAT_086ef170)(unaff_x24);
    auVar4._8_8_ = in_register_00005128;
    auVar4._0_8_ = unaff_d9;
    if ((uVar8 & 1) != 0) goto code_r0x07c7f8c0;
  }
LAB_07c7fa0c:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
code_r0x07c7f8c0:
  param_1 = *unaff_x24;
LAB_07c7f8c4:
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  param_3 = *(long *)(unaff_x23 + 0xc20);
  if (in_x9 != 0) goto code_r0x07c7f8d0;
  goto LAB_07c7f8f0;
}


