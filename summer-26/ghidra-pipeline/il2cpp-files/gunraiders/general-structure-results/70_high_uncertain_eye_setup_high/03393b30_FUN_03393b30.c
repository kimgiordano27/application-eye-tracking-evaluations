/*
FUNCTION_NAME: FUN_03393b30
ENTRY_POINT: 03393b30
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool FUN_03393b30(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  if ((DAT_045336ab & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_Fixed2<float4>__ctor__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                );
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_Fixed2<float4>_get_Item__);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(PTR_DAT_04231e50);
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_Fixed2<float4x4>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_Universal_Fixed2<float4x4>_get_Item__);
    FUN_01c5d288(PTR_DAT_04231790);
    DAT_045336ab = 1;
  }
  lVar5 = FUN_033939f0(param_1,param_2,param_4,param_6,param_7);
  puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03393c68;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01c72498(plVar12,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_03393c68:
    iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if (0 < iVar4) {
      if (lVar5 == 0) goto LAB_03393f00;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        *(undefined1 *)(lVar5 + 0x10) = 1;
        uVar7 = thunk_FUN_01c5d21c(param_1,0);
        uVar13 = *(undefined8 *)Method_UnityEngine_Rendering_Universal_Fixed2<float4>_get_Item__;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar13 = FUN_032e04b8(uVar13,0);
        uVar10 = FUN_032e935c(uVar7,uVar13,0);
        puVar6 = (undefined8 *)Method_UnityEngine_Rendering_Universal_Fixed2<float4x4>_get_Item__;
        if ((uVar10 & 1) == 0) {
          puVar6 = (undefined8 *)Method_UnityEngine_Rendering_Universal_Fixed2<float4x4>__ctor__;
        }
        uVar7 = *puVar6;
        if (param_3 != 0) {
          plVar12 = *(long **)(param_3 + 0x60);
          uVar13 = *(undefined8 *)PTR_DAT_04231e50;
          if (plVar12 == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
          }
          uVar7 = FUN_03152fb8(uVar7,uVar13,uVar8,0);
        }
        if (param_7 == (long *)0x0) goto LAB_03393f00;
        uVar13 = (**(code **)(*param_7 + 0x188))(param_7,*(undefined8 *)(*param_7 + 400));
        uVar7 = FUN_03152fb8(uVar7,*(undefined8 *)PTR_DAT_04231790,uVar13,0);
        bVar1 = *(byte *)(*(long *)
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
                         + 0x130);
        if ((*(byte *)(*param_7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_7 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<XmlQualifiedName,_SchemaAttDef>_Dispose__
           )) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar7 = FUN_03358c64(param_5,param_6,uVar7,0);
        }
        plVar12 = *(long **)(param_1 + 0x28);
        if (plVar12 == (long *)0x0) goto LAB_03393f00;
        lVar9 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_03393ee0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar2,1);
LAB_03393ee0:
        (*(code *)*puVar6)(plVar12,1,uVar7,param_7,puVar6[1]);
      }
    }
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    plVar12 = *(long **)(param_1 + 0x20);
    if (plVar12 == (long *)0x0) goto LAB_03393f00;
    auVar14 = (**(code **)(*plVar12 + 0x2d8))(plVar12,*(undefined8 *)(*plVar12 + 0x2e0));
    OVRPlugin_LogCallback2DelegateType__Invoke(param_3,param_2,auVar14._0_8_,auVar14._8_8_,lVar5);
  }
  if (lVar5 == 0) {
LAB_03393f00:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(char *)(lVar5 + 0x38) == '\0') {
    lVar9 = *(long *)(param_1 + 0x20);
    uVar7 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_UnityEngine_Rendering_Universal_Fixed2<float4>__ctor__);
    FUN_0338dbd8(uVar7,param_2,lVar5);
    if (lVar9 == 0) goto LAB_03393f00;
    FUN_0335ff70(lVar9,uVar7,0);
    bVar3 = *(char *)(lVar5 + 0x38) != '\0';
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}


