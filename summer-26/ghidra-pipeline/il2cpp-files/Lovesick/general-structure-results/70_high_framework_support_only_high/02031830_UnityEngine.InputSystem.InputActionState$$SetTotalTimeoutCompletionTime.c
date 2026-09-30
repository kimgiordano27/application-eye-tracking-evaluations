/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionState$$SetTotalTimeoutCompletionTime
ENTRY_POINT: 02031830
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_InputSystem_InputActionState__SetTotalTimeoutCompletionTime
               (ulong param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long *unaff_x21;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_ResourceLocator>_TryGetValue__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    *(undefined1 *)(unaff_x19 + 0xa2d) = 1;
  }
  FUN_017b46ec(param_2,0);
  puVar2 = Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__;
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x10) != 0x19) {
LAB_02031b48:
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar11 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar12 = thunk_FUN_00d48444(Method_System_Nullable<ReadOnlyArray<InputDevice>>_get_HasValue__)
      ;
      FUN_016f2f28(uVar11,uVar12,0);
      uVar12 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_131__);
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar11,uVar12);
    }
    plVar5 = (long *)FUN_0160ea3c(0x10,0);
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
    if (lVar6 != 0) {
      FUN_01320e50(lVar6,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo)
      ;
      lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
      if (lVar7 != 0) {
        FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033f6e48);
        puVar1 = PTR_DAT_033eb8c0;
        iVar4 = 0;
        while( true ) {
          if ((DAT_037809fe & 1) == 0) {
            thunk_FUN_00d48444(puVar1);
            DAT_037809fe = 1;
          }
          iVar3 = 0;
          if (*(long *)(param_4 + 0x18) != 0) {
            iVar3 = *(int *)(*(long *)(param_4 + 0x18) + 0x18);
          }
          if (iVar3 <= iVar4) break;
          lVar8 = FUN_0202c368(param_4,iVar4);
          if (lVar8 == 0) goto LAB_02031b44;
          iVar3 = *(int *)(lVar8 + 0x10);
          if (iVar3 == 9) {
            if (plVar5 == (long *)0x0) goto LAB_02031b44;
            FUN_0160cd0c(plVar5,*(undefined2 *)(lVar8 + 0x28),0);
          }
          else if (iVar3 == 0xd) {
            if (plVar5 == (long *)0x0) goto LAB_02031b44;
            iVar3 = FUN_0160b5d0(plVar5,0);
            if (0 < iVar3) {
              FUN_00ac20f0(lVar7,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)StringLiteral_4747);
              uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
              FUN_00ac1158(lVar6,uVar11,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
              FUN_0160bae4(plVar5,0,0);
            }
            iVar3 = *(int *)(lVar8 + 0x2c);
            if ((unaff_x21 != (long *)0x0) && (-1 < iVar3)) {
              in_stack_00000018._4_4_ = iVar3;
              thunk_FUN_00d61fa0(*(undefined8 *)puVar2,(long)&stack0x00000018 + 4);
              plVar9 = (long *)(**(code **)(*unaff_x21 + 0x308))();
              if (plVar9 == (long *)0x0) goto LAB_02031b44;
              if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_00da544c();
              }
              piVar10 = (int *)thunk_FUN_00d624a0();
              iVar3 = *piVar10;
            }
            FUN_00ac20f0(lVar7,-5 - iVar3,*(undefined8 *)StringLiteral_4747);
          }
          else {
            if (iVar3 != 0xc) goto LAB_02031b48;
            if (plVar5 == (long *)0x0) goto LAB_02031b44;
            FUN_0160c430(plVar5,*(undefined8 *)(lVar8 + 0x20),0);
          }
          iVar4 = iVar4 + 1;
        }
        if (plVar5 != (long *)0x0) {
          iVar4 = FUN_0160b5d0(plVar5,0);
          if (0 < iVar4) {
            FUN_00ac20f0(lVar7,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)StringLiteral_4747);
            uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
            FUN_00ac1158(lVar6,uVar11,
                         *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmax_u32__);
          }
          FUN_0160eb0c(plVar5,0);
          *(long *)(param_2 + 0x18) = lVar7;
          *(undefined8 *)(param_2 + 0x20) = param_3;
          *(long *)(param_2 + 0x10) = lVar6;
          return;
        }
      }
    }
  }
LAB_02031b44:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


