/*
FUNCTION_NAME: FUN_01edae38
ENTRY_POINT: 01edae38
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long FUN_01edae38(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_03780050 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__);
    thunk_FUN_00d48444(Method_SceneSelect_<>c_<Hide>b__32_1__);
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    DAT_03780050 = 1;
  }
  puVar1 = Method_SceneSelect_<>c_<Hide>b__32_1__;
  local_30 = 0;
  local_28 = 0;
  if (param_1 == 0) {
LAB_01edaf84:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = FUN_01604318(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  FUN_01f68694(uVar2,&local_28,&local_30,0);
  uVar5 = local_28;
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_01edaf2c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_00d59724(param_2,*(long *)
                                   Method_OVRPassthroughLayer_StylesHandler_GetStyleHandler__,1);
LAB_01edaf2c:
    lVar6 = (*(code *)*puVar3)(param_2,uVar5,puVar3[1]);
    uVar5 = local_30;
    if (lVar6 != 0) {
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
      if (lVar4 != 0) {
                    /* try { // try from 01edaf64 to 01fdb03b has its CatchHandler @ 01edaf64
                       catch() { ... } // from try @ 01edaf64 with catch @ 01edaf64
                       catch() { ... } // from try @ 01edb058 with catch @ 01edaf64
                       catch() { ... } // from try @ 01edb108 with catch @ 01edaf64
                       catch() { ... } // from try @ 01edb178 with catch @ 01edaf64 */
        FUN_01f75d58(lVar4,uVar5,lVar6,0);
        return lVar4;
      }
      goto LAB_01edaf84;
    }
  }
  uVar5 = thunk_FUN_00d48444(StringLiteral_3033);
  uVar5 = FUN_00da4fb8(uVar5,2);
  FUN_00ac2be8();
  FUN_00acb0b4(uVar5,uVar2);
  FUN_00adb25c(uVar5,0,uVar2);
  uVar2 = local_28;
  FUN_00ac2be8(uVar5);
  FUN_00acb0b4(uVar5,uVar2);
  FUN_00adb25c(uVar5,1,uVar2);
  uVar2 = thunk_FUN_00d48444(Method_UnityEngine_Rendering_ArrayExtensions_ResizeArray<int>__);
  uVar2 = FUN_01f71d98(uVar2,uVar5,0);
  thunk_FUN_00d48444(
                    Method_Unity_XR_CoreUtils_Datums_DatumProperty<PokeThresholdData,_PokeThresholdDatum>__ctor__
                    );
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_0176e8d0(uVar5,uVar2,0);
  uVar2 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_List<OVRSemanticLabels_Classification>_GetEnumerator__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar2);
}


