/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 05303aa0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_PassthroughLayerResumed
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  
  if ((DAT_06bbb11f & 1) == 0) {
    FUN_02f08768(UnityEngine_CullingGroup_TypeInfo);
    FUN_02f08768(PTR_DAT_067ceaa8);
    DAT_06bbb11f = 1;
  }
  puVar1 = UnityEngine_CullingGroup_TypeInfo;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (plVar9 = *(long **)(*(long *)(param_4 + 0x20) + 0x128), plVar9 != (long *)0x0)) {
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)UnityEngine_CullingGroup_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05303b44;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)UnityEngine_CullingGroup_TypeInfo,0);
LAB_05303b44:
    uVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    uVar6 = (ulong)uVar2;
    if ((*(long *)(param_4 + 0x30) == 0) || (uVar2 != *(uint *)(*(long *)(param_4 + 0x30) + 0x18)))
    {
      uVar4 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067ceaa8,uVar6);
      *(undefined8 *)(param_4 + 0x30) = uVar4;
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_05303c6c;
      FUN_060b8950(*(long *)(param_4 + 0x28),uVar6,0);
    }
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        if ((*(long *)(param_4 + 0x20) == 0) ||
           (plVar9 = *(long **)(*(long *)(param_4 + 0x20) + 0x128), plVar9 == (long *)0x0))
        goto LAB_05303c6c;
        lVar5 = *plVar9;
        lVar11 = *(long *)(param_4 + 0x30);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_05303c10;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,1);
LAB_05303c10:
        uVar12 = (*(code *)*puVar3)(plVar9,uVar10 & 0xffffffff,puVar3[1]);
        if (lVar11 == 0) goto LAB_05303c6c;
        if (*(uint *)(lVar11 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        lVar11 = lVar11 + uVar10 * 0xc;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(lVar11 + 0x20) = uVar12;
        *(undefined4 *)(lVar11 + 0x24) = param_2;
        *(undefined4 *)(lVar11 + 0x28) = param_3;
      } while (uVar10 != uVar6);
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      FUN_060b8e10(*(long *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x30),0);
      return;
    }
  }
LAB_05303c6c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


