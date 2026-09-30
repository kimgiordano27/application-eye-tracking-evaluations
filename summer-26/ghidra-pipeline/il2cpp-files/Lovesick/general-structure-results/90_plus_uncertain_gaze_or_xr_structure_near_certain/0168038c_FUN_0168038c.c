/*
FUNCTION_NAME: FUN_0168038c
ENTRY_POINT: 0168038c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_14;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_0168038c(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long *param_6,long param_7)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 local_68;
  
                    /* try { // try from 0168038c to 01780393 has its CatchHandler @ 01680418 */
                    /* try { // try from 01680394 to 017803bf has its CatchHandler @ 016801b8 */
                    /* try { // try from 016803c0 to 017803c3 has its CatchHandler @ 01680414 */
                    /* try { // try from 016803c4 to 01780443 has its CatchHandler @ 016801b8 */
  if ((DAT_03778481 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRLoader>_Insert__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TriangulationPoint>__);
    thunk_FUN_00d48444(StringLiteral_4488);
    thunk_FUN_00d48444(StringLiteral_6724);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<EdgeLookup,_Face>__ctor__);
    thunk_FUN_00d48444(Method_UIToggle_OffPressed__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_MoveNext__);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    DAT_03778481 = 1;
  }
  local_68 = 0;
  if (param_2 == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar15 = thunk_FUN_00d48444(
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                               );
    FUN_016ec5b8(uVar5,uVar15,0);
    uVar15 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,uVar15);
  }
  if (param_3 < 1) {
    uVar5 = thunk_FUN_00d48444(StringLiteral_1856);
    uVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
    thunk_FUN_00d48444(StringLiteral_8570);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar15 = thunk_FUN_00d48444(
                               Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_set_LastUpdatedFrameId__
                               );
    FUN_016efd4c(uVar8,uVar15,uVar5,0);
    goto LAB_01680930;
  }
  uVar4 = FUN_0169ad7c(param_6,0,0);
  if ((uVar4 & 1) == 0) {
LAB_016804c0:
    if (param_1[8] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = thunk_FUN_00d93c64(param_2,0);
      plVar14 = (long *)param_1[8];
      if (plVar14 == (long *)0x0) goto LAB_01680830;
      lVar11 = *plVar14;
      lVar10 = param_1[9];
      lVar9 = param_1[10];
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)StringLiteral_6724) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto System_OperationCanceledException___ctor;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_00d59724(plVar14,*(long *)StringLiteral_6724,0);
System_OperationCanceledException___ctor:
      uVar5 = (*(code *)*puVar6)(plVar14,uVar5,lVar10,lVar9,&local_68,puVar6[1]);
    }
    puVar7 = StringLiteral_4488;
    lVar10 = thunk_FUN_00d6225c(param_2,*(undefined8 *)StringLiteral_4488);
    if (lVar10 != 0) {
      uVar15 = *(undefined8 *)puVar7;
      plVar14 = (long *)thunk_FUN_00d6225c(param_2,uVar15);
      lVar10 = param_2;
      if (plVar14 == (long *)0x0) goto FUN_016808ec;
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_System_Collections_Generic_List<XRLoader>_Insert__);
      if (lVar10 == 0) goto LAB_01680830;
      lVar11 = *plVar14;
      lVar9 = *(long *)puVar7;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            lVar9 = lVar11 + (long)*piVar13 * 0x10 + 0x138;
            goto LAB_016805f4;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar4 != 0);
      }
      lVar9 = FUN_00d59724(plVar14,lVar9,0);
