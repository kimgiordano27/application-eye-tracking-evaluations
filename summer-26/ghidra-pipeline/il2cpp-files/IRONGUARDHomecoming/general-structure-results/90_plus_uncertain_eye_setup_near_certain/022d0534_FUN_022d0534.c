/*
FUNCTION_NAME: FUN_022d0534
ENTRY_POINT: 022d0534
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x022d0908) */
/* WARNING: Removing unreachable block (ram,0x022d0910) */

void FUN_022d0534(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Char_CompareTo__);
    thunk_FUN_01efb3a4(Method_System_Char_ConvertToUtf32__);
    thunk_FUN_01efb3a4(Method_System_Char_GetUnicodeCategory__);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar12 = FUN_0424f664(0);
    puVar4 = Method_System_Char_ConvertToUtf32__;
    puVar3 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
    if (lVar12 != 0) {
      iVar1 = *(int *)(lVar12 + 0x18);
      while( true ) {
        do {
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) {
              return;
            }
            plVar6 = (long *)FUN_030f28e4(lVar12,iVar1,*(undefined8 *)puVar4);
          } while (plVar6 == (long *)0x0);
          bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        } while ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
                (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3));
        if (param_2 == 0) break;
        plVar8 = (long *)(**(code **)(param_2 + 0x18))
                                   (*(undefined8 *)(param_2 + 0x40),param_3,param_4,
                                    *(undefined8 *)(param_2 + 0x28));
        uVar9 = (**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar9,uVar9);
        }
        FUN_041d4560(plVar8,uVar9,0);
        plVar5 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar5 + 0x198))(plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x1a0));
        lVar10 = (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280));
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = FUN_041e7f94(lVar10,0);
        if (lVar10 == 0) {
          uVar13 = FUN_041d3f88(plVar8,0);
          iVar11 = 4;
          if ((uVar13 & 1) == 0) {
            iVar11 = 10;
          }
        }
        else {
          FUN_041c5278(param_1,plVar6,0);
          iVar11 = 4;
        }
        lVar10 = *plVar8;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_022d0868;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_022d0868:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((iVar11 != 10) && (iVar11 != 0)) {
          return;
        }
      }
    }
  }
  else if (param_2 != 0) {
    plVar5 = (long *)(**(code **)(param_2 + 0x18))
                               (*(undefined8 *)(param_2 + 0x40),param_3,param_4,
                                *(undefined8 *)(param_2 + 0x28));
    plVar6 = plVar5;
    plVar8 = *(long **)(param_1 + 0x60);
    if (*(long **)(param_1 + 0x60) == (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x58);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
      plVar8 = plVar6;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(plVar6,plVar8);
    }
    FUN_041d4560(plVar5,plVar8,0);
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar6 + 0x198))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x1a0));
    FUN_041c73ec(param_1,*(undefined8 *)(param_1 + 0x58),0);
    lVar12 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_022d06a8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d06a8:
    (*(code *)*puVar7)(plVar5,puVar7[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


