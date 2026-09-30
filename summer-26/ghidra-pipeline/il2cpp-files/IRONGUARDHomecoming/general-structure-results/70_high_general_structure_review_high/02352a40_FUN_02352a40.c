/*
FUNCTION_NAME: FUN_02352a40
ENTRY_POINT: 02352a40
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2
*/


int FUN_02352a40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int *param_5,
                undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  int iVar12;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_68 = param_2;
  if (*(long *)(param_8 + 0x38) == 0) {
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
    if (*(long *)(param_8 + 0x38) == 0) {
      FUN_01ecafa0(param_8);
    }
  }
  plVar1 = (long *)(param_1 + 0x120);
  uVar4 = FUN_03b4d924(param_3,plVar1,0);
  puVar3 = Method_System_Net_CommandStream_PostReadCommandProcessing__;
  if ((uVar4 & 1) == 0) {
    return -1;
  }
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    iVar2 = *param_5;
    iVar12 = 0;
    plVar11 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar12) {
        return iVar2;
      }
      FUN_030e2040(&local_80,lVar5,iVar12,*(undefined8 *)puVar3);
      uVar7 = local_80;
      plVar6 = (long *)FUN_03b5454c(&local_68,local_80,0);
      if (*(int *)(*plVar11 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*plVar11);
      }
      uVar4 = FUN_03582560(plVar6,0,0);
      if ((uVar4 & 1) == 0) {
        if (*(char *)(param_1 + 0x118) == '\0') {
          lVar5 = FUN_03594a14(plVar6,0);
          lVar9 = *(long *)(*(long *)(param_8 + 0x38) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          lVar9 = thunk_FUN_01f116d0(lVar5,lVar9);
          if (lVar9 == 0) {
            lVar5 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,8);
            if (lVar5 != 0) {
              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_02352fd8;
              *(undefined8 *)(lVar5 + 0x20) =
                   *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponseCallback__;
              thunk_FUN_01f51358();
              if (plVar6 != (long *)0x0) {
                uVar10 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
                if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_02352fd8;
                *(undefined8 *)(lVar5 + 0x28) = uVar10;
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar10);
                if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_02352fd8;
                *(undefined8 *)(lVar5 + 0x30) =
                     *(undefined8 *)Method_System_Net_CommandStream_WriteCallback__;
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
                if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_02352fd8;
                *(undefined8 *)(lVar5 + 0x38) = uVar7;
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar7);
                if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_02352fd8;
                *(undefined8 *)(lVar5 + 0x40) =
                     *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponse__;
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x40));
                if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_02352fd8;
                *(undefined8 *)(lVar5 + 0x48) = param_3;
                thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48),param_3);
                if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_02352fd8;
                *(undefined8 *)(lVar5 + 0x50) =
                     *(undefined8 *)Method_System_Net_CommandStream_ReadCallback__;
                thunk_FUN_01f51358();
                uVar7 = **(undefined8 **)(param_8 + 0x38);
                if (*(int *)(*plVar11 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                plVar6 = (long *)FUN_03579868(uVar7,0);
                if (plVar6 != (long *)0x0) {
                  uVar7 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
                  if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_02352fd8;
                  *(undefined8 *)(lVar5 + 0x58) = uVar7;
                  goto LAB_02352cf8;
                }
              }
            }
            break;
          }
          lVar9 = *(long *)(*(long *)(param_8 + 0x38) + 8);
          if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_01ecaf44(lVar9);
          }
          if (lVar5 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = thunk_FUN_01f116d0(lVar5,lVar9);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(lVar5,lVar9);
            }
          }
          if (*plVar1 == 0) break;
          FUN_030e2040(&local_80,*plVar1,iVar12,*(undefined8 *)puVar3);
          FUN_03b3f4f4(local_78,uStack_70,lVar8,param_6,param_7,uVar7,param_3,0);
          FUN_0226f474(param_4,param_5,lVar8,10,*(undefined8 *)(*(long *)(param_8 + 0x38) + 0x18));
          plVar11 = (long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
        }
        else {
          *param_5 = *param_5 + 1;
        }
      }
      else {
        lVar5 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,7);
        if (lVar5 == 0) break;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_02352fd8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar5 + 0x20) =
             *(undefined8 *)
              Method_System_Net_NetworkInformation_CommonUnixIPGlobalProperties_get_DomainName__;
        thunk_FUN_01f51358();
        uVar10 = **(undefined8 **)(param_8 + 0x38);
        if (*(int *)(*plVar11 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar6 = (long *)FUN_03579868(uVar10,0);
        if (plVar6 == (long *)0x0) break;
        uVar10 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_02352fd8;
        *(undefined8 *)(lVar5 + 0x28) = uVar10;
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar10);
        if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_02352fd8;
        *(undefined8 *)(lVar5 + 0x30) =
             *(undefined8 *)Method_System_Globalization_CompareInfo_Compare__;
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
        if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_02352fd8;
        *(undefined8 *)(lVar5 + 0x38) = uVar7;
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar7);
        if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_02352fd8;
        *(undefined8 *)(lVar5 + 0x40) =
             *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponse__;
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x40));
        if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_02352fd8;
        *(undefined8 *)(lVar5 + 0x48) = param_3;
        thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48),param_3);
        if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_02352fd8;
        *(undefined8 *)(lVar5 + 0x50) =
             *(undefined8 *)Method_System_Globalization_CompareInfo__ctor__;
LAB_02352cf8:
        thunk_FUN_01f51358();
        uVar7 = FUN_0340efe8(lVar5,0);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
        }
        FUN_0403ed64(uVar7,0);
      }
      lVar5 = *plVar1;
      iVar12 = iVar12 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


