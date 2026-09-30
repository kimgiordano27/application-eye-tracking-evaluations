/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequest$$InternalSetUrl
ENTRY_POINT: 04199310
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 218
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0419999c) */

void UnityEngine_Networking_UnityWebRequest__InternalSetUrl(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe00));
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
  *(undefined1 *)(unaff_x28 + 0xc94) = 1;
  puVar1 = PTR_DAT_0458a4e0;
  uVar4 = thunk_FUN_01f117cc(*unaff_x25);
  FUN_031eb4a8(uVar4,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x3e0) = uVar4;
  thunk_FUN_01f51358(unaff_x19 + 0x3e0,uVar4);
  uVar4 = thunk_FUN_01f117cc(*unaff_x27);
  FUN_02b6aa68(uVar4,*unaff_x26);
  *(undefined8 *)(unaff_x19 + 0x400) = uVar4;
  thunk_FUN_01f51358(unaff_x19 + 0x400,uVar4);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_04228304();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0422aa74();
  *(long *)(unaff_x19 + 0x420) = unaff_x20;
  thunk_FUN_01f51358(unaff_x19 + 0x420);
  *(undefined8 *)(unaff_x19 + 0x3d0) = unaff_x22;
  thunk_FUN_01f51358(unaff_x19 + 0x3d0);
  FUN_04197e20();
  lVar5 = thunk_FUN_01f117cc(*unaff_x24);
  FUN_04228304(lVar5,0);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x2b4) = 1;
    *(long *)(unaff_x19 + 0x410) = lVar5;
    thunk_FUN_01f51358(unaff_x19 + 0x410,lVar5);
    if (*(long *)(unaff_x19 + 0x410) != 0) {
      FUN_0422aa74(*(long *)(unaff_x19 + 0x410),
                   *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),0);
      FUN_0422f074();
      lVar5 = thunk_FUN_01f117cc(*unaff_x24);
      FUN_04228304(lVar5,0);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x2b4) = 1;
        *(long *)(unaff_x19 + 0x418) = lVar5;
        thunk_FUN_01f51358(unaff_x19 + 0x418,lVar5);
        puVar3 = PTR_DAT_0458df60;
        puVar2 = 
        Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
        ;
        if (*(long *)(unaff_x19 + 0x418) != 0) {
          FUN_0422aa74(*(long *)(unaff_x19 + 0x418),
                       *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10),0);
          FUN_0414df9c(*(undefined8 *)(unaff_x19 + 0x418),0);
          FUN_0422f074();
          uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
          FUN_041a8598();
          *(undefined8 *)(unaff_x19 + 0x408) = uVar4;
          thunk_FUN_01f51358(unaff_x19 + 0x408,uVar4);
          lVar5 = *(long *)(unaff_x19 + 0x408);
          uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
          FUN_034f6024();
          if (((lVar5 != 0) && (FUN_041a8460(lVar5,uVar4,0), unaff_x20 != 0)) &&
             (plVar6 = (long *)FUN_041a7930(), plVar6 != (long *)0x0)) {
            lVar5 = *plVar6;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) ==
                    *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__)
                {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_04199638;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)
                     FUN_01ecb238(plVar6,*(long *)
                                          Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                                  ,0);
LAB_04199638:
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
            plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
            puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
            puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar5 = *plVar6;
              uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                    puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_041996b0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_041996b0:
              uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
              if ((uVar9 & 1) == 0) goto UnityEngine_Networking_UnityWebRequest__SetRequestHeader;
              lVar5 = *plVar6;
              uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                    puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_0419970c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0419970c:
              (*(code *)*puVar7)(plVar6,puVar7[1]);
              FUN_04199a50();
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_04199994;
UnityEngine_Networking_UnityWebRequest__SetRequestHeader:
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0419977c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar1,0);
LAB_0419977c:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  lVar5 = *(long *)(unaff_x19 + 0x420);
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df50);
  FUN_02b87fb8();
  puVar1 = PTR_DAT_0458df40;
  if (lVar5 != 0) {
    FUN_041a8a34(lVar5,uVar4,0);
    lVar5 = *(long *)(unaff_x19 + 0x420);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    puVar2 = PTR_DAT_0458df48;
    if (lVar5 != 0) {
      FUN_041a8ae4(lVar5,uVar4,0);
      lVar5 = *(long *)(unaff_x19 + 0x420);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02b880d8();
      puVar2 = PTR_DAT_0458df58;
      if (lVar5 != 0) {
        FUN_041abe64(lVar5,uVar4,0);
        lVar5 = *(long *)(unaff_x19 + 0x420);
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02b8a294();
        if (lVar5 != 0) {
          FUN_041a8b94(lVar5,uVar4,0);
          lVar5 = *(long *)(unaff_x19 + 0x420);
          uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                    ();
          puVar3 = PTR_DAT_0458df68;
          puVar2 = PTR_DAT_0458df38;
          puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
          if (lVar5 != 0) {
            FUN_041abfc4(lVar5,uVar4,0);
            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      ();
            uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
            FUN_0412ec84(uVar8,uVar4,0);
            FUN_0414e2b8();
            thunk_FUN_01f117cc(*(undefined8 *)puVar1);
            FUN_02df9810();
            FUN_022c2090();
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


