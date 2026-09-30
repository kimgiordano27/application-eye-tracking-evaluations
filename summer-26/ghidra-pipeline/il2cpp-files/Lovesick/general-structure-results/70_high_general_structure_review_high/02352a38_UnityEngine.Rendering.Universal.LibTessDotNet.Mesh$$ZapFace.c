/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.LibTessDotNet.Mesh$$ZapFace
ENTRY_POINT: 02352a38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02352b74) */

undefined8
UnityEngine_Rendering_Universal_LibTessDotNet_Mesh__ZapFace(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  int iStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_00000128;
  
  if (param_2 != 1) {
    FUN_012b8948(&stack0x00000100,
                 *(undefined8 *)
                  Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
                );
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(param_1);
  }
  plVar10 = (long *)__cxa_begin_catch(param_1);
  lVar13 = *plVar10;
  __cxa_end_catch();
  FUN_012b8948(&stack0x00000100,
               *(undefined8 *)
                Newtonsoft_Json_Utilities_ThreadSafeStore<string,_CallSite<Func<CallSite,_object,_object,_object>>>_TypeInfo
              );
  if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00dbe778(lVar13);
  }
  uVar6 = FUN_012998a8(in_stack_00000038,*(undefined8 *)StringLiteral_14358);
  lVar13 = FUN_010dfe04(uVar6,*(undefined8 *)StringLiteral_2051);
  uVar6 = FUN_01299a34(in_stack_00000038,*(undefined8 *)StringLiteral_12114);
  lVar7 = FUN_010dfe04(uVar6,*(undefined8 *)Method_System_Decimal_ToInt64__);
  if (lVar13 != 0) {
    if (0 < *(int *)(lVar13 + 0x18)) {
      iVar12 = 0;
      do {
        FUN_0132138c(lVar13,iVar12,&stack0x000000b0,*(undefined8 *)StringLiteral_10196);
        if (lVar7 == 0) goto LAB_02352944;
        lVar11 = CONCAT44(uStack00000000000000b4,iStack00000000000000b0);
        FUN_0132138c(lVar7,iVar12,&stack0x000000b0,*(undefined8 *)StringLiteral_4463);
        lVar3 = CONCAT44(uStack00000000000000b4,iStack00000000000000b0);
        if (lVar3 == 0) goto LAB_02352944;
        iVar1 = *(int *)(in_stack_00000048 + 0x18);
        uVar8 = FUN_0237620c(*(undefined8 *)(lVar3 + 0x18),&stack0x000000d8,0,0,0);
        uVar6 = in_stack_000000d8;
        if ((uVar8 & 1) != 0) {
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
          if (lVar9 == 0) goto LAB_02352944;
          FUN_022f9708(lVar9,uVar6,0);
          *(long *)(lVar3 + 0x10) = lVar9;
          if (lVar11 == 0) goto LAB_02352944;
          *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar11 + 0x48);
          FUN_022fa0bc(lVar9,iVar1,0);
          FUN_022f9954(lVar11,*(undefined8 *)(lVar3 + 0x10),0);
          puVar5 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
          puVar4 = 
          Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
          lVar11 = *(long *)(lVar3 + 0x18);
          if (lVar11 == 0) goto LAB_02352944;
          iVar14 = 0;
          while (iVar2 = *(int *)(lVar11 + 0x18), iVar14 < iVar2) {
            if (*(long *)(lVar3 + 0x20) == 0) goto LAB_02352944;
            FUN_0132138c(*(long *)(lVar3 + 0x20),iVar14,&stack0x000000b0,*(undefined8 *)puVar4);
            in_stack_00000128._4_4_ = iStack00000000000000b0;
            iStack00000000000000b0 = iVar1 + iVar14;
            FUN_0129a054();
            lVar11 = *(long *)(lVar3 + 0x18);
            iVar14 = iVar14 + 1;
            if (lVar11 == 0) goto LAB_02352944;
          }
          if (*(long *)(lVar3 + 0x28) == 0) goto LAB_02352944;
          if ((*(int *)(*(long *)(lVar3 + 0x28) + 0x18) == iVar2) && (0 < iVar2)) {
            iVar14 = 0;
            do {
              if ((*(long *)(lVar3 + 0x28) == 0) ||
                 (FUN_0132138c(*(long *)(lVar3 + 0x28),iVar14,&stack0x000000b0,*(undefined8 *)puVar4
                              ), in_stack_00000030 == 0)) goto LAB_02352944;
              in_stack_00000128._4_4_ = iStack00000000000000b0;
              iStack00000000000000b0 = iVar1 + iVar14;
              FUN_0129a054(in_stack_00000030,&stack0x000000b0,(long)&stack0x00000128 + 4,
                           *(undefined8 *)puVar5);
              lVar11 = *(long *)(lVar3 + 0x18);
              if (lVar11 == 0) goto LAB_02352944;
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)(lVar11 + 0x18));
          }
          FUN_01322050(in_stack_00000048,lVar11,
                       *(undefined8 *)Method_System_Linq_Enumerable_FirstOrDefault<Touch>__);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar13 + 0x18));
    }
    uVar6 = FUN_010d96e0(in_stack_00000020,*(undefined8 *)PTR_DAT_033eb5c8);
    uVar6 = FUN_010dfe04(uVar6,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WitRequest_<WaitForTimeout>d__96>__
                        );
    FUN_02310a38(in_stack_00000018,in_stack_00000048,0,0);
    FUN_0230ff4c(in_stack_00000018);
    FUN_02310070(in_stack_00000018,in_stack_00000030,0);
    FUN_02350998(in_stack_00000018,uVar6);
    return in_stack_00000028;
  }
LAB_02352944:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


