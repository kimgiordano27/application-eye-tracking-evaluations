/*
FUNCTION_NAME: FUN_022d0a6c
ENTRY_POINT: 022d0a6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x022d0e34) */
/* WARNING: Removing unreachable block (ram,0x022d0e3c) */

void FUN_022d0a6c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Char_CompareTo__);
    thunk_FUN_01efb3a4(Method_System_Char_ConvertToUtf32__);
    thunk_FUN_01efb3a4(Method_System_Char_GetUnicodeCategory__);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar13 = FUN_0424f664(0);
    puVar5 = Method_System_Char_ConvertToUtf32__;
    puVar4 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (lVar13 != 0) {
      iVar1 = *(int *)(lVar13 + 0x18);
      while( true ) {
        do {
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) {
              return;
            }
            plVar7 = (long *)FUN_030f28e4(lVar13,iVar1,*(undefined8 *)puVar5);
          } while (plVar7 == (long *)0x0);
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
        } while ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
                (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4));
        if (param_2 == 0) break;
        plVar9 = (long *)(**(code **)(param_2 + 0x18))
                                   (*(undefined8 *)(param_2 + 0x40),param_3,
                                    *(undefined8 *)(param_2 + 0x28));
        uVar10 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar10,uVar10);
        }
        FUN_041d4560(plVar9,uVar10,0);
        plVar6 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar6 + 0x198))(plVar6,plVar9,*(undefined8 *)(*plVar6 + 0x1a0));
        lVar11 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = FUN_041e7f94(lVar11,0);
        if (lVar11 == 0) {
          uVar14 = FUN_041d3f88(plVar9,0);
          iVar12 = 4;
          if ((uVar14 & 1) == 0) {
            iVar12 = 10;
          }
        }
        else {
          FUN_041c5278(param_1,plVar7,0);
          iVar12 = 4;
        }
        lVar11 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_022d0d94;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_022d0d94:
        (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((iVar12 != 10) && (iVar12 != 0)) {
          return;
        }
      }
    }
  }
  else if (param_2 != 0) {
    plVar6 = (long *)(**(code **)(param_2 + 0x18))
                               (*(undefined8 *)(param_2 + 0x40),param_3,
                                *(undefined8 *)(param_2 + 0x28));
    plVar7 = plVar6;
    plVar9 = *(long **)(param_1 + 0x60);
    if (*(long **)(param_1 + 0x60) == (long *)0x0) {
      plVar7 = *(long **)(param_1 + 0x58);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
      plVar9 = plVar7;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(plVar7,plVar9);
    }
    FUN_041d4560(plVar6,plVar9,0);
    plVar7 = *(long **)(param_1 + 0x58);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    (**(code **)(*plVar7 + 0x198))(plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x1a0));
    FUN_041c73ec(param_1,*(undefined8 *)(param_1 + 0x58),0);
    lVar13 = *plVar6;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_022d0bd8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_022d0bd8:
    (*(code *)*puVar8)(plVar6,puVar8[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


