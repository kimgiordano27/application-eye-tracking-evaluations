/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.Qpl.Annotation>
ENTRY_POINT: 03498114
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


void System_Array__InternalArray__ICollection_Add<OVRPlugin_Qpl_Annotation>
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,long param_8)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x19;
  uint unaff_w20;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  while( true ) {
    param_2 = param_2 + param_5 * param_4;
    param_7 = param_7 + param_6 * param_4;
    *(float *)(param_8 + 0x44) = param_1 + param_3 * param_4;
    *(float *)(param_8 + 0x48) = param_2;
    *(float *)(param_8 + 0x4c) = param_7;
    do {
      while( true ) {
        lVar6 = *(long *)(unaff_x19 + 0x48);
        unaff_w20 = unaff_w20 + 1;
        unaff_x22 = unaff_x22 + 0x30;
        if (lVar6 == 0) goto LAB_03498224;
        iVar3 = (int)*(ulong *)(lVar6 + 0x18);
        if (iVar3 <= (int)unaff_w20) {
          if (((*(int *)(unaff_x19 + 0x50) != 1) || (*(int *)(unaff_x19 + 0x40) != 0)) ||
             (uVar4 = *(ulong *)(lVar6 + 0x18) & 0xffffffff, iVar3 < 1)) goto LAB_03498290;
          uVar5 = 0;
          puVar7 = (undefined4 *)(lVar6 + 0x48);
          goto LAB_03498250;
        }
        param_6 = (float)FUN_03497df0();
        lVar6 = *(long *)(unaff_x19 + 0x48);
        if (lVar6 == 0) goto LAB_03498224;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_034982b4;
        lVar6 = *(long *)(lVar6 + unaff_x22 + 0x40);
        if (lVar6 == 0) goto LAB_03498224;
        fVar8 = (float)FUN_06bf4868(lVar6,0);
        lVar6 = *(long *)(unaff_x19 + 0x48);
        if (lVar6 == 0) goto LAB_03498224;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_034982b4;
        lVar6 = *(long *)(lVar6 + unaff_x22 + 0x38);
        if (lVar6 == 0) goto LAB_03498224;
        fVar11 = param_2;
        fVar12 = param_7;
        fVar9 = (float)FUN_06bf4868(lVar6,0);
        param_5 = param_2 - fVar11;
        fVar13 = param_7 - fVar12;
        if (*(int *)(unaff_x19 + 0x40) != 1) break;
        if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar6 = *(long *)(unaff_x19 + 0x48), lVar6 == 0))
        goto LAB_03498224;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_034982b4;
        lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
        if (lVar1 == 0) goto LAB_03498224;
        lVar6 = FUN_034ca2ec(lVar1,*(undefined4 *)(lVar6 + unaff_x22 + 0x48),0);
        if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar1 = *(long *)(unaff_x19 + 0x48), lVar1 == 0))
        goto LAB_03498224;
        if (*(uint *)(lVar1 + 0x18) <= unaff_w20) goto LAB_034982b4;
        lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
        if ((((lVar2 == 0) ||
             (lVar1 = FUN_034ca2ec(lVar2,*(undefined4 *)(lVar1 + unaff_x22 + 0x48),0), lVar1 == 0))
            || (*(long *)(lVar1 + 0x10) == 0)) ||
           (fVar10 = (float)FUN_06bf4868(*(long *)(lVar1 + 0x10),0), lVar6 == 0)) goto LAB_03498224;
        param_7 = fVar13 + fVar12;
        param_2 = param_5 + fVar11;
        *(float *)(lVar6 + 0x28) = (fVar8 - fVar9) + fVar10;
        *(float *)(lVar6 + 0x2c) = param_2;
        *(float *)(lVar6 + 0x30) = param_7;
        if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar6 = *(long *)(unaff_x19 + 0x48), lVar6 == 0))
        goto LAB_03498224;
        if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_034982b4;
        lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
        if ((lVar1 == 0) ||
           (lVar6 = FUN_034ca2ec(lVar1,*(undefined4 *)(lVar6 + unaff_x22 + 0x48),0), lVar6 == 0))
        goto LAB_03498224;
        *(float *)(lVar6 + 0x20) = param_6 * *(float *)(unaff_x19 + 0x20);
      }
      param_2 = fVar11;
      param_7 = fVar12;
    } while (*(int *)(unaff_x19 + 0x40) != 0);
    if ((*(long *)(unaff_x19 + 0x28) == 0) || (lVar6 = *(long *)(unaff_x19 + 0x48), lVar6 == 0))
    break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w20) goto LAB_034982b4;
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48);
    if ((lVar1 == 0) ||
       (param_8 = FUN_034ca2ec(lVar1,*(undefined4 *)(lVar6 + unaff_x22 + 0x48),0), param_8 == 0))
    break;
    param_4 = *(float *)(unaff_x19 + 0x20);
    param_1 = *(float *)(param_8 + 0x44);
    param_2 = *(float *)(param_8 + 0x48);
    param_7 = *(float *)(param_8 + 0x4c);
    param_3 = param_6 * (fVar8 - fVar9);
    param_5 = param_6 * param_5;
    param_6 = param_6 * fVar13;
  }
LAB_03498224:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_03498250:
  if (uVar4 <= uVar5) {
LAB_034982b4:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  if (((*(long *)(unaff_x19 + 0x28) == 0) ||
      (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar1 == 0)) ||
     (lVar1 = FUN_034ca2ec(lVar1,*puVar7,0), lVar1 == 0)) goto LAB_03498224;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
  uVar5 = uVar5 + 1;
  puVar7 = puVar7 + 0xc;
  if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar5) {
LAB_03498290:
    *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x19 + 0x40);
    return;
  }
  goto LAB_03498250;
}


