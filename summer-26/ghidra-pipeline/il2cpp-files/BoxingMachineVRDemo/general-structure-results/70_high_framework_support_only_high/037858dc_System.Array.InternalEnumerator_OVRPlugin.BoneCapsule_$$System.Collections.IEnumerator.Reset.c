/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.BoneCapsule>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 037858dc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array_InternalEnumerator<OVRPlugin_BoneCapsule>__System_Collections_IEnumerator_Reset
               (long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long *plVar8;
  undefined8 *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  
  lVar3 = *param_1;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02d9a2e0(lVar3);
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0378593c;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_0378593c:
  iVar1 = (*(code *)*puVar2)();
  plVar8 = (long *)*unaff_x21;
  if (unaff_w23 < iVar1) {
    if (plVar8 == (long *)0x0) {
LAB_03785a68:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = *(long *)(unaff_x22 + 0x20);
    uVar5 = (ulong)*(uint *)(unaff_x21 + 3);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) goto LAB_03785a30;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  else {
    if (plVar8 == (long *)0x0) goto LAB_03785a68;
    lVar3 = *(long *)(unaff_x22 + 0x20);
    uVar5 = unaff_x21[1];
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02d9a2e0(lVar3);
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) goto LAB_03785a30;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4(plVar8,lVar3,3);
LAB_03785a40:
  (*(code *)*puVar2)(plVar8,uVar5,puVar2[1]);
  return unaff_w23 < iVar1;
LAB_03785a30:
  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
  goto LAB_03785a40;
}


