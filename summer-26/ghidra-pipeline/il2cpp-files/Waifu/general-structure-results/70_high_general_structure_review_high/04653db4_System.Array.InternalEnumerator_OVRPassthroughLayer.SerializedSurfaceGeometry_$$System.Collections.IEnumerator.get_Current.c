/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04653db4
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  int iVar1;
  ushort uVar2;
  int unaff_w19;
  int *unaff_x20;
  long unaff_x21;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = unaff_x20[4];
  }
  if (iVar4 < unaff_w19) {
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_0338f618();
    }
    FUN_04653548();
  }
  if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_0338f618();
  }
  iVar4 = *unaff_x20;
  if (iVar4 < unaff_w19) {
    lVar3 = *(long *)(unaff_x20 + 2);
    uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_0338f618();
      iVar4 = *unaff_x20;
      uVar2 = *(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    }
    iVar1 = iVar4;
    if ((uVar2 & 1) == 0) {
      FUN_0338f618();
      iVar1 = *unaff_x20;
    }
    if (DAT_086ed1d8 == (code *)0x0) {
      DAT_086ed1d8 = (code *)FUN_033d1b68(
                                         "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)"
                                         );
    }
    (*DAT_086ed1d8)(lVar3 + (iVar4 << 3),0xff,(long)(unaff_w19 - iVar1));
  }
  *unaff_x20 = unaff_w19;
  return;
}


