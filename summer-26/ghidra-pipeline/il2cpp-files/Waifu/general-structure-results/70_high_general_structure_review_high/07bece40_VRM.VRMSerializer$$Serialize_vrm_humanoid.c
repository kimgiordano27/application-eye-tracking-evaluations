/*
FUNCTION_NAME: VRM.VRMSerializer$$Serialize_vrm_humanoid
ENTRY_POINT: 07bece40
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


void VRM_VRMSerializer__Serialize_vrm_humanoid(long param_1)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong in_x9;
  long in_x10;
  long in_x11;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  puVar1 = (ulong *)(in_x10 + param_1 * 8 + in_x11);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = *puVar1 | 1L << (in_x9 & 0x3f);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*unaff_x23 != 0) {
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    in_stack_00000008 = 0;
    FUN_05fd5ad4(&stack0x00000008,*unaff_x23,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083f4f28 + 0x20) + 0xc0) + 0x138));
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar5 = FUN_05fd5b44(&stack0x00000020,DAT_083e77b8), lVar7 = in_stack_00000030,
          (uVar5 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      pcVar6 = *(code **)(unaff_x24 + 0x170);
      if (pcVar6 == (code *)0x0) {
        pcVar6 = (code *)FUN_033d1b68("UnityEngine.Behaviour::get_isActiveAndEnabled()");
        *(code **)(unaff_x24 + 0x170) = pcVar6;
      }
      uVar5 = (*pcVar6)(lVar7);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar7 + 0x58) == 0) {
          FUN_07bec9dc(lVar7);
        }
        else {
          FUN_07bed668();
        }
      }
    }
    lVar7 = *unaff_x23;
    if (lVar7 != 0) {
      iVar2 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar2) {
        FUN_06853510(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
      }
      FUN_07bed818();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


