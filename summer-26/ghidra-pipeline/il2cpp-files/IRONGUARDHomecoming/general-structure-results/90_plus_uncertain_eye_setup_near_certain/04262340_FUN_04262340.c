/*
FUNCTION_NAME: FUN_04262340
ENTRY_POINT: 04262340
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x042624d4) */
/* WARNING: Removing unreachable block (ram,0x042628d8) */

void FUN_04262340(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  undefined2 local_44 [2];
  
  if ((DAT_0484169c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__);
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_0457ab80);
    thunk_FUN_01efb3a4(Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__);
    DAT_0484169c = 1;
  }
  local_44[0] = 0;
  if (*(char *)((long)param_1 + 0x1d1) != '\0') {
    if ((char)param_1[0x3a] == '\0') {
      FUN_04262994(param_1);
      *(undefined1 *)((long)param_1 + 0x1d1) = 0;
      return;
    }
    *(undefined1 *)((long)param_1 + 0x1d1) = 0;
  }
  FUN_04262cf0(param_1);
  if ((char)param_1[0x3a] == '\0') {
    return;
  }
  uVar5 = FUN_04262060(param_1);
  if ((uVar5 & 1) != 0) {
    lVar12 = param_1[0x37];
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_04073094(lVar12,0,0);
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457ab80);
      FUN_04283fa4(plVar6,0);
      uVar7 = FUN_0425fac0(param_1);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar7,uVar7);
      }
      FUN_04284998(plVar6,uVar7,0);
      lVar12 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_042624bc;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar6,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_042624bc:
      (*(code *)*puVar8)(plVar6,puVar8[1]);
      lVar12 = param_1[0x37];
      uVar7 = FUN_0425fac0(param_1);
      if (lVar12 == 0) goto LAB_042628d4;
      FUN_0425cf48(lVar12,uVar7,0);
    }
    FUN_04261a60(param_1);
  }
  if ((char)param_1[0x3a] == '\0') {
    return;
  }
  uVar5 = FUN_0407a838(0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((char)param_1[0x42] != '\0') {
    return;
  }
  if (param_1[0x20] == 0) goto LAB_042628a4;
  iVar2 = FUN_0407ac2c(param_1[0x20],0);
  lVar12 = param_1[0x20];
  if (iVar2 == 0) {
    if (lVar12 == 0) goto LAB_042628d4;
    lVar12 = FUN_0407aaf0(lVar12,0);
    uVar5 = FUN_0340e600(param_1[0x30],lVar12,0);
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)param_1 + 300) != '\0') {
        if (param_1[0x20] == 0) goto LAB_042628d4;
        uVar5 = FUN_0407ace8(param_1[0x20],0);
        puVar1 = Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__;
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_Utility_MonoBehaviourSingleton<TurretsProjectilesFactory>_Awake__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          iVar2 = FUN_04039fb4(0);
          if (iVar2 != 8) {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            iVar2 = FUN_04039fb4(0);
            if (iVar2 != 0x1f) {
              lVar12 = param_1[0x20];
              uVar7 = FUN_042620e0(param_1);
              if (lVar12 == 0) goto LAB_042628d4;
              FUN_0407adb4(lVar12,uVar7,0);
              goto LAB_0426284c;
            }
          }
        }
      }
      if (param_1[0x20] == 0) goto LAB_042628d4;
      uVar5 = FUN_0407acac(param_1[0x20],0);
      if ((uVar5 & 1) != 0) {
        FUN_0426225c(param_1);
      }
    }
    else {
      plVar6 = param_1 + 0x30;
      if ((char)param_1[0x32] == '\0') {
        *plVar6 = *(long *)Method_System_Nullable<InputControlScheme_MatchResult>_get_HasValue__;
        thunk_FUN_01f51358(plVar6);
        puVar1 = Method_System_IO_CStreamReader_Read__;
        if (lVar12 == 0) goto LAB_042628d4;
        if (0 < *(int *)(lVar12 + 0x10)) {
          iVar2 = 0;
          do {
            uVar3 = FUN_03409f80(lVar12,iVar2,0);
            uVar4 = 10;
            if ((uVar3 & 0xffff) != 3 && (uVar3 & 0xffff) != 0xd) {
              uVar4 = uVar3;
            }
            local_44[0] = (undefined2)uVar4;
            lVar10 = param_1[0x2a];
            if (lVar10 == 0) {
              if ((int)param_1[0x26] != 0) {
                lVar10 = *plVar6;
                if (lVar10 != 0) {
                  uVar4 = FUN_04263270(param_1,lVar10,*(undefined4 *)(lVar10 + 0x10));
                  goto LAB_042626e0;
                }
                goto LAB_042628d4;
              }
            }
            else {
              lVar9 = *plVar6;
              if (lVar9 == 0) goto LAB_042628d4;
              uVar4 = (**(code **)(lVar10 + 0x18))
                                (*(undefined8 *)(lVar10 + 0x40),lVar9,*(undefined4 *)(lVar9 + 0x10),
                                 uVar4,*(undefined8 *)(lVar10 + 0x28));
LAB_042626e0:
              local_44[0] = (undefined2)uVar4;
            }
            if (((uVar4 & 0xffff) == 10) && ((int)param_1[0x25] == 1)) {
              if (param_1[0x20] == 0) goto LAB_042628d4;
              FUN_0407ab2c(param_1[0x20],param_1[0x30],0);
              goto LAB_0426289c;
            }
            if ((uVar4 & 0xffff) != 0) {
              lVar10 = *plVar6;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar7 = FUN_034ec23c(local_44,0);
              lVar10 = FUN_03405678(lVar10,uVar7,0);
              *plVar6 = lVar10;
              thunk_FUN_01f51358(plVar6,lVar10);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(lVar12 + 0x10));
        }
        iVar2 = *(int *)((long)param_1 + 0x134);
        if (0 < iVar2) {
          lVar10 = *plVar6;
          if (lVar10 == 0) goto LAB_042628d4;
          if (iVar2 < *(int *)(lVar10 + 0x10)) {
            lVar10 = FUN_03410500(lVar10,0,iVar2,0);
            *plVar6 = lVar10;
            thunk_FUN_01f51358(plVar6,lVar10);
          }
        }
        if (param_1[0x20] == 0) goto LAB_042628d4;
        uVar5 = FUN_0407acac(param_1[0x20],0);
        if ((uVar5 & 1) == 0) {
          lVar10 = *plVar6;
          if (lVar10 == 0) goto LAB_042628d4;
          iVar2 = *(int *)(lVar10 + 0x10);
          piVar11 = (int *)((long)param_1 + 0x194);
          *(int *)(param_1 + 0x33) = iVar2;
          if (iVar2 < 0) {
            piVar11[0] = 0;
            piVar11[1] = 0;
          }
          else {
            *piVar11 = iVar2;
          }
        }
        else {
          FUN_0426225c(param_1);
          lVar10 = param_1[0x30];
        }
        uVar5 = FUN_0340e600(lVar10,lVar12,0);
        if ((uVar5 & 1) != 0) {
          if (param_1[0x20] == 0) goto LAB_042628d4;
          FUN_0407ab2c(param_1[0x20],*plVar6,0);
        }
        FUN_04260150(param_1);
        FUN_042601d0(param_1);
      }
      else {
        if (param_1[0x20] == 0) goto LAB_042628d4;
        FUN_0407ab2c(param_1[0x20],*plVar6,0);
      }
    }
LAB_0426284c:
    if (param_1[0x20] == 0) goto LAB_042628d4;
    iVar2 = FUN_0407ac2c(param_1[0x20],0);
    if (iVar2 == 0) {
      return;
    }
    lVar12 = param_1[0x20];
joined_r0x04262864:
    if (lVar12 == 0) goto LAB_042628d4;
  }
  else {
    if (lVar12 == 0) goto LAB_042628a4;
    if ((char)param_1[0x32] == '\0') {
      uVar7 = FUN_0407aaf0(lVar12,0);
      FUN_0425fd48(param_1,uVar7,1);
      lVar12 = param_1[0x20];
      goto joined_r0x04262864;
    }
  }
  iVar2 = FUN_0407ac2c(lVar12,0);
  if (iVar2 == 2) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    if (param_1[0x20] == 0) {
LAB_042628d4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar2 = FUN_0407ac2c(param_1[0x20],0);
    if (iVar2 == 1) {
LAB_0426289c:
      FUN_042631f0(param_1);
    }
  }
LAB_042628a4:
  (**(code **)(*param_1 + 0x388))(param_1,0,*(undefined8 *)(*param_1 + 0x390));
  return;
}


