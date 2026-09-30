/*
FUNCTION_NAME: UnityEngine.Networking.UnityWebRequest$$get_downloadProgress
ENTRY_POINT: 041995f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 158
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419999c) */

void UnityEngine_Networking_UnityWebRequest__get_downloadProgress(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  ulong uVar9;
  long *in_x10;
  int *piVar10;
  long unaff_x19;
  
  if (in_x9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *in_x10) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04199638;
      }
      in_x9 = in_x9 + -1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_04199638:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<WallMesh>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_041996b0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_041996b0:
    uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar9 & 1) == 0) break;
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0419970c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
LAB_0419970c:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
    FUN_04199a50();
  } while( true );
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0419977c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_0419977c:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  lVar8 = *(long *)(unaff_x19 + 0x420);
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0458df50);
  FUN_02b87fb8();
  puVar1 = PTR_DAT_0458df40;
  if (lVar8 != 0) {
    FUN_041a8a34(lVar8,uVar6,0);
    lVar8 = *(long *)(unaff_x19 + 0x420);
    uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
              ();
    puVar2 = PTR_DAT_0458df48;
    if (lVar8 != 0) {
      FUN_041a8ae4(lVar8,uVar6,0);
      lVar8 = *(long *)(unaff_x19 + 0x420);
      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_02b880d8();
      puVar2 = PTR_DAT_0458df58;
      if (lVar8 != 0) {
        FUN_041abe64(lVar8,uVar6,0);
        lVar8 = *(long *)(unaff_x19 + 0x420);
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
        FUN_02b8a294();
        if (lVar8 != 0) {
          FUN_041a8b94(lVar8,uVar6,0);
          lVar8 = *(long *)(unaff_x19 + 0x420);
          uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
          System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                    ();
          puVar3 = PTR_DAT_0458df68;
          puVar2 = PTR_DAT_0458df38;
          puVar1 = Method_System_IO_Compression_DeflateStream_WriteInternal__;
          if (lVar8 != 0) {
            FUN_041abfc4(lVar8,uVar6,0);
            uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
            System_Collections_Generic_Dictionary<object,_OVRPassthroughLayer_PassthroughMeshInstance>__System_Collections_IDictionary_Add
                      ();
            uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
            FUN_0412ec84(uVar7,uVar6,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


