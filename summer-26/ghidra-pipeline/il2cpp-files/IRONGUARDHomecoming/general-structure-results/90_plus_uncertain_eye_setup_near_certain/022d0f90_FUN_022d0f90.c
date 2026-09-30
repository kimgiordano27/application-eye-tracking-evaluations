/*
FUNCTION_NAME: FUN_022d0f90
ENTRY_POINT: 022d0f90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x022d1448) */
/* WARNING: Removing unreachable block (ram,0x022d1450) */
/* WARNING: Type propagation algorithm not settling */

void FUN_022d0f90(long param_1,long param_2,undefined8 *******param_3,long param_4)

{
  undefined8 *******__src;
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long local_a0 [4];
  undefined8 *******local_80;
  undefined8 *local_78;
  long *local_70;
  long local_68;
  
  local_a0[0] = tpidr_el0;
  local_68 = *(long *)(local_a0[0] + 0x28);
  lVar15 = *(long *)(param_4 + 0x38);
  local_a0[3] = param_2;
  local_80 = param_3;
  if (lVar15 == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Char_CompareTo__);
    thunk_FUN_01efb3a4(Method_System_Char_ConvertToUtf32__);
    thunk_FUN_01efb3a4(Method_System_Char_GetUnicodeCategory__);
    lVar15 = *(long *)(param_4 + 0x38);
    if (lVar15 == 0) {
      FUN_01ecafa0(param_4);
      lVar15 = *(long *)(param_4 + 0x38);
    }
  }
  local_a0[2] = (long)*(uint *)(*(long *)(lVar15 + 8) + 0xfc);
  puVar12 = (undefined8 *)((long)local_a0 - (local_a0[2] + 0xfU & 0x1fffffff0));
  local_a0[1] = param_1;
  if (*(long *)(param_1 + 0x58) == 0) {
    if (*(int *)(*(long *)Method_System_Char_GetUnicodeCategory__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar15 = FUN_0424f664(0);
    puVar4 = Method_System_Char_ConvertToUtf32__;
    puVar3 = Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__;
    if (lVar15 != 0) {
      iVar1 = *(int *)(lVar15 + 0x18);
      do {
        do {
          do {
            iVar1 = iVar1 + -1;
            if (iVar1 < 0) goto LAB_022d1410;
            plVar7 = (long *)FUN_030f28e4(lVar15,iVar1,*(undefined8 *)puVar4);
          } while (plVar7 == (long *)0x0);
          bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
        } while ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
                (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3));
        lVar16 = *(long *)(param_4 + 0x38);
        __src = param_3;
        if (-1 < *(int *)(*(long *)(lVar16 + 8) + 0x28)) {
          __src = &local_80;
        }
        memcpy(puVar12,__src,local_a0[2]);
        if (local_a0[3] == 0) goto LAB_022d1444;
        local_78 = puVar12;
        if (-1 < *(int *)(*(long *)(lVar16 + 8) + 0x28)) {
          local_78 = (undefined8 *)*puVar12;
        }
        puVar10 = *(undefined8 **)(lVar16 + 0x10);
        (*(code *)puVar10[2])(*puVar10,puVar10,local_a0[3],&local_78,&local_70);
        plVar5 = local_70;
        uVar8 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar8,uVar8);
        }
        FUN_041d4560(plVar5,uVar8,0);
        plVar9 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar9 + 0x198))(plVar9,plVar5,*(undefined8 *)(*plVar9 + 0x1a0));
        lVar16 = (**(code **)(*plVar7 + 0x278))(plVar7,*(undefined8 *)(*plVar7 + 0x280));
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar16 = FUN_041e7f94(lVar16,0);
        if (lVar16 == 0) {
          uVar13 = FUN_041d3f88(plVar5,0);
          iVar11 = 4;
          if ((uVar13 & 1) == 0) {
            iVar11 = 10;
          }
        }
        else {
          FUN_041c5278(local_a0[1],plVar7,0);
          iVar11 = 4;
        }
        lVar16 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar10 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_022d1388;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_01ecb238(plVar5,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_022d1388:
        (*(code *)*puVar10)(plVar5,puVar10[1]);
      } while ((iVar11 == 10) || (iVar11 == 0));
LAB_022d1410:
      if (*(long *)(local_a0[0] + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    if (-1 < *(int *)(*(long *)(lVar15 + 8) + 0x28)) {
      param_3 = &local_80;
    }
    memcpy(puVar12,param_3,local_a0[2]);
    lVar16 = local_a0[1];
    if (local_a0[3] != 0) {
      puVar10 = *(undefined8 **)(lVar15 + 0x10);
      if (-1 < *(int *)(*(long *)(lVar15 + 8) + 0x28)) {
        puVar12 = (undefined8 *)*puVar12;
      }
      local_78 = puVar12;
      lVar6 = (*(code *)puVar10[2])(*puVar10,puVar10,local_a0[3],&local_78,&local_70);
      lVar15 = *(long *)(lVar16 + 0x60);
      if (*(long *)(lVar16 + 0x60) == 0) {
        plVar7 = *(long **)(lVar16 + 0x58);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        lVar15 = lVar6;
      }
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(lVar6,lVar15);
      }
      FUN_041d4560(local_70,lVar15,0);
      plVar7 = *(long **)(lVar16 + 0x58);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar7 + 0x198))(plVar7,local_70,*(undefined8 *)(*plVar7 + 0x1a0));
      FUN_041c73ec(lVar16,*(undefined8 *)(lVar16 + 0x58),0);
      lVar15 = *local_70;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_022d117c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_01ecb238(local_70,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                             ,0);
LAB_022d117c:
      (*(code *)*puVar12)(local_70,puVar12[1]);
      goto LAB_022d1410;
    }
  }
LAB_022d1444:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


