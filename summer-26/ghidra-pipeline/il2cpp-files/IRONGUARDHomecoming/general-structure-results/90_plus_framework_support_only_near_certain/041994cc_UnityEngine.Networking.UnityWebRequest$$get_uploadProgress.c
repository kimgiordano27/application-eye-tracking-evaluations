/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequest$$get_uploadProgress
ENTRY_POINT: 041994cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 175
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x0419999c) */

void UnityEngine_Networking_UnityWebRequest__get_uploadProgress(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  long *unaff_x25;
  
  FUN_0422aa74(param_1,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8),0);
  FUN_0422f074();
  lVar4 = thunk_FUN_01f117cc(*unaff_x24);
  FUN_04228304(lVar4,0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x2b4) = 1;
    *(long *)(unaff_x19 + 0x418) = lVar4;
    thunk_FUN_01f51358(unaff_x19 + 0x418,lVar4);
    puVar2 = PTR_DAT_0458df60;
    puVar1 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
    ;
    if (*(long *)(unaff_x19 + 0x418) != 0) {
      FUN_0422aa74(*(long *)(unaff_x19 + 0x418),*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10)
                   ,0);
      FUN_0414df9c(*(undefined8 *)(unaff_x19 + 0x418),0);
      FUN_0422f074();
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_041a8598();
      *(undefined8 *)(unaff_x19 + 0x408) = uVar5;
      thunk_FUN_01f51358(unaff_x19 + 0x408,uVar5);
      lVar4 = *(long *)(unaff_x19 + 0x408);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_034f6024();
      if (((lVar4 != 0) && (FUN_041a8460(lVar4,uVar5,0), unaff_x20 != 0)) &&
         (plVar6 = (long *)FUN_041a7930(), plVar6 != (long *)0x0)) {
        lVar4 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
              puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
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
          lVar4 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
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
          lVar4 = *plVar6;
          uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
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
  goto LAB_04199994;
UnityEngine_Networking_UnityWebRequest__SetRequestHeader:
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
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
  lVar4 = *(long *)(unaff_x19 + 0x420);
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df50);
  FUN_02b87fb8();
  puVar1 = PTR_DAT_0458df40;
  if (lVar4 != 0) {
    FUN_041a8a34(lVar4,uVar5,0);
    lVar4 = *(long *)(unaff_x19 + 0x420);
    uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    puVar2 = PTR_DAT_0458df48;
    if (lVar4 != 0) {
      FUN_041a8ae4(lVar4,uVar5,0);
      lVar4 = *(long *)(unaff_x19 + 0x420);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02b880d8();
      puVar2 = PTR_DAT_0458df58;
      if (lVar4 != 0) {
        FUN_041abe64(lVar4,uVar5,0);
        lVar4 = *(long *)(unaff_x19 + 0x420);
        uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02b8a294();
        if (lVar4 != 0) {
          FUN_041a8b94(lVar4,uVar5,0);
          lVar4 = *(long *)(unaff_x19 + 0x420);
          uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                    ();
          puVar3 = PTR_DAT_0458df68;
          puVar2 = PTR_DAT_0458df38;
          puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
          if (lVar4 != 0) {
            FUN_041abfc4(lVar4,uVar5,0);
            uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      ();
            uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
            FUN_0412ec84(uVar8,uVar5,0);
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


