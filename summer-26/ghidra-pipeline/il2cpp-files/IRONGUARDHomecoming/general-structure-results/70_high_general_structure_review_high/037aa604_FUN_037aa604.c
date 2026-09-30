/*
FUNCTION_NAME: FUN_037aa604
ENTRY_POINT: 037aa604
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_037aa604(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint local_74;
  long local_70;
  undefined8 uStack_68;
  
  local_70 = param_2;
  uStack_68 = param_3;
  if ((DAT_04837541 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_476);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(StringLiteral_477);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    thunk_FUN_01efb3a4(StringLiteral_478);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__);
    thunk_FUN_01efb3a4(StringLiteral_479);
    thunk_FUN_01efb3a4(StringLiteral_480);
    thunk_FUN_01efb3a4(StringLiteral_481);
    thunk_FUN_01efb3a4(StringLiteral_482);
    thunk_FUN_01efb3a4(StringLiteral_483);
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__);
    thunk_FUN_01efb3a4(StringLiteral_484);
    thunk_FUN_01efb3a4(StringLiteral_485);
    thunk_FUN_01efb3a4(StringLiteral_486);
    thunk_FUN_01efb3a4(StringLiteral_487);
    thunk_FUN_01efb3a4(StringLiteral_488);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_MemberUtility_<>c__DisplayClass58_0_<Disambiguate>b__0__
                      );
    thunk_FUN_01efb3a4(StringLiteral_489);
    thunk_FUN_01efb3a4(StringLiteral_490);
    thunk_FUN_01efb3a4(StringLiteral_491);
    thunk_FUN_01efb3a4(StringLiteral_492);
    DAT_04837541 = 1;
  }
  puVar4 = StringLiteral_491;
  puVar3 = StringLiteral_488;
  puVar1 = Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__;
  puVar2 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  local_74 = 0;
  if (param_2 != 0) {
    uVar7 = FUN_030f28e4(param_2,0,
                         *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    uVar8 = FUN_0356965c(&uStack_68,0);
    uVar7 = FUN_0340eee0(*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar4,uVar8,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    FUN_0403ea2c(uVar7,0);
    plVar16 = *(long **)(param_1 + 0x30);
    if ((plVar16 != (long *)0x0) &&
       (uVar7 = (**(code **)(*plVar16 + 0x5d8))(plVar16,*(undefined8 *)(*plVar16 + 0x5e0)),
       puVar4 = StringLiteral_485,
       puVar3 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__,
       local_70 != 0)) {
      uVar8 = FUN_030f28e4(local_70,0,*(undefined8 *)puVar1);
      uVar7 = FUN_0340eee0(uVar7,*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar3,0);
      (**(code **)(*plVar16 + 0x5e8))(plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x5f0));
      puVar6 = StringLiteral_480;
      puVar5 = StringLiteral_479;
      puVar4 = Method_Unity_VisualScripting_MemberUtility_<>c__DisplayClass58_0_<Disambiguate>b__0__
      ;
      plVar16 = *(long **)(param_1 + 0x30);
      if (plVar16 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar16 + 0x5d8))(plVar16,*(undefined8 *)(*plVar16 + 0x5e0));
        uVar8 = FUN_0356965c(&uStack_68,0);
        uVar7 = FUN_0340eee0(uVar7,*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar3,0);
        (**(code **)(*plVar16 + 0x5e8))(plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x5f0));
        FUN_0403ea2c(*(undefined8 *)puVar6,0);
        lVar9 = FUN_034d18b8(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)puVar5,0);
        plVar16 = *(long **)(param_1 + 0x30);
        if ((plVar16 != (long *)0x0) &&
           (uVar7 = (**(code **)(*plVar16 + 0x5d8))(plVar16,*(undefined8 *)(*plVar16 + 0x5e0)),
           puVar4 = StringLiteral_490, puVar3 = StringLiteral_489, lVar9 != 0)) {
          local_74 = (uint)*(undefined8 *)(lVar9 + 0x18);
          uVar8 = FUN_035683d0(&local_74,0);
          uVar7 = FUN_0340eee0(uVar7,*(undefined8 *)puVar3,uVar8,*(undefined8 *)puVar4,0);
          (**(code **)(*plVar16 + 0x5e8))(plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x5f0));
          if ((local_70 != 0) &&
             (lVar10 = FUN_030f28e4(local_70,0,*(undefined8 *)puVar1), puVar3 = StringLiteral_487,
             puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__, lVar10 != 0))
          {
            uVar7 = FUN_034127bc(lVar10,0);
            uVar7 = FUN_03405678(*(undefined8 *)puVar3,uVar7,0);
            puVar5 = StringLiteral_482;
            puVar4 = StringLiteral_481;
            puVar3 = StringLiteral_477;
            local_74 = 0;
            uVar14 = *(uint *)(lVar9 + 0x18);
            if ((int)uVar14 < 1) {
              lVar10 = 0;
            }
            else {
              lVar17 = 0;
              do {
                if (uVar14 <= local_74) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a44();
                }
                lVar11 = FUN_04032bcc(*(undefined8 *)(lVar9 + (long)(int)local_74 * 8 + 0x20),0);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar12 = FUN_04073094(lVar11,0,0);
                if ((uVar12 & 1) == 0) {
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_0403ed64(*(undefined8 *)puVar5,0);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                }
                else {
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar8 = FUN_040766fc(lVar11,0);
                  lVar10 = FUN_03405678(*(undefined8 *)StringLiteral_483,uVar8,0);
                  if (lVar10 == 0) {
                    uVar8 = *(undefined8 *)
                             Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__
                    ;
                  }
                  else {
                    uVar8 = FUN_040766fc(lVar11,0);
                  }
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  FUN_0403ea2c(uVar8,0);
                  lVar10 = *(long *)(param_1 + 0x60);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  lVar13 = *(long *)(lVar10 + 0x10);
                  lVar15 = *(long *)puVar3;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a3c();
                  }
                  uVar14 = *(uint *)(lVar10 + 0x18);
                  if (uVar14 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar14 + 1;
                    plVar16 = (long *)(lVar13 + (long)(int)uVar14 * 8 + 0x20);
                    *plVar16 = lVar11;
                    thunk_FUN_01f51358(plVar16,lVar11);
                  }
                  else {
                    FUN_030f2bb4(lVar10,lVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                uVar8 = FUN_040766fc(lVar11,0);
                uVar12 = thunk_FUN_0340e318(uVar8,uVar7,0);
                lVar10 = lVar11;
                if ((uVar12 & 1) == 0) {
                  lVar10 = lVar17;
                }
                uVar8 = FUN_040766fc(lVar11,0);
                uVar12 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar4,0);
                if ((uVar12 & 1) != 0) {
                  FUN_037a8eec(lVar11);
                }
                local_74 = local_74 + 1;
                uVar14 = *(uint *)(lVar9 + 0x18);
                lVar17 = lVar10;
              } while ((int)local_74 < (int)uVar14);
            }
            puVar2 = StringLiteral_492;
            plVar16 = *(long **)(param_1 + 0x30);
            if (plVar16 != (long *)0x0) {
              uVar7 = (**(code **)(*plVar16 + 0x5d8))(plVar16,*(undefined8 *)(*plVar16 + 0x5e0));
              uVar7 = FUN_03405678(uVar7,*(undefined8 *)puVar2,0);
              (**(code **)(*plVar16 + 0x5e8))(plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x5f0));
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar12 = FUN_04073094(lVar10,0,0);
              plVar16 = *(long **)(param_1 + 0x30);
              if (plVar16 != (long *)0x0) {
                uVar7 = (**(code **)(*plVar16 + 0x5d8))(plVar16,*(undefined8 *)(*plVar16 + 0x5e0));
                if ((uVar12 & 1) == 0) {
                  uVar7 = FUN_03405678(uVar7,*(undefined8 *)StringLiteral_486,0);
                  (**(code **)(*plVar16 + 0x5e8))(plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x5f0));
                  return;
                }
                uVar7 = FUN_03405678(uVar7,*(undefined8 *)StringLiteral_484,0);
                (**(code **)(*plVar16 + 0x5e8))(plVar16,uVar7,*(undefined8 *)(*plVar16 + 0x5f0));
                plVar16 = *(long **)(param_1 + 0x30);
                if (plVar16 != (long *)0x0) {
                  uVar7 = (**(code **)(*plVar16 + 0x5d8))(plVar16,*(undefined8 *)(*plVar16 + 0x5e0))
                  ;
                  *(undefined8 *)(param_1 + 0x40) = uVar7;
                  thunk_FUN_01f51358();
                  if ((lVar10 != 0) && (lVar9 = FUN_04032eb8(lVar10,0), lVar9 != 0)) {
                    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a44();
                    }
                    uVar7 = *(undefined8 *)(lVar9 + 0x20);
                    if (*(int *)(*(long *)
                                  Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)
                                          Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                                        );
                    }
                    uVar7 = FUN_034e4458(uVar7,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)
                                          Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                                        );
                    }
                    lVar9 = FUN_040857c8(uVar7,0);
                    plVar16 = (long *)(param_1 + 0x38);
                    *plVar16 = lVar9;
                    thunk_FUN_01f51358(plVar16,lVar9);
                    lVar9 = *plVar16;
                    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_476);
                    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                              (uVar7,param_1,*(undefined8 *)StringLiteral_478,0);
                    if (lVar9 != 0) {
                      FUN_0406ea38(lVar9,uVar7,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


