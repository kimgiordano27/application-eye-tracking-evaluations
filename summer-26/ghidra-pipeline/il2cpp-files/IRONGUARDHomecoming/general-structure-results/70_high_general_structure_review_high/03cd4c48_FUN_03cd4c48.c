/*
FUNCTION_NAME: FUN_03cd4c48
ENTRY_POINT: 03cd4c48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03cd4c48(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
                 undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long extraout_x1;
  int iVar14;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  uint local_78;
  undefined4 local_74;
  
  puVar4 = PTR_DAT_045716a0;
  puVar2 = Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__;
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((DAT_04839d5b & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_045716d0);
    thunk_FUN_01efb3a4(PTR_DAT_045716d8);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Matrix4x4>_Clear__);
    thunk_FUN_01efb3a4(PTR_DAT_045716a0);
    thunk_FUN_01efb3a4(PTR_DAT_045716e0);
    thunk_FUN_01efb3a4(PTR_DAT_045716e8);
    DAT_04839d5b = 1;
  }
  puVar3 = Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__;
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_03416d98(lVar8,0);
  local_74 = FUN_0407a4c4(0);
  uVar9 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_74);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar4);
  }
  uVar5 = FUN_03cd4058();
  local_78 = CONCAT31(local_78._1_3_,uVar5) & 0xffffff01;
  uVar10 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&local_78);
  if (lVar8 != 0) {
    FUN_03419fc0(lVar8,*(undefined8 *)PTR_DAT_045716e8,uVar9,uVar10,0);
    FUN_03418bf0(lVar8,0);
    puVar3 = PTR_DAT_045716e0;
    puVar4 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
    puVar2 = 
    Method_Oculus_Interaction_PointerInteractable<TouchHandGrabInteractor,_TouchHandGrabInteractable>__ctor__
    ;
    lVar11 = *(long *)(param_5 + 0x10);
    if (lVar11 != 0) {
      iVar14 = 0;
      do {
        if (*(int *)(lVar11 + 0x18) <= iVar14) {
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403ea2c(lVar8,0);
          return;
        }
        FUN_0307fcdc(lVar11,iVar14,*(undefined8 *)PTR_DAT_045716d8);
        if (extraout_x1 == 0) break;
        iVar6 = FUN_03cd517c(extraout_x1);
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            FUN_03cd50a0(extraout_x1,iVar6);
            uVar9 = param_3;
            uVar10 = param_4;
            plVar12 = (long *)FUN_01f08890(*(undefined8 *)puVar4,6);
            local_74 = *(undefined4 *)(extraout_x1 + 0x24);
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_74);
            if (plVar12 == (long *)0x0) goto LAB_03cd5044;
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            {
LAB_03cd5094:
              uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar9,0);
            }
            if ((int)plVar12[3] == 0) {
LAB_03cd5090:
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            plVar12[4] = lVar11;
            thunk_FUN_01f51358(plVar12 + 4,lVar11);
            local_78 = *(uint *)(extraout_x1 + 0x28);
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_78);
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_03cd5094;
            if (*(uint *)(plVar12 + 3) < 2) goto LAB_03cd5090;
            plVar12[5] = lVar11;
            thunk_FUN_01f51358(plVar12 + 5,lVar11);
            local_7c = iVar6;
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_7c);
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_03cd5094;
            if (*(uint *)(plVar12 + 3) < 3) goto LAB_03cd5090;
            plVar12[6] = lVar11;
            thunk_FUN_01f51358(plVar12 + 6,lVar11);
            local_80 = FUN_03cd5110(extraout_x1,iVar6);
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_80);
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
            goto LAB_03cd5094;
            if (*(uint *)(plVar12 + 3) < 4) goto LAB_03cd5090;
            plVar12[7] = lVar11;
            thunk_FUN_01f51358(plVar12 + 7,lVar11);
            local_84 = (undefined4)param_3;
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_84);
            param_3 = uVar9;
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
               param_3 = uVar9, lVar13 == 0)) goto LAB_03cd5094;
            if (*(uint *)(plVar12 + 3) < 5) goto LAB_03cd5090;
            plVar12[8] = lVar11;
            thunk_FUN_01f51358(plVar12 + 8,lVar11);
            local_88 = (undefined4)param_4;
            lVar11 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_88);
            param_4 = uVar10;
            if ((lVar11 != 0) &&
               (lVar13 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
               param_4 = uVar10, lVar13 == 0)) goto LAB_03cd5094;
            if (*(uint *)(plVar12 + 3) < 6) goto LAB_03cd5090;
            plVar12[9] = lVar11;
            thunk_FUN_01f51358(plVar12 + 9,lVar11);
            FUN_0341a07c(lVar8,*(undefined8 *)puVar3,plVar12,0);
            FUN_03418bf0(lVar8,0);
            iVar6 = iVar6 + 1;
            iVar7 = FUN_03cd517c(extraout_x1);
          } while (iVar6 < iVar7);
        }
        lVar11 = *(long *)(param_5 + 0x10);
        iVar14 = iVar14 + 1;
      } while (lVar11 != 0);
    }
  }
LAB_03cd5044:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


