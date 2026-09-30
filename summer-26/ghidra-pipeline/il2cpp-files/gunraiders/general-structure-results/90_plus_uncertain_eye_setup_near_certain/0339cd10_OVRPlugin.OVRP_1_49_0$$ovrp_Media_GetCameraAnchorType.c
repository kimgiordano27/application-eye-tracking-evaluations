/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorType
ENTRY_POINT: 0339cd10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorType
               (long param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
                    /* catch(type#1 @ 04025298) { ... } // from try @ 0339ccf4 with catch @ 0339cd10
                        */
                    /* try { // try from 0339cd28 to 0349cd3f has its CatchHandler @ 0339cd6c */
  if ((DAT_045336c3 & 1) == 0) {
                    /* try { // try from 0339cd40 to 0349cd5b has its CatchHandler @ 0339ccac */
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__);
                    /* try { // try from 0339cd5c to 0349cd6b has its CatchHandler @ 0339cd6c */
    FUN_01c5d288(
                Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                );
                    /* catch() { ... } // from try @ 0339cd28 with catch @ 0339cd6c
                       catch() { ... } // from try @ 0339cd5c with catch @ 0339cd6c */
                    /* try { // try from 0339cd70 to 0349cd73 has its CatchHandler @ 0339cd7c */
    FUN_01c5d288(Method_System_Collections_Generic_HashSet<InteractableTool>_GetEnumerator__);
                    /* try { // try from 0339cd74 to 0349cd7f has its CatchHandler @ 0339ccac */
    DAT_045336c3 = 1;
  }
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0339cd70 with catch @ 0339cd7c
                        */
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0339cdd8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01c72498(plVar10,*(long *)
                                   Method_System_Collections_Generic_HashSet_Enumerator<Vector3Int>_MoveNext__
                          ,0);
LAB_0339cdd8:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (2 < iVar2) {
      if (param_2 == (long *)0x0) goto LAB_0339cf30;
      plVar10 = *(long **)(param_1 + 0x28);
      uVar4 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      uVar5 = FUN_03295500(0);
      if (param_3 == 0) goto LAB_0339cf30;
      uVar5 = FUN_0336f2b8(*(undefined8 *)
                            Method_System_Collections_Generic_HashSet<InteractableTool>_GetEnumerator__
                           ,uVar5,*(undefined8 *)(param_3 + 0x60),0);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_List_Enumerator<ScriptableRendererFeature>_MoveNext__
                          );
      }
      uVar6 = thunk_FUN_01c495e4(param_2,*(undefined8 *)
                                          Method_System_Collections_Generic_List_Enumerator<ShadowCaster2D>_MoveNext__
                                );
      uVar4 = FUN_03358c64(uVar6,uVar4,uVar5,0);
      if (plVar10 == (long *)0x0) goto LAB_0339cf30;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_0339cee8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_01c72498(plVar10,*(long *)puVar1,1);
LAB_0339cee8:
      (*(code *)*puVar3)(plVar10,3,uVar4,0,puVar3[1]);
    }
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if ((lVar7 != 0) && (param_3 != 0)) {
    FUN_0338ff78(param_3,param_4,*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68));
    return;
  }
LAB_0339cf30:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


