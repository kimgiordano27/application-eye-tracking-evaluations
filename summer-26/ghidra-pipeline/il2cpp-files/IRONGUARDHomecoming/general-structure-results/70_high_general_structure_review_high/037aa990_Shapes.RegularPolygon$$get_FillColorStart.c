/*
FUNCTION_NAME: Shapes.RegularPolygon$$get_FillColorStart
ENTRY_POINT: 037aa990
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Shapes_RegularPolygon__get_FillColorStart(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long unaff_x19;
  long lVar14;
  long unaff_x21;
  long *unaff_x25;
  uint uStack000000000000000c;
  
  lVar5 = FUN_030f28e4();
  puVar2 = StringLiteral_487;
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (lVar5 != 0) {
    uVar6 = FUN_034127bc(lVar5,0);
    uVar6 = FUN_03405678(*(undefined8 *)puVar2,uVar6,0);
    puVar4 = StringLiteral_482;
    puVar3 = StringLiteral_481;
    puVar2 = StringLiteral_477;
    uStack000000000000000c = 0;
    uVar12 = *(uint *)(unaff_x21 + 0x18);
    if ((int)uVar12 < 1) {
      lVar5 = 0;
    }
    else {
      lVar14 = 0;
      do {
        if (uVar12 <= uStack000000000000000c) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar7 = FUN_04032bcc(*(undefined8 *)
                              (unaff_x21 + (long)(int)uStack000000000000000c * 8 + 0x20),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_04073094(lVar7,0,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403ed64(*(undefined8 *)puVar4,0);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
        }
        else {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar9 = FUN_040766fc(lVar7,0);
          lVar5 = FUN_03405678(*(undefined8 *)StringLiteral_483,uVar9,0);
          if (lVar5 == 0) {
            uVar9 = *(undefined8 *)
                     Method_System_Collections_Specialized_CaseSensitiveStringDictionary_Add__;
          }
          else {
            uVar9 = FUN_040766fc(lVar7,0);
          }
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403ea2c(uVar9,0);
          lVar5 = *(long *)(unaff_x19 + 0x60);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = *(long *)(lVar5 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar12 = *(uint *)(lVar5 + 0x18);
          if (uVar12 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar12 + 1;
            plVar11 = (long *)(lVar10 + (long)(int)uVar12 * 8 + 0x20);
            *plVar11 = lVar7;
            thunk_FUN_01f51358(plVar11,lVar7);
          }
          else {
            FUN_030f2bb4(lVar5,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar9 = FUN_040766fc(lVar7,0);
        uVar8 = thunk_FUN_0340e318(uVar9,uVar6,0);
        lVar5 = lVar7;
        if ((uVar8 & 1) == 0) {
          lVar5 = lVar14;
        }
        uVar9 = FUN_040766fc(lVar7,0);
        uVar8 = thunk_FUN_0340e318(uVar9,*(undefined8 *)puVar3,0);
        if ((uVar8 & 1) != 0) {
          FUN_037a8eec(lVar7);
        }
        uStack000000000000000c = uStack000000000000000c + 1;
        uVar12 = *(uint *)(unaff_x21 + 0x18);
        lVar14 = lVar5;
      } while ((int)uStack000000000000000c < (int)uVar12);
    }
    puVar2 = StringLiteral_492;
    plVar11 = *(long **)(unaff_x19 + 0x30);
    if (plVar11 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
      uVar6 = FUN_03405678(uVar6,*(undefined8 *)puVar2,0);
      (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x5f0));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar8 = FUN_04073094(lVar5,0,0);
      plVar11 = *(long **)(unaff_x19 + 0x30);
      if (plVar11 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
        if ((uVar8 & 1) == 0) {
          uVar6 = FUN_03405678(uVar6,*(undefined8 *)StringLiteral_486,0);
          (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x5f0));
          return;
        }
        uVar6 = FUN_03405678(uVar6,*(undefined8 *)StringLiteral_484,0);
        (**(code **)(*plVar11 + 0x5e8))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x5f0));
        plVar11 = *(long **)(unaff_x19 + 0x30);
        if (plVar11 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar11 + 0x5d8))(plVar11,*(undefined8 *)(*plVar11 + 0x5e0));
          *(undefined8 *)(unaff_x19 + 0x40) = uVar6;
          thunk_FUN_01f51358();
          if ((lVar5 != 0) && (lVar5 = FUN_04032eb8(lVar5,0), lVar5 != 0)) {
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
            plVar11 = (long *)(unaff_x19 + 0x38);
            *plVar11 = lVar5;
            thunk_FUN_01f51358(plVar11,lVar5);
            lVar5 = *plVar11;
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


