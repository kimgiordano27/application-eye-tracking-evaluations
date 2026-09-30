/*
FUNCTION_NAME: FUN_035bde18
ENTRY_POINT: 035bde18
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_035bde18(long param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  byte local_34 [4];
  
  puVar1 = PTR_DAT_0422f9e8;
  if ((DAT_04537c91 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(GameAnalyticsSDK_State_GAState_TypeInfo);
    FUN_01c5d288(PTR_DAT_042305b8);
    FUN_01c5d288(PTR_DAT_0422f9e8);
    FUN_01c5d288(Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__);
    DAT_04537c91 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar2 = FUN_03d4dc54(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
    plVar3 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
    local_34[0] = param_2 & 1;
    lVar4 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,local_34);
    if (plVar3 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01c495e4(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
        uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar8,0);
      }
      if ((int)plVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar3[4] = lVar4;
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        uVar8 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<Vector2>_Invoke__;
        if (uVar2 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)GameAnalyticsSDK_State_GAState_TypeInfo) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_035bdf84;
            }
            uVar2 = uVar2 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar9,*(long *)GameAnalyticsSDK_State_GAState_TypeInfo,1);
LAB_035bdf84:
        (*(code *)*puVar6)(plVar9,4,uVar8,plVar3,puVar6[1]);
        FUN_035bdfd0(param_1,param_2 & 1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


