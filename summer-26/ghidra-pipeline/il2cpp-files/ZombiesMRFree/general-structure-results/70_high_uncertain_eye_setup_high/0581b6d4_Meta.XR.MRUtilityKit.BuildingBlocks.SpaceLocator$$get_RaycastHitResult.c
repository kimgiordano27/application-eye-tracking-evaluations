/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.SpaceLocator$$get_RaycastHitResult
ENTRY_POINT: 0581b6d4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_BuildingBlocks_SpaceLocator__get_RaycastHitResult
               (undefined8 param_1,long param_2,long param_3,uint param_4,int param_5,long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  iVar1 = (param_4 - param_5) + 1;
  if (param_3 == 0) {
    if (iVar1 <= (int)param_4) {
      if (param_2 == 0) goto LAB_0581b7fc;
      do {
        if (*(uint *)(param_2 + 0x18) <= param_4) goto LAB_0581b7f8;
        if (*(long *)(param_2 + (long)(int)param_4 * 8 + 0x20) == 0) {
          return param_4;
        }
        param_4 = param_4 - 1;
      } while (iVar1 <= (int)param_4);
    }
  }
  else if (iVar1 <= (int)param_4) {
    if (param_2 == 0) {
LAB_0581b7fc:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      uVar4 = *(uint *)(param_2 + 0x18);
      if (uVar4 <= param_4) {
LAB_0581b7f8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      plVar8 = (long *)(param_2 + (long)(int)param_4 * 8 + 0x20);
      if (*plVar8 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(param_6 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02feb2c4(lVar3);
          uVar4 = *(uint *)(param_2 + 0x18);
        }
        if (uVar4 <= param_4) goto LAB_0581b7f8;
        plVar8 = (long *)*plVar8;
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0581b78c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_02feb5b8(plVar8,lVar3,0);
LAB_0581b78c:
        uVar6 = (*(code *)*puVar2)(plVar8,param_3,puVar2[1]);
        if ((uVar6 & 1) != 0) {
          return param_4;
        }
      }
      param_4 = param_4 - 1;
    } while (iVar1 <= (int)param_4);
  }
  return 0xffffffff;
}


