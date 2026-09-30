/*
FUNCTION_NAME: Shapes.RegularPolygon$$set_FillRadialRadius
ENTRY_POINT: 037aa77c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Shapes_RegularPolygon__set_FillRadialRadius(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long unaff_x19;
  long *plVar15;
  long lVar16;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  puVar3 = StringLiteral_491;
  puVar1 = StringLiteral_488;
  puVar2 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  uVar6 = FUN_030f28e4();
  uVar7 = FUN_0356965c(&stack0x00000018,0);
  uVar6 = FUN_0340eee0(*(undefined8 *)puVar1,uVar6,*(undefined8 *)puVar3,uVar7,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  FUN_0403ea2c(uVar6,0);
  plVar15 = *(long **)(unaff_x19 + 0x30);
  if ((plVar15 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar15 + 0x5d8))(plVar15,*(undefined8 *)(*plVar15 + 0x5e0)),
     puVar3 = StringLiteral_485,
     puVar1 = Method_Unity_VisualScripting_BinaryOperatorHandler_Handle<double,_float>__,
     in_stack_00000010 != 0)) {
    uVar7 = FUN_030f28e4(in_stack_00000010,0,*unaff_x23);
    uVar6 = FUN_0340eee0(uVar6,*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar1,0);
    (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
    puVar5 = StringLiteral_480;
    puVar4 = StringLiteral_479;
    puVar3 = Method_Unity_VisualScripting_MemberUtility_<>c__DisplayClass58_0_<Disambiguate>b__0__;
    plVar15 = *(long **)(unaff_x19 + 0x30);
    if (plVar15 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar15 + 0x5d8))(plVar15,*(undefined8 *)(*plVar15 + 0x5e0));
      uVar7 = FUN_0356965c(&stack0x00000018,0);
      uVar6 = FUN_0340eee0(uVar6,*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar1,0);
      (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
      FUN_0403ea2c(*(undefined8 *)puVar5,0);
      lVar8 = FUN_034d18b8(*(undefined8 *)(unaff_x19 + 0x50),*(undefined8 *)puVar4,0);
      plVar15 = *(long **)(unaff_x19 + 0x30);
      if ((plVar15 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar15 + 0x5d8))(plVar15,*(undefined8 *)(*plVar15 + 0x5e0)),
         puVar3 = StringLiteral_490, puVar1 = StringLiteral_489, lVar8 != 0)) {
        in_stack_00000008._4_4_ = (uint)*(undefined8 *)(lVar8 + 0x18);
        uVar7 = FUN_035683d0((long)&stack0x00000008 + 4,0);
        uVar6 = FUN_0340eee0(uVar6,*(undefined8 *)puVar1,uVar7,*(undefined8 *)puVar3,0);
        (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
        if ((in_stack_00000010 != 0) &&
           (lVar9 = FUN_030f28e4(in_stack_00000010,0,*unaff_x23), puVar3 = StringLiteral_487,
           puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__, lVar9 != 0)) {
          uVar6 = FUN_034127bc(lVar9,0);
          uVar6 = FUN_03405678(*(undefined8 *)puVar3,uVar6,0);
          puVar5 = StringLiteral_482;
          puVar4 = StringLiteral_481;
          puVar3 = StringLiteral_477;
          in_stack_00000008._4_4_ = 0;
          uVar13 = *(uint *)(lVar8 + 0x18);
          if ((int)uVar13 < 1) {
            lVar9 = 0;
          }
          else {
            lVar16 = 0;
            do {
              if (uVar13 <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar10 = FUN_04032bcc(*(undefined8 *)
                                     (lVar8 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20),0);
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar11 = FUN_04073094(lVar10,0,0);
              if ((uVar11 & 1) == 0) {
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_0403ed64(*(undefined8 *)puVar5,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
              }
              else {
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar7 = FUN_040766fc(lVar10,0);
                lVar9 = FUN_03405678(*(undefined8 *)StringLiteral_483,uVar7,0);
                if (lVar9 == 0) {
                  uVar7 = *(undefined8 *)
                           Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__
                  ;
                }
                else {
                  uVar7 = FUN_040766fc(lVar10,0);
                }
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_0403ea2c(uVar7,0);
                lVar9 = *(long *)(unaff_x19 + 0x60);
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                lVar12 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)puVar3;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01f08a3c();
                }
                uVar13 = *(uint *)(lVar9 + 0x18);
                if (uVar13 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)(lVar9 + 0x18) = uVar13 + 1;
                  plVar15 = (long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
                  *plVar15 = lVar10;
                  thunk_FUN_01f51358(plVar15,lVar10);
                }
                else {
                  FUN_030f2bb4(lVar9,lVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar7 = FUN_040766fc(lVar10,0);
              uVar11 = thunk_FUN_0340e318(uVar7,uVar6,0);
              lVar9 = lVar10;
              if ((uVar11 & 1) == 0) {
                lVar9 = lVar16;
              }
              uVar7 = FUN_040766fc(lVar10,0);
              uVar11 = thunk_FUN_0340e318(uVar7,*(undefined8 *)puVar4,0);
              if ((uVar11 & 1) != 0) {
                FUN_037a8eec(lVar10);
              }
              in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
              uVar13 = *(uint *)(lVar8 + 0x18);
              lVar16 = lVar9;
            } while ((int)in_stack_00000008._4_4_ < (int)uVar13);
          }
          puVar2 = StringLiteral_492;
          plVar15 = *(long **)(unaff_x19 + 0x30);
          if (plVar15 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar15 + 0x5d8))(plVar15,*(undefined8 *)(*plVar15 + 0x5e0));
            uVar6 = FUN_03405678(uVar6,*(undefined8 *)puVar2,0);
            (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar11 = FUN_04073094(lVar9,0,0);
            plVar15 = *(long **)(unaff_x19 + 0x30);
            if (plVar15 != (long *)0x0) {
              uVar6 = (**(code **)(*plVar15 + 0x5d8))(plVar15,*(undefined8 *)(*plVar15 + 0x5e0));
              if ((uVar11 & 1) == 0) {
                uVar6 = FUN_03405678(uVar6,*(undefined8 *)StringLiteral_486,0);
                (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
                return;
              }
              uVar6 = FUN_03405678(uVar6,*(undefined8 *)StringLiteral_484,0);
              (**(code **)(*plVar15 + 0x5e8))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x5f0));
              plVar15 = *(long **)(unaff_x19 + 0x30);
              if (plVar15 != (long *)0x0) {
                uVar6 = (**(code **)(*plVar15 + 0x5d8))(plVar15,*(undefined8 *)(*plVar15 + 0x5e0));
                *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
                thunk_FUN_01f51358();
                if ((lVar9 != 0) && (lVar8 = FUN_04032eb8(lVar9,0), lVar8 != 0)) {
                  if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01f08a44();
                  }
                  uVar6 = *(undefined8 *)(lVar8 + 0x20);
                  if (*(int *)(*(long *)
                                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                                      );
                  }
                  uVar6 = FUN_034e4458(uVar6,0);
                  if (*(int *)(*(long *)
                                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                              + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c(*(long *)
                                        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                                      );
                  }
                  lVar8 = FUN_040857c8(uVar6,0);
                  plVar15 = (long *)(unaff_x19 + 0x38);
                  *plVar15 = lVar8;
                  thunk_FUN_01f51358(plVar15,lVar8);
                  lVar8 = *plVar15;
                  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_476);
                  System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                            ();
                  if (lVar8 != 0) {
                    FUN_0406ea38(lVar8,uVar6,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


