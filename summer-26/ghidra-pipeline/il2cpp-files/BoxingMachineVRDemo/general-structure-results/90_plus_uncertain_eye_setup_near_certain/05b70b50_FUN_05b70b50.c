/*
FUNCTION_NAME: FUN_05b70b50
ENTRY_POINT: 05b70b50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05b70eac) */

void FUN_05b70b50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long local_38;
  
                    /* try { // try from 05b70b58 to 05c70b6f has its CatchHandler @ 05b70bd8 */
                    /* try { // try from 05b70b70 to 05c70ba7 has its CatchHandler @ 05b70bdc */
  if ((DAT_06b81c79 & 1) == 0) {
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_Dispose__
                );
    FUN_02d6084c(
                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                );
    FUN_02d6084c(PTR_DAT_0675f3d0);
                    /* try { // try from 05b70ba8 to 05c70bc7 has its CatchHandler @ 05b70ab4 */
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_MoveNext__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__);
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_get_Current__
                );
                    /* try { // try from 05b70bc8 to 05c70bcb has its CatchHandler @ 05b70bd0 */
                    /* try { // try from 05b70bcc to 05c70bcf has its CatchHandler @ 05b70bd8 */
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_Enumerator<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Dispose__
                );
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b70b40 with catch @ 05b70bd0
                       catch(type#1 @ 0638da48) { ... } // from try @ 05b70bc8 with catch @ 05b70bd0
                       try { // try from 05b70bd0 to 05c70bf3 has its CatchHandler @ 05b70ab4 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b70b20 with catch @ 05b70bd4
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b70b58 with catch @ 05b70bd8
                       catch(type#1 @ 0638da48) { ... } // from try @ 05b70bcc with catch @ 05b70bd8
                        */
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_Dispose__
                );
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b70b70 with catch @ 05b70bdc
                        */
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                );
    DAT_06b81c79 = 1;
  }
  puVar1 = PTR_DAT_0675f3d0;
  local_38 = 0;
                    /* try { // try from 05b70bf4 to 05c70bf7 has its CatchHandler @ 05b70c18 */
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 05b70bf8 to 05c70c1b has its CatchHandler @ 05b70ab4 */
                    /* catch() { ... } // from try @ 05b70bf4 with catch @ 05b70c18 */
                    /* try { // try from 05b70c1c to 05c70c27 has its CatchHandler @ 05b70c3c */
                    /* try { // try from 05b70c28 to 05c70c33 has its CatchHandler @ 05b70ab4 */
  plVar3 = (long *)FUN_03526e74(param_2,param_5,&local_38,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Current__
                                ,0x10f,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_get_Current__
                               );
  lVar6 = *(long *)(param_2 + 0x58);
                    /* try { // try from 05b70c34 to 05c70c3b has its CatchHandler @ 05b70c3c */
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05b70c1c with catch @ 05b70c3c
                       catch(type#2 @ 00000000) { ... } // from try @ 05b70c34 with catch @ 05b70c3c
                        */
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* try { // try from 05b70c40 to 05c70ceb has its CatchHandler @ 05b70c40
                       catch() { ... } // from try @ 05b70c40 with catch @ 05b70c40
                       catch() { ... } // from try @ 05b70d04 with catch @ 05b70c40
                       catch() { ... } // from try @ 05b70d3c with catch @ 05b70c40
                       catch() { ... } // from try @ 05b70d60 with catch @ 05b70c40
                       catch() { ... } // from try @ 05b70d90 with catch @ 05b70c40 */
  uVar12 = *(undefined8 *)(lVar6 + 0x30);
  uVar10 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(local_38 + 0x20) = param_3;
  *(undefined8 *)(local_38 + 0x28) = param_4;
  *(undefined8 *)(local_38 + 0x18) = uVar12;
  *(undefined8 *)(local_38 + 0x10) = uVar10;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05b70ca4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02d9a5d4(plVar3,*(long *)
                                Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                        ,0);
LAB_05b70ca4:
  (*(code *)*puVar4)(plVar3,param_3,param_4,0,2,puVar4[1]);
  lVar6 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          *(long *)
           Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
         ) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_05b70d18;
      }
                    /* try { // try from 05b70cec to 05c70d03 has its CatchHandler @ 05b70d44 */
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_02d9a5d4(plVar3,*(long *)
                                Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<MetaSystemGestureDetector_SystemGestureState>_set_Value__
                        ,0xb);
                    /* try { // try from 05b70d04 to 05c70d33 has its CatchHandler @ 05b70c40 */
LAB_05b70d18:
  (*(code *)*puVar4)(plVar3,0,puVar4[1]);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_Dispose__;
  lVar6 = *(long *)
           Method_System_Collections_Generic_List_Enumerator<VisualTreeAsset_UxmlObjectEntry>_Dispose__
  ;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar6);
    lVar6 = *(long *)puVar2;
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
  if (lVar9 == 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar6);
      lVar6 = *(long *)puVar2;
    }
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_Dispose__
                              );
    FUN_04180bc0(lVar9,uVar10,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<Category,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_Dispose__
                 ,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar9;
    thunk_FUN_02dd37b4(plVar5,lVar9);
  }
  lVar6 = *plVar3;
  lVar11 = *(long *)
            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<CanvasTracker,_CanvasOptimizer_CanvasState>_MoveNext__
  ;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_05b70e0c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_02d9a5d4(plVar3);
LAB_05b70e0c:
  lVar6 = thunk_FUN_02d7fbac(*(undefined8 *)(lVar6 + 8),lVar11);
  (**(code **)(lVar6 + 8))(plVar3,lVar9,lVar6);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05b70e80;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)puVar1,0);
LAB_05b70e80:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return;
}


