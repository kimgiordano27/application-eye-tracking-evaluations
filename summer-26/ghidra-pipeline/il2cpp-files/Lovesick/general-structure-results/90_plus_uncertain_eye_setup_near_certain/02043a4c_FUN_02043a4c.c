/*
FUNCTION_NAME: FUN_02043a4c
ENTRY_POINT: 02043a4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_02043a4c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  uint local_34;
  
  if ((DAT_03780ac0 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_10172);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddh_s16__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<ObiContactGrabber_GrabbedParticle>_Clear__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_46__);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(StringLiteral_8652);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__);
    thunk_FUN_00d48444(PTR_DAT_033eb718);
    thunk_FUN_00d48444(Method_System_Net_CookieContainer_CookieCutter__);
    thunk_FUN_00d48444(StringLiteral_3338);
    thunk_FUN_00d48444(System_Math_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_AddComponent<MeshCollider>__);
    DAT_03780ac0 = 1;
  }
  local_34 = 0;
  lVar11 = *(long *)(param_1 + 0x18);
  if (lVar11 == 0) {
LAB_02043ddc:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (((*(int *)(lVar11 + 0x18) < 4) || (*(char *)(lVar11 + 0x20) != '\x03')) ||
     (*(char *)(lVar11 + 0x21) != '\x02')) {
    uVar10 = *(undefined8 *)PTR_DAT_033eb718;
  }
  else {
    uVar1 = -1 << (ulong)(*(byte *)(lVar11 + 0x22) & 0x1f) & (uint)*(byte *)(lVar11 + 0x23);
    local_34 = uVar1;
    plVar9 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                       );
    if (plVar9 == (long *)0x0) goto LAB_02043ddc;
    FUN_0160aa4c(plVar9,0);
    if (uVar1 >> 7 != 0) {
      FUN_0160c430(plVar9,*(undefined8 *)Method_UnityEngine_GameObject_AddComponent<MeshCollider>__,
                   0);
    }
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vuqaddh_s16__;
    puVar6 = PTR_DAT_033f38b8;
    puVar5 = Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__;
    if ((uVar1 >> 6 & 1) != 0) {
      iVar8 = FUN_0160b5d0(plVar9,0);
      if (0 < iVar8) {
        FUN_0160c430(plVar9,*(undefined8 *)puVar6,0);
      }
      FUN_0160c430(plVar9,*(undefined8 *)puVar4,0);
      puVar5 = Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__;
    }
    Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__ = puVar5;
    puVar4 = Method_System_Net_CookieContainer_CookieCutter__;
    if ((uVar1 >> 5 & 1) != 0) {
      iVar8 = FUN_0160b5d0(plVar9,0);
      if (0 < iVar8) {
        FUN_0160c430(plVar9,*(undefined8 *)puVar6,0);
      }
      FUN_0160c430(plVar9,*(undefined8 *)puVar5,0);
      puVar4 = Method_System_Net_CookieContainer_CookieCutter__;
    }
    Method_System_Net_CookieContainer_CookieCutter__ = puVar4;
    puVar2 = (undefined8 *)StringLiteral_3338;
    if ((uVar1 >> 4 & 1) != 0) {
      iVar8 = FUN_0160b5d0(plVar9,0);
      if (0 < iVar8) {
        FUN_0160c430(plVar9,*(undefined8 *)puVar6,0);
      }
      FUN_0160c430(plVar9,*(undefined8 *)puVar4,0);
      puVar2 = (undefined8 *)StringLiteral_3338;
    }
    puVar3 = (undefined8 *)
             Method_System_Collections_Generic_HashSet<ObiContactGrabber_GrabbedParticle>_Clear__;
    StringLiteral_3338 = (undefined *)puVar2;
    if ((uVar1 >> 3 & 1) != 0) {
      iVar8 = FUN_0160b5d0(plVar9,0);
      if (0 < iVar8) {
        FUN_0160c430(plVar9,*(undefined8 *)puVar6,0);
      }
      FUN_0160c430(plVar9,*puVar2,0);
      puVar3 = (undefined8 *)
               Method_System_Collections_Generic_HashSet<ObiContactGrabber_GrabbedParticle>_Clear__;
    }
    Method_System_Collections_Generic_HashSet<ObiContactGrabber_GrabbedParticle>_Clear__ =
         (undefined *)puVar3;
    puVar2 = (undefined8 *)StringLiteral_10172;
    if ((uVar1 >> 2 & 1) != 0) {
      iVar8 = FUN_0160b5d0(plVar9,0);
      if (0 < iVar8) {
        FUN_0160c430(plVar9,*(undefined8 *)puVar6,0);
      }
      FUN_0160c430(plVar9,*puVar3,0);
      puVar2 = (undefined8 *)StringLiteral_10172;
    }
    StringLiteral_10172 = (undefined *)puVar2;
    if ((uVar1 >> 1 & 1) != 0) {
      iVar8 = FUN_0160b5d0(plVar9,0);
      if (0 < iVar8) {
        FUN_0160c430(plVar9,*(undefined8 *)puVar6,0);
      }
      FUN_0160c430(plVar9,*puVar2,0);
    }
    puVar7 = StringLiteral_8652;
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_46__;
    puVar5 = System_Math_TypeInfo;
    if ((uVar1 & 1) != 0) {
      iVar8 = FUN_0160b5d0(plVar9,0);
      if (0 < iVar8) {
        FUN_0160c430(plVar9,*(undefined8 *)puVar6,0);
      }
      FUN_0160c430(plVar9,*(undefined8 *)puVar7,0);
    }
    uVar10 = FUN_0176ebb0(&local_34,*(undefined8 *)puVar4,0);
    FUN_0160d178(plVar9,*(undefined8 *)puVar5,uVar10,0);
    uVar10 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  }
  return uVar10;
}


