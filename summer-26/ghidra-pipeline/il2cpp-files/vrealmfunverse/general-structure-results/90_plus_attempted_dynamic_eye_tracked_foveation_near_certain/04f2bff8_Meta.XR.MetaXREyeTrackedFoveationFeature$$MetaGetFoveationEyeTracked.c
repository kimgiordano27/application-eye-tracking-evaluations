/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$MetaGetFoveationEyeTracked
ENTRY_POINT: 04f2bff8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 141
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_7;validity_or_gating_hits_2;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature__MetaGetFoveationEyeTracked
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  uint in_w11;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x22;
  
  if (((uint)in_x10 <= in_w11) && (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) == param_1))
  {
    thunk_FUN_05c92238(param_2,0);
    FUN_04dc1734(0);
    unaff_x20 = FUN_04c0a5c4();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04f2c08c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02b7654c();
LAB_04f2c08c:
  lVar5 = (*(code *)*puVar2)();
  if ((lVar5 != 0) &&
     (plVar3 = (long *)thunk_FUN_02b4c898(lVar5,0),
     puVar1 = System_Collections_Generic_Dictionary<int,_DynamicResolutionHandler>_TypeInfo,
     plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    uVar4 = FUN_04c00984(*(undefined8 *)puVar1,uVar4,0);
    FUN_04bffdac(unaff_x20,uVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


