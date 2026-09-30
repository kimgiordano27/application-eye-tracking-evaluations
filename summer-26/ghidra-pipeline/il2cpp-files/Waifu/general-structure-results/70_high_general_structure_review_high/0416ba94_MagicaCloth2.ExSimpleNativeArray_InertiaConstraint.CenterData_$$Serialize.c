/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<InertiaConstraint.CenterData>$$Serialize
ENTRY_POINT: 0416ba94
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ExSimpleNativeArray<InertiaConstraint_CenterData>__Serialize
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack000000000000001c;
  
  param_9 = param_2;
  if (*(long *)(param_7 + 0x38) == 0) {
    FUN_0338f674(param_7);
  }
  uVar6 = *param_1;
  if (DAT_086ee7d0 == (code *)0x0) {
    DAT_086ee7d0 = (code *)FUN_033d1b68(
                                       "UnityEngine.Mesh/MeshData::HasVertexAttribute(System.IntPtr,UnityEngine.Rendering.VertexAttribute)"
                                       );
  }
  uVar3 = (*DAT_086ee7d0)(uVar6,param_4);
  if ((uVar3 & 1) == 0) {
    uStack000000000000001c = param_4;
    uVar6 = FUN_033d1ba8(&DAT_083d2d38);
    uVar6 = thunk_FUN_03398650(uVar6,&stack0x0000001c);
    uVar5 = FUN_033d1ba8(&DAT_084405c8);
    uVar6 = FUN_0666541c(uVar5,uVar6,0);
  }
  else {
    iVar1 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x38) + 8))();
    uVar6 = *param_1;
    if (DAT_086ee7d8 == (code *)0x0) {
      DAT_086ee7d8 = (code *)FUN_033d1b68("UnityEngine.Mesh/MeshData::GetVertexCount(System.IntPtr)"
                                         );
    }
    iVar2 = (*DAT_086ee7d8)(uVar6);
    if (iVar2 <= iVar1) {
      uVar5 = *param_1;
      uVar6 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x38) + 0x18))(param_9,param_10);
      if (DAT_086ee7f8 == (code *)0x0) {
        DAT_086ee7f8 = (code *)FUN_033d1b68(
                                           "UnityEngine.Mesh/MeshData::CopyAttributeIntoPtr(System.IntPtr,UnityEngine.Rendering.VertexAttribute,UnityEngine.Rendering.VertexAttributeFormat,System.Int32,System.IntPtr)"
                                           );
      }
      (*DAT_086ee7f8)(uVar5,param_4,param_5,param_6,uVar6);
      return;
    }
    uStack000000000000001c = FUN_079ebc04(param_1,0);
    uVar6 = FUN_033d1ba8(&DAT_083cda98);
                    /* try { // try from 0416bc18 to 0426bc1f has its CatchHandler @ 0416bd28 */
    uVar6 = thunk_FUN_03398650(uVar6,&stack0x0000001c);
    param_12 = (*(code *)**(undefined8 **)(*(long *)(param_7 + 0x38) + 8))();
                    /* try { // try from 0416bc3c to 0426bc4b has its CatchHandler @ 0416bd24 */
    uVar5 = FUN_033d1ba8(&DAT_083cda98);
    uVar5 = thunk_FUN_03398650(uVar5,&param_12);
                    /* try { // try from 0416bc4c to 0426bc7b has its CatchHandler @ 0416b9e4 */
    uVar4 = FUN_033d1ba8(&DAT_08441ea8);
    uVar6 = FUN_0666f168(uVar4,uVar6,uVar5,0);
  }
  FUN_033d1ba8(&DAT_083cdc60);
  uVar5 = thunk_FUN_03398a84();
                    /* try { // try from 0416bc7c to 0426bc9f has its CatchHandler @ 0416bd2c */
  FUN_0682eb84(uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1c20(uVar5,param_7);
}


