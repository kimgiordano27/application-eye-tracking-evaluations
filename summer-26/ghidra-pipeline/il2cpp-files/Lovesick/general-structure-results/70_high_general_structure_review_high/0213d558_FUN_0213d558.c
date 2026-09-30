/*
FUNCTION_NAME: FUN_0213d558
ENTRY_POINT: 0213d558
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


void FUN_0213d558(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_037811a7 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRInteractionManager>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_ConditionalWeakTable<HttpWebRequest,_NtlmSession>_GetValue__
                      );
    thunk_FUN_00d48444(
                      Method_System_Data_DataRelationCollection_DataTableRelationCollection_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_8315);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__);
    DAT_037811a7 = 1;
  }
  piVar7 = param_2 + 2;
  if ((*piVar7 == 0) && (*param_2 != 1)) {
    iVar1 = param_2[10];
    if ((iVar1 != 0) &&
       (FUN_012f74a8(piVar7,iVar1,
                     *(undefined8 *)Method_System_Xml_Schema_XmlListConverter_ToArray<Decimal>__),
       puVar4 = StringLiteral_8315,
       puVar3 = Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__,
       puVar2 = Method_System_Collections_Generic_List<XRInteractionManager>__ctor__, 0 < iVar1)) {
      iVar8 = 0;
      do {
        lVar5 = FUN_012f75b0(param_2 + 10,iVar8,*(undefined8 *)puVar4);
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
  uVar11 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 6);
  param_1[1] = *(undefined8 *)(param_2 + 4);
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  return;
}


