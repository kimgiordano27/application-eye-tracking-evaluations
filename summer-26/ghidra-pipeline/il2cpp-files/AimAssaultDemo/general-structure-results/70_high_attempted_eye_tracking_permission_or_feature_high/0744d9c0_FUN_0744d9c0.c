/*
FUNCTION_NAME: FUN_0744d9c0
ENTRY_POINT: 0744d9c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0744d9c0(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 local_28;
  
  if ((DAT_08269b81 & 1) == 0) {
    FUN_0373b518(UnityEngine_ProBuilder_Poly2Tri_TriangulationUtil_TypeInfo);
    FUN_0373b518(UnityEngine_XR_Interaction_Toolkit_Utilities_TriggerContactMonitor_TypeInfo);
    FUN_0373b518(PTR_DAT_07d8a368);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(PTR_DAT_07d89970);
    DAT_08269b81 = 1;
  }
  if (param_2 != 0) {
    FUN_073c093c(param_2,0);
    uVar5 = FUN_0744dd68(param_1);
    uVar6 = FUN_073c093c(param_2,0);
    FUN_0744e558(param_1,uVar6,uVar5);
    (**(code **)(*param_1 + 0x8c8))(param_1,uVar6,uVar5,*(undefined8 *)(*param_1 + 0x8d0));
    lVar7 = FUN_07445304(param_1);
    if (lVar7 != 0) {
      uVar1 = *(undefined4 *)(lVar7 + 0x18);
      FUN_07446fe0(param_1,param_2);
      lVar7 = FUN_07445304(param_1);
      puVar4 = PTR_DAT_07d89970;
      if (lVar7 != 0) {
        uVar2 = *(undefined4 *)(lVar7 + 0x18);
        *(undefined1 *)(param_1 + 0x45) = 1;
        puVar3 = PTR_DAT_07d86398;
        local_28 = 0;
        FUN_056a801c(&local_28,uVar1,uVar2,*(undefined8 *)puVar4);
        *(undefined8 *)((long)param_1 + 0x22c) = local_28;
        *(undefined4 *)(param_1 + 0x4d) = 0;
        FUN_0744de58(param_1);
        if (*(char *)((long)param_1 + 0x2e4) == '\0') {
          plVar9 = (long *)FUN_073c093c(param_2,0);
          if (plVar9 == (long *)0x0) goto LAB_0744dd64;
          lVar7 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d8a368) {
                puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                goto LAB_0744dbf0;
              }
              uVar8 = uVar8 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_0377596c(plVar9,*(long *)PTR_DAT_07d8a368,6);
LAB_0744dbf0:
          lVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if (lVar7 == 0) goto LAB_0744dd64;
          lVar7 = FUN_03f0e0d8(lVar7,*(undefined8 *)
                                      UnityEngine_ProBuilder_Poly2Tri_TriangulationUtil_TypeInfo);
          param_1[0x5d] = lVar7;
          thunk_FUN_037aeb94(param_1 + 0x5d);
          lVar7 = param_1[0x5d];
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar8 = FUN_075aa744(lVar7,0,0);
          if ((uVar8 & 1) != 0) {
            lVar7 = param_1[0x5e];
            uVar5 = FUN_073c093c(param_2,0);
            if (lVar7 == 0) goto LAB_0744dd64;
            FUN_045ba050(lVar7,uVar5,
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Utilities_TriggerContactMonitor_TypeInfo
                        );
            FUN_0744dec0(param_1,param_1[0x5d]);
          }
        }
        else {
          lVar7 = param_1[0x5d];
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar8 = FUN_075aa744(lVar7,0,0);
          if ((uVar8 & 1) != 0) {
            plVar9 = (long *)FUN_073c093c(param_2,0);
            if (plVar9 == (long *)0x0) goto LAB_0744dd64;
            lVar7 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07d8a368) {
                  puVar10 = (undefined8 *)(lVar7 + (long)(*piVar11 + 6) * 0x10 + 0x138);
                  goto LAB_0744dc94;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar10 = (undefined8 *)FUN_0377596c(plVar9,*(long *)PTR_DAT_07d8a368,6);
LAB_0744dc94:
            lVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((param_1[0x5d] == 0) || (uVar5 = FUN_075a73b4(param_1[0x5d],0), lVar7 == 0))
            goto LAB_0744dd64;
            uVar8 = FUN_075bc6c0(lVar7,uVar5,0);
            if ((uVar8 & 1) != 0) {
              lVar7 = param_1[0x5e];
              uVar5 = FUN_073c093c(param_2,0);
              if (lVar7 == 0) goto LAB_0744dd64;
              FUN_045ba050(lVar7,uVar5,
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_TriggerContactMonitor_TypeInfo
                          );
            }
          }
        }
        lVar7 = FUN_07445304(param_1);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 1) {
            (**(code **)(*param_1 + 0x8d8))(param_1,*(undefined8 *)(*param_1 + 0x8e0));
            FUN_0744b8ac(param_1);
          }
          uVar5 = FUN_073c093c(param_2,0);
          if (param_1[0x62] != 0) {
            FUN_073dfba8(param_1[0x62],uVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_0744dd64:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


