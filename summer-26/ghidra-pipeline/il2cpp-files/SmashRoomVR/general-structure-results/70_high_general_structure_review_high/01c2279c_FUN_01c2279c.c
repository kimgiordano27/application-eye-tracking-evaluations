/*
FUNCTION_NAME: FUN_01c2279c
ENTRY_POINT: 01c2279c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_01c2279c(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,long *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
                    /* try { // try from 01c227dc to 01d22873 has its CatchHandler @ 01c227dc
                       catch() { ... } // from try @ 01c227dc with catch @ 01c227dc
                       catch() { ... } // from try @ 01c22878 with catch @ 01c227dc */
  if ((DAT_03fed48d & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    DAT_03fed48d = 1;
  }
  fVar23 = *(float *)(param_7 + 0xf) * DAT_00b552c8;
  fVar17 = cosf(fVar23);
  fVar23 = tanf(fVar23 * 0.5);
  fVar25 = *(float *)((long)param_7 + 0x7c);
  lVar13 = param_7[0x16];
  lVar8 = FUN_0391c27c(param_7,0);
  puVar1 = Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__;
  if (lVar8 == 0) {
LAB_01c22b5c:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar20 = (ulong)(uint)(param_2 + param_5 * fVar25 * 0.5);
  uVar22 = (ulong)(uint)(param_3 + param_6 * fVar25 * 0.5);
  FUN_039274a0(lVar8,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_0395881c(param_1 + param_4 * fVar25 * 0.5,uVar20,uVar22,fVar23 * fVar25,
                       fVar23 * fVar25,fVar25 * 0.5,lVar13,0);
  puVar4 = 
  Method_OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_System_Collections_IEnumerator_Reset__
  ;
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
  ;
  puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((int)uVar5 < 1) {
    plVar15 = (long *)0x0;
  }
  else {
    uVar16 = 0;
    fVar23 = 0.0;
    plVar14 = (long *)0x0;
    do {
      lVar8 = param_7[0x16];
      if (lVar8 == 0) goto LAB_01c22b5c;
      if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      lVar8 = *(long *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_01c22b5c;
      plVar9 = (long *)FUN_01e8a9f8(lVar8,*(undefined8 *)puVar4);
      plVar15 = plVar14;
      fVar25 = fVar23;
      if (plVar9 != (long *)0x0) {
        lVar8 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_01c229d4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)puVar3,1);
LAB_01c229d4:
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar8);
        }
        uVar11 = FUN_03922f24(plVar9,0,0);
        if ((uVar11 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_01c22b5c;
          uVar6 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
          uVar7 = (**(code **)(*param_7 + 0x178))(param_7,*(undefined8 *)(*param_7 + 0x180));
          fVar19 = (float)uVar20;
          fVar21 = (float)uVar22;
          if ((uVar7 & uVar6) != 0) {
            lVar8 = FUN_0391c27c(plVar9,0);
            if (lVar8 == 0) goto LAB_01c22b5c;
            fVar18 = (float)FUN_03928d34(lVar8,0);
            if (DAT_03fed25c == '\0') {
              thunk_FUN_01ad9084(puVar2);
              DAT_03fed25c = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar21 = fVar21 - param_3;
            fVar18 = fVar18 - param_1;
            fVar19 = fVar19 - param_2;
            fVar24 = SQRT(fVar21 * fVar21 + fVar18 * fVar18 + fVar19 * fVar19);
            uVar22 = (ulong)(uint)(fVar21 / fVar24);
            uVar20 = (ulong)(uint)fVar17;
            if (fVar17 <= param_6 * (fVar21 / fVar24) +
                          param_4 * (fVar18 / fVar24) + param_5 * (fVar19 / fVar24)) {
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar11 = FUN_03922f24(plVar14,0,0);
              plVar15 = plVar9;
              fVar25 = fVar24;
              if (fVar23 <= fVar24 && (uVar11 & 1) == 0) {
                plVar15 = plVar14;
                fVar25 = fVar23;
              }
            }
          }
        }
      }
      fVar23 = fVar25;
      uVar16 = uVar16 + 1;
      plVar14 = plVar15;
    } while (uVar16 != uVar5);
  }
  return plVar15;
}


