/*
FUNCTION_NAME: FUN_02352fe8
ENTRY_POINT: 02352fe8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_4
*/


void FUN_02352fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5
                 ,undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  void *__src;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  void *pvVar11;
  int iVar12;
  ulong __n;
  void *pvVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uStack_f0;
  long local_e8;
  void *local_e0;
  void *local_d8;
  ulong local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int *local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int *local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(param_8 + 0x38);
  local_c0 = param_4;
  local_b8 = param_6;
  uStack_b0 = param_7;
  local_a8 = param_5;
  local_a0 = param_1;
  uStack_98 = param_2;
  if (lVar7 == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_ContinueCommandPipeline__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_PostReadCommandProcessing__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_ReadCallback__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_ReceiveCommandResponse__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_ReceiveCommandResponseCallback__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_WriteCallback__);
    thunk_FUN_01efb3a4(
                      Method_System_Net_NetworkInformation_CommonUnixIPGlobalProperties_get_DomainName__
                      );
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_CompareInfo_Compare__);
    lVar7 = *(long *)(param_8 + 0x38);
    if (lVar7 == 0) {
      FUN_01ecafa0(param_8);
      lVar7 = *(long *)(param_8 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar7 + 8) + 0xfc);
  uVar9 = __n + 0xf & 0x1fffffff0;
  pvVar11 = (void *)((long)&uStack_f0 - uVar9);
  local_c8 = (undefined8 *)((long)pvVar11 - uVar9);
  pvVar13 = (void *)((long)local_c8 - uVar9);
  memset(pvVar13,0,__n);
  plVar1 = (long *)(local_a0 + 0x120);
  uVar9 = FUN_03b4d924(param_3,plVar1,0);
  if ((uVar9 & 1) == 0) {
    iVar2 = -1;
LAB_02353654:
    if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar2);
    }
    return;
  }
  lVar7 = *plVar1;
  local_e8 = lVar4;
  local_e0 = pvVar13;
  local_d8 = pvVar11;
  local_d0 = __n;
  if (lVar7 != 0) {
    uStack_f0._4_4_ = *local_a8;
    iVar12 = 0;
    piVar10 = local_a8;
    puVar8 = (undefined8 *)Method_System_Net_CommandStream_PostReadCommandProcessing__;
    plVar14 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    do {
      lVar4 = local_e8;
      iVar2 = uStack_f0._4_4_;
      if (*(int *)(lVar7 + 0x18) <= iVar12) goto LAB_02353654;
      FUN_030e2040(&local_90,lVar7,iVar12,*puVar8);
      uVar5 = local_90;
      plVar3 = (long *)FUN_03b5454c(&uStack_98,local_90,0);
      if (*(int *)(*plVar14 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*plVar14);
      }
      uVar9 = FUN_03582560(plVar3,0,0);
      if ((uVar9 & 1) == 0) {
        if (*(char *)(local_a0 + 0x118) == '\0') {
          uVar15 = FUN_03594a14(plVar3,0);
          lVar4 = *(long *)(*(long *)(param_8 + 0x38) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44(lVar4);
          }
          lVar4 = thunk_FUN_01f116d0(uVar15,lVar4);
          if (lVar4 == 0) {
            lVar4 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,8);
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x18) == 0) goto LAB_02353684;
              *(undefined8 *)(lVar4 + 0x20) =
                   *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponseCallback__;
              thunk_FUN_01f51358();
              if (plVar3 != (long *)0x0) {
                uVar15 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
                if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_02353684;
                *(undefined8 *)(lVar4 + 0x28) = uVar15;
                thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28),uVar15);
                if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_02353684;
                *(undefined8 *)(lVar4 + 0x30) =
                     *(undefined8 *)Method_System_Net_CommandStream_WriteCallback__;
                thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x30));
                if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_02353684;
                *(undefined8 *)(lVar4 + 0x38) = uVar5;
                thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x38),uVar5);
                if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_02353684;
                *(undefined8 *)(lVar4 + 0x40) =
                     *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponse__;
                thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x40));
                if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_02353684;
                *(undefined8 *)(lVar4 + 0x48) = param_3;
                thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x48),param_3);
                if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_02353684;
                *(undefined8 *)(lVar4 + 0x50) =
                     *(undefined8 *)Method_System_Net_CommandStream_ReadCallback__;
                thunk_FUN_01f51358();
                uVar5 = **(undefined8 **)(param_8 + 0x38);
                if (*(int *)(*plVar14 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar3 = (long *)FUN_03579868(uVar5,0);
                if (plVar3 != (long *)0x0) {
                  uVar5 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
                  if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_02353684;
                  *(undefined8 *)(lVar4 + 0x58) = uVar5;
                  goto LAB_0235330c;
                }
              }
            }
            break;
          }
          lVar4 = *(long *)(*(long *)(param_8 + 0x38) + 8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_01ecaf44(lVar4);
          }
          pvVar13 = local_d8;
          __src = (void *)FUN_01f08934(uVar15,lVar4,local_d8);
          uVar9 = local_d0;
          pvVar11 = local_e0;
          memcpy(local_e0,__src,local_d0);
          if (*plVar1 == 0) break;
          FUN_030e2040(&local_90,*plVar1,iVar12,
                       *(undefined8 *)Method_System_Net_CommandStream_PostReadCommandProcessing__);
          puVar8 = local_80;
          piVar10 = local_88;
          memcpy(pvVar13,pvVar11,uVar9);
          uVar15 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(param_8 + 0x38) + 8),pvVar13);
          FUN_03b3f4f4(piVar10,puVar8,uVar15,local_b8,uStack_b0,uVar5,param_3,0);
          puVar8 = local_c8;
          memcpy(local_c8,pvVar11,uVar9);
          piVar10 = local_a8;
          if (-1 < *(int *)(*(long *)(*(long *)(param_8 + 0x38) + 8) + 0x28)) {
            puVar8 = (undefined8 *)*puVar8;
          }
          puVar6 = *(undefined8 **)(*(long *)(param_8 + 0x38) + 0x18);
          local_6c = 10;
          local_78 = &local_6c;
          local_90 = local_c0;
          local_88 = local_a8;
          local_80 = puVar8;
          (*(code *)puVar6[2])(*puVar6,puVar6,0,&local_90,auStack_70);
          puVar8 = (undefined8 *)Method_System_Net_CommandStream_PostReadCommandProcessing__;
          plVar14 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        }
        else {
          *piVar10 = *piVar10 + 1;
        }
      }
      else {
        lVar4 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,7);
        if (lVar4 == 0) break;
        if (*(int *)(lVar4 + 0x18) == 0) {
LAB_02353684:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar4 + 0x20) =
             *(undefined8 *)
              Method_System_Net_NetworkInformation_CommonUnixIPGlobalProperties_get_DomainName__;
        thunk_FUN_01f51358();
        uVar15 = **(undefined8 **)(param_8 + 0x38);
        if (*(int *)(*plVar14 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar3 = (long *)FUN_03579868(uVar15,0);
        if (plVar3 == (long *)0x0) break;
        uVar15 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_02353684;
        *(undefined8 *)(lVar4 + 0x28) = uVar15;
        thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28),uVar15);
        if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_02353684;
        *(undefined8 *)(lVar4 + 0x30) =
             *(undefined8 *)Method_System_Globalization_CompareInfo_Compare__;
        thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x30));
        if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_02353684;
        *(undefined8 *)(lVar4 + 0x38) = uVar5;
        thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x38),uVar5);
        if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_02353684;
        *(undefined8 *)(lVar4 + 0x40) =
             *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponse__;
        thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x40));
        if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_02353684;
        *(undefined8 *)(lVar4 + 0x48) = param_3;
        thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x48),param_3);
        if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_02353684;
        *(undefined8 *)(lVar4 + 0x50) =
             *(undefined8 *)Method_System_Globalization_CompareInfo__ctor__;
LAB_0235330c:
        thunk_FUN_01f51358();
        uVar5 = FUN_0340efe8(lVar4,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
        }
        FUN_0403ed64(uVar5,0);
      }
      lVar7 = *plVar1;
      iVar12 = iVar12 + 1;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


