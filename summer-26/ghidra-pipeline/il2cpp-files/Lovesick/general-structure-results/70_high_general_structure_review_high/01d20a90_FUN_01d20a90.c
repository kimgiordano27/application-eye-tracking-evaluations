/*
FUNCTION_NAME: FUN_01d20a90
ENTRY_POINT: 01d20a90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_7;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01d20a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  
  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  if ((DAT_0377f2fa & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ee590);
    thunk_FUN_00d48444(StringLiteral_10757);
    thunk_FUN_00d48444(StringLiteral_3680);
    thunk_FUN_00d48444(StringLiteral_3033);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<PropertyInfo>_get_Item__);
    thunk_FUN_00d48444(Method_System_Data_ForeignKeyConstraint_set_DeleteRule__);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_set_environmentTextureHDRRequested__
                      );
    DAT_0377f2fa = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01789ac0(param_5,0,0);
  puVar2 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if ((uVar4 & 1) != 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar8 = thunk_FUN_00d48444(StringLiteral_6417);
    FUN_016ec5b8(uVar10,uVar8,0);
    uVar8 = thunk_FUN_00d48444(
                              Method_System_Collections_Generic_Dictionary<object,_Vector3>_TryGetValue__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar8);
  }
  uVar10 = *(undefined8 *)
            Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  uVar10 = FUN_01780344(uVar10,0);
  uVar4 = FUN_01789ac0(param_5,uVar10,0);
  if ((uVar4 & 1) != 0) {
    if (param_4 == (long *)0x0) {
      return **(long **)(*plVar6 + 0xb8);
    }
                    /* WARNING: Could not recover jumptable at 0x01d20be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
    return lVar5;
  }
  if (param_4 != (long *)0x0) {
    uVar10 = *(undefined8 *)StringLiteral_10757;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = FUN_01780344(uVar10,0);
    uVar4 = FUN_01789ac0(param_5,uVar10,0);
    puVar1 = PTR_DAT_033ee590;
    if ((uVar4 & 1) != 0) {
      lVar5 = *param_4;
      plVar11 = param_4;
      if (lVar5 == *plVar6) {
        uVar12 = 0;
        while( true ) {
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar5 = *(long *)puVar1;
          }
          lVar9 = **(long **)(lVar5 + 0xb8);
          if (lVar9 == 0) break;
          if (*(int *)(lVar9 + 0x18) <= (int)uVar12) {
            lVar5 = *param_4;
            plVar6 = (long *)
                     System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
            goto LAB_01d20d44;
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar9 = **(long **)(*(long *)puVar1 + 0xb8);
            if (lVar9 == 0) break;
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_01d20f3c;
          plVar6 = *(long **)(lVar9 + (long)(int)uVar12 * 8 + 0x20);
          if ((plVar6 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar6 + 0x168))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x170)),
             plVar6 == (long *)0x0)) break;
          uVar4 = (**(code **)(*plVar6 + 0x138))(plVar6,param_4,*(undefined8 *)(*plVar6 + 0x140));
          if ((uVar4 & 1) != 0) {
            lVar5 = *(long *)puVar1;
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar5 = *(long *)puVar1;
            }
            lVar5 = **(long **)(lVar5 + 0xb8);
            if (lVar5 == 0) break;
            if (*(uint *)(lVar5 + 0x18) <= uVar12) goto LAB_01d20f3c;
            plVar11 = *(long **)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
          }
          uVar12 = uVar12 + 1;
        }
      }
      else {
LAB_01d20d44:
        puVar1 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
        lVar9 = *(long *)puVar3;
        if (((*(byte *)(lVar5 + 300) < *(byte *)(lVar9 + 300)) ||
            (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(lVar9 + 300) * 8 + -8) != lVar9))
           && (lVar5 != *plVar6)) goto LAB_01d20f04;
        uVar10 = *(undefined8 *)Method_System_Data_ForeignKeyConstraint_set_DeleteRule__;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar5 = FUN_01780344(uVar10,0);
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,1);
        lVar9 = FUN_01780344(*(undefined8 *)puVar2,0);
        if (plVar6 != (long *)0x0) {
          if ((lVar9 != 0) &&
             (lVar7 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
LAB_01d20f94:
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          if ((int)plVar6[3] == 0) {
LAB_01d20f3c:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar6[4] = lVar9;
          if (lVar5 != 0) {
            uVar10 = FUN_0178c410(lVar5,*(undefined8 *)
                                         Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_set_environmentTextureHDRRequested__
                                  ,plVar6,0);
            uVar4 = FUN_016ac4bc(uVar10,0,0);
            if ((uVar4 & 1) == 0) goto LAB_01d20f04;
            plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)StringLiteral_3033,1);
            if (plVar11 != (long *)0x0) {
              lVar5 = *(long *)puVar3;
              if ((*(byte *)(lVar5 + 300) <= *(byte *)(*plVar11 + 300)) &&
                 (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) ==
                  lVar5)) {
                lVar9 = *plVar11;
                if ((*(byte *)(lVar5 + 300) <= *(byte *)(lVar9 + 300)) &&
                   (*(long *)(*(long *)(lVar9 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) ==
                    lVar5)) {
                  lVar5 = (**(code **)(lVar9 + 0x2f8))(plVar11,*(undefined8 *)(lVar9 + 0x300));
                  if (plVar6 != (long *)0x0) {
                    if ((lVar5 != 0) &&
                       (lVar9 = thunk_FUN_00d6225c(lVar5,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar9 == 0)) goto LAB_01d20f94;
                    puVar3 = StringLiteral_3680;
                    if ((int)plVar6[3] == 0) goto LAB_01d20f3c;
                    plVar6[4] = lVar5;
                    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                    if (lVar5 != 0) {
                      FUN_0200789c(lVar5,uVar10,plVar6,0);
                      return lVar5;
                    }
                  }
                  goto LAB_01d20f38;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar11);
            }
          }
        }
      }
LAB_01d20f38:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_01d20f04:
  lVar5 = FUN_01ff79f8(param_1,param_2,param_3,param_4,param_5,0);
  return lVar5;
}


