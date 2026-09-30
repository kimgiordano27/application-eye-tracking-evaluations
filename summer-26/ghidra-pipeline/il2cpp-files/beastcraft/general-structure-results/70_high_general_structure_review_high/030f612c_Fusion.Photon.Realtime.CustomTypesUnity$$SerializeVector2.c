/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 030f612c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Fusion_Photon_Realtime_CustomTypesUnity__SerializeVector2(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x27;
  ulong unaff_x28;
  long unaff_x29;
  
  puVar1 = PTR_DAT_06a37260;
  if (((unaff_x28 & 1) == 0) && (1 < *(int *)(unaff_x29 + 0x18))) {
    uVar5 = 1;
    do {
      lVar3 = *unaff_x27;
      if (lVar3 == 0) {
LAB_030f56f8:
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_030f61ec:
                    /* WARNING: Subroutine does not return */
        FUN_02e3cccc();
      }
      lVar3 = *(long *)(lVar3 + uVar5 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_030f56f8;
      uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar6 = 0;
      do {
        if (uVar4 <= uVar6) goto LAB_030f61ec;
        uVar2 = *(undefined4 *)(lVar3 + 0x20 + uVar6 * 4);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
        }
        uVar2 = FUN_030f54b8(uVar2);
        uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
        if (uVar4 <= uVar6) goto LAB_030f61ec;
        *(undefined4 *)(lVar3 + 0x20 + uVar6 * 4) = uVar2;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 4);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(unaff_x29 + 0x18));
    param_1 = *unaff_x27;
  }
  return param_1;
}


