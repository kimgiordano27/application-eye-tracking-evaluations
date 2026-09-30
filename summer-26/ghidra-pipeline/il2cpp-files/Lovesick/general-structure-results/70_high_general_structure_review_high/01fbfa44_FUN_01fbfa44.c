/*
FUNCTION_NAME: FUN_01fbfa44
ENTRY_POINT: 01fbfa44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01fbfa44(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *local_70;
  long local_68;
  
  if ((DAT_037806a0 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ec070);
    thunk_FUN_00d48444(Method_System_Xml_XmlWellFormedWriter_WriteEntityRef__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XdrBuilder_AddOrder__);
    DAT_037806a0 = 1;
  }
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  local_70 = (long *)0x0;
  local_68 = 0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar11 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar9 = thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    FUN_016ec5b8(uVar11,uVar9,0);
    uVar9 = thunk_FUN_00d48444(Method_System_Nullable<NullValueHandling>_GetValueOrDefault__);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar11,uVar9);
  }
  *param_5 = 0;
  puVar4 = Method_System_Xml_Schema_XdrBuilder_AddOrder__;
  puVar3 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
  puVar1 = PTR_DAT_033ec070;
  if (*param_2 == *(long *)puVar2) {
    lVar7 = (**(code **)(*param_1 + 0x238))
                      (param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(*param_1 + 0x240));
    return lVar7;
  }
  local_68 = 0;
  lVar7 = param_1[7];
  if (lVar7 != 0) {
    lVar10 = 4;
    do {
      uVar8 = (int)lVar10 - 4;
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar8) {
        uVar11 = 0;
LAB_01fbfbcc:
        if (local_68 != 0) {
          uVar6 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
          if ((uVar6 & 1) != 0) {
            plVar5 = (long *)(**(code **)(*param_1 + 0x1f8))
                                       (param_1,*(undefined8 *)(*param_1 + 0x200));
            lVar7 = local_68;
            uVar9 = *(undefined8 *)
                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputAction>_AppendWithCapacity__
            ;
            if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_01780344(uVar9,0);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar5 = (long *)(**(code **)(*plVar5 + 0x508))
                                       (plVar5,lVar7,uVar9,param_4,*(undefined8 *)(*plVar5 + 0x510))
            ;
            if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c();
            }
            lVar7 = *(long *)puVar3;
            local_70 = plVar5;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar7);
              lVar7 = *(long *)puVar3;
            }
            plVar5 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x98);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar7 = (**(code **)(*plVar5 + 0x178))
                              (plVar5,&local_70,param_1,*(undefined8 *)(*plVar5 + 0x180));
            if (lVar7 != 0) {
              return lVar7;
            }
          }
          lVar7 = local_68;
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Xml_XmlWellFormedWriter_WriteEntityRef__);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_017b46ec(lVar10,0);
          *(undefined8 *)(lVar10 + 0x10) = uVar11;
          *(long *)(lVar10 + 0x18) = lVar7;
          *param_5 = lVar10;
          uVar6 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar7 = *(long *)puVar3;
            }
            plVar5 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x98);
            if (plVar5 != (long *)0x0) {
              lVar7 = (**(code **)(*plVar5 + 0x188))
                                (plVar5,*param_5,param_1,*(undefined8 *)(*plVar5 + 400));
              return lVar7;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          return 0;
        }
        uVar11 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar7 != 0) {
          FUN_01eb6550(lVar7,*(undefined8 *)puVar4,uVar11,0);
          return lVar7;
        }
        break;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar8) {
LAB_01fbfd90:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar7 = *(long *)(lVar7 + lVar10 * 8);
      if ((lVar7 == 0) || (plVar5 = *(long **)(lVar7 + 0x68), plVar5 == (long *)0x0)) break;
      lVar7 = (**(code **)(*plVar5 + 0x248))
                        (plVar5,param_2,param_3,param_4,&local_68,*(undefined8 *)(*plVar5 + 0x250));
      if (lVar7 == 0) {
        lVar7 = param_1[7];
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_01fbfd90;
          uVar11 = *(undefined8 *)(lVar7 + lVar10 * 8);
          goto LAB_01fbfbcc;
        }
        break;
      }
      lVar7 = param_1[7];
      lVar10 = lVar10 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


