/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequest$$get_isDone
ENTRY_POINT: 04199570
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 163
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0419999c) */

void UnityEngine_Networking_UnityWebRequest__get_isDone(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar10;
  undefined8 *unaff_x22;
  
  uVar4 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_041a8598();
  *(undefined8 *)(unaff_x19 + 0x408) = uVar4;
  thunk_FUN_01f51358(unaff_x19 + 0x408,uVar4);
  lVar10 = *(long *)(unaff_x19 + 0x408);
  uVar4 = thunk_FUN_01f117cc(*unaff_x22);
  FUN_034f6024();
  if (((lVar10 != 0) && (FUN_041a8460(lVar10,uVar4,0), unaff_x20 != 0)) &&
     (plVar5 = (long *)FUN_041a7930(), plVar5 != (long *)0x0)) {
    lVar10 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04199638;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_UnityEngine_Component_GetComponentInChildren<TrainLocomotive>__
                          ,0);
LAB_04199638:
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_041996b0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_041996b0:
      uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar8 & 1) == 0) goto UnityEngine_Networking_UnityWebRequest__SetRequestHeader;
      lVar10 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0419970c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0419970c:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      FUN_04199a50();
    } while( true );
  }
  goto LAB_04199994;
UnityEngine_Networking_UnityWebRequest__SetRequestHeader:
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0419977c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_0419977c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  lVar10 = *(long *)(unaff_x19 + 0x420);
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df50);
  FUN_02b87fb8();
  puVar1 = PTR_DAT_0458df40;
  if (lVar10 != 0) {
    FUN_041a8a34(lVar10,uVar4,0);
    lVar10 = *(long *)(unaff_x19 + 0x420);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    puVar2 = PTR_DAT_0458df48;
    if (lVar10 != 0) {
      FUN_041a8ae4(lVar10,uVar4,0);
      lVar10 = *(long *)(unaff_x19 + 0x420);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02b880d8();
      puVar2 = PTR_DAT_0458df58;
      if (lVar10 != 0) {
        FUN_041abe64(lVar10,uVar4,0);
        lVar10 = *(long *)(unaff_x19 + 0x420);
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02b8a294();
        if (lVar10 != 0) {
          FUN_041a8b94(lVar10,uVar4,0);
          lVar10 = *(long *)(unaff_x19 + 0x420);
          uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                    ();
          puVar3 = PTR_DAT_0458df68;
          puVar2 = PTR_DAT_0458df38;
          puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
          if (lVar10 != 0) {
            FUN_041abfc4(lVar10,uVar4,0);
            uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      ();
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
            FUN_0412ec84(uVar7,uVar4,0);
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


