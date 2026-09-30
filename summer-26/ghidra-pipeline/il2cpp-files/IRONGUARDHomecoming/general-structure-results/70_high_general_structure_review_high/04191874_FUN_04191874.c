/*
FUNCTION_NAME: FUN_04191874
ENTRY_POINT: 04191874
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


long FUN_04191874(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar8;
  int local_48 [2];
  long local_40;
  undefined8 local_28;
  undefined *puVar7;
  
  if ((DAT_04840c39 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458db40);
    thunk_FUN_01efb3a4(PTR_DAT_0458db48);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_0458dad8);
    thunk_FUN_01efb3a4(PTR_DAT_0458cf00);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_Pop__
                      );
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    DAT_04840c39 = 1;
  }
  local_28 = 0;
  if (param_2 == 0) {
LAB_04191ac4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_04190fcc(local_48,param_2);
  if (local_48[0] == 0x12) {
    FUN_04191c44(local_48,param_2);
    if (local_48[0] == 8) {
      lVar2 = FUN_04192130(param_1,param_2);
    }
    else {
      if (local_48[0] != 1) {
        uVar5 = thunk_FUN_01efb3a4(PTR_DAT_0458dab0);
        uVar5 = thunk_FUN_01f113fc(uVar5,local_48);
        puVar7 = PTR_DAT_0458db60;
        goto LAB_04191b3c;
      }
      if (*(int *)(*(long *)PTR_DAT_0458cf00 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar1 = FUN_04183bf4(local_40,&local_28,0);
      if ((uVar1 & 1) == 0) {
        uVar5 = *(undefined8 *)PTR_DAT_0458db40;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03579868(uVar5,0);
        if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar6 = FUN_03410770(local_40,*(undefined8 *)
                                       Method_System_Collections_Generic_Stack<ProbeBrickPool_BrickChunkAlloc>_Pop__
                             ,*(undefined8 *)
                               Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__
                             ,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar3 = (long *)FUN_0359d4c0(uVar5,uVar6,1,0);
        if (plVar3 == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          if (*(long *)(*plVar3 + 0x40) != *(long *)(*(long *)PTR_DAT_0458db48 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          puVar4 = (undefined4 *)thunk_FUN_01f11920();
          uVar8 = *puVar4;
        }
        lVar2 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458dad8);
        FUN_04190084(lVar2,1);
        if (lVar2 == 0) goto LAB_04191ac4;
        *(undefined4 *)(lVar2 + 0x20) = uVar8;
      }
      else {
        lVar2 = FUN_04191fd4(param_1,local_28);
      }
      FUN_04191c44(local_48,param_2);
    }
    FUN_04190fcc(local_48,param_2);
    if (local_48[0] == 0x13) {
      FUN_04191c44(local_48,param_2);
      return lVar2;
    }
    uVar5 = thunk_FUN_01efb3a4(PTR_DAT_0458dab0);
    uVar5 = thunk_FUN_01f113fc(uVar5,local_48);
    puVar7 = PTR_DAT_0458db58;
  }
  else {
    uVar5 = thunk_FUN_01efb3a4(PTR_DAT_0458dab0);
    uVar5 = thunk_FUN_01f113fc(uVar5,local_48);
    puVar7 = PTR_DAT_0458db50;
  }
LAB_04191b3c:
  uVar6 = thunk_FUN_01efb3a4(puVar7);
  uVar5 = FUN_03406290(uVar6,uVar5,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AssetFileDeleteResult>_get_Data__);
  uVar6 = thunk_FUN_01f117cc();
  Oculus_Interaction_Input_SyntheticHand__SetJointFreedom(uVar6,uVar5,0);
  uVar5 = thunk_FUN_01efb3a4(PTR_DAT_0458db68);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar5);
}


