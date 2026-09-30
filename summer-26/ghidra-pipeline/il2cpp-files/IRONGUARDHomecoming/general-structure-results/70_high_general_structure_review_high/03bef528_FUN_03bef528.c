/*
FUNCTION_NAME: FUN_03bef528
ENTRY_POINT: 03bef528
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03bef528(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined4 local_58;
  undefined4 local_54;
  
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  if ((DAT_04839a6c & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_14077);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(StringLiteral_14078);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ThenBy<MarkToBaseAdjustmentRecord,_uint>__);
    thunk_FUN_01efb3a4(StringLiteral_14079);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(StringLiteral_14080);
    thunk_FUN_01efb3a4(StringLiteral_14081);
    thunk_FUN_01efb3a4(StringLiteral_14082);
    thunk_FUN_01efb3a4(Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__);
    thunk_FUN_01efb3a4(StringLiteral_7747);
    DAT_04839a6c = 1;
  }
  plVar5 = (long *)FUN_01f08890(*(undefined8 *)puVar1,6);
  if (plVar5 == (long *)0x0) {
LAB_03bef8ec:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar8 = *param_1;
  if ((lVar8 != 0) &&
     (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_03bef8e0:
    uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,0);
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar8;
    thunk_FUN_01f51358(plVar5 + 4,lVar8);
    local_54 = (undefined4)param_1[1];
    lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_54);
    if ((lVar8 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
    goto LAB_03bef8e0;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = lVar8;
      thunk_FUN_01f51358(plVar5 + 5,lVar8);
      local_58 = *(undefined4 *)((long)param_1 + 0xc);
      lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_58);
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
      goto LAB_03bef8e0;
      puVar1 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar8;
        thunk_FUN_01f51358(plVar5 + 6,lVar8);
        local_64[0] = (undefined1)param_1[2];
        lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,local_64);
        if ((lVar8 != 0) &&
           (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_03bef8e0;
        puVar1 = StringLiteral_14082;
        if (3 < *(uint *)(plVar5 + 3)) {
          plVar5[7] = lVar8;
          thunk_FUN_01f51358(plVar5 + 7,lVar8);
          puVar4 = StringLiteral_14081;
          puVar2 = Method_UnityEngine_GameObject_GetComponents<DOTweenAnimation>__;
          lVar8 = param_1[3];
          uVar9 = *(undefined8 *)puVar1;
          if (lVar8 == 0) {
            lVar6 = *(long *)StringLiteral_7747;
          }
          else {
            lVar6 = *(long *)StringLiteral_14081;
            if (*(int *)(lVar6 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar6 = *(long *)puVar4;
            }
            puVar3 = StringLiteral_14078;
            puVar1 = Method_System_Linq_Enumerable_ThenBy<MarkToBaseAdjustmentRecord,_uint>__;
            uVar10 = *(undefined8 *)puVar2;
            lVar11 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar11 == 0) {
              if (*(int *)(lVar6 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar6 = *(long *)puVar4;
              }
              uVar12 = **(undefined8 **)(lVar6 + 0xb8);
              lVar11 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_14079);
              FUN_02e68c4c(lVar11,uVar12,*(undefined8 *)StringLiteral_14080,0);
              plVar7 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
              *plVar7 = lVar11;
              thunk_FUN_01f51358(plVar7,lVar11);
            }
            uVar12 = FUN_022fede8(lVar8,lVar11,*(undefined8 *)puVar3);
            uVar12 = FUN_02308ab0(uVar12,*(undefined8 *)puVar1);
            lVar6 = FUN_0340f714(uVar10,uVar12,0);
            if (lVar8 == 0) goto LAB_03bef8ec;
          }
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
          goto LAB_03bef8e0;
          puVar1 = StringLiteral_14077;
          if (4 < *(uint *)(plVar5 + 3)) {
            plVar5[8] = lVar6;
            thunk_FUN_01f51358(plVar5 + 8,lVar6);
            local_68 = (undefined4)param_1[4];
            lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_68);
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_03bef8e0;
            if (5 < *(uint *)(plVar5 + 3)) {
              plVar5[9] = lVar8;
              thunk_FUN_01f51358(plVar5 + 9,lVar8);
              FUN_0340f378(uVar9,plVar5,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


