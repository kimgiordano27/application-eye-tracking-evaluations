/*
FUNCTION_NAME: FUN_0584f9d4
ENTRY_POINT: 0584f9d4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0584fbdc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_0584f9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  char local_54 [4];
  
  puVar2 = 
  Method_System_Collections_Generic_EqualityComparer<RichTextTagParser_TagValueType>_get_Default__;
  puVar1 = Method_UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_Get__;
  if ((DAT_06bc0fc7 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Pool_CollectionPool<List<Vector4>,_Vector4>_Get__);
    FUN_02f08768(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000359_PostfixBurstDelegate>_get_Value__
                );
    FUN_02f08768(
                Method_System_Collections_Generic_EqualityComparer<RichTextTagParser_TagValueType>_get_Default__
                );
    DAT_06bc0fc7 = 1;
  }
  local_54[0] = '\0';
  uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0582b028(uVar3,param_2,param_5,param_3,param_6,param_4,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar1;
  }
  local_54[0] = '\0';
  uVar5 = **(undefined8 **)(lVar4 + 0xb8);
  FUN_05136fe0(uVar5,local_54,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar4 = *(long *)puVar1;
  }
  plVar6 = (long *)**(long **)(lVar4 + 0xb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x308))(plVar6,uVar3,*(undefined8 *)(*plVar6 + 0x310));
  lVar4 = *(long *)
           Method_Unity_Burst_FunctionPointer<BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000359_PostfixBurstDelegate>_get_Value__
  ;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)thunk_FUN_02f45270(lVar4);
    FUN_0584ea8c(plVar6,param_2,param_3,param_4,param_5,param_6);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar1;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    plVar7 = (long *)**(long **)(lVar4 + 0xb8);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar7 + 0x318))
              (plVar7,*(undefined8 *)(plVar6[3] + 0x28),plVar6,*(undefined8 *)(*plVar7 + 800));
  }
  else if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
          (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48(plVar6);
  }
  if (local_54[0] != '\0') {
    thunk_FUN_02f16354(uVar5,0);
  }
  return plVar6;
}


