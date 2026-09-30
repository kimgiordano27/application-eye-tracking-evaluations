/*
FUNCTION_NAME: FUN_087713b8
ENTRY_POINT: 087713b8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_possible_biometrics_hits_3
*/


void FUN_087713b8(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_0943cb84 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69670);
    FUN_03c8f898(
                System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Generic_Dictionary<OVRFaceExpressions_FaceExpression,_BlendshapeModifier_FaceExpressionModifier>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_AvatarMaskBodyPart>_TypeInfo
                );
    DAT_0943cb84 = 1;
  }
  puVar5 = System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_AvatarMaskBodyPart>_TypeInfo;
  puVar4 = 
  System_Collections_Generic_Dictionary<OVRPassthroughLayer_ColorMapEditorType,_OVRPlugin_InsightPassthroughColorMapType>_TypeInfo
  ;
  puVar3 = 
  System_Collections_Generic_Dictionary<OVRAnchor_DeferredKey,_List<OVRAnchor_DeferredValue>>_TypeInfo
  ;
  puVar2 = 
  System_Collections_Generic_Dictionary<NetworkSpawnManager_InstantiateAndSpawnErrorTypes,_string>_TypeInfo
  ;
  puVar1 = PTR_DAT_08e69670;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_05213710(&local_98,*(long *)(param_1 + 0x18),
               *(undefined8 *)
                System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_Tuple<OVRSkeleton_BoneId,_OVRSkeleton_BoneId>>_TypeInfo
              );
  uStack_78 = uStack_90;
  local_80 = local_98;
  local_70 = local_88;
  do {
    do {
      uVar9 = FUN_049dc4d0(&local_80,*(undefined8 *)puVar3);
      plVar6 = local_70;
      if ((uVar9 & 1) == 0) goto LAB_087715f4;
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar12 = *local_70;
      lVar11 = *(long *)puVar4;
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar9 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_08771514;
          }
          uVar9 = uVar9 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_03cf1348(local_70,lVar11,0);
LAB_08771514:
      uVar9 = (*(code *)*puVar10)(plVar6,param_2,puVar10[1]);
    } while ((uVar9 & 1) == 0);
    lVar12 = *plVar6;
    lVar11 = *(long *)puVar4;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar11) {
          puVar10 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_08771578;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03cf1348(plVar6,lVar11,1);
LAB_08771578:
    (*(code *)*puVar10)(plVar6,param_2,param_3,puVar10[1]);
    if ((param_4 & 1) == 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (((*(uint *)(param_2 + 0x40) & 0x21) != 0x20) || (*(long *)(param_2 + 0x70) == 0))
      goto LAB_087715c0;
      iVar8 = FUN_0861565c(*(long *)(param_2 + 0x70),0);
      bVar7 = iVar8 != 0xc;
    }
    else {
LAB_087715c0:
      bVar7 = true;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_085a4e68(bVar7,*(undefined8 *)puVar5,0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  } while ((*(byte *)(param_2 + 0x40) & 0x41) == 0);
LAB_087715f4:
  FUN_049dc4cc(&local_80,*(undefined8 *)puVar2);
  return;
}


