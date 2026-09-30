/*
FUNCTION_NAME: FUN_04199220
ENTRY_POINT: 04199220
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 244
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0419999c) */

void FUN_04199220(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar6 = PTR_DAT_0458df30;
  puVar5 = PTR_DAT_0458df28;
  puVar3 = PTR_DAT_0458df20;
  puVar2 = PTR_DAT_0458df18;
  puVar1 = Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__;
  if ((DAT_04840c94 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458df38);
    thunk_FUN_01efb3a4(PTR_DAT_0458df40);
    thunk_FUN_01efb3a4(PTR_DAT_0458df48);
    thunk_FUN_01efb3a4(PTR_DAT_0458df50);
    thunk_FUN_01efb3a4(PTR_DAT_0458df58);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_Write__);
    thunk_FUN_01efb3a4(PTR_DAT_0458df60);
    thunk_FUN_01efb3a4(PTR_DAT_0458df68);
    thunk_FUN_01efb3a4(PTR_DAT_0458df30);
    thunk_FUN_01efb3a4(PTR_DAT_0458df28);
    thunk_FUN_01efb3a4(Method_System_IO_Compression_DeflateStream_WriteInternal__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458df20);
    thunk_FUN_01efb3a4(PTR_DAT_0458df18);
    thunk_FUN_01efb3a4(PTR_DAT_0458df70);
    thunk_FUN_01efb3a4(PTR_DAT_0458df78);
    thunk_FUN_01efb3a4(PTR_DAT_0458df80);
    thunk_FUN_01efb3a4(PTR_DAT_0458df88);
    thunk_FUN_01efb3a4(PTR_DAT_0458df90);
    thunk_FUN_01efb3a4(PTR_DAT_0458df98);
    thunk_FUN_01efb3a4(PTR_DAT_0458dfa0);
    thunk_FUN_01efb3a4(PTR_DAT_0458dfa8);
    thunk_FUN_01efb3a4(PTR_DAT_0458a4e0);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<PointerUpEvent>__
                      );
    DAT_04840c94 = 1;
  }
  puVar4 = PTR_DAT_0458a4e0;
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_031eb4a8(uVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x3e0) = uVar7;
  thunk_FUN_01f51358(param_1 + 0x3e0,uVar7);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
  FUN_02b6aa68(uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x400) = uVar7;
  thunk_FUN_01f51358(param_1 + 0x400,uVar7);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_04228304(param_1,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar8 = *(long *)puVar4;
  }
  FUN_0422aa74(param_1,**(undefined8 **)(lVar8 + 0xb8),0);
  *(long *)(param_1 + 0x420) = param_2;
  thunk_FUN_01f51358(param_1 + 0x420,param_2);
  *(undefined8 *)(param_1 + 0x3d0) = param_4;
  thunk_FUN_01f51358(param_1 + 0x3d0,param_4);
  FUN_04197e20(param_1,param_3);
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_04228304(lVar8,0);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x2b4) = 1;
    *(long *)(param_1 + 0x410) = lVar8;
    thunk_FUN_01f51358(param_1 + 0x410,lVar8);
    if (*(long *)(param_1 + 0x410) != 0) {
      FUN_0422aa74(*(long *)(param_1 + 0x410),*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8)
                   ,0);
      FUN_0422f074(param_1,*(undefined8 *)(param_1 + 0x410),0);
      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_04228304(lVar8,0);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x2b4) = 1;
        *(long *)(param_1 + 0x418) = lVar8;
        thunk_FUN_01f51358(param_1 + 0x418,lVar8);
        puVar3 = PTR_DAT_0458dfa8;
        puVar2 = PTR_DAT_0458df60;
        puVar1 = 
        Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
        ;
        if (*(long *)(param_1 + 0x418) != 0) {
          FUN_0422aa74(*(long *)(param_1 + 0x418),
                       *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
          FUN_0414df9c(*(undefined8 *)(param_1 + 0x418),0);
          FUN_0422f074(param_1,*(undefined8 *)(param_1 + 0x418),0);
          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_041a8598(uVar7,param_2,0);
          *(undefined8 *)(param_1 + 0x408) = uVar7;
          thunk_FUN_01f51358(param_1 + 0x408,uVar7);
          lVar8 = *(long *)(param_1 + 0x408);
          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          FUN_034f6024(uVar7,param_1,*(undefined8 *)puVar3,0);
          if (((lVar8 != 0) && (FUN_041a8460(lVar8,uVar7,0), param_2 != 0)) &&
             (plVar9 = (long *)FUN_041a7930(param_2,0), plVar9 != (long *)0x0)) {
            lVar8 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) ==
                    *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__)
                {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_04199638;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01ecb238(plVar9,*(long *)
                                           Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                                   ,0);
LAB_04199638:
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
            plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar8 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_041996b0;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_041996b0:
              uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              if ((uVar12 & 1) == 0) goto UnityEngine_Networking_UnityWebRequest__SetRequestHeader;
              lVar8 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                    puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0419970c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0419970c:
              uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
              FUN_04199a50(param_1,uVar7);
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_04199994;
UnityEngine_Networking_UnityWebRequest__SetRequestHeader:
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0419977c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_0419977c:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  puVar1 = PTR_DAT_0458df70;
  lVar8 = *(long *)(param_1 + 0x420);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df50);
  FUN_02b87fb8(uVar7,param_1,*(undefined8 *)puVar1,0);
  puVar2 = PTR_DAT_0458df80;
  puVar1 = PTR_DAT_0458df40;
  if (lVar8 != 0) {
    FUN_041a8a34(lVar8,uVar7,0);
    lVar8 = *(long *)(param_1 + 0x420);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              (uVar7,param_1,*(undefined8 *)puVar2,0);
    puVar3 = PTR_DAT_0458df78;
    puVar2 = PTR_DAT_0458df48;
    if (lVar8 != 0) {
      FUN_041a8ae4(lVar8,uVar7,0);
      lVar8 = *(long *)(param_1 + 0x420);
      uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02b880d8(uVar7,param_1,*(undefined8 *)puVar3,0);
      puVar3 = PTR_DAT_0458df88;
      puVar2 = PTR_DAT_0458df58;
      if (lVar8 != 0) {
        FUN_041abe64(lVar8,uVar7,0);
        lVar8 = *(long *)(param_1 + 0x420);
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02b8a294(uVar7,param_1,*(undefined8 *)puVar3,0);
        puVar2 = PTR_DAT_0458df90;
        if (lVar8 != 0) {
          FUN_041a8b94(lVar8,uVar7,0);
          lVar8 = *(long *)(param_1 + 0x420);
          uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                    (uVar7,param_1,*(undefined8 *)puVar2,0);
          puVar4 = PTR_DAT_0458dfa0;
          puVar6 = PTR_DAT_0458df98;
          puVar5 = PTR_DAT_0458df68;
          puVar3 = PTR_DAT_0458df38;
          puVar2 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
          puVar1 = Method_System_IO_Compression_DeflateStream_Write__;
          if (lVar8 != 0) {
            FUN_041abfc4(lVar8,uVar7,0);
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      (uVar7,param_1,*(undefined8 *)puVar6,0);
            uVar11 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
            FUN_0412ec84(uVar11,uVar7,0);
            FUN_0414e2b8(param_1,uVar11,0);
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
            FUN_02df9810(uVar7,param_1,*(undefined8 *)puVar4,0);
            FUN_022c2090(param_1,uVar7,0,*(undefined8 *)puVar1);
            return;
          }
        }
      }
    }
  }
LAB_04199994:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


