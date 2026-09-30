/*
FUNCTION_NAME: FUN_024fb420
ENTRY_POINT: 024fb420
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_024fb420(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,undefined4 param_7)

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
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  local_90 = param_2;
  local_88 = param_3;
  if ((DAT_03782887 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Vector2>_get_Current__);
    thunk_FUN_00d48444(PTR_DAT_033eab50);
    thunk_FUN_00d48444(Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Serialization_XmlSerializer_Deserialize__);
    thunk_FUN_00d48444(Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_TypeBuilder_IsPrimitiveImpl__);
    thunk_FUN_00d48444(PTR_DAT_033f4c20);
    thunk_FUN_00d48444(Method_System_Xml_Linq_XProcessingInstruction_set_Data__);
    DAT_03782887 = 1;
  }
  if (param_4 != 0) {
    lVar4 = FUN_024fa77c(param_4);
    if (lVar4 != 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List_Enumerator<Vector2>_get_Current__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      auVar15 = FUN_026577d8(param_2,param_3,*(undefined4 *)(lVar4 + 0x18),0);
      uVar8 = auVar15._8_8_;
      uVar5 = auVar15._0_8_;
      lVar4 = FUN_024fa77c(param_4);
      if (lVar4 != 0) {
        uVar13 = 0;
        plVar10 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
        plVar11 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        puVar12 = (undefined8 *)Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo;
        do {
          if (*(int *)(lVar4 + 0x18) <= (int)(uint)uVar13) {
            uVar13 = FUN_024fb8a4(param_4);
            uVar3 = local_88;
            uVar2 = local_90;
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
              FUN_024fbc88(param_1,uVar2,uVar3,auVar15._0_8_,auVar15._8_8_);
            }
            return;
          }
          lVar4 = FUN_024fa77c(param_4);
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
              *(undefined4 *)(plVar14 + 9) = param_7;
            }
            if (plVar9 == (long *)0x0) break;
            auVar16 = (**(code **)(*plVar9 + 0x198))
                                (plVar9,local_90,local_88,param_5,*(undefined8 *)(*plVar9 + 0x1a0));
            local_70 = auVar16;
            uVar6 = FUN_01131cc4(local_70,*puVar12);
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
              if (param_6 == 0) break;
              FUN_01305fc8(param_6,lVar7,
                           *(undefined8 *)
                            Method_System_Threading_Tasks_TaskExceptionHolder_AddFaultException__);
              local_80 = auVar15;
              local_70 = auVar16;
              FUN_01132ae0(&local_90,local_70,0,local_80,uVar13 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_033f4c20);
              local_70 = auVar15;
              FUN_0113224c(0,local_70,uVar13 & 0xffffffff,
                           *(undefined8 *)
                            Method_System_Reflection_Emit_TypeBuilder_IsPrimitiveImpl__);
              plVar10 = (long *)Method_System_Xml_Serialization_XmlSerializer_Deserialize__;
              plVar11 = (long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
              puVar12 = (undefined8 *)Oculus_Interaction_FirstHoverInteractorGroup_<>c_TypeInfo;
            }
          }
          lVar4 = FUN_024fa77c(param_4);
          uVar13 = uVar13 + 1;
        } while (lVar4 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


