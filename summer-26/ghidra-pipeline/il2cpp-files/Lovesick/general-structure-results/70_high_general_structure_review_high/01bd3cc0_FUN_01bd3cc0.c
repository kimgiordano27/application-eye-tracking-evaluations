/*
FUNCTION_NAME: FUN_01bd3cc0
ENTRY_POINT: 01bd3cc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_01bd3cc0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0377e80b & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033eab38);
    thunk_FUN_00d48444(System_Collections_Generic_List<NetSyncSession>_TypeInfo);
    thunk_FUN_00d48444(System_Security_Cryptography_SHA384Managed_TypeInfo);
    thunk_FUN_00d48444(Sirenix_Serialization_AnySerializer_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80>_SliceWithStride<Vector4>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    DAT_0377e80b = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x28) != 0)) {
    if (*(long *)(*(long *)(param_2 + 0x28) + 0x28) == 0) {
      return;
    }
    FUN_01bd3a2c(param_1,*(undefined8 *)
                          Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_80>_SliceWithStride<Vector4>__
                 ,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18));
    if ((*(long *)(param_2 + 0x28) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x10), plVar5 != (long *)0x0)) {
      lVar2 = *plVar5;
      uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x28);
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12a);
      uVar7 = *(undefined8 *)System_Collections_Generic_List<HashSet<Face>>_TypeInfo;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_033eab38) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 6) * 0x10 + 0x138);
            goto LAB_01bd3de4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_00d59724(plVar5,*(long *)PTR_DAT_033eab38,6);
LAB_01bd3de4:
      (*(code *)*puVar1)(plVar5,uVar7,uVar6,puVar1[1]);
      FUN_01bd3c1c(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


