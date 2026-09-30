/*
FUNCTION_NAME: FUN_03982e5c
ENTRY_POINT: 03982e5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2
*/


void FUN_03982e5c(long *param_1,long param_2,long param_3,byte param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte local_5c [4];
  long local_58;
  
  puVar2 = Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__;
  if ((DAT_0483850f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(StringLiteral_4611);
    thunk_FUN_01efb3a4(StringLiteral_4612);
    thunk_FUN_01efb3a4(StringLiteral_4613);
    thunk_FUN_01efb3a4(StringLiteral_4614);
    thunk_FUN_01efb3a4(StringLiteral_4615);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_CommandBuffer_DrawMesh__);
    thunk_FUN_01efb3a4(StringLiteral_4616);
    thunk_FUN_01efb3a4(StringLiteral_4617);
    thunk_FUN_01efb3a4(StringLiteral_4618);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_4619);
    DAT_0483850f = 1;
  }
  lVar3 = *(long *)puVar2;
  local_58 = 0;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  thunk_FUN_01f3e6f0();
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_4614);
    FUN_029d9754(lVar3,0x32,*(undefined8 *)StringLiteral_4612);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    thunk_FUN_01f3e6f0();
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar3;
    thunk_FUN_01f51358(plVar4,lVar3);
    if (lVar3 == 0) goto LAB_039832f8;
  }
  uVar5 = FUN_029d97e4(lVar3,param_1,&local_58,*(undefined8 *)StringLiteral_4611);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)StringLiteral_4615;
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar4 = (long *)FUN_03579868(uVar9,0);
    plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                   Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentsInChildren__
                                  ,1);
    if (plVar6 == (long *)0x0) goto LAB_039832f8;
    if ((param_1 != (long *)0x0) &&
       (lVar7 = thunk_FUN_01f116d0(param_1,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
    goto LAB_03983300;
    if ((int)plVar6[3] == 0) goto LAB_039832fc;
    plVar6[4] = (long)param_1;
    thunk_FUN_01f51358(plVar6 + 4,param_1);
    if (((plVar4 == (long *)0x0) ||
        (lVar7 = (**(code **)(*plVar4 + 0x928))(plVar4,plVar6,*(undefined8 *)(*plVar4 + 0x930)),
        lVar7 == 0)) ||
       (plVar4 = (long *)FUN_03584c60(lVar7,*(undefined8 *)StringLiteral_4619,0x18,0),
       param_1 == (long *)0x0)) goto LAB_039832f8;
    uVar5 = (**(code **)(*param_1 + 0x5b8))(param_1,*(undefined8 *)(*param_1 + 0x5c0));
    if ((uVar5 & 1) != 0) {
      plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,4);
      if (plVar6 != (long *)0x0) {
        if ((param_2 != 0) &&
           (lVar3 = thunk_FUN_01f116d0(param_2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
LAB_03983300:
          uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar9,0);
        }
        if ((int)plVar6[3] != 0) {
          plVar6[4] = param_2;
          thunk_FUN_01f51358(plVar6 + 4,param_2);
          if ((param_3 != 0) &&
             (lVar3 = thunk_FUN_01f116d0(param_3,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
          goto LAB_03983300;
          if (1 < *(uint *)(plVar6 + 3)) {
            plVar6[5] = param_3;
            thunk_FUN_01f51358(plVar6 + 5,param_3);
            local_5c[0] = param_4 & 1;
            lVar3 = thunk_FUN_01f113fc(*(undefined8 *)
                                        Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                                       ,local_5c);
            if ((lVar3 != 0) &&
               (lVar7 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
            goto LAB_03983300;
            if (2 < *(uint *)(plVar6 + 3)) {
              plVar6[6] = lVar3;
              thunk_FUN_01f51358(plVar6 + 6,lVar3);
              if ((param_5 != 0) &&
                 (lVar3 = thunk_FUN_01f116d0(param_5,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0))
              goto LAB_03983300;
              if (3 < *(uint *)(plVar6 + 3)) {
                plVar6[7] = param_5;
                thunk_FUN_01f51358(plVar6 + 7,param_5);
                if (plVar4 != (long *)0x0) {
                  plVar4 = (long *)FUN_034b2bf4(plVar4,0,plVar6,0);
                  if (plVar4 == (long *)0x0) {
                    return;
                  }
                  bVar1 = *(byte *)(*(long *)StringLiteral_4618 + 0x130);
                  if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                      *(long *)StringLiteral_4618)) {
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01f08cfc();
                }
                goto LAB_039832f8;
              }
            }
          }
        }
LAB_039832fc:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      goto LAB_039832f8;
    }
    uVar9 = *(undefined8 *)StringLiteral_4616;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_03579868(uVar9,0);
    if (plVar4 == (long *)0x0) goto LAB_039832f8;
    lVar7 = (**(code **)(*plVar4 + 0x438))(plVar4,uVar9,*(undefined8 *)(*plVar4 + 0x440));
    if (lVar7 == 0) {
      lVar8 = 0;
    }
    else {
      uVar9 = *(undefined8 *)StringLiteral_4617;
      lVar8 = thunk_FUN_01f116d0(lVar7,uVar9);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar7,uVar9);
      }
    }
    local_58 = lVar8;
    FUN_029d99d0(lVar3,param_1,lVar8,*(undefined8 *)StringLiteral_4613);
  }
  if (local_58 != 0) {
    (**(code **)(local_58 + 0x18))
              (*(undefined8 *)(local_58 + 0x40),param_2,param_3,param_4 & 1,param_5,
               *(undefined8 *)(local_58 + 0x28));
    return;
  }
LAB_039832f8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


