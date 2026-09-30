/*
FUNCTION_NAME: FUN_014e2840
ENTRY_POINT: 014e2840
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_014e2840(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  if ((DAT_03776f89 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_FieldInfo>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(
                      Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TriangulationPoint>_Remove__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_RingBuffer<RANSACVelocity_TimedPose>_get_Item__);
    thunk_FUN_00d48444(Method_System_Data_DataCommonEventSource_Trace<int,_ListChangedType>__);
    thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f7218);
    DAT_03776f89 = 1;
  }
  plVar5 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar4 = Method_System_Text_RegularExpressions_GroupCollection_System_Collections_IList_Clear__;
  puVar3 = Method_System_Data_DataCommonEventSource_Trace<int,_ListChangedType>__;
  puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__;
  puVar1 = PTR_DAT_033f7218;
  if (plVar5 != (long *)0x0) {
    FUN_0160aa4c(plVar5,0);
    FUN_0160c430(plVar5,*(undefined8 *)puVar1,0);
    uVar6 = FUN_01600424(*(undefined8 *)puVar3,**(undefined8 **)(*(long *)puVar4 + 0xb8),
                         *(undefined8 *)puVar2,0);
    FUN_0160c430(plVar5,uVar6,0);
    uVar6 = FUN_01600424(*(undefined8 *)puVar3,
                         *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),
                         *(undefined8 *)puVar2,0);
    FUN_0160c430(plVar5,uVar6,0);
    puVar3 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
    puVar2 = Method_Oculus_Interaction_RingBuffer<RANSACVelocity_TimedPose>_get_Item__;
    puVar1 = Method_System_Collections_Generic_List<TriangulationPoint>_Remove__;
    if (param_1 != (long *)0x0) {
      lVar11 = *param_1;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_014e29fc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_00d59724(param_1,*(long *)
                                     Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                            ,2);
LAB_014e29fc:
      uVar8 = (*(code *)*puVar7)(param_1,puVar7[1]);
      uVar13 = FUN_015ff8a0(uVar8,0);
      uVar6 = *(undefined8 *)puVar1;
      if ((uVar13 & 1) == 0) {
        uVar6 = uVar8;
      }
      uVar6 = FUN_015f5b28(*(undefined8 *)puVar3,uVar6,0);
      FUN_0160c430(plVar5,uVar6,0);
      uVar6 = FUN_015f5b28(*(undefined8 *)puVar3,
                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
      FUN_0160c430(plVar5,uVar6,0);
      FUN_0160c430(plVar5,*(undefined8 *)puVar2,0);
      uVar6 = FUN_015f5b28(*(undefined8 *)puVar3,
                           *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
      FUN_0160c430(plVar5,uVar6,0);
      plVar9 = *(long **)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
      if (plVar9 != (long *)0x0) {
        lVar11 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        puVar1 = System_Collections_Generic_Dictionary<string,_FieldInfo>_TypeInfo;
        if (lVar11 == 0) goto LAB_014e2b70;
        if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
          uVar13 = 0;
          uVar12 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
          do {
            if (uVar12 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar15 = *(long *)(lVar11 + 0x20 + uVar13 * 8);
            if (lVar15 == 0) goto LAB_014e2b70;
            uVar6 = *(undefined8 *)puVar1;
            lVar10 = thunk_FUN_00d6225c(lVar15,uVar6);
            if (lVar10 == 0) {
LAB_014e2b64:
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(lVar15,uVar6);
            }
            uVar6 = *(undefined8 *)puVar1;
            lVar10 = thunk_FUN_00d6225c(lVar15,uVar6);
            if (lVar10 == 0) goto LAB_014e2b64;
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),plVar5,*(undefined8 *)(lVar10 + 0x28));
            uVar12 = (ulong)*(uint *)(lVar11 + 0x18);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(lVar11 + 0x18));
        }
      }
                    /* WARNING: Could not recover jumptable at 0x014e2b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
LAB_014e2b70:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


