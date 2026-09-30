/*
FUNCTION_NAME: FUN_05cfd2e4
ENTRY_POINT: 05cfd2e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05cfd2e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  
  puVar1 = Method_UnityEngine_InputSystem_InputDevice_ReadValueFromBufferAsObject__;
  if ((DAT_06bc3574 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_InputSystem_InputDevice_ReadValueFromBufferAsObject__);
    FUN_02f08768(Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(PTR_DAT_067d1a98);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Unity_Properties_TypeConverter<char,_string>_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<Vector2>__
                );
    DAT_06bc3574 = 1;
  }
  uVar10 = *(undefined8 *)puVar1;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  lVar5 = FUN_03378f40(param_1,uVar10);
  *(long *)(param_1 + 0x70) = lVar5;
  if ((lVar5 != 0) && (plVar11 = *(long **)(param_1 + 0x60), plVar11 != (long *)0x0)) {
    (**(code **)(*plVar11 + 0x5e8))
              (plVar11,*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(*plVar11 + 0x5f0));
    puVar1 = 
    Method_UnityEngine_InputSystem_InputControlExtensions_ReadUnprocessedValueFromEvent<Vector2>__;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar4 = FUN_05c591bc(*(long *)(param_1 + 0x70),0);
      plVar11 = (long *)FUN_02f0880c(*(undefined8 *)puVar1,uVar4);
      *(long **)(param_1 + 0x78) = plVar11;
      if (plVar11 != (long *)0x0) {
        lVar5 = *(long *)(param_1 + 0x68);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0)) {
LAB_05cfd628:
          uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
          FUN_02f0888c(uVar10,0);
        }
        if ((int)plVar11[3] == 0) {
LAB_05cfd624:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar11[4] = lVar5;
        puVar3 = Method_UnityEngine_InputSystem_InputControlExtensions_AccumulateValueInEvent__;
        puVar2 = 
        UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000357_PostfixBurstDelegate_TypeInfo
        ;
        puVar1 = Unity_Properties_TypeConverter<char,_string>_TypeInfo;
        if (1 < (int)uVar4) {
          lVar5 = 0;
          do {
            if (*(long *)(param_1 + 0x68) == 0) goto LAB_05cfd620;
            uVar10 = FUN_060ed87c(*(long *)(param_1 + 0x68),0);
            uVar7 = FUN_060ed7ac(param_1,0);
            if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f20);
            }
            lVar6 = FUN_03497c3c(uVar10,uVar7,*(undefined8 *)PTR_DAT_067d1a98);
            if ((lVar6 == 0) ||
               (plVar11 = (long *)FUN_033d910c(lVar6,*(undefined8 *)puVar3), plVar11 == (long *)0x0)
               ) goto LAB_05cfd620;
            (**(code **)(*plVar11 + 0x2f8))(plVar11,1,*(undefined8 *)(*plVar11 + 0x300));
            plVar11 = (long *)FUN_060f0a10(lVar6,0);
            if (*(long *)(param_1 + 0x60) == 0) goto LAB_05cfd620;
            plVar8 = (long *)FUN_060ed7ac(*(long *)(param_1 + 0x60),0);
            if (plVar8 == (long *)0x0) {
              plVar8 = (long *)0x0;
            }
            else if (*plVar8 != *(long *)puVar1) {
              plVar8 = (long *)0x0;
            }
            if ((plVar11 == (long *)0x0) || (*plVar11 != *(long *)puVar1)) goto LAB_05cfd620;
            FUN_060fe980(0,0x3f800000,plVar11,0);
            FUN_060feb14(0,0x3f800000,plVar11,0);
            FUN_060fee3c(0x42c80000,0x41d00000,plVar11,0);
            if (plVar8 == (long *)0x0) goto LAB_05cfd620;
            fVar12 = (float)FUN_060febdc(plVar8,0);
            FUN_060feca8((230.0 / (float)(int)uVar4) * (float)((int)lVar5 + 2) + 200.0 + fVar12,
                         plVar11,0);
            FUN_060fefd0(0,0x3f800000,plVar11,0);
            plVar11 = *(long **)(param_1 + 0x78);
            lVar6 = FUN_033d919c(lVar6,*(undefined8 *)puVar2);
            if (plVar11 == (long *)0x0) goto LAB_05cfd620;
            if ((lVar6 != 0) &&
               (lVar9 = thunk_FUN_02f45174(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0))
            goto LAB_05cfd628;
            if ((ulong)*(uint *)(plVar11 + 3) <= lVar5 + 1U) goto LAB_05cfd624;
            lVar9 = lVar5 + 1;
            plVar11[lVar5 + 5] = lVar6;
            lVar5 = lVar9;
          } while ((ulong)uVar4 - 1 != lVar9);
        }
        return;
      }
    }
  }
LAB_05cfd620:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


