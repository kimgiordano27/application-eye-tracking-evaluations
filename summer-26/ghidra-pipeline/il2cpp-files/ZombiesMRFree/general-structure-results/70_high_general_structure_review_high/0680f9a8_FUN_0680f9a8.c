/*
FUNCTION_NAME: FUN_0680f9a8
ENTRY_POINT: 0680f9a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_5;telemetry_or_network_hits_2
*/


undefined8 FUN_0680f9a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  
  puVar1 = PTR_DAT_06f6d618;
  if ((DAT_073a1967 & 1) == 0) {
    FUN_02fe925c(Unity_Properties_Internal_BoundsPropertyBag_TypeInfo);
    FUN_02fe925c(
                ParadoxNotion_Serialization_FullSerializer_Internal_DirectConverters_Bounds_DirectConverter_TypeInfo
                );
    FUN_02fe925c(BNG_Bow_TypeInfo);
    FUN_02fe925c(BNG_BowArm_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(UnityEngine_UIElements_Box_TypeInfo);
    FUN_02fe925c(UnityEngine_BoxCollider_TypeInfo);
    FUN_02fe925c(UnityEngine_BoxCollider2D_TypeInfo);
    DAT_073a1967 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_068f9b78(param_2,0,0);
  puVar3 = UnityEngine_BoxCollider2D_TypeInfo;
  puVar1 = UnityEngine_UIElements_Box_TypeInfo;
  uVar10 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)UnityEngine_BoxCollider2D_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar5 = FUN_04bc6e84(*(undefined8 *)puVar1);
    if ((param_1 == 0) ||
       (FUN_03bbf178(param_1,lVar5,
                     *(undefined8 *)Unity_Properties_Internal_BoundsPropertyBag_TypeInfo),
       puVar2 = BNG_BowArm_TypeInfo,
       puVar1 = 
       ParadoxNotion_Serialization_FullSerializer_Internal_DirectConverters_Bounds_DirectConverter_TypeInfo
       , lVar5 == 0)) {
LAB_0680fba0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar11 = 0;
      do {
        plVar6 = (long *)FUN_04430018(lVar5,iVar11,*(undefined8 *)puVar2);
        if (plVar6 == (long *)0x0) goto LAB_0680fba0;
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0680fb38;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)puVar1,0);
LAB_0680fb38:
        param_2 = (*(code *)*puVar7)(plVar6,param_2,puVar7[1]);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar5 + 0x18));
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_04bc6f1c(lVar5,*(undefined8 *)UnityEngine_BoxCollider_TypeInfo);
    uVar10 = param_2;
  }
  return uVar10;
}


