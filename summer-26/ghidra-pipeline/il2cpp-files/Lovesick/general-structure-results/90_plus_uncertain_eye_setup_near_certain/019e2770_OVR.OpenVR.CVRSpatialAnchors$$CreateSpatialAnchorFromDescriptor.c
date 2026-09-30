/*
FUNCTION_NAME: OVR.OpenVR.CVRSpatialAnchors$$CreateSpatialAnchorFromDescriptor
ENTRY_POINT: 019e2770
PROGRAM: Lovesick-libil2cpp.so
SCORE: 133
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_CVRSpatialAnchors__CreateSpatialAnchorFromDescriptor(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  char *pcVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long in_stack_00000008;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  if ((DAT_0377a7d1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputManager_<ListControlLayouts>d__75_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_System_Array_InternalArray__ICollection_Add<__Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(StringLiteral_10282);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_3926);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass15_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__
                      );
    thunk_FUN_00d48444(Method_OVREnumerable<OVRAnchor>_get_Count__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<char>__ctor__);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    DAT_0377a7d1 = 1;
  }
  in_stack_00000008 = 0;
  uStack0000000000000018 = 0;
  if (*(char *)(param_1 + 0x70) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar10 = FUN_00bfc1b4(*(long *)(param_1 + 0x68),
                          *(undefined8 *)
                           Method_UnityEngine_InputSystem_InputManager_<ListControlLayouts>d__75_System_Collections_IEnumerator_Reset__
                         );
    puVar8 = Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass15_0_<DOColor>b__0__;
    puVar7 = Method_OVREnumerable<OVRAnchor>_get_Count__;
    if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
      uVar11 = FUN_019d9ebc(*(long *)(param_1 + 0x48),
                            *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x40),uVar10,
                            &stack0x00000008,0);
      if ((uVar11 & 1) == 0) {
        plVar16 = *(long **)(param_1 + 0x40);
        uStack000000000000001c = uVar10;
        uVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar8,(long)&stack0x00000018 + 4);
        uVar19 = FUN_015f6780(*(undefined8 *)puVar7,uVar19,0);
        if (plVar16 == (long *)0x0) goto LAB_019e2c14;
        (**(code **)(*plVar16 + 0x558))(plVar16,uVar19,*(undefined8 *)(*plVar16 + 0x560));
        bVar9 = 0;
      }
      else {
        if ((*(long *)(param_1 + 0x50) == 0) || (*(long *)(param_1 + 0x48) == 0)) goto LAB_019e2c14;
        FUN_019d9efc(*(long *)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x40),
                     uVar10,0);
        if ((*(long *)(param_1 + 0x50) == 0) || (lVar21 = *(long *)(param_1 + 0x68), lVar21 == 0))
        goto LAB_019e2c14;
        lVar18 = *(long *)(param_1 + 0x48);
        uVar19 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x40);
        lVar12 = **(long **)(*(long *)(*(long *)
                                        Method_System_Array_InternalArray__ICollection_Add<__Il2CppFullySharedGenericType>__
                                      + 0x20) + 0xc0);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        puVar13 = (undefined4 *)thunk_FUN_00d32ed4(lVar21,*(undefined8 *)(lVar12 + 0x80));
        lVar21 = *(long *)(param_1 + 0x68);
        if (lVar21 == 0) goto LAB_019e2c14;
        uVar4 = *puVar13;
        lVar12 = **(long **)(*(long *)(*(long *)StringLiteral_10282 + 0x20) + 0xc0);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          lVar12 = FUN_00d5941c();
        }
        puVar14 = (undefined8 *)thunk_FUN_00d32ed4(lVar21,*(long *)(lVar12 + 0x80) + 0x40);
        puVar5 = Method_System_Collections_Generic_Dictionary<Material,_List<GameObject>>_get_Item__
        ;
        if (lVar18 == 0) goto LAB_019e2c14;
        bVar9 = FUN_019d9de0(lVar18,uVar19,uVar10,uVar4,*puVar14,0);
        lVar21 = *(long *)(*(long *)puVar5 + 0x20);
        if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
          lVar21 = FUN_00d5941c(lVar21);
        }
        if ((*(byte *)(*(long *)(*(long *)(lVar21 + 0xc0) + 8) + 0x132) & 1) == 0) {
          FUN_00d5941c();
        }
        puVar5 = PTR_DAT_033ea8a0;
        pcVar15 = (char *)thunk_FUN_00d32ed4();
        puVar6 = 
        Method_System_Collections_Generic_Dictionary_Enumerator<MRUKAnchor,_GameObject>_Dispose__;
        if (*pcVar15 == '\0') {
          lVar21 = *(long *)Method_Sirenix_Serialization_Serializer<char>__ctor__;
        }
        else {
          FUN_01347408();
          uStack0000000000000018 = uStack000000000000001c;
          lVar21 = FUN_017841b4(&stack0x00000018,*(undefined8 *)puVar6,0);
        }
        plVar20 = *(long **)(param_1 + 0x40);
        plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,5);
        uStack000000000000001c = uVar10;
        uVar19 = thunk_FUN_00d61fa0(*(undefined8 *)puVar8,(long)&stack0x00000018 + 4);
        lVar12 = FUN_015f6780(*(undefined8 *)puVar7,uVar19,0);
        if (plVar16 == (long *)0x0) goto LAB_019e2c14;
        if ((lVar12 != 0) &&
           (lVar18 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40)), lVar18 == 0)) {
LAB_019e2c1c:
          uVar19 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar19,0);
        }
        lVar18 = in_stack_00000008;
        uVar17 = *(uint *)(plVar16 + 3);
        if (uVar17 == 0) {
LAB_019e2c18:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar16[4] = lVar12;
        if (in_stack_00000008 != 0) {
          lVar12 = thunk_FUN_00d6225c(in_stack_00000008,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar12 == 0) goto LAB_019e2c1c;
          uVar17 = *(uint *)(plVar16 + 3);
        }
        puVar7 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
        if (uVar17 < 2) goto LAB_019e2c18;
        plVar16[5] = lVar18;
        lVar12 = *(long *)puVar7;
        if (lVar12 != 0) {
          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar12 == 0) goto LAB_019e2c1c;
          uVar17 = *(uint *)(plVar16 + 3);
        }
        if (uVar17 < 3) goto LAB_019e2c18;
        plVar16[6] = *(long *)puVar7;
        if (lVar21 != 0) {
          lVar12 = thunk_FUN_00d6225c(lVar21,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar12 == 0) goto LAB_019e2c1c;
          uVar17 = *(uint *)(plVar16 + 3);
        }
        puVar7 = StringLiteral_12935;
        if (uVar17 < 4) goto LAB_019e2c18;
        plVar16[7] = lVar21;
        lVar21 = *(long *)puVar7;
        if (lVar21 != 0) {
          lVar21 = thunk_FUN_00d6225c(lVar21,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar21 == 0) goto LAB_019e2c1c;
          uVar17 = *(uint *)(plVar16 + 3);
        }
        if (uVar17 < 5) goto LAB_019e2c18;
        plVar16[8] = *(long *)puVar7;
        uVar19 = FUN_01600844(plVar16,0);
        if (plVar20 == (long *)0x0) goto LAB_019e2c14;
        (**(code **)(*plVar20 + 0x558))(plVar20,uVar19,*(undefined8 *)(*plVar20 + 0x560));
      }
      bVar9 = bVar9 & 1;
      if (bVar9 != *(byte *)(param_1 + 0x60)) {
        if (bVar9 == 0) {
          puVar13 = (undefined4 *)(param_1 + 0x20);
          puVar1 = (undefined4 *)(param_1 + 0x24);
          puVar2 = (undefined4 *)(param_1 + 0x28);
          puVar3 = (undefined4 *)(param_1 + 0x2c);
        }
        else {
          puVar13 = (undefined4 *)(param_1 + 0x30);
          puVar1 = (undefined4 *)(param_1 + 0x34);
          puVar2 = (undefined4 *)(param_1 + 0x38);
          puVar3 = (undefined4 *)(param_1 + 0x3c);
        }
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_019e2c14;
        FUN_0267d974(*puVar13,*puVar1,*puVar2,*puVar3,*(long *)(param_1 + 0x58),0);
        *(byte *)(param_1 + 0x60) = bVar9;
      }
      return;
    }
  }
LAB_019e2c14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


