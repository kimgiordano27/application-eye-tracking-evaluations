/*
FUNCTION_NAME: FUN_03f7cb3c
ENTRY_POINT: 03f7cb3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f7d100) */

undefined8 FUN_03f7cb3c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  ulong uVar18;
  undefined4 local_68;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04581630;
  if ((DAT_0483b604 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__);
    thunk_FUN_01efb3a4(PTR_DAT_04581630);
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Expression_Constant__);
    thunk_FUN_01efb3a4(PTR_DAT_04581638);
    thunk_FUN_01efb3a4(PTR_DAT_04581640);
    thunk_FUN_01efb3a4(PTR_DAT_04581648);
    thunk_FUN_01efb3a4(PTR_DAT_04581650);
    thunk_FUN_01efb3a4(PTR_DAT_04581658);
    thunk_FUN_01efb3a4(PTR_DAT_04581660);
    DAT_0483b604 = 1;
  }
  plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_034de238(plVar4,0);
  uVar5 = FUN_0340eec4(param_2,0);
  if ((uVar5 & 1) == 0) {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar4 + 0x248))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x250));
    (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
  }
  else if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar4 + 0x248))
            (plVar4,*(undefined8 *)PTR_DAT_04581638,*(undefined8 *)(*plVar4 + 0x250));
  puVar3 = PTR_DAT_04581650;
  puVar2 = Method_System_Linq_Expressions_Expression_Constant__;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  lVar16 = param_1[1];
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar5 = *(ulong *)(lVar16 + 0x18);
  if (uVar5 == 0) {
    (**(code **)(*plVar4 + 0x248))
              (plVar4,*(undefined8 *)PTR_DAT_04581640,*(undefined8 *)(*plVar4 + 0x250));
  }
  else if (0 < (int)uVar5) {
    uVar18 = 0;
    do {
      if ((uVar5 & 0xffffffff) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar15 = *(long **)(lVar16 + 0x20 + uVar18 * 8);
      uVar5 = FUN_03f85980(plVar15,0);
      uVar17 = (undefined4)uVar18;
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03f7e92c();
        if ((uVar5 & 1) == 0) {
          local_64 = uVar17;
          uVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_64);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar7 = (long *)thunk_FUN_01ecaf38(plVar15,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar11 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0));
          local_68 = (**(code **)(*plVar15 + 0x158))(plVar15,*(undefined8 *)(*plVar15 + 0x160));
          uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_68);
          uVar6 = FUN_0340f334(*(undefined8 *)PTR_DAT_04581660,uVar6,uVar11,uVar12,0);
          (**(code **)(*plVar4 + 0x248))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x250));
        }
        else {
          plVar7 = (long *)FUN_01f08890(*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                        ,4);
          local_64 = uVar17;
          lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_64);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
            uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,0);
          }
          if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar7[4] = lVar8;
          thunk_FUN_01f51358(plVar7 + 4,lVar8);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          plVar10 = (long *)thunk_FUN_01ecaf38(plVar15,0);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = (**(code **)(*plVar10 + 0x2e8))(plVar10,*(undefined8 *)(*plVar10 + 0x2f0));
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
            uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,0);
          }
          if (*(uint *)(plVar7 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar7[5] = lVar8;
          thunk_FUN_01f51358(plVar7 + 5,lVar8);
          local_68 = (**(code **)(*plVar15 + 0x158))(plVar15,*(undefined8 *)(*plVar15 + 0x160));
          lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_68);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
            uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,0);
          }
          if (*(uint *)(plVar7 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar7[6] = lVar8;
          thunk_FUN_01f51358(plVar7 + 6,lVar8);
          lVar8 = FUN_040766fc(plVar15,0);
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
            uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar6,0);
          }
          if (*(uint *)(plVar7 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar7[7] = lVar8;
          thunk_FUN_01f51358(plVar7 + 7,lVar8);
          uVar6 = FUN_0340f378(*(undefined8 *)PTR_DAT_04581648,plVar7,0);
          (**(code **)(*plVar4 + 0x248))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x250));
        }
      }
      else {
        local_64 = uVar17;
        uVar6 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_64);
        uVar6 = FUN_03406290(*(undefined8 *)puVar3,uVar6,0);
        (**(code **)(*plVar4 + 0x248))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x250));
      }
      uVar5 = (ulong)*(uint *)(lVar16 + 0x18);
      uVar18 = uVar18 + 1;
    } while ((long)uVar18 < (long)(int)*(uint *)(lVar16 + 0x18));
  }
  (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
  (**(code **)(*plVar4 + 0x248))
            (plVar4,*(undefined8 *)PTR_DAT_04581658,*(undefined8 *)(*plVar4 + 0x250));
  uVar6 = *param_1;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_ComputedStyle_ApplyPropertyAnimation__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_03f9ca58(uVar6,0);
  uVar6 = FUN_03f9dd50(uVar6,0);
  (**(code **)(*plVar4 + 0x248))(plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x250));
  uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  lVar16 = *plVar4;
  uVar5 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar5 != 0) {
    piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar13 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_03f7d074;
      }
      uVar5 = uVar5 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar5 != 0);
  }
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar4,*(long *)
                                 Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03f7d074:
  (*(code *)*puVar13)(plVar4,puVar13[1]);
  return uVar6;
}


