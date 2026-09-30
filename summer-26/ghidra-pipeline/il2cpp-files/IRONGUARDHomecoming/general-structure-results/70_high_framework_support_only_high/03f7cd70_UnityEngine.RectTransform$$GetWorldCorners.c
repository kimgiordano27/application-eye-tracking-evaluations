/*
FUNCTION_NAME: UnityEngine.RectTransform$$GetWorldCorners
ENTRY_POINT: 03f7cd70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f7d100) */

undefined8 UnityEngine_RectTransform__GetWorldCorners(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined4 uVar10;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  do {
    lVar1 = thunk_FUN_01f116d0(param_1,param_2);
    param_1 = unaff_x23;
    if (lVar1 == 0) {
      uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,0);
    }
    do {
      if ((int)unaff_x22[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      unaff_x22[4] = param_1;
      thunk_FUN_01f51358(unaff_x22 + 4,param_1);
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar2 = (long *)thunk_FUN_01ecaf38(unaff_x21,0);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar1 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
      if ((lVar1 != 0) &&
         (lVar3 = thunk_FUN_01f116d0(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,0);
      }
      if (*(uint *)(unaff_x22 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      unaff_x22[5] = lVar1;
      thunk_FUN_01f51358(unaff_x22 + 5,lVar1);
      uStack0000000000000008 =
           (**(code **)(*unaff_x21 + 0x158))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x160));
      lVar1 = thunk_FUN_01f113fc(*unaff_x28,&stack0x00000008);
      if ((lVar1 != 0) &&
         (lVar3 = thunk_FUN_01f116d0(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,0);
      }
      if (*(uint *)(unaff_x22 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      unaff_x22[6] = lVar1;
      thunk_FUN_01f51358(unaff_x22 + 6,lVar1);
      lVar1 = FUN_040766fc(unaff_x21,0);
      if ((lVar1 != 0) &&
         (lVar3 = thunk_FUN_01f116d0(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
        uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar9,0);
      }
      if (*(uint *)(unaff_x22 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      unaff_x22[7] = lVar1;
      thunk_FUN_01f51358(unaff_x22 + 7,lVar1);
      FUN_0340f378(*(undefined8 *)PTR_DAT_04581648,unaff_x22,0);
      (**(code **)(*unaff_x19 + 0x248))();
      while( true ) {
        while( true ) {
          unaff_x26 = unaff_x26 + 1;
          if ((long)(int)*(uint *)(unaff_x25 + 0x18) <= (long)unaff_x26) {
            (**(code **)(*unaff_x19 + 0x238))();
            (**(code **)(*unaff_x19 + 0x248))();
            uVar9 = *unaff_x20;
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03f9ca58(uVar9,0);
            FUN_03f9dd50(uVar9,0);
            (**(code **)(*unaff_x19 + 0x248))();
            uVar9 = (**(code **)(*unaff_x19 + 0x168))();
            lVar1 = *unaff_x19;
            uVar7 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar7 == 0) goto LAB_03f7d058;
            piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            goto LAB_03f7d040;
          }
          if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          unaff_x21 = *(long **)(unaff_x27 + unaff_x26 * 8);
          uVar7 = FUN_03f85980(unaff_x21,0);
          uVar10 = (undefined4)unaff_x26;
          if ((uVar7 & 1) == 0) break;
          uStack000000000000000c = uVar10;
          uVar9 = thunk_FUN_01f113fc(*unaff_x28,(long)&stack0x00000008 + 4);
          FUN_03406290(*unaff_x29,uVar9,0);
          (**(code **)(*unaff_x19 + 0x248))();
        }
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar7 = FUN_03f7e92c();
        if ((uVar7 & 1) != 0) break;
        uStack000000000000000c = uVar10;
        uVar9 = thunk_FUN_01f113fc(*unaff_x28,(long)&stack0x00000008 + 4);
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        plVar2 = (long *)thunk_FUN_01ecaf38(unaff_x21,0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = (**(code **)(*plVar2 + 0x2e8))(plVar2,*(undefined8 *)(*plVar2 + 0x2f0));
        uStack0000000000000008 =
             (**(code **)(*unaff_x21 + 0x158))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x160));
        uVar5 = thunk_FUN_01f113fc(*unaff_x28,&stack0x00000008);
        FUN_0340f334(*(undefined8 *)PTR_DAT_04581660,uVar9,uVar4,uVar5,0);
        (**(code **)(*unaff_x19 + 0x248))();
      }
      unaff_x22 = (long *)FUN_01f08890(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       ,4);
      uStack000000000000000c = uVar10;
      param_1 = thunk_FUN_01f113fc(*unaff_x28,(long)&stack0x00000008 + 4);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    } while (param_1 == 0);
    param_2 = *(undefined8 *)(*unaff_x22 + 0x40);
    unaff_x23 = param_1;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_03f7d040:
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_03f7d074;
    }
  }
LAB_03f7d058:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03f7d074:
  (*(code *)*puVar6)();
  return uVar9;
}


