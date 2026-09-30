/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.Vector2f>
ENTRY_POINT: 04082444
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__Empty<OVRPlugin_Vector2f>
               (long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  
  if (param_1 == 0) {
    FUN_0373b518(PTR_DAT_07d96f28);
    FUN_0373b518(PTR_DAT_07d96f30);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_037756d4(param_4);
    }
  }
  puVar3 = PTR_DAT_07d96f30;
  puVar2 = PTR_DAT_07d96f28;
  if (unaff_x19 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (0 < (int)uVar1) {
      uVar13 = 0;
      do {
        if (uVar1 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar10 = *(long *)(unaff_x19 + (long)(int)uVar13 * 8 + 0x20);
        if ((lVar10 == 0) || (plVar11 = *(long **)(param_2 + 0x28), plVar11 == (long *)0x0))
        goto LAB_040825b0;
        lVar5 = *plVar11;
        uVar12 = *(undefined8 *)(lVar10 + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0408250c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(plVar11,*(long *)puVar2,1);
LAB_0408250c:
        (*(code *)*puVar4)(plVar11,uVar12,lVar10,puVar4[1]);
        lVar5 = *(long *)(param_2 + 0x30);
        if (lVar5 == 0) goto LAB_040825b0;
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_040825b0;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar10;
          thunk_FUN_037aeb94(plVar11,lVar10);
        }
        else {
          FUN_049ceef4(lVar5,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        uVar1 = *(uint *)(unaff_x19 + 0x18);
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar1);
    }
    return param_2;
  }
LAB_040825b0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