LAB_016805f4:
      FUN_01679b94(lVar10,plVar14,*(undefined8 *)(lVar9 + 8));
      (**(code **)(*param_1 + 0x1d8))(param_1,lVar10,*(undefined8 *)(*param_1 + 0x1e0));
    }
    if ((param_7 == 0) || (lVar10 = FUN_017959a4(param_7,0), lVar10 == 0)) {
      lVar9 = 0;
    }
    else {
      uVar15 = *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
      lVar9 = thunk_FUN_00d6225c(lVar10,uVar15);
      if (lVar9 == 0) {
FUN_016808ec:
                    /* WARNING: Subroutine does not return */
        FUN_00da544c(lVar10,uVar15);
      }
    }
    puVar3 = Method_System_Linq_Enumerable_ToList<TriangulationPoint>__;
    lVar10 = FUN_0167e304(param_1,param_3);
    if (lVar10 == 0) {
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)Method_UIToggle_OffPressed__);
      if (lVar10 == 0) {
LAB_01680830:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (param_6 != (long *)0x0) {
        lVar11 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar11 + 300);
        if ((*(byte *)(*param_6 + 300) < bVar2) ||
           (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != lVar11))
        goto System_OverflowException___ctor;
      }
      FUN_01680948(lVar10,param_2,param_3,param_4,uVar5,param_5,param_6,lVar9);
      FUN_0167e434(param_1,lVar10);
      if ((*(byte *)(lVar10 + 0x50) & 7) != 0) {
        plVar14 = (long *)FUN_0167e290(param_1);
        if (plVar14 == (long *)0x0) goto LAB_01680830;
        (**(code **)(*plVar14 + 0x178))(plVar14,lVar10,*(undefined8 *)(*plVar14 + 0x180));
      }
      lVar9 = *param_1;
    }
    else {
      puVar7 = Method_OVRPlugin_<>c_<_cctor>b__796_72__;
      if (*(long *)(lVar10 + 0x10) != 0) goto LAB_016808fc;
      if (param_6 != (long *)0x0) {
        lVar11 = *(long *)puVar3;
        bVar2 = *(byte *)(lVar11 + 300);
        if ((*(byte *)(*param_6 + 300) < bVar2) ||
           (*(long *)(*(long *)(*param_6 + 200) + (ulong)bVar2 * 8 + -8) != lVar11)) {
System_OverflowException___ctor:
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(param_6);
        }
      }
      FUN_01680b34(lVar10,param_2,param_4,uVar5,param_5,param_6,lVar9,param_1);
      if (0 < *(int *)(lVar10 + 0x20)) {
        FUN_0167f8d0(param_1,lVar10,0);
      }
      uVar1 = *(uint *)(lVar10 + 0x50);
      if ((uVar1 & 7) != 0) {
        plVar14 = (long *)FUN_0167e290(param_1);
        if (plVar14 == (long *)0x0) goto LAB_01680830;
        (**(code **)(*plVar14 + 0x178))(plVar14,lVar10,*(undefined8 *)(*plVar14 + 0x180));
        uVar1 = *(uint *)(lVar10 + 0x50);
      }
      if (((uVar1 & 1) == 0) && ((uVar1 & 6) == 0 || (uVar1 & 0x4000) != 0)) {
        FUN_0167f554(param_1,lVar10);
        *(undefined8 *)(lVar10 + 0x40) = 0;
      }
      lVar9 = *param_1;
      if (*(int *)(lVar10 + 0x24) + *(int *)(lVar10 + 0x20) < 1) {
        pcVar12 = *(code **)(lVar9 + 0x1f8);
        uVar5 = *(undefined8 *)(lVar9 + 0x200);
        goto LAB_01680804;
      }
    }
    pcVar12 = *(code **)(lVar9 + 0x1e8);
    uVar5 = *(undefined8 *)(lVar9 + 0x1f0);
LAB_01680804:
    (*pcVar12)(param_1,param_2,uVar5);
    return;
  }
  puVar7 = PTR_DAT_033f7150;
  if (param_6 != (long *)0x0) {
    lVar10 = *param_6;
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_MoveNext__ + 300)
    ;
    if (((bVar2 <= *(byte *)(lVar10 + 300)) &&
        (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar2 * 8 + -8) ==
         *(long *)Method_System_Collections_Generic_List_Enumerator<MRUKRoom>_MoveNext__)) ||
       (lVar10 == *(long *)
                   System_Collections_Generic_List<ProbeVolumeSceneData_SerializablePVBakeSettings>_TypeInfo
       )) goto LAB_016804c0;
  }
LAB_016808fc:
  uVar5 = thunk_FUN_00d48444(puVar7);
  uVar5 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar5,0);
  thunk_FUN_00d48444(
                    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_CalculateRotationParams_00000D70_PostfixBurstDelegate_var
                    );
  uVar8 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_01679968(uVar8,uVar5);
LAB_01680930:
  uVar5 = thunk_FUN_00d48444(PTR_DAT_033effa8);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar8,uVar5);
}


