/*
FUNCTION_NAME: Cinemachine.Cinemachine3rdPersonAim$$PostPipelineStageCallback
ENTRY_POINT: 03918c08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Cinemachine_Cinemachine3rdPersonAim__PostPipelineStageCallback(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  long *plVar10;
  long unaff_x21;
  
  FUN_0373b518(PTR_DAT_07d8b340);
  FUN_0373b518(PTR_DAT_07d88cd8);
  FUN_0373b518(PTR_DAT_07d8b328);
  FUN_0373b518(PTR_DAT_07d8b330);
  *(undefined1 *)(unaff_x21 + 0x57) = 1;
  if (*(long *)(unaff_x19 + 200) != 0) {
    FUN_0458c578(*(long *)(unaff_x19 + 200),unaff_w20,*(undefined8 *)PTR_DAT_07d89900);
    puVar3 = PTR_DAT_07d8b330;
    puVar2 = PTR_DAT_07d89908;
    puVar1 = PTR_DAT_07d88cd8;
    lVar6 = *(long *)(unaff_x19 + 0xb0);
    if (lVar6 != 0) {
      iVar5 = 0;
      while (iVar5 < *(int *)(lVar6 + 0x18)) {
        lVar6 = FUN_049cec24(lVar6,iVar5,*(undefined8 *)puVar3);
        if ((*(long *)(unaff_x19 + 200) == 0) ||
           (uVar4 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                              (*(long *)(unaff_x19 + 200),iVar5,*(undefined8 *)puVar2), lVar6 == 0))
        goto LAB_03918d80;
        FUN_075a6b70(lVar6,uVar4 & 1,0);
        lVar6 = *(long *)(unaff_x19 + 0xb0);
        iVar5 = iVar5 + 1;
        if (lVar6 == 0) goto LAB_03918d80;
      }
      if ((*(long *)(unaff_x19 + 0x90) != 0) &&
         (plVar10 = *(long **)(*(long *)(unaff_x19 + 0x90) + 0x20), plVar10 != (long *)0x0)) {
        lVar6 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_03918d18;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_03918d00;
      }
    }
  }
  goto LAB_03918d80;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_03918d00:
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03918d34;
    }
  }
LAB_03918d18:
  puVar7 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar1,0);
LAB_03918d34:
  iVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
  if (*(long *)(unaff_x19 + 200) != 0) {
    if (iVar5 != *(int *)(*(long *)(unaff_x19 + 200) + 0x20)) {
      return;
    }
    FUN_03918ea4();
    return;
  }
LAB_03918d80:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


