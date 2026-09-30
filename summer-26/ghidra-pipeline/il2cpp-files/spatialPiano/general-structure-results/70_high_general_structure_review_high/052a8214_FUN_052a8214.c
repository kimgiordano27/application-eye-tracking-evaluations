/*
FUNCTION_NAME: FUN_052a8214
ENTRY_POINT: 052a8214
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


void FUN_052a8214(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_06bbad85 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cbae0);
    FUN_02f08768(Oculus_Platform_Request<Purchase>_TypeInfo);
    FUN_02f08768(UnityEngine_XR_ARFoundation_ARRaycastManager_TypeInfo);
    DAT_06bbad85 = 1;
  }
  puVar1 = UnityEngine_XR_ARFoundation_ARRaycastManager_TypeInfo;
  if (*(char *)(param_1 + 0x80) == '\0') {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x70);
  uVar2 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cbae0);
  FUN_0475f808(uVar2,param_1,*(undefined8 *)puVar1,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)Oculus_Platform_Request<Purchase>_TypeInfo) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_052a82f8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)Oculus_Platform_Request<Purchase>_TypeInfo,2);
LAB_052a82f8:
  (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
  FUN_052a80bc(param_1);
  return;
}


