/*
FUNCTION_NAME: Shapes.RegularPolygon$$set_FillLinearEnd
ENTRY_POINT: 037aa8fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void Shapes_RegularPolygon__set_FillLinearEnd(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long unaff_x19;
  long *plVar14;
  long lVar15;
  undefined8 *unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  lVar5 = FUN_034d18b8(param_1,param_2,0);
  plVar14 = *(long **)(unaff_x19 + 0x30);
  if ((plVar14 != (long *)0x0) &&
     (uVar6 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0)),
     puVar2 = StringLiteral_490, puVar1 = StringLiteral_489, lVar5 != 0)) {
    in_stack_00000008._4_4_ = (uint)*(undefined8 *)(lVar5 + 0x18);
    uVar7 = FUN_035683d0((long)&stack0x00000008 + 4,0);
    uVar6 = FUN_0340eee0(uVar6,*(undefined8 *)puVar1,uVar7,*(undefined8 *)puVar2,0);
    (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x5f0));
    if ((in_stack_00000010 != 0) &&
       (lVar8 = FUN_030f28e4(in_stack_00000010,0,*unaff_x23), puVar2 = StringLiteral_487,
       puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__, lVar8 != 0)) {
      uVar6 = FUN_034127bc(lVar8,0);
      uVar6 = FUN_03405678(*(undefined8 *)puVar2,uVar6,0);
      puVar4 = StringLiteral_482;
      puVar3 = StringLiteral_481;
      puVar2 = StringLiteral_477;
      in_stack_00000008._4_4_ = 0;
      uVar12 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar12 < 1) {
        lVar8 = 0;
      }
      else {
        lVar15 = 0;
        do {
          if (uVar12 <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar9 = FUN_04032bcc(*(undefined8 *)
                                (lVar5 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_04073094(lVar9,0,0);
          if ((uVar10 & 1) == 0) {
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403ed64(*(undefined8 *)puVar4,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
          }
          else {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar7 = FUN_040766fc(lVar9,0);
            lVar8 = FUN_03405678(*(undefined8 *)StringLiteral_483,uVar7,0);
            if (lVar8 == 0) {
              uVar7 = *(undefined8 *)
                       Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__;
            }
            else {
              uVar7 = FUN_040766fc(lVar9,0);
            }
            if (*(int *)(*unaff_x25 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403ea2c(uVar7,0);
            lVar8 = *(long *)(unaff_x19 + 0x60);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)puVar2;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar12 = *(uint *)(lVar8 + 0x18);
            if (uVar12 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar12 + 1;
              plVar14 = (long *)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
              *plVar14 = lVar9;
              thunk_FUN_01f51358(plVar14,lVar9);
            }
            else {
              FUN_030f2bb4(lVar8,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar7 = FUN_040766fc(lVar9,0);
          uVar10 = thunk_FUN_0340e318(uVar7,uVar6,0);
          lVar8 = lVar9;
          if ((uVar10 & 1) == 0) {
            lVar8 = lVar15;
          }
          uVar7 = FUN_040766fc(lVar9,0);
          uVar10 = thunk_FUN_0340e318(uVar7,*(undefined8 *)puVar3,0);
          if ((uVar10 & 1) != 0) {
            FUN_037a8eec(lVar9);
          }
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          uVar12 = *(uint *)(lVar5 + 0x18);
          lVar15 = lVar8;
        } while ((int)in_stack_00000008._4_4_ < (int)uVar12);
      }
      puVar2 = StringLiteral_492;
      plVar14 = *(long **)(unaff_x19 + 0x30);
      if (plVar14 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0));
        uVar6 = FUN_03405678(uVar6,*(undefined8 *)puVar2,0);
        (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x5f0));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_04073094(lVar8,0,0);
        plVar14 = *(long **)(unaff_x19 + 0x30);
        if (plVar14 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0));
          if ((uVar10 & 1) == 0) {
            uVar6 = FUN_03405678(uVar6,*(undefined8 *)StringLiteral_486,0);
            (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x5f0));
            return;
          }
          uVar6 = FUN_03405678(uVar6,*(undefined8 *)StringLiteral_484,0);
          (**(code **)(*plVar14 + 0x5e8))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x5f0));
          plVar14 = *(long **)(unaff_x19 + 0x30);
          if (plVar14 != (long *)0x0) {
            uVar6 = (**(code **)(*plVar14 + 0x5d8))(plVar14,*(undefined8 *)(*plVar14 + 0x5e0));
            *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
            thunk_FUN_01f51358();
            if ((lVar8 != 0) && (lVar5 = FUN_04032eb8(lVar8,0), lVar5 != 0)) {
              if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              uVar6 = *(undefined8 *)(lVar5 + 0x20);
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
              lVar5 = FUN_040857c8(uVar6,0);
              plVar14 = (long *)(unaff_x19 + 0x38);
              *plVar14 = lVar5;
              thunk_FUN_01f51358(plVar14,lVar5);
              lVar5 = *plVar14;
              uVar6 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_476);
              System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                        ();
              if (lVar5 != 0) {
                FUN_0406ea38(lVar5,uVar6,0);
                return;
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


