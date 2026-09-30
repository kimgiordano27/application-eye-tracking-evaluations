/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b582d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__System_Collections_IEnumerator_get_Current
               (long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if ((DAT_04831266 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<ParameterInfo,_string>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04831266 = 1;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(3,0);
  }
  iVar1 = thunk_FUN_01eca4a4(param_2,0);
  if (iVar1 != 1) {
    FUN_0358b15c(7,0);
  }
  iVar1 = thunk_FUN_01eca460(param_2,0,0);
  if (iVar1 != 0) {
    FUN_0358b15c(6,0);
  }
  uVar2 = FUN_03582fa8(param_2,0);
  if (uVar2 < param_3) {
    FUN_0358b9dc(0);
  }
  iVar1 = FUN_03582fa8(param_2,0);
  if ((int)(iVar1 - param_3) < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x28)) {
    FUN_0358b15c(5,0);
  }
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x128);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
  }
  lVar8 = thunk_FUN_01f116d0(param_2,lVar8);
  if (lVar8 != 0) {
    FUN_02b56ca0(param_1,lVar8,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x160));
    return;
  }
  lVar8 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                      Method_System_Linq_Enumerable_Select<ParameterInfo,_string>__)
  ;
  if (lVar8 == 0) {
    plVar4 = (long *)thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar4 == (long *)0x0) {
      FUN_0358ba14();
    }
    uVar2 = *(uint *)(param_1 + 0x20);
    if (0 < (int)uVar2) {
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = 0;
      lVar9 = lVar8 + 0x30;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(lVar9 + -0x10)) {
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          FUN_0301af1c(&stack0x00000040,*(undefined8 *)(lVar9 + -8));
          lVar5 = thunk_FUN_01f113fc(*(undefined8 *)
                                      (*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xa8));
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
            uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar7,0);
          }
          if (*(uint *)(plVar4 + 3) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar4[(long)(int)param_3 + 4] = lVar5;
          thunk_FUN_01f51358(plVar4 + (long)(int)param_3 + 4,lVar5);
          param_3 = param_3 + 1;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x28;
      } while (uVar2 != uVar10);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      lVar9 = *(long *)(param_1 + 0x18);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = 0;
      puVar11 = (undefined8 *)(lVar9 + 0x30);
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_02b585e8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        if (-1 < *(int *)(puVar11 + -2)) {
          in_stack_00000050 = puVar11[2];
          in_stack_00000048 = puVar11[1];
          in_stack_00000040 = *puVar11;
          thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78),
                             &stack0x00000040);
          FUN_0353c748();
          if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_02b585e8;
          lVar5 = lVar8 + (long)(int)param_3 * 0x10;
          puVar3 = (undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x28) = 0;
          *puVar3 = 0;
          param_3 = param_3 + 1;
          thunk_FUN_01f51358(puVar3,0);
          iVar1 = *(int *)(param_1 + 0x20);
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 5;
      } while ((long)uVar10 < (long)iVar1);
    }
  }
  return;
}


