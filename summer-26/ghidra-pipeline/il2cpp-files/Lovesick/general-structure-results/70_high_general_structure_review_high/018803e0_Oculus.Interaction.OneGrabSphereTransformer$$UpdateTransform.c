/*
FUNCTION_NAME: Oculus.Interaction.OneGrabSphereTransformer$$UpdateTransform
ENTRY_POINT: 018803e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_OneGrabSphereTransformer__UpdateTransform
               (long param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_0377976b & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(PTR_DAT_033f3b78);
    thunk_FUN_00d48444(StringLiteral_10364);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    thunk_FUN_00d48444(OVRPermissionsRequester_Permission_TypeInfo);
    DAT_0377976b = 1;
  }
  puVar3 = StringLiteral_10364;
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)StringLiteral_10364) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_018804a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar12,*(long *)StringLiteral_10364,0);
LAB_018804a4:
    iVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    puVar1 = Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__;
    if (2 < iVar4) {
      if (param_2 == (long *)0x0) goto LAB_018805fc;
      plVar12 = *(long **)(param_1 + 0x28);
      uVar6 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      uVar7 = FUN_01731954(0);
      puVar2 = Method_System_Collections_Generic_List<IXmlNode>__ctor__;
      puVar1 = PTR_DAT_033f3b78;
      if (param_3 == 0) goto LAB_018805fc;
      uVar7 = FUN_018651d4(*(undefined8 *)OVRPermissionsRequester_Permission_TypeInfo,uVar7,
                           *(undefined8 *)(param_3 + 0x60));
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      uVar8 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar1);
      uVar6 = FUN_01802a3c(uVar8,uVar6,uVar7,0);
      if (plVar12 == (long *)0x0) goto LAB_018805fc;
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_018805b4;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
LAB_018805b4:
      (*(code *)*puVar5)(plVar12,3,uVar6,0,puVar5[1]);
    }
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if ((lVar9 != 0) && (param_3 != 0)) {
    FUN_01873e2c(param_3,param_4,*(undefined8 *)(lVar9 + 0x60),*(undefined8 *)(lVar9 + 0x68));
    return;
  }
LAB_018805fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


