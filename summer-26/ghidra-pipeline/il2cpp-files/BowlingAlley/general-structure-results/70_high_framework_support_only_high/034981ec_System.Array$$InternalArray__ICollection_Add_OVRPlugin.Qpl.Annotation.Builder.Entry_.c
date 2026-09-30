/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 034981ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long in_x9;
  long unaff_x19;
  uint unaff_w20;
  ulong uVar6;
  long unaff_x22;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float fVar14;
  
  do {
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar3 = FUN_034ca2ec(*(long *)(param_1 + 0x48),*(undefined4 *)(in_x9 + unaff_x22 + 0x48),0),
       lVar3 == 0)) goto LAB_03498224;
    *(float *)(lVar3 + 0x20) = unaff_s8 * *(float *)(unaff_x19 + 0x20);
    while( true ) {
      lVar3 = *(long *)(unaff_x19 + 0x48);
      unaff_w20 = unaff_w20 + 1;
      unaff_x22 = unaff_x22 + 0x30;
      if (lVar3 == 0) goto LAB_03498224;
      iVar4 = (int)*(ulong *)(lVar3 + 0x18);
      if (iVar4 <= (int)unaff_w20) {
        if (((*(int *)(unaff_x19 + 0x50) != 1) || (*(int *)(unaff_x19 + 0x40) != 0)) ||
           (uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff, iVar4 < 1)) goto LAB_03498290;
        uVar6 = 0;
        puVar7 = (undefined4 *)(lVar3 + 0x48);
        goto LAB_03498250;
      }
      unaff_s8 = (float)FUN_03497df0();
      lVar3 = *(long *)(unaff_x19 + 0x48);
      if (lVar3 == 0) goto LAB_03498224;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_034982b4;
      lVar3 = *(long *)(lVar3 + unaff_x22 + 0x40);
      if (lVar3 == 0) goto LAB_03498224;
      fVar8 = (float)FUN_06bf4868(lVar3,0);
      lVar3 = *(long *)(unaff_x19 + 0x48);
      if (lVar3 == 0) goto LAB_03498224;
      if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_034982b4;
      lVar3 = *(long *)(lVar3 + unaff_x22 + 0x38);
      if (lVar3 == 0) goto LAB_03498224;
      fVar12 = param_3;
      fVar11 = param_4;
      fVar9 = (float)FUN_06bf4868(lVar3,0);
      fVar13 = param_3 - fVar12;
      fVar14 = param_4 - fVar11;
      if (*(int *)(unaff_x19 + 0x40) == 1) break;
      param_3 = fVar12;
      param_4 = fVar11;
      if (*(int *)(unaff_x19 + 0x40) == 0) {
        if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar3 = *(long *)(unaff_x19 + 0x48), lVar3 == 0))
        goto LAB_03498224;
        if (*(uint *)(lVar3 + 0x18) <= unaff_w20) goto LAB_034982b4;
        lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
        if ((lVar1 == 0) ||
           (lVar3 = FUN_034ca2ec(lVar1,*(undefined4 *)(lVar3 + unaff_x22 + 0x48),0), lVar3 == 0))
        goto LAB_03498224;
        fVar12 = *(float *)(unaff_x19 + 0x20);
        param_3 = *(float *)(lVar3 + 0x48) + unaff_s8 * fVar13 * fVar12;
        param_4 = *(float *)(lVar3 + 0x4c) + unaff_s8 * fVar14 * fVar12;
        *(float *)(lVar3 + 0x44) = *(float *)(lVar3 + 0x44) + unaff_s8 * (fVar8 - fVar9) * fVar12;
        *(float *)(lVar3 + 0x48) = param_3;
        *(float *)(lVar3 + 0x4c) = param_4;
      }
    }
    if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar3 = *(long *)(unaff_x19 + 0x48), lVar3 == 0))
    goto LAB_03498224;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w20) break;
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
    if (lVar1 == 0) goto LAB_03498224;
    lVar3 = FUN_034ca2ec(lVar1,*(undefined4 *)(lVar3 + unaff_x22 + 0x48),0);
    if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar1 = *(long *)(unaff_x19 + 0x48), lVar1 == 0))
    goto LAB_03498224;
    if (*(uint *)(lVar1 + 0x18) <= unaff_w20) break;
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
    if ((((lVar2 == 0) ||
         (lVar1 = FUN_034ca2ec(lVar2,*(undefined4 *)(lVar1 + unaff_x22 + 0x48),0), lVar1 == 0)) ||
        (*(long *)(lVar1 + 0x10) == 0)) ||
       (fVar10 = (float)FUN_06bf4868(*(long *)(lVar1 + 0x10),0), lVar3 == 0)) goto LAB_03498224;
    param_4 = fVar14 + fVar11;
    param_3 = fVar13 + fVar12;
    *(float *)(lVar3 + 0x28) = (fVar8 - fVar9) + fVar10;
    *(float *)(lVar3 + 0x2c) = param_3;
    *(float *)(lVar3 + 0x30) = param_4;
    param_1 = *(long *)(unaff_x19 + 0x28);
    if ((param_1 == 0) || (in_x9 = *(long *)(unaff_x19 + 0x48), in_x9 == 0)) goto LAB_03498224;
  } while (unaff_w20 < *(uint *)(in_x9 + 0x18));
LAB_034982b4:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
LAB_03498250:
  if (uVar5 <= uVar6) goto LAB_034982b4;
  if (((*(long *)(unaff_x19 + 0x28) == 0) ||
      (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar1 == 0)) ||
     (lVar1 = FUN_034ca2ec(lVar1,*puVar7,0), lVar1 == 0)) {
LAB_03498224:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  *(undefined4 *)(lVar1 + 0x20) = 0;
  uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
  uVar6 = uVar6 + 1;
  puVar7 = puVar7 + 0xc;
  if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar6) {
LAB_03498290:
    *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x19 + 0x40);
    return;
  }
  goto LAB_03498250;
}


