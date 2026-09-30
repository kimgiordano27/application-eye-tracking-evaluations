/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetHiddenAreaMesh$$Invoke
ENTRY_POINT: 052c8a90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 OVR_OpenVR_IVRSystem__GetHiddenAreaMesh__Invoke(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_06bbaf08 & 1) == 0) {
    FUN_02f08768(Oculus_Platform_Request<AchievementUpdate>_TypeInfo);
    DAT_06bbaf08 = 1;
  }
  puVar1 = Oculus_Platform_Request<AchievementUpdate>_TypeInfo;
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo)
        {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_052c8b18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02f421d0(plVar7,*(long *)Oculus_Platform_Request<AchievementUpdate>_TypeInfo,2);
LAB_052c8b18:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    plVar7 = *(long **)(param_1 + 0x28);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_052c8b90;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,3);
LAB_052c8b90:
                    /* WARNING: Could not recover jumptable at 0x052c8ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


