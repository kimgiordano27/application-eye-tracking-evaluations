/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 076d2e58
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long unaff_x19;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar5 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_076d2e8c;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar5 = (undefined8 *)FUN_0406ae20();
LAB_076d2e8c:
  iVar3 = (*(code *)*puVar5)();
  puVar2 = PTR_DAT_08fadf20;
  puVar1 = PTR_DAT_08f6a1b8;
  if (0 < iVar3) {
    iVar9 = 0;
    do {
      plVar11 = *(long **)(unaff_x19 + 0x68);
      if (plVar11 == (long *)0x0) {
LAB_076d2fd0:
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar6 = *plVar11;
      plVar10 = *(long **)(unaff_x19 + 0x58);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076d2f10;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)puVar2,0);
LAB_076d2f10:
      uVar4 = (*(code *)*puVar5)(plVar11,iVar9,puVar5[1]);
      if (plVar10 == (long *)0x0) goto LAB_076d2fd0;
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_076d2f78;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)puVar1,9);
LAB_076d2f78:
      uVar7 = (*(code *)*puVar5)(plVar10,uVar4);
      if ((uVar7 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_076d2fd0;
        FUN_085495f0(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,
                     *(long *)(unaff_x19 + 0x28),iVar9,0);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3);
  }
  return;
}


