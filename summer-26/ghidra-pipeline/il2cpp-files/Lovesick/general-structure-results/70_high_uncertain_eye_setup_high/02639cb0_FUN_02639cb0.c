/*
FUNCTION_NAME: FUN_02639cb0
ENTRY_POINT: 02639cb0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_02639cb0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__796_105__;
  puVar2 = PTR_DAT_033f0d28;
  if ((DAT_037835f4 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_105__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f64__);
    thunk_FUN_00d48444(PTR_DAT_033f0d28);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IXRGrabTransformer>_Clear__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiBone_IgnoredBone>_get_Item__);
    thunk_FUN_00d48444(PTR_DAT_033ebee8);
    thunk_FUN_00d48444(StringLiteral_12914);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_TypeInfo
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__);
    DAT_037835f4 = 1;
  }
  uVar7 = FUN_0269e6e8(0);
  uVar11 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  plVar8 = (long *)FUN_0202015c(uVar7,uVar11,0);
  if (plVar8 == (long *)0x0) goto LAB_02639f88;
  uVar9 = FUN_0201bf00(plVar8,0);
  if ((uVar9 & 1) == 0) {
LAB_02639f74:
    uVar7 = 1;
  }
  else {
    lVar10 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if ((lVar10 == 0) ||
       (lVar10 = FUN_0201c1b4(lVar10,*(undefined8 *)
                                      Method_System_Collections_Generic_List<IXRGrabTransformer>_Clear__
                              ,0), lVar10 == 0)) {
LAB_02639f88:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_0201bd24(lVar10,0);
    iVar4 = FUN_0176ee4c(uVar7,0);
    lVar10 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if ((lVar10 == 0) ||
       (lVar10 = FUN_0201c1b4(lVar10,*(undefined8 *)PTR_DAT_033ebee8,0), lVar10 == 0))
    goto LAB_02639f88;
    uVar7 = FUN_0201bd24(lVar10,0);
    iVar5 = FUN_0176ee4c(uVar7,0);
    lVar10 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if ((lVar10 == 0) ||
       (lVar10 = FUN_0201c1b4(lVar10,*(undefined8 *)
                                      System_Collections_Generic_Dictionary<MRUKRoom,_DestructibleGlobalMesh>_TypeInfo
                              ,0), lVar10 == 0)) goto LAB_02639f88;
    uVar7 = FUN_0201bd24(lVar10,0);
    iVar6 = FUN_0176ee4c(uVar7,0);
    lVar10 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    if ((lVar10 == 0) ||
       (lVar10 = FUN_0201c1b4(lVar10,*(undefined8 *)
                                      Method_UnityEngine_UIElements_UIR_ShaderInfoStorage<Color>__ctor__
                              ,0), puVar2 = StringLiteral_302, lVar10 == 0)) goto LAB_02639f88;
    uVar7 = FUN_0201bd24(lVar10,0);
    if (iVar4 == 0x7e5) {
      if (2 < iVar5) {
        if (iVar5 != 3) {
          return 1;
        }
        if (3 < iVar6) {
          return 1;
        }
      }
      iVar4 = *(int *)(*(long *)puVar2 + 0xe0);
      puVar1 = (undefined8 *)StringLiteral_12914;
    }
    else if (((iVar6 < 0xc) && (iVar4 == 0x7e6)) && (iVar5 == 1)) {
      iVar4 = *(int *)(*(long *)puVar2 + 0xe0);
      puVar1 = (undefined8 *)Method_System_Collections_Generic_List<ObiBone_IgnoredBone>_get_Item__;
    }
    else {
      if (iVar4 != 0x7e6) {
        return 1;
      }
      if (iVar5 != 2) {
        return 1;
      }
      if (iVar6 != 0) {
        return 1;
      }
      uVar9 = thunk_FUN_015fe514(uVar7,*(undefined8 *)
                                        Method_Sirenix_Serialization_ProperBitConverter_GetBytes__,0
                                );
      if ((uVar9 & 1) == 0) goto LAB_02639f74;
      iVar4 = *(int *)(*(long *)puVar2 + 0xe0);
      puVar1 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f64__;
    }
    if (iVar4 == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02661754(*puVar1,0);
    uVar7 = 0;
  }
  return uVar7;
}


