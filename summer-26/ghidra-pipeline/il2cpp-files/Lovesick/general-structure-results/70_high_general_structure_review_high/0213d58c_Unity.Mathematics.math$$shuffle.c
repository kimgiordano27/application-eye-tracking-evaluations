/*
FUNCTION_NAME: Unity.Mathematics.math$$shuffle
ENTRY_POINT: 0213d58c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Mathematics_math__shuffle(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRInteractionManager>__ctor__);
  thunk_FUN_00d48444(
                    Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_GetValue__
                    );
                    /* try { // try from 0213d5a4 to 0223d5af has its CatchHandler @ 0213d7b8 */
  thunk_FUN_00d48444(
                    Method_System_Data_DataRelationCollection_DataTableRelationCollection_get_Item__
                    );
                    /* try { // try from 0213d5b0 to 0223d7cf has its CatchHandler @ 0213d488 */
  thunk_FUN_00d48444(StringLiteral_8315);
  thunk_FUN_00d48444(Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__);
  *(undefined1 *)(unaff_x21 + 0x1a7) = 1;
  piVar7 = unaff_x20 + 2;
  if ((*piVar7 == 0) && (*unaff_x20 != 1)) {
    iVar1 = unaff_x20[10];
    if ((iVar1 != 0) &&
       (FUN_012f74a8(piVar7,iVar1,
                     *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__),
       puVar4 = StringLiteral_8315,
       puVar3 = Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__,
       puVar2 = Method_System_Collections_Generic_List<XRInteractionManager>__ctor__, 0 < iVar1)) {
      iVar8 = 0;
      do {
        lVar5 = FUN_012f75b0(unaff_x20 + 10,iVar8,*(undefined8 *)puVar4);
        if (lVar5 != 0) {
          uVar9 = *(undefined8 *)(lVar5 + 0x78);
          uVar6 = FUN_012f8ee4(piVar7,uVar9,*(undefined8 *)puVar2);
          if ((uVar6 & 1) == 0) {
            FUN_012f81e4(piVar7,uVar9,*(undefined8 *)puVar3);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
  }
  uVar9 = *(undefined8 *)piVar7;
  uVar11 = *(undefined8 *)(unaff_x20 + 8);
  uVar10 = *(undefined8 *)(unaff_x20 + 6);
  unaff_x19[1] = *(undefined8 *)(unaff_x20 + 4);
  *unaff_x19 = uVar9;
  unaff_x19[3] = uVar11;
  unaff_x19[2] = uVar10;
  return;
}


