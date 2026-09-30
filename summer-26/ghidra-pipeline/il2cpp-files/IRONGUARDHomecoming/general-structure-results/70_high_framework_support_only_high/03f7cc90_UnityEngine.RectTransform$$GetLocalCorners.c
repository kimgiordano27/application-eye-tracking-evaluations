/*
FUNCTION_NAME: UnityEngine.RectTransform$$GetLocalCorners
ENTRY_POINT: 03f7cc90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f7d100) */

undefined8 UnityEngine_RectTransform__GetLocalCorners(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar14;
  long unaff_x25;
  undefined4 uVar15;
  ulong uVar16;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar3 = PTR_DAT_04581650;
  puVar2 = Method_System_Linq_Expressions_Expression_Constant__;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  uVar11 = *(ulong *)(unaff_x25 + 0x18);
  if (uVar11 == 0) {
    (**(code **)(*unaff_x19 + 0x248))();
  }
  else if (0 < (int)uVar11) {
    uVar16 = 0;
    do {
      if ((uVar11 & 0xffffffff) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar14 = *(long **)(unaff_x25 + 0x20 + uVar16 * 8);
      uVar11 = FUN_03f85980(plVar14,0);
      uVar15 = (undefined4)uVar16;
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_03f7e92c();
        if ((uVar11 & 1) == 0) {
          uStack000000000000000c = uVar15;
          uVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar5 = (long *)thunk_FUN_01ecaf38(plVar14,0);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
          uStack0000000000000008 =
               (**(code **)(*plVar14 + 0x158))(plVar14,*(undefined8 *)(*plVar14 + 0x160));
          uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000008);
          FUN_0340f334(*(undefined8 *)PTR_DAT_04581660,uVar4,uVar8,uVar9,0);
          (**(code **)(*unaff_x19 + 0x248))();
        }
        else {
          plVar5 = (long *)FUN_01f08890(*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                        ,4);
          uStack000000000000000c = uVar15;
          lVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,0);
          }
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar5[4] = lVar12;
          thunk_FUN_01f51358(plVar5 + 4,lVar12);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar7 = (long *)thunk_FUN_01ecaf38(plVar14,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar12 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,0);
          }
          if (*(uint *)(plVar5 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar5[5] = lVar12;
          thunk_FUN_01f51358(plVar5 + 5,lVar12);
          uStack0000000000000008 =
               (**(code **)(*plVar14 + 0x158))(plVar14,*(undefined8 *)(*plVar14 + 0x160));
          lVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&stack0x00000008);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,0);
          }
          if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar5[6] = lVar12;
          thunk_FUN_01f51358(plVar5 + 6,lVar12);
          lVar12 = FUN_040766fc(plVar14,0);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar4,0);
          }
          if (*(uint *)(plVar5 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar5[7] = lVar12;
          thunk_FUN_01f51358(plVar5 + 7,lVar12);
          FUN_0340f378(*(undefined8 *)PTR_DAT_04581648,plVar5,0);
          (**(code **)(*unaff_x19 + 0x248))();
        }
      }
      else {
        uStack000000000000000c = uVar15;
        uVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,(long)&stack0x00000008 + 4);
        FUN_03406290(*(undefined8 *)puVar3,uVar4,0);
        (**(code **)(*unaff_x19 + 0x248))();
      }
      uVar11 = (ulong)*(uint *)(unaff_x25 + 0x18);
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < (long)(int)*(uint *)(unaff_x25 + 0x18));
  }
  (**(code **)(*unaff_x19 + 0x238))();
  (**(code **)(*unaff_x19 + 0x248))();
  uVar4 = *unaff_x20;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = FUN_03f9ca58(uVar4,0);
  FUN_03f9dd50(uVar4,0);
  (**(code **)(*unaff_x19 + 0x248))();
  uVar4 = (**(code **)(*unaff_x19 + 0x168))();
  lVar12 = *unaff_x19;
  uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_03f7d074;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar10 = (undefined8 *)FUN_01ecb238();
LAB_03f7d074:
  (*(code *)*puVar10)();
  return uVar4;
}


