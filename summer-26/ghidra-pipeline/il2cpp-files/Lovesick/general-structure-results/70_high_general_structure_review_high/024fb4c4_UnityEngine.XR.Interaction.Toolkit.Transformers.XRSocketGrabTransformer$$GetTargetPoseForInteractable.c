/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer$$GetTargetPoseForInteractable
ENTRY_POINT: 024fb4c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer__GetTargetPoseForInteractable
               (void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar10;
  long unaff_x21;
  long unaff_x22;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_System_Xml_Linq_XProcessingInstruction_set_Data__);
  *(undefined1 *)(unaff_x19 + 0x887) = 1;
  if (unaff_x21 != 0) {
    lVar4 = FUN_024fa77c();
    if (lVar4 != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<Vector2>_get_Current__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar15 = FUN_026577d8();
      uVar8 = auVar15._8_8_;
      uVar5 = auVar15._0_8_;
      lVar4 = FUN_024fa77c();
      if (lVar4 != 0) {
        uVar13 = 0;
        plVar10 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
        plVar11 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        puVar12 = (undefined8 *)Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo;
        do {
          if (*(int *)(lVar4 + 0x18) <= (int)(uint)uVar13) {
            uVar13 = FUN_024fb8a4();
            uVar3 = in_stack_00000028;
            uVar2 = in_stack_00000020;
            if ((uVar13 & 1) == 0) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<Vector2>_get_Current__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_02657aec(uVar5,uVar8,0);
            }
            else {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<Vector2>_get_Current__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar15 = FUN_02657aec(uVar5,uVar8,0);
              FUN_024fbc88(unaff_x20,uVar2,uVar3,auVar15._0_8_,auVar15._8_8_);
            }
            return;
          }
          lVar4 = FUN_024fa77c();
          if (lVar4 == 0) break;
          if (*(uint *)(lVar4 + 0x18) <= (uint)uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar4 = *(long *)(lVar4 + uVar13 * 8 + 0x20);
          if (lVar4 == 0) break;
          plVar9 = *(long **)(lVar4 + 0x28);
          if (plVar9 == (long *)0x0) {
LAB_024fb5a0:
            plVar9 = (long *)0x0;
          }
          else {
            bVar1 = *(byte *)(*plVar10 + 300);
            if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_024fb5a0;
            if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *plVar10) {
              plVar9 = (long *)0x0;
            }
          }
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar6 = FUN_0268b4e0(plVar9,0,0);
          if ((uVar6 & 1) == 0) {
            if (plVar9 == (long *)0x0) {
LAB_024fb604:
              plVar14 = (long *)0x0;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_033eab50 + 300);
              if (*(byte *)(*plVar9 + 300) < bVar1) goto LAB_024fb604;
              plVar14 = plVar9;
              if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)PTR_DAT_033eab50) {
                plVar14 = (long *)0x0;
              }
            }
            if (*(int *)(*plVar11 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar6 = FUN_02681b9c(plVar14,0,0);
            if ((uVar6 & 1) != 0) {
              if (plVar14 == (long *)0x0) break;
              *(undefined4 *)(plVar14 + 9) = in_stack_00000010._4_4_;
            }
            if (plVar9 == (long *)0x0) break;
            auVar16 = (**(code **)(*plVar9 + 0x198))
                                (plVar9,in_stack_00000020,in_stack_00000028,in_stack_00000018,
                                 *(undefined8 *)(*plVar9 + 0x1a0));
            _in_stack_00000040 = auVar16;
            uVar6 = FUN_01131cc4(&stack0x00000040,*puVar12);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<Vector2>_get_Current__
                          + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              auVar17 = FUN_02657aec(uVar5,uVar8,0);
              lVar7 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_System_Xml_Linq_XProcessingInstruction_set_Data__);
              if (lVar7 == 0) break;
              FUN_017b46ec(lVar7,0);
              FUN_02511058(lVar7,lVar4,auVar16._0_8_,auVar16._8_8_,auVar17._0_8_,auVar17._8_8_);
              if (unaff_x22 == 0) break;
              FUN_01305fc8(unaff_x22,lVar7,
                           *(undefined8 *)
                            Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
              _in_stack_00000030 = auVar15;
              _in_stack_00000040 = auVar16;
              FUN_01132ae0(&stack0x00000020,&stack0x00000040,0,&stack0x00000030,uVar13 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_033f4c20);
              _in_stack_00000040 = auVar15;
              FUN_0113224c(0,&stack0x00000040,uVar13 & 0xffffffff,
                           *(undefined8 *)
                            Method_System_Reflection_Emit_TypeBuilder_IsPrimitiveImpl__);
              plVar10 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
              plVar11 = (long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
              puVar12 = (undefined8 *)Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo;
            }
          }
          lVar4 = FUN_024fa77c();
          uVar13 = uVar13 + 1;
        } while (lVar4 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


