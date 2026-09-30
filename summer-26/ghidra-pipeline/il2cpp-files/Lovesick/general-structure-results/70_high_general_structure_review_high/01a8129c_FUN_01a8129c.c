/*
FUNCTION_NAME: FUN_01a8129c
ENTRY_POINT: 01a8129c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01a8129c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = Method_RoomServicePhone_StartRinging__;
  puVar4 = Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__;
  if ((DAT_0377ccc1 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__);
    thunk_FUN_00d48444(Method_RoomServicePhone_StartRinging__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<SnowGlobePuzzle_SnowGlobeCrack>_GetEnumerator__
                      );
    thunk_FUN_00d48444(System_Net_WebExceptionStatus_TypeInfo);
    thunk_FUN_00d48444(System_Net_FtpWebRequestCreator_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_4>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f1148);
    DAT_0377ccc1 = 1;
  }
  puVar1 = PTR_DAT_033f1148;
  FUN_0128ccc4(param_1,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar2 = System_Net_FtpWebRequestCreator_TypeInfo;
  uVar6 = FUN_01a5cb98(param_2,0);
  lVar8 = *(long *)puVar1;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar8);
  }
  uVar5 = FUN_017cc478(uVar6,0);
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar8 != 0) {
    FUN_01320ebc(lVar8,(ulong)uVar5,*(undefined8 *)System_Net_WebExceptionStatus_TypeInfo);
    *(long *)(param_1 + 0x10) = lVar8;
    puVar3 = 
    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_4>_SliceWithStride<Vector3>__
    ;
    puVar2 = Method_System_Collections_Generic_List<SnowGlobePuzzle_SnowGlobeCrack>_GetEnumerator__;
    if (0 < (int)uVar5) {
      lVar9 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_017cc47c(lVar9,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        uVar6 = FUN_01a5ca40(param_2,uVar6,0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        if ((lVar7 == 0) || (FUN_01a81050(lVar7,uVar6), lVar8 == 0)) goto LAB_01a814ac;
        FUN_00c06124(lVar8,lVar7,*(undefined8 *)puVar2);
        if ((ulong)uVar5 - 1 == lVar9) break;
        lVar8 = *(long *)(param_1 + 0x10);
        lVar9 = lVar9 + 1;
      }
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01a5cac4(param_2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    return;
  }
LAB_01a814ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


