/*
FUNCTION_NAME: Shapes.RegularPolygon$$set_FillColorStart
ENTRY_POINT: 037aa99c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Shapes_RegularPolygon__set_FillColorStart(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x21;
  long *unaff_x25;
  uint uStack000000000000000c;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  puVar14 = *(undefined8 **)(unaff_x20 + 0xb10);
  uVar5 = FUN_034127bc(param_1,0);
  uVar5 = FUN_03405678(*puVar14,uVar5,0);
  puVar4 = StringLiteral_482;
  puVar3 = StringLiteral_481;
  puVar2 = StringLiteral_477;
  uStack000000000000000c = 0;
  uVar12 = *(uint *)(unaff_x21 + 0x18);
  if ((int)uVar12 < 1) {
    lVar9 = 0;
  }
  else {
    lVar15 = 0;
    do {
      if (uVar12 <= uStack000000000000000c) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar6 = FUN_04032bcc(*(undefined8 *)(unaff_x21 + (long)(int)uStack000000000000000c * 8 + 0x20)
                           ,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar7 = FUN_04073094(lVar6,0,0);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ed64(*(undefined8 *)puVar4,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
      else {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = FUN_040766fc(lVar6,0);
        lVar9 = FUN_03405678(*(undefined8 *)StringLiteral_483,uVar8,0);
        if (lVar9 == 0) {
          uVar8 = *(undefined8 *)
                   Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__;
        }
        else {
          uVar8 = FUN_040766fc(lVar6,0);
        }
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403ea2c(uVar8,0);
        lVar9 = *(long *)(unaff_x19 + 0x60);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)puVar2;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = *(uint *)(lVar9 + 0x18);
        if (uVar12 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar12 + 1;
          plVar11 = (long *)(lVar10 + (long)(int)uVar12 * 8 + 0x20);
          *plVar11 = lVar6;
          thunk_FUN_01f51358(plVar11,lVar6);
        }
        else {
          FUN_030f2bb4(lVar9,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar8 = FUN_040766fc(lVar6,0);
      uVar7 = thunk_FUN_0340e318(uVar8,uVar5,0);
      lVar9 = lVar6;
      if ((uVar7 & 1) == 0) {
        lVar9 = lVar15;
      }
      uVar8 = FUN_040766fc(lVar6,0);
      uVar7 = thunk_FUN_0340e318(uVar8,*(undefined8 *)puVar3,0);
      if ((uVar7 & 1) != 0) {
        FUN_037a8eec(lVar6);
      }
      uStack000000000000000c = uStack000000000000000c + 1;
      uVar12 = *(uint *)(unaff_x21 + 0x18);
      lVar15 = lVar9;
    } while ((int)uStack000000000000000c < (int)uVar12);
  }
  puVar2 = StringLiteral_492;
  plVar11 = *(long **)(unaff_x19 + 0x30);
  if (plVar11 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
    uVar5 = FUN_03405678(uVar5,*(undefined8 *)puVar2,0);
    (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x5f0));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_04073094(lVar9,0,0);
    plVar11 = *(long **)(unaff_x19 + 0x30);
    if (plVar11 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
      if ((uVar7 & 1) == 0) {
        uVar5 = FUN_03405678(uVar5,*(undefined8 *)StringLiteral_486,0);
        (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x5f0));
        return;
      }
      uVar5 = FUN_03405678(uVar5,*(undefined8 *)StringLiteral_484,0);
      (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar5,*(undefined8 *)(*plVar11 + 0x5f0));
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
        *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
        thunk_FUN_01f51358();
        if ((lVar9 != 0) && (lVar9 = FUN_04032eb8(lVar9,0), lVar9 != 0)) {
          if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          uVar5 = *(undefined8 *)(lVar9 + 0x20);
          if (*(int *)(*(long *)
                        Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                              );
          }
          uVar5 = FUN_034e4458(uVar5,0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)
                                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_get_valid__
                              );
          }
          lVar9 = FUN_040857c8(uVar5,0);
          plVar11 = (long *)(unaff_x19 + 0x38);
          *plVar11 = lVar9;
          thunk_FUN_01f51358(plVar11,lVar9);
          lVar9 = *plVar11;
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_476);
          System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                    ();
          if (lVar9 != 0) {
            FUN_0406ea38(lVar9,uVar5,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


