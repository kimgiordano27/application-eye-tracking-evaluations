/*
FUNCTION_NAME: System.Single$$ToString
ENTRY_POINT: 0347d0e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 164
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0347d4a0) */

void System_Single__ToString(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
                    /* catch() { ... } // from try @ 0347d0cc with catch @ 0347d0e8 */
  if ((DAT_04832a64 & 1) == 0) {
                    /* try { // try from 0347d104 to 0357d117 has its CatchHandler @ 0347d410 */
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToList<BezierKnot>__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Component_GetComponents<BaseRaycaster>__);
                    /* try { // try from 0347d120 to 0357d123 has its CatchHandler @ 0347d438 */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 0347d138 to 0357d13b has its CatchHandler @ 0347d40c */
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
                    /* try { // try from 0347d140 to 0357d15f has its CatchHandler @ 0347d420 */
    thunk_FUN_01efb3a4(Method_System_Net_Sockets_Socket_BeginConnect__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_get_ReflectedType__);
    thunk_FUN_01efb3a4(Method_System_Reflection_SignatureType_get_TypeHandle__);
    thunk_FUN_01efb3a4(Method_Mono_Globalization_Unicode_SimpleCollator_GetTailContraction__);
                    /* try { // try from 0347d170 to 0357d177 has its CatchHandler @ 0347d400 */
    thunk_FUN_01efb3a4(Method_Mono_Globalization_Unicode_SimpleCollator_IndexOf__);
    thunk_FUN_01efb3a4(Method_Meta_Voice_Samples_TTSVoices_SimpleDropdownList_OnToggleClick__);
    thunk_FUN_01efb3a4(Method_System_Single_CompareTo__);
    thunk_FUN_01efb3a4(Method_Mono_Globalization_Unicode_SimpleCollator_LastIndexOf__);
    DAT_04832a64 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 == 0) {
    if (param_2 == 0) goto LAB_0347d498;
    FUN_03477a2c(param_2,*(undefined8 *)
                          Method_Mono_Globalization_Unicode_SimpleCollator_GetTailContraction__,
                 *(undefined8 *)(param_1 + 0x20));
    FUN_03477a2c(param_2,*(undefined8 *)Method_Mono_Globalization_Unicode_SimpleCollator_IndexOf__,
                 *(undefined8 *)(param_1 + 0x10));
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Reflection_SignatureType_get_TypeHandle__,
                 *(undefined8 *)(param_1 + 0x40));
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Reflection_SignatureType_get_ReflectedType__,
                 *(undefined8 *)(param_1 + 0x18));
    FUN_03477a2c(param_2,*(undefined8 *)Method_System_Single_CompareTo__,
                 *(undefined8 *)(param_1 + 0x30));
    lVar8 = *(long *)(param_1 + 0x50);
    puVar5 = (undefined8 *)Method_Meta_Voice_Samples_TTSVoices_SimpleDropdownList_OnToggleClick__;
  }
  else {
    puVar5 = (undefined8 *)Method_System_Net_Sockets_Socket_BeginConnect__;
    if (param_2 == 0) {
LAB_0347d498:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  }
  puVar1 = Method_Mono_Globalization_Unicode_SimpleCollator_LastIndexOf__;
  FUN_03477a2c(param_2,*puVar5,lVar8);
  FUN_03477a2c(param_2,*(undefined8 *)puVar1,*(undefined8 *)(param_1 + 0x68));
  plVar12 = *(long **)(param_1 + 0x80);
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
        goto LAB_0347d2cc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar12,*(long *)Method_UnityEngine_Component_GetComponents<BaseRaycaster>__
                        ,9);
LAB_0347d2cc:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
  puVar4 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar9 = *plVar12;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto System_Single__Parse;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
System_Single__Parse:
    uVar10 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      plVar12 = (long *)thunk_FUN_01f116d0(plVar12,*(undefined8 *)puVar1);
      if (plVar12 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar12;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_0347d444;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar12;
    lVar8 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0347d3ac;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,1);
LAB_0347d3ac:
    plVar6 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar7 = (long *)thunk_FUN_01f11920();
    plVar6 = (long *)*plVar7;
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar6,*(long *)puVar3,plVar7[1]);
    }
    FUN_03477a2c(param_2);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0347d460;
    }
  }
LAB_0347d444:
  puVar5 = (undefined8 *)FUN_01ecb238(plVar12,lVar8,0);
LAB_0347d460:
  (*(code *)*puVar5)(plVar12,puVar5[1]);
  return;
}


