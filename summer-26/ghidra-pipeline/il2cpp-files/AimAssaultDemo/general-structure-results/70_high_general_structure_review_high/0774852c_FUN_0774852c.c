/*
FUNCTION_NAME: FUN_0774852c
ENTRY_POINT: 0774852c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0774852c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_08271a95 & 1) == 0) {
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<int,_NetworkAnimator_TransitionStateinfo>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<int,_NetworkAnimator_TransitionStateinfo>_get_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_get_Values__
                );
    DAT_08271a95 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (DAT_08271b01 == '\0') {
    FUN_0373b518(
                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
                );
    DAT_08271b01 = '\x01';
  }
  *(undefined1 *)
   (*(long *)(*(long *)
               Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_sessionRelativeData__
             + 0xb8) + 8) = 0;
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<int,_NetworkAnimator_TransitionStateinfo>_ContainsKey__
  ;
  puVar5 = 
  Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_Add__
  ;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_049cf910(&local_98,*(long *)(param_1 + 0x18),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>_get_Values__
                );
    puVar7 = 
    Method_System_Collections_Generic_Dictionary<int,_PlayableSystems_PlayableSystemDelegate>__ctor__
    ;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar8 = FUN_05d64e98(&local_80,*(undefined8 *)puVar5), lVar14 = local_70,
          (uVar8 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (DAT_08271b02 == '\0') {
        FUN_0373b518(puVar7);
        DAT_08271b02 = '\x01';
      }
      uVar8 = *(ulong *)(lVar14 + 0x18);
      if (uVar8 == 0) {
        thunk_FUN_037a15ac(PTR_DAT_07d8e248);
        uVar11 = thunk_FUN_037788cc();
        uVar12 = thunk_FUN_037a15ac(PTR_DAT_07d8e250);
        FUN_06242c7c(uVar11,uVar12,0);
        uVar12 = thunk_FUN_037a15ac(PTR_DAT_07d8e258);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar11,uVar12);
      }
      if ((uVar8 & 1) == 0) {
        plVar9 = (long *)FUN_0628e730(uVar8,0);
        plVar9 = (long *)*plVar9;
      }
      else {
        plVar9 = (long *)thunk_FUN_0373d01c(uVar8,0);
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar13 = *(long *)puVar7;
      bVar4 = *(byte *)(lVar13 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar4) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar4 * 8 + -8) != lVar13)) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54();
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_07878ca4(param_2,plVar9[3],*(undefined8 *)(lVar14 + 0x10),0);
      if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar13 = *(long *)(*(long *)(lVar14 + 0x10) + 0x4b8);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(long *)(lVar13 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_077429ec();
      plVar9 = *(long **)(param_2 + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar13 = *plVar9;
      uVar11 = *(undefined8 *)(lVar14 + 0x30);
      uVar2 = *(undefined8 *)(lVar14 + 0x38);
      uVar12 = *(undefined8 *)(lVar14 + 0x20);
      uVar3 = *(undefined8 *)(lVar14 + 0x28);
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 2) * 0x10 + 0x138);
            goto LAB_0774874c;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar6,2);
LAB_0774874c:
      (*(code *)*puVar10)(plVar9,uVar11,uVar2,uVar12,uVar3,puVar10[1]);
      if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      UnityEngine_UIElements_DynamicAtlasSettings__set_minAtlasSize
                (*(long *)(lVar14 + 0x10),param_2);
      FUN_07878e50(param_2,0);
      FUN_07748b24(lVar14);
    }
    FUN_05d64e94(&local_80,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_MB3_MeshCombinerSingle_MeshChannelsNativeArray>__ctor__
                );
    lVar14 = *(long *)(param_1 + 0x18);
    if (lVar14 != 0) {
      iVar1 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_062658d0(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
      }
      FUN_061622a0(param_1 + 0x10,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


