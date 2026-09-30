/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryPoint
ENTRY_POINT: 04f8c78c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryPoint(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  
  puVar3 = UnityEngine_EventSystems_RaycastResult_var;
  if ((DAT_066c9d7c & 1) == 0) {
    FUN_02b3c81c(UnityEngine_EventSystems_RaycastResult_var);
    FUN_02b3c81c(System_Func<PointerCancelEvent>_TypeInfo);
    FUN_02b3c81c(LitJson_PropertyMetadata_var);
    DAT_066c9d7c = 1;
  }
  FUN_04331eb8(param_1,*(undefined8 *)puVar3);
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x98), lVar10 != 0)) {
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(param_1 + 0x80);
    thunk_FUN_02bb0e9c();
    plVar11 = *(long **)(param_1 + 0x70);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar1 = *(undefined4 *)(param_1 + 0x50);
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)LitJson_PropertyMetadata_var) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04f8c85c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)LitJson_PropertyMetadata_var,0);
LAB_04f8c85c:
      uVar5 = (*(code *)*puVar4)(plVar11,uVar1,puVar4[1]);
      *(undefined8 *)(lVar10 + 0x20) = uVar5;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20),uVar5);
      if (*(char *)(param_1 + 0x54) != '\0') {
        lVar10 = FUN_05c89410(param_1,0);
        if ((lVar10 == 0) ||
           (lVar10 = FUN_031d8ac4(lVar10,*(undefined8 *)System_Func<PointerCancelEvent>_TypeInfo),
           lVar10 == 0)) goto LAB_04f8c8fc;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar2) {
          lVar7 = 0;
          do {
            if (uVar2 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            lVar6 = *(long *)(lVar10 + 0x20 + lVar7 * 8);
            if (lVar6 == 0) goto LAB_04f8c8fc;
            FUN_05c56fc0(lVar6,0,0);
            uVar2 = *(uint *)(lVar10 + 0x18);
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < (int)uVar2);
        }
      }
      return;
    }
  }
LAB_04f8c8fc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


